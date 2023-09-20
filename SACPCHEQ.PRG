****************************
* PREENCHIMENTO DE CHEQUES
****************************
MEMVAR getlist,mdata_sis

FUNCTION sacpcheq(mtipo)

LOCAL lci,cci,lba,cba,lin,lin1,lin2,lin3,linhas := 0,linha:= 0,;
      opcao,tela1,telarec,mnome,mdata,mvalor,mmes,mextenso,i

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

lci := 00
cci := 00
lba := 15
cba := 66
opcao := SPACE(1)
op_tela(lci,cci,lba+2,cba,' PREENCHIMENTO DE CHEQUES ')
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mensagem('Preencha os campos  -  <ESC> p/Retornar')
        mnome := SPACE(35)
        mdata := mdata_sis
        mvalor := 0
        @ lci+4,cci TO lci+4,cba
        janela(lci+4,cba,' DEMONSTRATIVO DO CHEQUE ','*')
        SET INTEN ON
        DEVPOS(lci+1,cci+2);DEVOUT('Valor.........:')
        DEVPOS(lci+2,cci+2);DEVOUT('Nominal a ....:')
        DEVPOS(lci+3,cci+2);DEVOUT('Data do Cheque:')
        @ lci+1,cci+17 GET mvalor PICT '999,999,999.99'
        @ lci+2,cci+17 GET mnome
        @ lci+3,cci+17 GET mdata PICT '99/99/99'
        READ
        mmes := NMES(mdata)
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mmes := NMES(mdata)
        setcor(3)
*       DEVPOS(lci+3,cci+24);DEVOUT(SUBSTR(DTOC(mdata),1,2)+' de '+RTRIM(mmes)+' de '+SUBSTR(DTOC(mdata),7))
        setcor(1)
        IF mtipo = NIL
                mextenso := '('+RTRIM(extenso(mvalor,.T.,'real','reais'))+')'
        ELSE
                mextenso := '('+extenso(mvalor,.T.,'real','reais')+')'
        ENDIF
*       mextenso := '('+RTRIM(extenso(mvalor,53))+')'
        DEVPOS(lci+5,43);DEVOUT('Valor: ('+LTRIM(TRANSFORM(mvalor,'@E 999,999,999.99'))+')')

        linhas := MLCOUNT(mextenso,55)

        LIN := MEMOLINE(mextenso,55,1,,10)
*       DEVPOS(ROW()+1,cci+10);DEVOUT(IMPAC(LIN,.T.))
        DEVPOS(ROW()+1,cci+10);DEVOUT(LIN)
        linha := 1
        FOR linha = 2 TO linhas
                LIN := MEMOLINE(mextenso,55,linha,,10)
                DEVPOS(ROW()+1,cci+1);DEVOUT(LIN)
*               DEVPOS(ROW()+1,cci+1);DEVOUT(IMPAC(LIN,.T.))
        NEXT

        DEVPOS(ROW()+2,cci+1);DEVOUT('Nominal a '+mnome)
        DEVPOS(ROW()+1,cci+27);DEVOUT(SUBSTR(DTOC(mdata),1,2)+' de '+RTRIM(mmes)+' de 20'+SUBSTR(DTOC(mdata),7))
        mensagem('Pressione qualquer tecla para continuar')
        INKEY(0)
        IF ! imp_arq('CHEQUE.REL','R')
                LOOP
        ENDIF
        imprt(mtipo_imp,'N')
        DEVPOS(PROW(),50);DEVOUT('('+LTRIM(TRANSFORM(mvalor,'@E 999,999,999.99'))+')')

        linhas := MLCOUNT(mextenso,55)

        LIN := MEMOLINE(mextenso,55,1,,10)
        DEVPOS(PROW()+2,10);DEVOUT(RTRIM(LIN))
        linha := 1
        FOR linha = 2 TO linhas
                LIN := MEMOLINE(mextenso,55,linha,,10)
                DEVPOS(PROW()+2,02);DEVOUT(RTRIM(LIN))
        NEXT

        IF mtipo = NIL
                DEVPOS(06,02);DEVOUT(mnome)
        ELSE
                DEVPOS(05,02);DEVOUT(mnome)
        ENDIF
        DEVPOS(PROW()+2,27);DEVOUT(RTRIM(m_set[1,134]))
        DEVPOS(PROW(),42);DEVOUT(SUBSTR(DTOC(mdata),1,2))
        DEVPOS(PROW(),48);DEVOUT(RTRIM(mmes))
        DEVPOS(PROW(),63);DEVOUT('20'+SUBSTR(DTOC(mdata),7))
        IF mtipo = NIL
                DEVPOS(PROW()+10,00);DEVOUT('')
        ELSE
                DEVPOS(PROW()+11,00);DEVOUT('')
        ENDIF
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('CHEQUE.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* F I M ******************************8

