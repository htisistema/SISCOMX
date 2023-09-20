MEMVAR getlist,nivel_acess
*********************************************************
**** CON426.PRG: Relatorio -> Documentos TRANSFERIDOS (conta a receber)
*********************************************************

FUNCTION con426
***************
LOCAL MPRG:='CON426',;
      tela,t_ini,t_fim,pag,mcod_vend,mcod_ope,;
      mfornec,tot,tot_g,tot_gin,;
      mtit,mtipo,mtip,opcao,mquantd,mt_doc,i

PRIVATE mcliente,mcgc,mcpf,mcod_cli,bank,mnome_vend,mcom_ven,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),;
        marq_prin,mimp_rel,mporta_imp,mcodemp:=SPACE(3),cons_cli:={}

IF ! ver_nivel(mprg,'CONTA A RECEBER (RELATORIO DE DOCUMENTOS TRANSFERIDOS)','156',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
*---------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
//
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
*---------------------------------------------------------------------
****************
SELE('cli');ORDSETFOCUS(1)
****************
op_tela(13,02,20,78," Documentos Transferidos ")
@ 00,03 SAY "Codigo da Empresa........:"
@ 01,03 SAY "Codigo do Cliente........:"
@ 02,03 SAY "Codigo do Vendedor.......:"
@ 03,03 SAY "Codigo do Operador.......:"
@ 04,03 SAY "Pag.em [C]arteira [B]anco:"
@ 05,03 SAY "Data do Inicio...........:"
@ 06,03 SAY "Data do Final............:"
@ 07,03 SAY "Tipo de Documento........:"
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        bank=SPACE(1)
        mcod_cli := mcod_vend := mcod_ope := 0
        mt_doc := '  '
        mcliente := SPACE(30)
        t_ini := t_fim := CTOD("  /  /  ")
        mfornec := SPACE(4)
        @ 00,30 GET mcodemp pict "999" VALID ver_emp(mcodemp,00,34,,'*') WHEN mmult_emp = 'S'
        @ 01,30 GET mcod_cli pict "99999" VALID ver_cli(mcod_cli,01,36) WHEN mcod_vend = 0 
        @ 02,30 GET mcod_vend pict "999" VALID ven(mcod_vend,02,34) WHEN mcod_cli = 0 
        @ 03,30 GET mcod_ope pict "999" VALID ven(mcod_ope,03,34) WHEN mcod_cli = 0
        @ 04,30 GET bank pict "@!" VALID bank $ 'C,B, '
        @ 05,30 GET t_ini 
        @ 06,30 GET t_fim 
        @ 07,30 GET mt_doc
        READ
        IF LASTKEY()=27
                EXIT
        ENDIF
        mtit := "DOCUMENTOS TRANSFERIDOS (Contas a Receber)"
        i := 0
        IF t_ini = CTOD("  /  /  ") .OR. t_fim = CTOD('  /  /  ')
                t_ini=CTOD("11/11/11")
                t_fim=CTOD("31/12/10")
        ENDIF
        **************
        SELE('dupr');ORDSETFOCUS(12)
        GO TOP
        **************
        dupr->(DBSEEK(DTOS(t_ini),.T.))
        IF ! imp_arq('DOC_TRAN.REL','R')
                RETURN NIL
        ENDIF
        SET PRINT ON
        pag := tot_g := tot_gin := 0
        mfornec := dupr->fornec
        mtipo := DTOC(t_ini)+' a '+DTOC(t_fim)
        WHILE dupr->dat_tran <= t_fim .AND. ! EOF()
                mcliente := SPACE(30)
                IF pag=0 .OR. PROW()>=59
                        pag=pag+1
                        IF pag>1
                                EJECT
                        ENDIF
                        cabecalho(pag,mtit,mtipo,mprg,mcodemp)
                        imprt(mtipo_imp,'C')
                        IF mcod_vend > 0
                                DEVPOS(PROW()+1,00);DEVOUT('Vendedor: '+STRZERO(mcod_vend,3)+' - '+mnome_vend)
                                DEVPOS(PROW(),00);DEVOUT('          '+STRZERO(mcod_vend,3)+' - '+mnome_vend)
                        ENDIF
                        ? "Cod.  Cliente                                  Dt.Transf. No.docum.      Emissao  Venc.        Valor  Doc.Origem.      Valor  Op."
                        ? REPLICATE("-",137)
                        ?
                ENDIF
                IF (dupr->pago = 'T');
                   .OR. (! EMPTY(mcod_vend) .AND. STRZERO(mcod_vend,3) <> dupr->vendedor);
                   .OR. (! EMPTY(mt_doc) .AND. mt_doc <> dupr->tipo);
                   .OR. (! EMPTY(mcod_ope) .AND. STRZERO(mcod_ope,3) <> dupr->operador);
                   .OR. (! EMPTY(mcod_cli) .AND. dupr->fornec<>mcod_cli);
                   .OR. (! EMPTY(bank) .AND. bank<>dupr->banco);
                   .OR. (! EMPTY(mcodemp) .AND. mcodemp<>dupr->empresa)
                        SKIP
                        LOOP
                ENDIF
                ? dupr->fornec+" "
                ?? dupr->cliente+" "
                ?? DTOC(dupr->dat_tran)+"   "
                ?? dupr->tipo+dupr->duplicata+dupr->conta+" "
                ?? DTOC(dupr->emissao)+" "
                ?? DTOC(dupr->venc)+" "
                ?? transform(dupr->valor,"@E 999,999.99")+"  "
                ?? dupr->doc_tran
                ?? transform(dupr->valor_dup,"@E 999,999.99")+"  "
                ?? dupr->operador
                tot_g=tot_g+1
                tot_gin=tot_gin+dupr->valor
                SKIP
        ENDDO
        IF pag=0 .OR. PROW()>=57
                IF pag > 0
                        EJECT
                ENDIF
                pag=pag+1
                cabecalho(pag,mtit,mtipo,mprg,mcodemp)
        ENDIF
        ?
        imprt(mtipo_imp,'N')
        ? "*** RESUMO FINAL ***"
        ?
        ? "Total de Documentos TRANSFERIDOS no Periodo: "+transform(tot_g,"9999")+" - "+ltrim(transform(tot_gin,"@E 999,999,999,999.99"))
        ?
        ? time()
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('DOC_TRAN.REL')
        /*
        IF mimp_tipo = 2
                lertexto('DOC_TRAN.REL')
        ELSEIF mtipo_imp = 'D'
                
        ELSE
                MYRUN('DOSPRINTER /RAW /DEL '+ALLTRIM(m_indiv[1,5])+'HTI.REL')
        ENDIF
        */
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* F I M *******************************



