********************
* LISTAGEM MOVIMENTO DE VENDAS P/PRODUTO
********************
MEMVAR getlist,mdata_sis,nivel_acess

FUNCTION sac5com4
**************
LOCAL MPRG:='SAC5COM4',;
      lci,cci,lba,cba,opcao,i,mdata1,mdata2,mcod_op,mop,;
      mcod_merc,mmerc,mtot_vlr,mtot_quantd,mtot_prunit,mger_vlr,mger_quantd,;
      mger_prunit,mgrupo,msubgrupo,mgru_vlr,mgru_quantd,mgru_prunit,m_produto:={},;
      mdia,mlucro,mc_merc,mc_real,mquantd_sg,mtot_sg,mprunit_sg,mcod_ven

PRIVATE mtraco,telaprint,mtit,mtipo,mpag,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,'RELATORIO MOVIMENTO DE VENDAS P/PRODUTO','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('=',132)

lci := cci := 0
lba := 05
cba := 48
*----------------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
//
IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
op_tela(lci,cci,lba+2,cba,'RELATORIO MOVIMENTO DE VENDAS P/PRODUTO')
WHILE .T.
        mtipo_imp := m_indiv[1,18]
        mgrupo := SPACE(3)
        msubgrupo := SPACE(2)
        mcod_merc := SPACE(5)
        mmerc := SPACE(40)
        i := mlucro := mtot_vlr := mtot_quantd := mtot_prunit := mgru_vlr := ;
        mgru_quantd := mgru_prunit := mquantd_sg := mtot_sg := mprunit_sg := ;
        mger_vlr := mger_quantd := mger_prunit := mop := mcod_ven := 0
        mdata1 := CTOD('  /  /  ')
        mdata2 := mdata_sis
        mcod_op := SPACE(2)
        mc_merc := mc_real := SPACE(1)
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(lci+1,cci+2);DEVOUT('Data Inicial...:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Final.....:')
        DEVPOS(lci+3,cci+2);DEVOUT('Codigo Vendedor:')
        DEVPOS(lci+4,cci+2);DEVOUT('Custo REAL: [ ]  Custo MERCADORIA: [ ]')

        @ lci+1,cci+19 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+2,cci+19 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+3,cci+19 GET mcod_ven PICT '999' VALID ven(mcod_ven,lci+3,cci+23)
        @ lci+4,cci+15 GET mc_real PICT '@!' VALID mc_real $ 'X, '
        @ lci+4,cci+38 GET mc_merc PICT '@!' VALID mc_merc $ 'X, ' WHEN mc_real = ' '
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                RELEASE mtraco,telaprint,mtit,mtipo,mpag
                EXIT
        ENDIF
        IF EMPTY(mc_merc) .AND. EMPTY(mc_real)
                LOOP
        ENDIF
        IF mdata1 = mdata2
                mdia := 1
        ELSE
                mdia := mdata2 - mdata1
        ENDIF
        marq := 'MOV_VEND.REL'
        IF ! imp_arq('MOV_VEND.REL','R')
                LOOP
        ENDIF
        mensagem('Aguarde coletando dados')
        cons_mov := {}
        cComm  := "SELECT * FROM sacmov WHERE data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)+" AND ent_sai = 'S' AND tipo = '02' AND vl_vend > "+sr_cdbvalue(0)
        ccomm := ccomm + " AND (documento LIKE 'PD%' OR documento LIKE 'CP%' OR num_ped = 'CUPOME')"
        IF ! EMPTY(mcod_ven)
                cComm  := ccomm + " AND cod_vend = "+sr_cdbvalue(STRZERO(mcod_ven,3))
        ENDIF
        ccomm := ccomm + ' ORDER BY data_s_e,documento'
        dbUseArea( .F.,"SQLRDD",cComm,"q_mov")
        SELE('q_mov')
        DBGOTOP()
        //sr_getconnection():exec(ccomm,,.t.,@cons_mov)
        IF EOF()
                atencao('Nao existe movimento neste Periodo...')
                LOOP
        ENDIF
        mpag = 1
        IF mc_real = 'X'
                mtit = 'Relatorio do Resumo das Vendas p/ Produto (CUST REAL)'
        ELSE
                mtit = 'Relatorio do Resumo das Vendas p/ Produto (CUST MERCADORIA)'
        ENDIF
        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
        IF ! EMPTY(mcod_ven)
                mtipo = mtipo+' do Vendedor: '+STRZERO(mcod_ven,3)+'-'+sen->snome
        ENDIF
        cabecalho(mpag,mtit,mtipo,mprg)
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
        DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
        DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
        DEVPOS(PROW(),93);DEVOUT(' (%)')
        DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
        DEVPOS(PROW(),132);DEVOUT('part.')

        DEVPOS(PROW()+1,00);DEVOUT('Produto')
        DEVPOS(PROW(),49);DEVOUT('Quantd.')
        DEVPOS(PROW(),63);DEVOUT('Custo')
        DEVPOS(PROW(),73);DEVOUT('Venda')
        DEVPOS(PROW(),83);DEVOUT('das Venda')
        DEVPOS(PROW(),93);DEVOUT('Vendas')
        DEVPOS(PROW(),104);DEVOUT('p/dia')
        DEVPOS(PROW(),112);DEVOUT('Lucro R$')
        DEVPOS(PROW(),121);DEVOUT('Lucro %')
        DEVPOS(PROW(),130);DEVOUT('Lucro %')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        mcod_merc := q_mov->codigo
        mmerc := q_mov->produto
        WHILE ! EOF()
                IF ! EMPTY(mcod_ven) .AND. STRZERO(mcod_ven,3) <> q_mov->cod_vend
                        SKIP
                        LOOP
                ENDIF
                mger_vlr := mger_vlr + (q_mov->quantd * q_mov->vl_vend)
                mger_quantd := mger_quantd + q_mov->quantd
                IF mc_real = 'X'
                        mger_prunit := mger_prunit + (q_mov->quantd * q_mov->pr_unit)
                ELSE
                        mger_prunit := mger_prunit + (q_mov->quantd * q_mov->cust_mer)
                ENDIF
                SKIP
        ENDDO
        GO TOP
        prt_gru(VAL(SUBSTR(q_mov->gru_sub,1,3)))
        prt_sgru(VAL(SUBSTR(q_mov->gru_sub,1,3)),VAL(SUBSTR(q_mov->gru_sub,4,2)))
        mgrupo := SUBSTR(q_mov->gru_sub,1,3)
        msubgrupo := SUBSTR(q_mov->gru_sub,4,2)
        WHILE ! EOF()
                IF mgrupo <> SUBSTR(q_mov->gru_sub,1,3)
                        DEVPOS(PROW()+1,00);DEVOUT('** Total Sub-Grupo em Relacao ao Geral:')
                        DEVPOS(PROW(),47);DEVOUTPICT(mquantd_sg,'999999.99')
                        DEVPOS(PROW(),58);DEVOUTPICT(mprunit_sg/mquantd_sg,'999,999.99')
                        DEVPOS(PROW(),68);DEVOUTPICT(mtot_sg/mquantd_sg,'999,999.99')
                        DEVPOS(PROW(),79);DEVOUTPICT(mtot_sg,'99,999,999.99')
                        DEVPOS(PROW(),93);DEVOUT(TRANSFORM((mtot_sg/mger_vlr) * 100,'999.99'))
                        DEVPOS(PROW(),100);DEVOUT(TRANSFORM((mquantd_sg/(mdata2-mdata1)),'99999.999'))
                        DEVPOS(PROW(),110);DEVOUT(TRANSFORM(mtot_sg - mprunit_sg,'999,999.99'))
                        DEVPOS(PROW(),122);DEVOUT(TRANSFORM(((mtot_sg-mprunit_sg)/mprunit_sg)*100,'999.99'))
                        DEVPOS(PROW(),131);DEVOUT(TRANSFORM(((mtot_sg-mprunit_sg)/(mger_vlr-mger_prunit))*100,'999.99'))
                        mtot_sg := mquantd_sg := mprunit_sg := 0
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        IF PROW() >= 59
                                mpag ++
                                EJECT
                                cabecalho(mpag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                                DEVPOS(PROW(),93);DEVOUT(' (%)')
                                DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                                DEVPOS(PROW(),132);DEVOUT('part.')

                                DEVPOS(PROW()+1,00);DEVOUT('Produto')
                                DEVPOS(PROW(),49);DEVOUT('Quantd.')
                                DEVPOS(PROW(),63);DEVOUT('Custo')
                                DEVPOS(PROW(),73);DEVOUT('Venda')
                                DEVPOS(PROW(),83);DEVOUT('das Venda')
                                DEVPOS(PROW(),93);DEVOUT('Vendas')
                                DEVPOS(PROW(),104);DEVOUT('p/dia')
                                DEVPOS(PROW(),112);DEVOUT('Lucro R$')
                                DEVPOS(PROW(),121);DEVOUT('Lucro %')
                                DEVPOS(PROW(),130);DEVOUT('Lucro %')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                imprt(mtipo_imp,'C')
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT('*** Total do Grupo em Relacao ao Geral:')
                        DEVPOS(PROW(),47);DEVOUTPICT(mgru_quantd,'999999.99')
                        DEVPOS(PROW(),58);DEVOUTPICT(mgru_prunit/mgru_quantd,'999,999.99')
                        DEVPOS(PROW(),68);DEVOUTPICT(mgru_vlr/mgru_quantd,'999,999.99')
                        DEVPOS(PROW(),79);DEVOUTPICT(mgru_vlr,'99,999,999.99')
                        DEVPOS(PROW(),93);DEVOUT(TRANSFORM((mgru_vlr/mger_vlr) * 100,'999.99'))
                        DEVPOS(PROW(),100);DEVOUT(TRANSFORM((mgru_quantd/(mdata2-mdata1)),'99999.999'))
                        DEVPOS(PROW(),110);DEVOUT(TRANSFORM(mgru_vlr - mgru_prunit,'999,999.99'))
                        DEVPOS(PROW(),122);DEVOUT(TRANSFORM(((mgru_vlr-mgru_prunit)/mgru_prunit)*100,'999.99'))
                        DEVPOS(PROW(),131);DEVOUT(TRANSFORM(((mgru_vlr-mgru_prunit)/(mger_vlr-mger_prunit))*100,'999.99'))
                        mgru_vlr := mgru_quantd := mgru_prunit := 0
                        IF PROW() >= 59
                                mpag ++
                                EJECT
                                cabecalho(mpag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                                DEVPOS(PROW(),93);DEVOUT(' (%)')
                                DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                                DEVPOS(PROW(),132);DEVOUT('part.')

                                DEVPOS(PROW()+1,00);DEVOUT('Produto')
                                DEVPOS(PROW(),49);DEVOUT('Quantd.')
                                DEVPOS(PROW(),63);DEVOUT('Custo')
                                DEVPOS(PROW(),73);DEVOUT('Venda')
                                DEVPOS(PROW(),83);DEVOUT('das Venda')
                                DEVPOS(PROW(),93);DEVOUT('Vendas')
                                DEVPOS(PROW(),104);DEVOUT('p/dia')
                                DEVPOS(PROW(),112);DEVOUT('Lucro R$')
                                DEVPOS(PROW(),121);DEVOUT('Lucro %')
                                DEVPOS(PROW(),130);DEVOUT('Lucro %')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                imprt(mtipo_imp,'C')
                        ENDIF

                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        IF PROW() >= 59
                                mpag ++
                                EJECT
                                cabecalho(mpag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                                DEVPOS(PROW(),93);DEVOUT(' (%)')
                                DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                                DEVPOS(PROW(),132);DEVOUT('part.')

                                DEVPOS(PROW()+1,00);DEVOUT('Produto')
                                DEVPOS(PROW(),49);DEVOUT('Quantd.')
                                DEVPOS(PROW(),63);DEVOUT('Custo')
                                DEVPOS(PROW(),73);DEVOUT('Venda')
                                DEVPOS(PROW(),83);DEVOUT('das Venda')
                                DEVPOS(PROW(),93);DEVOUT('Vendas')
                                DEVPOS(PROW(),104);DEVOUT('p/dia')
                                DEVPOS(PROW(),112);DEVOUT('Lucro R$')
                                DEVPOS(PROW(),121);DEVOUT('Lucro %')
                                DEVPOS(PROW(),130);DEVOUT('Lucro %')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                imprt(mtipo_imp,'C')
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                        IF PROW() >= 59
                                mpag ++
                                EJECT
                                cabecalho(mpag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                                DEVPOS(PROW(),93);DEVOUT(' (%)')
                                DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                                DEVPOS(PROW(),132);DEVOUT('part.')

                                DEVPOS(PROW()+1,00);DEVOUT('Produto')
                                DEVPOS(PROW(),49);DEVOUT('Quantd.')
                                DEVPOS(PROW(),63);DEVOUT('Custo')
                                DEVPOS(PROW(),73);DEVOUT('Venda')
                                DEVPOS(PROW(),83);DEVOUT('das Venda')
                                DEVPOS(PROW(),93);DEVOUT('Vendas')
                                DEVPOS(PROW(),104);DEVOUT('p/dia')
                                DEVPOS(PROW(),112);DEVOUT('Lucro R$')
                                DEVPOS(PROW(),121);DEVOUT('Lucro %')
                                DEVPOS(PROW(),130);DEVOUT('Lucro %')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                imprt(mtipo_imp,'C')
                        ENDIF
                        prt_gru(VAL(SUBSTR(q_mov->gru_sub,1,3)))
                        IF PROW() >= 59
                                mpag ++
                                EJECT
                                cabecalho(mpag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                                DEVPOS(PROW(),93);DEVOUT(' (%)')
                                DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                                DEVPOS(PROW(),132);DEVOUT('part.')

                                DEVPOS(PROW()+1,00);DEVOUT('Produto')
                                DEVPOS(PROW(),49);DEVOUT('Quantd.')
                                DEVPOS(PROW(),63);DEVOUT('Custo')
                                DEVPOS(PROW(),73);DEVOUT('Venda')
                                DEVPOS(PROW(),83);DEVOUT('das Venda')
                                DEVPOS(PROW(),93);DEVOUT('Vendas')
                                DEVPOS(PROW(),104);DEVOUT('p/dia')
                                DEVPOS(PROW(),112);DEVOUT('Lucro R$')
                                DEVPOS(PROW(),121);DEVOUT('Lucro %')
                                DEVPOS(PROW(),130);DEVOUT('Lucro %')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                imprt(mtipo_imp,'C')
                        ENDIF
                        prt_sgru(VAL(SUBSTR(q_mov->gru_sub,1,3)),VAL(SUBSTR(q_mov->gru_sub,4,2)))
                        IF PROW() >= 59
                                mpag ++
                                EJECT
                                cabecalho(mpag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                                DEVPOS(PROW(),93);DEVOUT(' (%)')
                                DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                                DEVPOS(PROW(),132);DEVOUT('part.')

                                DEVPOS(PROW()+1,00);DEVOUT('Produto')
                                DEVPOS(PROW(),49);DEVOUT('Quantd.')
                                DEVPOS(PROW(),63);DEVOUT('Custo')
                                DEVPOS(PROW(),73);DEVOUT('Venda')
                                DEVPOS(PROW(),83);DEVOUT('das Venda')
                                DEVPOS(PROW(),93);DEVOUT('Vendas')
                                DEVPOS(PROW(),104);DEVOUT('p/dia')
                                DEVPOS(PROW(),112);DEVOUT('Lucro R$')
                                DEVPOS(PROW(),121);DEVOUT('Lucro %')
                                DEVPOS(PROW(),130);DEVOUT('Lucro %')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                imprt(mtipo_imp,'C')
                        ENDIF
                        mgrupo := SUBSTR(q_mov->gru_sub,1,3)
                        msubgrupo := SUBSTR(q_mov->gru_sub,4,2)
                ENDIF
                IF mgrupo+msubgrupo <> q_mov->gru_sub
                        DEVPOS(PROW()+1,00);DEVOUT('** Total Sub-Grupo em Relacao ao Geral:')
                        DEVPOS(PROW(),47);DEVOUTPICT(mquantd_sg,'999999.99')
                        DEVPOS(PROW(),58);DEVOUTPICT(mprunit_sg/mquantd_sg,'999,999.99')
                        DEVPOS(PROW(),68);DEVOUTPICT(mtot_sg/mquantd_sg,'999,999.99')
                        DEVPOS(PROW(),79);DEVOUTPICT(mtot_sg,'99,999,999.99')
                        DEVPOS(PROW(),93);DEVOUT(TRANSFORM((mtot_sg/mger_vlr) * 100,'999.99'))
                        DEVPOS(PROW(),100);DEVOUT(TRANSFORM((mquantd_sg/(mdata2-mdata1)),'99999.999'))
                        DEVPOS(PROW(),110);DEVOUT(TRANSFORM(mtot_sg - mprunit_sg,'999,999.99'))
                        DEVPOS(PROW(),122);DEVOUT(TRANSFORM(((mtot_sg-mprunit_sg)/mprunit_sg)*100,'999.99'))
                        DEVPOS(PROW(),131);DEVOUT(TRANSFORM(((mtot_sg-mprunit_sg)/(mger_vlr-mger_prunit))*100,'999.99'))
                        mtot_sg := 0
                        mquantd_sg := 0
                        mprunit_sg := 0
                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                        IF PROW() >= 59
                                mpag ++
                                EJECT
                                cabecalho(mpag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                                DEVPOS(PROW(),93);DEVOUT(' (%)')
                                DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                                DEVPOS(PROW(),132);DEVOUT('part.')

                                DEVPOS(PROW()+1,00);DEVOUT('Produto')
                                DEVPOS(PROW(),49);DEVOUT('Quantd.')
                                DEVPOS(PROW(),63);DEVOUT('Custo')
                                DEVPOS(PROW(),73);DEVOUT('Venda')
                                DEVPOS(PROW(),83);DEVOUT('das Venda')
                                DEVPOS(PROW(),93);DEVOUT('Vendas')
                                DEVPOS(PROW(),104);DEVOUT('p/dia')
                                DEVPOS(PROW(),112);DEVOUT('Lucro R$')
                                DEVPOS(PROW(),121);DEVOUT('Lucro %')
                                DEVPOS(PROW(),130);DEVOUT('Lucro %')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                imprt(mtipo_imp,'C')
                        ENDIF
                        prt_sgru(VAL(SUBSTR(q_mov->gru_sub,1,3)),VAL(SUBSTR(q_mov->gru_sub,4,2)))
                        IF PROW() >= 59
                                mpag ++
                                EJECT
                                cabecalho(mpag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                                DEVPOS(PROW(),93);DEVOUT(' (%)')
                                DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                                DEVPOS(PROW(),132);DEVOUT('part.')

                                DEVPOS(PROW()+1,00);DEVOUT('Produto')
                                DEVPOS(PROW(),49);DEVOUT('Quantd.')
                                DEVPOS(PROW(),63);DEVOUT('Custo')
                                DEVPOS(PROW(),73);DEVOUT('Venda')
                                DEVPOS(PROW(),83);DEVOUT('das Venda')
                                DEVPOS(PROW(),93);DEVOUT('Vendas')
                                DEVPOS(PROW(),104);DEVOUT('p/dia')
                                DEVPOS(PROW(),112);DEVOUT('Lucro R$')
                                DEVPOS(PROW(),121);DEVOUT('Lucro %')
                                DEVPOS(PROW(),130);DEVOUT('Lucro %')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                imprt(mtipo_imp,'C')
                        ENDIF
                        msubgrupo := SUBSTR(q_mov->gru_sub,4,2)
                ENDIF

                WHILE mcod_merc = q_mov->codigo .AND. ! EOF()
                        IF ! EMPTY(mcod_ven) .AND. STRZERO(mcod_ven,3) <> q_mov->cod_vend
                                SKIP
                                LOOP
                        ENDIF
                        mtot_vlr := mtot_vlr + (q_mov->quantd * q_mov->vl_vend)
                        mtot_quantd := mtot_quantd + q_mov->quantd
                        IF mc_real = 'X'
                                mtot_prunit := mtot_prunit + (q_mov->quantd * q_mov->pr_unit)
                                mgru_prunit := mgru_prunit + (q_mov->quantd * q_mov->pr_unit)
                                mprunit_sg := mprunit_sg + (q_mov->quantd * q_mov->pr_unit)
                        ELSE
                                mtot_prunit := mtot_prunit + (q_mov->quantd * q_mov->cust_mer)
                                mgru_prunit := mgru_prunit + (q_mov->quantd * q_mov->cust_mer)
                                mprunit_sg := mprunit_sg + (q_mov->quantd * q_mov->cust_mer)
                        ENDIF
                        mgru_vlr := mgru_vlr + (q_mov->quantd * q_mov->vl_vend)
                        mgru_quantd := mgru_quantd + q_mov->quantd
                        mquantd_sg := mquantd_sg + q_mov->quantd
                        mtot_sg := mtot_sg + (q_mov->quantd * q_mov->vl_vend)
                        SKIP
                ENDDO

                IF mtot_prunit = 0
                        mlucro := 100
                ELSE
                        mlucro := ((mtot_vlr-mtot_prunit)/mtot_prunit)*100
                ENDIF

                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT(STRZERO(mcod_merc,5)+'-'+mmerc)
                DEVPOS(PROW(),47);DEVOUTPICT(mtot_quantd,'999999.99')
                DEVPOS(PROW(),58);DEVOUTPICT(mtot_prunit/mtot_quantd,'999,999.99')
                DEVPOS(PROW(),68);DEVOUTPICT(mtot_vlr/mtot_quantd,'999,999.99')
                DEVPOS(PROW(),79);DEVOUTPICT(mtot_vlr,'99,999,999.99')
                DEVPOS(PROW(),93);DEVOUT(TRANSFORM((mtot_vlr/mger_vlr) * 100,'999.99'))
                DEVPOS(PROW(),100);DEVOUT(TRANSFORM((mtot_quantd/mdia),'99999.999'))
                DEVPOS(PROW(),110);DEVOUT(TRANSFORM(mtot_vlr - mtot_prunit,'999,999.99'))
                DEVPOS(PROW(),121);DEVOUT(TRANSFORM(mlucro,'9999.99'))
                DEVPOS(PROW(),131);DEVOUT(TRANSFORM(((mtot_vlr-mtot_prunit)/(mger_vlr-mger_prunit))*100,'999.99'))
                AADD(m_produto,{mcod_merc,mmerc,mtot_quantd,mtot_prunit/mtot_quantd,mtot_vlr/mtot_quantd,;
                                mtot_vlr,(mtot_vlr/mger_vlr)*100,mtot_quantd/mdia,;
                                mtot_vlr-mtot_prunit,mlucro,;
                                ((mtot_vlr-mtot_prunit)/(mger_vlr-mger_prunit))*100})
                mtot_vlr := mtot_quantd := mtot_prunit := 0
                mcod_merc := q_mov->codigo
                mmerc := q_mov->produto
                IF PROW() >= 59
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                        DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                        DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                        DEVPOS(PROW(),93);DEVOUT(' (%)')
                        DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                        DEVPOS(PROW(),132);DEVOUT('part.')

                        DEVPOS(PROW()+1,00);DEVOUT('Produto')
                        DEVPOS(PROW(),49);DEVOUT('Quantd.')
                        DEVPOS(PROW(),63);DEVOUT('Custo')
                        DEVPOS(PROW(),73);DEVOUT('Venda')
                        DEVPOS(PROW(),83);DEVOUT('das Venda')
                        DEVPOS(PROW(),93);DEVOUT('Vendas')
                        DEVPOS(PROW(),104);DEVOUT('p/dia')
                        DEVPOS(PROW(),112);DEVOUT('Lucro R$')
                        DEVPOS(PROW(),121);DEVOUT('Lucro %')
                        DEVPOS(PROW(),130);DEVOUT('Lucro %')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
        ENDDO
        DEVPOS(PROW()+1,00);DEVOUT('** Total Sub-Grupo em Relacao ao Geral:')
        DEVPOS(PROW(),47);DEVOUTPICT(mquantd_sg,'999999.99')
        DEVPOS(PROW(),58);DEVOUTPICT(mprunit_sg/mquantd_sg,'999,999.99')
        DEVPOS(PROW(),68);DEVOUTPICT(mtot_sg/mquantd_sg,'999,999.99')
        DEVPOS(PROW(),79);DEVOUTPICT(mtot_sg,'99,999,999.99')
        DEVPOS(PROW(),93);DEVOUT(TRANSFORM((mtot_sg/mger_vlr) * 100,'999.99'))
        DEVPOS(PROW(),100);DEVOUT(TRANSFORM((mquantd_sg/(mdata2-mdata1)),'99999.999'))
        DEVPOS(PROW(),110);DEVOUT(TRANSFORM(mtot_sg - mprunit_sg,'999,999.99'))
        DEVPOS(PROW(),122);DEVOUT(TRANSFORM(((mtot_sg-mprunit_sg)/mprunit_sg)*100,'999.99'))
        DEVPOS(PROW(),131);DEVOUT(TRANSFORM(((mtot_sg-mprunit_sg)/(mger_vlr-mger_prunit))*100,'999.99'))
        mtot_sg := mquantd_sg := mprunit_sg := 0
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT('*** Total do Grupo em Relacao ao Geral:')
        DEVPOS(PROW(),47);DEVOUTPICT(mgru_quantd,'999999.99')
        DEVPOS(PROW(),58);DEVOUTPICT(mgru_prunit/mgru_quantd,'999,999.99')
        DEVPOS(PROW(),68);DEVOUTPICT(mgru_vlr/mgru_quantd,'999,999.99')
        DEVPOS(PROW(),79);DEVOUTPICT(mgru_vlr,'99,999,999.99')
        DEVPOS(PROW(),93);DEVOUT(TRANSFORM((mgru_vlr/mger_vlr) * 100,'999.99'))
        DEVPOS(PROW(),100);DEVOUT(TRANSFORM((mgru_quantd/mdia),'99999.999'))
        DEVPOS(PROW(),110);DEVOUT(TRANSFORM(mgru_vlr - mgru_prunit,'999,999.99'))
        DEVPOS(PROW(),122);DEVOUT(TRANSFORM(((mgru_vlr-mgru_prunit)/mgru_prunit)*100,'999.99'))
        DEVPOS(PROW(),131);DEVOUT(TRANSFORM(((mgru_vlr-mgru_prunit)/(mger_vlr-mger_prunit))*100,'999.99'))
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
        mgru_vlr := mgru_quantd := mgru_prunit := 0
        IF PROW() >= 57
                mpag ++
                EJECT
                cabecalho(mpag,mtit,mtipo,mprg)
        ENDIF
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+1,00);DEVOUT('T O T A L   G E R A L:')
        DEVPOS(PROW(),47);DEVOUTPICT(mger_quantd,'999999.99')
        DEVPOS(PROW(),58);DEVOUTPICT(mger_prunit / mger_quantd,'999,999.99')
        DEVPOS(PROW(),68);DEVOUTPICT(mger_vlr / mger_quantd,'999,999.99')
        DEVPOS(PROW(),79);DEVOUTPICT(mger_vlr,'99,999,999.99')
        DEVPOS(PROW(),93);DEVOUT(TRANSFORM(100,'999.99'))
        DEVPOS(PROW(),100);DEVOUT(TRANSFORM((mger_quantd/mdia),'99999.999'))
        DEVPOS(PROW(),110);DEVOUT(TRANSFORM(mger_vlr - mger_prunit,'999,999.99'))
        DEVPOS(PROW(),122);DEVOUT(TRANSFORM(((mger_vlr-mger_prunit)/mger_prunit)*100,'999.99'))
        DEVPOS(PROW()+1,00);DEVOUT('TOTAL PRECO DE CUSTO R$:')
        DEVPOS(PROW(),58);DEVOUTPICT(mger_prunit,'99,999,999.99')
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        imprt(mtipo_imp,'N')
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao(marq)
        /*
        IF mimp_tipo = 2
                lertexto(marq)
        ELSEIF mtipo_imp = 'D'
                
        ELSE
                MYRUN('DOSPRINTER /RAW /DEL '+ALLTRIM(m_indiv[1,5])+'HTI.REL')
        ENDIF
        */
ENDDO
wvw_lclosewindow()
RETURN NIL
**************************** F I M ****************************************************
