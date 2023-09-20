***********************
* EXCLUSAO DE TABLOIDES
***********************
MEMVAR getlist,nivel_acess,mdata_sis,cod_operado

FUNCTION sactabl2()
***************
LOCAL mprg:='SACTABL2',mtitulo:='EXCLUSAO DE TABLOIDES',lci,cci,opcao,mnome,mdata_ini,mdata_fim,mpr_tabl,mdesc_tabl,;
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
        DEVPOS(lci  ,cci+26);DEVOUT('Tabloide:')
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
        @ lci,cci+19 GET mnumero PICT '99999'
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
	m_ent := {}
	sr_getconnection():exec("SELECT cod_merc,merc,cod_fab,fabrica,pr_ant,pr_tab,desc_tab,codigo,nome,data_ini,data_final,data_cad,inicio,final FROM tabloide WHERE codigo = "+sr_cdbvalue(STRZERO(mnumero,5)),,.t.,@m_ent)
	IF LEN(m_ent) = 0 
                atencao('Tabloide nao Cadastrado')
                LOOP
	ENDIF
        setcor(3)
        DEVPOS(lci,cci+19);DEVOUT(STRZERO(mnumero,5))
        DEVPOS(lci+1,cci+19);DEVOUT(m_ent[1,12])
        DEVPOS(lci,cci+36);DEVOUT(m_ent[1,9])
        DEVPOS(lci+2,cci+19);DEVOUT(m_ent[1,10])
        DEVPOS(lci+3,cci+19);DEVOUT(m_ent[1,11])
        setcor(1)
	i := 0
	FOR i = 1 TO LEN(m_ent)
	       	AADD(m_codigo,m_ent[i,1])
	       	IF i_ent = 10
        	       	SCROLL(lci+6+i_ent,cci+1,28,80,1)
        	ELSE
                        i_ent++
	       	ENDIF
        	setcor(3)
        	//DEVPOS(lci+6+i_ent,cci+01);DEVOUT(m_ent[i,1]+' - '+m_ent[i,2]+'  '+TRANSFORM(m_ent[i,5],'999,999.99')+'  '+TRANSFORM(m_ent[i,6],'999,999.99')+'  '+TRANSFORM(m_ent[i,7],'999.99'))
        	DEVPOS(lci+6+i_ent,cci+01);DEVOUT(m_ent[i,1]+' - '+m_ent[i,2]+'  '+TRANSFORM(m_ent[i,5],'999,999.99')+'  '+TRANSFORM(m_ent[i,6],'999,999.99'))
                setcor(1)
        NEXT
	IF ! EMPTY(m_ent[i,13])
		atencao('Este Tabloide nao pode ser EXCLUIDO ja iniciado !!!!')
		LOOP
	ENDIF
	IF op_simnao('N','Confirma EXCLUSAO do Tabloide [S/n]:') = 'N'
        	LOOP
	ENDIF
        sr_getconnection():exec("DELETE FROM tabloide WHERE codigo = " + sr_cdbvalue(STRZERO(mnumero,5)),,.f.)
	sr_getconnection():exec("COMMIT",,.f.)
ENDDO




