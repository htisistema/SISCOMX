*****************************************************
* LISTAGEM RESUMO DE MOVIMENTO PELO PEDIDO (RESUMO)
****************************************************
MEMVAR getlist,nivel_acess,mdata_sis

FUNCTION sac5ped2
**************
LOCAL MPRG:='SAC5PED2',;
      lci:=0,cci:=0,lba:=22,cba:=78,opcao,mtot_ped,mtot_dia,mtot_geral,;
      mnum_ped,mdat_ped,msit,mopcao,mtot_vol,mcancel,mtp,;
      mcodvend,mvendedor,mcod_oper,mtot_peso:=0,mproducao:=' ',malt_ope,;
      mtipo_rel,mcod_ope,mdat_pag,mtip_cons:=' ',mexp:='  ',mpdata,mvlr_ped:=0,;
      mped_vol:=0,mped_peso:=0,mped_itens:=0,mpoint:=0,mqtd_itens:=0,;
      mtot_itens:=0,mqtd_ped:=0,mhora,mnota:=' ',m_uf:={},i:=0,mrec,msele,morde,;
      mso_exp:=' ',msint:='A',m_pedidos:={},x,y,mordem:='3',mtot_ipi:=0,mtelemark:=' ',;
      maprazo:='N',mprazo,mipi_dia:=0,mipi_ger:=0,mliberar:=' ',mforma_pg:='  ',mvlr_av:=0,;
      mtot_av:=0

PRIVATE mcod_vend,mcod_cli,mcli_ven:='N',mdata_dia,;
        mtraco,telaprint,mtit,mtipo,mpag,mcliente,mcgc,mcpf,mdata1,mdata2,muf,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),marq_ali,mcodcli,mcodemp:=SPACE(3),;
        mcod_forn:=0,mvenda_av:='N',cons_cli:={}

