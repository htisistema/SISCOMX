****************************
* ATUALIZAR O ARQUIVO SACMOVNT
****************************
FUNCTION sacmovnt
**************
LOCAL MPRG:='SACMOVNT',mtitulo:='ATUALIZACAO DO ARQUIVO SACMOVNT',;
      lci,cci,lba,cba,opcao,cons_merc:={},cons_movnt:={},mdata

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := cci := 0
lba := 21
cba := 90
*----------------------------------------------------------------------------
op_tela(03,02,13,90,mtitulo,,'1')
WHILE .T.
        exibi_prg(mprg)
        mcont_01:=0;mcont_02:=0;mcont_03:=0;mcont_04:=0;mcont_07:=0
        mdata := CTOD('  /  /  ')
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(lci+1,cci+1);DEVOUT('Apartir Data...:')
        DEVPOS(lci+2,cci+1);DEVOUT('Data Emissao...:')
        DEVPOS(lci+3,cci+1);DEVOUT('Documento......:')
        DEVPOS(lci+4,cci+1);DEVOUT('Fornecedor.....:')
        DEVPOS(lci+5,cci+1);DEVOUT('Produto........:')
        @ lci+1,cci+18 GET mdata 
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        opcao := op_simnao('N','Confirma a Atualizacao dos PRODUTOS:')
        IF opcao = 'N' .OR. LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
	cons_movnt:={}
        cComm  := "SELECT * FROM sacmovnt WHERE data_s_e > "+sr_cdbvalue(mdata)+" AND documento LIKE 'NF%' ORDER BY data_s_e"
        sr_getconnection():exec(ccomm,,.t.,@cons_movnt)
        sr_getconnection():exec('COMMIT',,.f.)
	IF LEN(cons_movnt) > 0
	        i:=0
	        FOR i = 1 TO LEN(cons_movnt)
                	cons_merc:={}
                        cComm  := "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(cons_movnt[i,11])
                        sr_getconnection():exec(ccomm,,.t.,@cons_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_merc) = 0
                                LOOP
                        ENDIF
	                DEVPOS(lci+2,cci+18);DEVOUT(cons_movnt[i,17])
                        DEVPOS(lci+3,cci+18);DEVOUT(cons_movnt[i,3])
                        DEVPOS(lci+4,cci+18);DEVOUT(cons_movnt[i,31]+' - '+cons_movnt[i,32])
                        DEVPOS(lci+5,cci+18);DEVOUT(cons_movnt[i,11]+' - '+cons_movnt[i,12])
                        IF cons_movnt[i,80] = 0  // vlr_icm
                                IF cons_merc[1,72] > 0
                                        sr_getconnection():exec("UPDATE sacmovnt SET vlr_icm = "+sr_cdbvalue(iat((cons_movnt[i,38]/100) * (((cons_movnt[i,22] * cons_movnt[i,19])*cons_merc[1,72])),2))+" WHERE codigo = "+sr_cdbvalue(cons_merc[1,8])+" AND documento = "+sr_cdbvalue(cons_movnt[i,3]),,.f.)
                                ELSE
                                        sr_getconnection():exec("UPDATE sacmovnt SET vlr_icm = "+sr_cdbvalue(iat((cons_movnt[i,38]/100) * (cons_movnt[i,22] * cons_movnt[i,19]),2))+" WHERE codigo = "+sr_cdbvalue(cons_merc[1,8])+" AND documento = "+sr_cdbvalue(cons_movnt[i,3]),,.f.)
                                ENDIF
                        ENDIF
                        IF cons_movnt[i,81] = 0  // base_icm
                                IF cons_merc[1,72] > 0
                                        sr_getconnection():exec("UPDATE sacmovnt SET base_icm = "+sr_cdbvalue(iat(((cons_movnt[i,22] * cons_movnt[i,19])*cons_merc[1,72]),2))+" WHERE codigo = "+sr_cdbvalue(cons_merc[1,8])+" AND documento = "+sr_cdbvalue(cons_movnt[i,3]),,.f.)
                                ELSE
                                        sr_getconnection():exec("UPDATE sacmovnt SET base_icm = "+sr_cdbvalue(iat((cons_movnt[i,22] * cons_movnt[i,19]),2))+" WHERE codigo = "+sr_cdbvalue(cons_merc[1,8])+" AND documento = "+sr_cdbvalue(cons_movnt[i,3]),,.f.)
                                ENDIF
                        ENDIF
		NEXT
		sr_getconnection():exec("COMMIT",,.f.)
	ENDIF
ENDDO
