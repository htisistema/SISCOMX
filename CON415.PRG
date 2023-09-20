MEMVAR getlist,nivel_acess,mdata_sis
**** CON415.PRG: Relatorio -> BALANCETE
*********************************************************
FUNCTION con415
***************
LOCAL MPRG:='CON415',;
      t_ini,t_fim,pag,mquantd,mtit,mtipo,opcao,mtipo_rel,mobs_doc:= ' ',;
      mtipo_con,mcliente,mtip_for,mcod_aux,mtot_invest:=0,mtot_fixo:=0,;
      mtot_varia:=0,mtot_cust:=0,mpoint:=0

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),;
        mcodemp:=SPACE(3)

IF ! ver_nivel(mprg,'BALANCETE','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

*------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('sacdesp','cdesp');RETURN NIL;ENDIF
IF ! AbriArq('sacdupp','dupp');RETURN NIL;ENDIF
*------------------------------------------------------------------
******************
SELE('forn');ORDSETFOCUS(1)
******************
op_tela(0,0,06,78," BALANCETE")
WHILE .T.
        exibi_prg(mprg)
        DEVPOS(00,00);DEVOUT("Cod.Empresa:")
        DEVPOS(01,00);DEVOUT("Inicio.....:")
        DEVPOS(02,00);DEVOUT("Final......:")
        DEVPOS(03,00);DEVOUT("Resumo/Geral:")
        DEVPOS(04,00);DEVOUT("Imp.OBS[S/N]:")
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mtot_fixo:=mtot_varia:=mtot_cust:=mpoint:=0
        mtipo_rel := 'G'
        t_ini:=t_fim:=CTOD("  /  /  ")
        @ 00,22 GET mcodemp PICT '999' VALID ver_emp(mcodemp,00,17,,'*') WHEN mmult_emp = 'S'
        @ 01,22 GET t_ini VALID lim_get() WHEN men_get(02,26,'Informe a data inicial do periodo que deseja imprimir')
        @ 02,22 GET t_fim VALID lim_get() WHEN men_get(03,26,'Informe a data final do periodo que deseja imprimir')
        @ 03,22 GET mtipo_rel PICT '@!' VALID lim_get() .AND. mtipo_rel $ 'R,G'  WHEN men_get(04,26,'Informe o [R] para resumo dos dias [G] para todas as duplicatas')
        @ 04,22 GET mobs_doc PICT '@!' VALID mobs_doc $ 'S,N'
        READ
        IF LASTKEY()=27
                CLOSE ALL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF ! imp_arq('DOC_BALA.REL','R')
                LOOP
        ENDIF
        IF t_ini=CTOD("  /  /  ")
                t_ini=CTOD("01/01/90")
        ENDIF
        IF t_fim=CTOD("  /  /  ")
                t_fim=CTOD("31/12/99")
        ENDIF
        mtit := 'BALANCETE'
        ***************************
        SELE('mov');ORDSETFOCUS(1)
        GO TOP
        ***************************
        mov->(DBSEEK(DTOS(t_ini),.T.))
        IF ! EOF()
                WHILE mov->data_s_e <= t_fim .AND. ! EOF()
                        ver_cod(VAL(mov->codigo),,,,,'*')
                        IF SUBSTR(mov->documento,1,2) = 'BL';
                           .OR. mov->ent_sai = 'E';
                           .OR. (mov->cancel = 'C');
                           .OR. (mov->tipo = '03');
                           .OR. mov->cancel = 'C'
                                SKIP
                                LOOP
                        ENDIF
                        mtot_cust := mtot_cust + mov->pr_unit
                        SKIP
                ENDDO
        ENDIF
        *****************
        SELE('dupp');ORDSETFOCUS(3)
        GO TOP
        *****************
        dupp->(DBSEEK(DTOS(t_ini),.T.))
        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        pag=0
        mtipo := DTOC(t_ini)+' a '+DTOC(t_fim)
        mpoint := RECNO()
        i := 0
        FOR i = 1 TO 3
                GO mpoint
                WHILE dupp->datpag <= t_fim .AND. ! EOF()
                        IF pag=0 .OR. PROW()>=59
                                pag=pag+1
                                IF pag>1
                                        EJECT
                                ENDIF
                                cabecalho(pag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT("Cod.  Despesas                                 Tipo Duplicata          Vencim.   D.Pagam     Valor Dup.     Valor Pago   Dias")
                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                        ENDIF
                        IF (EMPTY(dupp->pago));
                           .OR. (! EMPTY(mcodemp) .AND. mcodemp <> dupp->empresa)
                                SKIP
                                LOOP
                        ENDIF
                        verdesp(dupp->tip_for,,,'*')
                        IF i = 1
                                IF cdesp->tipo <> 'I'
                                        SKIP
                                        LOOP
                                ENDIF
                                mtot_invest := mtot_invest + dupp->vlpago
                        ELSEIF i = 2
                                IF cdesp->tipo <> 'F'
                                        SKIP
                                        LOOP
                                ENDIF
                                mtot_fixo := mtot_fixo + dupp->vlpago
                        ELSEIF i = 3
                                IF cdesp->tipo <> 'V'
                                        SKIP
                                        LOOP
                                ENDIF
                                mtot_varia := mtot_varia + dupp->vlpago
                        ENDIF
                        IF mtipo_rel = 'G'
                                DEVPOS(PROW()+1,00);DEVOUT(dupp->fornec)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(dupp->cliente+"  "+dupp->tip_for)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(dupp->tipo+dupp->duplicata)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(DTOC(dupp->venc))
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(DTOC(dupp->datpag))
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(dupp->valor,"@E 99,999,999.99"))
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(dupp->vlpago,"@E 99,999,999.99"))
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(dupp->venc-mdata_sis,"9999"))
                                IF mobs_doc = 'S' .AND. ! EMPTY(dupp->obs)
                                        DEVPOS(PROW()+1,00);DEVOUT('OBS.: '+dupp->obs)
                                ENDIF
                        ENDIF
                        SKIP
                ENDDO
                IF i = 3
                        DEVPOS(PROW()+1,00);DEVOUT('      Custo da Mecadoria Vendida')
                        DEVPOS(PROW(),100);DEVOUT(TRANSFORM(mtot_cust,'999,999,999.99'))
                ENDIF


                DEVPOS(PROW()+1,00);DEVOUT(REPLI('*',132))
                IF i = 1
                        DEVPOS(PROW()+1,00);DEVOUT('Total de Investimento R$....: '+TRANSFORM(mtot_invest,'999,999,999.99'))
                ELSEIF i = 2
                        DEVPOS(PROW()+1,00);DEVOUT('Total de Custos FIXOS R$....: '+TRANSFORM(mtot_fixo,'999,999,999.99'))
                ELSEIF i = 3
                        DEVPOS(PROW()+1,00);DEVOUT('Total de Custos VARIAVEIS R$: '+TRANSFORM(mtot_varia,'999,999,999.99'))
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('*',132))
        NEXT
        IF PROW() > 53
                EJECT
                pag=pag+1
                cabecalho(pag,mtit,mtipo,mprg)
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+2,00);DEVOUT("*** RESUMO FINAL ***")
                DEVPOS(PROW()+1,00);DEVOUT(' ')
*               DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos Pagos no Periodo: "+TRANSFORM(tot_g,"9999")+" - "+ltrim(TRANSFORM(tot_gin,"@E 999,999,999,999.99")))
                DEVPOS(PROW()+2,00);DEVOUT(time())
        ELSE
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+2,00);DEVOUT("*** RESUMO FINAL ***")
*               DEVPOS(PROW()+2,00);DEVOUT("Total de Documentos Pagos no Periodo: "+TRANSFORM(tot_g,"9999")+" - "+ltrim(TRANSFORM(tot_gin,"@E 999,999,999,999.99")))
                DEVPOS(PROW()+2,00);DEVOUT(time())
        ENDIF
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('DOC_BALA.REL')
        /*
        IF mimp_tipo = 2
                lertexto('DOC_BALA.REL')
        ELSEIF mtipo_imp = 'D'
                
        ELSE
                MYRUN('DOSPRINTER /RAW /DEL '+ALLTRIM(m_indiv[1,5])+'HTI.REL')
        ENDIF
        */
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M ***************************

