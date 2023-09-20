FUNCTION sacreg_paf()
*************************
LOCAL mcont_e:=0,nHandle,nBytes,mcont_p2,mcst,maliquota
LOCAL ret := 0,mdat1,mdat2,mnum_ecf,mcons_r1
LOCAL mcons_r7,mparametro:='',mdias:=0,mtot_mp:={},mmeio_pg:={},;
      mponto:=0,mtotal_geral:=0,y:=0,i:=0,mtot_dia:=0,meio_pg := '',mtot_meio:=0,marquivo:=''

SET CENTURY ON
setcor(1)
op_tela(5,5,19,89,"REGISTRO DO PAF")
mtipo := 'T'
mdat1 := mdat2 := ctod("  /  /  ")
marquivo := +'C:\'+CURDIR()+'\REG_PAF.TXT'+SPACE(30)
mnum_ecf := 0
setcor(3)
DEVPOS(00,01);DEVOUT('TABELA DE PRODUTOS')
@ 05,00 TO 05,100
@ 08,00 TO 08,100
@ 11,00 TO 11,100
DEVPOS(06,01);DEVOUT('ESTOQUE')
DEVPOS(09,01);DEVOUT('MOVIMENTO DO ECF')
setcor(1)
DEVPOS(01,01);DEVOUT('Razao Social..........:')
DEVPOS(02,01);DEVOUT('CNPJ..................:')
DEVPOS(03,01);DEVOUT('Inscricao Estadual....:')
DEVPOS(04,01);DEVOUT('Inscricao Municipal...:')

DEVPOS(07,01);DEVOUT("[T]otal [P]arcial.....: ")

DEVPOS(10,01);DEVOUT("Numero do ECF.........: ")
DEVPOS(12,01);DEVOUT("Data de inicio........: ")
DEVPOS(13,01);DEVOUT("Data de fim...........: ")
DEVPOS(14,01);DEVOUT('Caminho do arquivo....:')
setcor(3)
DEVPOS(01,24);DEVOUT(m_set[1,129])
DEVPOS(02,24);DEVOUT(mcgc_firm)
DEVPOS(03,24);DEVOUT(m_set[1,128])
DEVPOS(04,24);DEVOUT(m_set[1,156])
setcor(1)

@ 07,24 GET mtipo PICT '@!' VALID mtipo $ 'T,P'
@ 10,24 GET mnum_ecf PICT '999'         //VALID IF(EMPTY(mnum_ecf),.F.,.T.)
@ 12,24 GET mdat1 VALID IF(EMPTY(mdat1),.F.,.T.)
@ 13,24 get mdat2 VALID IF(EMPTY(mdat2) .OR. mdat2 < mdat1,.F.,.T.) WHEN ! EMPTY(mdat1)
@ 14,24 get marquivo PICT '@S30'
READ
IF LASTKEY() = 27
        SET CENTURY OFF
        wvw_lclosewindow()
        RETURN .T.
ENDIF
mcons_r1 := {}
sr_getconnection():exec("SELECT * FROM r1 WHERE NUM_SEQ_ECF = "+sr_cdbvalue(STRZERO(mnum_ecf,3)),,.t.,@mcons_r1)
IF LEN(mcons_r1) = 0
        atencao('Nao existe esta ECF cadastrada...')
EndIf
mopcao := op_simnao('N','Confirma a Geracao do arquivo:')
IF mopcao = 'N'
        SET CENTURY OFF
        wvw_lclosewindow()
        RETURN .T.
ENDIF

mensagem('Gerando o arquivo de TABELA DE PRODUTO')
mdado_arq := {}
//sr_getconnection():exec("SELECT * FROM produto",,.t.,@mdado_arq)
sr_getconnection():exec("SELECT * FROM sacmerc",,.t.,@mdado_arq)
IF LEN(mdado_arq) = 0
        atencao('Nao existe nenhum PRODUTO/SERVICOS....')
ENDIF
nHandle := FCreate(marquivo)
If nHandle == -1
        atencao("Nao foi possivel criar o arquivo de Estoque")
        Return(.F.)
EndIf
mcgc_firm := STRTRAN(mcgc_firm,'.','')
mcgc_firm := STRTRAN(mcgc_firm,'/','')
mcgc_firm := STRTRAN(mcgc_firm,'-','')
nBytes := FWrite(nHandle,'U1'+mcgc_firm+SUBSTR(m_set[1,128],1,14)+SUBSTR(m_set[1,156],1,14)+SUBSTR(m_set[1,129],1,50)+m_qp)
if nBytes = 0
        atencao("Erro na gravacao do conteudo do arquivo do Tipo !")