IF ! ver_nivel(mprg,'RELATORIO MOVIMENTO P/PEDIDO OU ORCAMENTOS','1456',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('=',132)
*----------------------------------------------------------------------------
CLOSE ALL
//
IF ! AbriArq('sactotnt','totnt');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('sacorcam','orcam');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
op_tela(lci,cci,lba+2,cba,' Movimento de Pedido ')
WHILE .T.
        mtipo_imp := m_indiv[1,18]
        ASIZE(m_uf,0)
        AADD(m_uf,{'AC',0,0});AADD(m_uf,{'AL',0,0});AADD(m_uf,{'AP',0,0});AADD(m_uf,{'AM',0,0})
        AADD(m_uf,{'BA',0,0});AADD(m_uf,{'CE',0,0});AADD(m_uf,{'ES',0,0});AADD(m_uf,{'GO',0,0})
        AADD(m_uf,{'MA',0,0});AADD(m_uf,{'MT',0,0});AADD(m_uf,{'MS',0,0});AADD(m_uf,{'MG',0,0})
        AADD(m_uf,{'PA',0,0});AADD(m_uf,{'PB',0,0});AADD(m_uf,{'PR',0,0});AADD(m_uf,{'PE',0,0})
        AADD(m_uf,{'PI',0,0});AADD(m_uf,{'RN',0,0});AADD(m_uf,{'RS',0,0});AADD(m_uf,{'RR',0,0})
        AADD(m_uf,{'RO',0,0});AADD(m_uf,{'RJ',0,0});AADD(m_uf,{'SC',0,0});AADD(m_uf,{'SE',0,0})
        AADD(m_uf,{'SP',0,0});AADD(m_uf,{'TO',0,0});AADD(m_uf,{'DF',0,0})
        mdata1 := mdata2 := mdata_sis
        mcancel := mliberar := SPACE(1)
        mtp := 'E'
        mcod_vend := mcod_ope := mcod_cli := mcod_forn := mvlr_ped := mqtd_itens:=;
        mqtd_ped := mtot_itens := opcao := mtot_av := mvlr_av := 0
        muf := mforma_pg := SPACE(2)
        mproducao := mtipo_rel := SPACE(1)
        mcodemp    := SPACE(3)
        mso_exp    := mtelemark := maprazo := mvenda_av := 'N'
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(lci+1,cci+2);DEVOUT('Tipo Consulta.[P]edidos ou [O]rcamento:')
        DEVPOS(lci+2,cci+2);DEVOUT('Cod.da Empresa.:')
        DEVPOS(lci+3,cci+2);DEVOUT('Cod. Cliente...:')
        DEVPOS(lci+4,cci+2);DEVOUT('Cod. Vendedor..:')
        DEVPOS(lci+5,cci+2);DEVOUT('Cod. Operador..:')
        DEVPOS(lci+6,cci+2);DEVOUT('Cod. Fabricante:')
        DEVPOS(lci+7,cci+2);DEVOUT('Sigla do Estado que Deseja..........:')
        DEVPOS(lci+8,cci+2);DEVOUT('Vendedor Relacionado c/Cliente [s/N]:')
        DEVPOS(lci+9,cci+2);DEVOUT('Pedido c/Vlr.Acima de R$............:')
        DEVPOS(lci+10,cci+2);DEVOUT('Pedido c/Qtd. de Itens Acima de.....:')
        DEVPOS(lci+11,cci+2);DEVOUT('Data Inicial...:')
        DEVPOS(lci+12,cci+2);DEVOUT('Data Final.....:')
        DEVPOS(lci+13,cci+2);DEVOUT('Tipo de Relatorio [R]esumo [E]xtrato:')
        DEVPOS(lci+14,cci+2);DEVOUT('So os PEDIDOS EXPEDIDOS [s/N].......:')
        DEVPOS(lci+15,cci+2);DEVOUT('So os PEDIDOS de TELEMARKETING [s/N]:')
        DEVPOS(lci+16,cci+2);DEVOUT('So os PEDIDOS venda APRAZO.....[s/N]:')
        DEVPOS(lci+17,cci+2);DEVOUT('So os PEDIDOS c/Tipo de Liberacao...:')
        DEVPOS(lci+18,cci+2);DEVOUT('Forma de Pagamento que Desejar......:')
        DEVPOS(lci+19,cci+2);DEVOUT('So Pedidos com ENTRADA Avista [s/N].:')
        DEVPOS(lci+21,cci+2);DEVOUT('Estado Processado...................:')
        IF ver_serie() = '141287'
                DEVPOS(lci+22,cci+2);DEVOUT('[P]roducao [N]ao Produto ou Branco..:')
        ENDIF
        setcor(1)
        @ lci+1,cci+43 GET mtip_cons pict "@!" VALID mtip_cons $ 'P,O'
        @ lci+2,cci+19 GET mcodemp PICT "999" VALID ver_emp(mcodemp,lci+2,cci+23,,'*') WHEN mmult_emp ='S'
        @ lci+3,cci+19 GET mcod_cli pict "99999" VALID ver_cli(mcod_cli,lci+3,cci+23) WHEN mcod_vend = 0
        @ lci+4,cci+19 GET mcod_vend pict "999" VALID ven(mcod_vend,lci+4,cci+23) WHEN EMPTY(mcod_cli)
        @ lci+5,cci+19 GET mcod_ope pict "999" VALID ven(mcod_ope,lci+5,cci+23) WHEN EMPTY(mcod_cli)
        @ lci+6,cci+19 GET mcod_forn PICT '9999' VALID v_fornece(mcod_forn,lci+6,cci+24)
        @ lci+7,cci+40 GET muf PICT '@!' VALID IF(muf='TD',.T.,v_uf(muf)) .AND. lim_get() WHEN men_get(lci+8,cci+40,'Digite a Sigla do Estado que deseja - [TD] p/imprimir SINTETICO ou deixe em BRANCO para imprimir todos')
        @ lci+8,cci+40 GET mcli_ven PICT '@!' VALID mcli_ven $ 'S,N' WHEN ! EMPTY(mcod_vend)
        @ lci+9,cci+40 GET mvlr_ped PICT '9,999,999.99'
        @ lci+10,cci+40 GET mqtd_itens PICT '9,999.99'
        @ lci+11,cci+19 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+12,cci+19 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+13,cci+40 GET mtipo_rel PICT '@!' VALID mtipo_rel $ 'E,R'
        @ lci+14,cci+40 GET mso_exp PICT '@!' VALID mso_exp $ 'S,N'
        @ lci+15,cci+40 GET mtelemark PICT '@!' VALID mtelemark $ 'S,N'
        @ lci+16,cci+40 GET maprazo PICT '@!' VALID maprazo $ 'S,N'
        @ lci+17,cci+40 GET mliberar PICT '@!' VALID mliberar $ 'L,A,Q,P,F, ' .AND. lim_get() WHEN men_get(lci+18,cci+40,'Digite a [L]iberado - [A] Em Analise - [Q] Cheque - [P]roducao - [F]aturamento ou Deixe em BRANCO para imprimir todos')
        @ lci+18,cci+40 GET mforma_pg PICT '@!' VALID lim_get() WHEN men_get(lci+19,cci+40,'Digite a FORMA DE PAGAMENTO QUE DESEJA ou Deixe em BRANCO para imprimir todos')
        @ lci+19,cci+40 GET mvenda_av PICT '@!' VALID mvenda_av $ 'S,N'
        @ lci+22,cci+40 GET mproducao PICT '@!' VALID mproducao $ 'P,N, ' WHEN ver_serie() = '141287'
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF mtip_cons = 'P'
                marq_ali := 'ped_s'
        ELSE
                marq_ali := 'orcam'
        ENDIF
        setcor(10)
        @ lci+20,cci+2 PROMPT '  Aberto '
        @ lci+20,cci+11 PROMPT '  Pagos '
        @ lci+20,cci+19 PROMPT '  Geral '
        @ lci+20,cci+27 PROMPT '  Alterados '
        @ lci+20,cci+39 PROMPT '  Cancelados '
        SET INTEN ON
        MENU TO opcao
        setcor(1)
        
        op_tela(10,05,11,75,'Tipo de Relatorio')
        msint := 'A'
        setcor(3)
        DEVPOS(00,00);DEVOUT('[A]nalitico [S]intetico Cliente [V]Sintetico Vendedor:')
        setcor(1)
        @ 00,COL()+1 GET msint VALID msint $ 'A,S,V'
        READ
        wvw_lclosewindow()
        IF msint = 'S' .OR. msint = 'V'
                mordem:=mensagem1('Ordem do Relatorio [3]p/Codigo - [4]p/Alfabetica:','3','3,4')
        ENDIF
        IF LASTKEY() = 27;LOOP;ENDIF
        ****************
        SELE(marq_ali);ORDSETFOCUS(2)
        GO TOP
        ****************
        IF opcao = 1
                mtit = 'Movimento de Pedido (ABERTO)'
        ELSEIF opcao = 2
                mtit = 'Movimento de Pedido (PAGOS)'
                mtp := mensagem1('Opcoes pela [E]missao ou [P]agamento: ','E','E,P')
                IF mtp = 'E'
                        mtit = mtit + ' p/Emissao'
                ELSE
                        mtit = mtit + ' p/Data Pagamento'
                        ****************
                        SELE(marq_ali);ORDSETFOCUS(5)
                        GO TOP
                        ****************
                ENDIF
        ELSEIF opcao = 3
                mtit = 'Movimento de Pedido (GERAL)'
        ELSEIF opcao = 4
                mtit = 'Movimento de Pedido (ALTERADOS)'
        ELSEIF opcao = 5
                mtit = 'Movimento de Pedido (CANCELADOS)'
                mcancel := ' '
                mcancel := mensagem1('Deseja Imprimir o [R]esumo ou [C]ompleto: ',' ','R,C')
                mtp := mensagem1('Opcoes pela [E]missao ou [P]Cancelamento: ','E','E,P')
                IF mtp = 'E'
                        mtit = mtit + ' p/Emissao'
                ELSE
                        mtit = mtit + ' p/Data Cancelamento'
                        ****************
                        SELE(marq_ali);ORDSETFOCUS(5)
                        GO TOP
                        ****************
                ENDIF
        ENDIF
        IF ! EMPTY(mcodemp)
                mtit := mtit + ' - Empresa: '+mcodemp
        ENDIF
        (marq_ali)->(DBSEEK(DTOS(mdata1),.T.))
        marq := 'RES_PED.REL'
        IF ! imp_arq('RES_PED.REL','R');LOOP;ENDIF
        IF mcancel = 'C'
                sac5pe21()
                conf_impressao('RES_PED.REL')
                LOOP
        ENDIF
        msele:=SELE();morde:=INDEXORD()
        mrec := RECNO()
        mtot_av := 0
        IF muf = 'TD'
                i:=0
                FOR i = 1 TO LEN(m_uf)
                        SETPOS(lci+21,cci+40);DISPOUT(m_uf[i,1])
                        ****************
                        SELE('cli');ORDSETFOCUS(11)
                        GO TOP
                        ****************
                        IF ! cli->(DBSEEK(m_uf[i,1]))
                                LOOP
                        ENDIF
                        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                        GO mrec
                        IF (mtp = 'E' .OR. mtp = SPACE(1)) .AND. opcao < 5
                                mpag = 1
                                mtot_vol := mtot_dia := mtot_ped := mtot_geral := ;
                                mtot_itens := mqtd_ped := mtot_ipi := mipi_dia := ;
                                mipi_ger := 0
                                mdata_dia := (marq_ali)->pdat_ped
                                mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)+' do Estado: '+m_uf[i,1]
                                cabecalho(mpag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,02);DEVOUT('Data')
                                DEVPOS(PROW(),09);DEVOUT('Pedido')
                                DEVPOS(PROW(),16);DEVOUT('Cliente')
                                DEVPOS(PROW(),57);DEVOUT('Itens')
                                DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                DEVPOS(PROW(),74);DEVOUT('Situacao')
                                DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                DEVPOS(PROW(),112);DEVOUT('Ope')
                                DEVPOS(PROW(),116);DEVOUT('Exp')
                                DEVPOS(PROW(),120);DEVOUT('Alt')
                                DEVPOS(PROW(),124);DEVOUT('    Nota')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                mpdata := (marq_ali)->pdat_ped
                                IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                WHILE mpdata <= mdata2 .AND. ! EOF()
                                        prog_imp(RECNO())
                                        mpdata := (marq_ali)->pdat_ped
                                        IF mvenda_av = 'S'
                                                mvlr_av := 0
                                                mvlr_av := venda_av((marq_ali)->pnum_ped)
                                                IF  mvlr_av = 0
                                                        SKIP;LOOP
                                                ENDIF
                                        ENDIF
                                        IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                        IF opcao = 4 .AND. (! EMPTY(mcod_ope) .AND. STRZERO(mcod_ope,3) <> (marq_ali)->palt_ope)
                                                SKIP;LOOP
                                        ELSEIF (! EMPTY(mcod_ope) .AND. STRZERO(mcod_ope,3) <> (marq_ali)->pcod_oper)
                                                SKIP;LOOP
                                        ENDIF
                                        IF (! EMPTY(mproducao) .AND. mproducao <> (marq_ali)->pproducao);
                                           .OR. (! EMPTY(mcod_vend) .AND. STRZERO(mcod_vend,3) <> (marq_ali)->pcod_vend);
                                           .OR. (! EMPTY(mcod_cli) .AND. (marq_ali)->pcod_cli<>mcod_cli);
                                           .OR. (! EMPTY(mliberar) .AND. mliberar <> (marq_ali)->ppag);
                                           .OR. (! EMPTY(mcodemp) .AND. mcodemp <> (marq_ali)->pempresa);
                                           .OR. (! EMPTY(mforma_pg) .AND. mforma_pg <> SUBSTR((marq_ali)->pcond_inte,1,2));
                                           .OR. (mtelemark = 'S' .AND. (marq_ali)->pstat_item <> 'T');
                                           .OR. (maprazo = 'S' .AND. (marq_ali)->ptp_vend <> 'AP');
                                           .OR. (mso_exp='S' .AND. EMPTY((marq_ali)->pexpedi));
                                           .OR. (mcli_ven = 'S' .AND. cli->codvend <> STRZERO(mcod_vend,3));
                                           .OR. (! EMPTY(mcod_cli) .AND. (marq_ali)->pcod_cli<>mcod_cli);
                                           .OR. (opcao = 1 .AND. ((marq_ali)->ppag = 'C' .OR. (marq_ali)->ppag <> ' '));
                                           .OR. (opcao = 2 .AND. ((marq_ali)->ppag = 'C' .OR. (marq_ali)->ppag <> '*'));
                                           .OR. (opcao = 5 .AND. (marq_ali)->ppag <> 'C')
                                                SKIP;LOOP
                                        ENDIF
                                        ver_cli(VAL((marq_ali)->pcod_cli),,,1)
                                        IF ! EMPTY(m_uf[i,1])
                                                IF ! ver_cli(VAL((marq_ali)->pcod_cli),,,1);
                                                   .OR. m_uf[i,1] <> cli->uf
                                                        SKIP;LOOP
                                                ENDIF
                                        ENDIF
                                        IF mdata_dia <> (marq_ali)->pdat_ped .AND. mtot_dia > 0
                                                IF PROW() >= 57
                                                        mpag ++
                                                        EJECT
                                                        cabecalho(mpag,mtit,mtipo)
                                                        imprt(mtipo_imp,'C')
                                                        DEVPOS(PROW()+1,02);DEVOUT('Data')
                                                        DEVPOS(PROW(),09);DEVOUT('Pedido')
                                                        DEVPOS(PROW(),16);DEVOUT('Cliente')
                                                        DEVPOS(PROW(),57);DEVOUT('Itens')
                                                        DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                                        DEVPOS(PROW(),74);DEVOUT('Situacao')
                                                        DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                                        DEVPOS(PROW(),112);DEVOUT('Ope')
                                                        DEVPOS(PROW(),116);DEVOUT('Exp')
                                                        DEVPOS(PROW(),120);DEVOUT('Alt')
                                                        DEVPOS(PROW(),124);DEVOUT('    Nota')
                                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                                        LOOP
                                                ENDIF
                                                DEVPOS(PROW()+1,59);DEVOUT('==============')
                                                DEVPOS(PROW()+1,00);DEVOUT('TOTAL DO DIA R$:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dia-mipi_dia,'999,999,999.99')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('- IPI:')
                                                DEVPOS(PROW(),PCOL());DEVOUTPICT(mipi_dia,'9,999,999.99')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('- GERAL:')
                                                DEVPOS(PROW(),PCOL());DEVOUTPICT(mtot_dia,'999,999,999.99')
                                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                                                mdata_dia := (marq_ali)->pdat_ped
                                                mtot_dia := mipi_dia := 0
                                        ENDIF
                                        mdat_ped := (marq_ali)->pdat_ped
                                        mdat_pag := (marq_ali)->pdatapag
                                        mcodcli := VAL((marq_ali)->pcod_cli)
                                        mnum_ped := (marq_ali)->pnum_ped
                                        mcodvend := (marq_ali)->pcod_vend
                                        mvendedor := (marq_ali)->pvendedor
                                        mcod_oper := (marq_ali)->pcod_oper
                                        malt_ope  := (marq_ali)->palt_ope
                                        mhora     := (marq_ali)->phora
                                        mprazo    := 'Cond.Pagmento: '+(marq_ali)->ptp_vend+' - '+(marq_ali)->pcond_inte
                                        IF (marq_ali)->ppag = '*'
                                                msit := DTOC(mdat_pag)
                                        ELSEIF (marq_ali)->ppag = 'C'
                                                msit := 'cancel.'
                                        ELSE
                                                msit := 'aberto  '
                                        ENDIF
                                        IF (marq_ali)->pentreg = '*'
                                                msit := msit+' - entregue'
                                        ELSE
                                                msit := msit+' - nao entr'
                                        ENDIF
                                        IF (marq_ali)->pexpedi = '*'
                                                mexp := 'OK'
                                        ELSE
                                                mexp := '  '
                                        ENDIF
                                        mped_vol := mped_peso := mped_itens := ;
                                        mtot_ped := mtot_ipi := 0
                                        mpoint := RECNO()
                                        IF ! EMPTY(mvlr_ped) .OR. ! EMPTY(mqtd_itens)
                                                WHILE mnum_ped = (marq_ali)->pnum_ped .AND. ! EOF()     //.AND. ! EMPTY(mvlr_ped) .AND. ! EMPTY(mqtd_itens)
                                                        prog_imp(RECNO())
                                                        IF ! EMPTY(mcod_forn) .AND. (marq_ali)->pcod_fab <> STRZERO(mcod_forn,4);SKIP;LOOP;ENDIF
                                                        mtot_ipi := mtot_ipi + (((marq_ali)->pquantd * (marq_ali)->pvlr_fat) * ((marq_ali)->pipi/100))
                                                        mtot_ped := mtot_ped + ((marq_ali)->pquantd * (marq_ali)->pvlr_fat)
                                                        mped_vol := mped_vol + (marq_ali)->pquantd
                                                        mped_peso := mped_peso + ((marq_ali)->ppeso*(marq_ali)->pquantd)
                                                        mped_itens ++
                                                        SKIP
                                                ENDDO
                                                mipi_ger := mipi_ger + mtot_ipi
                                                mtot_ped := mtot_ped + mtot_ipi
                                        ENDIF
                                        IF (! EMPTY(mvlr_ped) .AND. (mtot_ped < mvlr_ped .OR. msit = 'cancel.'));
                                           .OR. (! EMPTY(mqtd_itens) .AND. (mped_itens < mqtd_itens .OR. msit = 'cancel.'))
                                                LOOP
                                        ENDIF
                                        GO mpoint
                                        IF PROW() >= 57
                                                mpag ++
                                                EJECT
                                                cabecalho(mpag,mtit,mtipo)
                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+1,02);DEVOUT('Data')
                                                DEVPOS(PROW(),09);DEVOUT('Pedido')
                                                DEVPOS(PROW(),16);DEVOUT('Cliente')
                                                DEVPOS(PROW(),57);DEVOUT('Itens')
                                                DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                                DEVPOS(PROW(),74);DEVOUT('Situacao')
                                                DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                                DEVPOS(PROW(),112);DEVOUT('Ope')
                                                DEVPOS(PROW(),116);DEVOUT('Exp')
                                                DEVPOS(PROW(),120);DEVOUT('Alt')
                                                DEVPOS(PROW(),124);DEVOUT('    Nota')
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                                LOOP
                                        ENDIF
                                        DEVPOS(PROW()+1,00);DEVOUT(mdat_ped)
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(mnum_ped)
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(STRZERO(mcodcli,5)+' - ')
                                        ver_cli(mcodcli,,,1)
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(LEFT(mcliente,31))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mped_itens,'99999')
                                        mtot_ipi := mtot_ped := 0
                                        WHILE mnum_ped = (marq_ali)->pnum_ped .AND. ! EOF()
                                                prog_imp(RECNO())
                                                IF ! EMPTY(mcod_forn) .AND. (marq_ali)->pcod_fab <> STRZERO(mcod_forn,4);SKIP;LOOP;ENDIF
                                                mtot_ped := mtot_ped + ((marq_ali)->pquantd * (marq_ali)->pvlr_fat)
                                                mtot_ipi := mtot_ipi + (((marq_ali)->pquantd * (marq_ali)->pvlr_fat) * ((marq_ali)->pipi/100))
                                                mtot_itens ++
                                                IF mtipo_rel = 'E'
                                                        DEVPOS(PROW()+1,10);DEVOUT((marq_ali)->pcod_merc+'-'+(marq_ali)->pmerc+'  '+TRANSFORM((marq_ali)->pquantd,'999,999.99')+'  '+TRANSFORM((marq_ali)->pquantd*(marq_ali)->pvlr_fat,'9,999,999.99'))
                                                ENDIF
                                                IF msit <> 'cancel.'
                                                        mtot_vol := mtot_vol + (marq_ali)->pquantd
                                                        mtot_peso := mtot_peso + ((marq_ali)->ppeso*(marq_ali)->pquantd)
                                                ENDIF
                                                SKIP
                                                mpdata := (marq_ali)->pdat_ped
                                                IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                        ENDDO
                                        IF mvenda_av = 'S'
                                                DEVPOS(PROW()+1,00);DEVOUT('VALOR DA ENTRADA R$: '+TRANSFORM(mvlr_av,'999,999.99'))
                                                mtot_av := mtot_av + mvlr_av
                                        ENDIF
                                        mtot_ped := mtot_ped + mtot_ipi
                                        IF msit = 'cancel.'
                                                mtot_ped := 0
                                        ELSE
                                                mtot_dia := mtot_dia + mtot_ped
                                                mipi_dia := mipi_dia + mtot_ipi
                                                mtot_geral := mtot_geral + mtot_ped
                                                mipi_ger := mipi_ger + mtot_ipi
                                        ENDIF
                                        mqtd_ped ++
                                        IF PROW() >= 57
                                                mpag ++
                                                EJECT
                                                cabecalho(mpag,mtit,mtipo)
                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+1,02);DEVOUT('Data')
                                                DEVPOS(PROW(),09);DEVOUT('Pedido')
                                                DEVPOS(PROW(),16);DEVOUT('Cliente')
                                                DEVPOS(PROW(),57);DEVOUT('Itens')
                                                DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                                DEVPOS(PROW(),74);DEVOUT('Situacao')
                                                DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                                DEVPOS(PROW(),112);DEVOUT('Ope')
                                                DEVPOS(PROW(),116);DEVOUT('Exp')
                                                DEVPOS(PROW(),120);DEVOUT('Alt')
                                                DEVPOS(PROW(),124);DEVOUT('    Nota')
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                                LOOP
                                        ENDIF
                                        IF mtipo_rel = 'E'
                                                DEVPOS(PROW()+1,66);DEVOUT('--------------')
                                                DEVPOS(PROW()+1,53);DEVOUT('Total Pedido:'+TRANSFORM(mtot_ped,'999,999,999.99'))
                                        ELSE
                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_ped,'999,999.99')
                                        ENDIF
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(msit)
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(mcodvend+'-'+LEFT(mvendedor,13))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(mcod_oper)
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(mexp)
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(malt_ope)
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(v_ped_nt(VAL(mnum_ped),'*','*'))
                                        IF mimp_tipo = 2
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(mhora)
                                        ENDIF
                                        IF maprazo = 'S'
                                                DEVPOS(PROW()+1,00);DEVOUT(mprazo)
                                        ENDIF
                                        m_uf[i,2] := m_uf[i,2] + 1
                                        m_uf[i,3] := m_uf[i,3] + mtot_ped
                                ENDDO
                                IF PROW() >= 57
                                        mpag ++
                                        EJECT
                                        cabecalho(mpag,mtit,mtipo)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,02);DEVOUT('Data')
                                        DEVPOS(PROW(),09);DEVOUT('Pedido')
                                        DEVPOS(PROW(),16);DEVOUT('Cliente')
                                        DEVPOS(PROW(),57);DEVOUT('Itens')
                                        DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                        DEVPOS(PROW(),74);DEVOUT('Situacao')
                                        DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                        DEVPOS(PROW(),112);DEVOUT('Ope')
                                        DEVPOS(PROW(),116);DEVOUT('Exp')
                                        DEVPOS(PROW(),120);DEVOUT('Alt')
                                        DEVPOS(PROW(),124);DEVOUT('    Nota')
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                        LOOP
                                ENDIF
                                DEVPOS(PROW()+1,59);DEVOUT('==============')
                                DEVPOS(PROW()+1,00);DEVOUT('TOTAL DO DIA R$:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dia-mipi_dia,'999,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('- IPI:')
                                DEVPOS(PROW(),PCOL());DEVOUTPICT(mipi_dia,'9,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('- GERAL:')
                                DEVPOS(PROW(),PCOL());DEVOUTPICT(mtot_dia,'999,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                                IF PROW() >= 55
                                        mpag ++
                                        EJECT
                                        cabecalho(mpag,mtit,mtipo)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,02);DEVOUT('Data')
                                        DEVPOS(PROW(),09);DEVOUT('Pedido')
                                        DEVPOS(PROW(),16);DEVOUT('Cliente')
                                        DEVPOS(PROW(),57);DEVOUT('Itens')
                                        DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                        DEVPOS(PROW(),74);DEVOUT('Situacao')
                                        DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                        DEVPOS(PROW(),112);DEVOUT('Ope')
                                        DEVPOS(PROW(),116);DEVOUT('Exp')
                                        DEVPOS(PROW(),120);DEVOUT('Alt')
                                        DEVPOS(PROW(),124);DEVOUT('    Nota')
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ENDIF
                                DEVPOS(PROW()+2,00);DEVOUT('TOTAL GERAL em R$:')
                                DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mtot_geral-mipi_ger,'999,999,999.99')))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('- IPI R$:')
                                DEVPOS(PROW(),PCOL());DEVOUT(LTRIM(TRANSFORM(mipi_ger,'999,999,999.99')))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('- Total R$:')
                                DEVPOS(PROW(),PCOL());DEVOUT(LTRIM(TRANSFORM(mtot_geral,'999,999,999.99')))
                                DEVPOS(PROW()+1,00);DEVOUT('Total de VOLUME..:')
                                DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mtot_vol,'999,999,999.99')))
                                DEVPOS(PROW()+1,00);DEVOUT('Total PESO BRUTO.:')
                                DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mtot_peso,'999,999.99')))
                                DEVPOS(PROW()+1,00);DEVOUT('Total PEDIDOS:')
                                DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mqtd_ped,'999,999.99')))
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Total ITENS:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(mtot_itens,'999,999.99')))
                                DEVPOS(PROW()+1,00);DEVOUT('Total ENTRADA R$:')
                                DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mtot_av,'999,999.99')))
                                DEVPOS(PROW()+2,00);DEVOUT(TIME())
                                imprt(mtipo_imp,'N')
                                EJECT
                        ELSE
                                mpag = 1
                                mtot_vol := mtot_dia := mtot_ipi := mtot_ped := ;
                                mtot_geral := mtot_ipi  := mipi_dia := mipi_ger := 0
                                mdata_dia := (marq_ali)->pdat_ped
                                mexp := '  '
                                mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)+' do Estado: '+m_uf[i,1]
                                cabecalho(mpag,mtit,mtipo)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,02);DEVOUT('Data')
                                DEVPOS(PROW(),09);DEVOUT('Pedido')
                                DEVPOS(PROW(),16);DEVOUT('Cliente')
                                DEVPOS(PROW(),57);DEVOUT('Itens')
                                DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                DEVPOS(PROW(),74);DEVOUT('Situacao')
                                DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                DEVPOS(PROW(),112);DEVOUT('Ope')
                                DEVPOS(PROW(),116);DEVOUT('Exp')
                                DEVPOS(PROW(),120);DEVOUT('Alt')
                                DEVPOS(PROW(),124);DEVOUT('    Nota')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                mpdata := (marq_ali)->pdat_ped
                                IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                WHILE mpdata <= mdata2 .AND. ! EOF()
                                        prog_imp(RECNO())
                                        mpdata := (marq_ali)->pdat_ped
                                        IF mvenda_av = 'S'
                                                mvlr_av := 0
                                                mvlr_av := venda_av((marq_ali)->pnum_ped)
                                                IF  mvlr_av = 0
                                                        SKIP;LOOP
                                                ENDIF
                                        ENDIF
                                        IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                        IF opcao = 4 .AND. (! EMPTY(mcod_ope) .AND. STRZERO(mcod_ope,3) <> (marq_ali)->palt_ope)
                                                SKIP;LOOP
                                        ELSEIF (! EMPTY(mcod_ope) .AND. STRZERO(mcod_ope,3) <> (marq_ali)->pcod_oper)
                                                SKIP;LOOP
                                        ENDIF
                                        ver_cli(VAL((marq_ali)->pcod_cli),,,1)
                                        IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                        IF (! EMPTY(mproducao) .AND. mproducao <> (marq_ali)->pproducao);
                                           .OR. (! EMPTY(mcod_vend) .AND. STRZERO(mcod_vend,3) <> (marq_ali)->pcod_vend);
                                           .OR. (! EMPTY(mcod_cli) .AND. (marq_ali)->pcod_cli<>mcod_cli);
                                           .OR. (! EMPTY(mliberar) .AND. mliberar <> (marq_ali)->ppag);
                                           .OR. (! EMPTY(mforma_pg) .AND. mforma_pg <> SUBSTR((marq_ali)->pcond_inte,1,2));
                                           .OR. (mtelemark = 'S' .AND. (marq_ali)->pstat_item <> 'T');
                                           .OR. (! EMPTY(mcodemp) .AND. mcodemp <> (marq_ali)->pempresa);
                                           .OR. (maprazo = 'S' .AND. (marq_ali)->ptp_vend <> 'AP');
                                           .OR. (mso_exp='S' .AND. EMPTY((marq_ali)->pexpedi));
                                           .OR. (mcli_ven = 'S' .AND. cli->codvend <> STRZERO(mcod_vend,3));
                                           .OR. (! EMPTY(muf) .AND. muf <> cli->uf);
                                           .OR. (opcao = 1 .AND. ((marq_ali)->ppag = 'C' .OR. (marq_ali)->ppag <> ' '));
                                           .OR. (opcao = 2 .AND. ((marq_ali)->ppag = 'C' .OR. (marq_ali)->ppag <> '*'));
                                           .OR. (opcao = 5 .AND. ((marq_ali)->ppag <> 'C'))
                                                SKIP;LOOP
                                        ENDIF
                                        IF mdata_dia <> mpdata .AND. mtot_dia > 0
                                                IF PROW() >= 57
                                                        mpag ++
                                                        EJECT
                                                        cabecalho(mpag,mtit,mtipo)
                                                        imprt(mtipo_imp,'C')
                                                        DEVPOS(PROW()+1,02);DEVOUT('Data')
                                                        DEVPOS(PROW(),09);DEVOUT('Pedido')
                                                        DEVPOS(PROW(),16);DEVOUT('Cliente')
                                                        DEVPOS(PROW(),57);DEVOUT('Itens')
                                                        DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                                        DEVPOS(PROW(),74);DEVOUT('Situacao')
                                                        DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                                        DEVPOS(PROW(),112);DEVOUT('Ope')
                                                        DEVPOS(PROW(),116);DEVOUT('Exp')
                                                        DEVPOS(PROW(),120);DEVOUT('Alt')
                                                        DEVPOS(PROW(),124);DEVOUT('    Nota')
                                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                                        LOOP
                                                ENDIF
                                                DEVPOS(PROW()+1,59);DEVOUT('==============')
                                                DEVPOS(PROW()+1,00);DEVOUT('TOTAL DO DIA R$:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dia-mipi_dia,'999,999,999.99')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('- IPI:')
                                                DEVPOS(PROW(),PCOL());DEVOUTPICT(mipi_dia,'9,999,999.99')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('- GERAL:')
                                                DEVPOS(PROW(),PCOL());DEVOUTPICT(mtot_dia,'999,999,999.99')
                                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                                                mdata_dia := (marq_ali)->pdat_ped
                                                mtot_dia := mipi_dia := 0
                                        ENDIF
                                        mdat_ped := (marq_ali)->pdat_ped
                                        mdat_pag := (marq_ali)->pdatapag
                                        mcodcli := VAL((marq_ali)->pcod_cli)
                                        mnum_ped := (marq_ali)->pnum_ped
                                        mcodvend := (marq_ali)->pcod_vend
                                        mvendedor := (marq_ali)->pvendedor
                                        mcod_oper := (marq_ali)->pcod_oper
                                        malt_ope  := (marq_ali)->palt_ope
                                        mhora     := (marq_ali)->phora
                                        mprazo    := 'Cond.Pagmento: '+(marq_ali)->ptp_vend+' - '+(marq_ali)->pcond_inte
                                        mtot_ipi := mtot_ped := 0
                                        IF (marq_ali)->ppag = '*'
                                                msit := DTOC(mdat_pag)
                                        ELSEIF (marq_ali)->ppag = 'C'
                                                msit := 'cancel.'
                                        ELSE
                                                msit := 'aberto'
                                        ENDIF
                                        IF (marq_ali)->pentreg = '*'
                                                msit := msit+' - entregue'
                                        ELSE
                                                msit := msit+' - nao entr'
                                        ENDIF
                                        IF (marq_ali)->pexpedi = '*'
                                                mexp := 'OK'
                                        ELSE
                                                mexp := '  '
                                        ENDIF
                                        mped_vol := mped_peso := mped_itens := ;
                                        mtot_ipi := mtot_ped := 0
                                        WHILE mnum_ped = (marq_ali)->pnum_ped .AND. ! EOF()
                                                mtot_ped := mtot_ped + ((marq_ali)->pquantd * (marq_ali)->pvlr_fat)
                                                mtot_ipi := mtot_ipi + (((marq_ali)->pquantd * (marq_ali)->pvlr_fat) * ((marq_ali)->pipi/100))
                                                prog_imp(RECNO())
                                                IF ! EMPTY(mcod_forn) .AND. (marq_ali)->pcod_fab <> STRZERO(mcod_forn,4);SKIP;LOOP;ENDIF
                                                IF msit <> 'cancel.'
                                                        mtot_vol := mtot_vol + (marq_ali)->pquantd
                                                        mtot_peso := mtot_peso + ((marq_ali)->ppeso*(marq_ali)->pquantd)
                                                        mped_vol := mped_vol + (marq_ali)->pquantd
                                                        mped_peso := mped_peso + ((marq_ali)->ppeso*(marq_ali)->pquantd)
                                                        mped_itens ++
                                                ENDIF
                                                SKIP
                                                mpdata := (marq_ali)->pdat_ped
                                                IF mtp = 'P'
                                                        mpdata := (marq_ali)->pdatapag
                                                ENDIF
                                        ENDDO
                                        mtot_ped := mtot_ped + mtot_ipi
                                        IF (mtot_ped < mvlr_ped .AND. ! EMPTY(mvlr_ped)) .OR. msit = 'cancel.'
                                                mtot_vol := mtot_vol - mped_vol
                                                mtot_peso := mtot_peso - mped_peso
                                                LOOP
                                        ENDIF
                                        IF ! EMPTY(mqtd_itens) .AND. (mped_itens < mqtd_itens .OR. msit = 'cancel.')
                                                mtot_vol := mtot_vol - mped_vol
                                                mtot_peso := mtot_peso - mped_peso
                                                LOOP
                                        ENDIF
                                        mqtd_ped ++
                                        mtot_itens := mtot_itens + mped_itens
                                        IF msit = 'cancel.'
                                                mtot_ipi := mtot_ped := 0
                                        ELSE
                                                mtot_dia := mtot_dia + mtot_ped
                                                mipi_dia := mipi_dia + mtot_ipi
                                                mtot_geral := mtot_geral + mtot_ped
                                                mipi_ger := mipi_ger + mtot_ipi
                                        ENDIF
                                        IF PROW() >= 57
                                                mpag ++
                                                EJECT
                                                cabecalho(mpag,mtit,mtipo)
                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+1,02);DEVOUT('Data')
                                                DEVPOS(PROW(),09);DEVOUT('Pedido')
                                                DEVPOS(PROW(),16);DEVOUT('Cliente')
                                                DEVPOS(PROW(),57);DEVOUT('Itens')
                                                DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                                DEVPOS(PROW(),74);DEVOUT('Situacao')
                                                DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                                DEVPOS(PROW(),112);DEVOUT('Ope')
                                                DEVPOS(PROW(),116);DEVOUT('Exp')
                                                DEVPOS(PROW(),120);DEVOUT('Alt')
                                                DEVPOS(PROW(),124);DEVOUT('    Nota')
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                                LOOP
                                        ENDIF
                                        DEVPOS(PROW()+1,00);DEVOUT(mdat_ped)
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(mnum_ped)
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(STRZERO(mcodcli,5)+' - ')
                                        ver_cli(mcodcli,,,1)
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(LEFT(mcliente,31))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mped_itens,'99999')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_ped,'999,999.99')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(msit)
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(mcodvend+'-'+LEFT(mvendedor,13))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(mcod_oper)
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(mexp)
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(malt_ope)
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(v_ped_nt(VAL(mnum_ped),'*','*'))
                                        IF mimp_tipo = 2
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(mhora)
                                        ENDIF
                                        IF maprazo = 'S'
                                                DEVPOS(PROW()+1,00);DEVOUT(mprazo)
                                        ENDIF
                                        IF mvenda_av = 'S'
                                                DEVPOS(PROW()+1,00);DEVOUT('VALOR DA ENTRADA R$: '+TRANSFORM(mvlr_av,'999,999.99'))
                                                mtot_av := mtot_av + mvlr_av
                                        ENDIF
                                        m_uf[i,2] := m_uf[i,2] + 1
                                        m_uf[i,3] := m_uf[i,3] + mtot_ped
                                ENDDO
                                IF PROW() >= 57
                                        mpag ++
                                        EJECT
                                        cabecalho(mpag,mtit,mtipo)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,02);DEVOUT('Data')
                                        DEVPOS(PROW(),09);DEVOUT('Pedido')
                                        DEVPOS(PROW(),16);DEVOUT('Cliente')
                                        DEVPOS(PROW(),57);DEVOUT('Itens')
                                        DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                        DEVPOS(PROW(),74);DEVOUT('Situacao')
                                        DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                        DEVPOS(PROW(),112);DEVOUT('Ope')
                                        DEVPOS(PROW(),116);DEVOUT('Exp')
                                        DEVPOS(PROW(),120);DEVOUT('Alt')
                                        DEVPOS(PROW(),124);DEVOUT('    Nota')
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                        LOOP
                                ENDIF
                                DEVPOS(PROW()+1,59);DEVOUT('==============')
                                DEVPOS(PROW()+1,00);DEVOUT('TOTAL DO DIA R$:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dia-mipi_dia,'999,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('- IPI:')
                                DEVPOS(PROW(),PCOL());DEVOUTPICT(mipi_dia,'9,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('- GERAL:')
                                DEVPOS(PROW(),PCOL());DEVOUTPICT(mtot_dia,'999,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                                IF PROW() >= 55
                                        mpag ++
                                        EJECT
                                        cabecalho(mpag,mtit,mtipo)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,02);DEVOUT('Data')
                                        DEVPOS(PROW(),09);DEVOUT('Pedido')
                                        DEVPOS(PROW(),16);DEVOUT('Cliente')
                                        DEVPOS(PROW(),57);DEVOUT('Itens')
                                        DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                        DEVPOS(PROW(),74);DEVOUT('Situacao')
                                        DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                        DEVPOS(PROW(),112);DEVOUT('Ope')
                                        DEVPOS(PROW(),116);DEVOUT('Exp')
                                        DEVPOS(PROW(),120);DEVOUT('Alt')
                                        DEVPOS(PROW(),124);DEVOUT('    Nota')
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ENDIF
                                DEVPOS(PROW()+2,00);DEVOUT('Total GERAL em R$:')
                                DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mtot_geral-mipi_ger,'999,999,999.99')))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('- IPI R$:')
                                DEVPOS(PROW(),PCOL());DEVOUT(LTRIM(TRANSFORM(mipi_ger,'999,999,999.99')))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('- Total R$:')
                                DEVPOS(PROW(),PCOL());DEVOUT(LTRIM(TRANSFORM(mtot_geral,'999,999,999.99')))
                                DEVPOS(PROW()+1,00);DEVOUT('Total de VOLUME..:')
                                DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mtot_vol,'999,999,999.99')))
                                DEVPOS(PROW()+1,00);DEVOUT('Total PESO BRUTO.:')
                                DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mtot_peso,'999,999.99')))
                                DEVPOS(PROW()+1,00);DEVOUT('Total PEDIDOS:')
                                DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mqtd_ped,'999,999.99')))
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Total ITENS:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(mtot_itens,'999,999.99')))
                                DEVPOS(PROW()+2,00);DEVOUT(TIME())
                                imprt(mtipo_imp,'N')
                                EJECT
                        ENDIF
                NEXT
                mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
                cabecalho(mpag,mtit,mtipo)
                DEVPOS(PROW()+1,00);DEVOUT(PADC('RESUMO DOS ESTADOS',80))
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                mtot_ipi := mtot_ped := mtot_geral := i:= mipi_ger := 0
                FOR i = 1 TO LEN(m_uf)
                        IF EMPTY(m_uf[i,2]) .AND. EMPTY(m_uf[i,3])
                                LOOP
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT('Sigla do Estado: '+m_uf[i,1]+'  Qtd.: '+TRANSFORM(m_uf[i,2],'9,999,999')+'  Total R$: '+TRANSFORM(m_uf[i,3],'999,999,999.99')+'  Media R$: '+TRANSFORM(m_uf[i,3]/m_uf[i,2],'999,999,999.99'))
                        mtot_ped := mtot_ped + m_uf[i,2]
                        mtot_geral := mtot_geral + m_uf[i,3]
                NEXT
                DEVPOS(PROW()+1,00);DEVOUT('                            ---------            --------------            --------------')
                DEVPOS(PROW()+1,00);DEVOUT('TOTAL GERAL....:     Qtd.: '+TRANSFORM(mtot_ped,'9,999,999')+'  Total R$: '+TRANSFORM(mtot_geral,'999,999,999.99')+'  Media R$: '+TRANSFORM(mtot_geral/mtot_ped,'999,999,999.99'))
        ELSEIF (mtp = 'E' .OR. EMPTY(mtp)) .AND. opcao < 5
                mpag = 1
                mtot_vol := mtot_dia := mtot_ipi := mtot_ped := ;
                mtot_geral := mtot_itens := mqtd_ped := mipi_dia := mipi_ger := 0
                mdata_dia := (marq_ali)->pdat_ped
                IF ! EMPTY(muf)
                        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)+' do Estado: '+muf
                ELSE
                        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
                ENDIF
                cabecalho(mpag,mtit,mtipo,mprg)
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,02);DEVOUT('Data')
                DEVPOS(PROW(),09);DEVOUT('Pedido')
                DEVPOS(PROW(),16);DEVOUT('Cliente')
                DEVPOS(PROW(),57);DEVOUT('Itens')
                DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                DEVPOS(PROW(),74);DEVOUT('Situacao')
                DEVPOS(PROW(),94);DEVOUT('Vendedor')
                DEVPOS(PROW(),112);DEVOUT('Ope')
                DEVPOS(PROW(),116);DEVOUT('Exp')
                DEVPOS(PROW(),120);DEVOUT('Alt')
                DEVPOS(PROW(),124);DEVOUT('    Nota')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                mpdata := (marq_ali)->pdat_ped
                IF mtp = 'P'
                        mpdata := (marq_ali)->pdatapag
                ENDIF
                IF msint = 'A'
                        WHILE mpdata <= mdata2 .AND. ! EOF()
                                prog_imp(RECNO(),DTOC(mpdata))
                                IF mvenda_av = 'S'
                                        mvlr_av := 0
                                        mvlr_av := venda_av((marq_ali)->pnum_ped)
                                        IF  mvlr_av = 0
                                                SKIP;LOOP
                                        ENDIF
                                ENDIF
                                mpdata := (marq_ali)->pdat_ped
                                IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                IF opcao = 4 .AND. (! EMPTY(mcod_ope) .AND. STRZERO(mcod_ope,3) <> (marq_ali)->palt_ope)
                                        SKIP;LOOP
                                ELSEIF (! EMPTY(mcod_ope) .AND. STRZERO(mcod_ope,3) <> (marq_ali)->pcod_oper)
                                        SKIP;LOOP
                                ENDIF
                                ver_cli(VAL((marq_ali)->pcod_cli),,,1)
                                IF ! EMPTY(muf)
                                        IF ! ver_cli(VAL((marq_ali)->pcod_cli),,,1);
                                           .OR. muf <> cli->uf
                                                SKIP;LOOP
                                        ENDIF
                                ENDIF
                                IF (! EMPTY(mproducao) .AND. mproducao <> (marq_ali)->pproducao);
                                   .OR. (! EMPTY(mcod_vend) .AND. STRZERO(mcod_vend,3) <> (marq_ali)->pcod_vend);
                                   .OR. (! EMPTY(mcod_cli) .AND. (marq_ali)->pcod_cli<>mcod_cli);
                                   .OR. (! EMPTY(mforma_pg) .AND. mforma_pg <> SUBSTR((marq_ali)->pcond_inte,1,2));
                                   .OR. (! EMPTY(mliberar) .AND. mliberar <> (marq_ali)->ppag);
                                   .OR. (mtelemark = 'S' .AND. (marq_ali)->pstat_item <> 'T');
                                   .OR. (! EMPTY(mcodemp) .AND. mcodemp <> (marq_ali)->pempresa);
                                   .OR. (maprazo = 'S' .AND. (marq_ali)->ptp_vend <> 'AP');
                                   .OR. (mso_exp='S' .AND. EMPTY((marq_ali)->pexpedi));
                                   .OR. (mcli_ven = 'S' .AND. cli->codvend <> STRZERO(mcod_vend,3));
                                   .OR. (! EMPTY(mcod_cli) .AND. (marq_ali)->pcod_cli<>mcod_cli);
                                   .OR. (opcao = 1 .AND. ((marq_ali)->ppag = 'C' .OR. (marq_ali)->ppag <> ' '));
                                   .OR. (opcao = 2 .AND. ((marq_ali)->ppag = 'C' .OR. (marq_ali)->ppag <> '*'));
                                   .OR. (opcao = 5 .AND. (marq_ali)->ppag <> 'C')
                                        SKIP;LOOP
                                ENDIF
                                IF mdata_dia <> (marq_ali)->pdat_ped .AND. mtot_dia > 0
                                        IF PROW() >= 55
                                                mpag ++
                                                EJECT
                                                cabecalho(mpag,mtit,mtipo)
                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+1,02);DEVOUT('Data')
                                                DEVPOS(PROW(),09);DEVOUT('Pedido')
                                                DEVPOS(PROW(),16);DEVOUT('Cliente')
                                                DEVPOS(PROW(),57);DEVOUT('Itens')
                                                DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                                DEVPOS(PROW(),74);DEVOUT('Situacao')
                                                DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                                DEVPOS(PROW(),112);DEVOUT('Ope')
                                                DEVPOS(PROW(),116);DEVOUT('Exp')
                                                DEVPOS(PROW(),120);DEVOUT('Alt')
                                                DEVPOS(PROW(),124);DEVOUT('    Nota')
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                        ENDIF
                                        DEVPOS(PROW()+1,59);DEVOUT('==============')
                                        DEVPOS(PROW()+1,00);DEVOUT('TOTAL DO DIA R$:')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dia-mipi_dia,'999,999,999.99')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- IPI:')
                                        DEVPOS(PROW(),PCOL());DEVOUTPICT(mipi_dia,'9,999,999.99')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- GERAL:')
                                        DEVPOS(PROW(),PCOL());DEVOUTPICT(mtot_dia,'999,999,999.99')
                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                        mdata_dia := (marq_ali)->pdat_ped
                                        mtot_dia := mipi_dia := 0
                                ENDIF
                                mdat_ped := (marq_ali)->pdat_ped
                                mdat_pag := (marq_ali)->pdatapag
                                mcodcli := VAL((marq_ali)->pcod_cli)
                                mnum_ped := (marq_ali)->pnum_ped
                                mcodvend := (marq_ali)->pcod_vend
                                mvendedor := (marq_ali)->pvendedor
                                mcod_oper := (marq_ali)->pcod_oper
                                malt_ope  := (marq_ali)->palt_ope
                                mhora     := (marq_ali)->phora
                                mprazo    := 'Cond.Pagmento: '+(marq_ali)->ptp_vend+' - '+(marq_ali)->pcond_inte
                                IF (marq_ali)->ppag = '*'
                                        msit := DTOC(mdat_pag)
                                ELSEIF (marq_ali)->ppag = 'C'
                                        msit := 'cancel.'
                                ELSE
                                        msit := 'aberto '
                                ENDIF
                                IF (marq_ali)->pentreg = '*'
                                        msit := msit+' - entregue'
                                ELSE
                                        msit := msit+' - nao entr'
                                ENDIF
                                IF (marq_ali)->pexpedi = '*'
                                        mexp := 'OK'
                                ELSE
                                        mexp := '  '
                                ENDIF
                                mped_vol := mped_peso := mped_itens := ;
                                mtot_ipi := mtot_ped := 0
                                mpoint := RECNO()
                                IF ! EMPTY(mvlr_ped) .OR. ! EMPTY(mqtd_itens)
                                        WHILE mnum_ped = (marq_ali)->pnum_ped .AND. ! EOF()     //.AND. ! EMPTY(mvlr_ped) .AND. ! EMPTY(mqtd_itens)
                                                prog_imp(RECNO())
                                                IF ! EMPTY(mcod_forn) .AND. (marq_ali)->pcod_fab <> STRZERO(mcod_forn,4);SKIP;LOOP;ENDIF
                                                mtot_ped := mtot_ped + ((marq_ali)->pquantd * (marq_ali)->pvlr_fat)
                                                mtot_ipi := mtot_ipi + (((marq_ali)->pquantd * (marq_ali)->pvlr_fat) * ((marq_ali)->pipi/100))
                                                mped_vol := mped_vol + (marq_ali)->pquantd
                                                mped_peso := mped_peso + ((marq_ali)->ppeso*(marq_ali)->pquantd)
                                                mped_itens ++
                                                SKIP
                                        ENDDO
                                        mtot_ped := mtot_ped + mtot_ipi
                                ENDIF
                                IF (! EMPTY(mvlr_ped) .AND. (mtot_ped < mvlr_ped .OR. msit = 'cancel.'));
                                   .OR. (! EMPTY(mqtd_itens) .AND. (mped_itens < mqtd_itens .OR. msit = 'cancel.'))
                                        LOOP
                                ENDIF
                                GO mpoint
                                IF PROW() >= 55
                                        mpag ++
                                        EJECT
                                        cabecalho(mpag,mtit,mtipo)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,02);DEVOUT('Data')
                                        DEVPOS(PROW(),09);DEVOUT('Pedido')
                                        DEVPOS(PROW(),16);DEVOUT('Cliente')
                                        DEVPOS(PROW(),57);DEVOUT('Itens')
                                        DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                        DEVPOS(PROW(),74);DEVOUT('Situacao')
                                        DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                        DEVPOS(PROW(),112);DEVOUT('Ope')
                                        DEVPOS(PROW(),116);DEVOUT('Exp')
                                        DEVPOS(PROW(),120);DEVOUT('Alt')
                                        DEVPOS(PROW(),124);DEVOUT('    Nota')
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ENDIF
                                DEVPOS(PROW()+1,00);DEVOUT(mdat_ped)
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(mnum_ped)
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(STRZERO(mcodcli,5)+' - ')
                                ver_cli(mcodcli,,,1)
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(LEFT(mcliente,31))
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mped_itens,'99999')
                                mtot_ipi := mtot_ped := 0
                                WHILE mnum_ped = (marq_ali)->pnum_ped .AND. ! EOF()
                                        prog_imp(RECNO())
                                        IF ! EMPTY(mcod_forn) .AND. (marq_ali)->pcod_fab <> STRZERO(mcod_forn,4);SKIP;LOOP;ENDIF
                                        mtot_ped := mtot_ped + ((marq_ali)->pquantd * (marq_ali)->pvlr_fat)
                                        mtot_ipi := mtot_ipi + (((marq_ali)->pquantd * (marq_ali)->pvlr_fat) * ((marq_ali)->pipi/100))
                                        mtot_itens ++
                                        IF mtipo_rel = 'E'
                                                DEVPOS(PROW()+1,10);DEVOUT((marq_ali)->pcod_merc+'-'+(marq_ali)->pmerc+'  '+TRANSFORM((marq_ali)->pquantd,'999,999.99')+'  '+TRANSFORM((marq_ali)->pquantd*(marq_ali)->pvlr_fat,'9,999,999.99'))
                                                IF PROW() >= 55
                                                        mpag ++
                                                        EJECT
                                                        cabecalho(mpag,mtit,mtipo)
                                                        imprt(mtipo_imp,'C')
                                                        DEVPOS(PROW()+1,02);DEVOUT('Data')
                                                        DEVPOS(PROW(),09);DEVOUT('Pedido')
                                                        DEVPOS(PROW(),16);DEVOUT('Cliente')
                                                        DEVPOS(PROW(),57);DEVOUT('Itens')
                                                        DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                                        DEVPOS(PROW(),74);DEVOUT('Situacao')
                                                        DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                                        DEVPOS(PROW(),112);DEVOUT('Ope')
                                                        DEVPOS(PROW(),116);DEVOUT('Exp')
                                                        DEVPOS(PROW(),120);DEVOUT('Alt')
                                                        DEVPOS(PROW(),124);DEVOUT('    Nota')
                                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                                ENDIF
                                        ENDIF
                                        IF SUBSTR(msit,1,7) <> 'cancel.'
                                                mtot_vol := mtot_vol + (marq_ali)->pquantd
                                                mtot_peso := mtot_peso + ((marq_ali)->ppeso*(marq_ali)->pquantd)
                                        ENDIF
                                        SKIP
                                        mpdata := (marq_ali)->pdat_ped
                                        IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                ENDDO
                                mtot_ped := mtot_ped + mtot_ipi
                                IF SUBSTR(msit,1,7) = 'cancel.'
                                        mtot_ipi := mtot_ped := 0
                                ELSE
                                        mtot_dia := mtot_dia + mtot_ped
                                        mipi_dia := mipi_dia + mtot_ipi
                                        mtot_geral := mtot_geral + mtot_ped
                                        mipi_ger := mipi_ger + mtot_ipi
                                ENDIF
                                mqtd_ped ++
                                IF mtipo_rel = 'E'
                                        DEVPOS(PROW()+1,66);DEVOUT('--------------')
                                        DEVPOS(PROW()+1,53);DEVOUT('Total Pedido:'+TRANSFORM(mtot_ped,'999,999,999.99'))
                                        IF PROW() >= 55
                                                mpag ++
                                                EJECT
                                                cabecalho(mpag,mtit,mtipo)
                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+1,02);DEVOUT('Data')
                                                DEVPOS(PROW(),09);DEVOUT('Pedido')
                                                DEVPOS(PROW(),16);DEVOUT('Cliente')
                                                DEVPOS(PROW(),57);DEVOUT('Itens')
                                                DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                                DEVPOS(PROW(),74);DEVOUT('Situacao')
                                                DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                                DEVPOS(PROW(),112);DEVOUT('Ope')
                                                DEVPOS(PROW(),116);DEVOUT('Exp')
                                                DEVPOS(PROW(),120);DEVOUT('Alt')
                                                DEVPOS(PROW(),124);DEVOUT('    Nota')
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                        ENDIF
                                ELSE
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_ped,'999,999.99')
                                ENDIF
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(msit)
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(mcodvend+'-'+LEFT(mvendedor,13))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(mcod_oper)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(mexp)
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(malt_ope)
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(v_ped_nt(VAL(mnum_ped),'*','*'))
                                IF mimp_tipo = 2
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(mhora)
                                ENDIF
                                IF maprazo = 'S'
                                        DEVPOS(PROW()+1,00);DEVOUT(mprazo)
                                ENDIF
                                IF mvenda_av = 'S'
                                        DEVPOS(PROW()+1,00);DEVOUT('VALOR DA ENTRADA R$: '+TRANSFORM(mvlr_av,'999,999.99'))
                                        mtot_av := mtot_av + mvlr_av
                                ENDIF
                                IF PROW() >= 57
                                        mpag ++
                                        EJECT
                                        cabecalho(mpag,mtit,mtipo)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,02);DEVOUT('Data')
                                        DEVPOS(PROW(),09);DEVOUT('Pedido')
                                        DEVPOS(PROW(),16);DEVOUT('Cliente')
                                        DEVPOS(PROW(),57);DEVOUT('Itens')
                                        DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                        DEVPOS(PROW(),74);DEVOUT('Situacao')
                                        DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                        DEVPOS(PROW(),112);DEVOUT('Ope')
                                        DEVPOS(PROW(),116);DEVOUT('Exp')
                                        DEVPOS(PROW(),120);DEVOUT('Alt')
                                        DEVPOS(PROW(),124);DEVOUT('    Nota')
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                        LOOP
                                ENDIF
                        ENDDO
                        DEVPOS(PROW()+1,59);DEVOUT('==============')
                        DEVPOS(PROW()+1,00);DEVOUT('TOTAL DO DIA R$:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dia-mipi_dia,'999,999,999.99')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- IPI:')
                        DEVPOS(PROW(),PCOL());DEVOUTPICT(mipi_dia,'9,999,999.99')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- GERAL:')
                        DEVPOS(PROW(),PCOL());DEVOUTPICT(mtot_dia,'999,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                ELSE
                        WHILE mpdata <= mdata2 .AND. ! EOF()
                                prog_imp(RECNO())
                                IF mvenda_av = 'S'
                                        mvlr_av := 0
                                        mvlr_av := venda_av((marq_ali)->pnum_ped)
                                        IF  mvlr_av = 0
                                                SKIP;LOOP
                                        ENDIF
                                ENDIF
                                mpdata := (marq_ali)->pdat_ped
                                IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                IF opcao = 4 .AND. (! EMPTY(mcod_ope) .AND. STRZERO(mcod_ope,3) <> (marq_ali)->palt_ope)
                                        SKIP
                                        mpdata := (marq_ali)->pdat_ped
                                        IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                        LOOP
                                ELSEIF (! EMPTY(mcod_ope) .AND. STRZERO(mcod_ope,3) <> (marq_ali)->pcod_oper)
                                        SKIP
                                        mpdata := (marq_ali)->pdat_ped
                                        IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                        LOOP
                                ENDIF
                                ver_cli(VAL((marq_ali)->pcod_cli),,,1)
                                IF (! EMPTY(mproducao) .AND. mproducao <> (marq_ali)->pproducao);
                                   .OR. (! EMPTY(mcod_vend) .AND. STRZERO(mcod_vend,3) <> (marq_ali)->pcod_vend);
                                   .OR. (! EMPTY(mcod_cli) .AND. (marq_ali)->pcod_cli<>mcod_cli);
                                   .OR. (! EMPTY(mforma_pg) .AND. mforma_pg <> SUBSTR((marq_ali)->pcond_inte,1,2));
                                   .OR. (! EMPTY(mliberar) .AND. mliberar <> (marq_ali)->ppag);
                                   .OR. (mtelemark = 'S' .AND. (marq_ali)->pstat_item <> 'T');
                                   .OR. (! EMPTY(mcodemp) .AND. mcodemp <> (marq_ali)->pempresa);
                                   .OR. (maprazo = 'S' .AND. (marq_ali)->ptp_vend <> 'AP');
                                   .OR. (mso_exp='S' .AND. EMPTY((marq_ali)->pexpedi));
                                   .OR. (mcli_ven = 'S' .AND. cli->codvend <> STRZERO(mcod_vend,3));
                                   .OR. (! EMPTY(muf) .AND. muf <> cli->uf);
                                   .OR. (opcao = 1 .AND. ((marq_ali)->ppag = 'C' .OR. (marq_ali)->ppag <> ' '));
                                   .OR. (opcao = 2 .AND. ((marq_ali)->ppag = 'C' .OR. (marq_ali)->ppag <> '*'));
                                   .OR. (opcao = 5 .AND. ((marq_ali)->ppag <> 'C'))
                                        SKIP
                                        mpdata := (marq_ali)->pdat_ped
                                        IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                        LOOP
                                ENDIF
                                mdat_ped := (marq_ali)->pdat_ped
                                mdat_pag := (marq_ali)->pdatapag
                                mcodcli := VAL((marq_ali)->pcod_cli)
                                mnum_ped := (marq_ali)->pnum_ped
                                mcodvend := (marq_ali)->pcod_vend
                                mvendedor := (marq_ali)->pvendedor
                                mcod_oper := (marq_ali)->pcod_oper
                                malt_ope  := (marq_ali)->palt_ope
                                mhora     := (marq_ali)->phora
                                mprazo    := 'Cond.Pagmento: '+(marq_ali)->ptp_vend+' - '+(marq_ali)->pcond_inte
                                mtot_ipi := mtot_ped := 0
                                IF (marq_ali)->ppag = '*'
                                        msit := DTOC(mdat_pag)
                                ELSEIF (marq_ali)->ppag = 'C'
                                        msit := 'cancel.'
                                ELSE
                                        msit := 'aberto'
                                ENDIF
                                IF (marq_ali)->pentreg = '*'
                                        msit := msit+' - entregue'
                                ELSE
                                        msit := msit+' - nao entr'
                                ENDIF
                                IF (marq_ali)->pexpedi = '*'
                                        mexp := 'OK'
                                ELSE
                                        mexp := '  '
                                ENDIF
                                mped_vol := mped_peso := mped_itens := mtot_ipi := ;
                                mtot_ped := 0
                                WHILE mnum_ped = (marq_ali)->pnum_ped .AND. ! EOF()
                                        prog_imp(RECNO())
                                        IF ! EMPTY(mcod_forn) .AND. (marq_ali)->pcod_fab <> STRZERO(mcod_forn,4);SKIP;LOOP;ENDIF
                                        mtot_ped := mtot_ped + ((marq_ali)->pquantd * (marq_ali)->pvlr_fat)
                                        mtot_ipi := mtot_ipi + (((marq_ali)->pquantd * (marq_ali)->pvlr_fat) * ((marq_ali)->pipi/100))
                                        IF msit <> 'cancel.'
                                                mtot_vol := mtot_vol + (marq_ali)->pquantd
                                                mtot_peso := mtot_peso + ((marq_ali)->ppeso*(marq_ali)->pquantd)
                                                mped_vol := mped_vol + (marq_ali)->pquantd
                                                mped_peso := mped_peso + ((marq_ali)->ppeso*(marq_ali)->pquantd)
                                                mped_itens ++
                                        ENDIF
                                        SKIP
                                        mpdata := (marq_ali)->pdat_ped
                                        IF mtp = 'P'
                                                mpdata := (marq_ali)->pdatapag
                                        ENDIF
                                ENDDO
                                mtot_ped := mtot_ped + mtot_ipi
                                IF (mtot_ped < mvlr_ped .AND. ! EMPTY(mvlr_ped)) .OR. SUBSTR(msit,1,7) = 'cancel.'
                                        mtot_vol := mtot_vol - mped_vol
                                        mtot_peso := mtot_peso - mped_peso
                                        LOOP
                                ENDIF
                                IF ! EMPTY(mqtd_itens) .AND. (mped_itens < mqtd_itens .OR. msit = 'cancel.')
                                        mtot_vol := mtot_vol - mped_vol
                                        mtot_peso := mtot_peso - mped_peso
                                        LOOP
                                ENDIF
                                mqtd_ped ++
                                mtot_itens := mtot_itens + mped_itens
                                IF SUBSTR(msit,1,7) = 'cancel.'
                                        mtot_ipi := mtot_ped := 0
                                ELSE
                                        mtot_dia := mtot_dia + mtot_ped
                                        mipi_dia := mipi_dia + mtot_ipi
                                        mtot_geral := mtot_geral + mtot_ped
                                        mipi_ger  := mipi_ger + mtot_ipi
                                ENDIF
*                               ver_cli(mcodcli,,,1)
*                               DEVPOS(PROW(),PCOL()+1);DEVOUT(malt_ope)
*                               DEVPOS(PROW(),PCOL()+1);DEVOUT(v_ped_nt(VAL(mnum_ped),'*','*'))
*                               IF mimp_tipo = 2
*                                       DEVPOS(PROW(),PCOL()+1);DEVOUT(mhora)
*                               ENDIF
                                AADD(m_pedidos,{mdat_ped,mnum_ped,STRZERO(mcodcli,5),mcliente,mped_itens,mtot_ped,msit,mcodvend+'-'+LEFT(mvendedor,13),;
                                     mcod_oper,mexp,malt_ope,v_ped_nt(VAL(mnum_ped),'*','*'),mhora})
                        ENDDO
                        IF(msint='S',ASORT(m_pedidos,,, {|x,y| x[VAL(mordem)] < y[VAL(mordem)]}),ASORT(m_pedidos,,, {|x,y| x[8] < y[8]}))
                        i := mtot_dia := mipi_dia := 0
                        IF(msint = 'S',mcodcli := m_pedidos[1,3],mcodcli := m_pedidos[1,8])
                        FOR i = 1 TO LEN(m_pedidos)
                                IF mcodcli <> IF(msint='S',m_pedidos[i,3],m_pedidos[i,8])
                                        DEVPOS(PROW()+1,66);DEVOUT('--------------')
                                        DEVPOS(PROW()+1,42);DEVOUT('Total........R$:')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dia,'999,999,999.99')
                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                        mtot_dia := mipi_dia := 0
                                        IF(msint = 'S',mcodcli := m_pedidos[i,3],mcodcli := m_pedidos[i,8])
                                        IF PROW() >= 55
                                                mpag ++
                                                EJECT
                                                cabecalho(mpag,mtit,mtipo)
                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+1,02);DEVOUT('Data')
                                                DEVPOS(PROW(),09);DEVOUT('Pedido')
                                                DEVPOS(PROW(),16);DEVOUT('Cliente')
                                                DEVPOS(PROW(),57);DEVOUT('Itens')
                                                DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                                DEVPOS(PROW(),74);DEVOUT('Situacao')
                                                DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                                DEVPOS(PROW(),112);DEVOUT('Ope')
                                                DEVPOS(PROW(),116);DEVOUT('Exp')
                                                DEVPOS(PROW(),120);DEVOUT('Alt')
                                                DEVPOS(PROW(),124);DEVOUT('    Nota')
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                        ENDIF
                                ENDIF
                                IF EMPTY(m_pedidos[i,2])
                                        LOOP
                                ENDIF
                                DEVPOS(PROW()+1,00);DEVOUT(m_pedidos[i,1])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(m_pedidos[i,2])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(m_pedidos[i,3]+' - ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(LEFT(m_pedidos[i,4],31))
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_pedidos[i,5],'99999')
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_pedidos[i,6],'999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(m_pedidos[i,7])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(m_pedidos[i,8])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(m_pedidos[i,9])
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(m_pedidos[i,10])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(m_pedidos[i,11])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(m_pedidos[i,12])
                                IF mimp_tipo = 2
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(m_pedidos[i,13])
                                ENDIF
                                mtot_dia := mtot_dia + m_pedidos[i,6]
                        NEXT
                        DEVPOS(PROW()+1,66);DEVOUT('--------------')
                        DEVPOS(PROW()+1,42);DEVOUT('Total........R$:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dia,'999,999,999.99')
                ENDIF
                IF PROW() >= 55
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,02);DEVOUT('Data')
                        DEVPOS(PROW(),09);DEVOUT('Pedido')
                        DEVPOS(PROW(),16);DEVOUT('Cliente')
                        DEVPOS(PROW(),57);DEVOUT('Itens')
                        DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                        DEVPOS(PROW(),74);DEVOUT('Situacao')
                        DEVPOS(PROW(),94);DEVOUT('Vendedor')
                        DEVPOS(PROW(),112);DEVOUT('Ope')
                        DEVPOS(PROW(),116);DEVOUT('Exp')
                        DEVPOS(PROW(),120);DEVOUT('Alt')
                        DEVPOS(PROW(),124);DEVOUT('    Nota')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                DEVPOS(PROW()+2,00);DEVOUT('Total GERAL em R$:')
                DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mtot_geral-mipi_ger,'999,999,999.99')))
                DEVPOS(PROW(),PCOL()+1);DEVOUT('- IPI R$:')
                DEVPOS(PROW(),PCOL());DEVOUT(LTRIM(TRANSFORM(mipi_ger,'999,999,999.99')))
                DEVPOS(PROW(),PCOL()+1);DEVOUT('- Total R$:')
                DEVPOS(PROW(),PCOL());DEVOUT(LTRIM(TRANSFORM(mtot_geral,'999,999,999.99')))
                DEVPOS(PROW()+1,00);DEVOUT('Total de VOLUME..:')
                DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mtot_vol,'999,999,999.99')))
                DEVPOS(PROW()+1,00);DEVOUT('Total PESO BRUTO.:')
                DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mtot_peso,'999,999.99')))
                DEVPOS(PROW()+1,00);DEVOUT('Total PEDIDOS:')
                DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mqtd_ped,'999,999.99')))
                DEVPOS(PROW(),PCOL()+2);DEVOUT('Total ITENS:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(mtot_itens,'999,999.99')))
                DEVPOS(PROW()+1,00);DEVOUT('Total ENTRADA R$:')
                DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mtot_av,'999,999.99')))
                DEVPOS(PROW()+2,00);DEVOUT(TIME())
                imprt(mtipo_imp,'N')
                EJECT
        ELSE
                mpag = 1
                mtot_vol := mtot_dia := mtot_ipi := mtot_ped := mtot_geral := ;
                mipi_dia := mipi_ger := 0
                mdata_dia := (marq_ali)->pdat_ped
                mexp := '  '
                IF ! EMPTY(muf)
                        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)+' do Estado: '+muf
                ELSE
                        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
                ENDIF
                cabecalho(mpag,mtit,mtipo)
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,02);DEVOUT('Data')
                DEVPOS(PROW(),09);DEVOUT('Pedido')
                DEVPOS(PROW(),16);DEVOUT('Cliente')
                DEVPOS(PROW(),57);DEVOUT('Itens')
                DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                DEVPOS(PROW(),74);DEVOUT('Situacao')
                DEVPOS(PROW(),94);DEVOUT('Vendedor')
                DEVPOS(PROW(),112);DEVOUT('Ope')
                DEVPOS(PROW(),116);DEVOUT('Exp')
                DEVPOS(PROW(),120);DEVOUT('Alt')
                DEVPOS(PROW(),124);DEVOUT('    Nota')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                mpdata := (marq_ali)->pdat_ped
                IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                IF msint = 'A'
                        WHILE mpdata <= mdata2 .AND. ! EOF()
                                prog_imp(RECNO())
                                IF mvenda_av = 'S'
                                        mvlr_av := 0
                                        mvlr_av := venda_av((marq_ali)->pnum_ped)
                                        IF  mvlr_av = 0
                                                SKIP;LOOP
                                        ENDIF
                                ENDIF
                                mpdata := (marq_ali)->pdat_ped
                                IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                IF opcao = 4 .AND. (! EMPTY(mcod_ope) .AND. STRZERO(mcod_ope,3) <> (marq_ali)->palt_ope)
                                        SKIP
                                        mpdata := (marq_ali)->pdat_ped
                                        IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                        LOOP
                                ELSEIF (! EMPTY(mcod_ope) .AND. STRZERO(mcod_ope,3) <> (marq_ali)->pcod_oper)
                                        SKIP
                                        mpdata := (marq_ali)->pdat_ped
                                        IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                        LOOP
                                ENDIF
                                ver_cli(VAL((marq_ali)->pcod_cli),,,1)
                                IF (! EMPTY(mproducao) .AND. mproducao <> (marq_ali)->pproducao);
                                   .OR. (! EMPTY(mcod_vend) .AND. STRZERO(mcod_vend,3) <> (marq_ali)->pcod_vend);
                                   .OR. (! EMPTY(mcod_cli) .AND. (marq_ali)->pcod_cli<>mcod_cli);
                                   .OR. (! EMPTY(mcodemp) .AND. mcodemp <> (marq_ali)->pempresa);
                                   .OR. (! EMPTY(mforma_pg) .AND. mforma_pg <> SUBSTR((marq_ali)->pcond_inte,1,2));
                                   .OR. (! EMPTY(mliberar) .AND. mliberar <> (marq_ali)->ppag);
                                   .OR. (mtelemark = 'S' .AND. (marq_ali)->pstat_item <> 'T');
                                   .OR. (maprazo = 'S' .AND. (marq_ali)->ptp_vend <> 'AP');
                                   .OR. (mso_exp='S' .AND. EMPTY((marq_ali)->pexpedi));
                                   .OR. (mcli_ven = 'S' .AND. cli->codvend <> STRZERO(mcod_vend,3));
                                   .OR. (! EMPTY(muf) .AND. muf <> cli->uf);
                                   .OR. (opcao = 1 .AND. ((marq_ali)->ppag = 'C' .OR. (marq_ali)->ppag <> ' '));
                                   .OR. (opcao = 2 .AND. ((marq_ali)->ppag = 'C' .OR. (marq_ali)->ppag <> '*'));
                                   .OR. (opcao = 5 .AND. ((marq_ali)->ppag <> 'C'))
                                        SKIP
                                        mpdata := (marq_ali)->pdat_ped
                                        IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                        LOOP
                                ENDIF
                                IF mdata_dia <> mpdata .AND. mtot_dia > 0
                                        IF PROW() >= 57
                                                mpag ++
                                                EJECT
                                                cabecalho(mpag,mtit,mtipo)
                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+1,02);DEVOUT('Data')
                                                DEVPOS(PROW(),09);DEVOUT('Pedido')
                                                DEVPOS(PROW(),16);DEVOUT('Cliente')
                                                DEVPOS(PROW(),57);DEVOUT('Itens')
                                                DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                                DEVPOS(PROW(),74);DEVOUT('Situacao')
                                                DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                                DEVPOS(PROW(),112);DEVOUT('Ope')
                                                DEVPOS(PROW(),116);DEVOUT('Exp')
                                                DEVPOS(PROW(),120);DEVOUT('Alt')
                                                DEVPOS(PROW(),124);DEVOUT('    Nota')
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                                LOOP
                                        ENDIF
                                        DEVPOS(PROW()+1,59);DEVOUT('==============')
                                        DEVPOS(PROW()+1,00);DEVOUT('TOTAL DO DIA R$:')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dia-mipi_dia,'999,999,999.99')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- IPI:')
                                        DEVPOS(PROW(),PCOL());DEVOUTPICT(mipi_dia,'9,999,999.99')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- GERAL:')
                                        DEVPOS(PROW(),PCOL());DEVOUTPICT(mtot_dia,'999,999,999.99')
                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                        mdata_dia := (marq_ali)->pdat_ped
                                        mtot_dia := mipi_dia := 0
                                ENDIF
                                mdat_ped := (marq_ali)->pdat_ped
                                mdat_pag := (marq_ali)->pdatapag
                                mcodcli := VAL((marq_ali)->pcod_cli)
                                mnum_ped := (marq_ali)->pnum_ped
                                mcodvend := (marq_ali)->pcod_vend
                                mvendedor := (marq_ali)->pvendedor
                                mcod_oper := (marq_ali)->pcod_oper
                                malt_ope  := (marq_ali)->palt_ope
                                mhora     := (marq_ali)->phora
                                mprazo    := 'Cond.Pagmento: '+(marq_ali)->ptp_vend+' - '+(marq_ali)->pcond_inte
                                mtot_ipi := mtot_ped := 0
                                IF (marq_ali)->ppag = '*'
                                        msit := DTOC(mdat_pag)
