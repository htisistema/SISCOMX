***********************
* INICIAR/FINALIZAR OS TABLOIDES
***********************
MEMVAR getlist,nivel_acess,mdata_sis,cod_operado

FUNCTION sactabl3()
***************
LOCAL mprg:='SACTABL3',mtitulo:='INICIAR/FINALIZAR OS TABLOIDES',mcons_tabl,mdata,mcons_merc,i,y

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

op_tela(01,02,33,98,mtitulo)
WHILE .T.
	setcor(1)
	i:=y:=0
	mdata := DATE()
        mensagem('Preencha os Campos - <ESC> p/Retornar ')
        limpa(00,00,33,100)
        DEVPOS(00,01);DEVOUT('Data:')
        DEVPOS(02,01);DEVOUT('Tabloide')
        DEVPOS(02,39);DEVOUT('Inicio')
        DEVPOS(02,49);DEVOUT('Final')
        DEVPOS(02,59);DEVOUT('Situacao')
	@ 01,00 TO 01,100
	@ 03,00 TO 03,100
        @ 00,07 GET mdata 
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
	mensagem('Verificando se existe TABLOIDES para ser iniciado...')
	mcons_tabl := {}
	sr_getconnection():exec("SELECT codigo,nome,data_ini,data_final,count(cod_merc) FROM tabloide WHERE data_ini <= "+sr_cdbvalue(mdata)+" AND inicio IS NULL GROUP BY codigo,codigo,nome,nome,data_ini,data_ini,data_final,data_final ORDER BY data_ini",,.t.,@mcons_tabl)
        sr_getconnection():exec('COMMIT',,.f.)
	setcor(3)
	IF LEN(mcons_tabl) > 0 
		i:=0
		FOR i = 1 TO LEN(mcons_tabl)
		        DEVPOS(3+i,01);DEVOUT(mcons_tabl[i,1]+'-'+mcons_tabl[i,2]+'  '+DTOC(mcons_tabl[i,3])+'  '+DTOC(mcons_tabl[i,4])+'  INICIALIZAR')
		NEXT
	ELSE
		DEVPOS(3+1,01);DEVOUT('Nao existe Tabloides para INICIALIZAR')
	ENDIF
	mensagem('Verificando se existe TABLOIDES para ser Finalizado...')
	mcons_tabl := {}
	sr_getconnection():exec("SELECT codigo,nome,data_ini,data_final,count(cod_merc) FROM tabloide WHERE data_final >= "+sr_cdbvalue(mdata)+" AND final IS NULL AND inicio IS NOT NULL GROUP BY codigo,codigo,nome,nome,data_ini,data_ini,data_final,data_final ORDER BY data_ini",,.t.,@mcons_tabl)
        sr_getconnection():exec('COMMIT',,.f.)
	IF LEN(mcons_tabl) > 0
		y:=0
		FOR y = 1 TO LEN(mcons_tabl)
		        DEVPOS(3+i+y,01);DEVOUT(mcons_tabl[y,1]+'-'+mcons_tabl[y,2]+'  '+DTOC(mcons_tabl[y,3])+'  '+DTOC(mcons_tabl[y,4])+' FINALIZAR')
		NEXT
	ELSE
		DEVPOS(3+i+2,01);DEVOUT('Nao existe Tabloides para ser FINALIZADO')
	ENDIF
	IF i = 0 .AND. y = 0
                atencao('Nao existe nenhum Tabloide para INICIALIZAR E FINALIZAR')
                LOOP
	ENDIF		
	setcor(1)
	IF 'N' = op_simnao('N','Confirma este Processo:')
		LOOP
	ENDIF
	mcons_tabl := {}
	sr_getconnection():exec("SELECT * FROM tabloide WHERE data_ini <= "+sr_cdbvalue(mdata)+" AND inicio IS NULL",,.t.,@mcons_tabl)
        sr_getconnection():exec('COMMIT',,.f.)
	IF LEN(mcons_tabl) > 0
		mensagem('INICIALIZANDO TABLOIDES Aguarde....')
		i:=0
		FOR i = 1 TO LEN(mcons_tabl)
			mcons_merc := {}
			sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcons_tabl[i,6]),,.t.,@mcons_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
			IF LEN(mcons_merc) = 0
        	        	atencao('Produto EXCLUIDO do arquivo: '+mcons_tabl[i,6]+' - '+mcons_tabl[i,7])
				LOOP
			ENDIF
                        mlinha := mcons_merc[1,2]+mcons_merc[1,8]+mcons_merc[1,9]+mcons_merc[1,14]+STRZERO(mcons_merc[1,56]*1000,13)+STRZERO(iat(mcons_tabl[i,11])*100,14)+mcons_merc[1,68]
        	        sr_getconnection():exec("UPDATE tabloide SET pr_ant = "+sr_cdbvalue(mcons_merc[1,46])+",inicio = "+sr_cdbvalue(mdata_sis)+" WHERE codigo = "+sr_cdbvalue(mcons_tabl[i,1])+" AND cod_merc = "+sr_cdbvalue(mcons_tabl[i,6]),,.f.)
                	sr_getconnection():exec("UPDATE sacmerc SET pr_venda = "+sr_cdbvalue(mcons_tabl[i,11])+",ul_alt_pr= "+sr_cdbvalue(mdata_sis)+",opera_pr= "+sr_cdbvalue(cod_operado)+",chv_cript = "+sr_cdbvalue(CRIPTO(mlinha,1))+" WHERE cod_merc = "+sr_cdbvalue(mcons_tabl[i,6]),,.f.)
		NEXT
        	sr_getconnection():exec("COMMIT",,.f.)
	ENDIF
	mensagem('Verificando se existe TABLOIDES para ser Finalizado...')
	mcons_tabl := {}
	sr_getconnection():exec("SELECT * FROM tabloide WHERE data_final <= "+sr_cdbvalue(mdata)+" AND final IS NULL AND inicio IS NOT NULL",,.t.,@mcons_tabl)
        sr_getconnection():exec('COMMIT',,.f.)
	IF LEN(mcons_tabl) > 0
		mensagem('FINALIZANDO TABLOIDES Aguarde....')
		i:=0
		FOR i = 1 TO LEN(mcons_tabl)
			mcons_merc := {}
			sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcons_tabl[i,6]),,.t.,@mcons_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
			IF LEN(mcons_merc) = 0
        	        	atencao('Produto EXCLUIDO do arquivo: '+mcons_tabl[i,6]+' - '+mcons_tabl[i,7])
				LOOP
			ENDIF
                        mlinha := mcons_merc[1,2]+mcons_merc[1,8]+mcons_merc[1,9]+mcons_merc[1,14]+STRZERO(mcons_merc[1,56]*1000,13)+STRZERO(iat(mcons_tabl[i,10])*100,14)+mcons_merc[1,68]
                	sr_getconnection():exec("UPDATE tabloide SET final = "+sr_cdbvalue(mdata_sis)+" WHERE codigo = "+sr_cdbvalue(mcons_tabl[i,1])+" AND cod_merc = "+sr_cdbvalue(mcons_tabl[i,6]),,.f.)
                	sr_getconnection():exec("UPDATE sacmerc SET pr_venda = "+sr_cdbvalue(mcons_tabl[i,10])+",ul_alt_pr= "+sr_cdbvalue(mdata_sis)+",opera_pr= "+sr_cdbvalue(cod_operado)+",chv_cript = "+sr_cdbvalue(CRIPTO(mlinha,1))+" WHERE cod_merc = "+sr_cdbvalue(mcons_tabl[i,6]),,.f.)
		NEXT
        	sr_getconnection():exec("COMMIT",,.f.)
	ENDIF
ENDDO
RETURN NIL