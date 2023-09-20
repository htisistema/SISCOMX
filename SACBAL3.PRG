*****************************************
* VERIFICA O(S) SALDO(S) PRODUTO(S)
*****************************************
FUNCTION sacbal3(mprod)
***********************
LOCAL mprg:='SACBAL3',;
      lba:=15,cba:=90,lb:=20,cb:=100,;
      la:=0,ca:=0,ll:=06,cc:=90,mtela,mtela1,mtela2,i:=0,mqtd_dif:=0,;
      mbalanco:=' ',mtot_ent:=0,mtot_sai:=0,mtot_ped:=0,mopcao:=' ',mdif_saldo:=0,;
      m_prod_dif:={},m_prod_sbl:={},m_produto:={},m_movimento:={},point:=0,mgrupo,msub_grupo,mcod_espe,;
      mpag,mtraco:=REPLI('-',132),mtit,mtipo,mmov_e:={},mmov_s:={},mcons_ped:={},mcons_mov:={},;
      mdata,moperador,msaldo,mdoc,mcons_merc:={},mdata_cad,mdata_1,aret:={}

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)
RETURN NIL
IF ! AbriArq('sacbalan','balan');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
IF ! AbriArq('sacespe','espe');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF

WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        exibi_prg(mprg)
        IF mprod <> NIL
                mtot_ent:=mtot_sai:=mtot_ped:=mdif_saldo:=0
                op_tela(07,02,20,70,' Verificao do movimento deste PRODUTO ')
                DEVPOS(1,1);DEVOUT('Produto:')
                DEVPOS(2,1);DEVOUT('Data do Balanco......:              Operador.:')
                DEVPOS(3,1);DEVOUT('Saldo do Balanco.....:              Documento:')
                DEVPOS(4,1);DEVOUT('Quantidade Entradas..:')
                DEVPOS(5,1);DEVOUT('Quantidade Saidas....:')
                DEVPOS(6,1);DEVOUT('Quantd.Pedidos Aberto:')
                DEVPOS(8,1);DEVOUT('Saldo Encontrado.....:')
                DEVPOS(9,1);DEVOUT('Saldo Atual..........:')
                DEVPOS(11,1);DEVOUT('Diferenca de SALDO...:')
                ****************************
                SELE('merc');ORDSETFOCUS(1)
                GO TOP
                ****************************
                IF ! merc->(DBSEEK(mprod))
                        atencao('Nao possivel encontra este PRODUTO')
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                setcor(3)
                DEVPOS(1,10);DEVOUT(merc->cod_merc+'-'+merc->merc)
                DEVPOS(4,24);DEVOUT(TRANSFORM(0,'999,999.999'))
                DEVPOS(5,24);DEVOUT(TRANSFORM(0,'999,999.999'))
                DEVPOS(6,24);DEVOUT(TRANSFORM(0,'999,999.999'))
                DEVPOS(7,1);DEVOUT('                       -----------')
                DEVPOS(8,24);DEVOUT(TRANSFORM(0,'999,999.999'))
                DEVPOS(9,24);DEVOUT(TRANSFORM(merc->saldo_mer,'999,999.999'))
                DEVPOS(10,1);DEVOUT('                       -----------')
                DEVPOS(11,24);DEVOUT(TRANSFORM(0,'999,999.999'))

                cComm  := "SELECT * FROM sacmov WHERE codigo = "+sr_cdbvalue(mprod)
                ccomm := ccomm + " AND data_s_e = "+sr_cdbvalue(merc->data_cad)
                ccomm := ccomm + " AND (cancel IS NULL OR cancel = ' ')"
                ccomm := ccomm + " AND NOT tipo = '03'"
                ccomm := ccomm + " AND ent_sai = 'E'"
                mcons_mov := {}
                sr_getconnection():exec(ccomm,,.t.,@mcons_mov)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(mcons_mov) = 0
                        ****************************
                        SELE('balan');ORDSETFOCUS(1)
                        GO TOP
                        ****************************
                        IF ! balan->(DBSEEK(mprod))
                                mdata     := CTOD('01/01/94')                                
                                moperador := ' '
                                msaldo    := 0
                                mdoc      := ' '

                        ELSE
                                mdata     := balan->data
                                moperador := balan->operador
                                msaldo    := balan->saldo
                                mdoc      := balan->doc
                        ENDIF
                ELSE
                        mdata     := mcons_mov[1,16]
                        moperador := mcons_mov[1,30]
                        msaldo    := 0
                        mdoc      := mcons_mov[1,2]
                
                ENDIF
                setcor(3)
                DEVPOS(2,24);DEVOUT(mdata)
                DEVPOS(2,48);DEVOUT(moperador)
                DEVPOS(3,24);DEVOUT(TRANSFORM(msaldo,'999,999.999'))
                DEVPOS(3,48);DEVOUT(mdoc)
                cComm  := "SELECT SUM(quantd) FROM sacmov WHERE codigo = "+sr_cdbvalue(mprod)
                ccomm := ccomm + " AND data_s_e >= "+sr_cdbvalue(mdata)
                ccomm := ccomm + " AND (cancel IS NULL OR cancel = ' ')"
                ccomm := ccomm + " AND (NOT tipo = '03' OR tipo IS NULL)"
                ccomm := ccomm + " AND ent_sai = 'E'"
                mmov_e := {}
                sr_getconnection():exec(ccomm,,.t.,@mmov_e)
                sr_getconnection():exec('COMMIT',,.f.)
                mtot_ent := mmov_e[1,1]
                cComm  := "SELECT SUM(quantd) FROM sacmov WHERE codigo = "+sr_cdbvalue(mprod)
                ccomm := ccomm + " AND data_s_e >= "+sr_cdbvalue(mdata)
                ccomm := ccomm + " AND (cancel IS NULL OR cancel = ' ')"
                ccomm := ccomm + " AND (NOT tipo = '03' OR tipo IS NULL)"
                ccomm := ccomm + " AND ent_sai = 'S'"
                mmov_s := {}
                sr_getconnection():exec(ccomm,,.t.,@mmov_s)
                sr_getconnection():exec('COMMIT',,.f.)
                mtot_sai := mmov_s[1,1]

                cComm  := "SELECT SUM(pquantd) FROM sacped_s WHERE sr_deleted = ' ' AND pcod_merc = "+sr_cdbvalue(mprod)
                ccomm := ccomm + " AND pdat_ped > "+sr_cdbvalue(mdata)
                ccomm := ccomm + " AND (ppag IS NULL OR ppag = ' ')"
                mcons_ped := {}
                sr_getconnection():exec(ccomm,,.t.,@mcons_ped)
                sr_getconnection():exec('COMMIT',,.f.)
                mtot_ped := mcons_ped[1,1]

                DEVPOS(4,24);DEVOUT(TRANSFORM(mtot_ent,'999,999.999'))
                DEVPOS(5,24);DEVOUT(TRANSFORM(mtot_sai,'999,999.999'))
                DEVPOS(6,24);DEVOUT(TRANSFORM(mtot_ped,'999,999.999'))
                DEVPOS(8,24);DEVOUT(TRANSFORM((msaldo+mtot_ent)-(mtot_sai+mtot_ped),'999,999.999'))

                mdif_saldo := ((msaldo+mtot_ent)-(mtot_sai+mtot_ped))-merc->saldo_mer
                DEVPOS(11,24);DEVOUT(TRANSFORM(mdif_saldo,'999,999.999'))
                IF mdif_saldo = 0
                        mensagem('Pressione qualquer tecla p/continuar')
                        INKEY(0)
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                mopcao := op_simnao('N','Deseja ajustar o Saldo do Produto:')
                IF LASTKEY() = 27 .OR. mopcao ='N'
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                ****************************
                SELE('merc');ORDSETFOCUS(1)
                GO TOP
                ****************************
                IF ! merc->(DBSEEK(mprod))
                        atencao('Nao possivel encontra este PRODUTO')
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                BLOQREG()
                merc->saldo_mer := merc->saldo_mer + mdif_saldo
                DBCOMMIT()
                DBUNLOCK()
                wvw_lclosewindow()
                RETURN NIL
        ELSE    // VERIFICA TODOS OS PRODUTOS
                mgrupo := msub_grupo := mcod_espe := mqtd_dif := 0
                mdata_cad := CTOD('  /  /  ')
                mex_saldo := 'S'
                op_tela(02,00,26,100,' Opcoes de Filtragem ')
                DEVPOS(1,1);DEVOUT('1o.Lancamento..:')
                DEVPOS(2,1);DEVOUT('Cod.Grupo......:')
                DEVPOS(3,1);DEVOUT('Cod.Sub-Grupo..:')
                DEVPOS(4,1);DEVOUT('Cod.Especie....:')
                DEVPOS(5,1);DEVOUT('Deseja S/Saldo.:')
                //@ 5,cci TO 5,cba
                DEVPOS(6,1);DEVOUT('Produto:')
                DEVPOS(7,1);DEVOUT('Data do Balanco......:              Operador.:')
                DEVPOS(8,1);DEVOUT('Saldo do Balanco.....:              Documento:')
                DEVPOS(9,1);DEVOUT('Quantidade Entradas..:')
                DEVPOS(10,1);DEVOUT('Quantd.Pedidos PAGOS.:')
                DEVPOS(11,1);DEVOUT('Quantd.Pedidos ABERTO:')
                DEVPOS(13,1);DEVOUT('Saldo Encontrado.....:')
                DEVPOS(14,1);DEVOUT('Saldo Atual..........:')
                DEVPOS(16,1);DEVOUT('Diferenca de SALDO...:')
                DEVPOS(17,1);DEVOUT('Qtd.Produto c/Dif....:')
                setcor(3)
                DEVPOS(7,24);DEVOUT('  /  /  ')
                DEVPOS(7,48);DEVOUT('   ')
                DEVPOS(8,24);DEVOUT(TRANSFORM(0,'999,999.999'))
                DEVPOS(8,48);DEVOUT(SPACE(10))
                setcor(1)
                @ 2,19 GET mgrupo PICT '999' VALID IF(EMPTY(mgrupo),.T.,ver_gru(@mgrupo,2,23,.F.))
                @ 3,19 GET msub_grupo PICT '99' WHEN ! EMPTY(mgrupo) VALID IF(EMPTY(msub_grupo),.T.,ver_sgru(mgrupo,msub_grupo,3,22))
                @ 4,19 GET mcod_espe PICT '9999' VALID ver_espe(mcod_espe,4,23,,0)
                @ 5,19 GET mex_saldo PICT '@!' VALID mex_saldo $ 'S,N'
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
                m_prod_dif :={}
                m_prod_sbl :={}
                m_produto :={}
                m_movimento :={}
                point := 0
                ****************************
                //SELE('merc');ORDSETFOCUS(1)
                //GO TOP
                ****************************
                mensagem('Coletanto data do 1o. Lancamento no arquivo SACMOV...')
                cComm  := "SELECT MIN(data_s_e) FROM sacmov WHERE cancel IS NULL"
                ccomm := ccomm + " AND (NOT tipo = '03' OR tipo IS NULL)"
                mcons_mov := {}
                sr_getconnection():exec(ccomm,,.t.,@mcons_mov)
                sr_getconnection():exec('COMMIT',,.f.)
                mdata_1 := mcons_mov[1,1]
                setcor(3)
                DEVPOS(1,19);DEVOUT(mdata_1)
                setcor(1)
                
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
                        mtot_ent:=mtot_sai:=mtot_ped:=mdif_saldo:=0
                        setcor(3)
                        DEVPOS(6,10);DEVOUT(mcons_merc[i,8]+'-'+mcons_merc[i,9])
                        DEVPOS(7,24);DEVOUT('  /  /  ')
                        DEVPOS(7,48);DEVOUT('   ')
                        DEVPOS(8,24);DEVOUT(TRANSFORM(0,'999,999.999'))
                        DEVPOS(8,48);DEVOUT(SPACE(10))
                        DEVPOS(9,24);DEVOUT(TRANSFORM(0,'999,999.999'))
                        DEVPOS(10,24);DEVOUT(TRANSFORM(0,'999,999.999'))
                        DEVPOS(11,24);DEVOUT(TRANSFORM(0,'999,999.999'))
                        DEVPOS(12,1);DEVOUT('                       -----------')
                        DEVPOS(13,24);DEVOUT(TRANSFORM(0,'999,999.999'))
                        DEVPOS(14,24);DEVOUT(TRANSFORM(mcons_merc[i,56],'999,999.999'))
                        DEVPOS(15,1);DEVOUT('                       -----------')
                        DEVPOS(16,24);DEVOUT(TRANSFORM(0,'999,999.999'))

                        cComm  := "SELECT * FROM sacbalan WHERE cod_merc = "+sr_cdbvalue(mcons_merc[i,8])
                        mcons_bal := {}
                        sr_getconnection():exec(ccomm,,.t.,@mcons_bal)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF mdata_1 <= mcons_merc[i,13]
                                mdata     := mdata_1
                                moperador := ' '
                                msaldo    := 0
                                mdoc      := ' '
                        ELSEIF LEN(mcons_bal) > 0
                                mdata     := mcons_bal[1,1]
                                moperador := mcons_bal[1,6]
                                msaldo    := mcons_bal[1,5]
                                mdoc      := mcons_bal[1,2]
                        ELSEIF mcons_merc[i,13] < mdata_1 
                                IF mex_saldo = 'S'
                                        AADD(m_produto,mcons_merc[i,8]+' '+LEFT(mcons_merc[i,9],10)+'  '+TRANSFORM(0,'99,999.999')+'  '+TRANSFORM(0,'99,999.999')+'  '+TRANSFORM(0,'99,999.999')+'  '+TRANSFORM(0,'99,999.999')+'  '+TRANSFORM(0,'99,999.999')+'  '+TRANSFORM(0,'99,999.999')+'  SEM BALANCO')
                                        AADD(m_prod_dif,{mcons_merc[i,8],0,0,0,0,CTOD('  /  /  '),' ','SEM BALANCO'})
                                ENDIF
                                LOOP                        
                        ELSE
                                IF mex_saldo = 'S'
                                        AADD(m_produto,mcons_merc[i,8]+' '+LEFT(mcons_merc[i,9],10)+'  '+TRANSFORM(0,'99,999.999')+'  '+TRANSFORM(0,'99,999.999')+'  '+TRANSFORM(0,'99,999.999')+'  '+TRANSFORM(0,'99,999.999')+'  '+TRANSFORM(0,'99,999.999')+'  '+TRANSFORM(0,'99,999.999')+'  SEM BALANCO')
                                        AADD(m_prod_dif,{mcons_merc[i,8],0,0,0,0,CTOD('  /  /  '),' ','SEM BALANCO'})
                                ENDIF
                                LOOP                        
                        ENDIF
                        setcor(3)
                        DEVPOS(7,24);DEVOUT(mdata)
                        DEVPOS(7,48);DEVOUT(moperador)
                        DEVPOS(8,24);DEVOUT(TRANSFORM(msaldo,'999,999.999'))
                        DEVPOS(8,48);DEVOUT(mdoc)

                        mensagem('Somatorio das ENTRADAS, Aguarde...')
                        cComm  := "SELECT SUM(quantd) FROM sacmov WHERE codigo = "+sr_cdbvalue(mcons_merc[i,8])
                        ccomm := ccomm + " AND data_s_e >= "+sr_cdbvalue(mdata)
                        ccomm := ccomm + " AND cancel is NULL AND (NOT tipo = '03' OR tipo IS NULL)"
                        ccomm := ccomm + " AND (cancel IS NULL OR cancel = ' ')"
                        ccomm := ccomm + " AND (NOT tipo = '03' OR tipo IS NULL)"
                        ccomm := ccomm + " AND ent_sai = 'E'"
                        mmov_e := {}
                        sr_getconnection():exec(ccomm,,.t.,@mmov_e)
                        sr_getconnection():exec('COMMIT',,.f.)
                        mtot_ent := mmov_e[1,1]

                        mensagem('Somatorio das SAIDAS, Aguarde...')
                        cComm  := "SELECT SUM(quantd) FROM sacmov WHERE codigo = "+sr_cdbvalue(mcons_merc[i,8])
                        ccomm := ccomm + " AND data_s_e >= "+sr_cdbvalue(mdata)
                        ccomm := ccomm + " AND (cancel IS NULL OR cancel = ' ')"
                        ccomm := ccomm + " AND (NOT tipo = '03' OR tipo IS NULL)"
                        ccomm := ccomm + " AND ent_sai = 'S'"
                        mmov_s := {}
                        sr_getconnection():exec(ccomm,,.t.,@mmov_s)
                        sr_getconnection():exec('COMMIT',,.f.)
                        mtot_sai := mmov_s[1,1]
                
                        mensagem('Somatorio dos PEDIDOS ABERTOS, Aguarde...')
                        cComm  := "SELECT SUM(pquantd) FROM sacped_s WHERE sr_deleted = ' ' AND pcod_merc = "+sr_cdbvalue(mcons_merc[i,8])
                        ccomm := ccomm + " AND pdat_ped >= "+sr_cdbvalue(mdata)
                        ccomm := ccomm + " AND (ppag IS NULL OR ppag = ' ')"
                        mcons_ped := {}
                        sr_getconnection():exec(ccomm,,.t.,@mcons_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
                        mtot_ped := mcons_ped[1,1]
        
                        DEVPOS(9,24);DEVOUT(TRANSFORM(mtot_ent,'999,999.999'))
                        DEVPOS(10,24);DEVOUT(TRANSFORM(mtot_sai,'999,999.999'))
                        DEVPOS(11,24);DEVOUT(TRANSFORM(mtot_ped,'999,999.999'))
                        DEVPOS(13,24);DEVOUT(TRANSFORM((msaldo+mtot_ent)-(mtot_sai+mtot_ped),'999,999.999'))
                        
                        mdif_saldo := iat(((msaldo+mtot_ent)-(mtot_sai+mtot_ped)),2)-iat(mcons_merc[i,56],2)
                        DEVPOS(16,24);DEVOUT(TRANSFORM(mdif_saldo,'999,999.999'))
                        IF mdif_saldo > 0 .OR. mdif_saldo < 0
                                mqtd_dif ++
                                AADD(m_produto,mcons_merc[i,8]+' '+LEFT(mcons_merc[i,9],10)+'  '+TRANSFORM(msaldo,'99,999.999')+'  '+TRANSFORM(mtot_ent,'99,999.999')+'  '+TRANSFORM(mtot_sai,'99,999.999')+'  '+TRANSFORM(mtot_ped,'99,999.999')+'  '+TRANSFORM(mcons_merc[i,56],'99,999.999')+'  '+TRANSFORM(mdif_saldo,'99,999.999')+'  '+mdoc)
                                AADD(m_prod_dif,{mcons_merc[i,8],mdif_saldo,msaldo,mtot_ent,mtot_sai,mtot_ped,mdata,moperador,mdoc})
                                setcor(3)
                                DEVPOS(17,24);DEVOUT(TRANSFORM(mqtd_dif,'999,999'))
                                setcor(1)
                        ENDIF
                NEXT
                IF EMPTY(m_produto)
                        atencao('Nao foi encontrado nenhum PRODUTO c/difirenca no SALDO')
                        wvw_lclosewindow()
                ELSE
                        mtela1:= SAVESCREEN(00,00,24,79)
                        op_tela(00,00,30,100,' Produtos com Diferenca de Saldo ')
                        DEVPOS(1,1);DEVOUT('PROD.             Sld.Bala.   Qtd.Entr.   Qtd.Saida   Qtd.Ped.   Sld.Prod.  Difrenca')
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
                                                ****************************
                                                SELE('merc');ORDSETFOCUS(1)
                                                GO TOP
                                                ****************************
                                                IF ! merc->(DBSEEK(m_prod_dif[point,1]))
                                                        atencao('Nao possivel encontra este PRODUTO')
                                                        LOOP
                                                ENDIF
                                                mtela2 := SAVESCREEN(00,00,24,79)
                                                botao(0,0,lba-1,cba,,' Resumo do PRODUTO ')
                                                DEVPOS(1,1);DEVOUT('Produto:')
                                                DEVPOS(2,1);DEVOUT('Data do Balanco......:              Operador.:')
                                                DEVPOS(3,1);DEVOUT('Saldo do Balanco.....:              Documento:')
                                                DEVPOS(4,1);DEVOUT('Quantidade Entradas..:')
                                                DEVPOS(5,1);DEVOUT('Quantd.Pedidos PAGOS.:')
                                                DEVPOS(6,1);DEVOUT('Quantd.Pedidos ABERTO:')
                                                DEVPOS(8,1);DEVOUT('Saldo Encontrado.....:')
                                                DEVPOS(9,1);DEVOUT('Saldo Atual..........:')
                                                DEVPOS(11,1);DEVOUT('Diferenca de SALDO...:')
                                                setcor(3)
                                                DEVPOS(1,24);DEVOUT(merc->cod_merc+'-'+merc->merc)
                                                DEVPOS(2,24);DEVOUT(m_prod_dif[point,7])
                                                DEVPOS(2,48);DEVOUT(m_prod_dif[point,8])
                                                DEVPOS(3,24);DEVOUT(TRANSFORM(m_prod_dif[point,3],'999,999.999'))
                                                DEVPOS(3,48);DEVOUT(m_prod_dif[point,9])
                                                DEVPOS(4,24);DEVOUT(TRANSFORM(m_prod_dif[point,4],'999,999.999'))
                                                DEVPOS(5,24);DEVOUT(TRANSFORM(m_prod_dif[point,5],'999,999.999'))
                                                DEVPOS(6,24);DEVOUT(TRANSFORM(m_prod_dif[point,6],'999,999.999'))
                                                DEVPOS(7,1);DEVOUT('                       -----------')
                                                DEVPOS(8,24);DEVOUT(TRANSFORM((m_prod_dif[point,3]+m_prod_dif[point,4])-(m_prod_dif[point,5]+m_prod_dif[point,6]),'999,999.999'))
                                                DEVPOS(9,24);DEVOUT(TRANSFORM(merc->saldo_mer,'999,999.999'))
                                                DEVPOS(10,1);DEVOUT('                       -----------')
                                                DEVPOS(11,24);DEVOUT(TRANSFORM(((m_prod_dif[point,3]+m_prod_dif[point,4])-(m_prod_dif[point,5]+m_prod_dif[point,6])) - merc->saldo_mer,'999,999.999'))
                                                setcor(1)
                                                mopcao := op_simnao('N','Deseja ajustar o Saldo do Produto:')
                                                IF LASTKEY() = 27 .OR. mopcao ='N'
                                                        RESTSCREEN(00,00,24,79,mtela2)
                                                        LOOP
                                                ENDIF
                                                BLOQREG()
                                                merc->saldo_mer := merc->saldo_mer + m_prod_dif[point,2]
                                                DBCOMMIT()
                                                DBUNLOCK()
                                                m_prod_dif[point,2] := 0
                                                m_produto[point] := merc->cod_merc+' '+TRANSFORM(m_prod_dif[point,3],'99,999.999')+' '+TRANSFORM(m_prod_dif[point,4],'99,999.999')+' '+TRANSFORM(m_prod_dif[point,5],'999,999.999')+' '+TRANSFORM(m_prod_dif[point,6],'999,999.999')+' '+TRANSFORM(merc->saldo_mer,'99,999.999')+' '+TRANSFORM(0,'99,999.999')
                                                RESTSCREEN(00,00,24,79,mtela2)
                                        CASE LASTKEY() = 19
                                                mopcao := mensagem1('Deseja [A]justar os Produtos ou [I]mprimir:','A','A,I')
                                                IF mopcao = 'A'
                                                        mopcao := op_simnao('N','Deseja Ajustar TODOS OS PRODUTOS:')
                                                        IF LASTKEY() = 27
                                                                LOOP
                                                        ENDIF
                                                        i := 0
                                                        FOR i = 1 TO LEN(m_produto)
                                                                IF m_prod_dif[i,2] = 0
                                                                        LOOP
                                                                ENDIF
                                                                setcor(1)
                                                                DEVPOS(lb+2,1);DEVOUT('Produto:')
                                                                setcor(3)
                                                                DEVPOS(lb+2,10);DEVOUT(m_prod_dif[i,1])
                                                                setcor(1)
                                                                aret := {}
                                                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_prod_dif[i,1]),,.t.,@aret)
                                                                sr_getconnection():exec('COMMIT',,.f.)
                                                                mlinha := aret[1,2]+aret[1,8]+aret[1,9]+aret[1,14]+STRZERO((aret[1,56] + m_prod_dif[i,2])*1000,13)+STRZERO(iat(aret[1,46])*100,14)+aret[1,68]
                                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(aret[1,56] + m_prod_dif[i,2])+",chv_cript = "+sr_cdbvalue(criptografia(mlinha,'C'))+" WHERE cod_merc = "+sr_cdbvalue(m_prod_dif[i,1]),,.f.)
                                                                m_prod_dif[i,2] := 0
                                                                m_produto[i] := m_prod_dif[i,1]+' '+TRANSFORM(m_prod_dif[i,3],'99,999.999')+' '+TRANSFORM(m_prod_dif[i,4],'99,999.999')+' '+TRANSFORM(m_prod_dif[i,5],'999,999.999')+' '+TRANSFORM(m_prod_dif[i,6],'999,999.999')+' '+TRANSFORM(aret[1,1] + m_prod_dif[i,2],'99,999.999')+' '+TRANSFORM(0,'99,999.999')
                                                        NEXT
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                ELSEIF mopcao = 'I'
                                                        IF ! imp_arq('VERI_SAL.REL','R')
                                                                LOOP
                                                        ENDIF
                                                        i := 0
                                                        mpag := 0
                                                        mtit := 'Relatorio de Produtos com Saldo Irregular'
                                                        FOR i = 1 TO LEN(m_produto)
                                                                IF mpag == 0 .OR. PROW() >= 57
                                                                        mpag = mpag +1
                                                                        IF mpag > 1
                                                                                EJECT
                                                                        ENDIF
                                                                        cabecalho(mpag,mtit,mtipo,mprg)
                                                                        imprt(mtipo_imp,'C')
                                                                        DEVPOS(PROW()+1,01);DEVOUT('Cod.')
                                                                        DEVPOS(PROW(),06);DEVOUT('Descricao')
                                                                        DEVPOS(PROW(),47);DEVOUT('  Sld.Bal.')
                                                                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Tot.Entra.')
                                                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(' Tot.Saida')
                                                                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Tot.Pedido')
                                                                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Sld.Encont')
                                                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(' Sld.Prod.')
                                                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(' Diferenca')
                                                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                                                ENDIF
                                                                ****************************
                                                                SELE('merc');ORDSETFOCUS(1)
                                                                GO TOP
                                                                ****************************
                                                                IF ! merc->(DBSEEK(m_prod_dif[i,1]))
                                                                        atencao('Nao possivel encontra este PRODUTO')
                                                                        LOOP
                                                                ENDIF
                                                                DEVPOS(PROW()+1,00);DEVOUT(merc->cod_merc)
                                                                DEVPOS(PROW(),06);DEVOUT(merc->merc)
                                                                DEVPOS(PROW(),47);DEVOUT(TRANSFORM(m_prod_dif[i,3],'99,999.999'))
                                                                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(m_prod_dif[i,4],'99,999.999'))
                                                                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(m_prod_dif[i,5],'99,999.999'))
                                                                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(m_prod_dif[i,6],'99,999.999'))
                                                                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM((m_prod_dif[i,3]+m_prod_dif[i,4])-(m_prod_dif[i,5]+m_prod_dif[i,6]),'99,999.999'))
                                                                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(merc->saldo_mer,'99,999.999'))
                                                                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(m_prod_dif[i,2],'99,999.999'))
                                                        NEXT
                                                        IF PROW() >= 55
                                                                mpag = mpag +1
                                                                IF mpag > 1
                                                                        EJECT
                                                                ENDIF
                                                                cabecalho(mpag,mtit,mtipo,mprg)
                                                                imprt(mtipo_imp,'C')
                                                                DEVPOS(PROW()+1,01);DEVOUT('Cod.')
                                                                DEVPOS(PROW(),06);DEVOUT('Descricao')
                                                                DEVPOS(PROW(),47);DEVOUT('  Sld.Bal.')
                                                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Tot.Entra.')
                                                                DEVPOS(PROW(),PCOL()+2);DEVOUT(' Tot.Saida')
                                                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Tot.Pedido')
                                                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Sld.Encont')
                                                                DEVPOS(PROW(),PCOL()+2);DEVOUT(' Sld.Prod.')
                                                                DEVPOS(PROW(),PCOL()+2);DEVOUT(' Diferenca')
                                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                                        ENDIF
                                                        DEVPOS(PROW()+2,00);DEVOUT('Quantidade de Produtos: '+TRANSFORM(LEN(m_produto),'99,999,999'))
                                                        DEVPOS(PROW()+2,00);DEVOUT(TIME())
                                                        EJECT
                                                        SETPRC(00,00)
                                                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                                                        conf_impressao('VERI_SAL.REL')
                                                ENDIF
                                ENDCASE
                        ENDDO
                        wvw_lclosewindow()
                        wvw_lclosewindow()
                ENDIF
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
