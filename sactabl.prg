***********************
* INCLUSAO DE TABLOIDES
***********************
MEMVAR getlist,nivel_acess,mdata_sis,cod_operado

FUNCTION sactabl()
***************
LOCAL mprg:='SACTABL',mtitulo:='INCLUSAO DE TABLOIDES',lci,cci,opcao,mnome,mdata_ini,mdata_fim,mpr_tabl,mdesc_tabl,;
      mcons_merc:={},i_ent:=0,m_ent,m_codigo,mcons_tabl,mnumero:=0,i,alt_merc:=' '

PRIVATE mcod_merc,mcod_op

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := cci := 0
set_key('merc',,,,'*')
op_tela(01,02,33,98,mtitulo)
WHILE .T.
	mnome := SPACE(30)
	mdata_ini := mdata_fim := CTOD('  /  /  ')
	i_ent := 0
	m_ent := {}
	m_codigo := {}
        mensagem('Preencha os Campos - <ESC> p/Retornar ')
        limpa(00,00,33,100)
        DEVPOS(lci  ,cci+1);DEVOUT('Codigo..........:')
        DEVPOS(lci  ,cci+25);DEVOUT('Tabloide:')
        DEVPOS(lci+1,cci+1);DEVOUT('Data Inclusao...:')
        DEVPOS(lci+2,cci+1);DEVOUT('Data do Inicio..:')
        DEVPOS(lci+3,cci+1);DEVOUT('Data do Final...:')
	@ lci+4,cci TO lci+4,100
        DEVPOS(lci+5,cci+1);DEVOUT('Produto')
        DEVPOS(lci+5,cci+51 );DEVOUT('Prc. Venda')
        DEVPOS(lci+5,COL()+2);DEVOUT('Prc.Tablo.')
	//DEVPOS(lci+5,COL()+1);DEVOUT('Desc.(%)')
	@ lci+6,cci TO lci+6,100
	@ lci+29,cci TO lci+29,100
	@ lci+31,cci TO lci+31,100
        setcor(3)
        DEVPOS(lci+1,cci+19);DEVOUT(DATE())
        setcor(1)
        @ lci,cci+35 GET mnome PICT '@!'
        @ lci+2,cci+19 GET mdata_ini VALID IF(mdata_ini < DATE(),.F.,.T.)
        @ lci+3,cci+19 GET mdata_fim VALID IF(mdata_ini >= mdata_fim,.F.,.T.)
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        WHILE .T.
		limpa(lci+32,00,lci+32,100)
                DEVPOS(lci+30,01);DEVOUT('Codigo:')
                DEVPOS(lci+30,51);DEVOUT('Prc. Venda')
                DEVPOS(lci+30,COL()+2);DEVOUT('Prc.Tablo.')
                //DEVPOS(lci+30,COL()+1);DEVOUT('Desc.(%)')
                mcod_barra := SPACE(14)
                mcod_merc := mpr_tabl := mdesc_tabl := 0
                alt_merc := ' '
                mensagem('Digite o Codigo da Mercadoria - <ESC>Sair')

                @ lci+32,01 GET mcod_barra PICT '@!'
                READ
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                IF ! EMPTY(mcod_barra)
			mcons_merc := {}
                        IF LEN(ALLTRIM(mcod_barra)) > 5
				sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_barr = "+sr_cdbvalue(mcod_barra),,.t.,@mcons_merc)
                        ELSE
				sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(VAL(mcod_barra),5)),,.t.,@mcons_merc)
                        ENDIF
                        sr_getconnection():exec('COMMIT',,.f.)
			IF LEN(mcons_merc) = 0
                                atencao('Codigo nao Cadastrado')
                                LOOP
			ENDIF
                ELSE
                        mcod_merc := IF(m_set[1,93] <> 'A',f4_merc(),f4_merc1())
			sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc),,.t.,@mcons_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
			IF LEN(mcons_merc) = 0
                                atencao('Codigo da mercadoria nao cadastrado')
                                LOOP
			ENDIF
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                mcod_merc := VAL(mcons_merc[1,8])
                mmerc := mcons_merc[1,9]
                IF ASCAN(m_codigo,mcod_merc) > 0 
			mpr_tabl := m_ent[ASCAN(m_codigo,mcod_merc),6]
			mdesc_tabl := m_ent[ASCAN(m_codigo,mcod_merc),7]
                	alt_merc:='*'
                ENDIF
                setcor(3)
                DEVPOS(lci+32,01);DEVOUT(mcons_merc[1,8]+' - '+mcons_merc[1,9])
                DEVPOS(lci+32,51);DEVOUT(TRANSFORM(mcons_merc[1,46],'999,999.99'))
                setcor(1)
                @ lci+32,63 GET mpr_tabl PICT '999,999.99'
                //@ lci+32,76 GET mdesc_tabl PICT '99.99' WHEN EMPTY(mpr_tabl)
                READ
                IF LASTKEY() = 27;LOOP;ENDIF
                IF EMPTY(mpr_tabl) .AND. EMPTY(mdesc_tabl);LOOP;ENDIF
		IF alt_merc = '*'
	                IF op_simnao('S','Confirma Alteracao da Mercadoria [S/n]:') = 'N'
        	        	LOOP
			ENDIF
			m_ent[ASCAN(m_codigo,mcod_merc),6] := mpr_tabl 
			m_ent[ASCAN(m_codigo,mcod_merc),7] := mdesc_tabl

		ELSE
	                IF op_simnao('S','Confirma Inclusao da Mercadoria [S/n]:') = 'N'
        	        	LOOP
			ENDIF
	                AADD(m_codigo,mcons_merc[1,8])
        	        AADD(m_ent,{mcons_merc[1,8],mcons_merc[1,9],mcons_merc[1,30],mcons_merc[1,31],mcons_merc[1,46],mpr_tabl,mdesc_tabl,mcons_merc[1,2]})
	                IF i_ent = 10
        	                SCROLL(lci+6+i_ent,cci+1,28,80,1)
                	ELSE
                        	i_ent++
	                ENDIF
        	        setcor(3)
                	DEVPOS(lci+6+i_ent,cci+01);DEVOUT(mcons_merc[1,8]+' - '+mcons_merc[1,9]+'  '+TRANSFORM(mcons_merc[1,46],'999,999.99')+'  '+TRANSFORM(mpr_tabl,'999,999.99')+'  '+TRANSFORM(mdesc_tabl,'999.99'))
                	setcor(1)
                ENDIF
        ENDDO
	IF 'N' = op_simnao('S','Confirma o Fechamento do Tabloide:')
		LOOP
	ENDIF
	mensagem('Gerando o numero do Tabloides....')
	mcons_tabl := {}
	sr_getconnection():exec("SELECT * FROM tabloide ORDER BY codigo" ,,.t.,@mcons_tabl)
        sr_getconnection():exec('COMMIT',,.f.)
	IF LEN(mcons_tabl) = 0
		mnumero := 1
	ELSE
		mnumero := VAL(mcons_tabl[LEN(mcons_tabl),1]) + 1
	ENDIF
	i := 0
	FOR i = 1 TO LEN(m_codigo)
                sr_getconnection():exec('INSERT INTO tabloide ('+;
			'codigo,'+;
			'nome,'+;
			'data_cad,'+;
                        'data_ini,'+;
			'data_final,'+;
                        'cod_merc,'+;
			'merc,'+;
                        'cod_fab,'+;
			'fabrica,'+;
                        'pr_ant,'+;
			'pr_tab,'+;
			'desc_tab,'+;
			'cod_oper,'+;
			'cod_barr,'+;
                        'SR_DELETED)'+;
                        ' VALUES ('+;
                        sr_cdbvalue(STRZERO(mnumero,5))+','+; //1
                        sr_cdbvalue(mnome)+','+; //2
                        sr_cdbvalue(DATE())+','+; //3
                        sr_cdbvalue(mdata_ini)+','+; //4
                        sr_cdbvalue(mdata_fim)+','+; //5
                        sr_cdbvalue(m_ent[i,1])+','+; //6
                        sr_cdbvalue(m_ent[i,2])+','+; //7
                        sr_cdbvalue(m_ent[i,3])+','+; //8
                        sr_cdbvalue(m_ent[i,4])+','+;//9
                        sr_cdbvalue(m_ent[i,5])+','+;//10
                        sr_cdbvalue(m_ent[i,6])+','+; //11
                        sr_cdbvalue(m_ent[i,7])+','+;//12
                        sr_cdbvalue(cod_operado)+','+;//13
                        sr_cdbvalue(m_ent[i,8])+','+;//14
                        sr_cdbvalue(' ')+')',,.f.)
	NEXT
        sr_getconnection():exec('COMMIT',,.f.)
        setcor(3)
        DEVPOS(lci,cci+19);DEVOUT(STRZERO(mnumero,5))
        setcor(1)
	atencao('Foi Gerado o TABLOIDE DE NUMERO: '+STRZERO(mnumero,5))
ENDDO




