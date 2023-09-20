*****************************************************
* LISTAGEM RELATORIO PREVISAO DE ENTREGA DE PEDIDO
****************************************************
MEMVAR getlist,nivel_acess,mdata_sis
FUNCTION sac5ped10
*****************
LOCAL MPRG:='SAC5PED10',;
      lci:=0,cci:=0,lba:=22,cba:=78,mtot_ped,mtot_dia,mtot_geral,;
      mnum_ped,mdat_ped,msit,mopcao,mtot_vol,mtp,;
      mcodvend,mvendedor,mcod_oper,mtot_peso:=0,malt_ope,;
      mtipo_rel,mcod_ope,mdat_pag,mexp:='  ',mpdata,mvlr_ped:=0,;
      mped_vol:=0,mped_peso:=0,mped_itens:=0,mpoint:=0,mqtd_itens:=0,;
      mtot_itens:=0,mqtd_ped:=0,mhora,mnota:=' ',m_uf:={},i:=0,mrec,msele,morde,;
      mso_exp:=' ',msint:='A',m_pedidos:={},x,y,mordem:='3',mtot_ipi:=0,mtelemark:=' ',;
      maprazo:='N',mprazo,mipi_dia:=0,mipi_ger:=0,mliberar:=' ',mforma_pg:='  ',mvlr_av:=0,;
      mtot_av:=0

PRIVATE mcod_vend,mcod_cli,mdata_dia,;
        mtraco,telaprint,mtit,mtipo,mpag,mcliente,mcgc,mcpf,mdata1,mdata2,muf,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),marq_ali,mcodcli,mcodemp:=SPACE(3),;
        mcod_forn:=0,mvenda_av:='N',q_pedido:={},n_ped:=0,cons_cli:={}

