********************
* 07/04/2009
********************
FUNCTION sacseri2
*****************
LOCAL mprg := 'SACSERI2',opcao,mcaminho,lin,linha,linhas,m_serial:={},;
      m_encontrado:={},cons_seri:={},mobs
PRIVATE mcod_merc:=0

IF ! ver_nivel(mprg,'CONTROLE DE SERIAL (EXPORTACAO POR ARQUIVO)','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

op_tela(05,10,09,91,'CONTROLE DE SERIAL (EXPORTACAO POR ARQUIVO)')
WHILE .T.
        mcod_merc := 0
        mcaminho := mobs := SPACE(60)
        limpa(00,00,33,100)
        DEVPOS(00,00);DEVOUT("Codigo do Produto.:")
        DEVPOS(01,00);DEVOUT("Caminho do Arquivo:")
        DEVPOS(02,00);DEVOUT("Caminho do Arquivo:")
        DEVPOS(03,00);DEVOUT("Quantidade Seriais:")
        @ 00,20 GET mcod_merc PICT '99999' VALID ver_cod(mcod_merc,00,28)
        @ 01,20 GET mobs PICT '@!'
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        WHILE .T.
                setcor(3)
                DEVPOS(03,20);DEVOUT(STRZERO(0,5))
                setcor(1)
                @ 02,20 GET mcaminho PICT '@!' VALID IF(EMPTY(mcaminho),.F.,.T.)
                READ
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                IF ! FILE(ALLTRIM(mcaminho))
                        atencao('Nao foi encontrado o Arquivo no caminho expecificado...')
                        LOOP
                ENDIF
                m_serial := {}
                lin := MEMOLINE(MEMOREAD(ALLTRIM(mcaminho)),20,1,,)
                linhas := linha := 0
                linhas := MLCOUNT(MEMOREAD(ALLTRIM(mcaminho)),20)
                FOR linha = 1 TO  linhas
                        lin := MEMOLINE(MEMOREAD(ALLTRIM(mcaminho)),20,linha,,)
                        AADD(m_serial,ALLTRIM(lin))
                NEXT
                IF LEN(m_serial) = 0
                        atencao('Nao Existe nenhuma Serial para Exportar....')
                        LOOP
                ENDIF
                setcor(3)
                DEVPOS(03,20);DEVOUT(STRZERO(LEN(m_serial),5))
                setcor(1)
                opcao := op_simnao('S','Confirma a Exportacao das Seriais:')
                IF LASTKEY() = 27 .OR. opcao = 'N'
                        LOOP
                ENDIF
                m_encontrado := {}
                i:=0
                FOR i = 1 TO LEN(m_serial)
                        cons_seri := {}
                        cComm  := "SELECT * FROM sacserial WHERE cod_prod = "+sr_cdbvalue(mcod_merc)
                        cComm  := ccomm + " AND serial = "+sr_cdbvalue(m_serial[i])
                        cComm  := ccomm + " AND data_baix IS NULL"
                        sr_getconnection():exec(ccomm,,.t.,@cons_seri)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_seri) > 0
                                atencao('Foi encontrado esta serial: '+m_serial[i]+' ja inclusa neste produto...')
                                AADD(m_encontrado,m_serial[i])
                                LOOP
                        ENDIF
                        sr_getconnection():exec('INSERT INTO sacserial (cod_prod,'+;
                                                                     'serial,'+;
                                                                     'data_incl,'+;
                                                                     'hora_incl,'+;
                                                                     'oper_incl,'+;
                                                                     'obs_incl,'+;
                                                                     'SR_DELETED )'+;
                                                                     ' VALUES ('+;
                                                                      sr_cdbvalue(mcod_merc)+','+; //1
                                                                      sr_cdbvalue(m_serial[i])+','+; //2
                                                                      sr_cdbvalue(mdata_sis)+','+; //3
                                                                      sr_cdbvalue(TIME())+','+; //4
                                                                      sr_cdbvalue(cod_operado)+','+; //5
                                                                      sr_cdbvalue(mobs)+','+; //6
                                                                      sr_cdbvalue(' ')+')',,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                NEXT
        ENDDO
ENDDO