EndIf
        mdias := mdat2 - mdat1
        meio_pg := ''
        mcons_r7 := {}
        sr_getconnection():exec("SELECT meio_pag,vlr_pago FROM r7 WHERE data_mov = "+sr_cdbvalue(mdat1)+' ORDER BY meio_pag',,.t.,@mcons_r7)
        IF LEN(mcons_r7) > 0
                        y:= mtot_dia := 0
                        FOR y = 1 TO LEN(mcons_r7)
                                meio_pg := mcons_r7[y,1]
                                IF EMPTY(mcons_r7[y,1])
                                        LOOP
                                ENDIF
                                WHILE y <= LEN(mcons_r7) .AND. meio_pg = mcons_r7[y,1]
                                        mensagem(mcons_r7[y,1]+' - '+mcons_r7[y,2])
                                        mponto := ASCAN(mmeio_pg,mcons_r7[y,1])
                                        IF mponto=0
                                                AADD(mtot_mp,{mcons_r7[y,1],VAL(mcons_r7[y,2])})
                                                AADD(mmeio_pg,mcons_r7[y,1])
                                        ELSE
                                                mtot_mp[mponto,2] := mtot_mp[mponto,2] + VAL(mcons_r7[y,2])
                                        ENDIF
                                        mtot_meio:= mtot_meio + VAL(mcons_r7[y,2])
                                        y++
                                ENDDO
                                y := Y -1
                                //mparametro := mparametro+DTOC(mdat1+i)+' '+SUBSTR(meio_pg,1,13)+'CUPOM FISCAL'+TRANSFORM(mtot_meio,'@E 9999,999.99')+m_qp
                                x:=0
                                FOR x = 1 TO LEN(mmeio_pg)
                                        nBytes := FWrite(nHandle,'A2'+DTOC(mdat1+i)+mmeio_pg[x]+SPACE(10)+'1'+STRZERO(mtot_mp[x,2],12)+m_qp)
                                NEXT
                                mtot_meio:=0
                        NEXT
        ENDIF
        mtot_meio:=i:=0
        FOR i = 1 TO mdias
                mcons_r7 := {}
                sr_getconnection():exec("SELECT meio_pag,vlr_pago FROM r7 WHERE data_mov = "+sr_cdbvalue(mdat1+i)+' ORDER BY meio_pag',,.t.,@mcons_r7)
                IF LEN(mcons_r7) > 0
                        y:= mtot_dia := 0
                        FOR y = 1 TO LEN(mcons_r7)
                                meio_pg := mcons_r7[y,1]
                                IF EMPTY(mcons_r7[y,1])
                                        LOOP
                                ENDIF
                                WHILE y <= LEN(mcons_r7) .AND. meio_pg = mcons_r7[y,1]
                                        mensagem(mcons_r7[y,1]+' - '+mcons_r7[y,2])
                                        mponto := ASCAN(mmeio_pg,mcons_r7[y,1])
                                        IF mponto=0
                                                AADD(mtot_mp,{mcons_r7[y,1],VAL(mcons_r7[y,2])})
                                                AADD(mmeio_pg,mcons_r7[y,1])
                                        ELSE
                                                mtot_mp[mponto,2] := mtot_mp[mponto,2] + VAL(mcons_r7[y,2])
                                        ENDIF
                                        mtot_meio:= mtot_meio + VAL(mcons_r7[y,2])
                                        y++
                                ENDDO
                                y := Y -1
                                //mparametro := mparametro+DTOC(mdat1+i)+' '+SUBSTR(meio_pg,1,13)+'CUPOM FISCAL'+TRANSFORM(mtot_meio,'@E 9999,999.99')+m_qp
                                x:=0
                                FOR x = 1 TO LEN(mmeio_pg)
                                        nBytes := FWrite(nHandle,'A2'+DTOC(mdat1+i)+mmeio_pg[x]+SPACE(10)+'1'+STRZERO(mtot_mp[x,2],12)+m_qp)
                                NEXT
                                mtot_meio:=0
                        NEXT
                ENDIF
        NEXT




//nBytes := FWrite(nHandle,'P1'+mcgc_firm+SUBSTR(m_set[1,128],1,14)+SUBSTR(m_set[1,156],1,14)+SUBSTR(m_set[1,129],1,50)+m_qp)
mcont_p2 := 0
i := 0
FOR i = 1 TO LEN(mdado_arq)
        mensagem('Produto: '+mdado_arq[i,2]+mdado_arq[i,9])
        /*
        mchv_cript := criptografia(mdado_arq[i,107],'D')
        IF SUBSTR(mchv_cript,6,14) <> mdado_arq[i,2]
                mdado_arq[i,14] := REPLI('?',6)
        ELSEIF SUBSTR(mchv_cript,21,40) <> mdado_arq[i,9]
                mdado_arq[i,14] := REPLI('?',6)
        ELSEIF SUBSTR(mchv_cript,62,3) <> mdado_arq[i,14]
                mdado_arq[i,14] := REPLI('?',6)
        ELSEIF VAL(SUBSTR(mchv_cript,66,13))/1000 <> mdado_arq[i,56]
                mdado_arq[i,14] := REPLI('?',6)
        ELSEIF VAL(SUBSTR(mchv_cript,80,14)) / 100 <> mdado_arq[i,46]
                mdado_arq[i,14] := REPLI('?',6)
        ELSEIF SUBSTR(mchv_cript,95,4) <> mdado_arq[i,68]
                mdado_arq[i,14] := REPLI('?',6)
        ELSE
                mdado_arq[i,14] := mdado_arq[i,14]+space(3)
        ENDIF
        */
        mcst      := vercst(mdado_arq[i,68])     //vlr_isento(VAL(mdado_arq[i,8]))
        maliquota := STRZERO(0,4)
        IF mcst = 'T'

                IF mdado_arq[i,62] > 0
                        maliquota := STRZERO(mdado_arq[i,62] * 100,4)
                ELSE
                        maliquota := STRZERO(17.00 * 100,4)
                ENDIF
        ENDIF
        nBytes := FWrite(nHandle,'P2'+mcgc_firm+STRZERO(VAL(mdado_arq[i,8]),14)+mdado_arq[i,9]+SPACE(10)+mdado_arq[i,14]+'   '+mdado_arq[i,81]+mdado_arq[i,91]+mcst+maliquota+STRZERO(iat(mdado_arq[i,46])*100,12)+m_qp)
        mcont_p2 ++
        if nBytes = 0
                atencao("Erro na gravacao do conteudo do arquivo do Tipo !")
                Return(.F.)
        EndIf

        /*
        IF SUBSTR(mchv_cript,1,14) <> mdado_arq[i,1]
                mdado_arq[i,5] := REPLI('?',6)
        ELSEIF SUBSTR(mchv_cript,15,40) <> mdado_arq[i,4]
                mdado_arq[i,5] := REPLI('?',6)
        ELSEIF SUBSTR(mchv_cript,55,3) <> mdado_arq[i,5]
                mdado_arq[i,5] := REPLI('?',6)
        ELSEIF VAL(SUBSTR(mchv_cript,58,13))/1000 <> mdado_arq[i,7]
                mdado_arq[i,5] := REPLI('?',6)
        ELSEIF VAL(SUBSTR(mchv_cript,71,14)) / 100 <> mdado_arq[i,6]
                mdado_arq[i,5] := REPLI('?',6)
        ELSE
                mdado_arq[i,5] := mdado_arq[i,5]+space(3)
        ENDIF
        IF mdado_arq[i,11] = 'S'
                mcst := 'I'
                maliquota := STRZERO(0,4)
        ELSEIF mdado_arq[i,11] = 'N'
                mcst := 'T'
                mcons_merc := {}
                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_barr = "+sr_cdbvalue(mdado_arq[i,1]),,.t.,@mcons_merc)
                IF LEN(mcons_merc) = 0
                        LOOP
                ENDIF
                IF mcons_merc[1,62] > 0
                        maliquota := STRZERO(mcons_merc[1,62] * 100,4)
                ELSE
                        maliquota := STRZERO(17.00 * 100,4)
                ENDIF
        ELSEIF mdado_arq[i,11] = 'T'
                mcst := 'N'
                maliquota := STRZERO(0,4)
        ELSEIF mdado_arq[i,11] = 'F'
                mcst := 'F'
                maliquota := STRZERO(0,4)
        ELSEIF mdado_arq[i,11] = 'I'
                mcst := 'S'
                mcons_merc := {}
                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_barr = "+sr_cdbvalue(mdado_arq[i,1]),,.t.,@mcons_merc)
                IF LEN(mcons_merc) = 0
                        LOOP
                ENDIF
                IF mcons_merc[1,62] > 0
                        maliquota := STRZERO(mcons_merc[1,62] * 100,4)
                ELSE
                        maliquota := STRZERO(17.00 * 100,4)
                ENDIF
        ELSE
                mcst := 'T'
                mcons_merc := {}
                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_barr = "+sr_cdbvalue(mdado_arq[i,1]),,.t.,@mcons_merc)
                IF LEN(mcons_merc) = 0
                        LOOP
                ENDIF
                IF mcons_merc[1,62] > 0
                        maliquota := STRZERO(mcons_merc[1,62] * 100,4)
                ELSE
                        maliquota := STRZERO(17.00 * 100,4)
                ENDIF
        ENDIF
        nBytes := FWrite(nHandle,'P2'+mcgc_firm+mdado_arq[i,1]+mdado_arq[i,4]+SPACE(10)+mdado_arq[i,5]+mdado_arq[i,8]+mdado_arq[i,9]+mcst+maliquota+STRZERO(iat(mdado_arq[i,6],2)*100,12)+m_qp)
        mcont_p2 ++
        if nBytes = 0
                atencao("Erro na gravacao do conteudo do arquivo do Tipo " + Tipo + "!")
                Return(.F.)
        EndIf
        */