*                                       msit := 'pago'
                                ELSEIF (marq_ali)->ppag = 'C'
                                        msit := 'cancel.'
                                ELSE
                                        msit := 'aberto'
                                ENDIF
                                IF (marq_ali)->pentreg = '*'
                                        msit := msit+' - entregue'
                                ELSE
                                        msit := msit+' - nao entr'
                                ENDIF
                                IF (marq_ali)->pexpedi = '*'
                                        mexp := 'OK'
                                ELSE
                                        mexp := '  '
                                ENDIF
                                mped_vol := mped_peso := mped_itens := ;
                                mtot_ipi := mtot_ped := 0
                                WHILE mnum_ped = (marq_ali)->pnum_ped .AND. ! EOF()
                                        prog_imp(RECNO())
                                        IF ! EMPTY(mcod_forn) .AND. (marq_ali)->pcod_fab <> STRZERO(mcod_forn,4);SKIP;LOOP;ENDIF
                                        mtot_ped := mtot_ped + ((marq_ali)->pquantd * (marq_ali)->pvlr_fat)
                                        mtot_ipi := mtot_ipi + (((marq_ali)->pquantd * (marq_ali)->pvlr_fat) * ((marq_ali)->pipi/100))
                                        IF msit <> 'cancel.'
                                                mtot_vol := mtot_vol + (marq_ali)->pquantd
                                                mtot_peso := mtot_peso + ((marq_ali)->ppeso*(marq_ali)->pquantd)
                                                mped_vol := mped_vol + (marq_ali)->pquantd
                                                mped_peso := mped_peso + ((marq_ali)->ppeso*(marq_ali)->pquantd)
                                                mped_itens ++
                                        ENDIF
                                        SKIP
                                        mpdata := (marq_ali)->pdat_ped
                                        IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                ENDDO
                                mtot_ped := mtot_ped + mtot_ipi
                                IF (mtot_ped < mvlr_ped .AND. ! EMPTY(mvlr_ped)) .OR. msit = 'cancel.'
                                        mtot_vol := mtot_vol - mped_vol
                                        mtot_peso := mtot_peso - mped_peso
                                        LOOP
                                ENDIF
                                IF ! EMPTY(mqtd_itens) .AND. (mped_itens < mqtd_itens .OR. msit = 'cancel.')
                                        mtot_vol := mtot_vol - mped_vol
                                        mtot_peso := mtot_peso - mped_peso
                                        LOOP
                                ENDIF
                                mqtd_ped ++
                                mtot_itens := mtot_itens + mped_itens
                                IF msit = 'cancel.'
                                        mtot_ipi := mtot_ped := 0
                                ELSE
                                        mtot_dia := mtot_dia + mtot_ped
                                        mipi_dia := mipi_dia + mtot_ipi
                                        mtot_geral := mtot_geral + mtot_ped
                                        mipi_ger := mipi_ger + mtot_ipi
                                ENDIF
                                IF PROW() >= 57
                                        mpag ++
                                        EJECT
                                        cabecalho(mpag,mtit,mtipo)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,02);DEVOUT('Data')
                                        DEVPOS(PROW(),09);DEVOUT('Pedido')
                                        DEVPOS(PROW(),16);DEVOUT('Cliente')
                                        DEVPOS(PROW(),57);DEVOUT('Itens')
                                        DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                        DEVPOS(PROW(),74);DEVOUT('Situacao')
                                        DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                        DEVPOS(PROW(),112);DEVOUT('Ope')
                                        DEVPOS(PROW(),116);DEVOUT('Exp')
                                        DEVPOS(PROW(),120);DEVOUT('Alt')
                                        DEVPOS(PROW(),124);DEVOUT('    Nota')
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                        LOOP
                                ENDIF
                                DEVPOS(PROW()+1,00);DEVOUT(mdat_ped)
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(mnum_ped)
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(STRZERO(mcodcli,5)+' - ')
                                ver_cli(mcodcli,,,1)
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(LEFT(mcliente,31))
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mped_itens,'99999')
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_ped,'999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(msit)
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(mcodvend+'-'+LEFT(mvendedor,13))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(mcod_oper)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(mexp)
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(malt_ope)
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(v_ped_nt(VAL(mnum_ped),'*','*'))
                                IF mimp_tipo = 2
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(mhora)
                                ENDIF
                                IF maprazo = 'S'
                                        DEVPOS(PROW()+1,00);DEVOUT(mprazo)
                                ENDIF
                                IF mvenda_av = 'S'
                                        DEVPOS(PROW()+1,00);DEVOUT('VALOR DA ENTRADA R$: '+TRANSFORM(mvlr_av,'999,999.99'))
                                        mtot_av := mtot_av + mvlr_av
                                ENDIF
                                IF PROW() >= 57
                                        mpag ++
                                        EJECT
                                        cabecalho(mpag,mtit,mtipo)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,02);DEVOUT('Data')
                                        DEVPOS(PROW(),09);DEVOUT('Pedido')
                                        DEVPOS(PROW(),16);DEVOUT('Cliente')
                                        DEVPOS(PROW(),57);DEVOUT('Itens')
                                        DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                        DEVPOS(PROW(),74);DEVOUT('Situacao')
                                        DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                        DEVPOS(PROW(),112);DEVOUT('Ope')
                                        DEVPOS(PROW(),116);DEVOUT('Exp')
                                        DEVPOS(PROW(),120);DEVOUT('Alt')
                                        DEVPOS(PROW(),124);DEVOUT('    Nota')
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                        LOOP
                                ENDIF
                        ENDDO
                        DEVPOS(PROW()+1,59);DEVOUT('==============')
                        DEVPOS(PROW()+1,00);DEVOUT('TOTAL DO DIA R$:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dia-mipi_dia,'999,999,999.99')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- IPI:')
                        DEVPOS(PROW(),PCOL());DEVOUTPICT(mipi_dia,'9,999,999.99')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- GERAL:')
                        DEVPOS(PROW(),PCOL());DEVOUTPICT(mtot_dia,'999,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                        IF PROW() >= 55
                                mpag ++
                                EJECT
                                cabecalho(mpag,mtit,mtipo)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,02);DEVOUT('Data')
                                DEVPOS(PROW(),09);DEVOUT('Pedido')
                                DEVPOS(PROW(),16);DEVOUT('Cliente')
                                DEVPOS(PROW(),57);DEVOUT('Itens')
                                DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                DEVPOS(PROW(),74);DEVOUT('Situacao')
                                DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                DEVPOS(PROW(),112);DEVOUT('Ope')
                                DEVPOS(PROW(),116);DEVOUT('Exp')
                                DEVPOS(PROW(),120);DEVOUT('Alt')
                                DEVPOS(PROW(),124);DEVOUT('    Nota')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        ENDIF
                ELSE
                        WHILE mpdata <= mdata2 .AND. ! EOF()
                                prog_imp(RECNO())
                                IF mvenda_av = 'S'
                                        mvlr_av := 0
                                        mvlr_av := venda_av((marq_ali)->pnum_ped)
                                        IF  mvlr_av = 0
                                                SKIP;LOOP
                                        ENDIF
                                ENDIF
                                mpdata := (marq_ali)->pdat_ped
                                IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                IF opcao = 4 .AND. (! EMPTY(mcod_ope) .AND. STRZERO(mcod_ope,3) <> (marq_ali)->palt_ope)
                                        SKIP
                                        mpdata := (marq_ali)->pdat_ped
                                        IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                        LOOP
                                ELSEIF (! EMPTY(mcod_ope) .AND. STRZERO(mcod_ope,3) <> (marq_ali)->pcod_oper)
                                        SKIP
                                        mpdata := (marq_ali)->pdat_ped
                                        IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                        LOOP
                                ENDIF
                                ver_cli(VAL((marq_ali)->pcod_cli),,,1)
                                IF (! EMPTY(mproducao) .AND. mproducao <> (marq_ali)->pproducao);
                                   .OR. (! EMPTY(mcod_vend) .AND. STRZERO(mcod_vend,3) <> (marq_ali)->pcod_vend);
                                   .OR. (! EMPTY(mforma_pg) .AND. mforma_pg <> SUBSTR((marq_ali)->pcond_inte,1,2));
                                   .OR. (! EMPTY(mcod_cli) .AND. (marq_ali)->pcod_cli<>mcod_cli);
                                   .OR. (! EMPTY(mliberar) .AND. mliberar <> (marq_ali)->ppag);
                                   .OR. (mtelemark = 'S' .AND. (marq_ali)->pstat_item <> 'T');
                                   .OR. (! EMPTY(mcodemp) .AND. mcodemp <> (marq_ali)->pempresa);
                                   .OR. (maprazo = 'S' .AND. (marq_ali)->ptp_vend <> 'AP');
                                   .OR. (mso_exp='S' .AND. EMPTY((marq_ali)->pexpedi));
                                   .OR. (mcli_ven = 'S' .AND. cli->codvend <> STRZERO(mcod_vend,3));
                                   .OR. (! EMPTY(muf) .AND. muf <> cli->uf);
                                   .OR. (opcao = 1 .AND. ((marq_ali)->ppag = 'C' .OR. (marq_ali)->ppag <> ' '));
                                   .OR. (opcao = 2 .AND. ((marq_ali)->ppag = 'C' .OR. (marq_ali)->ppag <> '*'));
                                   .OR. (opcao = 5 .AND. ((marq_ali)->ppag <> 'C'))
                                        SKIP
                                        mpdata := (marq_ali)->pdat_ped
                                        IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                        LOOP
                                ENDIF
                                mdat_ped := (marq_ali)->pdat_ped
                                mdat_pag := (marq_ali)->pdatapag
                                mcodcli := VAL((marq_ali)->pcod_cli)
                                mnum_ped := (marq_ali)->pnum_ped
                                mcodvend := (marq_ali)->pcod_vend
                                mvendedor := (marq_ali)->pvendedor
                                mcod_oper := (marq_ali)->pcod_oper
                                malt_ope  := (marq_ali)->palt_ope
                                mhora     := (marq_ali)->phora
                                mprazo    := 'Cond.Pagmento: '+(marq_ali)->ptp_vend+' - '+(marq_ali)->pcond_inte
                                mtot_ipi := mtot_ped := 0
                                IF (marq_ali)->ppag = '*'
                                        msit := DTOC(mdat_pag)
                                ELSEIF (marq_ali)->ppag = 'C'
                                        msit := 'cancel.'
                                ELSE
                                        msit := 'aberto'
                                ENDIF
                                IF (marq_ali)->pentreg = '*'
                                        msit := msit+' - entregue'
                                ELSE
                                        msit := msit+' - nao entr'
                                ENDIF
                                IF (marq_ali)->pexpedi = '*'
                                        mexp := 'OK'
                                ELSE
                                        mexp := '  '
                                ENDIF
                                mped_vol := mped_peso := mped_itens := ;
                                mtot_ipi := mtot_ped := 0
                                WHILE mnum_ped = (marq_ali)->pnum_ped .AND. ! EOF()
                                        prog_imp(RECNO())
                                        IF ! EMPTY(mcod_forn) .AND. (marq_ali)->pcod_fab <> STRZERO(mcod_forn,4);SKIP;LOOP;ENDIF
                                        mtot_ped := mtot_ped + ((marq_ali)->pquantd * (marq_ali)->pvlr_fat)
                                        mtot_ipi := mtot_ipi + (((marq_ali)->pquantd * (marq_ali)->pvlr_fat) * ((marq_ali)->pipi/100))
                                        IF msit <> 'cancel.'
                                                mtot_vol := mtot_vol + (marq_ali)->pquantd
                                                mtot_peso := mtot_peso + ((marq_ali)->ppeso*(marq_ali)->pquantd)
                                                mped_vol := mped_vol + (marq_ali)->pquantd
                                                mped_peso := mped_peso + ((marq_ali)->ppeso*(marq_ali)->pquantd)
                                                mped_itens ++
                                        ENDIF
                                        SKIP
                                        mpdata := (marq_ali)->pdat_ped
                                        IF mtp = 'P';mpdata := (marq_ali)->pdatapag;ENDIF
                                ENDDO
                                mtot_ped := mtot_ped + mtot_ipi
                                IF (mtot_ped < mvlr_ped .AND. ! EMPTY(mvlr_ped)) .OR. (opcao < 5 .AND. msit = 'cancel.')
                                        mtot_vol := mtot_vol - mped_vol
                                        mtot_peso := mtot_peso - mped_peso
                                        LOOP
                                ENDIF
                                IF ! EMPTY(mqtd_itens) .AND. (mped_itens < mqtd_itens .OR. (opcao < 5 .AND. msit = 'cancel.'))
                                        mtot_vol := mtot_vol - mped_vol
                                        mtot_peso := mtot_peso - mped_peso
                                        LOOP
                                ENDIF
                                mqtd_ped ++
                                mtot_itens := mtot_itens + mped_itens
                                IF msit = 'cancel.'
                                        mtot_ipi := mtot_ped := 0
                                ELSE
                                        mtot_dia := mtot_dia + mtot_ped
                                        mipi_dia := mipi_dia + mtot_ipi
                                        mtot_geral := mtot_geral + mtot_ped
                                        mipi_ger := mipi_ger + mtot_ped
                                ENDIF
                                ver_cli(mcodcli,,,1)
                                AADD(m_pedidos,{mdat_ped,mnum_ped,STRZERO(mcodcli,5),mcliente,mped_itens,mtot_ped,msit,mcodvend+'-'+LEFT(mvendedor,13),;
                                     mcod_oper,mexp,malt_ope,v_ped_nt(VAL(mnum_ped),'*','*'),mhora})
                        ENDDO
                        IF(msint = 'S',ASORT(m_pedidos,,, {|x,y| x[3] < y[3]}),ASORT(m_pedidos,,, {|x,y| x[8] < y[8]}))
                        IF LEN(m_pedidos) > 0
                                i := mtot_dia := mipi_dia := 0
                                IF(msint = 'S',mcodcli := m_pedidos[1,3],mcodcli := m_pedidos[1,8])
                                FOR i = 1 TO LEN(m_pedidos)
                                        IF mcodcli <> IF(msint = 'S',m_pedidos[i,3],m_pedidos[i,8])
                                                DEVPOS(PROW()+1,66);DEVOUT('--------------')
                                                DEVPOS(PROW()+1,42);DEVOUT('Total........R$:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dia,'999,999,999.99')
                                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                                                mtot_dia := mipi_dia := 0
                                                IF(msint = 'S',mcodcli := m_pedidos[i,3],mcodcli := m_pedidos[i,8])
                                                IF PROW() >= 55
                                                        mpag ++
                                                        EJECT
                                                        cabecalho(mpag,mtit,mtipo)
                                                        imprt(mtipo_imp,'C')
                                                        DEVPOS(PROW()+1,02);DEVOUT('Data')
                                                        DEVPOS(PROW(),09);DEVOUT('Pedido')
                                                        DEVPOS(PROW(),16);DEVOUT('Cliente')
                                                        DEVPOS(PROW(),57);DEVOUT('Itens')
                                                        DEVPOS(PROW(),63);DEVOUT('Vlr Pedido')
                                                        DEVPOS(PROW(),74);DEVOUT('Situacao')
                                                        DEVPOS(PROW(),94);DEVOUT('Vendedor')
                                                        DEVPOS(PROW(),112);DEVOUT('Ope')
                                                        DEVPOS(PROW(),116);DEVOUT('Exp')
                                                        DEVPOS(PROW(),120);DEVOUT('Alt')
                                                        DEVPOS(PROW(),124);DEVOUT('    Nota')
                                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                                ENDIF
                                        ENDIF
                                        DEVPOS(PROW()+1,00);DEVOUT(m_pedidos[i,1])
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(m_pedidos[i,2])
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(m_pedidos[i,3]+' - ')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(LEFT(m_pedidos[i,4],31))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_pedidos[i,5],'99999')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_pedidos[i,6],'999,999.99')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(m_pedidos[i,7])
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(m_pedidos[i,8])
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(m_pedidos[i,9])
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(m_pedidos[i,10])
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(m_pedidos[i,11])
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(m_pedidos[i,12])
                                        IF mimp_tipo = 2
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(m_pedidos[i,13])
                                        ENDIF
                                        IF maprazo = 'S'
                                                DEVPOS(PROW()+1,00);DEVOUT(mprazo)
                                        ENDIF
                                        mtot_dia := mtot_dia + m_pedidos[i,6]
                                NEXT
                        ENDIF
                        DEVPOS(PROW()+1,66);DEVOUT('--------------')
                        DEVPOS(PROW()+1,42);DEVOUT('Total........R$:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dia,'999,999,999.99')
                ENDIF
                DEVPOS(PROW()+2,00);DEVOUT('Total GERAL em R$:')
                DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mtot_geral-mipi_ger,'999,999,999.99')))
                DEVPOS(PROW(),PCOL()+1);DEVOUT('- IPI R$:')
                DEVPOS(PROW(),PCOL());DEVOUT(LTRIM(TRANSFORM(mipi_ger,'999,999,999.99')))
                DEVPOS(PROW(),PCOL()+1);DEVOUT('- Total R$:')
                DEVPOS(PROW(),PCOL());DEVOUT(LTRIM(TRANSFORM(mtot_geral,'999,999,999.99')))
                DEVPOS(PROW()+1,00);DEVOUT('Total de VOLUME..:')
                DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mtot_vol,'999,999,999.99')))
                DEVPOS(PROW()+1,00);DEVOUT('Total PESO BRUTO.:')
                DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mtot_peso,'999,999.99')))
                DEVPOS(PROW()+1,00);DEVOUT('Total PEDIDOS:')
                DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mqtd_ped,'999,999.99')))
                DEVPOS(PROW(),PCOL()+2);DEVOUT('Total ITENS:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(mtot_itens,'999,999.99')))
                DEVPOS(PROW()+1,00);DEVOUT('Total ENTRADA R$:')
                DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mtot_av,'999,999.99')))
                DEVPOS(PROW()+2,00);DEVOUT(TIME())
                imprt(mtipo_imp,'N')
                EJECT
        ENDIF
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('RES_PED.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
************************

