MEMVAR getlist,memp_resa,mdata_sis
****************************
* EMITE RECIBO DA HTI
****************************
FUNCTION sac63(mnome,mvalor,mdata,mdesc)

LOCAL mprg:='SAC63',;
      lci,cci,lba,cba,lin,lin1,lin2,lin3,rpreco,rrecibo,linhas := 0,;
      opcao,tela1,telarec,telaprin,mref,mref1,mref2,mref3,;
      mref4,mref5,mref6,mvenc,mtipo_f:='F',i:=0

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mquantd:=1,traco
IF ! (cod_operado = '999' .OR. SUBSTR(nivel_acess,1,1) = '7')
        atencao('Ambiente nao AUTORIZADO')
        RETURN NIL
ENDIF

lci := cci := 00
lba := 11
cba := 74
lin1 := '          Recebi de '
lin2 := ' a importancia de R$ '
lin3 := ' referente a '
opcao := SPACE(1)
traco := REPLI('-',80)
IF mnome = NIL
        mnome := SPACE(55)
        mnome := memp_resa+', CNPJ:'+mcgc_firm+SPACE(55-LEN(memp_resa+', CNPJ:'+mcgc_firm))
        mdata := mdata_sis
ENDIF
IF mvalor = NIL
        mvalor := 0
ENDIF
op_tela(lci,cci,lba+2,cba,' R E C I B O ')

WHILE .T.
        exibi_prg(mprg)
        mtipo_imp := m_indiv[1,18]
        //mensagem('Preencha os campos  -  <ESC> p/Retornar')
        mref :=  'manutencao do sistema SISCOM (sistema integrado de '
        mref1 := 'automacao comercial) da competencia: '+SUBSTR(DTOC(mdata),4)
        mref2 := ', que damos plena quitacao da mesma.'+SPACE(49-LEN(', que damos plena quitacao da mesma.'))
        mref3 := SPACE(49)
        mref4 := SPACE(49)
        mref5 := SPACE(49)
        mquantd := 1
        mvenc := mdata_sis
        DEVPOS(lci+1,cci+2);DEVOUT('Data Emissao:')
        DEVPOS(lci+1,cci+28);DEVOUT('Vencimento:')
        DEVPOS(lci+1,cci+52);DEVOUT('Tp.Form.:')
        DEVPOS(lci+2,cci+2);DEVOUT('Nome:')
        DEVPOS(lci+3,cci+2);DEVOUT('Valor:')
        DEVPOS(lci+4,cci+2);DEVOUT('Referente a:')
        DEVPOS(lci+10,cci+2);DEVOUT('Quantidade Copias:')
        @ lci+1,cci+16 GET mdata VALID IF(EMPTY(mdata),.F.,.T.)
        @ lci+1,cci+40 GET mvenc VALID IF(EMPTY(mvenc),.F.,.T.)
        @ lci+1,cci+62 GET mtipo_f PICT '@!' VALID mtipo_f $ 'F,B'
        @ lci+2,cci+8 GET mnome PICT '@!'
        @ lci+3,cci+9 GET mvalor PICT '9,999,999.99'
        @ lci+4,cci+15 GET mref
        @ lci+5,cci+15 GET mref1
        @ lci+6,cci+15 GET mref2
        @ lci+7,cci+15 GET mref3
        @ lci+8,cci+15 GET mref4
        @ lci+9,cci+15 GET mref5
        @ lci+10,cci+21 GET mquantd PICT '9'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF ! imp_arq('REC_HTI.REL','R')
                LOOP
        ENDIF
        FOR i = 1 TO mquantd
                IF mtipo_f = 'F'
                        HTI_b(' ',mnome,DTOC(mvenc),DTOC(mdata),'CIBO',DTOC(mdata),mvalor,mref,mref1,mref2,mref3,mref4,mref5)
                        EJECT
                ELSE
                        IF FILE('rechtibol.jpg')
                                DEVPOS(00,00);DEVOUT('"rechtibol.jpg"')
                                @ PROW()+2,00 SAY ''
                        ELSE
                                imprt('M','N')
                                //imprt('M','S')
                                DEVPOS(PROW(),00);DEVOUT('H T I  Sistemas de Informatica Ltda.')
                                imprt('M','C')
                                DEVPOS(PROW()+1,00);DEVOUT('Rua Arnaldo Acacio Guimaraes, 87')
                                DEVPOS(PROW()+1,00);DEVOUT('Centro - Sao Bento do Una - PE              ')
                                DEVPOS(PROW()+1,00);DEVOUT('TeleFax: (081)'+mfone_HTI)
                        ENDIF
                        imprt('M','C')
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('_',54))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('R E C I B O',54))
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('_',54))
                        DEVPOS(PROW()+1,00);DEVOUT('Cliente..........: '+mnome)
                        DEVPOS(PROW()+1,00);DEVOUT('Emissao..........: '+DTOC(mdata))
                        DEVPOS(PROW()+1,00);DEVOUT('Vencimento.......: '+DTOC(mvenc))
                        DEVPOS(PROW()+1,00);DEVOUT('Valor Documen..R$: '+TRANSFORM(mvalor,'99,999,999.99'))
                        DEVPOS(PROW()+1,00);DEVOUT('(-)Desconto....R$: .............')
                        DEVPOS(PROW()+1,00);DEVOUT('(+)Juros/Multa.R$: .............')
                        DEVPOS(PROW()+1,00);DEVOUT('(+)Outros......R$: .............')
                        DEVPOS(PROW()+1,00);DEVOUT('(=)Total...... R$: .............')
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('_',54))
                        DEVPOS(PROW()+1,00);DEVOUT('Referente:')
                        IF ! EMPTY(mref)
                                DEVPOS(PROW()+1,00);DEVOUT(mref)
                        ENDIF
                        IF ! EMPTY(mref1)
                                DEVPOS(PROW()+1,00);DEVOUT(mref1)
                        ENDIF
                        IF ! EMPTY(mref2)
                                DEVPOS(PROW()+1,00);DEVOUT(mref2)
                        ENDIF
                        IF ! EMPTY(mref3)
                                DEVPOS(PROW()+1,00);DEVOUT(mref3)
                        ENDIF
                        IF ! EMPTY(mref4)
                                DEVPOS(PROW()+1,00);DEVOUT(mref4)
                        ENDIF
                        IF ! EMPTY(mref5)
                                DEVPOS(PROW()+1,00);DEVOUT(mref5)
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('_',54))
                        @ PROW()+2,00 SAY PADC('Recebido em ______/______/______',54)
                        @ PROW()+3,00 SAY PADC('Recebido por____________________',54)
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',54))
                        DEVPOS(PROW()+m_indiv[1,16],00);DEVOUT(CHR(18))
                        //imprt('M','T-')
                ENDIF
        NEXT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        fclose('REC_HTI.REL')
        fclose('HTI.REL')
        //gera_ead('REC_HTI.REL')
        conf_impressao('REC_HTI.REL')
        mvalor := 0
        mnome := SPACE(35)
        LOOP
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* F I M ******************************8
* FUNCAO PARA IMPRESSAO DO BOLETO HTI
*************************************
FUNCTION HTI_b(cli_bol,razao_bol,venc_bol,emissao_bol,numdoc_bol,datproc_bol,;
                    valor,obs1,obs2,obs3,obs4,obs5,obs6,desc)