IF ! ver_nivel(mprg,'RELATORIO PREVISAO DE ENTREGA DE PEDIDO','1456',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('=',132)
*----------------------------------------------------------------------------
/*
//
IF ! AbriArq('sactotnt','totnt');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('sacorcam','orcam');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*/
*----------------------------------------------------------------------------
op_tela(05,10,16,89,'RELATORIO PREVISAO DE ENTREGA DE PEDIDO')
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
        mliberar := SPACE(1)
        mtp := 'E'
        mcod_vend := mcod_ope := mcod_cli := mcod_forn := mvlr_ped := mqtd_itens:=;
        mqtd_ped := mtot_itens := mtot_av := mvlr_av := 0
        muf := mforma_pg := SPACE(2)
        mtipo_rel := 'R'
        mcodemp    := SPACE(3)
        mso_exp    := mtelemark := maprazo := mvenda_av := 'N'
        m_pedidos := {}
        limpa(lci,cci,lba+2,cba)
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(lci  ,cci+2);DEVOUT('Data Inicial........................:')
        DEVPOS(lci+1,cci+2);DEVOUT('Data Final..........................:')
        DEVPOS(lci+2,cci+2);DEVOUT('Codigo da Empresa...................:')
        DEVPOS(lci+3,cci+2);DEVOUT('Codigo do Cliente...................:')
        DEVPOS(lci+4,cci+2);DEVOUT('Codigo do Vendedor..................:')
        DEVPOS(lci+5,cci+2);DEVOUT('Codigo do Operador..................:')
        DEVPOS(lci+6,cci+2);DEVOUT('Codigo do Fabricante................:')
        DEVPOS(lci+7,cci+2);DEVOUT('Sigla do Estado que Deseja..........:')
        DEVPOS(lci+8,cci+2);DEVOUT('Pedido c/Vlr.Acima de R$............:')
        DEVPOS(lci+9,cci+2);DEVOUT('Pedido c/Qtd. de Itens Acima de.....:')
        DEVPOS(lci+10,cci+2);DEVOUT('Tipo de Relatorio [R]esumo [E]xtrato:')
        setcor(1)
        @ lci  ,cci+40 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+1,cci+40 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+2,cci+40 GET mcodemp PICT "999" VALID ver_emp(mcodemp,lci+2,cci+44,,'*') WHEN mmult_emp ='S'
        @ lci+3,cci+40 GET mcod_cli pict "99999" VALID ver_cli(mcod_cli,lci+3,cci+44) WHEN mcod_vend = 0
        @ lci+4,cci+40 GET mcod_vend pict "999" VALID ven(mcod_vend,lci+4,cci+44) WHEN EMPTY(mcod_cli)
        @ lci+5,cci+40 GET mcod_ope pict "999" VALID ven(mcod_ope,lci+5,cci+44) WHEN EMPTY(mcod_cli)
        @ lci+6,cci+40 GET mcod_forn PICT '9999' VALID v_fornece(mcod_forn,lci+6,cci+45)
        @ lci+7,cci+40 GET muf PICT '@!' VALID IF(muf='TD',.T.,v_uf(muf)) .AND. lim_get() WHEN men_get(lci+8,cci+40,'Digite a Sigla do Estado que deseja - [TD] p/imprimir SINTETICO ou deixe em BRANCO para imprimir todos')
        @ lci+8,cci+40 GET mvlr_ped PICT '9,999,999.99'
        @ lci+9,cci+40 GET mqtd_itens PICT '9,999.99'
        @ lci+10,cci+40 GET mtipo_rel PICT '@!' VALID mtipo_rel $ 'E,R'
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        op_tela(10,05,11,75,'Tipo de Relatorio')
        msint := 'A'
        setcor(3)
        DEVPOS(00,00);DEVOUT('[A]nalitico [S]intetico Cliente [V]Sintetico Vendedor:')
        setcor(1)
        @ 00,COL()+1 GET msint PICT '@!' VALID msint $ 'A,S,V'
        READ
        wvw_lclosewindow()
        IF msint = 'S' .OR. msint = 'V'
                mordem:=mensagem1('Ordem do Relatorio [3]p/Codigo - [4]p/Alfabetica:','3','3,4')
        ENDIF
        IF LASTKEY() = 27;LOOP;ENDIF
        mtit = 'Previsao de Entrega de Pedido'
        IF ! EMPTY(mcodemp)
                mtit := mtit + ' - Empresa: '+mcodemp
        ENDIF
        marq := 'RES_PED.REL'
        IF ! imp_arq('RES_PED.REL','R');LOOP;ENDIF
        mtot_av := 0
        IF muf = 'TD'
                mpag := 1
                i:=0
                FOR i = 1 TO LEN(m_uf)
                        cons_cli := {}
                        sr_getconnection():exec("SELECT * FROM saccli WHERE uf = "+sr_cdbvalue(m_uf[i,1]),,.t.,@cons_cli)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_cli) = 0
                                LOOP
                        ENDIF
                        cont_cli := 0
                        FOR cont_cli = 1 TO LEN(cons_cli)
                                q_pedido := {}
                                marq_ali := 'ped_s'
                                cComm  := "SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND "
                                ccomm := ccomm + "pd_entrega >= "+sr_cdbvalue(mdata1)+" AND pd_entrega <= "+sr_cdbvalue(mdata2)
                                ccomm := ccomm + " AND pcod_cli = "+sr_cdbvalue(cons_cli[cont_cli,2])
                                IF ! EMPTY(mcod_forn)
                                        ccomm := ccomm + " AND pcod_fab = "+sr_cdbvalue(STRZERO(mcod_forn,4))
                                ENDIF
                                IF ! EMPTY(mcod_vend)
                                        ccomm := ccomm + " AND pcod_vend = "+sr_cdbvalue(STRZERO(mcod_vend,3))
                                ENDIF
                                IF ! EMPTY(mliberar)
                                        ccomm := ccomm + " AND ppag = "+sr_cdbvalue(mliberar)
                                ENDIF
                                IF ! EMPTY(mcodemp)
                                        ccomm := ccomm + " AND pempresa = "+sr_cdbvalue(mcodemp)
                                ENDIF
                                IF ! EMPTY(mforma_pg)
                                        ccomm := ccomm + " AND pcond_inte LIKE "+sr_cdbvalue(mforma_pg+'%')
                                ENDIF
                                IF mtelemark = 'S'
                                        ccomm := ccomm + " AND pstat_item = 'T'"
                                ENDIF
                                IF maprazo = 'S'
                                        ccomm := ccomm + " AND ptp_vend = 'AP'"
                                ENDIF
                                IF mso_exp='S'
                                        ccomm := ccomm + " AND pexpedi IS NOT NULL"
                                ENDIF
