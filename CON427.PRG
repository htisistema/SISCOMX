MEMVAR getlist,nivel_acess,mdata_sis
*********************************************************
**** CON423.PRG: Relatorio -> Duplicatas RECEBER A VENCER/VENCIDO
*********************************************************

FUNCTION con427
***************
LOCAL MPRG:='CON427',;
      tela1,t_ini,t_fim,mod,td_mes,tp_mes,pag,mcod_vend,;
      vencer,vencidas,t_vencer,t_vencidas,tot,tot_g,tot_din,tot_gin,tt,;
      xxx,mtit,mtipo,mtip,mdia,opcao,mquantd,mcartao,mtipo_rel,;
      mcod_aux,mtipo_con,;
      mdias_atras,mfornec,mop_dia,mtip_pg:='  ',mend,mcab,;
      mcidade,marea:=SPACE(15),mbaix_parc,mtipo_cli:=' ',mlinhas:='N',mobs_cli:=' ',;
      cli_venc:={},cli_rec:={},cli_pg:={},mpt:=0,mtot_pg:=0,pagas:=0

PRIVATE mcobra_fin,mtaxa_fin,mcod_forn:=0,;
        mcod_cli,bank,mnome_vend,mcom_ven,mcliente,mcgc,mcpf,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),cons_cli:={}

IF ! ver_nivel(mprg,'CONTA A RECEBER (RELATORIO ESTATISTICA DE DOCUMENTOS VENCER/VENCIDA/PAGAS)','156',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

*---------------------------------------------------------------------
IF ! AbriArq('sacfin','fin');RETURN NIL;ENDIF
//
IF ! AbriArq('saccarta','car');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
*---------------------------------------------------------------------
****************
SELE('cli');ORDSETFOCUS(1)
****************
op_tela(04,02,22,79,' Documentos a RECEBER ')
@ 00,00 SAY "Tipo de Documento...............:"
@ 01,00 SAY "Codigo do Cliente...............:"
@ 02,00 SAY "Tipo de Cliente.................:"
@ 03,00 SAY "Codigo do Vendedor..............:"
@ 04,00 SAY "Pag.em [C]arteira [B]anco.......:"
@ 05,00 SAY "Data do Inicio..................:"
@ 06,00 SAY "Data do Final...................:"
@ 07,00 SAY "[R]esumo do dia ou [G]eral......:"
@ 08,00 SAY "Totalizador do dia [S/n]........:"
@ 09,00 SAY "Tipo de Operacao................:"
@ 10,00 SAY "Digite o nome da Cidade.........:"
@ 11,00 SAY "Digite a Area Desejada..........:"
@ 12,00 SAY 'Doc.Baixa Parcial [S/C/N].......:'
@ 13,00 SAY 'Cod.Fornecedor/Despesa..........:'
mtipo_imp := m_indiv[1,18]
WHILE .T.
        ASIZE(cli_rec,0)
        ASIZE(cli_venc,0)
        ASIZE(cli_pg,0)
        mtipo_rel := 'G'
        bank=SPACE(1)
        mcod_cli = 0
        mcod_vend := 0
        mcliente := SPACE(30)
        t_ini=CTOD("  /  /  ")
        t_fim=mdata_sis
        mod := 0
        mcartao := 0
        mop_dia := 'S'
        mtip_pg := '  '
        mend := ' '
        mcab := ' '
        mcidade := SPACE(20)
        marea := SPACE(15)
        mcod_forn := 0
        mbaix_parc := 'N'
        mtip := SPACE(2)
        mtipo_con := 'A'
        mlinhas := 'N'
        @ 00,34 GET mtip PICT "@!" VALID ver_tipdc(mtip,'*')
        @ 01,34 GET mcod_cli PICT "99999" VALID ver_cli(mcod_cli,01,40) WHEN mcod_vend = 0    //.AND. men_get(07,46,'Informe o cliente que deseja ou nao informe p/imprimir todos')
        @ 02,34 GET mtipo_cli PICT "@!" VALID lim_get() WHEN mcod_cli = 0 .AND. men_get(03,34,'Informe o Tipo de Cliente: <C>Cliente  <R>Revenda <P>otencial <F>ilial <U>Funcionarios <A>ssociado <O>Outros <E>xcluido ou deixe em BRANCO p/todos')
        @ 03,34 GET mcod_vend PICT "999" VALID ven(mcod_vend,03,48) WHEN mcod_cli = 0      //.AND. men_get(09,37,'Informe o Vendedor que deseja ou nao informe p/imprimir todos')
        @ 04,34 GET bank PICT "@!" VALID bank $ 'C,B, '
        @ 05,34 GET t_ini               //VALID lim_get() WHEN men_get(11,39,'Informe a data inicial do periodo que deseja imprimir')
        @ 06,34 GET t_fim               //VALID lim_get() WHEN men_get(12,39,'Informe a data final do periodo que deseja imprimir')
        @ 07,34 GET mtipo_rel PICT '@!' VALID mtipo_rel $ 'R,G'         // WHEN men_get(13,39,'Informe o [R] para resumo dos dias [G] para todas as duplicatas')
        @ 08,34 GET mop_dia PICT '@!' VALID lim_get() .AND. mop_dia $ 'S,N'  WHEN men_get(09,34,'Deseja que os dias seja TOTALIZADO=[S] ou [N]p/nao TOTALIZAR')
        @ 09,34 GET mtip_pg PICT '@!'           //VALID lim_get() WHEN men_get(15,39,'Informe o tipo de Operacao')
        @ 10,34 GET mcidade PICT '@!'           //VALID lim_get() WHEN men_get(16,39,'Informe a CIDADE que deseja ou deixe em BRANCO p/todos')
        @ 11,34 GET marea PICT '@!'             //VALID lim_get() WHEN men_get(17,39,'Informe a AREA que deseja ou deixe em BRANCO p/todos')
        @ 12,34 GET mbaix_parc PICT '@!' VALID mbaix_parc $ 'S,N,C' .AND. lim_get() WHEN men_get(12,33,'Digite [S]o os Doc.Baixado [C]om os Doc.Baixado [N]enhum Doc.Baixado')
        @ 13,34 GET mcod_forn PICT '9999' VALID v_fornece(mcod_forn,13,48) WHEN mbaix_parc = 'S' .OR. mbaix_parc = 'C'
*       @ 19,34 GET mtipo_con PICT '@!' VALID mtipo_con $ 'A,S,T' WHEN EMPTY(mcod_cli) .AND. mtipo_rel = 'G'
*       @ 20,34 GET mend PICT '@!' VALID mend $ 'S,N' WHEN mtipo_con = 'S'
*       @ 20,63 GET mobs_cli PICT '@!' VALID mobs_cli $ 'S,N' WHEN mend = 'S' .AND. mtipo_con = 'S'
*       @ 21,34 GET mlinhas PICT '@!' VALID mlinhas $ 'S,N' WHEN mtipo_con = 'S'
        READ
        IF LASTKEY()=27
                EXIT
        ENDIF
        IF mtip = 'DU'
                mtit := "DUPLICATAS A RECEBER (Contas a Receber)"
        ELSEIF mtip = 'CH'
                mtit := "CHEQUES A RECEBER (Contas a Receber)"
        ELSEIF mtip = 'CT'
                mtit := "CARTOES A RECEBER (Contas a Receber)"
                mcartao := 0
                op_tela(19,10,21,75," RECEBER ")
                @ 00,00 SAY "Codigo do Cartao.........:"
                @ 00,27 GET mcartao PICT '999' VALID ver_cartao(mcartao,00,30)
                READ
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        LOOP
                ENDIF
                opcao := op_simnao('S','Confirma a Cartao:')
                IF opcao = 'N'
                        wvw_lclosewindow()
                        LOOP
                ENDIF
                 wvw_lclosewindow()
        ELSEIF mtip = 'FI'
                mtit := "FINANCIAMENTO A RECEBER (Contas a Receber)"
                mcartao := 0
                op_tela(19,10,21,75,," RECEBER ")
                @ 00,00 SAY "Codigo da Financeira.....:"
                @ 00,27 GET mcartao PICT '999' VALID IF(EMPTY(mcartao),.T.,ver_finan(mcartao,00,30))
                READ
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        LOOP
                ENDIF
                opcao := op_simnao('S','Confirma a Financeira:')
                IF opcao = 'N'
                        wvw_lclosewindow()
                        LOOP
                ENDIF
                wvw_lclosewindow()
        ELSE
                mtit := "DOCUMENTOS A RECEBER (Contas a Receber)"
        ENDIF
        td_mes=0    && tot.dup no mes
        tp_mes=0    && tot. pagar no mes
        IF t_ini = CTOD("  /  /  ")
                t_ini=CTOD("01/01/60")
        ENDIF
        IF t_fim = CTOD('  /  /  ')
                t_fim=CTOD("31/12/99")
        ENDIF
        IF ! EMPTY(mcidade)
                mtipo := DTOC(t_ini)+' a '+DTOC(t_fim)+' da Cidade:'+mcidade
        ELSE
                mtipo := DTOC(t_ini)+' a '+DTOC(t_fim)
        ENDIF
        mtit := mtit+' ANALITICO'
        **************
        SELE('dupr');ORDSETFOCUS(4)
        GO TOP
        **************
        IF ! EMPTY(mcod_cli)
                dupr->(DBSEEK(DTOS(t_ini)+mcod_cli,.T.))
        ELSE
                dupr->(DBSEEK(DTOS(t_ini),.T.))
        ENDIF
        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        **************
        SET CONSO off
        IF ! imp_arq('DOC_VENCE.REL','R')
                LOOP
        ENDIF
        SET PRINT ON
        pag=0
        vencer=0
        vencidas=0
        t_vencer=0
        t_vencidas=0
        SET DATE brit
        tot=0
        tot_g=0
        tot_gin=0
        mdia := dupr->venc
        mtot_pg := 0
        pagas := 0
        WHILE dupr->venc <= t_fim .AND. ! EOF()
                mcliente := SPACE(30)
                IF pag=0 .OR. PROW()>=59
                        pag=pag+1
                        IF pag>1
                                EJECT
                        ENDIF
                        cabecalho(pag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                        IF mcod_vend > 0
                                DEVPOS(PROW()+1,00);DEVOUT('Vendedor: '+STRZERO(mcod_vend,3)+' - '+mnome_vend)
                                DEVPOS(PROW(),00);DEVOUT('          '+STRZERO(mcod_vend,3)+' - '+mnome_vend)
                        ENDIF
                        ? "Cod.  Cliente                         No.Ped  No. Doc.           Tp.Pg   Emissao    Vencim  Data Pag        Valor"
                        ? REPLICATE("=",137)
                        ?
                ENDIF
                ***************** CONDICOES ************************
                IF (mbaix_parc = 'N' .AND. ! EMPTY(dupr->baix_parc));
                   .OR. (mbaix_parc = 'S' .AND. EMPTY(dupr->baix_parc));
                   .OR. (! EMPTY(mcod_forn) .AND. STRZERO(mcod_forn,4) <> dupr->cod_forn);
                   .OR. (! EMPTY(mtip) .AND. mtip <> dupr->tipo);
                   .OR. (! EMPTY(mtip_pg) .AND. mtip_pg <> dupr->tip_pg);
                   .OR. (! EMPTY(mtipo_cli) .AND. mtipo_cli <> dupr->tip_cli);
                   .OR. (! EMPTY(mcartao) .AND. STRZERO(mcartao,3) <> dupr->numero);
                   .OR. (! EMPTY(mcod_vend) .AND. STRZERO(mcod_vend,3) <> dupr->vendedor);
                   .OR. (! EMPTY(mcod_cli) .AND. dupr->fornec<>mcod_cli);
                   .OR. (! EMPTY(bank) .AND. dupr->banco<>bank)
                        SKIP
                        LOOP
                ENDIF
                IF ! EMPTY(mcidade)
                        IF ver_cli(VAL(dupr->fornec),,,'*')
                                IF cons_cli[1,24] <> mcidade
                                        SKIP
                                        LOOP
                                ENDIF
                        ELSE
                                SKIP
                                LOOP
                        ENDIF
                ENDIF
                IF ! EMPTY(marea)
                        IF ver_cli(VAL(dupr->fornec),,,'*')
                                IF cons_cli[1,43] <> marea
                                        SKIP
                                        LOOP
                                ENDIF
                        ELSE
                                SKIP
                                LOOP
                        ENDIF
                ENDIF
                ***************** FIM CONDICOES ************************
                *&*
                tot=tot+1
                tot_g=tot_g+1
                tot_gin=tot_gin+dupr->valor
                mdias_atras := mdata_sis-dupr->venc
                mpt := 0
                mpt := ASCAN(cli_rec,dupr->fornec)
                IF mpt = 0
                        AADD(cli_rec,dupr->fornec)
                ENDIF
                IF (! EMPTY(dupr->pago) .OR. ! EMPTY(dupr->datpag));
                   .AND. dupr->datpag < t_fim
                        mtot_pg := mtot_pg + dupr->valor
                        pagas ++
                        mpt := 0
                        mpt := ASCAN(cli_pg,dupr->fornec)
                        IF mpt = 0
                                AADD(cli_pg,dupr->fornec)
                        ENDIF
                ELSEIF mdias_atras > 0
                        t_vencidas := t_vencidas + dupr->valor
                        vencidas ++
                        mpt := 0
                        mpt := ASCAN(cli_venc,dupr->fornec)
                        IF mpt = 0
                                AADD(cli_venc,dupr->fornec)
                        ENDIF
                ELSE
                        t_vencer := t_vencer + dupr->valor
                        vencer ++
                ENDIF
                IF mtipo_rel = 'G'
                        ? dupr->fornec+" "
                        ?? LEFT(dupr->cliente,30)+"  "
                        ?? dupr->num_ped+"  "
                        ?? dupr->numero+"  "
                        ?? dupr->tipo+dupr->duplicata+dupr->conta+" "
                        IF dupr->banco = 'C'
                                ?? 'CART.'+"  "
                        ELSEIF dupr->banco = 'B'
                                ?? 'BANCO'+"  "
                        ELSE
                                ?? '     '+"  "
                        ENDIF
                        ?? DTOC(dupr->emissao)+"  "
                        ?? DTOC(dupr->venc)+"  "
                        IF (! EMPTY(dupr->pago) .OR. ! EMPTY(dupr->datpag));
                           .AND. dupr->datpag < t_fim
                                ?? DTOC(dupr->datpag)+"  "
                        ELSE
                                ?? '          '
                        ENDIF
                        ?? transform(dupr->valor,"@E 9,999,999.99")+" "
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
        ?
        ? "Total DOCUMENTOS=> Quantd.: "+transform(tot_g,"999,999")+' - Valor R$: '+TRANSFORM(tot_gin,"@E 9,999,999.99")
        ? 'Total a A VENCER=> Quantd.: '+TRANSFORM(vencer,"@E 999,999")+' - Valor R$: '+TRANSFORM(t_vencer,"@E 9,999,999.99")
        ? 'Total VENCIDAS..=> Quantd.: '+TRANSFORM(vencidas,"@E 999,999")+' - Valor R$: '+TRANSFORM(t_vencidas,"@E 9,999,999.99")+' - (%): '+TRANSFORM((t_vencidas / tot_gin)*100,'999.99')
        ? 'Total PAGAS.....=> Quantd.: '+TRANSFORM(pagas,"@E 999,999")+' - Valor R$: '+TRANSFORM(mtot_pg,"@E 9,999,999.99")+' - (%): '+TRANSFORM((mtot_pg / tot_gin)*100,'999.99')
        ? 'Total Clientes no Periodo: '+TRANSFORM(LEN(cli_rec),"@E 999,999")
        ? 'Total Clientes DEVEDOR...: '+TRANSFORM(LEN(cli_venc),"@E 999,999")+' - (%): '+TRANSFORM((LEN(cli_venc)/ LEN(cli_rec))*100,'999.99')
        ?
        ? time()
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('DOC_VENCE.REL')
        /*
        IF mimp_tipo = 2
                lertexto('DOC_VENCE.REL')
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

