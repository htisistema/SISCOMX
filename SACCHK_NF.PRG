* FUNCAO P/RENVIAR NFE
**********************
FUNCTION sacchk_nf()
************************
LOCAL m_demo:={},m_demosort:={},m_caminho:={},mcaminho:='',mcaminho1:='',;
      mano,mmes,mcam_nota:='',mcam_nota1:='',m_aux1:={}
PRIVATE mchnfe:='',mdocumento:='',mcamnfe := ''

op_tela(0,10,50,110,"CHECAGEM DAS NFCe na sefaz",,1)
WHILE .T.
        ***INICIA O ACBRMONITOR***

        IF ! inicia_acbr(1)
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        exibi_prg('SACCHK_NF')
        limpa(00,00,50,100)
        DEVPOS(01,01);DEVOUT('Digite o ANO........:')
        DEVPOS(02,01);DEVOUT('Digite o MES........:')
        //DEVPOS(03,01);DEVOUT('Caminho dos XML NF-e:')
        DEVPOS(04,01);DEVOUT('Caminho dos XML NFCe:')
        @ 05,00 TO 05,100
        setcor(3)
        DEVPOS(06,00);DEVOUT(' N.Nota                  Arquivo XML                                                 Data')
        setcor(1)
        @ 07,00 TO 07,110
        SET CENTURY ON
        mano := SUBSTR(DTOC(mdata_sis),7,4)
        mmes := SUBSTR(DTOC(mdata_sis),4,2)
        SET CENTURY OFF
        mcam_nota := 'NFE'
        mcam_nota1 := 'NFCE'
        mcaminho := mcaminho1 := ''
        @ 01,23 GET mano PICT '9999'
        @ 02,23 GET mmes PICT '99'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        //mcaminho := ALLTRIM(m_indiv[1,40])+SUBSTR(m_set[1,123],1,14)+'\NFE\'+mano+mmes+'\'+mcam_nota+'\'+SPACE(20)
        mcaminho1 := ALLTRIM(m_indiv[1,40])+SUBSTR(m_set[1,123],1,14)+'\NFCE\'+mano+mmes+'\'+mcam_nota1+'\'+SPACE(20)
        //@ 03,23 GET mcaminho PICT '@!'
        @ 04,23 GET mcaminho1 PICT '@!'
        READ
        IF LASTKEY() = 27
                fecha_tela()
                LOOP
        ENDIF
        CLEAR GETS
        mensagem('Coletanto os XMLs....')
        i:=p:=0
        m_demo:={}
        m_demosort:={}
        m_caminho:={}
/*
        m_aux1 := DIRECTORY(ALLTRIM(mcaminho)+'*-nfe.xml','D')
        IF LEN(m_aux1) > 0
                i := 0
                FOR i = 1 TO LEN(m_aux1)
                        mmdfe:=' '
                        AADD(m_demo,' '+SUBSTR(m_aux1[i,1],29,6)+'  '+m_aux1[i,1]+'                      '+DTOC(m_aux1[i,3])+' '+mmdfe)
                        AADD(m_caminho,m_aux1[i,1])
                NEXT
        ENDIF
        i:=p:=0
        FOR i = 1 TO LEN(m_demo)
                mcaminho2 := ''
                mnota_xml := ALLTRIM(SUBSTR(m_demo[i],10,73))
                mdocumento := SUBSTR(mnota_xml,29,6)
                mcaminho2 :=ALLTRIM(mcaminho)+mnota_xml
                //atencao(mcaminho2+m_qp+ALLTRIM(mcaminho)+m_caminho[i])
                mensagem('Consultando a NOTA FISCAL No.: '+mdocumento)
                mretorno := IBR_comando('NFE.ConsultarNFe('+mcaminho2+')',,3)
                IF 'Autorizado o uso da NF-e' $ mretorno
                        m_demo[i] += 'OK'
                        //atencao('Autorizado o uso da NF-e')
                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = ' ',conjunta  = '*' WHERE documento = "+sr_cdbvalue('NF'+mdocumento),,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                ELSEIF 'Rejeicao: NF-e nao consta na base de dados da SEFAZ' $ mretorno
                        m_demo[i] += 'CANC'
                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = 'C',conjunta  = '*' WHERE documento = "+sr_cdbvalue('NF'+mdocumento),,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                ELSE
                        atencao(mretorno)
                ENDIF
                m_demo[i] := 'NF'+m_demo[i]
                p++
                DEVPOS(07+p,00);DEVOUT(m_demo[i])
        NEXT
*/
        m_caminho:={}
        m_aux1 := DIRECTORY(ALLTRIM(mcaminho1)+'*-nfe.xml','D')
        IF LEN(m_aux1) > 0
                i := 0
                FOR i = 1 TO LEN(m_aux1)
                        mmdfe:=' '
                        AADD(m_demosort,' '+SUBSTR(m_aux1[i,1],29,6)+'  '+m_aux1[i,1]+'                      '+DTOC(m_aux1[i,3])+' '+mmdfe)
                        AADD(m_caminho,m_aux1[i,1])
                NEXT
        ENDIF
        i:=0
        FOR i = 1 TO LEN(m_demosort)
                mcaminho2 := ''
                mnota_xml := ALLTRIM(SUBSTR(m_demosort[i],10,73))
                mdocumento := SUBSTR(mnota_xml,29,6)
                mcaminho2 :=ALLTRIM(mcaminho1)+mnota_xml
                //atencao(mcaminho2+m_qp+ALLTRIM(mcaminho)+m_caminho[i])
                mensagem('Consultando a CUPOM FISCAL No.: '+mdocumento)
                mretorno := IBR_comando('NFE.ConsultarNFe('+mcaminho2+')',,3)
                IF 'Autorizado o uso da NF-e' $ mretorno
                        //atencao('Autorizado o uso da NF-e')
                        m_demosort[i] += 'OK'
                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = ' ',conjunta  = '*' WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                ELSEIF 'Rejeicao: NF-e nao consta na base de dados da SEFAZ' $ mretorno
                        m_demosort[i] += 'CANC'
                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = 'C',conjunta  = '*' WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                ELSE
                        atencao(mretorno)
                ENDIF
                m_demosort[i] := 'CP'+m_demosort[i]
                p++
                DEVPOS(07+p,00);DEVOUT(m_demosort[i])
        NEXT
        IF LEN(m_caminho) = 0
                atencao('Nao existe nenhuma NOTA....')
                LOOP
        ENDIF
        atencao('Foi a checagem....')
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* f i m *********************************************
