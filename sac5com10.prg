********************
* RELATORIO CLASSIFICACAO DAS CIDADES (FATURAMENTO)
********************
FUNCTION sac5com10
**************
LOCAL MPRG:='SAC5COM10',;
      lba,cba,opcao,i,mdata1,mdata2,;
      mcod_merc,mmerc,mtot_vlr,mtot_quantd,mtot_prunit,mger_vlr,mger_quantd,;
      mger_prunit,m_cliente:={},mlucro,mdia,mop,m_cidade,;
      mquantd_merc,mgrupo,msubgrupo,mcod_espe,mcod_ven,mcod_ope,mvlr1:=0,;
      mvlr2:=0,mcodemp:=SPACE(3),nxls:={},mqtd_cli:=0,mlist_cust:=' '

PRIVATE mtraco,telaprint,mtit,mtipo,mpag,mcod_cli,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),cons_cli:={},mcod_forn

IF ! ver_nivel(mprg,'RELATORIO CLASSIFICACAO DAS CIDADES (FATURAMENTO)','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mtraco := REPLI('=',132)

lba := 16
cba := 75
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
op_tela(05,05,20,80,' CLASSIFICAO DAS CIDADES (FATURAMENTO) ')
WHILE .T.
        limpa(00,00,30,90)
        mtipo_imp := m_indiv[1,18]
        mmerc := SPACE(40)
        i := mlucro := mtot_vlr := mtot_quantd := mtot_prunit := mger_vlr := ;
        mger_quantd := mger_prunit := mop := mquantd_merc := mcod_cli := ;
        mgrupo := msubgrupo := mcod_espe := mcod_ven := mcod_ope := ;
        mcod_forn := mvlr1 := mvlr2 := mcod_merc := mqtd_cli := 0
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        m_cliente := {}
        m_cidade  := {}
        mlist_cust:='N'
        mensagem('Preencha os Campos - <ESC>p/Sair')
        @ 13,0 TO 13,cba
        DEVPOS(0,2);DEVOUT('Codigo Empresa.:')
        DEVPOS(1,2);DEVOUT('Data Inicial...:')
        DEVPOS(2,2);DEVOUT('Data Final.....:')
        DEVPOS(3,2);DEVOUT('Codigo Produto.:')
        DEVPOS(4,2);DEVOUT('Grupo..........:')
        DEVPOS(5,2);DEVOUT('Sub-Grupo......:')
        DEVPOS(6,2);DEVOUT('Especie Produto:')
        DEVPOS(7,2);DEVOUT('Codigo Vendedor:')
        DEVPOS(8,2);DEVOUT('Codigo Operador:')
        DEVPOS(9,2);DEVOUT('Cod. Fornecedor:')
        DEVPOS(10,2);DEVOUT('Intervalo de R$:            a           ')
        DEVPOS(11,2);DEVOUT('Quantidade de Clientes a ser listado:')
        DEVPOS(12,2);DEVOUT('Listar os campo de CUSTO [s/N]......:')

        @ 0,19 GET mcodemp PICT "999" VALID ver_emp(mcodemp,0,23,,'*') WHEN mmult_emp ='S'
        @ 1,19 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 2,19 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ 3,19 GET mcod_merc PICT '99999' VALID ver_cod(mcod_merc,3,25,,0)
        @ 4,19 GET mgrupo PICT '999' VALID IF(EMPTY(mgrupo),.T.,ver_gru(@mgrupo,4,24,.F.))
        @ 5,19 GET msubgrupo PICT '99' VALID IF(EMPTY(msubgrupo),.T.,ver_sgru(mgrupo,msubgrupo,5,24,.F.))
        @ 6,19 GET mcod_espe PICT '9999' VALID ver_espe(mcod_espe,6,24,,0)
        @ 7,19 GET mcod_ven PICT '999' VALID IF(EMPTY(mcod_ven),.T.,ven(mcod_ven,7,24))
        @ 8,19 GET mcod_ope PICT '999' VALID IF(EMPTY(mcod_ope),.T.,ven(mcod_ope,8,24))
        @ 9,19 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn),.T.,v_fornece(mcod_forn,9,24))
        @ 10,19 GET mvlr1 PICT '999,999.99'
        @ 10,32 GET mvlr2 PICT '999,999.99' VALID IF(mvlr2 < mvlr1,.F.,.T.)
        @ 11,41 GET mquantd_merc PICT '9999' VALID lim_get() WHEN men_get(13,38,'Informe a quantidade de produto que deseja lista ou deixe em branco para listar TODOS')
        @ 12,41 GET mlist_cust PICT '!@' VALID mlist_cust $ 'S,N' WHEN nivel_acess = '1'
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                RELEASE ALL
                EXIT
        ENDIF
        IF mdata1 = mdata2
                mdia := 1
        ELSE
                mdia := (mdata2 - mdata1)+1
        ENDIF
        setcor(10)
        @ 14,1   PROMPT ' Alfabetica '
        @ 14,COL()+2 PROMPT ' Quantidade '
        @ 14,COL()+2 PROMPT ' Vlr. Venda '
        @ 14,COL()+2 PROMPT ' Lucro      '
        SET INTEN ON
        MENU TO mop
        setcor(1)

        marq := 'MAIS_PRO.REL'
        mensagem('Espere o Final da Impressao OK - [ESC]Sair')
        IF LASTKEY() = 27 .OR. ! imp_arq('MAIS_PRO.REL','R',,,,,,'E')
                LOOP
        ENDIF
        cons_cli := {}
        IF ! EMPTY(mcod_ven)
                cComm  := "SELECT * FROM saccli WHERE codvend = "+sr_cdbvalue(STRZERO(mcod_ven,3))+" ORDER BY cidade"
        ELSE
                cComm  := "SELECT * FROM saccli ORDER BY cidade"
        ENDIF
        sr_getconnection():exec(ccomm,,.t.,@cons_cli)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_cli) = 0
                atencao('Nao existe nenhum cliente cadastrado.....')
                LOOP        
        ENDIF
        i:=0
        FOR i = 1 TO LEN(cons_cli)
                mensagem('Registro Processado: '+STR(cons_cli[i,2],5)+' - '+cons_cli[i,3])
                cons_mov := {}
                cComm  := "SELECT SUM(quantd),SUM(quantd * vl_vend),SUM(quantd *  cust_mer)"
                cComm  := ccomm + " FROM sacmov WHERE data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)
                cComm  := ccomm + " AND tipo = '02' AND cancel IS NULL"
                cComm  := ccomm + " AND documento NOT LIKE 'TR%'"
                cComm  := ccomm + " AND documento NOT LIKE 'BL%'"
                cComm  := ccomm + " AND ent_sai = 'S'"
                cComm  := ccomm + " AND cod_cli = "+sr_cdbvalue(cons_cli[i,2])
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
                IF ! EMPTY(mcod_forn)            //.AND. mov->cod_fab <> STRZERO(mcod_forn,4));
                        cComm  := ccomm + " AND cod_fab = "+sr_cdbvalue(STRZERO(mcod_forn,4))
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
                /*
                IF EMPTY(mtot_quantd) .OR. ;
                   (! EMPTY(mvlr1) .AND. mtot_vlr < mvlr1) .OR. ;
                   (! EMPTY(mvlr2) .AND. mtot_vlr > mvlr2)
                        mtot_vlr := mtot_quantd := mtot_prunit := 0
                        LOOP
                ENDIF
                */
                mponto := ASCAN(m_cidade,cons_cli[i,24])
		IF mponto = 0
	                AADD(m_cliente,{cons_cli[i,24],mtot_quantd,mtot_prunit,mtot_vlr,1,0})
	                AADD(m_cidade,cons_cli[i,24])
		ELSE
			m_cliente[mponto,2] := m_cliente[mponto,2] + mtot_quantd
			m_cliente[mponto,3] := m_cliente[mponto,3] + mtot_prunit
			m_cliente[mponto,4] := m_cliente[mponto,4] + mtot_vlr
			m_cliente[mponto,5] := m_cliente[mponto,5] + 1
                ENDIF
                mtot_vlr := mtot_quantd := mtot_prunit := 0
        NEXT
        i:=0
        FOR i = 1 TO LEN(m_cliente)
		IF m_cliente[i,3] = 0
			m_cliente[i,6] := 100
		ELSE
			m_cliente[i,6] := ((m_cliente[i,4]-m_cliente[i,3])/m_cliente[i,4])*100
		ENDIF
	NEXT
        DO CASE
                CASE mop = 1
                        ASORT(m_cliente,,,{|x,y| x[1] > y[1]})
                        mtit = 'CLASSIFICACAO DAS CIDADES - por Ordem Alfabetica'
                CASE mop = 2
                        ASORT(m_cliente,,,{|x,y| x[2] > y[2]})
                        mtit = 'CLASSIFICACAO DAS CIDADES - pela quantidade'
                CASE mop = 3
                        ASORT(m_cliente,,,{|x,y| x[4] > y[4]})
                        mtit = 'CLASSIFICACAO DAS CIDADES - Valor de Venda'
                CASE mop = 4
                        ASORT(m_cliente,,,{|x,y| x[6] > y[6]})
                        mtit = 'CLASSIFICACAO DAS CIDADES - Lucro'
        ENDCASE
        mpag = 1
        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)+' Intervalo de '+STRZERO(mdia,4)+' dias'
        IF ! EMPTY(mcod_forn)
                cons_cli := {}
                sr_getconnection():exec("SELECT * FROM sacforn WHERE cod_forn = "+sr_cdbvalue(STRZERO(mcod_for,4)),,.t.,@cons_cli)
                sr_getconnection():exec('COMMIT',,.f.)
                mtipo = mtipo+' - Fornecedor: '+STRZERO(mcod_for,4)+'-'+cons_cli[1,2]
        ENDIF
        IF ! EMPTY(mcod_ven)
                cons_cli := {}
                sr_getconnection():exec("SELECT * FROM insopera WHERE scod_op = "+sr_cdbvalue(STRZERO(mcod_ven,3)),,.t.,@cons_cli)
                sr_getconnection():exec('COMMIT',,.f.)
                mtipo = mtipo+' - Vendedor: '+STRZERO(mcod_ven,3)+'-'+cons_cli[1,2]
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
                xlsWrite( nXls, f, 1, 'Cliente')
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
                        mensagem('IMPRIMINDO PARA EXCEL o CLIENTES: '+m_cliente[i,1]+' - '+m_cliente[i,2]+'  Aguarde um momento ...')
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
                DEVPOS(PROW()+1,00);DEVOUT('                                 ')
                IF mlist_cust = 'S'
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' Vlr.Medio')
                ENDIF
                DEVPOS(PROW(),PCOL()+1);DEVOUT(' Vlr.Medio')
                IF mlist_cust = 'S'
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('    Vlr.Total')
                ENDIF
                DEVPOS(PROW(),PCOL()+1);DEVOUT('    Vlr.Total')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(' (%)  ')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('  Qtd.Med')
                IF mlist_cust = 'S'
        		DEVPOS(PROW(),PCOL()+1);DEVOUT('                ')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('  part.')
                ENDIF
                DEVPOS(PROW(),PCOL()+1);DEVOUT('  Qtd.')

                DEVPOS(PROW()+1,00);DEVOUT('Cidade                 ')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('  Quantd.')
                IF mlist_cust = 'S'
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('     Custo')
                ENDIF
                DEVPOS(PROW(),PCOL()+1);DEVOUT('     Venda')
                IF mlist_cust = 'S'
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('    Prc.Custo')
                ENDIF
                DEVPOS(PROW(),PCOL()+1);DEVOUT('    Prc.Venda')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Vendas')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('    p/dia')
                IF mlist_cust = 'S'
        		DEVPOS(PROW(),PCOL()+1);DEVOUT('  Lucro R$')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Lucro %')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Luc. %')
                ENDIF
                DEVPOS(PROW(),PCOL()+1);DEVOUT(' Cli.')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                i := 0
                IF EMPTY(mquantd_merc) .OR. mquantd_merc > LEN(m_cliente)
                        mquantd_merc := LEN(m_cliente)
                ENDIF
                FOR i = 1 TO mquantd_merc
                        DEVPOS(PROW()+1,00);DEVOUT(SUBSTR(m_cliente[i,1],1,23))
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_cliente[i,2],'999999.99')
                        IF mlist_cust = 'S'
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_cliente[i,3]/m_cliente[i,2],'999,999.99')
                        ENDIF
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_cliente[i,4]/m_cliente[i,2],'999,999.99')
                        IF mlist_cust = 'S'
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_cliente[i,3],'99,999,999.99')
                        ENDIF
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_cliente[i,4],'99,999,999.99')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM((m_cliente[i,4]/mger_vlr)*100,'999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_cliente[i,2]/mdia,'99999.999'))
                        IF mlist_cust = 'S'
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_cliente[i,4] - m_cliente[i,3],'999,999.99'))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(((m_cliente[i,4] - m_cliente[i,3]) / m_cliente[i,4])*100,'9999.99'))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(((m_cliente[i,4] - m_cliente[i,3])/(mger_vlr-mger_prunit))*100,'999.99'))
                        ENDIF
                        IF m_cliente[i,2] = 0
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(0,'9,999'))
                        ELSE
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_cliente[i,5],'9,999'))
                        ENDIF
                        IF m_cliente[i,2] > 0
                                mqtd_cli := mqtd_cli + m_cliente[i,5]
                        ENDIF
                        IF PROW() >= 59
                                mpag ++
                                EJECT
                                cabecalho(mpag,mtit,mtipo,mprg)
		                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT('                                 ')
                                IF mlist_cust = 'S'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' Vlr.Medio')
                                ENDIF
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(' Vlr.Medio')
                                IF mlist_cust = 'S'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('    Vlr.Total')
                                ENDIF
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('    Vlr.Total')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(' (%)  ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('  Qtd.Med')
                                IF mlist_cust = 'S'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('                ')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('  part.')
                                ENDIF
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('  Qtd.')

                                DEVPOS(PROW()+1,00);DEVOUT('Cidade                 ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('  Quantd.')
                                IF mlist_cust = 'S'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('     Custo')
                                ENDIF
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('     Venda')
                                IF mlist_cust = 'S'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('    Prc.Custo')
                                ENDIF
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('    Prc.Venda')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Vendas')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('    p/dia')
                                IF mlist_cust = 'S'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('  Lucro R$')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Lucro %')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Luc. %')
                                ENDIF
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(' Cli.')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        ENDIF
                NEXT
                IF PROW() >= 57
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo,mprg)
                ENDIF
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                DEVPOS(PROW()+1,00);DEVOUT('T O T A L  G E R A L.:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mger_quantd,'999,999.99')
                IF mlist_cust = 'S'
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mger_prunit / mger_quantd,'999,999.99')
                ENDIF
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mger_vlr / mger_quantd,'999,999.99')
                IF mlist_cust = 'S'
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mger_prunit,'99,999,999.99')
                ENDIF
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mger_vlr,'99,999,999.99')
                //DEVPOS(PROW(),87);DEVOUT(TRANSFORM(100,'999.99'))
                DEVPOS(PROW(),PCOL()+8);DEVOUT(TRANSFORM((mger_quantd/mdia),'99999.999'))
                IF mlist_cust = 'S'
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mger_vlr - mger_prunit,'999,999.99'))
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT('Quantidade de CIDADES:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mquantd_merc,'999,999'))
                DEVPOS(PROW()+1,00);DEVOUT('Quantidade CLIENTES..:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mqtd_cli,'999,999'))
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
                        
                ENDIF
                */
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL

