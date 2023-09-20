*CHECKLIST NOTAS FISCAIS
************************
MEMVAR getlist,mdata_sis,nivel_acess

FUNCTION sac217(mcd)
********************
LOCAL MPRG:='SAC217',;
      mop,opcao,mdata1,i:=0,f:=0,machou:=0

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mdocumento:='',mdoc_fim:='',m_totnt := {},;
        m_movnt:={},m_mov:={},m_aux1:={},m_demo:={},m_caminho:={},m_demosort :={},;
        mcont:=0,mdemo_tela:={}

IF ! ver_nivel(mprg,'CHECKLIST NOTAS FISCAIS','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
op_tela(01,1,49,120,'CHECKLIST NOTAS FISCAIS',,1)

***INICIA O ACBRMONITOR***

IF ! inicia_acbr()
        wvw_lclosewindow()
        RETURN NIL
ENDIF

WHILE .T.
        exibi_prg(mprg)
        mensagem('Verificando STATUS DO SERVICO NFe Aguarde um momento....')
        IF ! IBR_OK(IBR_comando('NFE.STATUSSERVICO',,30))
                wvw_lclosewindow();RETURN NIL
        ENDIF

        op_tela(0,10,50,110,IF(mtp_nf = 'NF','Arquivos NF-e (XML)','Arquivos NFC-e (XML)'),,1)
        limpa(00,00,50,100)
        DEVPOS(00,01);DEVOUT('Tipo da Nota...:')
                DrawLabel(00,23,'[NFE] - [NFCE] - [MDFE] - [CTE] - [CCE]',210,, 'Arial',15,7)
        DEVPOS(01,01);DEVOUT('Digite o ANO...:')
        DEVPOS(02,01);DEVOUT('Digite o MES...:')
        DEVPOS(03,01);DEVOUT('Caminho dos XML:')
        @ 04,00 TO 04,100
        setcor(3)
        DEVPOS(05,00);DEVOUT(' N.Nota                  Arquivo XML                                                 Data')
        setcor(1)
        @ 06,00 TO 06,110
        SET CENTURY ON
        mano := SUBSTR(DTOC(mdata_sis),7,4)
        mmes := SUBSTR(DTOC(mdata_sis),4,2)
        SET CENTURY OFF
        IF mtp_nf = 'NF'
                mtipo_nota := 'NFE '
                mtipo_nota2 := 'NFE'
                mcam_nota := 'NFE'
        ELSEIF mtp_nf = 'NFC'
                mtipo_nota := 'NFCE'
                mtipo_nota2 := 'NFCE'
                mcam_nota := 'NFCE'
        ENDIF
        mcaminho := ''
        //@ 00,18 GET mtipo_nota PICT '@!' VALID mtipo_nota $ 'NFE ,NFCE,MDFE,CTE ,CCE '
        @ 00,18 GET mdia PICT '99'
        @ 01,18 GET mmes PICT '99'
        @ 02,18 GET mano PICT '9999'
        //@ 00,40 GET mdat_fim VALID IF(mdat_fim < mdat_ini,.F.,.T.)
        READ
        IF LASTKEY() = 27
                fecha_tela()
                LOOP
        ENDIF
        mcaminho := ALLTRIM(m_indiv[1,40])+SUBSTR(m_set[1,123],1,14)+'\NFE\'+mano+mmes+'\'+mcam_nota+'\'+SPACE(20)
        mcaminho1 := ALLTRIM(m_indiv[1,40])+SUBSTR(m_set[1,123],1,14)+'\NFCE\'+mano+mmes+'\'+mcam_nota+'\'+SPACE(20)
        @ 03,18 GET mcaminho PICT '@!'
        READ
        IF LASTKEY() = 27
                fecha_tela()
                LOOP
        ENDIF
        /*
        IF EMPTY(mdat_ini)
                mdat_ini := CTOD('01/01/94')
                mdat_fim := DATE()
        ENDIF
        */
        m_aux1:={}
        m_demo:={}
        m_caminho:={}
        CLEAR GETS
        mensagem('Coletanto os XMLs....')
        m_aux1 := DIRECTORY(ALLTRIM(mcaminho)+'*-nfe.xml','D')
        IF LEN(m_aux1) > 0
                i := 0
                FOR i = 1 TO LEN(m_aux1)
                        mmdfe:=' '
                        IF mtipo_nota # 'MDFE' .AND. mtipo_nota # 'CCE'
                                IF mtipo_nota = 'NFE' .AND. SUBSTR(m_aux1[i,1],21,2) = '65'
                                        LOOP
                                ELSEIF mtipo_nota = 'NFCE' .AND. SUBSTR(m_aux1[i,1],21,2) = '55'
                                        LOOP
                                ENDIF
                        ENDIF
                        IF mtipo_nota = 'MDFE'
                                m_mdfe := {}
                                sr_getconnection():exec("SELECT encerrou FROM sacmdfe WHERE cmdf = "+sr_cdbvalue(SUBSTR(m_aux1[i,1],29,6)),,.t.,@m_mdfe)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(m_mdfe) > 0
                                        IF m_mdfe[1,1] = '*'
                                                mmdfe := '*'
                                        ENDIF
                                ENDIF
                        ENDIF
                        AADD(m_demo,' '+SUBSTR(m_aux1[i,1],29,6)+'  '+m_aux1[i,1]+'                      '+DTOC(m_aux1[i,3])+' '+mmdfe)
                        AADD(m_caminho,m_aux1[i,1])
                NEXT
        ENDIF
        m_aux1 := DIRECTORY(ALLTRIM(mcaminho1)+'*-nfe.xml','D')
        IF LEN(m_aux1) > 0
                i := 0
                FOR i = 1 TO LEN(m_aux1)
                        mmdfe:=' '
                        IF mtipo_nota # 'MDFE' .AND. mtipo_nota # 'CCE'
                                IF mtipo_nota = 'NFE' .AND. SUBSTR(m_aux1[i,1],21,2) = '65'
                                        LOOP
                                ELSEIF mtipo_nota = 'NFCE' .AND. SUBSTR(m_aux1[i,1],21,2) = '55'
                                        LOOP
                                ENDIF
                        ENDIF
                        IF mtipo_nota = 'MDFE'
                                m_mdfe := {}
                                sr_getconnection():exec("SELECT encerrou FROM sacmdfe WHERE cmdf = "+sr_cdbvalue(SUBSTR(m_aux1[i,1],29,6)),,.t.,@m_mdfe)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(m_mdfe) > 0
                                        IF m_mdfe[1,1] = '*'
                                                mmdfe := '*'
                                        ENDIF
                                ENDIF
                        ENDIF
                        AADD(m_demo,' '+SUBSTR(m_aux1[i,1],29,6)+'  '+m_aux1[i,1]+'                      '+DTOC(m_aux1[i,3])+' '+mmdfe)
                        AADD(m_caminho,m_aux1[i,1])
                NEXT
        ENDIF
        IF LEN(m_caminho) = 0
                atencao('Nao existe nenhuma NOTA....')
                LOOP
        ENDIF
















********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mdata1 := mdata_sis
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(0,1);DEVOUT('Data Inicial:')
        DEVPOS(0,30);DEVOUT('Qtd.NF-e:')
        DEVPOS(0,55);DEVOUT('Qtd.NFC-e:')
        //DEVPOS(1,1);DEVOUT('Data Final..:')
        @ 2,0 TO 2,120
        DEVPOS(3,1);DEVOUT('Documento  Data  Motivo')
        @ 4,0 TO 4,120
        limpa(5,0,49,120)
        @ 0,15 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        //@ 1,15 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        READ
        IF LASTKEY() = 27
	        wvw_lclosewindow()
                RETURN NIL
        ENDIF
        opcao := op_simnao('S','Confirma os dados:')
        IF opcao = 'N'
                LOOP
        ENDIF
        m_aux1:={}
        m_demo:={}
        m_caminho:={}
        CLEAR GETS
        m_aux1 := DIRECTORY(ALLTRIM(m_indiv[1,40])+'*-nfe.xml','D')
        IF LEN(m_aux1) > 0
                i := 0
                FOR i = 1 TO LEN(m_aux1)
                        IF SUBSTR(m_aux1[i,1],21,2) = '65'
                                LOOP
                        //ELSEIF mtp_nf = 'CP' .AND. SUBSTR(m_aux1[i,1],21,2) = '55'
                        //        LOOP
                        ENDIF
                        */
                        //IF m_aux1[i,3] = mdata1         //.AND. m_aux1[i,3] <= mdata2
                                //                     DOC               XML         DATA               MODELO                      SERIE
                                AADD(m_demo,{SUBSTR(m_aux1[i,1],38,6),m_aux1[i,1],m_aux1[i,3],SUBSTR(m_aux1[i,1],21,2),STR(VAL(SUBSTR(m_aux1[i,1],23,3)))})
                        //ENDIF
                NEXT
        //ELSE
        //        atencao('Nao existe nenhuma NFe ou NFCe neste Caminho: '+ALLTRIM(m_indiv[1,40]))
        //        LOOP
        ENDIF
        IF LEN(m_demo) > 0
                m_demosort := ASORT(m_demo,,, { |x, y| x[1] < y[1] })
        ENDIF
        m_totnt := {}
        sr_getconnection():exec("SELECT documento,data_s_e,cod_cli,cliente,uf_cli,cancel,camnfe,modelo FROM sacmovnt WHERE documento LIKE 'NF%' AND data_s_e = "+sr_cdbvalue(mdata1)+" GROUP BY data_s_e,documento,cod_cli,cliente,uf_cli,cancel,camnfe,modelo ORDER BY data_s_e,documento",,.t.,@m_totnt)
        sr_getconnection():exec('COMMIT',,.f.)
        IF ! EMPTY(m_totnt)
                mdoc_ini := VAL(SUBSTR(m_totnt[1,1],3))
                mcont := VAL(SUBSTR(m_totnt[LEN(m_totnt),1],3)) - VAL(SUBSTR(m_totnt[1,1],3))
        ELSE
                mcont :=0
        ENDIF
        */
        DEVPOS(0,39);DEVOUT(STRZERO(mcont,5))

        mqtd_lin := 45
        mdemo_tela:={}
        i:= machou := l := 0
        FOR i = 1 TO LEN(m_totnt)
        //FOR i = 1 TO mcont

                //h:= 0
                //limpa(5,0,49,120)
                //FOR h = 1 TO LEN(mdemo_tela)
                //        SCROLL(6,0,48,119,1)
                //        DEVPOS(47,1);DEVOUT(mdemo_tela[h])

                        /*
                        DEVPOS(5+l,1);DEVOUT(mdemo_tela[h])
                        IF h > 22
                                SCROLL(6,0,40,119,1)
                        ELSE
                                l++
                        ENDIF
                        /*
                        IF mqtd_lin < h
                                DEVPOS(5+l,1);DEVOUT(mdemo_tela[h])
                                l++
                        ENDIF
                        */
                //NEXT
                mdocumento := 'NF'+STRZERO(mdoc_ini,6)
                //atencao(mdocumento)
                m_movnt := {}
                sr_getconnection():exec("SELECT documento,data_s_e,cod_cli,cliente,uf_cli,cancel,camnfe,modelo,serie FROM sacmovnt WHERE documento ="+sr_cdbvalue(mdocumento)+" GROUP BY data_s_e,documento,cod_cli,cliente,uf_cli,cancel,camnfe,modelo,serie ORDER BY data_s_e,documento",,.t.,@m_movnt)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(m_movnt) > 0 .AND. ! EMPTY(ALLTRIM(m_movnt[1,7]))
                        machou := 1
                        // TAMANHO DO NOME ARQUIVO XML = 52
                        mcaminho :=ALLTRIM(m_indiv[1,40])+SUBSTR(ALLTRIM(m_movnt[1,7]),LEN(ALLTRIM(m_movnt[1,7]))-51)
                        //atencao(SUBSTR(ALLTRIM(m_movnt[1,7]),LEN(ALLTRIM(m_movnt[1,7]))-51))
                        mretorno := IBR_comando('NFE.ConsultarNFe('+mcaminho+')',,3)
                        //atencao(mretorno)
                        IF 'Autorizado o uso da NF-e' $ mretorno
                                IF m_movnt[1,6] = 'C'
                                        AADD(mdemo_tela,' '+mdocumento+' Modelo: 55  Data:'+DTOC(mdata1)+' - Cancel: SIM - SEFAZ: Autorizao')
                                        //atencao('Autorizado o uso da NF-e')
                                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = ' ' WHERE documento = "+sr_cdbvalue(mdocumento),,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                        m_mov := {}
                                        sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento ="+sr_cdbvalue(mdocumento)+" ORDER BY data_s_e,documento",,.t.,@m_mov)
                                        IF LEN(m_mov) > 0
                                                f:=0
                                                FOR f = 1 TO LEN(m_mov)
                                                        m_merc := {}
                                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc ="+sr_cdbvalue(m_mov[f,11]),,.t.,@m_merc)
                                                        sr_begintransaction()
                                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(m_merc[1,55] - m_mov[f,19])+" WHERE cod_merc = "+sr_cdbvalue(m_mov[f,11]),,.f.)
                                                                sr_committransaction()
                                                        sr_endtransaction()
                                                        sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                'processo,ent_sai)'+;
                                                                ' VALUES ('+;
                                                                sr_cdbvalue(DATE())+','+; //1
                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                sr_cdbvalue(TIME())+','+; //3
                                                                sr_cdbvalue(m_mov[f,11])+','+; //4
                                                                sr_cdbvalue(m_mov[f,19])+','+; //5
                                                                sr_cdbvalue(m_merc[1,55])+','+; //6
                                                                sr_cdbvalue(m_merc[1,55] - m_mov[f,19])+','+; //7
                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                sr_cdbvalue('SAC217')+','+; //9
                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                sr_cdbvalue('CHEKLIST: '+mdocumento)+','+; //11
                                                                sr_cdbvalue('S')+')',,.f.)
                                                                AADD(mdemo_tela,'        Prod.: '+m_mov[f,11]+'-'+m_merc[1,9]+' - Sld.Ant.: '+TRANSFORM(m_merc[1,55],'999,999.999')+' - Qtd.Nota: '+TRANSFORM(m_mov[f,19],'999,999.999')+' - Sld.Post.: '+TRANSFORM(m_merc[1,55] - m_mov[f,19],'999,999.999'))
                                                NEXT
                                                sr_getconnection():exec("COMMIT",,.f.)
                                        ENDIF
                                ELSE
                                        AADD(mdemo_tela,' NF'+mdocumento+' Modelo: 55  Data:'+DTOC(mdata1)+' - SITUACAO: Autoriza OK')
                                ENDIF
                        ELSE    //IF 'NF-e nao consta na base de dados da SEFAZ' $ mretorno
                                mretorno := IBR_comando('NFE.InutilizarNFe('+SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2)+',Error de dados na nota,'+SUBSTR(DTOC(m_movnt[1,2]),7)+','+'55'+','+ALLTRIM(m_movnt[1,9])+','+STR(mdoc_ini)+','+STR(mdoc_ini)+')',,3,,1)
                                IF EMPTY(m_movnt[1,6])
                                        AADD(mdemo_tela,' '+mdocumento+' Modelo: 55  Data:'+DTOC(mdata1)+' - Cancel: NAO - SEFAZ: NAO Autorizao - SITUACAO: INUTILIZADA')
                                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = 'C',norm_ele = 'I' WHERE documento = "+sr_cdbvalue(mdocumento),,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)

                                        m_mov := {}
                                        sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento ="+sr_cdbvalue(mdocumento)+" ORDER BY data_s_e,documento",,.t.,@m_mov)
                                        IF LEN(m_mov) > 0
                                                f:=0
                                                FOR f = 1 TO LEN(m_mov)
                                                        m_merc := {}
                                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc ="+sr_cdbvalue(m_mov[f,11]),,.t.,@m_merc)
                                                        sr_begintransaction()
                                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(m_merc[1,55] + m_mov[f,19])+" WHERE cod_merc = "+sr_cdbvalue(m_mov[f,11]),,.f.)
                                                                sr_committransaction()
                                                        sr_endtransaction()
                                                        sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                'processo,ent_sai)'+;
                                                                ' VALUES ('+;
                                                                sr_cdbvalue(DATE())+','+; //1
                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                sr_cdbvalue(TIME())+','+; //3
                                                                sr_cdbvalue(m_mov[f,11])+','+; //4
                                                                sr_cdbvalue(m_mov[f,19])+','+; //5
                                                                sr_cdbvalue(m_merc[1,55])+','+; //6
                                                                sr_cdbvalue(m_merc[1,55] + m_mov[f,19])+','+; //7
                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                sr_cdbvalue('SAC217')+','+; //9
                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                sr_cdbvalue('CHEKLIST: '+mdocumento)+','+; //11
                                                                sr_cdbvalue('E')+')',,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                        AADD(mdemo_tela,'         Prod.: '+m_mov[f,11]+'-'+m_merc[1,9]+' - Sld.Ant.: '+TRANSFORM(m_merc[1,55],'999,999.999')+' - Qtd.Nota: '+TRANSFORM(m_mov[f,19],'999,999.999')+' - Sld.Post.: '+TRANSFORM(m_merc[1,55] + m_mov[f,19],'999,999.999'))
                                                NEXT
                                        ENDIF
                                ELSE
                                        AADD(mdemo_tela,' NF'+mdocumento+' Modelo: 55  Data:'+DTOC(mdata1)+' - Cancel: SIM - SEFAZ: NAO Autorizao - SITUACAO: INUTILIZADA')
                                ENDIF
                        ENDIF
                ELSE
                        h:= machou := 0
                        FOR h = 1 TO LEN(m_demosort)
                                IF m_demosort[h,1] = STRZERO(mdoc_ini,6) //.AND. m_demosort[h,4] = '55'
                                        //atencao(m_demosort[h,1]+' - '+STRZERO(mdoc_ini,6))
                                        machou := 1
                                        mcaminho :=ALLTRIM(m_indiv[1,40])+ALLTRIM(m_demosort[h,2])
                                        //atencao(SUBSTR(ALLTRIM(m_movnt[1,7]),LEN(ALLTRIM(m_movnt[1,7]))-51))
                                        mretorno := IBR_comando('NFE.ConsultarNFe('+mcaminho+')',,3)
                                        //atencao(mretorno)
                                        IF 'Autorizado o uso da NF-e' $ mretorno
                                                IF LEN(m_movnt) > 0 .AND. m_movnt[1,6] = 'C'
                                                        AADD(mdemo_tela,' NF'+mdocumento+' Modelo: 55  Data:'+DTOC(mdata1)+' - Cancel: SIM - SEFAZ: Autorizao - SITUACAO: OK')
                                                        //atencao('Autorizado o uso da NF-e')
                                                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = ' ',camnfe = "+sr_cdbvalue('NF'+mcaminho)+" WHERE documento = "+sr_cdbvalue(mdocumento),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                        m_mov := {}
                                                        sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento ="+sr_cdbvalue(mdocumento)+" ORDER BY data_s_e,documento",,.t.,@m_mov)
                                                        IF LEN(m_mov) > 0
                                                                f:=0
                                                                FOR f = 1 TO LEN(m_mov)
                                                                        m_merc := {}
                                                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc ="+sr_cdbvalue(m_mov[f,11]),,.t.,@m_merc)
                                                                        sr_begintransaction()
                                                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(m_merc[1,55] - m_mov[f,19])+" WHERE cod_merc = "+sr_cdbvalue(m_mov[f,11]),,.f.)
                                                                                sr_committransaction()
                                                                        sr_endtransaction()
                                                                        sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                'processo,ent_sai)'+;
                                                                                ' VALUES ('+;
                                                                                sr_cdbvalue(DATE())+','+; //1
                                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                                sr_cdbvalue(TIME())+','+; //3
                                                                                sr_cdbvalue(m_mov[f,11])+','+; //4
                                                                                sr_cdbvalue(m_mov[f,19])+','+; //5
                                                                                sr_cdbvalue(m_merc[1,55])+','+; //6
                                                                                sr_cdbvalue(m_merc[1,55] - m_mov[f,19])+','+; //7
                                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                                sr_cdbvalue('SAC217')+','+; //9
                                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                sr_cdbvalue('CHEKLIST: '+mdocumento)+','+; //11
                                                                                sr_cdbvalue('S')+')',,.f.)
                                                                                sr_getconnection():exec("COMMIT",,.f.)
                                                                        AADD(mdemo_tela,'         Prod.: '+m_mov[f,11]+'-'+m_merc[1,9]+' Sld.Ant.: '+TRANSFORM(m_merc[1,55],'999,999.999')+' Qtd.Nota: '+TRANSFORM(m_mov[f,19],'999,999.999')+' Sld.Post.: '+TRANSFORM(m_merc[1,55] - m_mov[f,19],'999,999.999'))
                                                                NEXT
                                                        ENDIF
                                                ELSE
                                                        AADD(mdemo_tela,' NF'+mdocumento+' Modelo: 55  Data:'+DTOC(mdata1)+' - SITUACAO: Autoriza OK')
                                                ENDIF
                                        ELSE    //IF 'NF-e nao consta na base de dados da SEFAZ' $ mretorno
                                                mretorno := IBR_comando('NFE.InutilizarNFe('+SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2)+',Error de dados na nota,'+SUBSTR(DTOC(m_movnt[1,2]),7)+','+'55'+',1,'+STR(mdoc_ini)+','+STR(mdoc_ini)+')',,3,,1)
                                                //AADD(mdemo_tela,' '+mdocumento+' - Data:'+DTOC(mdata1)+' - Cancel: NAO - SEFAZ: NAO Autorizao - SITUACAO: INUTILIZADA')
                                                IF LEN(m_movnt) > 0 .AND. EMPTY(m_movnt[1,6])
                                                        AADD(mdemo_tela,' NF'+mdocumento+' Modelo: 55  Data:'+DTOC(mdata1)+' - Cancel: NAO - SEFAZ: NAO Autorizao - SITUACAO: INUTILIZADA e Cancelada')
                                                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = 'C',norm_ele = 'I',camnfe = "+sr_cdbvalue(mcaminho)+" WHERE documento = "+sr_cdbvalue(mdocumento),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                        m_mov := {}
                                                        sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento ="+sr_cdbvalue(mdocumento)+" ORDER BY data_s_e,documento",,.t.,@m_mov)
                                                        IF LEN(m_mov) > 0
                                                                f:=0
                                                                FOR f = 1 TO LEN(m_mov)
                                                                        m_merc := {}
                                                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc ="+sr_cdbvalue(m_mov[f,11]),,.t.,@m_merc)
                                                                        sr_begintransaction()
                                                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(m_merc[1,55] + m_mov[f,19])+" WHERE cod_merc = "+sr_cdbvalue(m_mov[f,11]),,.f.)
                                                                                sr_committransaction()
                                                                        sr_endtransaction()
                                                                        sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                'processo,ent_sai )'+;
                                                                                ' VALUES ('+;
                                                                                sr_cdbvalue(DATE())+','+; //1
                                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                                sr_cdbvalue(TIME())+','+; //3
                                                                                sr_cdbvalue(m_mov[f,11])+','+; //4
                                                                                sr_cdbvalue(m_mov[f,19])+','+; //5
                                                                                sr_cdbvalue(m_merc[1,55])+','+; //6
                                                                                sr_cdbvalue(m_merc[1,55] + m_mov[f,19])+','+; //7
                                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                                sr_cdbvalue('SAC217')+','+; //9
                                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                sr_cdbvalue('CHEKLIST: '+mdocumento)+','+; //11
                                                                                sr_cdbvalue('E')+')',,.f.)
                                                                                sr_getconnection():exec("COMMIT",,.f.)
                                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                                        AADD(mdemo_tela,'         Prod.: '+m_mov[f,11]+'-'+m_merc[1,9]+' - Sld.Ant.: '+TRANSFORM(m_merc[1,55],'999,999.999')+' - Qtd.Nota: '+TRANSFORM(m_mov[f,19],'999,999.999')+' - Sld.Post.: '+TRANSFORM(m_merc[1,55] + m_mov[f,19],'999,999.999'))
                                                                NEXT
                                                        ENDIF
                                                ELSE
                                                        AADD(mdemo_tela,' NF'+mdocumento+' Modelo: 55  Data:'+DTOC(mdata1)+' - Cancel: SIM - SEFAZ: NAO Autorizao - SITUACAO: INUTILIZADA')
                                                ENDIF
                                        ENDIF
                                        EXIT
                                ENDIF
                        NEXT
                ENDIF
                IF machou = 0
                        mretorno := IBR_comando('NFE.InutilizarNFe('+SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2)+',Error de dados na nota,'+DTOC(mdata1)+','+'55'+',1,'+SUBSTR(mdocumento,3)+','+SUBSTR(mdocumento,3)+')',,3,,1)
                        AADD(mdemo_tela,' '+mdocumento+' - Data:'+DTOC(mdata1)+' - SITUACAO: INUTILIZADA')
                ENDIF
                */
                SCROLL(6,0,48,119,1)
                DEVPOS(47,1);DEVOUT(mdemo_tela[i])
                mdoc_ini := mdoc_ini + 1
        NEXT

        //Modelo: 65

        m_demo := {}
        IF LEN(m_aux1) > 0
                i := 0
                FOR i = 1 TO LEN(m_aux1)
                        IF SUBSTR(m_aux1[i,1],21,2) = '55'
                                LOOP
                        ENDIF
                        //IF m_aux1[i,3] = mdata1         //.AND. m_aux1[i,3] <= mdata2
                                //                     DOC               XML         DATA               MODELO                      SERIE
                                AADD(m_demo,{SUBSTR(m_aux1[i,1],38,6),m_aux1[i,1],m_aux1[i,3],SUBSTR(m_aux1[i,1],21,2),STR(VAL(SUBSTR(m_aux1[i,1],23,3)))})
                        //ENDIF
                NEXT
        //ELSE
        //        atencao('Nao existe nenhuma NFe ou NFCe neste Caminho: '+ALLTRIM(m_indiv[1,40]))
        //        LOOP
        ENDIF
        IF LEN(m_demo) > 0
                m_demosort := ASORT(m_demo,,, { |x, y| x[1] < y[1] })
        ENDIF
        m_totnt := {}
        sr_getconnection():exec("SELECT documento,data_s_e,cod_cli,cliente,uf_cli,cancel,camnfe,modelo FROM sacmovnt WHERE documento LIKE 'CP%' AND data_s_e = "+sr_cdbvalue(mdata1)+" GROUP BY data_s_e,documento,cod_cli,cliente,uf_cli,cancel,camnfe,modelo ORDER BY data_s_e,documento",,.t.,@m_totnt)
        IF ! EMPTY(m_totnt)
                mdoc_ini := VAL(SUBSTR(m_totnt[1,1],3))
                mcont := VAL(SUBSTR(m_totnt[LEN(m_totnt),1],3)) - VAL(SUBSTR(m_totnt[1,1],3))
                //mdoc_ini := VAL(SUBSTR(m_totnt[1,1],3))
                //mcont := LEN(m_totnt)
        ELSE
                mcont :=0
        ENDIF
        //mdemo_tela:={}
        //mqtd_lin := 45
        DEVPOS(0,66);DEVOUT(STRZERO(mcont,5))

        i:= 0
        FOR i = 1 TO LEN(m_totnt)
                mchou := 0
                /*
                limpa(5,0,49,120)
                FOR h = 1 TO LEN(mdemo_tela)
                        SCROLL(6,0,48,119,1)
                        DEVPOS(47,1);DEVOUT(mdemo_tela[h])
                NEXT
                */
                mdocumento := 'CP'+STRZERO(mdoc_ini,6)
                mensagem('Documento: '+mdocumento)
                //atencao(mdocumento)
                m_movnt := {}
                sr_getconnection():exec("SELECT documento,data_s_e,cod_cli,cliente,uf_cli,cancel,camnfe,modelo,serie FROM sacmovnt WHERE documento ="+sr_cdbvalue(mdocumento)+" GROUP BY data_s_e,documento,cod_cli,cliente,uf_cli,cancel,camnfe,modelo,serie ORDER BY data_s_e,documento",,.t.,@m_movnt)
                IF LEN(m_movnt) > 0 .AND. ! EMPTY(ALLTRIM(m_movnt[1,7]))
                        machou := 1
                        // TAMANHO DO NOME ARQUIVO XML = 52
                        mcaminho :=ALLTRIM(m_indiv[1,40])+SUBSTR(ALLTRIM(m_movnt[1,7]),LEN(ALLTRIM(m_movnt[1,7]))-51)
                        //atencao(SUBSTR(ALLTRIM(m_movnt[1,7]),LEN(ALLTRIM(m_movnt[1,7]))-51))
                        mretorno := IBR_comando('NFE.ConsultarNFe('+mcaminho+')',,3)
                        //atencao(mretorno)
                        IF 'Autorizado o uso da NF-e' $ mretorno
                                IF m_movnt[1,6] = 'C'
                                        AADD(mdemo_tela,' '+mdocumento+' Modelo: 65  Data:'+DTOC(mdata1)+' - Cancel: SIM - SEFAZ: Autorizao')
                                        //atencao('Autorizado o uso da NF-e')
                                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = ' ' WHERE documento = "+sr_cdbvalue(mdocumento),,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                        m_mov := {}
                                        sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento ="+sr_cdbvalue(mdocumento)+" ORDER BY data_s_e,documento",,.t.,@m_mov)
                                        IF LEN(m_mov) > 0
                                                f:=0
                                                FOR f = 1 TO LEN(m_mov)
                                                        m_merc := {}
                                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc ="+sr_cdbvalue(m_mov[f,11]),,.t.,@m_merc)
                                                        sr_begintransaction()
                                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(m_merc[1,55] - m_mov[f,19])+" WHERE cod_merc = "+sr_cdbvalue(m_mov[f,11]),,.f.)
                                                                sr_committransaction()
                                                        sr_endtransaction()
                                                        sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                'processo,ent_sai)'+;
                                                                ' VALUES ('+;
                                                                sr_cdbvalue(DATE())+','+; //1
                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                sr_cdbvalue(TIME())+','+; //3
                                                                sr_cdbvalue(m_mov[f,11])+','+; //4
                                                                sr_cdbvalue(m_mov[f,19])+','+; //5
                                                                sr_cdbvalue(m_merc[1,55])+','+; //6
                                                                sr_cdbvalue(m_merc[1,55] - m_mov[f,19])+','+; //7
                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                sr_cdbvalue('SAC217')+','+; //9
                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                sr_cdbvalue('CHEKLIST: '+mdocumento)+','+; //11
                                                                sr_cdbvalue('S')+')',,.f.)
                                                                sr_getconnection():exec("COMMIT",,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                        AADD(mdemo_tela,'        Prod.: '+m_mov[1,11]+'-'+m_merc[1,9]+' - Sld.Ant.: '+TRANSFORM(m_merc[1,55],'999,999.999')+' - Qtd.Nota: '+TRANSFORM(m_mov[f,19],'999,999.999')+' - Sld.Post.: '+TRANSFORM(m_merc[1,55] - m_mov[f,19],'999,999.999'))
                                                NEXT
                                        ENDIF
                                ELSE
                                        AADD(mdemo_tela,' '+mdocumento+' Modelo: 65  Data:'+DTOC(mdata1)+' - SITUACAO: Autoriza OK')
                                ENDIF
                        ELSE    //IF 'NF-e nao consta na base de dados da SEFAZ' $ mretorno
                                mretorno := IBR_comando('NFE.InutilizarNFe('+SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2)+',Error de dados na nota,'+SUBSTR(DTOC(m_movnt[1,2]),7)+','+'65'+','+ALLTRIM(m_movnt[1,9])+','+STR(mdoc_ini)+','+STR(mdoc_ini)+')',,3,,1)
                                IF EMPTY(m_movnt[1,6])
                                        AADD(mdemo_tela,' '+mdocumento+' Modelo: 65  Data:'+DTOC(mdata1)+' - Cancel: NAO - SEFAZ: NAO Autorizao - SITUACAO: INUTILIZADA')
                                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = 'C',norm_ele = 'I' WHERE documento = "+sr_cdbvalue(mdocumento),,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                        m_mov := {}
                                        sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento ="+sr_cdbvalue(mdocumento)+" ORDER BY data_s_e,documento",,.t.,@m_mov)
                                        IF LEN(m_mov) > 0
                                                f:=0
                                                FOR f = 1 TO LEN(m_mov)
                                                        m_merc := {}
                                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc ="+sr_cdbvalue(m_mov[f,11]),,.t.,@m_merc)
                                                        sr_begintransaction()
                                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(m_merc[1,55] + m_mov[f,19])+" WHERE cod_merc = "+sr_cdbvalue(m_mov[f,11]),,.f.)
                                                                sr_committransaction()
                                                        sr_endtransaction()
                                                        sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                'processo,ent_sai)'+;
                                                                ' VALUES ('+;
                                                                sr_cdbvalue(DATE())+','+; //1
                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                sr_cdbvalue(TIME())+','+; //3
                                                                sr_cdbvalue(m_mov[f,11])+','+; //4
                                                                sr_cdbvalue(m_mov[f,19])+','+; //5
                                                                sr_cdbvalue(m_merc[1,55])+','+; //6
                                                                sr_cdbvalue(m_merc[1,55] + m_mov[f,19])+','+; //7
                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                sr_cdbvalue('SAC217')+','+; //9
                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                sr_cdbvalue('CHEKLIST: '+mdocumento)+','+; //11
                                                                sr_cdbvalue('E')+')',,.f.)
                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                        AADD(mdemo_tela,'         Prod.: '+m_mov[f,11]+'-'+m_merc[1,9]+' - Sld.Ant.: '+TRANSFORM(m_merc[1,55],'999,999.999')+' - Qtd.Nota: '+TRANSFORM(m_mov[f,19],'999,999.999')+' - Sld.Post.: '+TRANSFORM(m_merc[1,55] + m_mov[f,19],'999,999.999'))
                                                NEXT
                                        ENDIF
                                ELSE
                                        AADD(mdemo_tela,' '+mdocumento+' Modelo: 65  Data:'+DTOC(mdata1)+' - Cancel: SIM - SEFAZ: NAO Autorizao - SITUACAO: INUTILIZADA')
                                ENDIF
                        ENDIF
                ELSE
                        h:= machou := 0
                        FOR h = 1 TO LEN(m_demosort)
                                IF m_demosort[h,1] = STRZERO(mdoc_ini,6) .AND. m_demosort[h,4] = '65'
                                        machou := 1
                                        mcaminho :=ALLTRIM(m_indiv[1,40])+ALLTRIM(m_demosort[h,2])
                                        //atencao(SUBSTR(ALLTRIM(m_movnt[1,7]),LEN(ALLTRIM(m_movnt[1,7]))-51))
                                        mretorno := IBR_comando('NFE.ConsultarNFe('+mcaminho+')',,3)
                                        //atencao(mretorno)
                                        IF 'Autorizado o uso da NF-e' $ mretorno
                                                IF LEN(m_movnt) > 0 .AND. m_movnt[1,6] = 'C'
                                                        AADD(mdemo_tela,' '+mdocumento+' Modelo: 65  Data:'+DTOC(mdata1)+' - Cancel: SIM - SEFAZ: Autorizao - SITUACAO: OK')
                                                        //atencao('Autorizado o uso da NF-e')
                                                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = ' ',camnfe = "+sr_cdbvalue(mcaminho)+" WHERE documento = "+sr_cdbvalue(mdocumento),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                        m_mov := {}
                                                        sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento ="+sr_cdbvalue(mdocumento)+" ORDER BY data_s_e,documento",,.t.,@m_mov)
                                                        IF LEN(m_mov) > 0
                                                                f:=0
                                                                FOR f = 1 TO LEN(m_mov)
                                                                        m_merc := {}
                                                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc ="+sr_cdbvalue(m_mov[f,11]),,.t.,@m_merc)
                                                                        sr_begintransaction()
                                                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(m_merc[1,55] - m_mov[f,19])+" WHERE cod_merc = "+sr_cdbvalue(m_mov[f,11]),,.f.)
                                                                                sr_committransaction()
                                                                        sr_endtransaction()
                                                                        sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                'processo,ent_sai)'+;
                                                                                ' VALUES ('+;
                                                                                sr_cdbvalue(DATE())+','+; //1
                                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                                sr_cdbvalue(TIME())+','+; //3
                                                                                sr_cdbvalue(m_mov[f,11])+','+; //4
                                                                                sr_cdbvalue(m_mov[f,19])+','+; //5
                                                                                sr_cdbvalue(m_merc[1,55])+','+; //6
                                                                                sr_cdbvalue(m_merc[1,55] - m_mov[f,19])+','+; //7
                                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                                sr_cdbvalue('SAC217')+','+; //9
                                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                sr_cdbvalue('CHEKLIST: '+mdocumento)+','+; //11
                                                                                sr_cdbvalue('S')+')',,.f.)
                                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                                        AADD(mdemo_tela,'         Prod.: '+m_mov[f,11]+'-'+m_merc[1,9]+' Sld.Ant.: '+TRANSFORM(m_merc[1,55],'999,999.999')+' Qtd.Nota: '+TRANSFORM(m_mov[f,19],'999,999.999')+' Sld.Post.: '+TRANSFORM(m_merc[1,55] - m_mov[f,19],'999,999.999'))
                                                                NEXT
                                                        ENDIF
                                                ELSE
                                                        AADD(mdemo_tela,' '+mdocumento+' Modelo: 65  Data:'+DTOC(mdata1)+' - SITUACAO: Autoriza OK')
                                                ENDIF
                                        ELSE    //IF 'NF-e nao consta na base de dados da SEFAZ' $ mretorno
                                                mretorno := IBR_comando('NFE.InutilizarNFe('+SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2)+',Error de dados na nota,'+SUBSTR(DTOC(m_movnt[1,2]),7)+','+'65'+',1,'+STR(mdoc_ini)+','+STR(mdoc_ini)+')',,3,,1)
                                                //AADD(mdemo_tela,' '+mdocumento+' - Data:'+DTOC(mdata1)+' - Cancel: NAO - SEFAZ: NAO Autorizao - SITUACAO: INUTILIZADA')
                                                IF LEN(m_movnt) > 0 .AND. EMPTY(m_movnt[1,6])
                                                        AADD(mdemo_tela,' '+mdocumento+' Modelo: 65  Data:'+DTOC(mdata1)+' - Cancel: NAO - SEFAZ: NAO Autorizao - SITUACAO: INUTILIZADA e Cancelada')
                                                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = 'C',norm_ele = 'I',camnfe = "+sr_cdbvalue(mcaminho)+" WHERE documento = "+sr_cdbvalue(mdocumento),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                        m_mov := {}
                                                        sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento ="+sr_cdbvalue(mdocumento)+" ORDER BY data_s_e,documento",,.t.,@m_mov)
                                                        IF LEN(m_mov) > 0
                                                                f:=0
                                                                FOR f = 1 TO LEN(m_mov)
                                                                        m_merc := {}
                                                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc ="+sr_cdbvalue(m_mov[f,11]),,.t.,@m_merc)
                                                                        sr_begintransaction()
                                                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(m_merc[1,55] + m_mov[f,19])+" WHERE cod_merc = "+sr_cdbvalue(m_mov[f,11]),,.f.)
                                                                                sr_committransaction()
                                                                        sr_endtransaction()
                                                                        sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                'processo,ent_sai)'+;
                                                                                ' VALUES ('+;
                                                                                sr_cdbvalue(DATE())+','+; //1
                                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                                sr_cdbvalue(TIME())+','+; //3
                                                                                sr_cdbvalue(m_mov[f,11])+','+; //4
                                                                                sr_cdbvalue(m_mov[f,19])+','+; //5
                                                                                sr_cdbvalue(m_merc[1,55])+','+; //6
                                                                                sr_cdbvalue(m_merc[1,55] + m_mov[f,19])+','+; //7
                                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                                sr_cdbvalue('SAC217')+','+; //9
                                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                sr_cdbvalue('CHEKLIST: '+mdocumento)+','+; //11
                                                                                sr_cdbvalue('E')+')',,.f.)
                                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                                        AADD(mdemo_tela,'         Prod.: '+m_mov[f,11]+'-'+m_merc[1,9]+' - Sld.Ant.: '+TRANSFORM(m_merc[1,55],'999,999.999')+' - Qtd.Nota: '+TRANSFORM(m_mov[f,19],'999,999.999')+' - Sld.Post.: '+TRANSFORM(m_merc[1,55] + m_mov[f,19],'999,999.999'))
                                                                NEXT
                                                        ENDIF
                                                ELSE
                                                        AADD(mdemo_tela,' '+mdocumento+' Modelo: 65  Data:'+DTOC(mdata1)+' - Cancel: SIM - SEFAZ: NAO Autorizao - SITUACAO: INUTILIZADA')
                                                ENDIF
                                        ENDIF
                                        EXIT
                                ENDIF
                        NEXT
                ENDIF
                IF machou = 0
                        mretorno := IBR_comando('NFE.InutilizarNFe('+SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2)+',Error de dados na nota,'+DTOC(mdata1)+','+'65'+',1,'+SUBSTR(mdocumento,3)+','+SUBSTR(mdocumento,3)+')',,3,,1)
                        AADD(mdemo_tela,' '+mdocumento+' Modelo: 65  Data:'+DTOC(mdata1)+' - SITUACAO: INUTILIZADA')
                ENDIF
                mdoc_ini := mdoc_ini + 1
                //limpa(5,0,49,120)
                //FOR h = 1 TO LEN(mdemo_tela)
                        SCROLL(6,0,48,119,1)
                        DEVPOS(47,1);DEVOUT(mdemo_tela[i])
                        //DEVPOS(47,1);DEVOUT(mdemo_tela[h])
                //NEXT
        NEXT
        mArq := "cknfe"+STRTRAN(DTOC(mdata1),'/','')+".PDF"
        //ATENCAO(marq)
        IF imp_arq("cknfe"+STRTRAN(DTOC(mdata1),'/','')+".REL",'R')
                imprt(mtipo_imp,'C')
                f:=0
                mpag := 1
                mtit := 'CHECKLIST NOTAS FISCAIS data: '+DTOC(mdata1)
                mtipo := ''
                cabecalho(mpag,mtit,mtipo,mprg)
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,1);DEVOUT('Documento  Data  Motivo')
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',137))
                FOR f = 1 TO LEN(mdemo_tela)
                        DEVPOS(PROW()+1,1);DEVOUT(mdemo_tela[f])
                NEXT
                //fclose(mArq)
                imprt(mtipo_imp,'N')
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao("cknfe"+STRTRAN(DTOC(mdata1),'/','')+".REL")
                MYRUN('COPY HTI.rel.PDF '+mArq)

        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M **********************************************

