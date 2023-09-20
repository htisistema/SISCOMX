*****************************************
* VERIFICA O(S) SALDO(S) PRODUTO(S)
*****************************************
FUNCTION sacbal4(mprod,mtp_cons)
********************************
LOCAL mprg:='SACBAL4',;
      lba:=22,cba:=99,li:=0,ci:=0,lb:=20,cb:=100,;
      la:=0,ca:=0,ll:=06,cc:=90,i:=0,y:=0,;
      mtot_ent:=0,mtot_sai:=0,mopcao:=' ',point:=0,;
      mpag,mtraco:=REPLI('-',132),mtit,mtipo,mcons_mov:={},;
      msaldo,cons_merc:={},mcons_log:={},msaldo_aux:=0,mdif:=' ',m_produto:={},;
      m_prod_dif:={},m_log:={},mponto:=0

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcod_merc:=0
IF mtp_cons = NIL
        op_tela(10,10,13,75,' Verificao movimento deste PRODUTO arquivo de LOG')
ELSE
        op_tela(10,10,13,75,' Verificao movimento deste PRODUTO arquivo de LOG Fiscal')
ENDIF
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        exibi_prg(mprg)
        IF mprod <> NIL
                m_log:={}
                mponto:=0
                mtot_ent:=mtot_sai:=mtot_ped:=mdif_saldo:=0
                DEVPOS(0,0);DEVOUT('Produto......:')
                DEVPOS(1,0);DEVOUT('Data Inicial.:')
                DEVPOS(2,0);DEVOUT('Data Final...:')
                cons_merc := {}
                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mprod),,.t.,@cons_merc)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_merc) = 0
                        atencao('Nao possivel encontra este PRODUTO')
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                setcor(3)
                DEVPOS(0,15);DEVOUT(cons_merc[1,8]+'-'+cons_merc[1,9])
                mdata_ini := mdata_final := CTOD('  /  /  ')
                setcor(1)
                @ 1,15 GET mdata_ini VALID  lim_get() WHEN men_get(0,0,'Preencha a Data ou deixe em branco para ver Tudo')
                @ 2,15 GET mdata_final VALID IF(mdata_final < mdata_ini,.F.,.T.) WHEN ! EMPTY(mdata_ini)
                READ
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
/*
                DEVPOS(0,1);DEVOUT('  Data     Hora    Saldo Ant.  Quantidade  Saldo Pos.  Ope  Processo                        Ent/Sai')
                @ 1,cci TO 1,100
                @ lba,cci TO lba,100
                DEVPOS(lba+1,1);DEVOUT('Produto:')
                DEVPOS(lba+2,1);DEVOUT('Data do Inicio.......:')
                DEVPOS(lba+3,1);DEVOUT('Movimento Entradas...:')
                DEVPOS(lba+4,1);DEVOUT('Movimento Saidas.....:')
                DEVPOS(lba+6,1);DEVOUT('Total Entrada - Saida:')
                DEVPOS(lba+7,1);DEVOUT('Saldo Encontrado.....:')
                DEVPOS(lba+8,1);DEVOUT('Saldo Atual..........:')
                DEVPOS(lba+10,1);DEVOUT('Diferenca de SALDO...:')
*/
                mcons_log := {}
                m_log := {}
                IF mtp_cons = NIL
                        ccomm := "SELECT * FROM logproduto WHERE cod_prod = "+sr_cdbvalue(mprod)
                ELSE
                        ccomm := "SELECT * FROM logprod_fis WHERE cod_prod = "+sr_cdbvalue(mprod)
                ENDIF
                IF ! EMPTY(mdata_ini)
                        ccomm := ccomm + " AND data >= "+sr_cdbvalue(mdata_ini) + " AND  data <= "+ sr_cdbvalue(mdata_final)
                ENDIF                        
                ccomm := ccomm + " ORDER BY data_sis,hora"
                sr_getconnection():exec(ccomm,,.t.,@mcons_log)
                sr_getconnection():exec('COMMIT',,.f.)
                mdif := ' '
                IF LEN(mcons_log) > 0
                        IF ! imp_arq('LOG_PROD.REL','R')
                                LOOP
                        ENDIF
                        msaldo := mcons_log[LEN(mcons_log),7]
                        msaldo_aux := mcons_log[1,7]
                        i:= mpag := 0
                        IF mtp_cons = NIL
                                mtit := 'Relatorio movimento PRODUTO arquivo de LOG'
                        ELSE
                                mtit := 'Relatorio movimento PRODUTO arquivo de LOG-F'
                        ENDIF
                        mtipo := 'Produto: '+cons_merc[1,8]+'-'+cons_merc[1,9]
                        FOR i = 1 TO LEN(mcons_log)
                                IF mpag = 0 .OR. PROW() >= 59
                                        mpag ++
                                        IF mpag > 1
                                                EJECT
                                        ENDIF
                                        cabecalho(mpag,mtit,mtipo,mprg)
                                        imprt(mtipo_imp,'C')
                                	DEVPOS(PROW()+1,00);DEVOUT('  Data     Hora    Saldo Ant.  Quantidade  Saldo Pos.  Ope  Processo                        Ent/Sai')
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ENDIF
                                DEVPOS(PROW()+1,00);DEVOUT(DTOC(mcons_log[i,1])+' '+mcons_log[i,3]+'  '+TRANSFORM(mcons_log[i,6],'999,999.99')+'  '+IF(mcons_log[i,12] = 'S',TRANSFORM(mcons_log[i,5]*-1,'999,999.99'),TRANSFORM(mcons_log[i,5],'999,999.99'))+'  '+TRANSFORM(mcons_log[i,7],'999,999.99')+'  '+mcons_log[i,8]+'  '+mcons_log[i,11]+'  '+mcons_log[i,12])
                                IF msaldo_aux <> mcons_log[i,6]
                                        mdif := '*'
                                ENDIF
                                msaldo_aux := mcons_log[i,7]
                                IF mcons_log[i,12] = 'E'
                                        mtot_ent := mtot_ent + mcons_log[i,5]
                                ELSEIF mcons_log[i,12] = 'S'
                                        mtot_sai := mtot_sai + mcons_log[i,5]
                                ENDIF
                        NEXT
