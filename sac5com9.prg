********************
* LISTAGEM CLASSIFICACAO DOS FORNECEDOR
********************
FUNCTION sac5com9
**************
LOCAL MPRG:='SAC5COM9',;
      lci,cci,lba,cba,opcao,i,mdata1,mdata2,;
      mcod_merc,mmerc,mtot_vlr,mtot_quantd,mtot_prunit,mger_vlr,mger_quantd,;
      mger_prunit,m_cliente:={},mlucro,mdia,mop,;
      mquantd_merc,mgrupo,msubgrupo,mcod_espe,mcod_ven,mcod_ope,mvlr1:=0,;
      mvlr2:=0,mcodemp:=SPACE(3),nxls:={}

PRIVATE mtraco,telaprint,mtit,mtipo,mpag,mcod_cli,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),cons_forn:={},mcod_forn

IF ! ver_nivel(mprg,'RELATORIO CLASSIFICACAO DOS FORNECEDOR','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mtraco := REPLI('=',132)

lci := cci := 00
lba := 16
cba := 75
*----------------------------------------------------------------------------
CLOSE ALL
//
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
IF ! AbriArq('sacespe','espe');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
op_tela(lci,cci,lba+2,cba,' CLASSIFICAO DOS FORNECEDORES ')
WHILE .T.
        limpa(00,00,30,90)
        mtipo_imp := m_indiv[1,18]
        mmerc := SPACE(40)
        i := mlucro := mtot_vlr := mtot_quantd := mtot_prunit := mger_vlr := ;
        mger_quantd := mger_prunit := mop := mquantd_merc := mcod_cli := ;
        mgrupo := msubgrupo := mcod_espe := mcod_ven := mcod_ope := ;
        mcod_forn := mvlr1 := mvlr2 := mcod_merc := 0
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        ASIZE(m_cliente,0)
        mensagem('Preencha os Campos - <ESC>p/Sair')
        @ lci+12,cci TO lci+12,cba
        @ lci+14,cci TO lci+14,cba
        DEVPOS(lci  ,cci+2);DEVOUT('Codigo Empresa.:')
        DEVPOS(lci+1,cci+2);DEVOUT('Data Inicial...:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Final.....:')
        DEVPOS(lci+3,cci+2);DEVOUT('Codigo Produto.:')
        DEVPOS(lci+4,cci+2);DEVOUT('Grupo..........:')
        DEVPOS(lci+5,cci+2);DEVOUT('Sub-Grupo......:')
        DEVPOS(lci+6,cci+2);DEVOUT('Especie Produto:')
        DEVPOS(lci+7,cci+2);DEVOUT('Codigo Vendedor:')
        DEVPOS(lci+8,cci+2);DEVOUT('Codigo Operador:')
        DEVPOS(lci+9,cci+2);DEVOUT('Cod. Fornecedor:')
        //DEVPOS(lci+10,cci+2);DEVOUT('Intervalo de R$:            a           ')
        DEVPOS(lci+11,cci+2);DEVOUT('Quantidade de Fornecedor a ser listado:')
        setcor(3)
        DEVPOS(lci+15,cci+2);DEVOUT('Produto Processados:')
        setcor(1)

        @ lci,cci+19 GET mcodemp PICT "999" VALID ver_emp(mcodemp,lci,cci+23,,'*') WHEN mmult_emp ='S'
        @ lci+1,cci+19 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+2,cci+19 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+3,cci+19 GET mcod_merc PICT '99999' VALID ver_cod(mcod_merc,lci+3,cci+25,,0)
        @ lci+4,cci+19 GET mgrupo PICT '999' VALID IF(EMPTY(mgrupo),.T.,ver_gru(@mgrupo,lci+4,cci+24,.F.))
        @ lci+5,cci+19 GET msubgrupo PICT '99' VALID IF(EMPTY(msubgrupo),.T.,ver_sgru(mgrupo,msubgrupo,lci+5,cci+24,.F.))
        @ lci+6,cci+19 GET mcod_espe PICT '9999' VALID ver_espe(mcod_espe,lci+6,cci+24,,0)
        @ lci+7,cci+19 GET mcod_ven PICT '999' VALID IF(EMPTY(mcod_ven),.T.,ven(mcod_ven,lci+7,cci+24))
        @ lci+8,cci+19 GET mcod_ope PICT '999' VALID IF(EMPTY(mcod_ope),.T.,ven(mcod_ope,lci+8,cci+24))
        @ lci+9,cci+19 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn),.T.,v_fornece(mcod_forn,lci+9,cci+24))
        //@ lci+10,cci+19 GET mvlr1 PICT '999,999.99'
        //@ lci+10,cci+32 GET mvlr2 PICT '999,999.99' VALID IF(mvlr2 < mvlr1,.F.,.T.)
        @ lci+11,cci+41 GET mquantd_merc PICT '9999' VALID lim_get() WHEN men_get(lci+13,cci+38,'Informe a quantidade de produto que deseja lista ou deixe em branco para listar TODOS')
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                RELEASE ALL
                EXIT
        ENDIF
        IF mdata1 = mdata2
                mdia := 1
        ELSE
                mdia := mdata2 - mdata1
        ENDIF
        setcor(10)
        @ lci+13,cci+1 PROMPT ' Total das Compras ' MESSAGE '** Classificacao pelo TOTAL DAS COMPRAS de cada FORNECEDOR **'
        @ lci+13,COL()+2 PROMPT ' Quantidade ' MESSAGE '** Classificacao pela QUANTIDADE VENDIDA de cada FORNECEDOR **'
        @ lci+13,COL()+2 PROMPT ' Lucro Geral ' MESSAGE '** Classificacao pelo (%) de Lucro referente ao Lucro GERAL **'
        @ lci+13,COL()+2 PROMPT ' Lucro p/Prod. ' MESSAGE '** Classificacao pelo (%) do FORNECEDOR INDIVIDUAL **'
        SET INTEN ON
        MENU TO mop
        setcor(1)
        marq := 'MAIS_FOR.REL'
        mensagem('Espere o Final da Impressao OK - [ESC]Sair')
        IF LASTKEY() = 27 .OR. ! imp_arq(marq,'R',,,,,,'E')
                LOOP
        ENDIF
        cons_forn := {}
        sr_getconnection():exec("SELECT * FROM sacforn ORDER BY razao",,.t.,@cons_forn)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_forn) = 0
                atencao('Nao existe nenhum FORNECEDOR cadastrado.....')
                LOOP
        ENDIF
        i:=0
        FOR i = 1 TO LEN(cons_forn)
                SETPOS(lci+15,cci+24);DISPOUT(cons_forn[i,1]+' - '+cons_forn[i,2])
                cons_mov := {}
                cComm  := "SELECT SUM(quantd),SUM(quantd * vl_vend),SUM(quantd * pr_unit)"
                cComm  := ccomm + " FROM sacmov WHERE data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)
                cComm  := ccomm + " AND tipo = '02' AND cancel IS NULL"
                cComm  := ccomm + " AND documento NOT LIKE 'TR%'"
                cComm  := ccomm + " AND documento NOT LIKE 'BL%'"
                cComm  := ccomm + " AND ent_sai = 'S'"
                cComm  := ccomm + " AND cod_fab = "+sr_cdbvalue(cons_forn[i,1])
                IF ! EMPTY(mcodemp)
                        cComm  := ccomm + " AND empresa = "+sr_cdbvalue(mcodemp)
                ENDIF
                IF ! EMPTY(mcod_merc)
                        cComm  := ccomm + " AND codigo = "+sr_cdbvalue(mcod_merc)
                ENDIF
                IF ! EMPTY(mgrupo)              //.AND. STRZERO(mgrupo,3) <> SUBSTR(mov->gru_sub,1,3));
                        cComm  := ccomm + " AND gru_sub LIKE "+sr_cdbvalue(STRZERO(mgrupo,3)+'%')
                ENDIF
                IF ! EMPTY(msubgrupo)
                        cComm  := ccomm + " AND gru_sub = "+sr_cdbvalue(STRZERO(mgrupo,3)+STRZERO(msubgrupo,2))
                ENDIF
                IF ! EMPTY(mcod_ope)            //.AND. STRZERO(mcod_ope,3) <> mov->cod_oper);
                        cComm  := ccomm + " AND cod_oper = "+sr_cdbvalue(STRZERO(mcod_ope,3))
                ENDIF
                IF ! EMPTY(mcod_ven)            //.AND. STRZERO(mcod_ven,3) <> mov->cod_vend);
                        cComm  := ccomm + " AND cod_vend = "+sr_cdbvalue(STRZERO(mcod_ven,3))
                ENDIF
                IF ! EMPTY(mcod_espe)           //.AND. mov->especie <> STRZERO(mcod_espe,4))
                        cComm  := ccomm + " AND especie = "+sr_cdbvalue(STRZERO(mcod_espe,4))
                ENDIF
                cComm  := ccomm + " AND vl_vend > 0 "
                sr_getconnection():exec(ccomm,,.t.,@cons_mov)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_mov) = 0
                        LOOP
                ENDIF
                mger_vlr := mger_vlr + cons_mov[1,2]
                mger_quantd := mger_quantd + cons_mov[1,1]
                mtot_vlr := mtot_vlr + cons_mov[1,2]
                mtot_quantd := mtot_quantd + cons_mov[1,1]
                mtot_prunit := mtot_prunit + cons_mov[1,3]
                mger_prunit := mger_prunit + cons_mov[1,3]
                IF mtot_prunit = 0
                        mlucro := 100
                ELSE
                        mlucro := ((mtot_vlr-mtot_prunit)/mtot_vlr)*100
                ENDIF
                IF EMPTY(mtot_quantd) .OR. ;
                   (! EMPTY(mvlr1) .AND. mtot_vlr < mvlr1) .OR. ;
                   (! EMPTY(mvlr2) .AND. mtot_vlr > mvlr2)
                        mtot_vlr := mtot_quantd := mtot_prunit := 0
                        LOOP
                ENDIF

                AADD(m_cliente,{cons_forn[i,1],cons_forn[i,2],mtot_quantd,mtot_prunit/mtot_quantd,mtot_vlr/mtot_quantd,;
                                mtot_vlr,mtot_quantd/mdia,;
                                mtot_vlr-mtot_prunit,mlucro,mtot_vlr-mtot_prunit})
                mtot_vlr := mtot_quantd := mtot_prunit := 0
        NEXT
        DO CASE
                CASE mop = 1
                        ASORT(m_cliente,,,{|x,y| x[6] > y[6]})
                        mtit = 'CLASSIFICACAO FORNECEDOR pelo Total de Compras (CUSTO REAL)'
                CASE mop = 2
                        ASORT(m_cliente,,,{|x,y| x[3] > y[3]})
                        mtit = 'CLASSIFICACAO FORNECEDOR pela quantidade (CUSTO REAL)'
                CASE mop = 3
                        ASORT(m_cliente,,,{|x,y| x[8] > y[8]})
                        mtit = 'CLASSIFICACAO FORNECEDOR pelo Lucro Geral (CUSTO REAL)'
                CASE mop = 4
                        ASORT(m_cliente,,,{|x,y| x[9] > y[9]})
                        mtit = 'CLASSIFICACAO FORNECEDOR pelo Lucro Individual (CUSTO REAL)'
        ENDCASE
        mpag = 1
        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)+' Intervalo de '+STRZERO(mdia,4)+' dias'
        IF ! EMPTY(mcod_forn)
                cons_forn := {}
                sr_getconnection():exec("SELECT * FROM sacforn WHERE cod_forn = "+sr_cdbvalue(STRZERO(mcod_for,4)),,.t.,@cons_forn)
                sr_getconnection():exec('COMMIT',,.f.)
                mtipo = mtipo+' - Fornecedor: '+STRZERO(mcod_for,4)+'-'+cons_forn[1,2]
        ENDIF
        IF ! EMPTY(mcod_ven)
                cons_forn := {}
                sr_getconnection():exec("SELECT * FROM insopera WHERE scod_op = "+sr_cdbvalue(STRZERO(mcod_ven,3)),,.t.,@cons_forn)
                sr_getconnection():exec('COMMIT',,.f.)
                mtipo = mtipo+' - Vendedor: '+STRZERO(mcod_ven,3)+'-'+cons_forn[1,2]
        ENDIF

        IF mimp_tipo = 4
                nxls := {}
                f:=1
                MYRUN('DEL '+marq)
                nXls := xlsOpen(marq)
                xlsWrite( nXls, f, 1,mtit)
                f++
                xlsWrite( nXls, f, 1,mtipo)
                f++

                IF ! EMPTY(mcod_forn)
                        q_forn := {}
                        sr_getconnection():exec("SELECT * FROM sacforn WHERE cod_forn = "+sr_cdbvalue(STRZERO(mcod_forn,4)),,.t.,@q_forn)
                        sr_getconnection():exec('COMMIT',,.f.)
                        xlsWrite( nXls, f, 1,'Fornecedor :'+STRZERO(mcod_forn,4)+'-'+q_forn[1,2]+' Telefones: '+ALLTRIM(q_forn[1,13])+'/'+ALLTRIM(q_forn[1,14]))
                        f++
                ENDIF
                xlsWrite( nXls, f, 3, 'Vlr.Medio')
                xlsWrite( nXls, f, 4, 'Vlr.Medio')
                xlsWrite( nXls, f, 5, 'Vlr.Total')
                xlsWrite( nXls, f, 6, ' (%)')
                xlsWrite( nXls, f, 7, 'Qtd.Med')
                xlsWrite( nXls, f, 10, 'part.')
                f++
                xlsWrite( nXls, f, 1, 'FORNECEDOR')
                xlsWrite( nXls, f, 2, 'Quantd.')
                xlsWrite( nXls, f, 3, 'Custo')
                xlsWrite( nXls, f, 4, 'Venda')
                xlsWrite( nXls, f, 5, 'das Venda')
                xlsWrite( nXls, f, 6, 'Vendas')
                xlsWrite( nXls, f, 7, 'p/dia')
                xlsWrite( nXls, f, 8, 'Lucro R$')
                xlsWrite( nXls, f, 9, 'Lucro %')
                xlsWrite( nXls, f, 10, 'Lucro %')
                f++
                IF EMPTY(mquantd_merc) .OR. mquantd_merc > LEN(m_cliente)
                        mquantd_merc := LEN(m_cliente)
                ENDIF
                i:=0
                FOR i = 1 TO mquantd_merc
                        mensagem('IMPRIMINDO PARA EXCEL o FORNECEDORS: '+m_cliente[i,1]+' - '+m_cliente[i,2]+'  Aguarde um momento ...')
                        xlsWrite( nXls, f, 1,m_cliente[i,1]+'-'+m_cliente[i,2])
                        xlsWrite( nXls, f, 2,ALLTRIM(TRANSFORM(m_cliente[i,3],'@E 999,999.99')))
                        xlsWrite( nXls, f, 3, ALLTRIM(TRANSFORM(m_cliente[i,4],'@E 999,999.99')))
                        xlsWrite( nXls, f, 4, ALLTRIM(TRANSFORM(m_cliente[i,5],'@E 999,999.99')))
                        xlsWrite( nXls, f, 5, ALLTRIM(TRANSFORM(m_cliente[i,6],'@E 99,999,999.99')))
                        xlsWrite( nXls, f, 6, ALLTRIM(TRANSFORM((m_cliente[i,6]/mger_vlr)*100,'@E 999.99')))
                        xlsWrite( nXls, f, 7, ALLTRIM(TRANSFORM(m_cliente[i,7],'@E999,999.999')))
                        xlsWrite( nXls, f, 8, ALLTRIM(TRANSFORM(m_cliente[i,8],'@E 999,999.99')))
                        xlsWrite( nXls, f, 9, ALLTRIM(TRANSFORM(m_cliente[i,9],'@E 9,999.99')))
                        xlsWrite( nXls, f, 10, ALLTRIM(TRANSFORM((m_cliente[i,8]/(mger_vlr-mger_prunit))*100,'@E 999.99')) )
                        f++
                NEXT
                /*
                xlsWrite( nXls, f, 1,'T O T A L   G E R A L:')
                xlsWrite( nXls, f, 2,ALLTRIM(TRANSFORM(mger_quantd,'@E 99,999,999.99')))
                xlsWrite( nXls, f, 3,TRANSFORM(mger_prunit / mger_quantd,'@E 999,999.99'))
                xlsWrite( nXls, f, 5,TRANSFORM(mger_vlr / mger_quantd,'@E 999,999.99'))
                xlsWrite( nXls, f, 6,TRANSFORM(mger_vlr,'@E 99,999,999.99'))
                xlsWrite( nXls, f, 7,TRANSFORM(100,'@E 999.99'))
                xlsWrite( nXls, f, 8,TRANSFORM((mger_quantd/mdia),'@E 99,999.999'))
                xlsWrite( nXls, f, 9,TRANSFORM(mger_vlr - mger_prunit,'@E 999,999.99'))
                xlsWrite( nXls, f,10,TRANSFORM(((mger_vlr-mger_prunit)/mger_prunit)*100,'@E 999.99'))
                */
        	xlsClose( nXls )
        ELSE
                cabecalho(mpag,mtit,mtipo,mprg)
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                DEVPOS(PROW(),93);DEVOUT(' (%)')
                DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                DEVPOS(PROW(),132);DEVOUT('part.')

                DEVPOS(PROW()+1,00);DEVOUT('FORNECEDOR')
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
                i := 0
                IF EMPTY(mquantd_merc) .OR. mquantd_merc > LEN(m_cliente)
                        mquantd_merc := LEN(m_cliente)
                ENDIF
                FOR i = 1 TO mquantd_merc
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT(m_cliente[i,1]+'-'+m_cliente[i,2])
                        DEVPOS(PROW(),47);DEVOUTPICT(m_cliente[i,3],'999999.99')
                        DEVPOS(PROW(),58);DEVOUTPICT(m_cliente[i,4],'999,999.99')
                        DEVPOS(PROW(),68);DEVOUTPICT(m_cliente[i,5],'999,999.99')
                        DEVPOS(PROW(),79);DEVOUTPICT(m_cliente[i,6],'99,999,999.99')
                        DEVPOS(PROW(),93);DEVOUT(TRANSFORM((m_cliente[i,6]/mger_vlr)*100,'999.99'))
                        DEVPOS(PROW(),100);DEVOUT(TRANSFORM(m_cliente[i,7],'99999.999'))
                        DEVPOS(PROW(),110);DEVOUT(TRANSFORM(m_cliente[i,8],'999,999.99'))
                        DEVPOS(PROW(),121);DEVOUT(TRANSFORM(m_cliente[i,9],'9999.99'))
                        DEVPOS(PROW(),131);DEVOUT(TRANSFORM((m_cliente[i,8]/(mger_vlr-mger_prunit))*100,'999.99'))
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
                NEXT
                IF PROW() >= 57
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo,mprg)
                ENDIF
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('T O T A L   G E R A L:')
                DEVPOS(PROW(),43);DEVOUTPICT(mger_quantd,'99,999,999.99')
                DEVPOS(PROW(),58);DEVOUTPICT(mger_prunit / mger_quantd,'999,999.99')
                DEVPOS(PROW(),68);DEVOUTPICT(mger_vlr / mger_quantd,'999,999.99')
                DEVPOS(PROW(),79);DEVOUTPICT(mger_vlr,'99,999,999.99')
                DEVPOS(PROW(),93);DEVOUT(TRANSFORM(100,'999.99'))
                DEVPOS(PROW(),100);DEVOUT(TRANSFORM((mger_quantd/mdia),'99999.999'))
                DEVPOS(PROW(),110);DEVOUT(TRANSFORM(mger_vlr - mger_prunit,'999,999.99'))
                DEVPOS(PROW(),122);DEVOUT(TRANSFORM(((mger_vlr-mger_prunit)/mger_prunit)*100,'999.99'))
                DEVPOS(PROW()+2,00);DEVOUT(TIME())
                imprt(mtipo_imp,'N')
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao(marq)
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL

