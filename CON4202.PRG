MEMVAR getlist,nivel_acess,mdata_sis
*********************************************************
**** CON4202.PRG: Relatorio -> CLIENTES COM PEDIDOS QUITADOS NO PERIODO
*********************************************************

FUNCTION con4202
***************
LOCAL MPRG:='CON4202',;
      tela,tela1,pag,mtit,mtipo,opcao,mquantd,mnum_ped,;
      mtipo_cli:=' ',mtot_cli:=0,mdata1,mdata2,mpoint,mtipo_doc,;
      m_cliente:={}

PRIVATE mnome_vend,mcom_vend,mcliente,mcgc,mcpf,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcod_vend

IF ! ver_nivel(mprg,'CONTA A RECEBER (CLIENTES COM PEDIDO QUITADO)','156',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

*---------------------------------------------------------------------
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
*---------------------------------------------------------------------
****************
SELE('cli');ORDSETFOCUS(1)
****************
op_tela(03,02,08,79,' Clientes sem DEBITO ')
@ 00,00 SAY "Tipo de Documento...............:"
@ 01,00 SAY "Data Inicial....................:"
@ 02,00 SAY "Data Final......................:"
@ 03,00 SAY "Tipo de Cliente.................:"
@ 04,00 SAY "Codigo do Vendedor..............:"
mtipo_imp := m_indiv[1,18]
WHILE .T.
        ASIZE(m_cliente,0)
        mtipo_doc := SPACE(2)
        mtot_cli := 0
        mdata1 := mdata2 := CTOD('  /  /  ')
        mcod_vend := 0
        mcliente := SPACE(30)
        @ 00,34 GET mtipo_doc PICT '@!'
        @ 01,34 GET mdata1
        @ 02,34 GET mdata2 VALID IF(mdata2<mdata1,.F.,.T.)
        @ 03,34 GET mtipo_cli PICT "@!" VALID lim_get() WHEN men_get(04,34,'Informe o Tipo de Cliente: <C>Cliente  <R>Revenda <P>otencial <F>ilial <U>Funcionarios <A>ssociado <O>Outros <E>xcluido ou deixe em BRANCO p/todos')
        @ 04,34 GET mcod_vend PICT "999" VALID ven(mcod_vend,04,48)
        READ
        IF LASTKEY()=27
                EXIT
        ENDIF
        mtit := "DUPLICATAS A RECEBER (Contas a Receber)"
        mtipo := 'CLIENTES SEM DEBITOS (Ordem Alfabetica)'
        IF ! imp_arq('CLI_DEBI.REL','R')
                LOOP
        ENDIF
        SET PRINT ON
        pag=0
        SET DATE brit
        **************
        SELE('dupr');ORDSETFOCUS(3)
        GO TOP
        **************
        dupr->(DBSEEK(DTOS(mdata1),.T.))
        WHILE ! EOF() .AND. dupr->datpag <= mdata2
                prog_imp(RECNO())
                IF (! EMPTY(mtipo_cli) .AND. mtipo_cli <> dupr->tip_cli);
                   .OR. EMPTY(dupr->num_ped);
                   .OR. dupr->tipo = 'DN';
                   .OR. dupr->tipo = 'CT';
                   .OR. dupr->tipo = 'TR';
                   .OR. (! EMPTY(mtipo_doc) .AND. mtipo_doc <> dupr->tipo)
                        SKIP
                        LOOP
                ENDIF
                mpoint := RECNO()
                mnum_ped := dupr->num_ped
                **************
                SELE('dupr');ORDSETFOCUS(7)
                GO TOP
                **************
                IF dupr->(DBSEEK(mnum_ped+' '))
                        **************
                        SELE('dupr');ORDSETFOCUS(3)
                        GO mpoint
                        **************
                        SKIP
                        LOOP
                ELSE
                        IF ASCAN(m_cliente,dupr->num_ped) = 0
                                IF pag=0 .OR. PROW()>=59
                                        pag=pag+1
                                        IF pag>1
                                                EJECT
                                        ENDIF
                                        cabecalho(pag,mtit,mtipo,mprg)
                                        imprt(mtipo_imp,'C')
                                        IF mcod_vend > 0
                                                DEVPOS(PROW()+1,00);DEVOUT('Vendedor: '+STRZERO(mcod_vend,3)+' - '+mnome_vend)
                                        ENDIF
                                        ? "Cod.  Razao                                    No.Ped  Ult.Doc. Dat.Pag. Vlr.Pago"
                                        ? REPLICATE("=",137)
                                ENDIF
                                **************
                                SELE('dupr');ORDSETFOCUS(3)
                                GO mpoint
                                **************
                                DEVPOS(PROW()+1,00);DEVOUT(dupr->fornec)
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(dupr->cliente)
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(dupr->num_ped)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(dupr->tipo+dupr->duplicata)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(DTOC(dupr->datpag))
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(dupr->vlpago,'999,999.99'))
                                AADD(m_cliente,dupr->num_ped)
                                mtot_cli ++
                        ELSE
                                **************
                                SELE('dupr');ORDSETFOCUS(3)
                                GO mpoint
                                **************
                        ENDIF
                ENDIF
                SKIP
        ENDDO
        IF PROW() >= 55
                EJECT
                pag=pag+1
                cabecalho(pag,mtit,mtipo)
        ENDIF
        ?
        imprt(mtipo_imp,'C')
        ? "*** RESUMO FINAL ***"
        ? 'Total Clientes....: '+TRANSFORM(mtot_cli,"@E 999,999")
        ?
        ? time()
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('CLI_DEBI.REL')
        /*
        IF mimp_tipo = 2
                lertexto('CLI_DEBI.REL')
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