/*
                                IF opcao = 1
                                        ccomm := ccomm + " AND (ppag IS NULL OR ppag = ' ')"
                                ENDIF
                                IF opcao = 2
                                        ccomm := ccomm + " AND ppag = '*'"
                                ENDIF
                                IF opcao = 4
                                        ccomm := ccomm + " AND  palt_ope IS NOT NULL"
                                ENDIF
*/
                                ccomm := ccomm + " AND (ppag = '*' OR ppag IS NULL)"
                                IF ! EMPTY(mcod_ope)
                                        ccomm := ccomm + " AND pcod_oper = "+sr_cdbvalue(STRZERO(mcod_ope,3))
                        	ENDIF
                                ccomm := ccomm + " ORDER BY pnum_ped,pd_entega"
                                sr_getconnection():exec(ccomm,,.t.,@q_pedido)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(q_pedido) = 0
                                        LOOP
                                ENDIF

                                IF mtp = 'E' .OR. mtp = SPACE(1)
                                        mtot_vol := mtot_dia := mtot_ped := mtot_geral := ;
                                        mtot_itens := mqtd_ped := mtot_ipi := mipi_dia := ;
                                        mipi_ger := 0
                                        mdata_dia := q_pedido[1,4]
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
                                        IF ! EMPTY(mcod_forn)
                                                DEVPOS(PROW()+1,02);DEVOUT('FORNECEDOR: '+STRZERO(mcod_forn,4)+' - ')
                                                v_fornece(mcod_forn,PROW(),PCOL()+1)
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                        ENDIF
                                        IF ! EMPTY(mcod_vend)
                                                DEVPOS(PROW()+1,02);DEVOUT('VENDEDOR: '+STRZERO(mcod_vend,3)+' - ')
                                                ven(mcod_vend,PROW(),PCOL()+1)
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                        ENDIF

                                        mpdata := q_pedido[1,4]
                                        IF mtp = 'P';mpdata := q_pedido[1,50];ENDIF
                                        n_ped := 0
                                        FOR n_ped = 1 TO LEN(q_pedido)
                                                prog_imp(n_ped,cons_cli[cont_cli,2]+'-'+cons_cli[cont_cli,3])
                                                mpdata := q_pedido[n_ped,101]
                                                IF mvenda_av = 'S'
                                                        mvlr_av := 0
                                                        mvlr_av := venda_av(q_pedido[n_ped,2])
                                                        IF  mvlr_av = 0
                                                                LOOP
                                                        ENDIF
                                                ENDIF
                                                IF mtp = 'P';mpdata := q_pedido[n_ped,50];ENDIF
                                                IF (! EMPTY(mcod_ope) .AND. STRZERO(mcod_ope,3) <> q_pedido[n_ped,34])
                                                        LOOP
                                                ENDIF
                                                IF mdata_dia <> q_pedido[n_ped,101] .AND. mtot_dia > 0
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
                                                        ENDIF
                                                        DEVPOS(PROW()+1,59);DEVOUT('==============')
                                                        DEVPOS(PROW()+1,00);DEVOUT('TOTAL DO DIA R$:')
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dia-mipi_dia,'999,999,999.99')
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- IPI:')
                                                        DEVPOS(PROW(),PCOL());DEVOUTPICT(mipi_dia,'9,999,999.99')
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- GERAL:')
                                                        DEVPOS(PROW(),PCOL());DEVOUTPICT(mtot_dia,'999,999,999.99')
                                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                                        mdata_dia := q_pedido[n_ped,101]
                                                        mtot_dia := mipi_dia := 0
                                                ENDIF
                                                mdat_ped := q_pedido[n_ped,101]
                                                mdat_pag := q_pedido[n_ped,50]
                                                mcodcli := VAL(q_pedido[n_ped,23])
                                                mnum_ped := q_pedido[n_ped,2]
                                                mcodvend := q_pedido[n_ped,32]
                                                mvendedor := q_pedido[n_ped,33]
                                                mcod_oper := q_pedido[n_ped,34]
                                                malt_ope  := q_pedido[n_ped,61]
                                                mhora     := q_pedido[n_ped,47]
                                                mprazo    := 'Cond.Pagmento: '+q_pedido[n_ped,45]+' - '+q_pedido[n_ped,44]
                                                IF q_pedido[n_ped,49] = '*'
                                                        msit := DTOC(mdat_pag)
                                                ELSEIF q_pedido[n_ped,49] = 'C'
                                                        msit := 'cancel.'
                                                ELSE
                                                        msit := 'aberto  '
                                                ENDIF
                                                IF q_pedido[n_ped,62] = '*'
                                                        msit := msit+' - entregue'
                                                ELSE
                                                        msit := msit+' - nao entr'
                                                ENDIF
                                                IF q_pedido[n_ped,67] = '*'
                                                        mexp := 'OK'
                                                ELSE
                                                        mexp := '  '
                                                ENDIF
                                                mped_vol := mped_peso := mped_itens := ;
                                                mtot_ped := mtot_ipi := 0
                                                IF PROW() >= 57
                                                        EJECT
                                                        cabecalho(mpag++,mtit,mtipo)
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
//                                                        LOOP
                                                ENDIF
                                                DEVPOS(PROW()+1,00);DEVOUT(mdat_ped)
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(mnum_ped)
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(STRZERO(mcodcli,5)+' - ')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(LEFT(cons_cli[cont_cli,3],31))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mped_itens,'99999')
                                                mtot_ipi := mtot_ped := 0
                                                WHILE mnum_ped = q_pedido[n_ped,2]
                                                        prog_imp(n_ped,mnum_ped)
                                                        IF mtipo_rel = 'E'
                                                                DEVPOS(PROW()+1,10);DEVOUT(q_pedido[n_ped,6]+'-'+q_pedido[n_ped,7]+'  '+TRANSFORM(q_pedido[n_ped,14],'999,999.99')+'  '+TRANSFORM(q_pedido[n_ped,14]*q_pedido[n_ped,18],'9,999,999.99'))
                                                        ENDIF
                                                        IF msit <> 'cancel.'
                                                                mtot_ped := mtot_ped + (q_pedido[n_ped,14] * q_pedido[n_ped,18])
                                                                mtot_ipi := mtot_ipi + ((q_pedido[n_ped,14] * q_pedido[n_ped,18]) * (q_pedido[n_ped,57]/100))
                                                                mtot_itens ++
                                                                mtot_vol := mtot_vol + q_pedido[n_ped,14]
                                                                mtot_peso := mtot_peso + (q_pedido[n_ped,11]*q_pedido[n_ped,14])
                                                        ENDIF
                                                        n_ped++
                                                        IF n_ped > LEN(q_pedido)
                                                                EXIT
                                                        ENDIF
                                                        mpdata := q_pedido[n_ped,101]
                                                        IF mtp = 'P';mpdata := q_pedido[n_ped,50];ENDIF
                                                ENDDO
                                                n_ped--
                                                mtot_ped := mtot_ped + mtot_ipi
                                                IF SUBSTR(msit,1,7) = 'cancel.'
                                                        mtot_ped := mtot_ipi := 0
                                                ELSE
                                                        mtot_dia := mtot_dia + mtot_ped
                                                        mipi_dia := mipi_dia + mtot_ipi
                                                        mtot_geral := mtot_geral + mtot_ped
                                                        mipi_ger := mipi_ger + mtot_ipi
                                                ENDIF
                                                IF mvenda_av = 'S'
                                                        DEVPOS(PROW()+1,00);DEVOUT('VALOR DA ENTRADA R$: '+TRANSFORM(mvlr_av,'999,999.99'))
                                                        mtot_av := mtot_av + mvlr_av
                                                ENDIF
                                                mqtd_ped ++
                                                IF PROW() >= 57
                                                        mpag ++
                                                        EJECT
                                                        cabecalho(mpag++,mtit,mtipo)
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
                                        NEXT
                                        IF PROW() >= 57
                                                EJECT
                                                cabecalho(mpag++,mtit,mtipo)
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
                                        IF PROW() >= 55
                                                EJECT
                                                cabecalho(mpag++,mtit,mtipo)
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
                                        DEVPOS(PROW()+2,00);DEVOUT(TIME())
                                        imprt(mtipo_imp,'N')
                                        EJECT
                                ELSE
                                        mtot_vol := mtot_dia := mtot_ipi := mtot_ped := ;
                                        mtot_geral := mtot_ipi  := mipi_dia := mipi_ger := 0
                                        mdata_dia := q_pedido[1,4]
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
                                        IF ! EMPTY(mcod_forn)
                                                DEVPOS(PROW()+1,02);DEVOUT('FORNECEDOR: '+STRZERO(mcod_forn,4)+' - ')
                                                v_fornece(mcod_forn,PROW(),PCOL()+1)
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                        ENDIF
                                        IF ! EMPTY(mcod_vend)
                                                DEVPOS(PROW()+1,02);DEVOUT('VENDEDOR: '+STRZERO(mcod_vend,3)+' - ')
                                                ven(mcod_vend,PROW(),PCOL()+1)
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                        ENDIF
                                        mpdata := q_pedido[1,4]
                                        IF mtp = 'P';mpdata := q_pedido[1,50];ENDIF
                                        n_ped := 0
                                        FOR n_ped = 1 TO LEN(q_pedido)
                                                prog_imp(n_ped,cons_cli[cont_cli,2]+'-'+cons_cli[cont_cli,3])
                                                mpdata := q_pedido[n_ped,101]
                                                IF mvenda_av = 'S'
                                                        mvlr_av := 0
                                                        mvlr_av := venda_av(q_pedido[n_ped,2])
                                                        IF  mvlr_av = 0
                                                                LOOP
                                                        ENDIF
                                                ENDIF
                                                IF mtp = 'P';mpdata := q_pedido[n_ped,50];ENDIF
                                                IF (! EMPTY(mcod_ope) .AND. STRZERO(mcod_ope,3) <> q_pedido[n_ped,34])
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
                                                        ENDIF
                                                        DEVPOS(PROW()+1,59);DEVOUT('==============')
                                                        DEVPOS(PROW()+1,00);DEVOUT('TOTAL DO DIA R$:')
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dia-mipi_dia,'999,999,999.99')
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- IPI:')
                                                        DEVPOS(PROW(),PCOL());DEVOUTPICT(mipi_dia,'9,999,999.99')
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- GERAL:')
                                                        DEVPOS(PROW(),PCOL());DEVOUTPICT(mtot_dia,'999,999,999.99')
                                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                                        mdata_dia := q_pedido[n_ped,101]
                                                        mtot_dia := mipi_dia := 0
                                                ENDIF
                                                mdat_ped := q_pedido[n_ped,101]
                                                mdat_pag := q_pedido[n_ped,50]
                                                mcodcli := VAL(q_pedido[n_ped,23])
                                                mnum_ped := q_pedido[n_ped,2]
                                                mcodvend := q_pedido[n_ped,32]
                                                mvendedor := q_pedido[n_ped,33]
                                                mcod_oper := q_pedido[n_ped,34]
                                                malt_ope  := q_pedido[n_ped,61]
                                                mhora     := q_pedido[n_ped,47]
                                                mprazo    := 'Cond.Pagmento: '+q_pedido[n_ped,45]+' - '+q_pedido[n_ped,44]
                                                mtot_ipi := mtot_ped := 0
                                                IF q_pedido[n_ped,49] = '*'
                                                        msit := DTOC(mdat_pag)
                                                ELSEIF q_pedido[n_ped,49] = 'C'
                                                        msit := 'cancel.'
                                                ELSE
                                                        msit := 'aberto'
                                                ENDIF
                                                IF q_pedido[n_ped,62] = '*'
                                                        msit := msit+' - entregue'
                                                ELSE
                                                        msit := msit+' - nao entr'
                                                ENDIF
                                                IF q_pedido[n_ped,67] = '*'
                                                        mexp := 'OK'
                                                ELSE
                                                        mexp := '  '
                                                ENDIF
                                                mped_vol := mped_peso := mped_itens := ;
                                                mtot_ipi := mtot_ped := 0
                                                WHILE mnum_ped = q_pedido[n_ped,2]
                                                        prog_imp(n_ped,mnum_ped)
                                                        IF msit <> 'cancel.'
                                                                mtot_ped := mtot_ped + (q_pedido[n_ped,14] * q_pedido[n_ped,18])
                                                                mtot_ipi := mtot_ipi + ((q_pedido[n_ped,14] * q_pedido[n_ped,18]) * (q_pedido[n_ped,57]/100))
                                                                mtot_vol := mtot_vol + q_pedido[n_ped,14]
                                                                mtot_peso := mtot_peso + (q_pedido[n_ped,11]*q_pedido[n_ped,14])
                                                                mped_vol := mped_vol + q_pedido[n_ped,14]
                                                                mped_peso := mped_peso + (q_pedido[n_ped,11]*q_pedido[n_ped,14])
                                                                mped_itens ++
                                                        ENDIF
                                                        n_ped++
                                                        IF n_ped > LEN(q_pedido)
                                                                EXIT
                                                        ENDIF
                                                        mpdata := q_pedido[n_ped,101]
                                                        IF mtp = 'P'
                                                                mpdata := q_pedido[n_ped,50]
                                                        ENDIF
                                                ENDDO
                                                n_ped--
                                                mtot_ped := mtot_ped + mtot_ipi
                                                IF (mtot_ped < mvlr_ped .AND. ! EMPTY(mvlr_ped)) .OR. SUBSTR(msit,1,7) = 'cancel.'
                                                        mtot_vol := mtot_vol - mped_vol
                                                        mtot_peso := mtot_peso - mped_peso
                                                        LOOP
                                                ENDIF
                                                IF ! EMPTY(mqtd_itens) .AND. (mped_itens < mqtd_itens .OR. SUBSTR(msit,1,7) = 'cancel.')
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
                                                ENDIF
                                                DEVPOS(PROW()+1,00);DEVOUT(mdat_ped)
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(mnum_ped)
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(STRZERO(mcodcli,5)+' - ')
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
                                        NEXT
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
                                        DEVPOS(PROW()+2,00);DEVOUT(TIME())
                                        imprt(mtipo_imp,'N')
                                        EJECT
                                ENDIF
                        NEXT
                NEXT
                mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
                cabecalho(mpag,mtit,mtipo)
                DEVPOS(PROW()+1,00);DEVOUT(PADC('RESUMO DOS ESTADOS',80))
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                imprt(mtipo_imp,'C')
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
        ELSE
                mensagem('Aguarde um momento coletando dados para o relatorio....')
                q_pedido := {}
                marq_ali := 'ped_s'
                cComm  := "SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND "
                ccomm := ccomm + "pd_entrega >= "+sr_cdbvalue(mdata1)+" AND pd_entrega <= "+sr_cdbvalue(mdata2)
                IF ! EMPTY(mcod_forn)
                        ccomm := ccomm + " AND pcod_fab = "+sr_cdbvalue(STRZERO(mcod_forn,4))
                ENDIF
                IF ! EMPTY(mcod_vend)
                        ccomm := ccomm + " AND pcod_vend = "+sr_cdbvalue(STRZERO(mcod_vend,3))
                ENDIF
                IF ! EMPTY(mcod_cli)
                        ccomm := ccomm + " AND pcod_cli = "+sr_cdbvalue(mcod_cli)
                ENDIF
                IF ! EMPTY(mliberar)
                        ccomm := ccomm + " AND ppag = "+sr_cdbvalue(mliberar)
                ENDIF
                IF ! EMPTY(mcodemp)
                        ccomm := ccomm + " AND pempresa = "+sr_cdbvalue(mcodemp)
                ENDIF
                IF ! EMPTY(mforma_pg)
                        ccomm := ccomm + " AND pcond_inte LIKE "+sr_cdbvalue(mforma_pg+'%')
                ENDIF
                IF mtelemark = 'S'
                        ccomm := ccomm + " AND pstat_item = 'T'"
                ENDIF
                IF maprazo = 'S'
                        ccomm := ccomm + " AND ptp_vend = 'AP'"
                ENDIF
                IF ! EMPTY(mcod_ope)
                        ccomm := ccomm + " AND pcod_oper = "+sr_cdbvalue(STRZERO(mcod_ope,3))
        	ENDIF
                ccomm := ccomm + " AND (ppag = '*' OR ppag IS NULL)"
                ccomm := ccomm + " ORDER BY pnum_ped"
                sr_getconnection():exec(ccomm,,.t.,@q_pedido)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(q_pedido) = 0
                        SETPRC(00,00)
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        atencao('Nao existe documento neste Periodo...')
                        LOOP
                ENDIF
