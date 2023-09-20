***********************
* RELATORIO/CONSULTA DE TABLOIDES
***********************
MEMVAR getlist,nivel_acess,mdata_sis,cod_operado

FUNCTION sactabl4()
***************
LOCAL mprg:='SACTABL4',mtitulo:='CONSULTA E RELATORIO DOS TABLOIDES',mcons_tabl,mdata,mcons_merc,i,y,point:=0,m_menu:={},mtipo_op:=0,;
      mordem:=0,mquantd:=0

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mpag:=0,mtit,mtipo

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
op_tela(01,02,33,98,mtitulo)
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
	setcor(1)
	i:=y:=0
	mdata := DATE()
        mensagem('Preencha os Campos - <ESC> p/Retornar ')
        limpa(00,00,33,100)
        DEVPOS(00,01);DEVOUT('Tabloide')
        DEVPOS(00,39);DEVOUT('Inicio')
        DEVPOS(00,49);DEVOUT('Final')
        DEVPOS(00,59);DEVOUT('Qtd.Prd')
	DEVPOS(00,69);DEVOUT('Situacao')
	@ 01,00 TO 01,100
        READ
        IF LASTKEY() = 27
		EXIT
        ENDIF
	mensagem('Verificando se existe TABLOIDES para ser iniciado...')
	m_menu := {}
	mcons_tabl := {}
	sr_getconnection():exec("SELECT codigo,nome,data_ini,data_final,count(cod_merc) FROM tabloide WHERE inicio IS NULL GROUP BY codigo,codigo,nome,nome,data_ini,data_ini,data_final,data_final ORDER BY data_ini",,.t.,@mcons_tabl)
        sr_getconnection():exec('COMMIT',,.f.)
	IF LEN(mcons_tabl) > 0
		i:=0
		FOR i = 1 TO LEN(mcons_tabl)
		        AADD(m_menu,mcons_tabl[i,1]+'-'+mcons_tabl[i,2]+'  '+DTOC(mcons_tabl[i,3])+'  '+DTOC(mcons_tabl[i,4])+'  '+TRANSFORM(mcons_tabl[i,5],'999,999')+'   INICIALIZAR')
		NEXT
	ENDIF
	mensagem('Verificando se existe TABLOIDES para ser Finalizado...')
	mcons_tabl := {}
	//sr_getconnection():exec("SELECT codigo,nome,data_ini,data_final FROM tabloide WHERE data_final >= "+sr_cdbvalue(mdata)+" AND final IS NULL AND inicio IS NOT NULL GROUP BY codigo,codigo,nome,nome,data_ini,data_ini,data_final,data_final ORDER BY data_ini",,.t.,@mcons_tabl)
	sr_getconnection():exec("SELECT codigo,nome,data_ini,data_final,count(cod_merc) FROM tabloide WHERE final IS NULL AND inicio IS NOT NULL GROUP BY codigo,codigo,nome,nome,data_ini,data_ini,data_final,data_final ORDER BY data_ini",,.t.,@mcons_tabl)
        sr_getconnection():exec('COMMIT',,.f.)
	IF LEN(mcons_tabl) > 0
		y:=0
		FOR y = 1 TO LEN(mcons_tabl)
		        AADD(m_menu,mcons_tabl[y,1]+'-'+mcons_tabl[y,2]+'  '+DTOC(mcons_tabl[y,3])+'  '+DTOC(mcons_tabl[y,4])+'  '+TRANSFORM(mcons_tabl[Y,5],'999,999')+'   FINALIZAR  ')
		NEXT
	ENDIF
	IF i = 0 .AND. y = 0
                atencao('Nao existe nenhum Tabloide para ser Consultado')
                LOOP
	ENDIF		
	setcor(10);point := ACHOICE(2,1,32,97,m_menu,,,point);setcor(1)
        DO CASE
                CASE LASTKEY()=27
                        EXIT
                CASE LASTKEY() = 13
			setcor(1)
                        mcod_tabl := VAL(SUBSTR(m_menu[point],5))
			op_tela(17,05,21,65,'Menu para Relatorio e Etiquetas')
			DEVPOS(0,0);DEVOUT('Codigo do Tabloide..:')
			DEVPOS(1,0);DEVOUT('Tipo................:')
			DEVPOS(2,0);DEVOUT('Ordem para Impressao:')
			DEVPOS(3,0);DEVOUT('Quantidade Copias...:')
		        @ 0,22 GET mcod_tabl PICT '99999'
		        READ
		        IF LASTKEY() = 27
	                        wvw_lclosewindow()
		                LOOP
		        ENDIF
			sr_getconnection():exec("SELECT * FROM tabloide WHERE codigo = "+sr_cdbvalue(STRZERO(mcod_tabl,5)),,.t.,@mcons_tabl)
                        sr_getconnection():exec('COMMIT',,.f.)
			IF LEN(mcons_tabl) = 0
				atencao('Nao foi possivel encontrar este TABLOIDE....')
	                        wvw_lclosewindow()
		                LOOP
			ENDIF
		      	mtit := 'Relatorio do Tabloide: '+mcons_tabl[1,1]+' - '+mcons_tabl[1,2]
                	setcor(10)
			@ 1,22 PROMPT ' RELATORIO/CONSULTA '
		        @ 1,COL()+2 PROMPT '  ETIQUETAS  '
		        SET INTEN ON
		        MENU TO mtipo_op
		        @ 2,22 PROMPT ' ALFABETICA '
		        @ 2,COL()+2 PROMPT ' CODIGO '
		        @ 2,COL()+2 PROMPT ' FORNECEDOR '
		        SET INTEN ON
		        MENU TO mordem
                	setcor(1)
			IF mordem = 1
				sr_getconnection():exec("SELECT * FROM tabloide WHERE codigo = "+sr_cdbvalue(STRZERO(mcod_tabl,5))+" ORDER BY cod_merc",,.t.,@mcons_tabl)
		                mtipo := 'Ordem de Codigo do Produto'
			ELSEIF mordem = 2
				sr_getconnection():exec("SELECT * FROM tabloide WHERE codigo = "+sr_cdbvalue(STRZERO(mcod_tabl,5))+" ORDER BY merc",,.t.,@mcons_tabl)
		                mtipo := 'Ordem de Descricao do Produto'
			ELSE
				sr_getconnection():exec("SELECT * FROM tabloide WHERE codigo = "+sr_cdbvalue(STRZERO(mcod_tabl,5))+" ORDER BY cod_fab",,.t.,@mcons_tabl)
		                mtipo := 'Ordem de Codigo do Fornecedor'
			ENDIF
                        sr_getconnection():exec('COMMIT',,.f.)
			IF LEN(mcons_tabl) = 0
				atencao('Nao foi possivel encontrar este TABLOIDE....')
	                        wvw_lclosewindow()
		                LOOP
			ENDIF
			IF mtipo_op = 1
        		      	mquantd := 1
	               		@ 3,22 GET mquantd PICT '99' VALID IF(EMPTY(mquantd),.F.,.T.)
	       	                READ
        	       	        IF LASTKEY() = 27
	                               wvw_lclosewindow()
	               	               LOOP
                                ENDIF
                                setcor(1)
                                IF ! imp_arq('TABLOIDE.REL','R')
		                        LOOP
		                ENDIF
				f:=0
		                FOR f = 1 TO mquantd
		                        i:=mpag:=0
		                        FOR i = 1 TO LEN(mcons_tabl)
                		                IF mpag = 0 .OR. PROW() >= 57
		                			//IF (mop_cab = 'N' .AND. mpag = 0) .OR. mop_cab = 'S'
		                                        mpag ++
                	        	                IF mpag > 1
                        	        	                EJECT
		                                        ENDIF
                		                        cabecalho(mpag,mtit,mtipo,mprg,'001')
                                		        imprt(mtipo_imp,'C')
		                                        DEVPOS(PROW()+1,00);DEVOUT(' Cod.')
                		                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Descricao                               ')
                		                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Pr. Tabela')
                		                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Pr.Tabloide')
                		                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Data Cad')
                		                        DEVPOS(PROW(),PCOL()+1);DEVOUT('  Inicio')
                		                        DEVPOS(PROW(),PCOL()+1);DEVOUT('   Final')
                		                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Fornecedor')
                		                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',132))
						ENDIF
			                     	imprt(mtipo_imp,'C')
		                                DEVPOS(PROW()+1,00);DEVOUT(mcons_tabl[i,6])
                		                DEVPOS(PROW(),PCOL()+1);DEVOUT(mcons_tabl[i,7])
                		                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mcons_tabl[i,10],'999,999.99'))
                		                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mcons_tabl[i,11],'9999,999.99'))
                		                DEVPOS(PROW(),PCOL()+1);DEVOUT(mcons_tabl[i,3])
                		                DEVPOS(PROW(),PCOL()+1);DEVOUT(mcons_tabl[i,4])
                		                DEVPOS(PROW(),PCOL()+1);DEVOUT(mcons_tabl[i,5])
                		                DEVPOS(PROW(),PCOL()+1);DEVOUT(mcons_tabl[i,8]+'-'+SUBSTR(mcons_tabl[i,9],1,30))
			                NEXT
				    	DEVPOS(PROW()+2,00);DEVOUT(TIME())
			             	EJECT
			                SETPRC(00,00)
				NEXT
           			SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                                conf_impressao('TABLOIDE.REL')
			ELSE
			     sac5et201(mcons_tabl)
                        ENDIF				
                        wvw_lclosewindow()
*/
        ENDCASE

ENDDO
wvw_lclosewindow()
RETURN NIL