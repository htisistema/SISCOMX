**************************
* LISTAGEM PRODUTO SEM MOVIMENTO
**************************
MEMVAR getlist,mdata_sis,nivel_acess

FUNCTION sac59
**************
LOCAL MPRG:='SAC59',;
      lba,cba,opcao,mdata1,mdata2,mpag,mtit,mtipo,;
      mtot_prod,msaldo,mvlr_prod:=0,mcust_zero:='S'

PRIVATE mtraco,mgrupo,mcod_forn:=0,mfornece,msub_grupo,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),cons_merc:={},cont_m:=0,;
        cons_mov:={}

IF ! ver_nivel(mprg,'RELATORIO DE PRODUTOS SEM MOVIMENTO','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('=',80)

lba := 06
cba := 75
op_tela(10,10,20,85,' Produto sem Movimento ')
WHILE .T.
        limpa(00,00,30,90)
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mdata1 := CTOD('  /  /  ')
        mdata2 := mdata_sis
        mgrupo := mcod_forn := msub_grupo := mcod_ven := 0
        msaldo := mcust_zero := 'N'
	mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(1,2);DEVOUT('Data Inicial..................................:')
        DEVPOS(2,2);DEVOUT('Data Final....................................:')
        DEVPOS(3,2);DEVOUT('Codigo Grupo..................................:')
        DEVPOS(4,2);DEVOUT('Codigo Sub-Grupo..............................:')
        DEVPOS(5,2);DEVOUT('Codigo Fornecedor.............................:')
        DEVPOS(6,2);DEVOUT('Codigo Vendedor...............................:')
        DEVPOS(7,2);DEVOUT('Imprimir Saldo com ZERO [S/N].................:')
        //DEVPOS(8,2);DEVOUT('So Mercadoria c/ Vlr.Custo Real com ZERO [S/N]:')

        @ 1,51 GET mdata1 VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 2,51 GET mdata2 VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ 3,51 GET mgrupo PICT '999' VALID ver_gru(@mgrupo,3,27,.F.)
        @ 4,51 GET msub_grupo PICT '99' WHEN ! EMPTY(mgrupo) VALID ver_sgru(mgrupo,msub_grupo,4,27)
        @ 5,51 GET mcod_forn PICT '9999' VALID v_fornece(mcod_forn,5,28)
        @ 6,51 GET mcod_ven PICT '999' VALID IF(EMPTY(mcod_ven),.T.,ven(mcod_ven,6,55))
        @ 7,51 GET msaldo PICT '@!' VALID msaldo $ 'S,N'
        //@ 8,51 GET mcust_zero PICT '@!' VALID mcust_zero $ 'S,N'
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                EXIT
        ENDIF
        IF ! imp_arq('SEM_MOV.REL','R')
                LOOP
        ENDIF
        cons_merc:={}
        cComm  := "SELECT * FROM sacmerc WHERE cod_merc IS NOT NULL AND (descont = 'N' OR descont IS NULL OR descont = ' ')"
        IF ! EMPTY(mgrupo) .AND.  ! EMPTY(msub_grupo)
                cComm  := ccomm + " AND gru_sub = "+sr_cdbvalue(STRZERO(mgrupo,3)+STRZERO(msub_grupo,2))
        ELSEIF ! EMPTY(mgrupo)
                ccomm := ccomm + " AND gru_sub LIKE "+sr_cdbvalue(STRZERO(mgrupo,3)+'%')
        ENDIF
        IF msaldo = 'N'
                ccomm := ccomm + " AND saldo_mer > "+sr_cdbvalue(0)
        ENDIF
        IF ! EMPTY(mcod_forn)
                ccomm := ccomm + " AND cod_fab = "+sr_cdbvalue(STRZERO(mcod_forn,4))
        ENDIF
        //IF mcust_zero = 'S'
        //        ccomm := ccomm + " AND (cust_real IS NULL OR cust_real = 0)"
        //ENDIF

        ccomm  := ccomm + " ORDER BY merc"

        sr_getconnection():exec(ccomm,,.t.,@cons_merc)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_merc) = 0
                atencao('Nao existe produto com esses filtro !!!')
                LOOP
        ENDIF
        mtot_prod := 0
        mpag = 0
        IF ! EMPTY(mgrupo)
                mtit := 'Listagem de Produtos sem Movimento do GRUPO: '+STRZERO(mgrupo,3)
        ELSE
                mtit := 'Listagem de Produtos sem Movimento'
        ENDIF
        IF ! EMPTY(msub_grupo)
                mtit := mtit + ' Sub-Grupo:'+STRZERO(msub_grupo,2)
        ENDIF
        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
        IF ! EMPTY(mcod_ven)
                mtipo := mtipo + " Vededor: "+STRZERO(mcod_ven,3)
        ENDIF

        cont_m:=0
        FOR cont_m = 1 TO LEN(cons_merc)
                prog_imp(cont_m,cons_merc[cont_m,8]+'-'+cons_merc[cont_m,9])
                IF mpag = 0 .OR. PROW() >= 60
                        mpag ++
                        IF mpag > 1
                                EJECT
                        ENDIF
                        cabecalho(mpag,mtit,mtipo,mprg)
                        DEVPOS(PROW()+1,00);DEVOUT('Cod.')
                        DEVPOS(PROW(),06);DEVOUT('Produto')
                        //DEVPOS(PROW(),46);DEVOUT('Ult.Saida')
                        DEVPOS(PROW(),57);DEVOUT('Saldo')
                        DEVPOS(PROW(),69);DEVOUT('Pr.de Venda')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                cons_mov:={}
                cComm  := "SELECT data_s_e FROM sacmov WHERE codigo = "+sr_cdbvalue(cons_merc[cont_m,8])+" AND data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)
                IF ! EMPTY(mcod_ven)
                        ccomm := ccomm + " AND cod_vend = "+sr_cdbvalue(STRZERO(mcod_ven,3))
                ENDIF
                sr_getconnection():exec(ccomm,,.t.,@cons_mov)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_mov) > 0
                        LOOP
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(cons_merc[cont_m,8])
                DEVPOS(PROW(),06);DEVOUT(LEFT(cons_merc[cont_m,9],30))
                //DEVPOS(PROW(),47);DEVOUT(cons_merc[cont_m,32])
                DEVPOS(PROW(),57);DEVOUTPICT(cons_merc[cont_m,56],'99999.99')
                DEVPOS(PROW(),67);DEVOUTPICT(cons_merc[cont_m,46],'99,999,999.99')
                mtot_prod ++
                mvlr_prod := mvlr_prod + (cons_merc[cont_m,56]*cons_merc[cont_m,46])
        NEXT
        IF PROW() >= 55
                mpag ++
                EJECT
                cabecalho(mpag,mtit,mtipo,mprg)
                DEVPOS(PROW()+1,00);DEVOUT('Cod.')
                DEVPOS(PROW(),06);DEVOUT('Produto')
                //DEVPOS(PROW(),46);DEVOUT('Ult.Saida')
                DEVPOS(PROW(),57);DEVOUT('Saldo')
                DEVPOS(PROW(),69);DEVOUT('Pr.de Venda')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        ENDIF
        DEVPOS(PROW()+2,00);DEVOUT('Quantidade de Produto sem Movimento:')
        DEVPOS(PROW(),PCOL()+1);DEVOUT(STRZERO(mtot_prod,6))
        //DEVPOS(PROW()+1,00);DEVOUT('Valor Total dos Produtos...........:')
        //DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mvlr_prod,'9,999,999.99'))
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('SEM_MOV.REL')
        /*
        IF mimp_tipo = 2
                lertexto('SEM_MOV.REL')
        ELSEIF mtipo_imp = 'D'
                
        ELSE
                MYRUN('DOSPRINTER /RAW /DEL '+ALLTRIM(m_indiv[1,5])+'HTI.REL')
        ENDIF
        */
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M **************************************