LOCAL lin1,lin2,lin3,rrecibo:=' ',linha,linhas,lin,mvalor_tot:=0

MEMVAR traco,mtipo_imp

lin1 := '          Recebi de '
lin2 := ' a importancia de R$ '
lin3 := ' referente a '
traco := REPLI('_',80)
IF FILE('rechti.jpg')
        DEVPOS(00,00);DEVOUT('"rechti.jpg"')
        @ PROW()+4,00 SAY ''
ELSE
        imprt(mtipo_imp,'E')
        DEVPOS(PROW()  ,00);DEVOUT('H T I    S I S T E M A S   L T D A.')
        DEVPOS(PROW()+1,00);DEVOUT('Rua Arnaldo Acacio Guimaraes, 87')
        DEVPOS(PROW()+1,00);DEVOUT('Centro - Sao Bento do Una - PE')
        DEVPOS(PROW()+1,00);DEVOUT('Fone: (81) '+mfone_HTI+' - CNPJ: 11.156.983/0001-76')
        DEVPOS(PROW()+1,00);DEVOUT(traco)
ENDIF
DEVPOS(PROW()+1,00);DEVOUT('Valor Doc. R$: '+TRANSFORM(valor,'999,999.99'))
IF desc <> NIL .AND. desc > 0
        mvalor_tot := valor - desc
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Desc. R$: '+TRANSFORM(desc,'999,999.99'))
ELSE
        mvalor_tot := valor
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Desc. R$: ..........')
ENDIF
rrecibo := lin1+RTRIM(IF(! EMPTY(cli_bol),cli_bol+'-','')+razao_bol)+lin2+LTRIM(TRANSFORM(mvalor_tot,'@E 9,999,999.99'))+' ('+extenso(mvalor_tot,.T.,'real','reais')+')'+lin3+ RTRIM(obs1) + RTRIM(obs2) + RTRIM(obs3) + RTRIM(obs4) + RTRIM(obs5) + RTRIM(obs6)        //+ ', que damos plena quitacao da mesma'
DEVPOS(PROW(),PCOL()+2);DEVOUT('Valor a Pagar R$: '+TRANSFORM(mvalor_tot,'999,999.99'))
DEVPOS(PROW()+1,00);DEVOUT(traco)
imprt(mtipo_imp,'E',2)
DEVPOS(PROW(),13);DEVOUT('RECIBO  R$: ('+LTRIM(TRANSFORM(mvalor_tot,'@E 9,999,999.99'))+')')
DEVPOS(PROW()+1,01);DEVOUT(' ')
linhas := MLCOUNT(rrecibo,70)
FOR linha = 1 TO  linhas
        LIN := MEMOLINE(rrecibo,70,linha,,10)
        DEVPOS(PROW()+1,05);DEVOUT(PADR(RTRIM(LIN),70))
NEXT

DEVPOS(PROW()+2,00);DEVOUT(PADC(mcidade_HTI+', '+venc_bol,80))
DEVPOS(PROW()+2,00);DEVOUT(PADC(REPLI('_',LEN('HTI Sistemas Ltda.')+6),80))
DEVPOS(PROW()+2,00);DEVOUT(traco)
DEVPOS(PROW()+1,66);DEVOUT(TIME()+' Hrs.')
RETURN .T.
