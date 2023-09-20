***********************
* CORRECAO DE SALDO MERCADORIA
***********************
MEMVAR getlist,nivel_acess,mdata_sis,cod_operado

FUNCTION sacbal_pin(mcodproduto)
***************
LOCAL mprg:='SACBAL_PIN',mtitulo:='BALANCO (CORRECAO DE SALDO E PRECOS)',;
      msele,morde,;
      opcao,tela,lba,cba,mmerc,mdata,mfiscal,mpr_venda,mpr_venda1,;
      mpr_custo,mgrupo,mpr_cust_a,mcust_merc,mquantd_av,mestoque,;
      mpr_fat,mreg,mobs1,msld_ped:=0,;
      msaldo_merc:=0,mbalanco:=' ',;
      matu_balan:=' ',maltera:=' ',mvlr_merc:=0,mref,cons_mov:={},mnum_doc:=SPACE(8),;
      mpr_venda2,mpr_venda3,mpr_venda4,mlib_real,mlib_merc,;
      m_demo:={},nErr,nPos

PRIVATE mcod_merc,mnome_ven,mcod_op,mcod_forn:=0,mfabrica:=SPACE(40),mcod_bc,cons_merc:={},mfisico:=0

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
CLEAR GETS
lba = 16
cba = 78
set_key('merc',,,,'*')
IF ! AbriArq('sacbalan','balan');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
WHILE .T.
        IF mcodproduto <> NIL
                mcod_bc := mcodproduto
        ELSE
                mcod_bc := SPACE(14)
        ENDIF
        mchassis:=SPACE(20)
        mdescri1:=mdescri2:=mdescri3:=mdescri4:=mdescri5:=SPACE(60)
        mobs1   :=SPACE(55)
        maltera := ' '
        mcod_forn := 0
        mensagem('Preencha os Campos - <ESC> p/Retornar ')
        mcod_op := SPACE(2)
        opcao = 'S'
        matu_balan:='N'
        mnum_doc:=SPACE(8)
        mcod_merc := 0
        mmerc := SPACE(40)
        mgrupo := SPACE(5)
        mfiscal := mfisico := mestoque := mpr_venda := mpr_venda1 := ;
        mpr_custo := mcust_merc := mquantd_av := msld_ped:= mvlr_merc := ;
        mpr_venda2 := mpr_venda3 := mpr_venda4 := mlib_real := mlib_merc := 0
        setcor(1)
        m_demo:={}
        mcod_bc := pinpad(,'Codigo do Produto','Digite o Codigo do Produto',,,,14,'MOVIMENTO DO BALANCO')
        //atencao(mcod_bc)
        IF LASTKEY() = 27
                fecha_tela()
                RETURN NIL
        ENDIF
        IF ! EMPTY(mcod_bc)
                IF LEN(RTRIM(mcod_bc)) > 5      //.OR. VAL(mcod_bc) = 0
                        cons_merc := {}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_barr = "+sr_cdbvalue(mcod_bc),,.t.,@cons_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_merc) = 0
                                atencao('CODIGO de BARRA e REFERENCIA AUXILIAR nao cadastrado')
                                fecha_tela()
                                LOOP
                        ENDIF
                        mcod_merc := VAL(cons_merc[1,8])
                ELSE
                        cons_merc := {}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(VAL(mcod_bc),5)),,.t.,@cons_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_merc) = 0
                                atencao('Codigo da mercadoria nao cadastrado')
                                fecha_tela()
                                LOOP
                        ENDIF
                        mcod_merc := VAL(cons_merc[1,8])
                ENDIF
        ELSE
                fecha_tela()
                LOOP
        ENDIF
        IF FILE(ALLTRIM(m_indiv[1,29])+'P'+cons_merc[1,8]+'.jpg')
                AADD(m_demo,'*botao(05,60,16,80)')
                AADD(m_demo,'*WVW_DrawImage( ,05,60,16,80,ALLTRIM(m_indiv[1,29])+"P"+cons_merc[1,8]+".jpg",.T.,.F.)')
        ELSEIF FILE(ALLTRIM(m_indiv[1,29])+'P'+cons_merc[1,8]+'.bmp')
                AADD(m_demo,'*botao(05,55,16,75)')
                AADD(m_demo,'*WVW_DrawImage( ,05,65,16,80,ALLTRIM(m_indiv[1,29])+"P"+cons_merc[1,8]+".bmp",.T.,.F.)')
        ENDIF
        AADD(m_demo,'*botao(13,45,16,55)')
        AADD(m_demo,'*DrawLabel(13,47,"Codigo",m_color[10],, "Arial Black",20,8)')
        AADD(m_demo,'*DrawLabel(15,47,cons_merc[1,8],,, "Arial Black",20,8)')
        AADD(m_demo,'*botao(18,45,21,85)')
        AADD(m_demo,'*DrawLabel(18,47,"Descricao do Produto",m_color[10],, "Arial Black",20,8)')
        AADD(m_demo,'*DrawLabel(20,47,cons_merc[1,9],,, "Arial Black",20,8)')

        cons_sldped := {}
        cComm  := "SELECT SUM(pquantd) FROM sacped_s WHERE sr_deleted = ' ' AND pcod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5))+" AND (ppag IS NULL OR ppag = ' ')"
        sr_getconnection():exec(ccomm,,.t.,@cons_sldped)
        sr_getconnection():exec('COMMIT',,.f.)
        AADD(m_demo,'*botao(23,45,26,85)')
        AADD(m_demo,'*DrawLabel(23,47,"Saldo Pendente nos Pedidos ABERTO",m_color[10],, "Arial Black",20,8)')
        IF LEN(cons_sldped) > 0
                AADD(m_demo,'*DrawLabel(25,47,ALLTRIM(TRANSFORM(cons_sldped[1,1],"999,999,999.9999")),,, "Arial Black",20,8)')
        ELSE
                AADD(m_demo,'*DrawLabel(25,47,ALLTRIM(TRANSFORM(0,"999,999,999.9999")),,, "Arial Black",20,8)')
        ENDIF
        /*
        mtotal := 0
        IF ver_nivel('CUSTOMERC','CUSTO MERCADORIA DAS MERCADORIAS *** CORRECAO/CONSULTA ***','15',nivel_acess,'*')
                setcor(3)
                DEVPOS(6,18);DEVOUTPICT(cons_merc[1,38],'9,999,999.99')
                mcust_merc := cons_merc[1,44]
                mlib_merc := 1
        ENDIF
        IF ver_nivel('CUSTOREAL','CUSTO REAL DAS MERCADORIAS *** CORRECAO/CONSULTA ***','15',nivel_acess,'*')
                mpr_cust_a := cons_merc[1,38]
                mpr_custo := cons_merc[1,45]
                mlib_real := 1
        ENDIF
        */
        mpr_venda  := cons_merc[1,46]
        mpr_venda1 := cons_merc[1,47]
        mpr_fat    := cons_merc[1,49]
        mpr_fat   := cons_merc[1,49]
        mmerc := cons_merc[1,9]
        mgrupo := cons_merc[1,7]
        mvlr_merc := cons_merc[1,43]
        AADD(m_demo,'*botao(28,45,31,85)')
        AADD(m_demo,'*DrawLabel(28,47,"Saldo no Estoque",m_color[10],, "Arial Black",20,8)')
        AADD(m_demo,'*DrawLabel(30,47,ALLTRIM(TRANSFORM(cons_merc[1,56],"99,999,999,999.9999")),,, "Arial Black",20,8)')
        IF cons_merc[1,56] < cons_merc[1,28] .AND. cons_merc[1,28] > 0
                AADD(m_demo,'*botao(33,45,35,85)')
                AADD(m_demo,'*DrawLabel(33,47,"Saldo Abaixo MINIMO",m_color[10],, "Arial Black",20,8)')
        ELSEIF cons_merc[1,56] > cons_merc[1,29] .AND. cons_merc[1,29] > 0
                AADD(m_demo,'*botao(33,45,35,85)')
                AADD(m_demo,'*DrawLabel(33,47,"Saldo Acima MIXIMO",m_color[10],, "Arial Black",20,8)')
        ENDIF
        /*
        setcor(1)
        IF ver_serie() = '141237' .OR. ver_serie() = '141414'
                mnum_doc := SPACE(8)
        ELSE
                mnum_doc := STRZERO(mcod_merc,6)+'  '
        ENDIF
        */
        //mquantd_av := VAL(pinpad(,'Quantidade Haver','Digite a quantidade Estoque haver'))
        //mfiscal := VAL(pinpad(,'Quantidade Fiscal','Digite a quantidade Estoque Fiscal'))

        fecha_tela()
        mfisico := VAL(pinpad(,'Quantidade Fisico','Digite a quantidade Estoque Fisico',,m_demo,,,'MOVIMENTO DO BALANCO'))
        AADD(m_demo,'*botao(37,45,40,85)')
        AADD(m_demo,'*DrawLabel(37,47,"Quantidade Digitada",m_color[3],, "Arial Black",20,8)')
        AADD(m_demo,'*DrawLabel(39,47,ALLTRIM(TRANSFORM(mfisico,"99,999,999,999.9999")),,, "Arial Black",20,8)')


        //mvlr_merc := VAL(pinpad(,'Valor Mercadoria','Digite o valor mercadoria'))
        //mcust_merc := VAL(pinpad(,'Custo Mercadoria','Digite o Custo mercadoria'))
        //mpr_custo := VAL(pinpad(,'Custo Real','Digite o Custo Real'))
        //mpr_venda := VAL(pinpad(,'Preco de Venda','Digite o Preco de Venda'))
        //mpr_venda1 := VAL(pinpad(,'Preco de Venda2 (%)','Digite percentual do Preco de Venda2'))
        //mpr_fat := VAL(pinpad(,'Preco Especial','Digite Preco Especial'))
        //@ 17,18 GET mobs1
        //mnum_doc := pinpad(,'Numero do Documento','Digite Numero do docuemnto ou deixe em branco')
        //mcod_forn := VAL(pinpad(,'Codigo Fornecedor','Digite Codigo do fornecedor ou deixe em branco'))
        //v_fornece(mcod_forn,19,24)
        //@ 20,18 GET mestoque PICT ALLTRIM(m_set[1,99]) WHEN ver_serie() = '141287'
        //READ
        IF UPDATED();maltera:='*';ENDIF
        IF LASTKEY() = 27
                DBUNLOCK()
                fecha_tela()
                LOOP
        ENDIF
        /*
        IF mfisico < 0 .AND.  ! aut_sen('Saida de Mercadoria pelo Balanco...digite a senha de autorizacao:','BALSLSAIDA')
                LOOP
        ENDIF
        */
        fecha_tela()
        msele:=SELE();morde:=INDEXORD()
        opcao := pinpad(,'Confirma [1]SIM [2] Nao','Confirma o movimento',,m_demo,1,,'MOVIMENTO DO BALANCO')
        IF opcao = '1'
                IF maltera = ' ' .AND. mfisico = 0 .AND. mfiscal = 0;
                   .AND. mpr_custo = cons_merc[1,45];
                   .AND. mpr_venda = cons_merc[1,46] .AND. mpr_custo = cons_merc[1,45];
                   .AND. mcust_merc = cons_merc[1,44];
                   .AND. mvlr_merc = cons_merc[1,43]
                        atencao('Nao foi atualizado este produto, pois nao foi feita NENHUMA ALTERACAO...')
                        fecha_tela()
                        LOOP
                ENDIF
                aret:={}
                m_param := {}
                            // 1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19
                AADD(m_param,{'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'})
                num_param := 0
                m_merc := {}
                SR_BEGINTRANSACTION()
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@m_merc)
                                sr_getconnection():exec('COMMIT',,.f.)
                                mlinha := m_merc[1,2]+m_merc[1,8]+m_merc[1,9]+m_merc[1,14]+STRZERO((m_merc[1,56] + mfisico)*1000,13)+STRZERO(iat(mpr_venda)*100,14)+m_merc[1,68]
                                cComm  := "UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(m_merc[1,55] + mfiscal)
                                ccomm := ccomm +",saldo_mer = "+sr_cdbvalue(m_merc[1,56] + mfisico)
                                ccomm := ccomm +",saldo_av = "+sr_cdbvalue(m_merc[1,57] + mquantd_av)
                                ccomm := ccomm +",saldo_est = "+sr_cdbvalue(m_merc[1,59] + mestoque)
                                ccomm := ccomm +",pr_venda  = "+sr_cdbvalue(mpr_venda)
                                ccomm := ccomm +",pr_venda1 = "+sr_cdbvalue(mpr_venda1)
                                ccomm := ccomm +",pr_venda2 = "+sr_cdbvalue(mpr_venda2)
                                ccomm := ccomm +",pr_venda3 = "+sr_cdbvalue(mpr_venda3)
                                ccomm := ccomm +",pr_venda4 = "+sr_cdbvalue(mpr_venda4)
                                ccomm := ccomm +",pr_fat = "+sr_cdbvalue(mpr_fat)
                                IF maltera = '*'
                                        ccomm := ccomm +",data_atu = "+sr_cdbvalue(mdata_sis)
                                ENDIF
                                IF mfisico > 0 .OR. mfiscal > 0
                                        ccomm := ccomm +",dat_ult_e = "+sr_cdbvalue(mdata_sis)
                                ELSE
                                        ccomm := ccomm +",dat_ult_s = "+sr_cdbvalue(mdata_sis)
                                ENDIF
                                IF mpr_custo <> cons_merc[1,45] .AND. ver_nivel('CUSTOREAL','BALANCO *** CORRECAO CUSTO REAL ***','15',nivel_acess,'*')
                                        ccomm := ccomm +",a_cust_rea = "+sr_cdbvalue(m_merc[1,38])
                                        ccomm := ccomm +",cust_real = "+sr_cdbvalue(mpr_custo)
                                ccomm := ccomm + ",pr_medio = "+sr_cdbvalue(mpr_custo)
                                ENDIF
                                IF mpr_venda <> cons_merc[1,46]
                                        ccomm := ccomm +",ul_alt_pr = "+sr_cdbvalue(mdata_sis)
                                ENDIF
                                IF mpr_venda <> cons_merc[1,46] .OR. mpr_custo <> cons_merc[1,45]
                                        ccomm := ccomm +",hora = "+sr_cdbvalue(TIME())
                                        ccomm := ccomm +",opera_pr = "+sr_cdbvalue(cod_operado)
                                ENDIF
                                IF mcust_merc <> cons_merc[1,44] .AND. ver_nivel('CUSTOMERC','BALANCO *** CORRECAO CUSTO MERCADORIA ***','15',nivel_acess,'*')
                                        ccomm := ccomm +",a_cust_mer = "+sr_cdbvalue(m_merc[1,37])
                                        ccomm := ccomm + ",cust_merc = "+sr_cdbvalue(mcust_merc)
                                ENDIF
                                IF mvlr_merc <> cons_merc[1,43] .AND. ver_nivel('VLRMERC','BALANCO *** CORRECAO VALOR DA MERCADORIA ***','15',nivel_acess,'*')
                                        ccomm := ccomm + ",a_vlr_merc = "+sr_cdbvalue(m_merc[1,36])
                                        ccomm := ccomm + ",vlr_merc = "+sr_cdbvalue(mvlr_merc)
                                ENDIF
                                ccomm := ccomm +",chv_cript = "+sr_cdbvalue(criptografia(mlinha,'C'))
                                ccomm := ccomm + " WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5))
                                sr_getconnection():exec(ccomm,,.f.)

                                sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                'processo,ent_sai,SR_DELETED )'+;
                                                                ' VALUES ('+;
                                                                sr_cdbvalue(DATE())+','+; //1
                                                        sr_cdbvalue(mdata_sis)+','+; //2
                                                        sr_cdbvalue(TIME())+','+; //3
                                                        sr_cdbvalue(STRZERO(mcod_merc,5))+','+; //4
                                                        sr_cdbvalue(IF(mfisico > 0,mfisico,mfisico*-1))+','+; //5
                                                        sr_cdbvalue(m_merc[1,56])+','+; //6
                                                        sr_cdbvalue(m_merc[1,56] + mfisico)+','+; //7
                                                        sr_cdbvalue(cod_operado)+','+; //8
                                                        sr_cdbvalue('SACBAL1')+','+; //9
                                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                        sr_cdbvalue('BALANCO')+','+; //11
                                                        sr_cdbvalue(IF(mfisico > 0,'E','S'))+','+; //11
                                                        sr_cdbvalue(' ')+')',,.f.)
                                IF ! EMPTY(mfiscal)
                                        sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                'processo,ent_sai )'+;
                                                ' VALUES ('+;
                                                sr_cdbvalue(DATE())+','+; //1
                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                sr_cdbvalue(TIME())+','+; //3
                                                sr_cdbvalue(STRZERO(mcod_merc,5))+','+; //4
                                                sr_cdbvalue(IF(mfiscal > 0,mfiscal,mfiscal*-1))+','+; //5
                                                sr_cdbvalue(m_merc[1,55])+','+; //6
                                                sr_cdbvalue(m_merc[1,55] - mfiscal)+','+; //7
                                                sr_cdbvalue(cod_operado)+','+; //8
                                                sr_cdbvalue('SACBAL_PIN')+','+; //9
                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                sr_cdbvalue('BALANCO')+','+; //11
                                                sr_cdbvalue(IF(mfiscal > 0,'E','S'))+')',,.f.)
                                ENDIF

                        sr_committransaction()
                SR_ENDTRANSACTION()
                IF ver_serie() <> '141490'
                        mcons_cam := {}
                        sr_getconnection():exec("SELECT atu_prod FROM cam_dba",,.t.,@mcons_cam)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF SR_SetActiveConnection(nCnn1) > 0 .AND. mcons_cam[1,1] = 'S'
                        //IF SR_SetActiveConnection(nCnn1) > 0 .AND. ver_serie() <> '141254'
                                SR_BEGINTRANSACTION()
                                                cComm  := "UPDATE sacmerc SET "
                                                ccomm := ccomm +"pr_venda = "+sr_cdbvalue(mpr_venda)
                                                ccomm := ccomm +",pr_venda1 = "+sr_cdbvalue(mpr_venda1)
                                                ccomm := ccomm +",pr_venda2 = "+sr_cdbvalue(mpr_venda2)
                                                ccomm := ccomm +",pr_venda3 = "+sr_cdbvalue(mpr_venda3)
                                                ccomm := ccomm +",pr_venda4 = "+sr_cdbvalue(mpr_venda4)
                                                ccomm := ccomm +",pr_fat = "+sr_cdbvalue(mpr_fat)
                                                IF maltera = '*'
                                                        ccomm := ccomm +",data_atu = "+sr_cdbvalue(mdata_sis)
                                                ENDIF
                                                IF mfisico > 0 .OR. mfiscal > 0
                                                        ccomm := ccomm +",dat_ult_e = "+sr_cdbvalue(mdata_sis)
                                                ELSE
                                                        ccomm := ccomm +",dat_ult_s = "+sr_cdbvalue(mdata_sis)
                                                ENDIF
                                                IF mpr_custo <> cons_merc[1,45] .AND. ver_nivel('CUSTOREAL','BALANCO *** CORRECAO CUSTO REAL ***','15',nivel_acess,'*')
                                                        ccomm := ccomm +",a_cust_rea = "+sr_cdbvalue(m_merc[1,38])
                                                        ccomm := ccomm +",cust_real = "+sr_cdbvalue(mpr_custo)
                                                        ccomm := ccomm + ",pr_medio = "+sr_cdbvalue(mpr_custo)
                                                ENDIF
                                                IF mpr_venda <> cons_merc[1,46]
                                                        ccomm := ccomm +",ul_alt_pr = "+sr_cdbvalue(mdata_sis)
                                                ENDIF
                                                IF mpr_venda <> cons_merc[1,46] .OR. mpr_custo <> cons_merc[1,45]
                                                        ccomm := ccomm +",hora = "+sr_cdbvalue(TIME())
                                                        ccomm := ccomm +",opera_pr = "+sr_cdbvalue(cod_operado)
                                                ENDIF
                                                IF mcust_merc <> cons_merc[1,44] .AND. ver_nivel('CUSTOMERC','BALANCO *** CORRECAO CUSTO MERCADORIA ***','15',nivel_acess,'*')
                                                        ccomm := ccomm +",a_cust_mer = "+sr_cdbvalue(m_merc[1,37])
                                                        ccomm := ccomm + ",cust_merc = "+sr_cdbvalue(mcust_merc)
                                                ENDIF
                                                IF mvlr_merc <> cons_merc[1,43] .AND. ver_nivel('VLRMERC','BALANCO *** CORRECAO VALOR DA MERCADORIA ***','15',nivel_acess,'*')
                                                        ccomm := ccomm + ",a_vlr_merc = "+sr_cdbvalue(m_merc[1,36])
                                                        ccomm := ccomm + ",vlr_merc = "+sr_cdbvalue(mvlr_merc)
                                                ENDIF
                                                ccomm := ccomm + " WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5))
                                                sr_getconnection():exec(ccomm,,.f.)
                                        sr_committransaction()
                                SR_ENDTRANSACTION()
                        ENDIF

                        //IF SR_SetActiveConnection(nCnn2) > 0 .AND. ver_serie() <> '141254'
                        IF SR_SetActiveConnection(nCnn2) > 0 .AND. mcons_cam[1,1] = 'S'
                                SR_BEGINTRANSACTION()
                                        cComm  := "UPDATE sacmerc SET "
                                        ccomm := ccomm +"pr_venda = "+sr_cdbvalue(mpr_venda)
                                        ccomm := ccomm +",pr_venda1 = "+sr_cdbvalue(mpr_venda1)
                                        ccomm := ccomm +",pr_venda2 = "+sr_cdbvalue(mpr_venda2)
                                        ccomm := ccomm +",pr_venda3 = "+sr_cdbvalue(mpr_venda3)
                                        ccomm := ccomm +",pr_venda4 = "+sr_cdbvalue(mpr_venda4)
                                        ccomm := ccomm +",pr_fat = "+sr_cdbvalue(mpr_fat)
                                        IF maltera = '*'
                                                ccomm := ccomm +",data_atu = "+sr_cdbvalue(mdata_sis)
                                        ENDIF
                                        IF mfisico > 0 .OR. mfiscal > 0
                                                ccomm := ccomm +",dat_ult_e = "+sr_cdbvalue(mdata_sis)
                                        ELSE
                                                ccomm := ccomm +",dat_ult_s = "+sr_cdbvalue(mdata_sis)
                                        ENDIF
                                                IF mpr_custo <> cons_merc[1,45] .AND. ver_nivel('CUSTOREAL','BALANCO *** CORRECAO CUSTO REAL ***','15',nivel_acess,'*')
                                                ccomm := ccomm +",a_cust_rea = "+sr_cdbvalue(m_merc[1,38])
                                                ccomm := ccomm +",cust_real = "+sr_cdbvalue(mpr_custo)
                                                ccomm := ccomm + ",pr_medio = "+sr_cdbvalue(mpr_custo)
                                        ENDIF
                                        IF mpr_venda <> cons_merc[1,46]
                                                ccomm := ccomm +",ul_alt_pr = "+sr_cdbvalue(mdata_sis)
                                        ENDIF
                                        IF mpr_venda <> cons_merc[1,46] .OR. mpr_custo <> cons_merc[1,45]
                                                ccomm := ccomm +",hora = "+sr_cdbvalue(TIME())
                                                ccomm := ccomm +",opera_pr = "+sr_cdbvalue(cod_operado)
                                        ENDIF
                                        IF mcust_merc <> cons_merc[1,44] .AND. ver_nivel('CUSTOMERC','BALANCO *** CORRECAO CUSTO MERCADORIA ***','15',nivel_acess,'*')
                                                ccomm := ccomm +",a_cust_mer = "+sr_cdbvalue(m_merc[1,37])
                                                ccomm := ccomm + ",cust_merc = "+sr_cdbvalue(mcust_merc)
                                        ENDIF
                                        IF mvlr_merc <> cons_merc[1,43] .AND. ver_nivel('VLRMERC','BALANCO *** CORRECAO VALOR DA MERCADORIA ***','15',nivel_acess,'*')
                                                ccomm := ccomm + ",a_vlr_merc = "+sr_cdbvalue(m_merc[1,36])
                                                ccomm := ccomm + ",vlr_merc = "+sr_cdbvalue(mvlr_merc)
                                        ENDIF
                                        ccomm := ccomm + " WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5))
                                        sr_getconnection():exec(ccomm,,.f.)
                                        sr_committransaction()
                                SR_ENDTRANSACTION()
                        ENDIF
                ENDIF
                SR_SetActiveConnection(nCnn)
                msaldo_merc := cons_merc[1,56]
                aret := {}
                cComm  := "SELECT pnum_ped FROM sacped_s WHERE sr_deleted = ' ' AND pcod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5))+" AND pdat_ped = "+sr_cdbvalue(mdata_sis)
                sr_getconnection():exec(ccomm,,.t.,@aret)
                sr_getconnection():exec('COMMIT',,.f.)
                cons_mov:={}
                cComm  := "SELECT * FROM sacmov WHERE codigo = "+sr_cdbvalue(STRZERO(mcod_merc,5))+" AND data_s_e = "+sr_cdbvalue(mdata_sis)
                sr_getconnection():exec(ccomm,,.t.,@cons_mov)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(aret) > 1 .OR. LEN(cons_mov) > 1
                        mbalanco := 'N'
                ENDIF
                IF mbalanco <> 'N' .AND. (mfisico > 0 .OR. mfisico < 0)
                        //matu_balan := mensagem1('Deseja Atualizar o Arquivo de Balanco','N','S,N')
                        //IF matu_balan ='S'
                                ****************************
                                SELE('balan');ORDSETFOCUS(1)
                                ****************************
                                IF balan->(DBSEEK(STRZERO(mcod_merc,5)))
                                        IF BLOQREG()
                                                balan->data     := mdata_sis
                                                balan->doc      := 'BL'+STRZERO(mcod_merc,5)
                                                balan->saldo    := msaldo_merc
                                                balan->operador := cod_operado
                                                balan->obs      := mobs1
                                        ENDIF
                                ELSE
                                        IF ADIREG()
                                                balan->data     := mdata_sis
                                                balan->doc      := 'BL'+STRZERO(mcod_merc,5)
                                                balan->cod_merc := STRZERO(mcod_merc,5)
                                                balan->descricao:= mmerc
                                                balan->saldo    := msaldo_merc
                                                balan->operador := cod_operado
                                                balan->obs      := mobs1
                                        ENDIF
                                ENDIF
                                DBCOMMIT()
                                DBUNLOCK()
                        //ENDIF
                ENDIF
                IF mfisico = 0
                        fecha_tela()
                        LOOP
                ENDIF
                mcampo_arq :=  'empresa,'   ;//1
                              +'data_s_e,'  ;//2
                              +'gru_sub, '  ;//3
                              +'codigo,  '  ;//4
                              +'produto, '  ;//5
                              +'documento,' ;//6
                              +'cod_vend,'  ;//7
                              +'obs1,    '  ;//8
                              +'ent_sai,'   ;//9
                              +'quantd,'    ;//10
                              +'cod_forn,'  ;//11
                              +'fornece,'   ;//12
                              +'cod_fab,'   ;//13
                              +'fabrica,'   ;//14
                              +'pr_unit'    ;//15
                                                                               //1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
               cComm  := "insert into sacmov ("+mcampo_arq+",sr_deleted) values (?,?,?,?,?,?,?,?,?,? ,? ,? ,? ,? ,? ,' ')"
               apCode := SR_SQLParse( cComm, @nErr, @nPos )
               cComm  := SR_SQLCodeGen(apCode,;
                       {mcodempresa              ,; //1
                        mdata_sis                ,;//2
                        mgrupo                   ,;//3
                        STRZERO(mcod_merc,5)     ,;//4
                        mmerc                    ,;//5
                        'BL'+mnum_doc            ,;//6
                        cod_operado              ,;//7
                        mobs1                    ,;//8
                        IF(mfisico > 0,'E','S')  ,;//9
                        IF(mfisico > 0,mfisico,mfisico*-1),;//10
                        IF(mfisico > 0,STRZERO(mcod_forn,4),' ') ,;//11
                        IF(mfisico > 0,mfabrica,' ') ,;//12
                        IF(mfisico > 0,' ',cons_merc[1,30]) ,;//13
                        IF(mfisico > 0,' ',cons_merc[1,31]) ,;//14
                        IF(mfisico > 0,mpr_custo,' ')  ;//15
                        },sr_getconnection():nsystemid)
                        sr_getconnection():exec(ccomm,,.f.)
                        tracelog(cComm)
                sr_getconnection():exec('COMMIT',,.f.)
                IF mcodproduto <> NIL
                        EXIT
                ENDIF
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** FIM ***************************

