****************************
* EMITE RECIBOS
****************************
MEMVAR getlist,nivel_acess,mdata_sis
FUNCTION sacrec
***************
LOCAL mprg:='SACREC',mtitulo:='EMISSAO DE RECIBO DA FIRMA',;
      lci,cci,lba,cba,lin,lin1,lin2,lin3,rpreco,rrecibo,linhas := 0,;
      opcao,mdata,mvalor,mref,mref1,mref2,mref3,;
      mref4,mref5,mref6,mref7,traco,mquantd:=0,i,linha,mdevedor

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcliente,mcod_cli:=0,cons_cli := {}

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF

lci := cci := 0
lba := 13
cba := 66
lin1 := '          Recebi de '
lin2 := ' a importancia de R$ '
lin3 := ' referente a '
opcao := SPACE(1)
traco := REPLI('-',80)
op_tela(05,10,18,76,mtitulo)
WHILE .T.
        mtipo_imp := m_indiv[1,18]
        mensagem('Preencha os campos  -  <ESC> p/Retornar')
        mcod_cli := mvalor := 0
        mcliente := SPACE(40)
        mdata := mdata_sis
        mref := mref1 := mref2 := mref3 := mref4 := mref5 := mref6 := SPACE(50)
        mref7 := ', que damos plena quitacao da mesma'
        mquantd := 1
        setcor(1)
        SET INTEN ON
        DEVPOS(lci+1,cci+2);DEVOUT('Data:')
        DEVPOS(lci+2,cci+2);DEVOUT('Cod. Cliente:')
        DEVPOS(lci+3,cci+2);DEVOUT('Valor:')
        DEVPOS(lci+4,cci+2);DEVOUT('Referente a:')
        DEVPOS(lci+12,cci+2);DEVOUT('Quantidade de Copia:')
        @ lci+1,cci+8 GET mdata PICT '99/99/99'
        @ lci+2,cci+16 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,lci+2,cci+21)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF ! EMPTY(mcod_cli)
                mcliente := cli->razao
        ENDIF
        @ lci+2,cci+21 GET mcliente PICT '@!'
        @ lci+3,cci+9 GET mvalor PICT '9,999,999.99'
        @ lci+4,cci+15 GET mref
        @ lci+5,cci+15 GET mref1
        @ lci+6,cci+15 GET mref2
        @ lci+7,cci+15 GET mref3
        @ lci+8,cci+15 GET mref4
        @ lci+9,cci+15 GET mref5
        @ lci+10,cci+15 GET mref6
        @ lci+11,cci+15 GET mref7
        @ lci+12,cci+23 GET mquantd PICT '99'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF ! imp_arq('RECIBO.REL','R')
                LOOP
        ENDIF
        rrecibo := lin1+RTRIM(mcliente)+lin2+LTRIM(TRANSFORM(mvalor,'@E 9,999,999.99'))+' '+'('+RTRIM(extenso(mvalor,.T.,'real','reais'))+')'+lin3         + RTRIM(mref) + RTRIM(mref1) + RTRIM(mref2) + RTRIM(mref3) + RTRIM(mref4) + RTRIM(mref5) + RTRIM(mref6) + mref7
        FOR i = 1 TO mquantd
                imprt(mtipo_imp,'E')
                DEVPOS(PROW()+1,00);DEVOUT(RTRIM(m_set[1,129]))
                imprt(mtipo_imp,'N',1)
                DEVPOS(PROW(),00);DEVOUT('End.: '+RTRIM(m_set[1,132])+' - '+RTRIM(m_set[1,133])+'-'+RTRIM(m_set[1,134])+'-'+m_set[1,19])
                DEVPOS(PROW()+1,00);DEVOUT('Fone: '+m_set[1,136])
                DEVPOS(PROW()+1,00);DEVOUT('Inscr.: '+m_set[1,128]+' / C.G.C.: ')
                DEVPOS(PROW(),PCOL());DEVOUTPICT(SUBSTR(m_set[1,123],1,14),'@@R 99.999.999/9999-99')
                DEVPOS(PROW()+1,00);DEVOUT('Data Emissao: '+DTOC(mdata))
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('Ä',80))
                imprt(mtipo_imp,'E',2)
                DEVPOS(PROW(),18);DEVOUT('RECIBO')
                imprt(mtipo_imp,'N',2)
                DEVPOS(PROW(),45);DEVOUT('R$ ')
                DEVPOS(PROW(),49);DEVOUT('('+LTRIM(TRANSFORM(mvalor,'@E 9,999,999.99'))+')')
                DEVPOS(PROW()+1,01);DEVOUT(' ')

                linhas := MLCOUNT(rrecibo,70)

                FOR linha = 1 TO  linhas
                        LIN := MEMOLINE(rrecibo,70,linha,,10)
                        DEVPOS(PROW()+1,05);DEVOUT(PADR(RTRIM(LIN),70))
