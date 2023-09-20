************************************
* ESTATISTICA DE PEDIDOS
************************************
MEMVAR mdata_sis,nivel_acess,getlist

FUNCTION sac5pe14(mcod)
**************
LOCAL MPRG:='SAC5PE14',;
      tela,opcao,mdata1,mdata2,mtot_ped,mtot_dia,mtot_geral,;
      mnum_ped,mdat_ped,msit,mopcao,mcod_aux,mtot_vol,mcod_ven,;
      mtipo_cons:=' ',ali,no,msele,morde,mcod_vend:=0,;
      mcont_cli:=0,li,ci,la,ca,mdata_dia,i,mqtd_tot,m_mes:={},m_mes1:={},mdata_aux

PRIVATE mtraco,telaprint,mtit,mtipo,mpag,mcliente,mcgc,mcpf,mcod_cli,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,'RELATORIO DE PEDIDO P/CLIENTE','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('=',80)

li := ci := 0
la := 08
ca := 75
*----------------------------------------------------------------------------
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacorcam','orcam');RETURN NIL;ENDIF
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
mtipo_cons := 'P'
op_tela(li,ci,la+2,ca,'RELATORIO DE PEDIDO P/CLIENTE')
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        opcao := mcod_vend := mcod_cli := 0
        IF mcod <> NIL
                mcod_cli := mcod
        ENDIF
        mtipo_imp := m_indiv[1,18]
        mdata1 := mdata2 := mdata_sis
        mcliente := SPACE(30)
        mso_resumo := 'N'
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(li+1,ci+2);DEVOUT('Tipo Consulta [P]edido ou [O]rcamento:')
        DEVPOS(li+2,ci+2);DEVOUT('Vendedor Resp..:')
        DEVPOS(li+3,ci+2);DEVOUT('Data Inicial...:')
        DEVPOS(li+4,ci+2);DEVOUT('Data Final.....:')
        @ li+1,ci+41 GET mtipo_cons PICT '@!' VALID mtipo_cons $ 'P,O'
        @ li+2,ci+19 GET mcod_vend PICT '999' WHEN mcod = NIL VALID ven(mcod_vend,li+3,ci+25)
        @ li+3,ci+19 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ li+4,ci+19 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        setcor(10)
        @ li+7,ci+7 PROMPT ' Aberto ' MESSAGE '** Listagem de Pedidos em Aberto - <ESC> Retornar **'
        @ li+7,ci+25 PROMPT ' Pagos ' MESSAGE '** Listagem de Pedidos Pagos - <ESC> Retornar **'
        @ li+7,ci+43 PROMPT ' Geral ' MESSAGE '** Listagem de Pedidos em Geral (Aberto e Pagos) - <ESC> Retornar **'
        SET INTEN ON
        MENU TO opcao
        setcor(1)

        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF mtipo_cons = 'P'
                ali := 'ped_s'
                no  := 'noped'
        ELSE
                ali := 'orcam'
                no  := 'noorc'
        ENDIF
        ****************
        SELE(ali);ORDSETFOCUS(2)
        GO TOP
        ****************
        (ali)->(DBSEEK(DTOS(mdata1),.T.))
        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
        ENDIF
        mopcao := 'S'
        IF ! EMPTY(mcod_cli)
                mopcao := op_simnao('S','Confirma a Impressao:')
        ENDIF
        IF mopcao = 'N'
                LOOP
        ENDIF
        ASIZE(m_mes,0)
        ASIZE(m_mes1,0)
        mdata_aux := mdata1
        AADD(m_mes,SUBSTR(DTOC(mdata1),4,5))
        AADD(m_mes1,{0,0,0})
        WHILE mdata_aux <= mdata2
                mdata_aux := mdata_aux + 1
                IF ASCAN(m_mes,SUBSTR(DTOC(mdata_aux),4,5)) = 0
                        AADD(m_mes,SUBSTR(DTOC(mdata_aux),4,5))
                        AADD(m_mes1,{0,0,0})
                ENDIF
        ENDDO
        mtit  :=  'Relatorio de ESTATISTICA de Pedidos p/Cliente'
        mtipo := 'Periodo de '+DTOC(mdata1)+' a '+DTOC(mdata2)
        IF ! imp_arq('CLI_PED.REL','R')
                LOOP
        ENDIF
        mpag := mtot_geral := mqtd_tot := mcont_cli :=0
        ****************
        SELE(ali);ORDSETFOCUS(2)
        GO TOP
        ****************
        (ali)->(DBSEEK(DTOS(mdata1),.T.))
        WHILE (ali)->pdat_ped <= mdata2 .AND. ! EOF()
                prog_imp(RECNO(),DTOC((ali)->pdat_ped))
                IF (! EMPTY(mcod_vend) .AND. STRZERO(mcod_vend,3) <> ped_s->pcod_vend)
                        SKIP;LOOP
                ELSEIF opcao = 1 .AND. ((ali)->ppag == 'C' .OR. (ali)->ppag == '*')
                        SKIP;LOOP
                ELSEIF opcao = 2 .AND. ((ali)->ppag == 'C' .OR. (ali)->ppag == ' ')
                        SKIP;LOOP
                ELSEIF opcao = 4 .AND. ((ali)->ppag == '*' .OR. (ali)->ppag == ' ')
                        SKIP;LOOP
                ENDIF
                mdat_ped := (ali)->pdat_ped
                mcod_cli := (ali)->pcod_cli
                mnum_ped := (ali)->pnum_ped
                mcod_ven := (ali)->pcod_vend
                mtot_ped := 0
                IF (ali)->ppag = '*'
                        msit := DTOC((ali)->pdatapag)
                ELSEIF (ali)->ppag = 'C'
                        msit := 'cancel. '
                ELSE
                        msit := 'aberto  '
                ENDIF
                WHILE mnum_ped = (ali)->pnum_ped .AND. ! EOF()
                        mtot_ped := mtot_ped + ((ali)->pquantd * (ali)->pvlr_fat)
                        SKIP
                ENDDO
                IF msit = 'cancel.'
                        mtot_ped := 0
                ELSE
                        mqtd_tot := mqtd_tot + 1
                        mtot_geral := mtot_geral + mtot_ped
                        m_mes1[ASCAN(m_mes,SUBSTR(DTOC(mdat_ped),4,5)),1] := m_mes1[ASCAN(m_mes,SUBSTR(DTOC(mdat_ped),4,5)),1] + 1
                        m_mes1[ASCAN(m_mes,SUBSTR(DTOC(mdat_ped),4,5)),2] := m_mes1[ASCAN(m_mes,SUBSTR(DTOC(mdat_ped),4,5)),2] + mtot_ped
                ENDIF
        ENDDO
        mpag = mpag +1
        cabecalho(mpag,mtit,mtipo,mprg)
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+1,00);DEVOUT('Mes/Ano')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Qtd.Pedido')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Media Ped.')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Valor Total R$')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        i := 0
        FOR i = 1 TO LEN(m_mes)
                IF EMPTY(m_mes1[i,2])
                        LOOP
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(' '+m_mes[i]+' ')
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(m_mes1[i,1],'99,999,999'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(m_mes1[i,2]/m_mes1[i,1],'999,999.99'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(m_mes1[i,2],'999,999,999.99'))
        NEXT
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT('Qtd.Total de Pedidos......:    '+TRANSFORM(mqtd_tot,'999,999,999'))
        DEVPOS(PROW()+1,00);DEVOUT('Total dos Pedidos R$......: '+TRANSFORM(mtot_geral,'999,999,999.99'))
        DEVPOS(PROW()+1,00);DEVOUT('Media Total dos Pedidos R$: '+TRANSFORM(mtot_geral/mqtd_tot,'999,999,999.99'))
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('CLI_PED.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