/*
                IF opcao = 2 .OR. opcao = 5
                        IF(mtp = 'E',ASORT(q_pedido,,, {|x,y| x[4] < y[4]}),ASORT(q_pedido,,, {|x,y| x[50] < y[50]}))
                ENDIF
*/
                mpag = 1
                mtot_vol := mtot_dia := mtot_ipi := mtot_ped := ;
                mtot_geral := mtot_itens := mqtd_ped := mipi_dia := mipi_ger := 0
                mdata_dia := q_pedido[1,4]
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
                IF ! EMPTY(mcod_forn)
                        DEVPOS(PROW()+1,02);DEVOUT('FORNECEDOR: '+STRZERO(mcod_forn,4)+' - ')
                        v_fornece(mcod_forn,PROW(),PCOL()+1)
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                IF ! EMPTY(mcod_vend)
                        DEVPOS(PROW()+1,02);DEVOUT('VENDEDOR: '+STRZERO(mcod_vend,3)+' - ')
                        ven(mcod_vend,PROW(),PCOL()+1)
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                mpdata := q_pedido[1,4]
                IF mtp = 'P'
                        mpdata := q_pedido[1,50]
                ENDIF
                IF msint = 'A'
                        n_ped := 0
                        FOR n_ped = 1 TO LEN(q_pedido)
                                prog_imp(n_ped,DTOC(mpdata))
                                IF mvenda_av = 'S'
                                        mvlr_av := 0
                                        mvlr_av := venda_av(q_pedido[n_ped,2])
                                        IF  mvlr_av = 0
                                                LOOP
                                        ENDIF
                                ENDIF
                                mpdata := q_pedido[n_ped,101]
                                IF mtp = 'P';mpdata := q_pedido[n_ped,50];ENDIF
                                cons_cli := {}
                                sr_getconnection():exec("SELECT uf,codvend,razao FROM saccli WHERE cod_cli = "+sr_cdbvalue(q_pedido[n_ped,23]),,.t.,@cons_cli)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_cli) > 0
                                        IF  ! EMPTY(muf) .AND. muf <> cons_cli[1,1]
                                                LOOP
                                        ENDIF
                                ELSE
                                        LOOP
                                ENDIF
                                IF mdata_dia <> q_pedido[n_ped,101] .AND. mtot_dia > 0
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
                                        mdata_dia := q_pedido[n_ped,101]
                                        mtot_dia := mipi_dia := 0
                                ENDIF
                                mdat_ped := q_pedido[n_ped,101]
                                mdat_pag := q_pedido[n_ped,50]
                                mcodcli := VAL(q_pedido[n_ped,23])
                                mnum_ped := q_pedido[n_ped,2]
                                mcodvend := q_pedido[n_ped,32]
                                mvendedor := q_pedido[n_ped,33]
                                mcod_oper := q_pedido[n_ped,34]
                                malt_ope  := q_pedido[n_ped,61]
                                mhora     := q_pedido[n_ped,47]
                                mprazo    := 'Cond.Pagmento: '+q_pedido[n_ped,45]+' - '+q_pedido[n_ped,44]
                                IF q_pedido[n_ped,49] = '*'
                                        msit := DTOC(mdat_pag)
                                ELSEIF q_pedido[n_ped,49] = 'C'
                                        msit := 'cancel.'
                                ELSE
                                        msit := 'aberto '
                                ENDIF
                                IF q_pedido[n_ped,62] = '*'
                                        msit := msit+' - entregue'
                                ELSE
                                        msit := msit+' - nao entr'
                                ENDIF
                                IF q_pedido[n_ped,67] = '*'
                                        mexp := 'OK'
                                ELSE
                                        mexp := '  '
                                ENDIF
                                mped_vol := mped_peso := mped_itens := ;
                                mtot_ipi := mtot_ped := 0
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
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(LEFT(cons_cli[1,3],31))
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mped_itens,'99999')
                                mtot_ipi := mtot_ped := 0
                                WHILE n_ped <= LEN(q_pedido) .AND. mnum_ped = q_pedido[n_ped,2]
                                        prog_imp(n_ped,DTOC(q_pedido[n_ped,101]))
                                        IF SUBSTR(msit,1,7) <> 'cancel.'
                                                mtot_ped := mtot_ped + (q_pedido[n_ped,14] * q_pedido[n_ped,18])
                                                mtot_ipi := mtot_ipi + ((q_pedido[n_ped,14] * q_pedido[n_ped,18]) * (q_pedido[n_ped,57]/100))
                                                mtot_itens ++
                                                mtot_vol := mtot_vol + q_pedido[n_ped,14]
                                                mtot_peso := mtot_peso + (q_pedido[n_ped,11]*q_pedido[n_ped,14])
                                        ENDIF
                                        IF mtipo_rel = 'E'
                                                DEVPOS(PROW()+1,10);DEVOUT(q_pedido[n_ped,6]+'-'+q_pedido[n_ped,7]+'  '+TRANSFORM(q_pedido[n_ped,14],'999,999.99')+'  '+TRANSFORM(q_pedido[n_ped,14]*q_pedido[n_ped,18],'9,999,999.99'))
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
                                        n_ped++
                                        IF n_ped > LEN(q_pedido)
                                                EXIT
                                        ENDIF
                                        mpdata := q_pedido[n_ped,101]
                                        IF mtp = 'P';mpdata := q_pedido[n_ped,50];ENDIF
                                ENDDO
                                n_ped--
                                mqtd_ped ++
                                mtot_ped := mtot_ped + mtot_ipi
                                IF SUBSTR(msit,1,7) = 'cancel.'
                                        mtot_ipi := mtot_ped := 0
                                ELSE
                                        mtot_dia := mtot_dia + mtot_ped
                                        mipi_dia := mipi_dia + mtot_ipi
                                        mtot_geral := mtot_geral + mtot_ped
                                        mipi_ger := mipi_ger + mtot_ipi
                                ENDIF
                                IF mtipo_rel = 'E'
                                        DEVPOS(PROW()+1,68);DEVOUT('--------------')
                                        DEVPOS(PROW()+1,55);DEVOUT('Total Pedido:'+TRANSFORM(mtot_ped,'999,999,999.99'))
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
                                ENDIF
                                IF n_ped > LEN(q_pedido)
                                        EXIT
                                ENDIF

                        NEXT
                        //ENDDO
                        DEVPOS(PROW()+1,59);DEVOUT('==============')
                        DEVPOS(PROW()+1,00);DEVOUT('TOTAL DO DIA R$:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dia-mipi_dia,'999,999,999.99')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- IPI:')
                        DEVPOS(PROW(),PCOL());DEVOUTPICT(mipi_dia,'9,999,999.99')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- GERAL:')
                        DEVPOS(PROW(),PCOL());DEVOUTPICT(mtot_dia,'999,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                ELSE
                        n_ped := 0
                        FOR n_ped = 1 TO LEN(q_pedido)
                                prog_imp(n_ped)
                                IF mvenda_av = 'S'
                                        mvlr_av := 0
                                        mvlr_av := venda_av(q_pedido[n_ped,2])
                                        IF  mvlr_av = 0
                                                LOOP
                                        ENDIF
                                ENDIF
                                mpdata := q_pedido[n_ped,101]
                                IF mtp = 'P';mpdata := q_pedido[n_ped,50];ENDIF
                                cons_cli := {}
                                sr_getconnection():exec("SELECT uf,codvend,razao FROM saccli WHERE cod_cli = "+sr_cdbvalue(q_pedido[n_ped,23]),,.t.,@cons_cli)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_cli) > 0
                                        IF  ! EMPTY(muf) .AND. muf <> cons_cli[1,1]
                                                LOOP
                                        ENDIF
                                ELSE
                                        LOOP
                                ENDIF
                                mdat_ped := q_pedido[n_ped,101]
                                mdat_pag := q_pedido[n_ped,50]
                                mcodcli := VAL(q_pedido[n_ped,23])
                                mnum_ped := q_pedido[n_ped,2]
                                mcodvend := q_pedido[n_ped,32]
                                mvendedor := q_pedido[n_ped,33]
                                mcod_oper := q_pedido[n_ped,34]
                                malt_ope  := q_pedido[n_ped,61]
                                mhora     := q_pedido[n_ped,47]
                                mprazo    := 'Cond.Pagmento: '+q_pedido[n_ped,45]+' - '+q_pedido[n_ped,44]
                                mtot_ipi := mtot_ped := 0
                                IF q_pedido[n_ped,49] = '*'
                                        msit := DTOC(mdat_pag)
                                ELSEIF q_pedido[n_ped,49] = 'C'
                                        msit := 'cancel.'
                                ELSE
                                        msit := 'aberto'
                                ENDIF
                                IF q_pedido[n_ped,62] = '*'
                                        msit := msit+' - entregue'
                                ELSE
                                        msit := msit+' - nao entr'
                                ENDIF
                                IF q_pedido[n_ped,67] = '*'
                                        mexp := 'OK'
                                ELSE
                                        mexp := '  '
                                ENDIF
                                mped_vol := mped_peso := mped_itens := mtot_ipi := ;
                                mtot_ped := 0
                                WHILE mnum_ped = q_pedido[n_ped,2]
                                        prog_imp(n_ped)
                                        IF msit <> 'cancel.'
                                                mtot_ped := mtot_ped + (q_pedido[n_ped,14] * q_pedido[n_ped,18])
                                                mtot_ipi := mtot_ipi + ((q_pedido[n_ped,14] * q_pedido[n_ped,18]) * (q_pedido[n_ped,57]/100))
                                                mtot_vol := mtot_vol + q_pedido[n_ped,14]
                                                mtot_peso := mtot_peso + (q_pedido[n_ped,11]*q_pedido[n_ped,14])
                                                mped_vol := mped_vol + q_pedido[n_ped,14]
                                                mped_peso := mped_peso + (q_pedido[n_ped,11]*q_pedido[n_ped,14])
                                                mped_itens ++
                                        ENDIF
                                        n_ped++
                                        IF n_ped > LEN(q_pedido)
                                                EXIT
                                        ENDIF
                                        mpdata := q_pedido[n_ped,101]
                                        IF mtp = 'P'
                                                mpdata := q_pedido[n_ped,50]
                                        ENDIF
                                ENDDO
                                n_ped--
                                mtot_ped := mtot_ped + mtot_ipi
                                IF (mtot_ped < mvlr_ped .AND. ! EMPTY(mvlr_ped)) .OR. SUBSTR(msit,1,7) = 'cancel.'
                                        mtot_vol := mtot_vol - mped_vol
                                        mtot_peso := mtot_peso - mped_peso
                                        LOOP
                                ENDIF
                                IF ! EMPTY(mqtd_itens) .AND. (mped_itens < mqtd_itens .OR. SUBSTR(msit,1,7) = 'cancel.')
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
                                AADD(m_pedidos,{mdat_ped,mnum_ped,STRZERO(mcodcli,5),cons_cli[1,3],mped_itens,mtot_ped,msit,mcodvend+'-'+LEFT(mvendedor,13),;
                                     mcod_oper,mexp,malt_ope,v_ped_nt(VAL(mnum_ped),'*','*'),mhora,0})
                        NEXT
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
                //DEVPOS(PROW(),PCOL()+2);DEVOUT('Total ITENS:')
                //DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(mtot_itens,'999,999.99')))
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

