* LISTAGEM CLASSIFICACAO DOS PRODUTO MAIS VENDIDOS
**************************************************
FUNCTION sac5com5
*****************
LOCAL MPRG:='SAC5COM5',;
      opcao,i,mdata1,mdata2,;
      mcod_merc,mmerc,mtot_vlr,mtot_quantd,mtot_prunit,mger_vlr,mger_quantd,;
      mger_prunit,m_produto:={},mlucro,mdia,mop,mc_real,mc_merc,;
      mquantd_merc,mgrupo,msubgrupo,mcod_espe,mcod_ven,mcod_ope,mcod_forn,mcidade,cons_cid := {},mop_est,;
      mlist_cust:=' '

PRIVATE mtraco,telaprint,mtit,mtipo,mpag,mcod_cli,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),cons_cli:={}

IF ! ver_nivel(mprg,'RELATORIO CLASSIFICACAO DOS PRODUTOS MAIS VENDIDOS - MOVIMENTO','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mtraco := REPLI('=',132)
*----------------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
IF ! AbriArq('sacespe','espe');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
op_tela(10,10,28,85,' CLASSIFICAO DOS PRODUTOS ')
WHILE .T.
        exibi_prg(mprg)
        mtipo_imp := m_indiv[1,18]
        i := 0
        mcod_merc := SPACE(5)
        mmerc := SPACE(40)
        mlucro := mtot_vlr := mtot_quantd := mtot_prunit := mger_vlr := ;
        mger_quantd := mger_prunit := mop := mquantd_merc := mcod_cli := ;
        mgrupo := msubgrupo := mcod_espe := mcod_ven := mcod_ope := ;
        mcod_forn:= 0
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        mc_real := 'M'
        mcidade := SPACE(20)
        mop_est := 'N'
        ASIZE(m_produto,0)
        mensagem('Preencha os Campos - <ESC>p/Sair')
        @ 14,1 TO 14,85
        @ 16,1 TO 16,85
        @ 15,1 SAY ' Lucro Geral '
        @ 15,15 SAY ' Lucro p/Prod. '
        @ 15,31 SAY ' Quantidade '
        @ 15,44 SAY ' Preco Venda '
        @ 15,COL()+1 SAY ' Descricao '
        DEVPOS( 1,2);DEVOUT('Data Inicial...:')
        DEVPOS( 2,2);DEVOUT('Data Final.....:')
        DEVPOS( 3,2);DEVOUT('Codigo Cliente.:')
        DEVPOS( 4,2);DEVOUT('Grupo..........:')
        DEVPOS( 5,2);DEVOUT('Sub-Grupo......:')
        DEVPOS( 6,2);DEVOUT('Especie Produto:')
        DEVPOS( 7,2);DEVOUT('Codigo Vendedor:')
        DEVPOS( 8,2);DEVOUT('Codigo Operador:')
        DEVPOS( 9,2);DEVOUT('Cod. Fornecedor:')
        DEVPOS(10,2);DEVOUT('Custo [R]EAL Custo da [M]ERCADORIA..:')
        DEVPOS(11,2);DEVOUT('Quantidade de produtos a ser listado:')
        DEVPOS(12,2);DEVOUT('Imprimir Estatistica [S/N]..........:')
        DEVPOS(13,2);DEVOUT('Cidade..............................:')
        ///DEVPOS(14,2);DEVOUT('Imprimir Custo [S,N]................:')

        @ 1,19 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 2,19 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ 3,19 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,3,25)
        @ 4,19 GET mgrupo PICT '999' VALID IF(EMPTY(mgrupo),.T.,ver_gru(@mgrupo,4,24,.F.))
        @ 5,19 GET msubgrupo PICT '99' VALID IF(EMPTY(msubgrupo),.T.,ver_sgru(mgrupo,msubgrupo,5,24,.F.))
        @ 6,19 GET mcod_espe PICT '9999' VALID ver_espe(mcod_espe,6,24,,0)
        @ 7,19 GET mcod_ven PICT '999' VALID IF(EMPTY(mcod_ven),.T.,ven(mcod_ven,7,24))
        @ 8,19 GET mcod_ope PICT '999' VALID IF(EMPTY(mcod_ope),.T.,ven(mcod_ope,8,24))
        @ 9,19 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn),.T.,v_fornece(mcod_forn,9,24))
        @ 10,41 GET mc_real PICT '@!' VALID mc_real $ 'R,M'
        @ 11,41 GET mquantd_merc PICT '9999' VALID lim_get() WHEN men_get(13,38,'Informe a quantidade de produto que deseja lista ou deixe em branco para listar TODOS')
        @ 12,41 GET mop_est PICT '@!' VALID mop_est $ 'S,N' WHEN nivel_acess = '1'
        //@ 14,41 GET mlist_cust PICT '!@' VALID mlist_cust $ 'S,N' WHEN nivel_acess = '1'
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                RELEASE ALL
                EXIT
        ENDIF
        IF EMPTY(mc_merc) .AND. EMPTY(mc_real)
                LOOP
        ENDIF
        IF EMPTY(mcod_cli)
                mcidade := saccid(,mcidade)
        ENDIF
        SETCOR(3)
        DEVPOS(13,41);DEVOUT(mcidade)
        SETCOR(10)
        IF mdata1 = mdata2
                mdia := 1
        ELSE
                mdia := (mdata2 - mdata1)+1
        ENDIF
        @ 15,1 PROMPT ' Lucro Geral '
        @ 15,15 PROMPT ' Lucro p/Prod. '
        @ 15,31 PROMPT ' Quantidade '
        @ 15,44 PROMPT ' Preco Venda '
        @ 15,COL()+1 PROMPT ' Descricao '
        SET INTEN ON
        MENU TO mop
        setcor(1)
        marq := 'MAIS_PRO.REL'
        mensagem('Espere o Final da Impressao OK - [ESC]Sair')
        IF LASTKEY() = 27 .OR. ! imp_arq('MAIS_PRO.REL','R')
                LOOP
        ENDIF
        cons_merc := {}
        cComm  := "SELECT * FROM sacmerc WHERE cod_merc IS NOT NULL "
        //IF ! EMPTY(mgrupo) .OR. ! EMPTY(msubgrupo) .OR. ! EMPTY(mcod_forn) .OR. ! EMPTY(mcod_espe)
        //        cComm  := " WHERE "
        //ENDIF
        IF ! EMPTY(mgrupo)
                cComm  := ccomm + " AND gru_sub LIKE "+sr_cdbvalue(STRZERO(mgrupo,3)+'%')
        ENDIF
        IF ! EMPTY(msubgrupo)
                cComm  := ccomm + " AND gru_sub = "+sr_cdbvalue(STRZERO(mgrupo,3)+STRZERO(msubgrupo,2))
        ENDIF
        IF ! EMPTY(mcod_forn)            //.AND. mov->cod_fab <> STRZERO(mcod_forn,4));
                cComm  := ccomm + " AND cod_fab = "+sr_cdbvalue(STRZERO(mcod_forn,4))
        ENDIF
        IF ! EMPTY(mcod_espe)
                cComm  := ccomm + " AND especie = "+sr_cdbvalue(STRZERO(mcod_espe,4))
        ENDIF
        //cComm  := ccomm + " ORDER BY merc
        sr_getconnection():exec(ccomm,,.t.,@cons_merc)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_merc) = 0
                atencao('Nao existe nenhum Produto...')
                LOOP
        ENDIF
        i:=0
        FOR i = 1 TO LEN(cons_merc)
                prog_imp(i,cons_merc[i,8]+'-'+cons_merc[i,9])
                cons_mov := {}
                                        //           1               2                 3                     4
                IF ! EMPTY(mcod_cli)
                        cComm  := "SELECT SUM(quantd * vl_vend),SUM(quantd),SUM(quantd * pr_unit),SUM(quantd * cust_mer),cod_cli FROM sacmov WHERE data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)
                ELSE
                        cComm  := "SELECT SUM(quantd * vl_vend),SUM(quantd),SUM(quantd * pr_unit),SUM(quantd * cust_mer) FROM sacmov WHERE data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)
                ENDIF
                cComm  := ccomm + " AND codigo = "+sr_cdbvalue(cons_merc[i,8])
                cComm  := ccomm + " AND ent_sai = 'S' AND (cancel IS NULL OR cancel = ' ')"
                cComm  := ccomm + " AND tipo = '02' AND vl_vend > 0"
                cComm  := ccomm + " AND documento NOT LIKE 'TR%'"
                cComm  := ccomm + " AND documento NOT LIKE 'BL%'"
                IF ! EMPTY(mcod_ope)            //.AND. STRZERO(mcod_ope,3) <> mov->cod_oper);
                        cComm  := ccomm + " AND cod_oper = "+sr_cdbvalue(STRZERO(mcod_ope,3))
                ENDIF
                IF ! EMPTY(mcod_ven)            //.AND. STRZERO(mcod_ven,3) <> mov->cod_vend);
                        cComm  := ccomm + " AND cod_vend = "+sr_cdbvalue(STRZERO(mcod_ven,3))
                ENDIF
                /*
                IF ! EMPTY(mcod_espe)           //.AND. mov->especie <> STRZERO(mcod_espe,4))
                        cComm  := ccomm + " AND especie = "+sr_cdbvalue(STRZERO(mcod_espe,4))
                ENDIF
                */
                IF ! EMPTY(mcod_cli)
                        cComm  := ccomm + " AND cod_cli = "+sr_cdbvalue(mcod_cli)
                        cComm  := ccomm + " GROUP BY cod_cli,cod_cli"
                ENDIF
                sr_getconnection():exec(ccomm,,.t.,@cons_mov)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_mov) > 0
                        IF ! EMPTY(mcidade)
                                cons_cid := {}
                                sr_getconnection():exec("SELECT cidade FROM saccli WHERE cidade = "+sr_cdbvalue(mcidade),,.t.,@cons_cid)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_cid) = 0
                                        LOOP
                                ENDIF
                        ENDIF
                        mger_vlr := mger_vlr + cons_mov[1,1]
                        mger_quantd := mger_quantd + cons_mov[1,2]
                        mtot_vlr := mtot_vlr + cons_mov[1,1]
                        mtot_quantd := mtot_quantd + cons_mov[1,2]
                        IF mc_real = 'R'
                                mtot_prunit := mtot_prunit + cons_mov[1,3]
                                mger_prunit := mger_prunit + cons_mov[1,3]
                        ELSE
                                mtot_prunit := mtot_prunit + cons_mov[1,4]
                                mger_prunit := mger_prunit + cons_mov[1,4]
                        ENDIF

                        IF mtot_prunit = 0
                                mlucro := 100
                        ELSE
                                mlucro := ((mtot_vlr-mtot_prunit)/mtot_vlr)*100
                        ENDIF
                        IF EMPTY(mtot_quantd)
                                mtot_vlr := mtot_quantd := mtot_prunit := 0
                                mcod_merc := mov->codigo
                                mmerc := mov->produto
                                LOOP
                        ENDIF

                        AADD(m_produto,{cons_merc[i,8],cons_merc[i,9],mtot_quantd,mtot_prunit/mtot_quantd,mtot_vlr/mtot_quantd,;
                                        mtot_vlr,mtot_quantd/mdia,;
                                        mtot_vlr-mtot_prunit,mlucro,mtot_vlr-mtot_prunit,cons_merc[i,6]})
                        mtot_vlr := mtot_quantd := mtot_prunit := 0
                ENDIF
        NEXT
        IF mc_real = 'R'
                DO CASE
                        CASE mop = 1
                                ASORT(m_produto,,,{|x,y| x[8] > y[8]})
                                mtit = 'CLASSIFICACAO PRODUTO pelo Lucro Geral (CUSTO REAL)'
                        CASE mop = 2
                                ASORT(m_produto,,,{|x,y| x[9] > y[9]})
                                mtit = 'CLASSIFICACAO PRODUTO pelo Lucro Individual (CUSTO REAL)'
                        CASE mop = 3
                                ASORT(m_produto,,,{|x,y| x[3] < y[3]})
                                mtit = 'CLASSIFICACAO PRODUTO pela quantidade (CUSTO REAL)'
                        CASE mop = 4
                                ASORT(m_produto,,,{|x,y| x[6] > y[6]})
                                mtit = 'CLASSIFICACAO PRODUTO pelo Preco de Venda (CUSTO REAL)'
                        CASE mop = 5
                                ASORT(m_produto,,,{|x,y| x[2] < y[2]})
                                mtit = 'CLASSIFICACAO PRODUTO pela Descricao (CUSTO REAL)'
                ENDCASE
        ELSE
                DO CASE
                        CASE mop = 1
                                ASORT(m_produto,,,{|x,y| x[8] > y[8]})
                                mtit = 'CLASSIFICACAO PRODUTO pelo Lucro Geral (CUSTO MERCADORIA)'
                        CASE mop = 2
                                ASORT(m_produto,,,{|x,y| x[9] > y[9]})
                                mtit = 'CLASSIFICACAO PRODUTO pelo Lucro Individual (CUSTO MERCADORIA)'
                        CASE mop = 3
                                ASORT(m_produto,,,{|x,y| x[3] < y[3]})
                                mtit = 'CLASSIFICACAO PRODUTO pela quantidade (CUSTO MERCADORIA)'
                        CASE mop = 4
                                ASORT(m_produto,,,{|x,y| x[6] > y[6]})
                                mtit = 'CLASSIFICACAO PRODUTO pela Preco de venda (CUSTO MERCADORIA)'
                        CASE mop = 5
                                ASORT(m_produto,,,{|x,y| x[2] < y[2]})
                                mtit = 'CLASSIFICACAO PRODUTO pela Descricao (CUSTO MERCADORIA)'
                ENDCASE
        ENDIF
        mpag = 1
        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)+' Intervalo de '+STRZERO(mdia,4)+' dias'
        IF ! EMPTY(mcod_cli)
                mtipo = mtipo+' - Cod.Cliente:'+mcod_cli
        ENDIF
        IF ! EMPTY(mcidade)
                mtipo = mtipo+' - Cidade:'+ALLTRIM(mcidade)
        ENDIF
        IF ! EMPTY(mcod_forn)
                mtipo = mtipo+' - Fornecedor:'+STRZERO(mcod_forn,4)+'-'+forn->razao
        ENDIF
        cabecalho(mpag,mtit,mtipo,mprg)
        imprt(mtipo_imp,'C')
        IF mop_est = 'S'
                DEVPOS(PROW()+1,57);DEVOUT('Vlr.Medio')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.Medio')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('    Vlr.Total')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('  (%) ')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('  Qtd.Med')
                DEVPOS(PROW(),PCOL()+20);DEVOUT('part.')
        ELSE
                DEVPOS(PROW()+1,57);DEVOUT('Vlr.Medio')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('    Vlr.Total')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('  (%) ')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('  Qtd.Med')
        ENDIF

        DEVPOS(PROW()+1,00);DEVOUT('Produto')
        DEVPOS(PROW(),49);DEVOUT('Quantd.')
        IF mop_est = 'S'
                DEVPOS(PROW(),PCOL()+1);DEVOUT('    Custo')
        ENDIF
        DEVPOS(PROW(),PCOL()+1);DEVOUT('    Venda')

        IF mop_est = 'S'
                DEVPOS(PROW(),PCOL()+1);DEVOUT('    das Venda')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Vendas')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('    p/dia')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('  Lucro R$')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Lucro %')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Lucro %')
        ELSE
                DEVPOS(PROW(),PCOL()+1);DEVOUT('    das Venda')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Vendas')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('    p/dia')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Referencia')
        ENDIF
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        i := 0
        IF EMPTY(mquantd_merc) .OR. mquantd_merc > LEN(m_produto)
                mquantd_merc := LEN(m_produto)
        ENDIF
        FOR i = 1 TO mquantd_merc
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT(m_produto[i,1]+'-'+m_produto[i,2])
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_produto[i,3],'999999.99')
                IF mop_est = 'S'
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_produto[i,4],'99,999.99')
                ENDIF
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_produto[i,5],'99,999.99')
                IF mop_est = 'S'
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_produto[i,6],'99,999,999.99')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM((m_produto[i,6]/mger_vlr)*100,'999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_produto[i,7],'99999.999'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_produto[i,8],'999,999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_produto[i,9],'9999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM((m_produto[i,8]/(mger_vlr-mger_prunit))*100,'999.99'))
                ELSE
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_produto[i,6],'99,999,999.99')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM((m_produto[i,6]/mger_vlr)*100,'999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_produto[i,7],'99999.999'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(m_produto[i,11])
                ENDIF
                IF PROW() >= 59
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                        IF mop_est = 'S'
                                DEVPOS(PROW()+1,57);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('    Vlr.Total')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('  (%) ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('  Qtd.Med')
                                DEVPOS(PROW(),PCOL()+20);DEVOUT('part.')
                        ELSE
                                DEVPOS(PROW()+1,57);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('    Vlr.Total')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('  (%) ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('  Qtd.Med')
                        ENDIF

                        DEVPOS(PROW()+1,00);DEVOUT('Produto')
                        DEVPOS(PROW(),49);DEVOUT('Quantd.')
                        IF mop_est = 'S'
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('    Custo')
                        ENDIF
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('    Venda')

                        IF mop_est = 'S'
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('    das Venda')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Vendas')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('    p/dia')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('  Lucro R$')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Lucro %')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Lucro %')
                        ELSE
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('    das Venda')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Vendas')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('    p/dia')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Referencia')
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        imprt(mtipo_imp,'C')
                ENDIF
        NEXT
        IF PROW() >= 57
                mpag ++
                EJECT
                cabecalho(mpag,mtit,mtipo,mprg)
        ENDIF
        IF mop_est = 'S'
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('T O T A L   G E R A L:')
                DEVPOS(PROW(),43);DEVOUTPICT(mger_quantd,'99,999,999.99')
                DEVPOS(PROW(),58);DEVOUTPICT(mger_prunit / mger_quantd,'99,999.99')
                DEVPOS(PROW(),68);DEVOUTPICT(mger_vlr / mger_quantd,'99,999.99')
                DEVPOS(PROW(),79);DEVOUTPICT(mger_vlr,'99,999,999.99')
                DEVPOS(PROW(),93);DEVOUT(TRANSFORM(100,'999.99'))
                DEVPOS(PROW(),100);DEVOUT(TRANSFORM((mger_quantd/mdia),'99999.999'))
                DEVPOS(PROW(),110);DEVOUT(TRANSFORM(mger_vlr - mger_prunit,'999,999.99'))
                DEVPOS(PROW(),122);DEVOUT(TRANSFORM(((mger_vlr-mger_prunit)/mger_prunit)*100,'999.99'))
                DEVPOS(PROW()+2,00);DEVOUT(TIME())
        ENDIF
        imprt(mtipo_imp,'N')
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao(marq)
ENDDO
wvw_lclosewindow()
RETURN NIL
**************************** F I M ****************************************************