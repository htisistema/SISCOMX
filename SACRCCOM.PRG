****************************
* EMITE RECIBOS COMISSAO
****************************
MEMVAR getlist,mdata_sis,memp_resa,nivel_acess

FUNCTION sacrccom
*****************
LOCAL mprg:='SACRCCOM',mtitulo:='EMISSAO DE RECIBOS DE COMISSAO',;
      lci,cci,lba,cba,lin,lin1,lin2,lin3,rpreco,rrecibo,linhas := 0,;
      opcao,tela1,telarec,telaprin,mnome,mdata,mvalor,mref,mref1,mref2,mref3,;
      mref4,mref5,mref6,traco,linha

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)


IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := cci := 0
lba := 06
cba := 66
lin1 := '          Recebi da '+memp_resa+' a importancia de R$: '
lin2 := ' referente a comissao de vendas do periodo de '
opcao := SPACE(1)
traco := REPLI('-',80)
telarec := SAVESCREEN(01,00,24,79)
op_tela(10,10,16,66,mtitulo)
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mensagem('Preencha os campos  -  <ESC> p/Retornar')
        mnome := SPACE(35)
        mref2 := SPACE(15)
        mdata := mdata_sis
        mvalor := 0
        mref := CTOD('  /  /  ')
        mref1 := CTOD('  /  /  ')
        mref3 := SPACE(30)
        mref4 := SPACE(50)
        mref5 := SPACE(50)
        mref6 := SPACE(50)
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Data:')
        DEVPOS(lci+2,cci+2);DEVOUT('Nome:')
        DEVPOS(lci+3,cci+2);DEVOUT('CPF.:')
        DEVPOS(lci+4,cci+2);DEVOUT('Valor:')
        DEVPOS(lci+5,cci+2);DEVOUT('Periodo:')
        DEVPOS(lci+5,cci+21);DEVOUT(' a ')
        @ lci+1,cci+8 GET mdata PICT '99/99/99'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF

        @ lci+2,cci+8 GET mnome PICT '@!'
        @ lci+3,cci+8 GET mref2
        @ lci+4,cci+9 GET mvalor PICT '9,999,999.99'
        @ lci+5,cci+11 GET mref
        @ lci+5,cci+24 GET mref1
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF ! imp_arq('REC_COMI.REL','R')
                LOOP
        ENDIF
        rrecibo := lin1+LTRIM(TRANSFORM(mvalor,'@E 9,999,999.99'))+' '+'('+RTRIM(extenso(mvalor,.T.,'real','reais'))+')' + lin2 + DTOC(mref) +' a '+ DTOC(mref1)+ ', que dou plena quitacao'
        DEVPOS(PROW()+3,00);DEVOUT(CHR(14))
        DEVPOS(PROW(),14);DEVOUT('R E C I B O')
        DEVPOS(PROW()+4,01);DEVOUT(' ')

        linhas := MLCOUNT(rrecibo,60)

        FOR linha = 1 TO  linhas
                LIN := MEMOLINE(rrecibo,60,linha,,10)
                DEVPOS(PROW()+1,10);DEVOUT(PADR(RTRIM(LIN),60))
                DEVPOS(PROW()+1,10);DEVOUT(' ')
        NEXT

        DEVPOS(PROW()+4,00);DEVOUT(PADC(RTRIM(m_set[1,134])+', '+DTOC(mdata),80))
        DEVPOS(PROW()+6,00);DEVOUT(PADC(REPLI('-',LEN(mnome)+2),80))
        DEVPOS(PROW()+1,00);DEVOUT(PADC(mnome,80))
        DEVPOS(PROW()+1,00);DEVOUT(PADC(mref2,80))
        DEVPOS(PROW()+2,66);DEVOUT(TIME()+' Hrs.')
        DEVPOS(PROW()+1,00);DEVOUT(traco)
        SETPRC(00,00)
        EJECT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('REC_COMI.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* F I M ******************************8

