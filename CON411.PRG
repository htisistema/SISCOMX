MEMVAR getlist,nivel_acess,mdata_sis
*********************************************************
**** CON411.PRG: Relatorio -> Duplicatas EMITIDAS (CONTAS APAGAR)
*********************************************************

FUNCTION con411
***************
LOCAL MPRG:='CON411',;
      tela,t_ini,t_fim,mod,td_mes,tp_mes,pag,mcod_vend,;
      vencer,vencidas,t_vencer,t_vencidas,tot,tot_g,tot_din,tot_gin,l_mes,tt,;
      xxx,mtit,mtipo,mtip,mdia,mt_dia,opcao,mquantd,mtipo_doc,;
      mfo,mfv,mvv,mad,mtr,mfi,mdv,mnf,mbanco:=SPACE(3),mtp_pg:=' '

PRIVATE mfornece,muf,mcod_for,mtipo_conta,mnome_vend,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcodemp:=SPACE(3)

IF ! ver_nivel(mprg,'CONTA APAGAR (RELATORIO DE DOCUMENTOS RECEBIDOS)','1456',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

*---------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacdupp','dupp');RETURN NIL;ENDIF
*---------------------------------------------------------------------
****************
SELE('forn');ORDSETFOCUS(1)
****************
op_tela(10,20,20,80," Documentos RECEBIDOS ")

WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        @ 00, 00 SAY "Cod.Empresa:"
        @ 01, 00 SAY "Fornecedor.:"
        @ 02, 00 SAY "Inicio.....:"
        @ 03, 00 SAY "Final......:"
        @ 04, 00 SAY "Tipo Doc...:"
        @ 05, 00 SAY 'Tipo Conta.:'
        @ 06, 00 SAY 'So Doc.Ent.:'
        @ 07, 00 SAY 'No.Banco...:'
        @ 08, 00 SAY 'Tip.Pagam..:'
        mensagem('Preencha os Campos - <ESC> Sair')
        mbanco := SPACE(3)
        mtipo_conta := SPACE(4)
        mtipo_doc := SPACE(2)
        mcod_for := mcod_vend := mod := 0
        t_ini := t_fim := CTOD("  /  /  ")
        mnf := 'N'
        mtp_pg := ' '
        @ 00,13 GET mcodemp pict "999" VALID ver_emp(mcodemp,00,17,,'*') WHEN mmult_emp = 'S'
        @ 01,13 GET mcod_for pict "9999" VALID v_fornece(mcod_for,01,18) 
        @ 02,13 GET t_ini 
        @ 03,13 GET t_fim 
        @ 04,13 GET mtipo_doc PICT '@!' 
        @ 05,13 GET mtipo_conta PICT '@! X.XX' VALID verdesp(mtipo_conta,05,17) WHEN EMPTY(mcod_for) 
        @ 06,13 GET mnf PICT '@!' VALID mnf $ 'S,N'
        @ 07,13 GET mbanco PICT '@!'
        @ 08,13 GET mtp_pg PICT '@!' WHEN men_get(2,38,'Deixar em branco ou preencha com o tipo de pagamento que desajar')
        READ
        IF LASTKEY()=27
                CLOSE ALL
                EXIT
        ENDIF
        mtit := "DUPLICATAS RECEBIDAS (Contas a Pagar)"
        mensagem('Aguarde o final da Impressao - [ESC] Sair')
        IF ! imp_arq('CONT_APAG.REL','R')
                LOOP
        ENDIF
        td_mes:= tp_mes := 0    && tot. pagar no mes
        IF t_ini = CTOD("  /  /  ") .OR. t_fim = CTOD('  /  /  ')
                t_ini=CTOD("11/11/11")
                t_fim=CTOD("31/12/99")
        ENDIF
        *****************
        SELE('dupp');ORDSETFOCUS(5)
        GO TOP
        *****************
        dupp->(DBSEEK(DTOS(t_ini),.T.))
        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        pag:=vencer:=vencidas:=t_vencer:=t_vencidas:=tot:=tot_g:=tot_din:=;
        tot_gin:=mt_dia := 0
        SET DATE brit
        l_mes=SUBSTR(DTOC(dupp->venc),4,5)
        mdia := dupp->venc
        mtipo := DTOC(t_ini)+' a '+DTOC(t_fim)
        IF ! EMPTY(mtp_pg)
                mtipo := mtipo + 'Tipo Pag.: '+mtp_pg
        ENDIF
        WHILE ! EOF() .AND. dupp->emissao<=t_fim
                mfornece := SPACE(30)
                prog_imp(RECNO(),DTOC(dupp->emissao))
               
                IF pag=0 .OR. PROW()>=59
                        pag=pag+1
                        IF pag>1
                                EJECT
                        ENDIF
                        cabecalho(pag,mtit,mtipo)
                        imprt(mtipo_imp,'C')
                        IF mcod_vend > 0
                                DEVPOS(PROW()+1,00);DEVOUT('Vendedor: '+STRZERO(mcod_vend,3)+' - '+mnome_vend)
                                DEVPOS(PROW(),00);DEVOUT('          '+STRZERO(mcod_vend,3)+' - '+mnome_vend)
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT("Cod. Fornecedor                               Documento    Banco/Agencia        Emissao    Vencim          Valor  Situacao         ST")
                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                        DEVPOS(PROW()+1,00);DEVOUT(l_mes)
                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                ENDIF
                IF (! EMPTY(mcod_for) .AND. dupp->fornec<>STRZERO(mcod_for,4));
                   .OR. (! EMPTY(mtipo_doc) .AND. mtipo_doc <> dupp->tipo);
                   .OR. (mnf='S' .AND. EMPTY(dupp->num_ped));
                   .OR. (! EMPTY(mbanco) .AND. mbanco <> dupp->numero);
                   .OR. (! EMPTY(mtp_pg) .AND. mtp_pg <> dupp->tp_pg);
                   .OR. (! EMPTY(mcodemp) .AND. mcodemp <> dupp->empresa)
                        SKIP
                        LOOP
                ENDIF
                IF ! EMPTY(SUBSTR(mtipo_conta,1,1))
                        IF SUBSTR(mtipo_conta,1,1) <> SUBSTR(dupp->tip_for,1,1)
                                SKIP
                                LOOP
                        ENDIF
                        IF ! EMPTY(SUBSTR(mtipo_conta,3)) .AND. SUBSTR(mtipo_conta,3) <> SUBSTR(dupp->tip_for,3)
                                SKIP
                                LOOP
                        ENDIF
                ENDIF
                IF l_mes<>SUBSTR(DTOC(dupp->venc),4,5) .AND. ! EOF()
                        DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos: "+transform(tot,"9999")+" - "+ltrim(transform(tot_din,"@E 99,999,999.99")))
                        tot=0
                        tot_din=0
                        l_mes=SUBSTR(DTOC(dupp->venc),4,5)
                        DEVPOS(PROW()+1,00);DEVOUT(l_mes)
                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                        LOOP
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(dupp->fornec)
                DEVPOS(PROW(),PCOL()+1);DEVOUT(dupp->cliente)
                DEVPOS(PROW(),PCOL()+1);DEVOUT(dupp->tipo+dupp->duplicata)
                DEVPOS(PROW(),PCOL()+1);DEVOUT('                    ')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(DTOC(dupp->emissao))
                DEVPOS(PROW(),PCOL()+1);DEVOUT(DTOC(dupp->venc))
                DEVPOS(PROW(),PCOL()+1);DEVOUT(transform(dupp->valor,"@E 999,999,999.99"))
                IF dupp->pago = 'B'
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('  Paga em '+DTOC(dupp->datpag))
                ELSE
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('  A vencer:'+transform(dupp->venc-mdata_sis,"9999")+' dias')
                ENDIF
                DEVPOS(PROW(),PCOL()+1);DEVOUT(dupp->tp_pg)
                IF PROW()>=59
                        pag=pag+1
                        IF pag>1
                                EJECT
                        ENDIF
                        cabecalho(pag,mtit,mtipo)
                        imprt(mtipo_imp,'C')
                        IF mcod_vend > 0
                                DEVPOS(PROW()+1,00);DEVOUT('Vendedor: '+STRZERO(mcod_vend,3)+' - '+mnome_vend)
                                DEVPOS(PROW(),00);DEVOUT('          '+STRZERO(mcod_vend,3)+' - '+mnome_vend)
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT("Cod. Fornecedor                               Documento    Banco/Agencia        Emissao    Vencim          Valor  Situacao         ST")
                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                        DEVPOS(PROW()+1,00);DEVOUT(l_mes)
                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                ENDIF
                IF ! EMPTY(dupp->obs)
                        DEVPOS(PROW()+1,00);DEVOUT('Obs.: '+dupp->obs)
                ENDIF
                tot=tot+1
                tot_g=tot_g+1
                tot_din=tot_din+dupp->valor
                tot_gin=tot_gin+dupp->valor
                mt_dia := mt_dia + dupp->valor
                SKIP
                IF mdia <> dupp->venc
                        DEVPOS(PROW()+1,85);DEVOUT('              --------------')
                        DEVPOS(PROW()+1,70);DEVOUT('Total do Vencimento '+DTOC(mdia)+':')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
                        ? REPLICATE("-",137)
                        mt_dia := 0
                        mdia := dupp->venc
                ENDIF

                IF l_mes<>SUBSTR(DTOC(dupp->venc),4,5) .AND. ! EOF()
                        DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos: "+transform(tot,"9999")+" - "+ltrim(transform(tot_din,"@E 99,999,999.99")))
                        tot=0
                        tot_din=0
                        l_mes=SUBSTR(DTOC(dupp->venc),4,5)
                        DEVPOS(PROW()+1,00);DEVOUT(l_mes)
                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                ENDIF
        ENDDO
        DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos: "+transform(tot,"9999")+" - "+ltrim(transform(tot_din,"@E 999,999,999,999.99")))
        IF PROW() >= 55
                EJECT
                pag=pag+1
                cabecalho(pag,mtit,mtipo)
        ENDIF
        ?
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+2,00);DEVOUT("*** RESUMO FINAL ***")
        DEVPOS(PROW()+1,00);DEVOUT(' ')
        IF mod=2
                DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos Vencidos no Periodo: "+transform(tot_g,"9999")+" - "+ltrim(transform(tot_gin,"@E 999,999,999,999.99")))
        ELSE
                DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos a Vencer no Periodo: "+transform(tot_g,"9999")+" - "+ltrim(transform(tot_gin,"@E 999,999,999,999.99")))
        ENDIF
        DEVPOS(PROW()+1,00);DEVOUT(' ')
        DEVPOS(PROW()+1,00);DEVOUT(time())
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('CONT_APAG.REL')
        LOOP
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* F I M *******************************

