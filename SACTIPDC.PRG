MEMVAR getlist,nivel_acess
********************************
* CADASTRO DE TIPO DE DOCUMENTO
********************************
FUNCTION sactipdc(mconsulta)
*****************
LOCAL MPRG:='SACTIPDC',mtitulo:='CADASTRO DE TIPOS DOS DOCUMENTOS',;
      men,opcao,f,cons_tpdoc := {},cons_tip := {}

PRIVATE mtipo_dc,mdescri
IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
op_tela(01,10,49,45,'CADASTRO DE TIPOS DOS DOCUMENTOS',,1)
DEVPOS(1,2);DEVOUT('Cod.')
DEVPOS(1,09);DEVOUT('Descricao')
@ 2,00 TO 2,45
point := 0
WvW_PBSetFont( NIL, 'TIMES', 20, 7,)
ninclu  := wvw_pbCreate(NIL, 45,10, 48,21,'Inclusao',,{||sactipdc_incl()})
WVW_PBEnable( NIL, ninclu, .T. )
WHILE .T.
        cons_tpdoc := {}
        m_tip := {}
        m_demo := {}
        sr_getconnection():exec("SELECT tipo_doc,descri FROM sactipdc ORDER BY tipo_doc" ,,.t.,@cons_tpdoc)
        sr_getconnection():exec('COMMIT',,.f.)
        //atencao( sr_ShowVector( cons_tpdoc ))
        //atencao(str(LEN(cons_tpdoc),9))
        IF LEN(cons_tpdoc) > 0
                f := 0
                FOR f = 1 TO LEN(cons_tpdoc)
                        //atencao(' Tipo: '+cons_tpdoc[f,1]+' Descricao: '+cons_tpdoc[f,2]+' '+str(LEN(cons_tpdoc),9)+' '+str(f,5))
                        AADD(m_tip,{cons_tpdoc[f,1],cons_tpdoc[f,2]})
                        AADD(m_demo,' '+cons_tpdoc[f,1]+'     '+cons_tpdoc[f,2])
                NEXT
        ENDIF
        mensagem('<ENTER> Alteracao <ESC> Retorna')
        opcao := 'S'
        setcor(10);point := ACHOICE(3,1,44,45,m_demo,,,point);setcor(1)
        DO CASE
                CASE LASTKEY()=13
                        IF mconsulta <> NIL
                                mtipo_doc := m_tip[point,1]
                                wvw_lclosewindow()
                                RETURN mtipo_doc
                        ELSE
                        op_tela(10,10,12,55,' Alteracao Tipo de Documentos ')
                        WHILE .T.
                                mensagem('Digite o Codigo da Despesa a ser Alterado - <ESC> p/Retornar')
                                mtipo_dc := m_tip[point,1]
                                mdescri := m_tip[point,2]
                                DEVPOS(1,0);DEVOUT('Cod.:')
                                DEVPOS(1,15);DEVOUT('Descricao:')
                                @ 1,8 GET mtipo_dc PICT '@!'
                                READ
                                IF LASTKEY() = 27
                                        wvw_lclosewindow()
                                        EXIT
                                ENDIF
                                @ 1,26 GET mdescri PICT '@!'
                                READ
                                IF LASTKEY() = 27 .OR. EMPTY(mdescri)
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma Alteracao:')
                                IF opcao = 'S'
                                        sr_getconnection():exec("UPDATE sactipdc SET tipo_doc = "+sr_cdbvalue(mtipo_dc)+",descri = "+sr_cdbvalue(mdescri)+" WHERE tipo_doc = "+sr_cdbvalue(mtipo_dc),,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                ENDIF
                                wvw_lclosewindow()
                                EXIT
                        ENDDO
                        
                        ENDIF
                CASE LASTKEY()=27
                        wvw_lclosewindow()
                        RELEASE tela,point,men,;
                                opcao,mtipo_dc,mdescri,f
                        RETURN NIL
                CASE LASTKEY() = ASC('E') .OR. LASTKEY() = ASC('e')
                        op_tela(10,10,12,55,' Exclusao Especie de produto ')
                        WHILE .T.
                                mensagem('Digite o Codigo da Despesa a ser Excluida - <ESC> p/Retornar')
                                mtipo_dc := '  '
                                mdescri := SPACE(15)
                                DEVPOS(1,0);DEVOUT('Cod.:')
                                DEVPOS(1,15);DEVOUT('Descricao:')
                                @ 1,8 GET mtipo_dc PICT '@!'
                                READ
                                IF LASTKEY() = 27
                                        wvw_lclosewindow()
                                        EXIT
                                ENDIF
                                cons_tip := {}
                                sr_getconnection():exec("SELECT * FROM sactipdc WHERE tipo_doc = "+sr_cdbvalue(mtipo_dc),,.t.,@cons_tip)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_tip) = 0
                                        atencao('Tipo de Documento nao Cadastrado !!!')
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(1,8);DEVOUT(mtipo_dc)
                                DEVPOS(1,26);DEVOUT(cons_tip[1,2])
                                setcor(1)
                                opcao := op_simnao('S','Confirma Exclusao:')
                                IF opcao = 'S'
                                        sr_getconnection():exec("DELETE FROM sactipdc WHERE tipo_doc ="+sr_cdbvalue(mtipo_dc),,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                ENDIF
                                wvw_lclosewindow()
                                EXIT
                        ENDDO
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** f i m *******************************************
FUNCTION sactipdc_incl()
************************
mtipo_dc := '  '
mdescri := SPACE(15)
op_tela(10,10,12,55,' Inclusao Tipo de Documento ')
mensagem('Digite o Tipo faca a descricao - <ESC> p/Retornar')
DEVPOS(1,0);DEVOUT('Cod.:')
DEVPOS(1,15);DEVOUT('Descricao:')
@ 1,8 GET mtipo_dc PICT '@!' VALID ver_tipdc(mtipo_dc)
@ 1,26 GET mdescri PICT '@!'
READ
IF LASTKEY() = 27 .OR. EMPTY(mdescri)
        wvw_lclosewindow()
        RETURN NIL
ENDIF
opcao := op_simnao('S','Confirma Inclusao:')
wvw_lclosewindow()
IF opcao = 'S'
        sr_getconnection():exec('INSERT INTO sactipdc (tipo_doc,descri,SR_DELETED)'+;
                                ' VALUES ('+;
                                sr_cdbvalue(mtipo_dc)+','+; //1
                                sr_cdbvalue(mdescri)+','+;
                                sr_cdbvalue(' ')+")",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
KEYBOARD CHR(19)
RETURN NIL








