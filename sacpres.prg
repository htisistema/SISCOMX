MEMVAR getlist,nivel_acess,mdata_sis,cod_operado
*********************************
* LISTA PARA PRESENTE DO CLIENTE
*********************************
FUNCTION sacpres
***************
LOCAL mprg:='SACPRES',mtitulo:='LISTA DE PRESENTE DO CLIENTE',;
      opcao,lci,cci,lba,cba,mdata_cas,mprioridade,mdata_excl

PRIVATE mcod_merc,mcod_cli,mobs,mquantd,cons_cli := {}

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
lci := cci := 0
lba := 05
cba := 89
op_tela(05,10,13,89,mtitulo)
set_key('merc',,,,'*')
WHILE .T.
        limpa(00,00,30,100)
        mensagem('Preencha os Campos - <ESC> p/Retornar ')
        setcor(1)
        DEVPOS(lci  ,cci+1);DEVOUT('Data..........:')
        DEVPOS(lci+1,cci+1);DEVOUT('Codigo Cliente:')
        DEVPOS(lci+2,cci+1);DEVOUT('Data Casamento:')
        @ lci+3,cci TO lci+3,cba
        DEVPOS(lci+4,cci+1);DEVOUT('Codigo Produto:')
        DEVPOS(lci+5,cci+1);DEVOUT('Quantidade....:')
        DEVPOS(lci+6,cci+1);DEVOUT('Prioridade....:')
        DEVPOS(lci+7,cci+1);DEVOUT('Observacao....:')

        mensagem('Digite o codigo do Cliente - <ESC> Abandona ')
        mcod_cli := 0
        mdata_cas := mdata_excl := CTOD('  /  /  ')
        mprioridade := '1'
        setcor(3)
        DEVPOS(lci,cci+19);DEVOUT(mdata_sis)
        setcor(1)
        @ lci+1,cci+19 GET mcod_cli PICT '99999' VALID IF(EMPTY(mcod_cli),.F.,ver_cli(mcod_cli,lci+1,cci+25))
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        cons_alt := {}
        cComm  := "SELECT * FROM sacpresen WHERE codcli = "+sr_cdbvalue(mcod_cli)
        sr_getconnection():exec(ccomm,,.t.,@cons_alt)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_alt) > 0
                mdata_cas := cons_alt[1,11]
        ENDIF
        @ lci+2,cci+19 GET mdata_cas  VALID IF(EMPTY(mdata_cas) .OR. mdata_cas < mdata_sis,.F.,.T.)
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        opcao := op_simnao('S','Confirma o Cliente:')
        IF opcao = 'N' .OR. LASTKEY() = 27
                LOOP
        ENDIF
        sr_getconnection():exec("UPDATE sacpresen SET data_cas = "+sr_cdbvalue(mdata_cas)+" WHERE codcli = "+sr_cdbvalue(mcod_cli),,.f.)
        WHILE .T.
                mprioridade := '1'
                mquantd := 0
                mcod_bc := space(14)
                mmerc := SPACE(40)
                mobs := SPACE(60)
                DEVPOS(lci+4,cci+19);DEVOUT(SPACE(60))
                DEVPOS(lci+5,cci+19);DEVOUT(SPACE(60))
                DEVPOS(lci+6,cci+19);DEVOUT(SPACE(60))
                DEVPOS(lci+7,cci+19);DEVOUT(SPACE(60))
                DEVPOS(lci+8,cci+19);DEVOUT(SPACE(60))
                mensagem('Digite o codigo do Produto ou <ENTER> p/Digitar a Descricao - <ESC> Abandona ')

                @ lci+4,cci+19 GET mcod_bc PICT '@!'                                                                                                                                                                                                                                                                                                                                           
                READ                                                                                                                                                                                                                                                                                                                                                                         
                IF LASTKEY() = 27                                                                                                                                                                                                                                                                                                                                                            
                        EXIT
                ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                IF EMPTY(mcod_bc)
                        mensagem('<Digite descricao mercadoria>  <ENTER>p/retornar  <F4>p/pesquisar')
                        @ lci+4,cci+25 GET mmerc PICT '@!'                                                                                                                                                                                                                                                                                                                                     
                        READ                                                                                                                                                                                                                                                                                                                                                                 
                        IF LASTKEY() = 27;LOOP;ENDIF                                                                                                                                                                                                                                                                                                                                         
                ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                IF EMPTY(mcod_bc) .AND. EMPTY(mmerc)                                                                                                                                                                                                                                                                                                                                         
                        LOOP                                                                                                                                                                                                                                                                                                                                                                 
                ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                cons_merc := {}
                IF ! EMPTY(mcod_bc)                                                                                                                                                                                                                                                                                                                                                          
                        cComm  := "SELECT * FROM sacmerc "
                        IF LEN(RTRIM(mcod_bc)) > 5                                                                                                                                                                                                                                                                                                                                           
                                ccomm := ccomm + " WHERE cod_barr = "+sr_cdbvalue(mcod_bc)
                        ELSE                                                                                                                                                                                                                                                                                                                                                                 
                                ccomm := ccomm + " WHERE cod_merc = "+sr_cdbvalue(STRZERO(VAL(mcod_bc),5))
                        ENDIF                                                                                                                                                                                                                                                                                                                                                                
                        sr_getconnection():exec(ccomm,,.t.,@cons_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_merc) = 0
                                atencao('Codigo da mercadoria nao cadastrado')
                                LOOP
                        ENDIF
                ELSEIF ! EMPTY(mmerc)                                                                                                                                                                                                                                                                                                                                                        
                        *************                                                                                                                                                                                                                                                                                                                                                        
                        SELE('merc');ORDSETFOCUS(3)                                                                                                                                                                                                                                                                                                                                          
                        *************                                                                                                                                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                                                                                                                                                                             
                        IF ! merc->(DBSEEK(RTRIM(mmerc)))
                                atencao('Esta mercadoria nao cadastrada')                                                                                                                                                                                                                                                                                                                    
                                LOOP                                                                                                                                                                                                                                                                                                                                                         
                        ENDIF                                                                                                                                                                                                                                                                                                                                                                
                        IF merc->cod_merc = SPACE(5)                                                                                                                                                                                                                                                                                                                                         
                                WHILE ! EOF() .AND. merc->cod_merc = SPACE(5)                                                                                                                                                                                                                                                                                                                
                                        SKIP                                                                                                                                                                                                                                                                                                                                                 
                                ENDDO                                                                                                                                                                                                                                                                                                                                                        
                        ENDIF                                                                                                                                                                                                                                                                                                                                                                
                        IF EOF() .OR. merc->cod_merc = SPACE(5)                                                                                                                                                                                                                                                                                                                              
                                atencao('Mercadoria nao cadastrada')                                                                                                                                                                                                                                                                                                                         
                                LOOP                                                                                                                                                                                                                                                                                                                                                         
                        ENDIF                                                                                                                                                                                                                                                                                                                                                                
                        IF(m_set[1,93] <> 'A',f4_merc(),f4_merc1())
                        //f4_merc()
                        IF LASTKEY() = 27                                                                                                                                                                                                                                                                                                                                                    
                                LOOP                                                                                                                                                                                                                                                                                                                                                         
                        ENDIF                                                                                                                                                                                                                                                                                                                                                                
                        cComm  := "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(merc->cod_merc)
                        sr_getconnection():exec(ccomm,,.t.,@cons_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_merc) = 0
                                atencao('Codigo da mercadoria nao cadastrado')
                                LOOP
                        ENDIF

                ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                cons_alt := {}
                cComm  := "SELECT * FROM sacpresen WHERE codcli = "+sr_cdbvalue(mcod_cli)+" AND cod_merc = "+sr_cdbvalue(cons_merc[1,8])
                sr_getconnection():exec(ccomm,,.t.,@cons_alt)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_alt) > 0
                        mquantd := cons_alt[1,6]
                        mobs    := cons_alt[1,9]
                        mdata_excl := cons_alt[1,12]
                        mprioridade := IF(EMPTY(cons_alt[1,13]),'1',cons_alt[1,13])
                ENDIF
                setcor(3)                                                                                                                                                                                                                                                                                                                                                                    
                DEVPOS(lci+4,cci+19);DEVOUT(cons_merc[1,8])
                DEVPOS(lci+4,cci+25);DEVOUT(cons_merc[1,9])
                setcor(1)                                                                                                                                                                                                                                                                                                                                                                    
                mensagem('Preencha os campos - <ESC> Abandona ')

                @ lci+5,cci+19 GET mquantd PICT '999,999.999' 
                @ lci+6,cci+19 GET mprioridade PICT '@!'  VALID lim_get() .AND. mprioridade $ '0,1'  WHEN men_get(0,0,'Informe [0] Prioridade ou [1] Sem Prioridade')
                @ lci+7,cci+19 GET mobs
                READ                                                                                                                                                                                                                                                                                                                                                                         
                IF LASTKEY() = 27                                                                                                                                                                                                                                                                                                                                                            
                        LOOP                                                                                                                                                                                                                                                                                                                                                                 
                ENDIF                                                                                                                                                                                                                                                                                                                                                                        
                IF LEN(cons_alt) = 0
                        opcao := op_simnao('S','Confirma a Inclusao do Produto:')
                        IF opcao = 'N' .OR. LASTKEY() = 27
                                LOOP
                        ENDIF
                        cComm  := "INSERT INTO sacpresen (data,codcli,cod_merc,descri,"
                        ccomm  := ccomm + "qtd,obs,data_cas,prioridade,sr_deleted)"
        		ccomm  := ccomm + " VALUES ("+sr_cdbvalue(mdata_sis)+","+sr_cdbvalue(mcod_cli)
                        ccomm  := ccomm + ","+sr_cdbvalue(cons_merc[1,8])+","+sr_cdbvalue(cons_merc[1,9])+","+sr_cdbvalue(mquantd)+","+sr_cdbvalue(mobs)+","+sr_cdbvalue(mdata_cas)+","+sr_cdbvalue(mprioridade)+",' ')"
                        sr_getconnection():exec(ccomm,,.f.)
                ELSEIF mquantd >0
                        DEVPOS(lci+8,cci+1);DEVOUT('Data Excluido.:')
                        @ lci+8,cci+19 GET mdata_excl
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        opcao := op_simnao('S','Confirma a Alteracao do Produto:')
                        IF opcao = 'N'
                                LOOP
                        ENDIF
                        sr_getconnection():exec("UPDATE sacpresen SET qtd = "+sr_cdbvalue(mquantd)+",obs = "+sr_cdbvalue(mobs)+",excluido = NULL,prioridade = "+sr_cdbvalue(mprioridade)+" WHERE cod_merc = "+sr_cdbvalue(cons_merc[1,8])+" AND codcli = "+sr_cdbvalue(mcod_cli),,.f.)
                ELSE
                        DEVPOS(lci+8,cci+1);DEVOUT('Data Excluido.:')
                        setcor(3)
                        DEVPOS(lci+8,cci+19);DEVOUT(mdata_sis)
                        setcor(1)
                        opcao := op_simnao('N','Confirma a Exclusao do Produto:')
                        IF opcao = 'N'
                                LOOP
                        ENDIF
                        sr_getconnection():exec("UPDATE sacpresen SET excluido = "+sr_cdbvalue(mdata_sis)+" WHERE cod_merc = "+sr_cdbvalue(cons_merc[1,8])+" AND codcli = "+sr_cdbvalue(mcod_cli),,.f.)
                ENDIF
                sr_getconnection():exec('COMMIT',,.f.)
        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** FIM ***************************