NEXT
nBytes := FWrite(nHandle,'P9'+mcgc_firm+SUBSTR(m_set[1,128],1,14)+STRZERO(mcont_p2,6)+m_qp)

setcor(1)
/*
IF mtipo = 'T'
        op_tela(5,05,14,89,"Estoque TOTAL")
ELSE
        op_tela(5,05,14,89,"Estoque PARCIAL")
ENDIF
*/
mdado_arq := {}
IF mtipo = 'P'
        WHILE .T.
                mcod_merc := SPACE(14)
                mmerc     := SPACE(40)
                mensagem('Digite o Codigo do Produto - Descricao ou [ENTER][ENTER] p/Finalizar')
                DEVPOS(06,00);DEVOUT('Codigo Produto/Servico:')
                DEVPOS(07,00);DEVOUT('Descricao.............:')
                @ 06,24 get mcod_merc PICT '@'
                @ 07,24 get mmerc PICT '@' WHEN EMPTY(mcod_merc)
                READ
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                IF EMPTY(mcod_merc) .AND. EMPTY(mmerc)
                        EXIT
                ENDIF
                IF ! EMPTY(mcod_merc)
                        mcons_merc := {}
                        IF LEN(ALLTRIM(mcod_merc)) <= 5
                                sr_getconnection():exec("SELECT cod_merc,cod_barr,merc,unidade,saldo_mer,data_cad,chv_cript FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(VAL(mcod_merc),5)),,.t.,@mcons_merc)
                        ELSE
                                sr_getconnection():exec("SELECT cod_merc,cod_barr,merc,unidade,saldo_mer,data_cad,chv_cript FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_barr),,.t.,@mcons_merc)
                        ENDIF
                ENDIF
                IF LEN(mcons_merc) = 0
                        atencao('Nao foi possivel encontrar este Produto....')
                        LOOP
                ENDIF
                setcor(3)
                DEVPOS(06,24);DEVOUT(mcons_merc[1,1])
                DEVPOS(07,24);DEVOUT(mcons_merc[1,3])
                setcor(1)
                mopcao := op_simnao('N','Confirma a impressao da ESTOQUE:')
                IF mopcao = 'N'
                        LOOP
                ENDIF
                AADD(mdado_arq,{mcons_merc[1,1],mcons_merc[1,2],mcons_merc[1,3],mcons_merc[1,4],mcons_merc[1,5],mcons_merc[1,6],mcons_merc[1,7]})
        ENDDO
        IF LASTKEY() = 27
                SET CENTURY OFF
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
ELSE
        mdado_arq := {}
        sr_getconnection():exec("SELECT cod_merc,cod_barr,merc,unidade,saldo_mer,data_cad,chv_cript FROM sacmerc",,.t.,@mdado_arq)
        IF LEN(mdado_arq) = 0
                atencao('Nao existe nenhum PRODUTO/SERVICOS....')
        ENDIF
ENDIF

mensagem('Gerando o arquivo de ESTOQUE')
mcgc_firm := STRTRAN(mcgc_firm,'.','')
mcgc_firm := STRTRAN(mcgc_firm,'/','')
mcgc_firm := STRTRAN(mcgc_firm,'-','')
//nBytes := FWrite(nHandle,'E1'+mcgc_firm+SUBSTR(m_set[1,128],1,14)+SUBSTR(m_set[1,156],1,14)+SUBSTR(m_set[1,129],1,50)+' '+'ECF-IF '+m_numeroSerie+m_ModeloImp+m_MarcaImp+ALLTRIM(SUBSTR(STRTRAN(dataSWBasico,'/',''),1,4)+'20'+SUBSTR(STRTRAN(dataSWBasico,'/',''),5,2))+ALLTRIM(STRTRAN(horaSWBasico,':',''))+m_qp)
//if nBytes = 0
//        atencao("Erro na gravacao do conteudo do arquivo do Tipo !")
//EndIf
mcont_e := i := 0
FOR i = 1 TO LEN(mdado_arq)
        mensagem('Produto: '+mdado_arq[i,2]+mdado_arq[i,3])
        IF mdado_arq[i,5] < 0
                mpos_neg := '-'
                msaldo := STRZERO((mdado_arq[i,5]*-1)*1000,9)
        ELSE
                msaldo := STRZERO(mdado_arq[i,5]*1000,9)
                mpos_neg := '+'
        ENDIF

        //mlinha := mcod_barra (14)+munidade(3)+saldo(13)+pr_ven(14)
        mchv_cript := criptografia(mdado_arq[i,7],'D')
        //atencao(mchv_cript+' - '+SUBSTR(mchv_cript,18,13))
        /*
        IF EMPTY(mdado_arq[i,2])
                IF SUBSTR(mchv_cript,15,5) <> mdado_arq[i,1]
                        mdado_arq[i,2] := REPLI('?',14)
                ELSE
                        mdado_arq[i,2] := STRZERO(VAL(mdado_arq[i,1]),14)
                ENDIF
        ELSE
                IF SUBSTR(mchv_cript,1,14) <> mdado_arq[i,2]
                        mdado_arq[i,2] := REPLI('?',14)
                ENDIF
        ENDIF
        IF SUBSTR(mchv_cript,20,40) <> mdado_arq[i,3]
                mdado_arq[i,3] := REPLI('?',40)
        ENDIF
        IF SUBSTR(mchv_cript,60,3) <> mdado_arq[i,4]
                mdado_arq[i,4] := REPLI('?',3)
        ENDIF
        IF VAL(SUBSTR(mchv_cript,63,13))/1000 <> mdado_arq[i,5]
                //mdado_arq[i,5] := REPLI('?',13)
                msaldo := REPLI('?',9)
        ENDIF
        */
        //nBytes := FWrite(nHandle,'E2'+mcgc_firm+STRZERO(VAL(mdado_arq[i,1]),14)+mdado_arq[i,3]+SPACE(10)+mdado_arq[i,4]+SPACE(3)+mpos_neg+msaldo+SUBSTR(DTOC(mdado_arq[i,6]),7)+SUBSTR(DTOC(mdado_arq[i,6]),4,2)+SUBSTR(DTOC(mdado_arq[i,6]),1,2)+m_qp)
        nBytes := FWrite(nHandle,'E2'+mcgc_firm+STRZERO(VAL(mdado_arq[i,1]),14)+mdado_arq[i,3]+SPACE(10)+mdado_arq[i,4]+SPACE(3)+mpos_neg+msaldo+m_qp)
        mcont_e ++
        if nBytes = 0
                atencao("Erro na gravacao do conteudo do arquivo do Tipo !")
                Return(.F.)
        EndIf
NEXT

nBytes := FWrite(nHandle,'E9'+mcgc_firm+SUBSTR(m_set[1,128],1,14)+STRZERO(mcont_e,6)+m_qp)

//MOVIMENTO POR ECF

//WHILE .T.
        mcgc_firm := STRTRAN(mcgc_firm,'.','')
        mcgc_firm := STRTRAN(mcgc_firm,'/','')
        mcgc_firm := STRTRAN(mcgc_firm,'-','')
        /*
        mchv_cript := criptografia(mcons_r1[1,21],'D')

        IF SUBSTR(mchv_cript,1,20) <> UPPER(mcons_r1[1,1])
                mcons_r1[1,5] := ALLTRIM(mcons_r1[1,5])+REPLI('?',20-LEN(ALLTRIM(mcons_r1[1,5])))
        ELSEIF SUBSTR(mchv_cript,21,1) <> UPPER(mcons_r1[1,2])
                mcons_r1[1,5] := ALLTRIM(mcons_r1[1,5])+REPLI('?',20-LEN(ALLTRIM(mcons_r1[1,5])))
        ELSEIF SUBSTR(mchv_cript,22,7) <> UPPER(mcons_r1[1,3])
                mcons_r1[1,5] := ALLTRIM(mcons_r1[1,5])+REPLI('?',20-LEN(ALLTRIM(mcons_r1[1,5])))
        ELSEIF SUBSTR(mchv_cript,29,20) <> UPPER(mcons_r1[1,4])
                mcons_r1[1,5] := ALLTRIM(mcons_r1[1,5])+REPLI('?',20-LEN(ALLTRIM(mcons_r1[1,5])))
        ELSEIF SUBSTR(mchv_cript,49,20) <> UPPER(mcons_r1[1,5])
                mcons_r1[1,5] := ALLTRIM(mcons_r1[1,5])+REPLI('?',20-LEN(ALLTRIM(mcons_r1[1,5])))
        ELSEIF SUBSTR(mchv_cript,69,10) <> UPPER(mcons_r1[1,6])
                mcons_r1[1,5] := ALLTRIM(mcons_r1[1,5])+REPLI('?',20-LEN(ALLTRIM(mcons_r1[1,5])))
        ELSEIF SUBSTR(mchv_cript,104,14) <> UPPER(mcons_r1[1,11])
                mcons_r1[1,5] := ALLTRIM(mcons_r1[1,5])+REPLI('?',20-LEN(ALLTRIM(mcons_r1[1,5])))
        ENDIF
        */
        mensagem('Gerando o R1')

        nBytes := FWrite(nHandle,'R1'+mcons_r1[1,1]+;
                         mcons_r1[1,2]+;
                         mcons_r1[1,3]+;
                         mcons_r1[1,4]+;
                         mcons_r1[1,5]+;
                         mcons_r1[1,6]+;
                         SPACE(14)+;
                         mcons_r1[1,11]+;
                         mcgc_firm+;
                         m_set[1,128]+;
                         mcnpj_HTI+;
                         SPACE(14)+;
                         mim_HTI+;
                         mrazao_HTI+;
                         mpaf_HTI+SPACE(34)+;
                         mpaf_ver+SPACE(34)+;
                         mmd5+;
                         SUBSTR(DTOC(mdat1),7,4)+SUBSTR(DTOC(mdat1),4,2)+SUBSTR(DTOC(mdat1),1,2)+;
                         SUBSTR(DTOC(mdat2),7,4)+SUBSTR(DTOC(mdat2),4,2)+SUBSTR(DTOC(mdat2),1,2)+;
                         mpaf_ecf+;
                         m_qp)

        mcons_r2 := {}
        sr_getconnection():exec("SELECT * FROM r2 WHERE numero_usu = "+sr_cdbvalue(STRZERO(mnum_ecf,2))+" AND data_mov >= "+sr_cdbvalue(mdat1)+" AND data_mov <= "+sr_cdbvalue(mdat2),,.t.,@mcons_r2)
        IF LEN(mcons_r2) > 0
                i := 0
                FOR i = 1 TO LEN(mcons_r2)
                        /*
                        mchv_cript := criptografia(mcons_r2[i,15],'D')
                        IF SUBSTR(mchv_cript,1,20) <> UPPER(mcons_r2[i,1])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,21,1) <> UPPER(mcons_r2[i,2])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,22,20) <> UPPER(mcons_r2[i,3])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,42,2) <> UPPER(mcons_r2[i,4])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,44,6) <> UPPER(mcons_r2[i,5])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,50,6) <> UPPER(mcons_r2[i,6])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,56,6) <> UPPER(mcons_r2[i,7])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,62,8) <> UPPER(mcons_r2[i,8])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,70,8) <> UPPER(mcons_r2[i,9])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,78,14) <> UPPER(mcons_r2[i,10])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,92,1) <> UPPER(mcons_r2[i,11])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,93,6) <> UPPER(mcons_r2[i,12])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,99,6) <> UPPER(mcons_r2[i,13])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,105,14) <> UPPER(mcons_r2[i,14])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ENDIF
                        */
                        mensagem('Gerando o R2: '+mcons_r2[i,1])
                        nBytes := FWrite(nHandle,'R2'+mcons_r2[i,1]+mcons_r2[i,2]+mcons_r2[i,3]+mcons_r2[i,4]+mcons_r2[i,5]+mcons_r2[i,6]+mcons_r2[i,7]+mcons_r2[i,8]+mcons_r2[i,9]+mcons_r2[i,10]+mcons_r2[i,11]+m_qp)
                        if nBytes = 0
                                atencao("Erro na gravacao do conteudo do arquivo do Tipo !")
                                LOOP
                        EndIf
                NEXT
        EndIf

        mcons_r3 := {}
        sr_getconnection():exec("SELECT * FROM r3 WHERE numero_usu = "+sr_cdbvalue(STRZERO(mnum_ecf,2))+" AND data_mov >= "+sr_cdbvalue(mdat1)+" AND data_mov <= "+sr_cdbvalue(mdat2),,.t.,@mcons_r3)
        IF LEN(mcons_r3) > 0
                i := 0
                FOR i = 1 TO LEN(mcons_r3)
                        /*
                        mchv_cript := criptografia(mcons_r3[i,9],'D')
                        IF SUBSTR(mchv_cript,1,20) <> UPPER(mcons_r3[i,1])
                                atencao('1 '+SUBSTR(mchv_cript,1,20)+' - '+mcons_r3[i,1])
                                mcons_r3[i,3] := ALLTRIM(mcons_r3[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r3[i,3])))
                        ELSEIF SUBSTR(mchv_cript,21,1) <> UPPER(mcons_r3[i,2])
                                atencao('2 '+SUBSTR(mchv_cript,21,1)+' - '+mcons_r3[i,2])
                                mcons_r3[i,3] := ALLTRIM(mcons_r3[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r3[i,3])))
                        ELSEIF SUBSTR(mchv_cript,23,20) <> UPPER(mcons_r3[i,3])
                                atencao('3 '+SUBSTR(mchv_cript,23,20)+' - '+mcons_r3[i,3]+m_qp+mchv_cript)
                                mcons_r3[i,3] := ALLTRIM(mcons_r3[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r3[i,3])))
                        ELSEIF SUBSTR(mchv_cript,43,2) <> UPPER(mcons_r3[i,4])
                                atencao('4 '+SUBSTR(mchv_cript,43,2)+' - '+mcons_r3[i,4])
                                mcons_r3[i,3] := ALLTRIM(mcons_r3[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r3[i,3])))
                        ELSEIF SUBSTR(mchv_cript,45,6) <> UPPER(mcons_r3[i,5])
                                atencao('5 '+SUBSTR(mchv_cript,45,6)+' - '+mcons_r3[i,5])
                                mcons_r3[i,3] := ALLTRIM(mcons_r3[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r3[i,3])))
                        ELSEIF SUBSTR(mchv_cript,51,7) <> UPPER(mcons_r3[i,6])
                                atencao('6 '+SUBSTR(mchv_cript,51,7)+' - '+mcons_r3[i,6])
                                mcons_r3[i,3] := ALLTRIM(mcons_r3[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r3[i,3])))
                        ELSEIF SUBSTR(mchv_cript,58,13) <> UPPER(mcons_r3[i,7])
                                atencao('7 '+SUBSTR(mchv_cript,58,13)+' - '+mcons_r3[i,7])
                                mcons_r3[i,3] := ALLTRIM(mcons_r3[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r3[i,3])))
                        ENDIF
                        */
                        mensagem('Gerando o R3: '+mcons_r3[i,1])
                        nBytes := FWrite(nHandle,'R3'+mcons_r3[i,1]+mcons_r3[i,2]+mcons_r3[i,3]+mcons_r3[i,4]+mcons_r3[i,5]+mcons_r3[i,6]+mcons_r3[i,7]+m_qp)
                        if nBytes = 0
                                atencao("Erro na gravacao do conteudo do arquivo do Tipo !")
                                LOOP
                        EndIf
                NEXT
        EndIf

        mcons_r4 := {}
        sr_getconnection():exec("SELECT * FROM r4 WHERE numero_usu = "+sr_cdbvalue(STRZERO(mnum_ecf,2))+" AND data_mov >= "+sr_cdbvalue(mdat1)+" AND data_mov <= "+sr_cdbvalue(mdat2),,.t.,@mcons_r4)
        IF LEN(mcons_r4) > 0
                i := 0
                FOR i = 1 TO LEN(mcons_r4)
                        /*
                        mchv_cript := criptografia(mcons_r4[i,20],'D')
                        IF SUBSTR(mchv_cript,1,20) <> UPPER(mcons_r4[i,1])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,21,1) <> UPPER(mcons_r4[i,2])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,22,20) <> UPPER(mcons_r4[i,3])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,42,2) <> UPPER(mcons_r4[i,4])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,44,6) <> UPPER(mcons_r4[i,5])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,50,6) <> UPPER(mcons_r4[i,6])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,56,8) <> UPPER(mcons_r4[i,7])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,64,14) <> UPPER(mcons_r4[i,8])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,78,13) <> UPPER(mcons_r4[i,9])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,91,1) <> UPPER(mcons_r4[i,10])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,92,13) <> UPPER(mcons_r4[i,11])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,105,1) <> UPPER(mcons_r4[i,12])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,106,14) <> UPPER(mcons_r4[i,13])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,120,1) <> UPPER(mcons_r4[i,14])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,121,13) <> UPPER(mcons_r4[i,15])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,134,1) <> UPPER(mcons_r4[i,16])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,135,40) <> UPPER(mcons_r4[i,17])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,175,14) <> UPPER(mcons_r4[i,18])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ENDIF
                        */
                        mensagem('Gerando o R4: '+mcons_r4[i,1])
                        nBytes := FWrite(nHandle,'R4'+mcons_r4[i,1]+mcons_r4[i,2]+mcons_r4[i,3]+mcons_r4[i,4]+mcons_r4[i,5]+mcons_r4[i,6]+mcons_r4[i,7]+mcons_r4[i,8]+mcons_r4[i,9]+mcons_r4[i,10]+mcons_r4[i,11]+mcons_r4[i,12]+mcons_r4[i,13]+mcons_r4[i,14]+mcons_r4[i,15]+mcons_r4[i,16]+mcons_r4[i,17]+mcons_r4[i,18]+m_qp)
                        if nBytes = 0
                                atencao("Erro na gravacao do conteudo do arquivo do Tipo !")
                                LOOP
                        EndIf
                NEXT
        EndIf
        mcons_r5 := {}
        sr_getconnection():exec("SELECT * FROM r5 WHERE numero_usu = "+sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+" AND data_mov >= "+sr_cdbvalue(mdat1)+" AND data_mov <= "+sr_cdbvalue(mdat2),,.t.,@mcons_r5)
        IF LEN(mcons_r5) > 0
                i := 0
                FOR i = 1 TO LEN(mcons_r5)
                        /*
                        mchv_cript := criptografia(mcons_r5[i,26],'D')
                        IF SUBSTR(mchv_cript,1,20) <> UPPER(mcons_r5[i,1])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,21,1) <> UPPER(mcons_r5[i,2])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,23,20) <> UPPER(mcons_r5[i,3])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,43,2) <> UPPER(mcons_r5[i,4])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,45,6) <> UPPER(mcons_r5[i,5])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,51,6) <> UPPER(mcons_r5[i,6])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,57,3) <> UPPER(mcons_r5[i,7])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,60,14) <> UPPER(mcons_r5[i,8])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,74,100) <> UPPER(mcons_r5[i,9])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,174,7) <> UPPER(mcons_r5[i,10])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,181,3) <> UPPER(mcons_r5[i,11])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,184,8) <> UPPER(mcons_r5[i,12])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,192,8) <> UPPER(mcons_r5[i,13])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,200,8) <> UPPER(mcons_r5[i,14])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,208,14) <> UPPER(mcons_r5[i,15])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,222,7) <> UPPER(mcons_r5[i,16])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,229,1) <> UPPER(mcons_r5[i,17])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,230,7) <> UPPER(mcons_r5[i,18])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,237,13) <> UPPER(mcons_r5[i,19])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,250,13) <> UPPER(mcons_r5[i,20])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,263,1) <> UPPER(mcons_r5[i,21])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,264,1) <> UPPER(mcons_r5[i,22])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,265,1) <> UPPER(mcons_r5[i,23])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,266,1) <> UPPER(mcons_r5[i,24])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ENDIF
                        */
                        mensagem('Gerando o R5: '+mcons_r5[i,1])
                        nBytes := FWrite(nHandle,'R5'+mcons_r5[i,1]+mcons_r5[i,2]+mcons_r5[i,3]+mcons_r5[i,4]+mcons_r5[i,5]+mcons_r5[i,6]+mcons_r5[i,7]+mcons_r5[i,8]+mcons_r5[i,9]+mcons_r5[i,10]+mcons_r5[i,11]+mcons_r5[i,12]+mcons_r5[i,13]+mcons_r5[i,14]+mcons_r5[i,15]+mcons_r5[i,16]+mcons_r5[i,17]+mcons_r5[i,18]+mcons_r5[i,19]+mcons_r5[i,20]+mcons_r5[i,21]+mcons_r5[i,22]+mcons_r5[i,23]+mcons_r5[i,24]+m_qp)
                        if nBytes = 0
                                atencao("Erro na gravacao do conteudo do arquivo do Tipo !")
                                LOOP
                        EndIf
                NEXT
        EndIf

        mcons_r6 := {}
        sr_getconnection():exec("SELECT * FROM r6 WHERE numero_usu = "+sr_cdbvalue(STRZERO(mnum_ecf,2))+" AND data_mov >= "+sr_cdbvalue(mdat1)+" AND data_mov <= "+sr_cdbvalue(mdat2),,.t.,@mcons_r6)
        IF LEN(mcons_r6) > 0
                i := 0
                FOR i = 1 TO LEN(mcons_r6)
                        /*
                        mchv_cript := criptografia(mcons_r6[i,13],'D')
                        IF SUBSTR(mchv_cript,1,20) <> UPPER(mcons_r6[i,1])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ELSEIF SUBSTR(mchv_cript,21,1) <> UPPER(mcons_r6[i,2])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ELSEIF SUBSTR(mchv_cript,23,20) <> UPPER(mcons_r6[i,3])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ELSEIF SUBSTR(mchv_cript,43,2) <> UPPER(mcons_r6[i,4])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ELSEIF SUBSTR(mchv_cript,45,6) <> UPPER(mcons_r6[i,5])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ELSEIF SUBSTR(mchv_cript,51,6) <> UPPER(mcons_r6[i,6])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ELSEIF SUBSTR(mchv_cript,57,6) <> UPPER(mcons_r6[i,7])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ELSEIF SUBSTR(mchv_cript,63,4) <> UPPER(mcons_r6[i,8])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ELSEIF SUBSTR(mchv_cript,67,2) <> UPPER(mcons_r6[i,9])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ELSEIF SUBSTR(mchv_cript,69,8) <> UPPER(mcons_r6[i,10])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ELSEIF SUBSTR(mchv_cript,77,8) <> UPPER(mcons_r6[i,11])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ENDIF
                        */
                        mensagem('Gerando o R6: '+mcons_r6[i,1])
                        nBytes := FWrite(nHandle,'R6'+mcons_r6[i,1]+mcons_r6[i,2]+mcons_r6[i,3]+mcons_r6[i,4]+mcons_r6[i,5]+mcons_r6[i,6]+mcons_r6[i,7]+mcons_r6[i,8]+mcons_r6[i,9]+mcons_r6[i,10]+mcons_r6[i,11]+m_qp)
                        if nBytes = 0
                                atencao("Erro na gravacao do conteudo do arquivo do Tipo !")
                                LOOP
                        EndIf
                NEXT
        EndIf

        mcons_r7 := {}
        sr_getconnection():exec("SELECT * FROM r7 WHERE numero_usu = "+sr_cdbvalue(STRZERO(mnum_ecf,2))+" AND data_mov >= "+sr_cdbvalue(mdat1)+" AND data_mov <= "+sr_cdbvalue(mdat2),,.t.,@mcons_r7)
        IF LEN(mcons_r7) > 0
                i := 0
                FOR i = 1 TO LEN(mcons_r7)
                        /*
                        mchv_cript := criptografia(mcons_r7[i,13],'D')
                        IF SUBSTR(mchv_cript,1,20) <> UPPER(mcons_r7[i,1])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ELSEIF SUBSTR(mchv_cript,21,1) <> UPPER(mcons_r7[i,2])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ELSEIF SUBSTR(mchv_cript,23,20) <> UPPER(mcons_r7[i,3])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ELSEIF SUBSTR(mchv_cript,43,2) <> UPPER(mcons_r7[i,4])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ELSEIF SUBSTR(mchv_cript,45,6) <> UPPER(mcons_r7[i,5])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ELSEIF SUBSTR(mchv_cript,51,6) <> UPPER(mcons_r7[i,6])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ELSEIF SUBSTR(mchv_cript,57,6) <> UPPER(mcons_r7[i,7])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ELSEIF SUBSTR(mchv_cript,63,15) <> UPPER(mcons_r7[i,8])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ELSEIF SUBSTR(mchv_cript,78,13) <> UPPER(mcons_r7[i,9])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ELSEIF SUBSTR(mchv_cript,91,1) <> UPPER(mcons_r7[i,10])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ELSEIF SUBSTR(mchv_cript,92,13) <> UPPER(mcons_r7[i,11])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ENDIF
                        */
                        mensagem('Gerando o R7: '+mcons_r7[i,1])
                        nBytes := FWrite(nHandle,'R7'+mcons_r7[i,1]+mcons_r7[i,2]+mcons_r7[i,3]+mcons_r7[i,4]+mcons_r7[i,5]+mcons_r7[i,6]+mcons_r7[i,7]+mcons_r7[i,8]+mcons_r7[i,9]+mcons_r7[i,10]+mcons_r7[i,11]+m_qp)
                        if nBytes = 0
                                atencao("Erro na gravacao do conteudo do arquivo do Tipo !")
                                LOOP
                        EndIf
                NEXT
        EndIf
        FClose(nhandle)
        GERA_EAD(marquivo)
        mensagem('Gerado com sucesso')
        IF 'S' = op_simnao('S','Deseja Editar o arquivo:')
                MYRUN('NOTEPAD '+ALLTRIM(marquivo))
        ENDIF
//ENDDO
wvw_lclosewindow()
RETURN .T.

************************************  F I M ******************************************
// meio_pag
******************
mdat1 := mdat2 := ctod("  /  /  ")
setcor(1)
op_tela(10,05,13,95,"Meios de Pagamentos")
setcor(1)
@ 01,01 SAY "Data de Inicio.................: "
@ 02,01 SAY "Data de Fim....................: "
WHILE .T.
        SET CENTURY ON
        @ 01,34 GET mdat1 VALID IF(EMPTY(mdat1),.F.,.T.)
        @ 02,34 get mdat2 VALID IF(EMPTY(mdat2) .OR. mdat2 < mdat1,.F.,.T.) WHEN ! EMPTY(mdat1)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mopcao := op_simnao('N','Confirma a impressao do Meios de Pagamentos:')
        IF mopcao = 'N'
                EXIT
        ENDIF
        mensagem('Nomeando o Relatorio Gerencial MEIOS DE PAGAMENTOS...')
        mparametro :=            '================================================'+m_qp
        mparametro := mparametro+'             MEIOS DE PAGAMENTOS           '+m_qp
        mparametro := mparametro+'================================================'+m_qp
        mparametro := mparametro+'DT.ACUMUL. MEIO DE PAGTO TIPO DOC.   VLR.ACUMUL.'+m_qp
        mparametro := mparametro+'================================================'+m_qp

        mdias := mdat2 - mdat1
        meio_pg := ''
        mcons_r7 := {}
        sr_getconnection():exec("SELECT meio_pag,vlr_pago FROM r7 WHERE data_mov = "+sr_cdbvalue(mdat1)+' ORDER BY meio_pag',,.t.,@mcons_r7)
        IF LEN(mcons_r7) > 0
                mtot_meio:=y:= mtot_dia := 0
                FOR y = 1 TO LEN(mcons_r7)
                        meio_pg := mcons_r7[y,1]
                        IF EMPTY(mcons_r7[y,1])
                                LOOP
                        ENDIF
                        WHILE y <= LEN(mcons_r7) .AND. meio_pg = mcons_r7[y,1]
                                IF meio_pg # mcons_r7[y,1]
                                                IF y < LEN(mcons_r7)
                                                        y := Y -1
                                                ENDIF
                                        EXIT
                                ENDIF
                                AADD(mtot_mp,{mcons_r7[y,1],VAL(mcons_r7[y,2])/100})
                                AADD(mmeio_pg,mcons_r7[y,1])
                                mtot_dia:= mtot_dia + VAL(mcons_r7[y,2])/100
                                mtot_meio:= mtot_meio + VAL(mcons_r7[y,2])/100
                                y++
                        ENDDO
                        y:=y-1
                        mparametro := mparametro+DTOC(mdat1)+' '+SUBSTR(meio_pg,1,13)+'CUPOM FISCAL'+TRANSFORM(mtot_meio,'@E 9999,999.99')+m_qp
                        mtot_meio:=0
                NEXT
                mparametro := mparametro+'TOTAL DO DIA '+DTOC(mdat1)+'             '+TRANSFORM(mtot_dia,'@E 9999,999.99')+m_qp
                mparametro := mparametro+'------------------------------------------------'+m_qp
        ENDIF
        mtot_meio:=i:=0
        FOR i = 1 TO mdias
                mcons_r7 := {}
                sr_getconnection():exec("SELECT meio_pag,vlr_pago FROM r7 WHERE data_mov = "+sr_cdbvalue(mdat1+i)+' ORDER BY meio_pag',,.t.,@mcons_r7)
                IF LEN(mcons_r7) > 0
                        y:= mtot_dia := 0
                        FOR y = 1 TO LEN(mcons_r7)
                                meio_pg := mcons_r7[y,1]
                                IF EMPTY(mcons_r7[y,1])
                                        LOOP
                                ENDIF
                                WHILE y <= LEN(mcons_r7) .AND. meio_pg = mcons_r7[y,1]
                                        mensagem(mcons_r7[y,1]+' - '+mcons_r7[y,2])
                                        mponto := ASCAN(mmeio_pg,mcons_r7[y,1])
                                        IF mponto=0
                                                AADD(mtot_mp,{mcons_r7[y,1],VAL(mcons_r7[y,2])/100})
                                                AADD(mmeio_pg,mcons_r7[y,1])
                                        ELSE
                                                mtot_mp[mponto,2] := mtot_mp[mponto,2] + VAL(mcons_r7[y,2])/100
                                        ENDIF
                                        mtot_dia:= mtot_dia + VAL(mcons_r7[y,2])/100
                                        mtot_meio:= mtot_meio + VAL(mcons_r7[y,2])/100
                                        y++
                                ENDDO
                                y := Y -1
                                mparametro := mparametro+DTOC(mdat1+i)+' '+SUBSTR(meio_pg,1,13)+'CUPOM FISCAL'+TRANSFORM(mtot_meio,'@E 9999,999.99')+m_qp
                                mtot_meio:=0
                        NEXT
                        mparametro := mparametro+'TOTAL DO DIA '+DTOC(mdat1+i)+'             '+TRANSFORM(mtot_dia,'@E 9999,999.99')+m_qp
                        mparametro := mparametro+'------------------------------------------------'+m_qp
                ENDIF
        NEXT
        mparametro := mparametro+'================================================'+m_qp
        mparametro := mparametro+'TOTAIS ACUMULADOS NO PERIODO:                   '+m_qp
        mparametro := mparametro+'================================================'+m_qp
        i:=0
        FOR i = 1 TO LEN(mmeio_pg)
                mparametro := mparametro+mtot_mp[i,1]+'     '+TRANSFORM(mtot_mp[i,2],'@E 9999,999.99')+m_qp
                mtotal_geral := mtotal_geral + mtot_mp[i,2]
        NEXT
        mparametro := mparametro+'------------------------------------------------'+m_qp
        mparametro := mparametro+'TOTAL DO PERIDO: '+TRANSFORM(mtotal_geral,'@E 999,999,999.99')+m_qp
        mparametro := mparametro+'================================================'+m_qp

        mhora := TIME()
        mhora := STRTRAN(mhora,':','')+SPACE(8-LEN(STRTRAN(mhora,':','')))
        NCupom := num_cupom()
        Operacoes = Space(7)
        Operacoes := SUBSTR(IBR_COMANDO('ECF.NumGNF',,5),5,6)
        sRel = space(7)
        sRel := SUBSTR(IBR_COMANDO('ECF.NumGRG',,5),5,6)

        mind_rel := Ren_RGerencial('Meios Pagamento')
        co := 0
        FOR co = 1 TO 1
                IBR_OK( IBR_COMANDO('ECF.LinhaRelatorioGerencial',{mparametro},5 ))
        Next
        IBR_FIM_REL()

        SET CENTURY ON
        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
                m_MFAdicional+; //2
                m_ModeloImp+; //3
                STRZERO(VAL(m_numerocaixa),2)+; //4
                NCupom+SPACE(6-LEN(NCupom))+; //5
                Operacoes+SPACE(6-LEN(operacoes))+; //6
                sRel+SPACE(6-LEN(sRel))+; //7
                STRZERO(0,4)+; //8
                'RG'+; //9
                SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)+SPACE(8-LEN(SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)))+; //10
                mhora+; //11
                DTOC(mdata_sis)
        sr_getconnection():exec('INSERT INTO r6 ('+;
                'NUMERO_FAB  ,'+; //1
                'MF_ADICIONAL,'+; //2
                'MODELO_ECF  ,'+; //3
                'NUMERO_USU  ,'+; //4
                'COO         ,'+; //5
                'GNF         ,'+; //6
                'GRG         ,'+; //7
                'CDC         ,'+; //8
                'DENOMICAO   ,'+; //9
                'DATA_FINAL  ,'+; //10
                'HORA_FINAL  ,'+; //11
                'DATA_MOV    ,'+; //12
                'CHV_CRIPT   ,'+; //13
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(m_numeroSerie)+','+; //1
                sr_cdbvalue(m_MFAdicional)+','+; //2
                sr_cdbvalue(m_ModeloImp)+','+; //3
                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                sr_cdbvalue(NCupom)+','+; //5
                sr_cdbvalue(Operacoes)+','+; //6
                sr_cdbvalue(sRel)+','+; //7
                sr_cdbvalue(STRZERO(0,4))+','+; //8
                sr_cdbvalue('RG')+','+; //9
                sr_cdbvalue(SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2))+','+; //10
                sr_cdbvalue(mhora)+','+; //11
                sr_cdbvalue(mdata_sis)+','+; //12
                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //26
                sr_cdbvalue(' ')+')',,.f.)
        SET CENTURY OFF

        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
                m_MFAdicional+; //2
                m_ModeloImp+; //3
                STRZERO(VAL(m_numerocaixa),2)+; //4
                NCupom+SPACE(6-LEN(NCupom))+; //5
                STRZERO(0,6)+; //6
                Operacoes+SPACE(6-LEN(operacoes))+; //7
                SPACE(15)+; //8
                STRZERO(0,13)+; //9
                'N'+; //10
                STRZERO(0,13)+; //11
                DTOC(mdata_sis)

        sr_getconnection():exec('INSERT INTO r7 ('+;
                'NUMERO_FAB  ,'+; //1
                'MF_ADICIONAL,'+; //2
                'MODELO_ECF  ,'+; //3
                'NUMERO_USU  ,'+; //4
                'COO         ,'+; //5
                'CCF         ,'+; //6
                'GNF         ,'+; //7
                'MEIO_PAG    ,'+; //8
                'VLR_PAGO    ,'+; //9
                'IND_ESTORNO ,'+; //10
                'VLR_ESTORNO ,'+; //11
                'DATA_MOV    ,'+; //12
                'CHV_CRIPT   ,'+; //13
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(m_numeroSerie)+','+; //1
                sr_cdbvalue(m_MFAdicional)+','+; //2
                sr_cdbvalue(m_ModeloImp)+','+; //3
                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                sr_cdbvalue(NCupom)+','+; //5
                sr_cdbvalue(STRZERO(0,6))+','+; //6
                sr_cdbvalue(Operacoes)+','+; //7
                sr_cdbvalue(SPACE(15))+','+; //8
                sr_cdbvalue(STRZERO(0,13))+','+; //9
                sr_cdbvalue('N')+','+; //10
                sr_cdbvalue(STRZERO(0,13))+','+; //11
                sr_cdbvalue(mdata_sis)+','+; //12
                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //26
                sr_cdbvalue(' ')+')',,.f.)
ENDDO
SET CENTURY OFF
fecha_tela()
RETURN NIL
*************************************  F I M ******************************************