*                       DEVPOS(PROW()+1,05);DEVOUT(IMPAC(LIN,.T.))
                NEXT

                DEVPOS(PROW()+2,00);DEVOUT(PADC(RTRIM(m_set[1,134])+', '+DTOC(mdata),80))
                DEVPOS(PROW()+3,00);DEVOUT(PADC(REPLI('-',LEN(RTRIM(m_set[1,129]))+2),80))
                DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(m_set[1,129]),80))
                DEVPOS(PROW()+3,66);DEVOUT(TIME()+' Hrs.')
                DEVPOS(PROW()+1,00);DEVOUT(traco)
                DEVPOS(PROW()+2,00);DEVOUT(' ')
                EJECT
        NEXT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('RECIBO.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* F I M ******************************8
* EMITE RECIBOS P/FUNCIONARIOS
****************************
FUNCTION sacrec1
****************
LOCAL MPRG:='SACREC1',;
      lci,cci,lba,cba,lin,lin1,lin2,lin3,rpreco,rrecibo,linhas := 0,;
      opcao,tela1,telarec,telaprin,mcliente,mdata,mvalor,mref,mref1,mref2,mref3,;
      traco,mfunc,mcpf_func,mquantd:=1,i,linha

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),cons_cli := {}

IF ! ver_nivel(mprg,'EMISSAO DE RECIBO PAGAMENTO DE FUNCIONARIOS','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
lci := cci := 0
lba := 13
cba := 66
lin1 := '          Recebi de '
lin2 := ' a importancia de R$ '
lin3 := ' referente a '
opcao := SPACE(1)
traco := REPLI('-',80)
op_tela(05,10,18,76,'RECIBO PAGAMENTO DE FUNCIONARIOS')
WHILE .T.
        mtipo_imp := m_indiv[1,18]

        mensagem('Preencha os campos  -  <ESC> p/Retornar')
        mcliente := SPACE(35)
        mdata := mdata_sis
        mvalor := 0
        mref :=mref1 :=mref2 :=mref3 := SPACE(50)
        mfunc := SPACE(40)
        mcpf_func := SPACE(14)
        mquantd := 1
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Data.......:')
        DEVPOS(lci+2,cci+2);DEVOUT('Funcionario:')
        DEVPOS(lci+3,cci+2);DEVOUT('CPF Func...:')
        DEVPOS(lci+4,cci+2);DEVOUT('Valor......:')
        DEVPOS(lci+5,cci+2);DEVOUT('Referente a:')
        DEVPOS(lci+9,cci+2);DEVOUT('Quantidade de Copia:')
        @ lci+1,cci+14 GET mdata PICT '99/99/99'
        @ lci+2,cci+14 GET mfunc
        @ lci+3,cci+14 GET mcpf_func
        @ lci+4,cci+14 GET mvalor PICT '9,999,999.99'
        @ lci+5,cci+15 GET mref
        @ lci+6,cci+15 GET mref1
        @ lci+7,cci+15 GET mref2
        @ lci+8,cci+15 GET mref3
        @ lci+9,cci+23 GET mquantd PICT '99'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF ! imp_arq('RECIBO.REL','R')
                LOOP
        ENDIF
        rrecibo := lin1+RTRIM(m_set[1,129])+lin2+LTRIM(TRANSFORM(mvalor,'@E 9,999,999.99'))+' '+'('+RTRIM(extenso(mvalor,.T.,'real','reais'))+')'+lin3         + RTRIM(mref) + RTRIM(mref1) + RTRIM(mref2) + RTRIM(mref3)
        FOR i = 1 TO mquantd
                imprt(mtipo_imp,'E')
                DEVPOS(PROW()+1,00);DEVOUT(RTRIM(m_set[1,129]))
                imprt(mtipo_imp,'N',1)
                DEVPOS(PROW(),00);DEVOUT('End.: '+RTRIM(m_set[1,132])+' - '+RTRIM(m_set[1,133])+'-'+RTRIM(m_set[1,134])+'-'+m_set[1,19])
                DEVPOS(PROW()+1,00);DEVOUT('Fone: '+m_set[1,136])
                DEVPOS(PROW()+1,00);DEVOUT('Inscr.: '+m_set[1,128]+' / C.G.C.: ')
                DEVPOS(PROW(),PCOL());DEVOUTPICT(SUBSTR(m_set[1,123],1,14),'@@R 99.999.999/9999-99')
                DEVPOS(PROW()+1,00);DEVOUT('Data Emissao: '+DTOC(mdata))
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('Ä',80))
                imprt(mtipo_imp,'E',2)
                DEVPOS(PROW(),18);DEVOUT('RECIBO')
                imprt(mtipo_imp,'N',2)
                DEVPOS(PROW(),45);DEVOUT('R$ ')
                DEVPOS(PROW(),49);DEVOUT('('+LTRIM(TRANSFORM(mvalor,'@E 9,999,999.99'))+')')
                DEVPOS(PROW()+1,01);DEVOUT(' ')

                linhas := MLCOUNT(rrecibo,70)

                FOR linha = 1 TO  linhas
                        LIN := MEMOLINE(rrecibo,70,linha,,10)
                        DEVPOS(PROW()+1,05);DEVOUT(PADR(RTRIM(LIN),70))
