MEMVAR getlist,nivel_acess,mdata_sis
**** CON413.PRG: Relatorio -> RECIBO DE PAGAMENTO (APAGAR)
*********************************************************
FUNCTION con418
***************
LOCAL MPRG:='CON418',;
      t_ini,t_fim,pag,tot,tot_g,tot_din,tot_gin,mquantd,;
      mtit,mtipo,opcao,mfornec,mpoint

PRIVATE mbanco,mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,'CONTA APAGAR (RECIBO DE PAGAMENTO)','13456',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
*------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacdupp','dupp');RETURN NIL;ENDIF
*------------------------------------------------------------------
op_tela(00,00,03,45,'(RECIBO DE PAGAMENTO)')
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        @ 00,00 SAY 'Data Inicial..:'
        @ 01,00 SAY 'Data Final....:'
        mbanco := SPACE(3)
        mensagem('Digite a data que deseja emitir os recibos - [ESC] p/retornar')
        t_ini=mdata_sis
        t_fim=mdata_sis
        @ 00,16 GET t_ini 
        @ 01,16 GET t_fim 
        READ
        IF LASTKEY()=27
                CLOSE ALL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        opcao := op_simnao('S','Confirma a impressao:')
        IF opcao = 'N'
                LOOP
        ENDIF
        mensagem('Aguarde o final da Impressao - [ESC] Sair')
        *****************
        SELE('dupp');ORDSETFOCUS(2)
        DBSETFILTER({|| (dupp->venc <= t_fim  .AND. dupp->venc >= t_ini) .AND. dupp->pago <> 'B'})
        GO TOP
        *****************
        IF ! imp_arq('HTI.REL','R')
                LOOP
        ENDIF
        pag:=tot:=tot_g:=tot_din:=tot_gin:=0
        mtit := "RECIBOS DAS DUPLICATA (Contas a Pagar)"
        mtipo := DTOC(t_ini)+' a '+DTOC(t_fim)
        mfornec := dupp->fornec
        WHILE ! EOF()
                prog_imp(RECNO())
                IF pag=0 .OR. PROW()>=59
                        pag=pag+1
                        IF pag>1
                                EJECT
                        ENDIF
                        mtit := "RECIBOS DAS DUPLICATA (Contas a Pagar)"
                        cabecalho(pag,mtit,mtipo)
                        imprt(mtipo_imp,'C',1)
                        ?? "Cod. Fornecedor                                 Duplicata                           Emissao   Vencim               Valor"
                        ? REPLICATE("=",137)
                ENDIF
                IF dupp->fornec<>mfornec
                        IF PROW() > 28
                                DEVPOS(PROW()+1,74);DEVOUT("                            ------------------")
                                DEVPOS(PROW()+1,74);DEVOUT("Valor Total A PAGAR: "+TRANSFORM(tot,"9999")+" - "+TRANSFORM(tot_din,"@E 999,999,999,999.99"))
                                DEVPOS(PROW(),74);DEVOUT("                     "+TRANSFORM(tot,"9999")+" - "+TRANSFORM(tot_din,"@E 999,999,999,999.99"))
                                DEVPOS(59,00);DEVOUT(REPLI("-",137))
                                EJECT
                                mfornec := dupp->fornec
                                tot=0
                                tot_din=0
                                IF ! EOF()
                                        cabecalho(pag,mtit,mtipo)
                                        imprt(mtipo_imp,'C',1)
                                        ?? "Cod. Fornecedor                                 Duplicata                           Emissao   Vencim               Valor"
                                        ? REPLICATE("=",137)
                                ELSE
                                        LOOP
                                ENDIF
                        ELSE
                                DEVPOS(PROW()+1,74);DEVOUT("                            ------------------")
                                DEVPOS(PROW()+1,74);DEVOUT("Valor Total A PAGAR: "+TRANSFORM(tot,"9999")+" - "+TRANSFORM(tot_din,"@E 999,999,999,999.99"))
                                DEVPOS(PROW(),74);DEVOUT("                     "+TRANSFORM(tot,"9999")+" - "+TRANSFORM(tot_din,"@E 999,999,999,999.99"))
                                DEVPOS(28,00);DEVOUT(REPLI("-",137))
                                mfornec := dupp->fornec
                                tot=0
                                tot_din=0
                                IF ! EOF()
                                        DEVPOS(PROW()+2,00);DEVOUT(' ')
                                        cabecalho(pag,mtit,mtipo)
                                        imprt(mtipo_imp,'C',1)
                                        ?? "Cod. Fornecedor                                 Duplicata                           Emissao   Vencim               Valor"
                                        ? REPLICATE("=",137)
                                ELSE
                                        LOOP
                                ENDIF
                        ENDIF
                ENDIF
                ? dupp->fornec+" "
                mpoint := RECNO()
                ver_fab(VAL(dupp->fornec),PROW(),PCOL(),'*')
                GO mpoint
                DEVPOS(PROW(),PCOL()+3);DEVOUT(dupp->duplicata+" ")
                mpoint := RECNO()
                mbanco := VAL(dupp->banco)
*               bank('*')
                GO mpoint
                ?? SPACE(25)
                ?? DTOC(dupp->emissao)+" "
                ?? DTOC(dupp->venc)+" "
                ?? TRANSFORM(dupp->valor,"@E 999,999,999,999.99")+" "
*               ?? TRANSFORM(dupp->venc-mdata_sis,"9999")
                tot=tot+1
                tot_g=tot_g+1
                tot_din=tot_din+dupp->valor
                tot_gin=tot_gin+dupp->valor
                SKIP
        ENDDO
        IF tot > 0
                IF PROW() > 28
                        DEVPOS(PROW()+1,74);DEVOUT("                            ------------------")
                        DEVPOS(PROW()+1,74);DEVOUT("Valor Total A PAGAR: "+TRANSFORM(tot,"9999")+" - "+TRANSFORM(tot_din,"@E 999,999,999,999.99"))
                        DEVPOS(PROW(),74);DEVOUT("                     "+TRANSFORM(tot,"9999")+" - "+TRANSFORM(tot_din,"@E 999,999,999,999.99"))
                        DEVPOS(59,00);DEVOUT(REPLI("-",137))
                        tot=0
                        tot_din=0
                ELSE
                        DEVPOS(PROW()+1,74);DEVOUT("                            ------------------")
                        DEVPOS(PROW()+1,74);DEVOUT("Valor Total A PAGAR: "+TRANSFORM(tot,"9999")+" - "+TRANSFORM(tot_din,"@E 999,999,999,999.99"))
                        DEVPOS(PROW(),74);DEVOUT("                     "+TRANSFORM(tot,"9999")+" - "+TRANSFORM(tot_din,"@E 999,999,999,999.99"))
                        DEVPOS(28,00);DEVOUT(REPLI("-",137))
                        tot=0
                        tot_din=0
                ENDIF
        ENDIF
        EJECT
        pag=pag+1
        cabecalho(pag,mtit,mtipo)
        imprt(mtipo_imp,'N',1)
        ? "*** RESUMO FINAL ***"
        ?
        ? "Total de Duplicatas: "+TRANSFORM(tot_g,"9999")+" - "+ltrim(TRANSFORM(tot_gin,"@E 999,999,999,999.99"))
        ?
        ? time()
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('HTI.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M ***************************

