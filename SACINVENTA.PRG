***************************************
* RELATORIO DE INVEWNTARIO DOS PRODUTOS
***************************************
MEMVAR getlist,nivel_acess,mcaminho,mend_firm,mcid_firm,mfone_firm,minsc_firm,;
       mcgc_firm

FUNCTION sacinventa
*******************
LOCAL opcao,mdata1,mdata2,mtot_item := 0,mtecla:=' ',mcodemp,f,m_log:={},mtot_valor := 0

PRIVATE mprg:='SAC513',mtraco,mtit,mtipo,mpag,mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),;
        m_merc:={},mop_cab:='S',msub_grupo,mgrupo1,mfornece := SPACE(40)

IF ! ver_nivel(mprg,'RELATORIO DE INVENTARIO DOS PRODUTOS','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mtraco := REPLI('=',137)
op_tela(10,10,18,80,'RELATORIO DE INVENTARIO DOS PRODUTOS')
WHILE .T.
        limpa(0,0,33,100)
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mcod_forn :=  mcod_emp := mtot_item := 0
        mcodemp := '   '
        msub_grupo = SPACE(2)
        mgrupo1 := SPACE(5)
        mfornece := SPACE(40)
        ASIZE(m_merc,0)
        mop_cab:='S'
        mtecla := '1'
        mdata1 := mdata2 := CTOD('  /  /  ')
        mensagem('Preencha os Campos ou em Branco p/Imprimir todos - <ESC>p/Sair')
        setcor(1)
        DEVPOS(0,2);DEVOUT('Codigo Empresa......:')
        DEVPOS(1,2);DEVOUT('Imprimir o Cabecalho:')
        //DEVPOS(2,2);DEVOUT('Codigo Grupo........:')
        //DEVPOS(3,2);DEVOUT('Codigo Sub-Grupo....:')
        DEVPOS(4,2);DEVOUT('Cod.Fornecedor......:')
        //DEVPOS(5,2);DEVOUT('Data Inicial........:')
        DEVPOS(6,2);DEVOUT('Data do SALDO.......:')
        DEVPOS(7,2);DEVOUT('Ordem [1]Alf.[2]Cod.:')
        mensagem('Aguarde preparando ambiente para Tabela de Preco...')
        @ 0,25 GET mcodemp PICT "999" VALID ver_emp(mcodemp,1,30,,'*') WHEN mmult_emp ='S'
        @ 1,25 GET mop_cab PICT "@!" VALID mop_cab $ 'S,N'
        //@ 2,25 GET mgrupo1 PICT '999' VALID v_gru_cod(mgrupo1,2,2,29)
        //@ 3,25 GET msub_grupo PICT '99' WHEN ! EMPTY(mgrupo1) VALID ver_sgru(VAL(mgrupo1),VAL(msub_grupo),3,29)
        @ 4,25 GET mcod_forn PICT '9999' VALID v_fornece(mcod_forn,4,30)
        READ
        IF LASTKEY() = 27
                RELEASE mprg
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        //IF ! EMPTY(msub_grupo)
        //        mdesc_sub := grup->merc
        //ENDIF
        v_fornece(mcod_forn,4,24)
        //@ 5,25 GET mdata1 VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 6,25 GET mdata2 VALID IF(EMPTY(mdata2),.F.,.T.)
        @ 7,25 GET mtecla PICT '@!' VALID mtecla $ '1,2'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF ! EMPTY(mcod_forn)
                mtit := 'RELATORIO DE INVENTARIO DOS PRODUTOS p/Fornecedor: '+STRZERO(mcod_forn,4)+'-'+mfornece
        ELSE
                mtit := 'RELATORIO DE INVENTARIO DOS PRODUTOS'
        ENDIF
                mtipo := 'Data do Saldo: '+DTOC(mdata2)
                IF mtecla = '1'
                        mensagem('Ordem Alfabetica - <ESC>p/cancelar impressao')
                        mtipo := mtipo + ' por Ordem Alfabetica '
                ELSE
                        mensagem('Ordem de Codigo - <ESC>p/cancelar impressao ')
                        mtipo := mtipo + ' por Ordem de Codigo'
                ENDIF
                m_merc := {}

                /*
                cComm  := "SELECT m.cod_merc,m.merc,m.saldo_mer,"
                ccomm  := ccomm + "sum(iif(l.ent_sai = 'E' and l.data < "+sr_cdbvalue(mdata1)+",l.quantd, 0))"
                ccomm  := ccomm + "- sum(iif(l.ent_sai = 'S' and l.data < "+sr_cdbvalue(mdata1)+",l.quantd, 0)) saldo_inicial,"

                ccomm  := ccomm + "sum(iif(l.ent_sai = 'E' and l.data between "+sr_cdbvalue(mdata1)+" and "+sr_cdbvalue(mdata2)+",l.quantd, 0)) entrada_mes,"
                ccomm  := ccomm + "sum(iif(l.ent_sai = 'S' and l.data between "+sr_cdbvalue(mdata1)+" and "+sr_cdbvalue(mdata2)+",l.quantd, 0)) saidas_mes,"
                ccomm  := ccomm + " JOIN sacmerc m ON m.cod_merc = l.cod_prod"
                ccomm  := ccomm + "(SELECT sum(iif(l.ent_sai = 'E',l.quantd, 0)) - sum(iif(l.ent_sai = 'S',l.quantd, 0))"
                ccomm  := ccomm + " FROM logproduto l where l.data <= "+sr_cdbvalue(mdata2)+" and l.cod_prod = m.cod_merc)"
                ccomm  := ccomm + " from sacmerc m"
                */
                cComm  := "SELECT cod_merc,merc,cust_merc,pr_venda FROM sacmerc m WHERE cod_merc IS NOT NULL"
		IF ! EMPTY(mcod_forn)
                        cComm  := ccomm + " AND cod_fab = "+sr_cdbvalue(STRZERO(mcod_forn,4))
		ENDIF
                IF ! EMPTY(mcodemp)
                        cComm  := ccomm + " AND empresa = "+sr_cdbvalue(mcodemp)
		ENDIF
                /*
        	IF ! EMPTY(msub_grupo)
	                cComm  := ccomm + " AND gru_sub = "+sr_cdbvalue(ALLTRIM(mgrupo1)+ALLTRIM(msub_grupo))
        	ELSEIF ! EMPTY(mgrupo1)
        	        cComm  := ccomm + " AND gru_sub LIKE "+sr_cdbvalue(ALLTRIM(mgrupo1)+'%')
	        ENDIF
	        */
                IF mtecla = '1'
                        ccomm  := ccomm + " ORDER BY 2"
                ELSEIF mtecla = '2'
                        ccomm  := ccomm + " ORDER BY 1"
                ENDIF
                sr_getconnection():exec(ccomm,,.t.,@m_merc)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(m_merc) = 0
			atencao('Nao existe nenhum Produto em nosso Arquivos com estas condicoes...')
			LOOP
		ENDIF
                mpag = 0
                IF ! imp_arq('PRE_ALT.REL','R')
                        LOOP
                ENDIF
                mdata1 := mdata2 - 365
                op_tela(10,10,11,70)
                SETPOS(00,00);DISPOUT('Produto Processado:')
                //f:=0
                //FOR f = 1 TO mquantd
                        mtot_item := mpag := 0
                        i:=0
                        FOR i = 1 TO LEN(m_merc)
                                m_log:={}
                                sr_getconnection():exec("SELECT FIRST 1 l.cod_prod,l.saldo_pos,l.preco_c,l.preco_v,max(sr_recno) FROM logproduto l WHERE l.data between "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)+" AND cod_prod = "+sr_cdbvalue(m_merc[i,1])+" GROUP BY 1,2,3,4 ORDER BY 3 DESC",,.t.,@m_log)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF mpag = 0 .OR. PROW() >= 57
		                	IF (mop_cab = 'N' .AND. mpag = 0) .OR. mop_cab = 'S'
                                                mpag ++
                                                IF mpag > 1
                                                        EJECT
                                                ENDIF
                                                cabecalho(mpag,mtit,mtipo,mprg,'001')
                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+1,00);DEVOUT(' Cod.')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Descricao                               ')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Saldo em '+DTOC(mdata2))
                                                DEVPOS(PROW(),PCOL()+2);DEVOUT(' Valor Medio')
                                                DEVPOS(PROW(),PCOL()+2);DEVOUT(' Valor Total')
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                        ENDIF
                                ENDIF
                                SETPOS(00,20);DISPOUT(m_merc[i,1]+'-'+m_merc[i,2])
                                prog_imp(RECNO())
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT(m_merc[i,1])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(m_merc[i,2])
                                IF LEN(m_log) > 0
                                        DEVPOS(PROW(),PCOL()+5);DEVOUTPICT(m_log[1,2],'99,999,999.99')
                                        IF m_log[1,3] > 0
                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_log[1,3],'99,999,999.99')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_log[1,2] * m_log[1,3],'99,999,999.99')
                                                mtot_valor += m_log[1,3] * m_log[1,2]

                                        ELSE
                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_merc[i,3],'99,999,999.99')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_log[1,2] * m_merc[i,3],'99,999,999.99')
                                                mtot_valor += m_merc[i,3] * m_log[1,2]
                                        ENDIF
                                ELSE
                                        DEVPOS(PROW(),PCOL()+5);DEVOUTPICT(0,'99,999,999.99')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(0,'99,999,999.99')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(0,'99,999,999.99')
                                ENDIF
                                mtot_item ++
                        NEXT
                        IF PROW() >= 55 .AND. mop_cab = 'S'
                                EJECT
                                mpag ++
                                cabecalho(mpag,mtit,mtipo,mprg,'001')
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT(' Cod.')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Descricao                               ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Saldo em '+DTOC(mdata2))
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(' Valor Medio')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(' Valor Total')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        ENDIF
                        imprt(mtipo_imp,'N')
                        DEVPOS(PROW()+2,00);DEVOUT('Total de Itens.........:'+TRANSFORM(mtot_item,'999,999'))
                        DEVPOS(PROW()+2,00);DEVOUT('Valor Total dos Itens..:'+TRANSFORM(mtot_valor,'9,999,999,999.99'))
	                DEVPOS(PROW()+2,00);DEVOUT(TIME())
                        EJECT
                        SETPRC(00,00)
                //NEXT
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                wvw_lclosewindow()
                conf_impressao('PRE_ALT.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
************************************** F I M ***************************
