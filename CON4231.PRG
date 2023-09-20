MEMVAR nivel_acess,getlist,mdata_sis
*********************************************************
**** CON4231.PRG: Relatorio -> Duplicatas RECEBER A VENCER/VENCIDO
*********************************************************
FUNCTION con4231
***************
LOCAL MPRG:='CON4231',;
      t_ini,t_fim,mod,td_mes,tp_mes,pag,mcod_vend,;
      vencer,vencidas,t_vencer,t_vencidas,tot,tot_g,tot_din,tot_gin,l_mes,tt,;
      xxx,mtit,mtipo,mtip,mdia,mt_dia,opcao,mquantd,mcartao,mtipo_rel,;
      mcod_aux,mtot_ind,mvlr_ind,msub_ind,mjuros_ind,mtipo_con,mmulta,mjuros,;
      mdias_atras,mtot_juros,mfornec,mt_juros,mop_dia,mtip_pg:='  ',mend,mcab,;
      mcidade,marea:=SPACE(15),mbaix_parc,mponto:=0

PRIVATE mcobra_fin,mtaxa_fin,mcod_forn:=0,mcod_cli:=0,mcompras:=0,;
        mcliente,mcgc,mcpf,bank,mnome_vend,mcom_ven,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),cons_cli:={}

IF ! ver_nivel(mprg,'CONTA A RECEBER (RELATORIO DOCUMENTOS VENCER/VENCIDA)','156',nivel_acess,,'AMBIE')
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
op_tela(08,09,22,79,' Documento a RECEBER ')
@ 00,00 SAY "Tipo de Documento........:"
@ 01,00 SAY "Codigo do Cliente........:"
@ 02,00 SAY "Codigo do Vendedor.......:"
@ 03,00 SAY "Pag.em [C]arteira [B]anco:"
@ 04,00 SAY "Data do Inicio...........:"
@ 05,00 SAY "Data do Final............:"
@ 06,00 SAY "Resumo do dia ou Geral...:"
@ 07,00 SAY "Totalizador do dia [S/n].:"
@ 08,00 SAY "Tipo de Operacao.........:"
@ 09,00 SAY "Digite o nome da Cidade..:"
@ 10,00 SAY "Digite a Area Desejada...:"
@ 11,00 SAY 'Doc.Baixa Parcial [S/C/N]:'
mtipo_imp := m_indiv[1,18]
WHILE .T.
        mtipo_rel := 'G'
        bank=SPACE(1)
        mcod_cli := mcod_vend := 0
        mcliente := SPACE(30)
        t_ini=CTOD("  /  /  ")
        t_fim=mdata_sis
        mod := mcartao := 0
        mop_dia := 'S'
        mtip_pg := '  '
        mend := mcab := ' '
        mcidade := SPACE(20)
        marea := SPACE(15)
        mbaix_parc := 'N'
        mtip := SPACE(2)
        @ 00,27 GET mtip PICT "@!" VALID ver_tipdc(mtip,'*')
        @ 01,27 GET mcod_cli PICT "99999" VALID ver_cli(mcod_cli,01,33) WHEN mcod_vend = 0 
        READ
        IF ! EMPTY(mcod_cli);ver_cli(mcod_cli,01,33);ENDIF
        @ 02,27 GET mcod_vend PICT "999" VALID ven(mcod_vend,02,31) .AND. lim_get() WHEN mcod_cli = 0 .AND. men_get(03,27,'Informe o Vendedor que deseja ou nao informe p/imprimir todos')
        @ 03,27 GET bank PICT "@!" VALID bank $ 'C,B, '
        @ 04,27 GET t_ini 
        @ 05,27 GET t_fim 
        @ 06,27 GET mtipo_rel PICT '@!' VALID lim_get() .AND. mtipo_rel $ 'R,G'  WHEN men_get(07,27,'Informe o [R] para resumo dos dias [G] para todas as duplicatas')
        @ 07,27 GET mop_dia PICT '@!' VALID lim_get() .AND. mop_dia $ 'S,N'  WHEN men_get(08,27,'Deseja que os dias seja TOTALIZADO=[S] ou [N]p/nao TOTALIZAR')
        @ 08,27 GET mtip_pg PICT '@!' VALID lim_get() WHEN men_get(09,27,'Informe o tipo de Operacao')
        @ 09,27 GET mcidade PICT '@!' VALID lim_get() WHEN men_get(10,27,'Informe a CIDADE que deseja ou deixe em BRANCO p/todos')
        @ 10,27 GET marea PICT '@!' VALID lim_get() WHEN men_get(11,27,'Informe a AREA que deseja ou deixe em BRANCO p/todos')
        @ 11,27 GET mbaix_parc PICT '@!' VALID mbaix_parc $ 'S,N,C' .AND. lim_get() WHEN men_get(12,27,'Digite [S]o os Doc.Baixado [C]om os Doc.Baixado [N]enhum Doc.Baixado')
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
                op_tela(19,10,21,75," RECEBER ")
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
        IF EMPTY(mcod_cli) .AND. mtipo_rel = 'G'
                mtipo_con := mensagem1('Escolha o tipo de consulta [A]nalitico [S]intetico CLIENTE [T]Sintetico TIPO DOC.:','A','A,S,T')
        ELSE
                mtipo_con := 'A'
        ENDIF
        IF mtipo_con = 'S'
                mend := mensagem1('Deseja imprimir o endereco dos Cliente: [S]im - [N]ao :','S','S,N')
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
        IF mtipo_con = 'A'
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
                SET DATE brit
                l_mes=SUBSTR(DTOC(dupr->venc),4)
                mdia := dupr->venc
                pag:=vencer:=vencidas:=t_vencer:=t_vencidas:=tot:=tot_g:=;
                tot_din:=tot_gin:=mt_dia := mt_juros := mtot_juros := ;
                mtot_ind := mvlr_ind := msub_ind := mjuros_ind := 0
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
                                ? "Cod.  Cliente                                      No. Doc.       Emissao   Vencim        Valor  Sld.Deve.     Valor Pago"
                                ? REPLICATE("=",137)
                                ?
                        ENDIF
                        IF mdia <> dupr->venc
                                IF ! EMPTY(mt_dia)
                                        IF mtipo_rel = 'G' .AND. mop_dia = 'S'
                                                DEVPOS(PROW()+1,62);DEVOUT('                     '+SPACE(LEN(DTOC(mdia)))+' ------------       -------- ------------')
                                                DEVPOS(PROW()+1,62);DEVOUT('Total do Vencimento '+DTOC(mdia)+':')
                                                DEVPOS(PROW(),PCOL());DEVOUT(TRANSFORM(mt_dia,'9,999,999.99'))
                                                DEVPOS(PROW(),PCOL()+6);DEVOUT(TRANSFORM(mt_juros,'99,999.99'))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia+mt_juros,'9,999,999.99'))
                                                ? REPLICATE("=",137)
                                        ELSEIF mtipo_rel = 'R'
                                                DEVPOS(PROW()+1,00);DEVOUT('Total do Vencimento '+DTOC(mdia)+':')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'9,999,999.99'))
                                                DEVPOS(PROW(),PCOL()+6);DEVOUT(' - Juros+Multa: '+TRANSFORM(mt_juros,'9,999,999.99'))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Total: '+TRANSFORM(mt_dia+mt_juros,'9,999,999.99'))
                                        ENDIF
                                ENDIF
                                mt_dia := 0
                                mt_juros := 0
                                mdia := dupr->venc
                        ENDIF
                        IF l_mes<>SUBSTR(DTOC(dupr->venc),4) .AND. ! EOF()
                                IF tot_din > 0
                                        DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos no mes de "+l_mes+": "+transform(tot,"9999")+" - "+ltrim(transform(tot_din,"@E 99,999,999.99")))
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("*",137))
                                        tot_din=0
                                        ? ' '
                                ENDIF
                                l_mes=SUBSTR(DTOC(dupr->venc),4)
                                tot=0
                        ENDIF
                        ***************** CONDICOES ************************
                        IF (mbaix_parc = 'N' .AND. ! EMPTY(dupr->baix_parc));
                            .OR. (mbaix_parc = 'S' .AND. EMPTY(dupr->baix_parc));
                            .OR. (! EMPTY(mtip) .AND. mtip <> dupr->tipo);
                            .OR. (! EMPTY(mtip_pg) .AND. mtip_pg <> dupr->tip_pg);
                            .OR. (! EMPTY(mcartao) .AND. STRZERO(mcartao,3) <> dupr->numero);
                            .OR. (! EMPTY(dupr->pago) .OR. ! EMPTY(dupr->datpag));
                            .OR. (! EMPTY(mcod_vend) .AND. STRZERO(mcod_vend,3) <> dupr->vendedor);
                            .OR. (! EMPTY(mcod_cli) .AND. dupr->fornec<>mcod_cli);
                            .OR. (! EMPTY(bank) .AND. dupr->banco<>bank)
                                SKIP
                                LOOP
                        ENDIF
                        IF ! EMPTY(mcidade)
                                IF ver_cli(VAL(dupr->fornec),,,'*')
                                        IF cons_cli[1,24] <> mcidade
                                                SKIP;LOOP
                                        ENDIF
                                ELSE
                                        SKIP;LOOP
                                ENDIF
                        ENDIF
                        IF ! EMPTY(marea)
                                IF ver_cli(VAL(dupr->fornec),,,'*')
                                        IF cons_cli[1,43] <> marea
                                                SKIP;LOOP
                                        ENDIF
                                ELSE
                                        SKIP;LOOP
                                ENDIF
                        ENDIF
                        ***************** FIM CONDICOES ************************
                        *&*
                        tot=tot+1
                        tot_g=tot_g+1
                        tot_din=tot_din+dupr->valor
                        tot_gin=tot_gin+dupr->valor
                        mt_dia := mt_dia + dupr->valor
                        mmulta := mjuros := 0
                        mdias_atras := mdata_sis-dupr->venc
                        IF mdias_atras > 0
                                mmulta := dupr->valor * ((m_set[1,50])/100)
                                mjuros := mjuros + (dupr->valor * ((mdias_atras*m_set[1,51])/100))
                        ENDIF
                        mtot_juros := mtot_juros + mmulta+mjuros
                        mjuros_ind := mjuros_ind + mmulta+mjuros
                        mvlr_ind += dupr->valor+mmulta+mjuros
                        mt_Juros += mmulta+mjuros
                        IF mtipo_rel = 'G'
                                mcod_cli := VAL(dupr->fornec)
                                mcompras := 0
                                mponto := RECNO()
                                mcompras := ver_compras(VAL(dupr->fornec))
                                GO mponto
                                ? dupr->fornec+" "
                                ?? LEFT(dupr->cliente,30)+"  "
                                ?? dupr->num_ped+"  "
                                ?? dupr->numero+"  "
                                ?? dupr->tipo+dupr->duplicata+dupr->conta+"  "
                                ?? DTOC(dupr->emissao)+"  "
                                ?? DTOC(dupr->venc)+"  "
                                ?? transform(dupr->valor,"@E 99,999.99")+"  "
                                ?? transform(mcompras,"99,999.99")+' '
                                ?? '    .............'
                        ENDIF
                        SKIP
                ENDDO
                IF mdia <> dupr->venc
                        IF ! EMPTY(mt_dia)
                                IF mtipo_rel = 'G' .AND. mop_dia = 'S'
                                        DEVPOS(PROW()+1,62);DEVOUT('                     '+SPACE(LEN(DTOC(mdia)))+' ------------       -------- ------------')
                                        DEVPOS(PROW()+1,62);DEVOUT('Total do Vencimento '+DTOC(mdia)+':')
                                        DEVPOS(PROW(),PCOL());DEVOUT(TRANSFORM(mt_dia,'9,999,999.99'))
                                        DEVPOS(PROW(),PCOL()+6);DEVOUT(TRANSFORM(mt_juros,'99,999.99'))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia+mt_juros,'9,999,999.99'))
                                        ? REPLICATE("=",137)
                                ELSEIF mtipo_rel = 'R'
                                        DEVPOS(PROW()+1,00);DEVOUT('Total do Vencimento '+DTOC(mdia)+':')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'9,999,999.99'))
                                        DEVPOS(PROW(),PCOL()+6);DEVOUT(' - Juros+Multa: '+TRANSFORM(mt_juros,'9,999,999.99'))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Total: '+TRANSFORM(mt_dia+mt_juros,'9,999,999.99'))
                                ENDIF
                        ENDIF
                        mt_dia := 0
                        mt_juros := 0
                        mdia := dupr->venc
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos no mes de "+l_mes+": "+transform(tot,"9999")+" - "+ltrim(transform(tot_din,"@E 999,999,999,999.99")))
                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("*",137))
                IF PROW() >= 55
                        EJECT
                        pag=pag+1
                        cabecalho(pag,mtit,mtipo)
                ENDIF
                ?
                imprt(mtipo_imp,'C')
                ? "*** RESUMO FINAL ***"
                ?
                ? "Total a RECEBER no periodo  Quantd.: "+transform(tot_g,"9999")+" - Sub-Total: "+transform(tot_gin,"@E 99,999,999.99")+' Juros+Multa: '+transform(mtot_juros,"@E 9,999,999.99")+' - Total: '+transform(tot_gin+mtot_juros,"@E 9,999,999.99")
                ?
                ? time()
                EJECT
                SETPRC(00,00)
        ELSEIF mtipo_con = 'S' .OR. mtipo_con = 'T'
                mtit := mtit+' SINTETICO'
                IF mtipo_con = 'S'
                        mtit := mtit+' SINTETICO p/CLIENTE'
                        **************
                        SELE('dupr');ORDSETFOCUS(6)
                        GO TOP
                        **************
                ELSE
                        mtit := mtit+' SINTETICO p/TIPO DOC.'
                        **************
                        SELE('dupr');ORDSETFOCUS(1)
                        GO TOP
                        **************
                ENDIF
                IF ! imp_arq('DOC_VENCE.REL','R')
                        LOOP
                ENDIF
                SET PRINT ON
                SET DATE brit
                l_mes=SUBSTR(DTOC(dupr->venc),4)
                mdia := dupr->venc
                pag:=vencer:=vencidas:=t_vencer:=t_vencidas:=tot:=tot_g:=;
                tot_din:=tot_gin:=mt_dia := mtot_juros := 0
                WHILE ! EOF()
                        mtot_ind := mvlr_ind := msub_ind := mjuros_ind := 0
                        IF mtipo_con = 'S'
                                mcod_aux := dupr->fornec
                                mfornec  := dupr->fornec
                        ELSE
                                mcod_aux := dupr->tipo
                                mfornec  := dupr->tipo
                        ENDIF
*                       WHILE mcod_aux = dupr->fornec .AND. ! EOF()
                        mcab := ' '
                        WHILE mcod_aux = mfornec .AND. ! EOF()
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
                                        ? "Cod.  Cliente                                      No. Doc.       Emissao   Vencim        Valor  Sld.Deve.     Valor Pago"
                                        ? REPLICATE("=",137)
                                ENDIF
                                ***************** CONDICOES ************************
                                IF (mbaix_parc = 'N' .AND. ! EMPTY(dupr->baix_parc));
                                   .OR. (mbaix_parc = 'S' .AND. EMPTY(dupr->baix_parc));
                                   .OR. (! EMPTY(mcod_forn) .AND. STRZERO(mcod_forn) <> dupr->cod_forn)
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
                                IF dupr->venc > t_fim
                                        SKIP
                                        IF mtipo_con = 'S'
                                                mfornec := dupr->fornec
                                        ELSE
                                                mfornec := dupr->tipo
                                        ENDIF
                                        LOOP
                                ENDIF
                                IF dupr->venc < t_ini
                                        SKIP
                                        IF mtipo_con = 'S'
                                                mfornec := dupr->fornec
                                        ELSE
                                                mfornec := dupr->tipo
                                        ENDIF
                                        LOOP
                                ENDIF
                                IF ! EMPTY(mtip) .AND. mtip <> dupr->tipo
                                        SKIP
                                        IF mtipo_con = 'S'
                                                mfornec := dupr->fornec
                                        ELSE
                                                mfornec := dupr->tipo
                                        ENDIF
                                        mdia := dupr->venc
                                        LOOP
                                ENDIF
                                IF ! EMPTY(mcartao) .AND. STRZERO(mcartao,3) <> dupr->numero
                                        SKIP
                                        IF mtipo_con = 'S'
                                                mfornec := dupr->fornec
                                        ELSE
                                                mfornec := dupr->tipo
                                        ENDIF
                                        mdia := dupr->venc
                                        LOOP
                                ENDIF
                                IF ! EMPTY(dupr->pago) .OR. ! EMPTY(dupr->datpag)
                                        SKIP
                                        IF mtipo_con = 'S'
                                                mfornec := dupr->fornec
                                        ELSE
                                                mfornec := dupr->tipo
                                        ENDIF
                                        mdia := dupr->venc
                                        LOOP
                                ENDIF
                                IF ! EMPTY(mcod_vend) .AND. STRZERO(mcod_vend,3) <> dupr->vendedor
                                        SKIP
                                        IF mtipo_con = 'S'
                                                mfornec := dupr->fornec
                                        ELSE
                                                mfornec := dupr->tipo
                                        ENDIF
                                        mdia := dupr->venc
                                        LOOP
                                ENDIF
                                IF ! EMPTY(mcod_cli) .AND. dupr->fornec<>mcod_cli
                                        SKIP
                                        IF mtipo_con = 'S'
                                                mfornec := dupr->fornec
                                        ELSE
                                                mfornec := dupr->tipo
                                        ENDIF
                                        mdia := dupr->venc
                                        LOOP
                                ENDIF
                                IF ! EMPTY(mtip_pg) .AND. mtip_pg <> dupr->tip_pg
                                        SKIP
                                        LOOP
                                ENDIF
                                IF ! EMPTY(bank) .AND. dupr->banco<>bank
                                        SKIP
                                        IF mtipo_con = 'S'
                                                mfornec := dupr->fornec
                                        ELSE
                                                mfornec := dupr->tipo
                                        ENDIF
                                        mdia := dupr->venc
                                        LOOP
                                ENDIF
                                ***************** FIM CONDICOES ************************
                                IF mend = 'S'
                                        IF EMPTY(mcab)
                                                IF ver_cli(VAL(dupr->fornec),,,'*')
                                                        DEVPOS(PROW()+1,00);DEVOUT(STR(cons_cli[1,2],5)+'-'+cons_cli[1,3]+' - Nome Fantasia: '+cons_cli[1,4])
                                                        DEVPOS(PROW()+1,00);DEVOUT('End.:'+ALLTRIM(cons_cli[1,21])+', '+RTRIM(cons_cli[1,136])+IF(! EMPTY(RTRIM(cons_cli[1,137])),' - Compl.:'+RTRIM(cons_cli[1,137]),'')+' - '+ALLTRIM(cons_cli[1,22])+' - '+ALLTRIM(cons_cli[1,24])+' - '+cons_cli[1,25]+' - Tel.:'+cons_cli[1,29])
                                                        IF ! EMPTY(cons_cli[1,48])
                                                                DEVPOS(PROW()+1,00);DEVOUT('Obs.: '+cons_cli[1,48])
                                                        ENDIF
                                                ENDIF
                                        ENDIF
                                        mcab := '*'
                                ENDIF
                                mcod_cli := VAL(dupr->fornec)
                                mcompras := 0
                                mponto := RECNO()
                                mcompras := ver_compras(VAL(dupr->fornec))
                                GO mponto
                                ? dupr->fornec+" "
                                ?? LEFT(dupr->cliente,30)+"  "
                                ?? dupr->num_ped+"  "
                                ?? dupr->numero+"  "
                                ?? dupr->tipo+dupr->duplicata+dupr->conta+"  "
                                ?? DTOC(dupr->emissao)+"  "
                                ?? DTOC(dupr->venc)+"  "
                                ?? transform(dupr->valor,"@E 99,999.99")+"  "
                                ?? transform(mcompras,"99,999.99")+' '
                                ?? '    .............'
                                msub_ind := msub_ind + dupr->valor
                                mtot_ind ++
                                tot_g ++
                                mmulta := mjuros := 0
                                mdias_atras := mdata_sis-dupr->venc
                                IF mdias_atras > 0
                                        mmulta := dupr->valor * ((m_set[1,50])/100)
                                        mjuros := mjuros + (dupr->valor * ((mdias_atras*m_set[1,51])/100))
                                ENDIF
                                mtot_juros := mtot_juros + mmulta+mjuros
                                mjuros_ind := mjuros_ind + mmulta+mjuros
                                mvlr_ind := mvlr_ind + dupr->valor+mmulta+mjuros
                                tot_gin=tot_gin+dupr->valor
                                ?? transform(mmulta+mjuros,"9,999,999.99")+' '
                                ?? transform(dupr->valor+mmulta+mjuros,"999,999.99")
                                ?? '  '+dupr->tip_pg
                                SKIP
                                IF mtipo_con = 'S'
                                        mfornec := dupr->fornec
                                ELSE
                                        mfornec := dupr->tipo
                                ENDIF
                        ENDDO
                        IF ! EMPTY(mtot_ind)
                                ? REPLICATE("-",137)
                                ? 'QUANTD: '+STRZERO(mtot_ind,6)+' - SUB-TOTAL:'+TRANSFORM(msub_ind,'999,999.99')+' - JURO+MULTA:'+TRANSFORM(mjuros_ind,'999,999.99')+' - TOTAL:'+TRANSFORM(mvlr_ind,'9,999,999.99')
                                ? REPLICATE("=",137)
                                mtot_ind := mvlr_ind := msub_ind := ;
                                mjuros_ind := 0
                        ENDIF
                ENDDO
                IF PROW() >= 55
                        EJECT
                        pag=pag+1
                        cabecalho(pag,mtit,mtipo)
                ENDIF
                IF ! EMPTY(mtot_ind)
                        ? REPLICATE("-",137)
                        ? 'QUANTD: '+STRZERO(mtot_ind,6)+' - SUB-TOTAL:'+TRANSFORM(msub_ind,'999,999.99')+' - JURO+MULTA:'+TRANSFORM(mjuros_ind,'999,999.99')+' - TOTAL:'+TRANSFORM(mvlr_ind,'9,999,999.99')
                        ? REPLICATE("=",137)
                        mtot_ind := mvlr_ind := msub_ind := mjuros_ind := 0
                ENDIF
                ?
                imprt(mtipo_imp,'C')
                ? "*** RESUMO FINAL ***"
                ?
                ? "Total de Documentos a RECEBER no periodo  Quantd.: "+transform(tot_g,"9999")+" - Sub-Total: "+transform(tot_gin,"@E 99,999,999.99")+' Juros+Multa: '+transform(mtot_juros,"@E 9,999,999.99")+' - Total: '+transform(tot_gin+mtot_juros,"@E 9,999,999.99")
                ?
                ? time()
                EJECT
                SETPRC(00,00)
        ENDIF
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