/*
                        AADD(m_log,DTOC(mcons_log[1,1])+' '+mcons_log[1,3]+'  '+TRANSFORM(mcons_log[1,6],'999,999.99')+'  '+IF(mcons_log[1,12] = 'S',TRANSFORM(mcons_log[1,5]*-1,'999,999.99'),TRANSFORM(mcons_log[1,5],'999,999.99'))+'  '+TRANSFORM(mcons_log[1,7],'999,999.99')+'  '+mcons_log[1,8]+'  '+mcons_log[1,11]+'  '+mcons_log[1,12])
                        msaldo := mcons_log[LEN(mcons_log),7]
                        msaldo_aux := mcons_log[1,7]
                        i:=1
                        FOR i = 2 TO LEN(mcons_log)
                                AADD(m_log,DTOC(mcons_log[i,1])+' '+mcons_log[i,3]+'  '+TRANSFORM(mcons_log[i,6],'999,999.99')+'  '+IF(mcons_log[i,12] = 'S',TRANSFORM(mcons_log[i,5]*-1,'999,999.99'),TRANSFORM(mcons_log[i,5],'999,999.99'))+'  '+TRANSFORM(mcons_log[i,7],'999,999.99')+'  '+mcons_log[i,8]+'  '+mcons_log[i,11]+'  '+mcons_log[i,12])
                                IF msaldo_aux <> mcons_log[i,6]
                                        mdif := '*'
                                ENDIF
                                msaldo_aux := mcons_log[i,7]
                        NEXT
*/
                ELSE
                        atencao('Nao existe movimento deste PRODUTO no arquivo de LOG')
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                DEVPOS(PROW()+1,0);DEVOUT('Movimento Entradas...:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_ent,'999,999.999'))
                DEVPOS(PROW()+1,0);DEVOUT('Movimento Saidas.....:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_sai,'999,999.999'))
                DEVPOS(PROW()+1,0);DEVOUT('                       -----------')
                DEVPOS(PROW()+1,0);DEVOUT('Total Entrada - Saida:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_ent-mtot_sai,'999,999.999'))
                DEVPOS(PROW()+1,0);DEVOUT('Saldo Encontrado.....:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(msaldo,'999,999.999'))
                IF mtp_cons = NIL
                        DEVPOS(PROW()+1,0);DEVOUT('Saldo Atual..........:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(cons_merc[1,56],'999,999.999'))
                        DEVPOS(PROW()+1,0);DEVOUT('                       -----------')
                        DEVPOS(PROW()+1,0);DEVOUT('Diferenca de SALDO...:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(cons_merc[1,56] - msaldo,'999,999.999'))
                ELSE
                        DEVPOS(PROW()+1,0);DEVOUT('Saldo Atual..........:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(cons_merc[1,55],'999,999.999'))
                        DEVPOS(PROW()+1,0);DEVOUT('                       -----------')
                        DEVPOS(PROW()+1,0);DEVOUT('Diferenca de SALDO...:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(cons_merc[1,55] - msaldo,'999,999.999'))
                ENDIF

                DEVPOS(PROW()+2,0);DEVOUT(TIME())
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao('LOG_PROD.REL')
                wvw_lclosewindow()
                RETURN NIL
        ELSE    // VERIFICA TODOS OS PRODUTOS
                mgrupo := msub_grupo := mcod_espe := mqtd_dif := mcod_merc := 0
                op_tela(02,00,26,100,' Opcoes de Filtragem ')
                DEVPOS(0,1);DEVOUT('Codigo Produto.:')
                DEVPOS(1,1);DEVOUT('Codigo Grupo...:')
                DEVPOS(2,1);DEVOUT('Cod.Sub-Grupo..:')
                DEVPOS(3,1);DEVOUT('Cod.Especie....:')
                @ 4,0 TO 4,cba
                DEVPOS(5,1);DEVOUT('Produto:')
                DEVPOS(6,1);DEVOUT('Data do Inicio.......:')
                DEVPOS(7,1);DEVOUT('Movimento Entradas...:')
                DEVPOS(8,1);DEVOUT('Movimento Saidas.....:')
                DEVPOS(9,1);DEVOUT('Total Entrada - Saida:')
                DEVPOS(10,1);DEVOUT('Saldo Encontrado.....:')
                DEVPOS(11,1);DEVOUT('Saldo Atual..........:')
                DEVPOS(12,1);DEVOUT('Diferenca de SALDO...:')
                @ 0,19 GET mcod_merc PICT '99999' VALID ver_cod(mcod_merc,0,25,,0)
                @ 1,19 GET mgrupo PICT '999' VALID IF(EMPTY(mgrupo),.T.,ver_gru(@mgrupo,1,23,.F.))
                @ 2,19 GET msub_grupo PICT '99' WHEN ! EMPTY(mgrupo) VALID IF(EMPTY(msub_grupo),.T.,ver_sgru(mgrupo,msub_grupo,2,22))
                @ 3,19 GET mcod_espe PICT '9999' VALID ver_espe(mcod_espe,3,23,,0)
                READ
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                mopcao := 'S'
                mopcao := op_simnao('S','Confirma a Verificacao:')
                IF mopcao = 'N'
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                point := 0
                mensagem('Coletanto dados arquivo PRODUTO...')
                cComm  := "SELECT * FROM sacmerc WHERE disp = 'S'"
                IF ! EMPTY(mcod_espe)
                        ccomm := ccomm + " AND especie = "+sr_cdbvalue(STRZERO(mcod_espe,4))
                ENDIF
                IF ! EMPTY(mgrupo)
                        ccomm := ccomm + " AND gru_sub LIKE "+sr_cdbvalue(STRZERO(mgrupo,3)+'%')
                ENDIF
                IF ! EMPTY(msub_grupo)
                        ccomm := ccomm + " AND gru_sub = "+sr_cdbvalue(STRZERO(mgrupo,3)+STRZERO(msub_grupo,2))
                ENDIF
                IF ! EMPTY(mcod_merc)
                        ccomm := ccomm + " AND cod_merc = "+sr_cdbvalue(mcod_merc)
                ENDIF
                ccomm := ccomm + " ORDER BY merc"
                mcons_merc := {}
                sr_getconnection():exec(ccomm,,.t.,@mcons_merc)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(mcons_merc) = 0
                        atencao('Nao tem nenhum PRODUTO no arquivo com essas condicoes...')
                        wvw_lclosewindow()
                        LOOP
                ENDIF
                i:=0
                FOR i = 1 TO LEN(mcons_merc)
                        prog_imp(i,mcons_merc[i,8]+'-'+mcons_merc[i,9])
                        mtot_ent:=mtot_sai:=0
                        IF mtp_cons = NIL
                                cComm  := "SELECT * FROM logproduto WHERE cod_prod = "+sr_cdbvalue(mcons_merc[i,8])
                        ELSE
                                cComm  := "SELECT * FROM logprod_fis WHERE cod_prod = "+sr_cdbvalue(mcons_merc[i,8])
                        ENDIF
                        ccomm := ccomm + " ORDER BY data_sis,hora"
                        mcons_log := {}
                        sr_getconnection():exec(ccomm,,.t.,@mcons_log)
                        sr_getconnection():exec('COMMIT',,.f.)
                        mdif := ' '
                        IF LEN(mcons_log) > 0
                                msaldo := mcons_log[LEN(mcons_log),7]
                                msaldo_aux := mcons_log[1,7]
                                y:=1
                                FOR y = 2 TO LEN(mcons_log)
                                        IF msaldo_aux <> mcons_log[y,6]
                                                mdif := '*'
                                        ENDIF
                                        msaldo_aux := mcons_log[y,7]
                                NEXT
                        ELSE
                                LOOP
                        ENDIF
                        IF mdif = ' '
                                LOOP
                        ENDIF
                        setcor(3)
                        IF mtp_cons = NIL
                                cComm  := "SELECT SUM(quantd) FROM logproduto WHERE cod_prod = "+sr_cdbvalue(mcons_merc[i,8])
                        ELSE
                                cComm  := "SELECT SUM(quantd) FROM logprod_fis WHERE cod_prod = "+sr_cdbvalue(mcons_merc[i,8])
                        ENDIF
                        ccomm := ccomm + " AND ent_sai = 'E'"
                        mcons_mov := {}
                        sr_getconnection():exec(ccomm,,.t.,@mcons_mov)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(mcons_mov) > 0
                                mtot_ent := mcons_mov[1,1]
                        ENDIF
                        IF mtp_cons = NIL
                                cComm  := "SELECT SUM(quantd) FROM logproduto WHERE cod_prod = "+sr_cdbvalue(mcons_merc[i,8])
                        ELSE
                                cComm  := "SELECT SUM(quantd) FROM logprod_fis WHERE cod_prod = "+sr_cdbvalue(mcons_merc[i,8])
                        ENDIF
                        ccomm := ccomm + " AND ent_sai = 'S'"
                        mcons_mov := {}
                        sr_getconnection():exec(ccomm,,.t.,@mcons_mov)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(mcons_mov) > 0
                                mtot_sai := mcons_mov[1,1]
                        ENDIF
                        setcor(3)
                        DEVPOS(5,10);DEVOUT(mcons_merc[i,8]+'-'+mcons_merc[i,9])
                        //DEVPOS(14,24);DEVOUT(TRANSFORM(mcons_merc[i,56],'999,999.999'))
                        IF mtp_cons = NIL
                                AADD(m_produto,mcons_merc[i,8]+' '+LEFT(mcons_merc[i,9],10)+'  '+TRANSFORM(mtot_ent,'99,999.999')+'  '+TRANSFORM(mtot_sai,'99,999.999')+'  '+TRANSFORM(mtot_ent-mtot_sai,'99,999.999')+'  '+TRANSFORM(msaldo,'99,999.999')+'  '+TRANSFORM(mcons_merc[i,56],'99,999.999')+'  '+TRANSFORM(mcons_merc[i,56]-msaldo,'99,999.999')+' '+mdif)
                        ELSE
                                AADD(m_produto,mcons_merc[i,8]+' '+LEFT(mcons_merc[i,9],10)+'  '+TRANSFORM(mtot_ent,'99,999.999')+'  '+TRANSFORM(mtot_sai,'99,999.999')+'  '+TRANSFORM(mtot_ent-mtot_sai,'99,999.999')+'  '+TRANSFORM(msaldo,'99,999.999')+'  '+TRANSFORM(mcons_merc[i,55],'99,999.999')+'  '+TRANSFORM(mcons_merc[i,55]-msaldo,'99,999.999')+' '+mdif)
                        ENDIF
                        //AADD(m_prod_dif,{mcons_merc[i,8],0,0,0,0,CTOD('  /  /  '),' ','SEM BALANCO'})
                NEXT
                IF EMPTY(m_produto)
                        atencao('Nao foi encontrado nenhum PRODUTO c/difirenca no SALDO')
                        wvw_lclosewindow()
                ELSE
                        mtela1:= SAVESCREEN(00,00,24,79)
                        op_tela(00,00,30,100,' Produtos com Diferenca de Saldo ')
                        DEVPOS(1,1);DEVOUT('PROD.             Qtd.Entr.   Qtd.Saida   Sld.Prod.  Difrenca')
                        @ 2,0 TO 2,100
                        WHILE .T.
                                setcor(1)
                                CLEAR TYPEAHEAD
                                mensagem("<ENTER>p/Ajustar - <CTRL+S> Ajustar Produto ou Imprimir ")
                                setcor(10);point := ACHOICE(3,1,30,100,m_produto,,,point);setcor(1)
                                DO CASE
                                        CASE LASTKEY()=27
                                                //wvw_lclosewindow()
                                                EXIT
                                        CASE LASTKEY() = 13
                                                IF mtp_cons = NIL
                                                        cComm  := "SELECT * FROM logproduto WHERE cod_prod = "+sr_cdbvalue(SUBSTR(m_produto[point],1,5))
                                                ELSE
                                                        cComm  := "SELECT * FROM logprod_fis WHERE cod_prod = "+sr_cdbvalue(SUBSTR(m_produto[point],1,5))
                                                ENDIF
                                                ccomm := ccomm + " ORDER BY data_sis,hora"
                                                mcons_log := {}
                                                sr_getconnection():exec(ccomm,,.t.,@mcons_log)
                                                sr_getconnection():exec('COMMIT',,.f.)
                                                mdif := ' '
                                                IF LEN(mcons_log) > 0
                                                        msaldo_aux := mcons_log[1,7]
                                                        y:=1
                                                        FOR y = 2 TO LEN(mcons_log)
                                                                mdif := ' '
                                                                IF msaldo_aux <> mcons_log[y,6]
                                                                        mdif := '*'
                                                                ENDIF
                                                                AADD(m_prod_dif,DTOC(mcons_log[y,2])+'  '+mcons_log[y,3]+'  '+mcons_log[y,4]+'  '+TRANSFORM(mcons_log[y,6],'99,999.999')+'  '+TRANSFORM(mcons_log[y,5],'99,999.999')+'  '+TRANSFORM(mcons_log[y,7],'99,999.999')+'  '+mcons_log[y,12]+' '+mcons_log[y,9]+' '+mcons_log[y,10]+' '+mdif)
                                                        NEXT
                                                ELSE
                                                        LOOP
                                                ENDIF
                                                op_tela(00,00,30,100,' Produtos com Diferenca de Saldo ')
                                                DEVPOS(1,1);DEVOUT('PROD.   Data   Hora  Sld.Ante.  Quantidade Sld.Post. Programa  Dif')
                                                @ 2,0 TO 2,100
                                                point := 0
                                                WHILE .T.
                                                        setcor(1)
                                                        CLEAR TYPEAHEAD
                                                        mensagem("<ENTER>p/Ajustar - <CTRL+S> Ajustar Produto ou Imprimir ")
                                                        setcor(10);point := ACHOICE(3,1,30,100,m_prod_dif,,,point);setcor(1)
                                                        DO CASE
                                                                CASE LASTKEY()=27
                                                                wvw_lclosewindow()
                                                                EXIT
                                                        ENDCASE
                                                ENDDO
                                ENDCASE
                        ENDDO
                        wvw_lclosewindow()
                        wvw_lclosewindow()
                ENDIF
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