*                       DEVPOS(PROW()+1,05);DEVOUT(IMPAC(LIN,.T.))
                NEXT

                DEVPOS(PROW()+2,00);DEVOUT(PADC(RTRIM(m_set[1,134])+', '+DTOC(mdata),80))
                DEVPOS(PROW()+3,00);DEVOUT(PADC(REPLI('-',LEN(RTRIM(m_set[1,129])))+'          '+REPLI('-',LEN(RTRIM(mfunc))),80))
                DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(m_set[1,129])+'          '+RTRIM(mfunc),80))
                DEVPOS(PROW()+1,00);DEVOUT(PADC(REPLI(' ',LEN(RTRIM(m_set[1,129])))+'          CPF:'+mcpf_func+SPACE(20),80))
                DEVPOS(PROW()+2,66);DEVOUT(TIME()+' Hrs.')
                DEVPOS(PROW()+1,00);DEVOUT(traco)
                DEVPOS(PROW()+2,00);DEVOUT(' ')
                EJECT
        NEXT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('RECIBO.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* F I M ******************************8
*** SACREC2.PRG: RECIBO DE PAG.DE DOCUMENTOS(Receber)
*********************************************
FUNCTION sacrec2
****************
LOCAL MPRG:='SACREC2',;
      tela,lin,mtipo,mvlpago,mdata1,mdata2,mdatapg,msele,morde,opcao:=' ',mbaixa,;
      mdias_atras:=0,mquantd_doc:=0,mtot_multa:=0,mtotal:=0,mpoint,;
      lci,cci,lba,cba,li,ci,la,ca,i:=0,mjuros:=0,mmulta:=0,mduplicata,;
      nPos,vEmp := {},aret:={},cComm,m_param:={},mdevedor:={}

PRIVATE m_dupr:={},m_pos:={},mcod_cli,mfornec,mforn_aux,mcod_cartao,cons_cli := {}

IF ! ver_nivel(mprg,'EMISSAO DE RECIBO PAGAMENTO DE DOCUMENTO A RECEBER','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := cci := 0
lba := 06
cba := 76

li := 07
ci := 00
la := 19
ca := 78

lin=1
mfornec := mforn_aux := 0
mduplicata := SPACE(12)
*------------------------------------------------------------------------------------
IF ! AbriArq('saccarta','car');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
*------------------------------------------------------------------------------------
*****************
SELE('dupr');ORDSETFOCUS(3)
*****************
msele := SELE()
morde := INDEXORD()
op_tela(02,02,22,78,' Recibo Doc.Pagos (C.Receber)')
WHILE .T.
        limpa(00,00,30,100)
        ASIZE(m_dupr,0)
        ASIZE(m_pos,0)
        mtipo := 0
        mbaixa := 'N'
        mdata1 := mdata_sis - 3
        mdata2 := mdata_sis
        mdatapg := mdata_sis
        mcod_cli = 0
        @ lci+4,cci TO lci+4,cba
        Mensagem('Digite data do RECIBO DOC. PAGOS - <F1>Ajuda - [ESC] Abandona.')
        DEVPOS(lci+1,cci+1);DEVOUT('Digite o Periodo........:          a')
        DEVPOS(lci+2,cci+1);DEVOUT('Digite a Data Emissao...:')
        DEVPOS(lci+3,cci+1);DEVOUT('Digite a Cod.Cliente....:')
        mtipo := SPACE(2)
        @ lci+1,cci+27 GET mdata1 VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+1,COL()+3 GET mdata2 VALID IF(mdata2 < mdata1,.F.,.T.)
        @ lci+2,cci+27 GET mdatapg VALID IF(mdatapg < mdata1,.F.,.T.)
        @ lci+3,cci+27 GET mcod_cli pict "99999" VALID lim_get() .AND. IF(EMPTY(mcod_cli),.F.,ver_cli(mcod_cli,lci+3,cci+33)) WHEN men_get(lci+4,cci+27,'Informe o cliente que deseja ou nao informe p/imprimir todos - <F1> Ajuda')
        READ
        IF LASTKEY()=27
                EXIT
        ENDIF
        **************
        SELE('dupr');ORDSETFOCUS(3)
        GO TOP
        **************
        dupr->(DBSEEK(DTOS(mdata1),.T.))
        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        setcor(10)
        @ lci+5,cci+12 PROMPT '  GERAL  '
        @ lci+5,cci+23 PROMPT ' CHEQUES '
        @ lci+5,cci+34 PROMPT ' CARTOES '
        SET INTEN ON
        MENU TO mtipo
        setcor(1)
        IF mtipo = 3
                mcod_cartao := 0
                botao(12,21,14,60)
                DEVPOS(13,22);DEVOUT('Cod.Cartao:')
                @ 13,COL()+1 GET mcod_cartao PICT '999' VALID ver_cartao(mcod_cartao,13,COL()+1)
                READ
                IF LASTKEY() = 27
                        LOOP
                ENDIF
        ENDIF
        IF LASTKEY() = 27
                LOOP
        ENDIF
        mjuros := mmulta := mquantd_doc := mtot_multa := mtotal := 0
        cComm  := "SELECT * FROM sacdupr WHERE datpag BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)+ " AND datpag IS NOT NULL"
        ccomm := ccomm + " AND fornec = "+sr_cdbvalue(mcod_cli)
        IF mtipo = 2
                ccomm := ccomm + " AND tipo = "+sr_cdbvalue('CH')
        ELSEIF mtipo = 3
                ccomm := ccomm + " AND tipo = "+sr_cdbvalue('CT')
                IF ! EMPTY(mcod_cartao)
                       ccomm := ccomm + " AND numero = "+sr_cdbvalue(STRZERO(mcod_cartao,3))
                ENDIF
        ELSEIF mtipo = 4
                ccomm := ccomm + " AND tipo = "+sr_cdbvalue('DU')
        ENDIF
        ccomm := ccomm + " ORDER BY datpag,duplicata"
        aret:={}
        sr_getconnection():exec(ccomm,,.t.,@aret)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(aret) = 0
                atencao('Nao existe documento neste periodo')
                LOOP
        ENDIF
        i:=0
        FOR i = 1 TO LEN(aret)
                AADD(m_dupr,STR(aret[i,7],5)+' '+aret[i,2]+' '+aret[i,4]+' '+DTOC(aret[i,11])+' '+TRANSFORM(aret[i,19],'999,999.99')+' '+TRANSFORM(aret[i,23],'999,999.99')+' '+TRANSFORM(aret[i,20],'999,999.99'))
                AADD(m_pos,{aret[i,65],' ',aret[i,19],aret[i,23],aret[i,20],aret[i,11]})
        NEXT
        mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
        botao(li,ci,la,ca)
        setcor(3)
        DEVPOS(li+1,ci+01);DEVOUT('Client')
        DEVPOS(li+1,ci+08);DEVOUT('Documento')
        DEVPOS(li+1,ci+21);DEVOUT('Data Pg.')
        DEVPOS(li+1,ci+35);DEVOUT('Valor')
        DEVPOS(li+1,ci+41);DEVOUT('Juros+Mult')
        DEVPOS(li+1,ci+53);DEVOUT('Vlr.Total')
        @ li+2,ci+1 TO li+2,ca-1
        @ la-2,ci+1 TO la-2,ca-1
        setcor(1)
        DEVPOS(la-1,ci+1);DEVOUT('Qtd.Doc.:       Multa/Juros R$:             Total R$:')
        opcao := op_simnao('N','Deseja marcar todas os Documentos:')
        IF opcao = 'S'
                i := 0
                FOR i = 1 TO LEN(m_dupr)
                        m_dupr[i] := SUBSTR(m_dupr[i],1,64)+' X'
                        m_pos[i,2] := 'X'
                        mquantd_doc ++
                        mtot_multa := mtot_multa + m_pos[i,4]
                        mtotal := mtotal + m_pos[i,5]
                NEXT
        ENDIF
        mpoint := 0
        WHILE .T.
                setcor(3)
                DEVPOS(la-1,ci+11);DEVOUT(TRANSFORM(mquantd_doc,'99999'))
                DEVPOS(la-1,ci+33);DEVOUT(TRANSFORM(mtot_multa,'999,999.99'))
                DEVPOS(la-1,ci+58);DEVOUT(TRANSFORM(mtotal,'999,999.99'))
                setcor(1)
                setcor(10);mpoint := ACHOICE(li+3,ci+1,la-3,ca-1,m_dupr,,,mpoint+1);setcor(1)
                DO CASE
                        CASE LASTKEY() = 13
                                IF mpoint > LEN(m_dupr)
                                        LOOP
                                ELSEIF m_pos[mpoint,2] = 'X'
                                        m_dupr[mpoint] := SUBSTR(m_dupr[mpoint],1,64)+'  '
                                        m_pos[mpoint,2] := ' '
                                        mquantd_doc --
                                        mtot_multa := mtot_multa - m_pos[mpoint,4]
                                        mtotal := mtotal - m_pos[mpoint,5]
                                ELSE
                                        m_dupr[mpoint] := SUBSTR(m_dupr[mpoint],1,64)+' X'
                                        m_pos[mpoint,2] := 'X'
                                        mquantd_doc ++
                                        mtot_multa := mtot_multa + m_pos[mpoint,4]
                                        mtotal := mtotal + m_pos[mpoint,5]
                                ENDIF
                        CASE LASTKEY() = 27
                                EXIT
                ENDCASE
        ENDDO
        /*
        IF 'X' $ m_pos
                atencao('ok')
        ELSE
                atencao('NAO')
        ENDIF
        */
        i := 0
        FOR i = 1 TO LEN(m_dupr)
                IF m_pos[i,2] = 'X'
                        EXIT
                ENDIF
        NEXT
        IF i > LEN(m_dupr) .OR. m_pos[i,2] <> 'X'
                atencao('Nao tem nenhum Documento marcado')
                LOOP
        ENDIF
        i := 0
        FOR i = 1 TO LEN(m_dupr)
                IF m_pos[i,2] = ' '
                        m_dupr[i] := ' '
                ENDIF
        NEXT

        IF 'S'= op_simnao('S','Confirma a Impressao:')
                mdevedor := {}
                sr_getconnection():exec("SELECT SUM(valor) FROM sacdupr WHERE fornec = "+sr_cdbvalue(mcod_cli) +" AND datpag IS NULL",,.t.,@mdevedor)
                sr_getconnection():exec('COMMIT',,.f.)
                        // 1         2          3          4         5        6       7      8         9
                rec_dupr(m_dupr,m_pos[1,1],mquantd_doc,mtot_multa,mtotal,m_pos[1,6],mtotal,mtotal,mdevedor[1,1],mcod_cli) // con252
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
********************************* F I M ********************************
* EMITE RECIBOS AVULSO
****************************
FUNCTION sacrec3
****************
LOCAL mprg:='SACREC3',;
      lci,cci,lba,cba,lin,lin1,lin2,lin3,rpreco,rrecibo,linhas := 0,;
      opcao,tela1,telarec,telaprin,mcliente,mdata,mvalor,mref,mref1,mref2,mref3,;
      mref4,mref5,mref6,mref7,traco,mquantd:=0,memitente,mcpf_emi,i,linha

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),cons_cli := {}

IF ! ver_nivel(mprg,'EMISSAO DE RECIBO DIVERSOS','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := cci := 0
lba := 13
cba := 66
lin1 := '          Recebi de '
lin2 := ' a importancia de R$ '
lin3 := ' referente a '
opcao := SPACE(1)
traco := REPLI('-',80)
op_tela(02,02,22,78,' R E C I B O')
WHILE .T.
        mtipo_recibo := 'F'
        mtipo_imp := m_indiv[1,18]
        mensagem('Preencha os campos  -  <ESC> p/Retornar')
        mcliente := m_set[1,129]
        mdata := mdata_sis
        mvalor := 0
        memitente := SPACE(35)
        mcpf_emi := SPACE(14)
        mref := mref1 :=mref2 :=mref3 :=mref4 :=mref5 :=mref6 := SPACE(50)
        mref7 := ', que damos plena quitacao da mesma'
        mquantd := 1
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Data:')
        DEVPOS(lci+2,cci+2);DEVOUT('Nome:')
        DEVPOS(lci+3,cci+2);DEVOUT('Valor:')
        DEVPOS(lci+4,cci+2);DEVOUT('Referente a:')
        DEVPOS(lci+12,cci+2);DEVOUT('Emitente:')
        DEVPOS(lci+13,cci+2);DEVOUT('CPF.....:')
        DEVPOS(lci+14,cci+2);DEVOUT('[F]ormulario [B]obina:')
        DEVPOS(lci+15,cci+2);DEVOUT('Quantidade de Copia..:')
        @ lci+1,cci+8 GET mdata PICT '99/99/99'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        @ lci+2,cci+8 GET mcliente PICT '@!'
        @ lci+3,cci+9 GET mvalor PICT '9,999,999.99'
        @ lci+4,cci+15 GET mref
        @ lci+5,cci+15 GET mref1
        @ lci+6,cci+15 GET mref2
        @ lci+7,cci+15 GET mref3
        @ lci+8,cci+15 GET mref4
        @ lci+9,cci+15 GET mref5
        @ lci+10,cci+15 GET mref6
        @ lci+11,cci+15 GET mref7
        @ lci+12,cci+12 GET memitente
        @ lci+13,cci+12 GET mcpf_emi
        @ lci+14,cci+25 GET mtipo_recibo PICT '@!' VALID mtipo_recibo $ 'F,B'
        @ lci+15,cci+25 GET mquantd PICT '99'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF ! imp_arq('RECIBO.REL','R')
                LOOP
        ENDIF
        rrecibo := lin1+RTRIM(mcliente)+lin2+LTRIM(TRANSFORM(mvalor,'@E 9,999,999.99'))+' '+'('+RTRIM(extenso(mvalor,.T.,'real','reais'))+')'+lin3         + RTRIM(mref) + RTRIM(mref1) + RTRIM(mref2) + RTRIM(mref3) + RTRIM(mref4) + RTRIM(mref5) + RTRIM(mref6) + mref7
        IF mtipo_recibo = 'F'
                FOR i = 1 TO mquantd
                        imprt(mtipo_imp,'E')
                        DEVPOS(PROW(),18);DEVOUT('RECIBO')
                        imprt(mtipo_imp,'N',2)
                        DEVPOS(PROW(),45);DEVOUT('R$ ')
                        DEVPOS(PROW(),49);DEVOUT('('+LTRIM(TRANSFORM(mvalor,'@E 9,999,999.99'))+')')
                        DEVPOS(PROW()+1,01);DEVOUT(' ')

                        linhas := MLCOUNT(rrecibo,70)

                        FOR linha = 1 TO  linhas
                                LIN := MEMOLINE(rrecibo,70,linha,,10)
                                DEVPOS(PROW()+1,05);DEVOUT(PADR(RTRIM(LIN),70))
*                               DEVPOS(PROW()+1,05);DEVOUT(IMPAC(LIN,.T.))
                        NEXT

                        DEVPOS(PROW()+2,00);DEVOUT(PADC(RTRIM(m_set[1,134])+', '+DTOC(mdata),80))
                        DEVPOS(PROW()+3,00);DEVOUT(PADC(REPLI('-',LEN(RTRIM(memitente))+2),80))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(memitente),80))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(mcpf_emi),80))
                        DEVPOS(PROW()+3,66);DEVOUT(TIME()+' Hrs.')
                        DEVPOS(PROW()+1,00);DEVOUT(traco)
                        DEVPOS(PROW()+2,00);DEVOUT(' ')
                        EJECT
                NEXT
        ELSE
                traco := REPLI('-',54)
                FOR i = 1 TO mquantd
                        imprt(mtipo_imp,'C')
                        imprt(mtipo_imp,'S')
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('RECIBO R$: ('+LTRIM(TRANSFORM(mvalor,'@E 9,999,999.99'))+')',54))
                        DEVPOS(PROW()+1,01);DEVOUT(' ')

                        linhas := MLCOUNT(rrecibo,50)

                        FOR linha = 1 TO  linhas
                                LIN := MEMOLINE(rrecibo,50,linha,,5)
                                DEVPOS(PROW()+1,00);DEVOUT(PADR(RTRIM(LIN),50))
                        NEXT

                        DEVPOS(PROW()+2,00);DEVOUT(PADC(RTRIM(m_set[1,134])+', '+DTOC(mdata),53))
                        DEVPOS(PROW()+3,00);DEVOUT(PADC(REPLI('-',LEN(RTRIM(memitente))+2),53))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(memitente),53))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(mcpf_emi),53))
                        DEVPOS(PROW()+3,40);DEVOUT(TIME()+' Hrs.')
                        DEVPOS(PROW()+1,00);DEVOUT(traco)
                        DEVPOS(PROW()+2,00);DEVOUT(' ')
                        DEVPOS(PROW()+m_indiv[1,16],00);DEVOUT(CHR(18))
                NEXT
                imprt('M','T-')
        ENDIF

        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('RECIBO.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* F I M ******************************8
* EMITE RECIBOS ENTREGA DE MERCADORIAS
****************************
FUNCTION sacrec4
****************
LOCAL mprg:='SACREC4',;
      lci,cci,lba,cba,lin1,lin2,linhas := 0,rrecibo,;
      opcao,tela1,telarec,telaprin,mnum_ped,;
      traco,mquantd:=0,i,linha

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcliente,mcpf,mcgc,cons_cli := {}

IF ! ver_nivel(mprg,'EMISSAO DE RECIBO DE ENTREGA MERCADORIAS ','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := cci := 0
lba := 05
cba := 66
lin1 := '          Recebi(emos) de '
lin2 := ' a(s) Mercadoria(s) constante no PEDIDO No.: '
opcao := SPACE(1)
traco := REPLI('-',80)
op_tela(10,02,15,78,'RECIBO DE ENTREGA MERCADORIAS ')
WHILE .T.
        mtipo_imp := m_indiv[1,18]
        mensagem('Preencha os campos  -  <ESC> p/Retornar')
        mcliente := m_set[1,129]
        mnum_ped := 0
        mquantd := 1
        setcor(1)
        DEVPOS(lci+1,cci+1);DEVOUT('Nome..:')
        DEVPOS(lci+2,cci+1);DEVOUT('Pedido:')
        DEVPOS(lci+3,cci+1);DEVOUT('Ident.:')
        DEVPOS(lci+4,cci+1);DEVOUT('Copia.:')

        @ lci+1,cci+9 GET mcliente PICT '@!'
        @ lci+2,cci+9 GET mnum_ped PICT '999999'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        *****************************
        SELE('ped_s');ORDSETFOCUS(1)
        GO TOP
        *****************************
        IF ! ped_s->(DBSEEK(STRZERO(mnum_ped,6)))
                atencao('Nao foi possivel encontrar este PEDIDO')
                LOOP
        ENDIF
        ver_cli(VAL(ped_s->pcod_cli),lci+3,cci+9)
        @ lci+4,cci+9 GET mquantd PICT '99'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF ! imp_arq('RECIBO.REL','R')
                LOOP
        ENDIF
        rrecibo := lin1+RTRIM(mcliente)+lin2+STRZERO(mnum_ped,6)
        FOR i = 1 TO mquantd
                DEVPOS(PROW()+2,00);DEVOUT('')
                imprt(mtipo_imp,'E')
                DEVPOS(PROW(),10);DEVOUT('RECIBO DE ENTREGA')
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+5,01);DEVOUT(' ')

                linhas := MLCOUNT(rrecibo,70)

                FOR linha = 1 TO  linhas
                        LIN := MEMOLINE(rrecibo,70,linha,,10)
                        DEVPOS(PROW()+1,05);DEVOUT(PADR(RTRIM(LIN),70))
                NEXT

                DEVPOS(PROW()+5,00);DEVOUT(PADC('Data do Recebimento: ...../...../.....',80))
                DEVPOS(PROW()+4,00);DEVOUT(PADC(REPLI('-',LEN(RTRIM(mcliente))+2),80))
                DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(mcliente),80))
                DEVPOS(PROW()+3,00);DEVOUT(traco)
                EJECT
        NEXT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('RECIBO.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* F I M ******************************8
* EMITE RECIBOS ENTREGA DE MERCADORIAS
****************************
FUNCTION sacrec5(mtp)
**********************
LOCAL mprg:='SACREC5',;
      lci,cci,lba,cba,lin1,lin2,linhas := 0,rrecibo,;
      opcao,tela1,telarec,telaprin,;
      traco,mquantd:=0,i,linha,cons_rec,mdata,mtipo_rec
MEMVAR mnum_ped
PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcliente,mcpf,mcgc,cons_cli := {}

IF ! ver_nivel(mprg,'EMISSAO DE RECIBO DE ENTREGA MERCADORIAS (2)','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := cci := 0
lba := 05
cba := 66
lin1 := '          Recebi(emos) da(e) '
lin2 := ' a(s) Mercadoria(s) constante no PEDIDO No.: '
opcao := SPACE(1)
traco := REPLI('-',80)
op_tela(10,02,16,78,'RECIBO DE ENTREGA MERCADORIAS ')
WHILE .T.
        mtipo_imp := m_indiv[1,18]
        mensagem('Preencha os campos  -  <ESC> p/Retornar')
        mcliente := m_set[1,129]
        IF mtp = NIL
                mnum_ped := 0
                mtipo_rec := ' '
        ELSE
                mtipo_rec := 'P'
        ENDIF
        mquantd := 1
        mdata := mdata_sis
        setcor(1)
        DEVPOS(lci+1,cci+1);DEVOUT('Pedido:')
        DEVPOS(lci+2,cci+1);DEVOUT('Nome..:')
        DEVPOS(lci+3,cci+1);DEVOUT('Data..:')
        DEVPOS(lci+4,cci+1);DEVOUT('Tipo [E]ntrega Deposito [P]ronta entrega:')
        DEVPOS(lci+5,cci+1);DEVOUT('Quantidade de Copias....................:')
        IF mtp = NIL
                @ lci+1,cci+9 GET mnum_ped PICT '999999'
                READ
                IF LASTKEY() = 27
                        EXIT
                ENDIF
        ENDIF
        setcor(3)
        DEVPOS(lci+1,cci+9);DEVOUT(STRZERO(mnum_ped,6))
        setcor(1)
        cons_rec := {}
        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_rec)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_rec) = 0
                atencao('Nao foi encontrado este PEDIDO...')
                LOOP
        ELSE
                IF cons_rec[1,62] = '*'
                        atencao('Ja foi Impresso o Recibo de Entrega....')
                        IF ! aut_sen('Senha de autorizacao p/2a. Via do Recibo de Entrega:','LIB_REC_ENTE')
                                LOOP
                        ENDIF

                ENDIF
                cons_cli := {}
                sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(cons_rec[1,23]),,.t.,@cons_cli)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_cli) = 0
                        atencao('Nao foi encontrado este CLIENTE...')
                        LOOP
                ENDIF
        ENDIF
        setcor(3)
        DEVPOS(lci+2,cci+9);DEVOUT(cons_rec[1,23]+' - '+cons_cli[1,3])
        setcor(1)
        IF mtp = NIL
                @ lci+3,cci+9 GET mdata
        ELSE
                setcor(3)
                DEVPOS(lci+3,cci+9);DEVOUT(mdata_sis)
                setcor(1)
                mdata := mdata_sis
        ENDIF
        @ lci+4,cci+43 GET mtipo_rec PICT '@!' VALID mtipo_rec $ 'E,P'
        @ lci+5,cci+43 GET mquantd PICT '9'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF ! imp_arq('RECIBO.REL','R')
                LOOP
        ENDIF
        ccomm := "UPDATE sacped_s SET pentreg = '*' WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
        sr_getconnection():exec(ccomm,,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        rrecibo := lin1+RTRIM(RTRIM(m_set[1,129]))+lin2+STRZERO(mnum_ped,6)
        FOR i = 1 TO mquantd
                imprt(mtipo_imp,'E')
                DEVPOS(PROW()+1,00);DEVOUT(RTRIM(m_set[1,129]))
                imprt(mtipo_imp,'N',1)
                DEVPOS(PROW(),00);DEVOUT('End.: '+RTRIM(m_set[1,132])+' - '+RTRIM(m_set[1,133])+'-'+RTRIM(m_set[1,134])+'-'+m_set[1,19])
                DEVPOS(PROW()+1,00);DEVOUT('Fone: '+m_set[1,136])
                DEVPOS(PROW()+1,00);DEVOUT('Inscr.: '+m_set[1,128]+' / C.G.C.: ')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(SUBSTR(m_set[1,123],1,14),'@@R 99.999.999/9999-99')
                DEVPOS(PROW()+1,00);DEVOUT(REPLI(CHR(223),80))
                DEVPOS(PROW()+1,00);DEVOUT('Cliente: '+cons_rec[1,23]+' - '+cons_cli[1,3])
                IF LEN(cons_cli) > 0
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- '+cons_cli[1,3])
                        DEVPOS(PROW()+1,0);DEVOUT('Endereco: '+ALLTRIM(cons_cli[1,21])+', '+ALLTRIM(cons_cli[1,136])+' '+cons_cli[1,136])
                        DEVPOS(PROW()+1,0);DEVOUT('Bairro..: '+ALLTRIM(cons_cli[1,22])+' - Cidade: '+ALLTRIM(cons_cli[1,24])+' - UF: '+cons_cli[1,25])
                        DEVPOS(PROW()+1,0);DEVOUT('CEP: '+cons_cli[1,26]+' - Telefone: '+ALLTRIM(cons_cli[1,29])+' - '+ALLTRIM(cons_cli[1,30])+' - '+ALLTRIM(cons_cli[1,31]))
                        DEVPOS(PROW()+1,0);DEVOUT('Rota: '+cons_cli[1,28])
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))

                ELSE
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- Cliente nao Encontrado')
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT('Data Emissao: '+DTOC(mdata))
                DEVPOS(PROW(),PCOL()+3);DEVOUT('Vendedor: '+cons_rec[1,32]+' - '+cons_rec[1,33])
                DEVPOS(PROW()+1,00);DEVOUT(REPLI(CHR(223),80))
                DEVPOS(PROW()+1,00);DEVOUT('')
                imprt(mtipo_imp,'E')
                DEVPOS(PROW(),10);DEVOUT('RECIBO DE ENTREGA')
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+3,01);DEVOUT(' ')

                linhas := MLCOUNT(rrecibo,70)

                FOR linha = 1 TO  linhas
                        LIN := MEMOLINE(rrecibo,70,linha,,10)
                        DEVPOS(PROW()+1,05);DEVOUT(PADR(RTRIM(LIN),70))
                NEXT

                DEVPOS(PROW()+5,00);DEVOUT(PADC('Data do Recebimento: ...../...../.....',80))
                DEVPOS(PROW()+4,00);DEVOUT(PADC(REPLI('-',LEN(RTRIM(cons_cli[1,3]))+2),80))
                DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(cons_cli[1,3]),80))
                DEVPOS(PROW()+3,00);DEVOUT(traco)
                DEVPOS(PROW()+2,00);DEVOUT('')
                IF mtipo_rec = 'E'
                        imprt(mtipo_imp,'E')
                        DEVPOS(PROW(),02);DEVOUT('CONTROLE DE QUALIDADE ENTREGA DEPOSITO')
                        imprt(mtipo_imp,'N')
                        DEVPOS(PROW()+3,00);DEVOUT('* AO RECEBER A MERCADORIA CONFIRA A MESMA E SO DEPOIS ASSINE A NOTA;')
                        DEVPOS(PROW()+2,00);DEVOUT('* HAVENDO ALGUMA AVARIA NO TRANSPORTE, INFORMAR IMEDIATAMENTE AO ENTREGADOR PARA')
                        DEVPOS(PROW()+1,00);DEVOUT('  PROVIDENCIAS;')
                        DEVPOS(PROW()+2,00);DEVOUT('* NAO TROCAMOS, E NAO ACEITAMOS DEVOLUCOES POR DANOS DE TRANSPORTE E OUTROS, APOS')
                        DEVPOS(PROW()+2,00);DEVOUT('* ASSISTÊNCIA DE SEGUNDA A SEXTA DAS 8 AS 17H  EM NOSSO DEPÓSITO COM PRAZO MAXIMO')
                        DEVPOS(PROW()+1,00);DEVOUT('  PARA TROCA 24 HORAS COM CUSTO DE COLETA E FRETE.')
                        DEVPOS(PROW()+1,00);DEVOUT('  ASSINAR A NOTA.')
                        DEVPOS(PROW()+4,00);DEVOUT(PADC('Data do Recebimento: ...../...../.....',80))
                        DEVPOS(PROW()+4,00);DEVOUT(PADC(REPLI('-',LEN(RTRIM(cons_cli[1,3]))+2),80))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(cons_cli[1,3]),80))
                        DEVPOS(PROW()+5,00);DEVOUT(PADL(REPLI('-',30),80))
                        DEVPOS(PROW()+1,00);DEVOUT(PADL('      Visto de Liberacao      ',80))
                ELSEIF mtipo_rec = 'P'
                        imprt(mtipo_imp,'E')
                        DEVPOS(PROW(),02);DEVOUT('CONTROLE DE QUALIDADE PRONTA ENTREGA')
                        imprt(mtipo_imp,'N')
                        DEVPOS(PROW()+3,00);DEVOUT('* AO RECEBER A MERCADORIA SEMPRE CONFIRA ANTES DE LEVAR;')
                        DEVPOS(PROW()+2,00);DEVOUT('* HAVENDO ALGUMA AVARIA NO TRANSPORTE, NAO NOS RESPONSABILIZAREMOS;')
                        DEVPOS(PROW()+2,00);DEVOUT('* NAO TROCAMOS, E NAO ACEITAMOS DEVOLUCOES POR DANOS DE TRANSPORTE.')
                        DEVPOS(PROW()+2,00);DEVOUT('* ASSISTÊNCIA DE SEGUNDA A SEXTA DAS 8 AS 17H  EM NOSSO DEPÓSITO COM PRAZO MAXIMO')
                        DEVPOS(PROW()+1,00);DEVOUT('  PARA TROCA 24 HORAS COM CUSTO DE COLETA E FRETE')
                        DEVPOS(PROW()+4,00);DEVOUT(PADC('Data do Recebimento: ...../...../.....',80))
                        DEVPOS(PROW()+4,00);DEVOUT(PADC(REPLI('-',LEN(RTRIM(cons_cli[1,3]))+2),80))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(cons_cli[1,3]),80))
                        DEVPOS(PROW()+5,00);DEVOUT(PADL(REPLI('-',30),80))
                        DEVPOS(PROW()+1,00);DEVOUT(PADL('      Visto de Liberacao      ',80))
                ENDIF
                EJECT
        NEXT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('RECIBO.REL')
        IF mtp <> NIL
                EXIT
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* F I M ******************************8


