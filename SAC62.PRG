****************************
* RELATORIO DE VISITAS
****************************
MEMVAR getlist,memp_resa,mcgc_firm,minsc_firm,mversao

FUNCTION sac62

LOCAL mprg:='SAC62',;
      lci,cci,lba,cba,linha,lin,linhas := 0,;
      opcao,mdata,mtip_form,;
      mhoraini,mhorafim,mtipo,mquantd,y,mprob1,mprob2,mprob3,mprob4,mprob5,mprob6,;
      mprob7,mprob8,mprob9,mprob10,moperador

PRIVATE traco,mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

// MODULO PRA ACESSAR ARQUIVOS .CDX
// REQUEST DBFCDX
// RDDSETDEFAULT('DBFCDX')
//
opcao := SPACE(1)
traco := REPLI('-',80)
mdata := DATE()
lci := cci := 0
lba := 15
cba := 78
mquantd := 1
SET KEY -9 TO ctrl_w()
********************************************
IF ! AbriArq('sacvisi','visi');RETURN NIL;ENDIF
SELE('visi')
ORDSETFOCUS(1)
********************************************
mprob1 := SPACE(70)
mprob2 := SPACE(70)
mprob3 := SPACE(70)
mprob4 := SPACE(70)
mprob5 := SPACE(70)
mprob6 := SPACE(70)
mprob7 := SPACE(70)
mprob8 := SPACE(70)
mprob9 := SPACE(70)
mprob10:= SPACE(70)
moperador := SPACE(20)
mtip_form := ' '
op_tela(lci,cci,lba+2,cba,' V I S I T A ')
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        exibi_prg(mprg)
        mhoraini := TIME()
        mhorafim := SPACE(8)
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Data........:')
        DEVPOS(lci+1,cci+26);DEVOUT('Operador:')
        DEVPOS(lci+2,cci+2);DEVOUT('Hora Inicial:')
        DEVPOS(lci+2,cci+26);DEVOUT('Hora Final.:')
        DEVPOS(lci+2,cci+47);DEVOUT('Tipo [F]orm. [B]obina:')
        DEVPOS(lci+3,cci+2);DEVOUT('Conclusao...:')
        @ lci+1,cci+16 GET mdata PICT '99/99/99'
        @ lci+1,cci+36 GET moperador PICT '@!'
        @ lci+2,cci+16 GET mhoraini PICT '99:99:99'
        @ lci+2,cci+38 GET mhorafim PICT '99:99:99' VALID IF(EMPTY(mhorafim),.F.,.T.)
        @ lci+2,cci+69 GET mtip_form PICT '@!' VALID mtip_form $ 'F,B'
        READ
        IF LASTKEY() = 27
                SET KEY -9 TO
                EXIT
        ENDIF
        IF mtip_form = 'F'
                mprob1 := SPACE(70)
                mprob2 := SPACE(70)
                mprob3 := SPACE(70)
                mprob4 := SPACE(70)
                mprob5 := SPACE(70)
                mprob6 := SPACE(70)
                mprob7 := SPACE(70)
                mprob8 := SPACE(70)
                mprob9 := SPACE(70)
                mprob10:= SPACE(70)
        ELSE
                mprob1 := SPACE(50)
                mprob2 := SPACE(50)
                mprob3 := SPACE(50)
                mprob4 := SPACE(50)
                mprob5 := SPACE(50)
                mprob6 := SPACE(50)
                mprob7 := SPACE(50)
                mprob8 := SPACE(50)
                mprob9 := SPACE(50)
                mprob10:= SPACE(50)
        ENDIF
        IF EMPTY(mdata)
                LOOP
        ENDIF

        SEEK DTOS(mdata)+SUBSTR(mhoraini,1,5)
*       SEEK DTOS(mdata)+mhoraini

        IF FOUND()
                IF ! BLOQREG()
                        LOOP
                ENDIF
                mhorafim := visi->horafim
                IF mtip_form = 'F'
                        mprob1 := visi->prob1
                        mprob2 := visi->prob2
                        mprob3 := visi->prob3
                        mprob4 := visi->prob4
                        mprob5 := visi->prob5
                        mprob6 := visi->prob6
                        mprob7 := visi->prob7
                        mprob8 := visi->prob8
                        mprob9 := visi->prob9
                        mprob10:= visi->prob10
                ELSE
                        mprob1 := LEFT(visi->prob1,50)
                        mprob2 := LEFT(visi->prob2,50)
                        mprob3 := LEFT(visi->prob3,50)
                        mprob4 := LEFT(visi->prob4,50)
                        mprob5 := LEFT(visi->prob5,50)
                        mprob6 := LEFT(visi->prob6,50)
                        mprob7 := LEFT(visi->prob7,50)
                        mprob8 := LEFT(visi->prob8,50)
                        mprob9 := LEFT(visi->prob9,50)
                        mprob10:= LEFT(visi->prob10,50)
                ENDIF
        ELSE
                IF ! ADIREG()
                        GO TOP
                        LOOP
                ENDIF
        ENDIF
        @ lci+4,cci+05 GET mprob1
        @ lci+5,cci+05 GET mprob2
        @ lci+6,cci+05 GET mprob3
        @ lci+7,cci+05 GET mprob4
        @ lci+8,cci+05 GET mprob5
        @ lci+9,cci+05 GET mprob6
        @ lci+10,cci+05 GET mprob7
        @ lci+11,cci+05 GET mprob8
        @ lci+12,cci+05 GET mprob9
        @ lci+13,cci+05 GET mprob10
        READ
        IF LASTKEY() = 27;LOOP;ENDIF
        opcao := op_simnao('S','Confirma os Dados:')
        IF opcao = 'N'
                DBUNLOCKALL()
                DBCOMMITALL()
                LOOP
        ENDIF
        visi->nome := memp_resa
        visi->data := mdata
        visi->horaini := mhoraini
        visi->horafim := mhorafim
        visi->operador := moperador
        visi->prob1 := mprob1
        visi->prob2 := mprob2
        visi->prob3 := mprob3
        visi->prob4 := mprob4
        visi->prob5 := mprob5
        visi->prob6 := mprob6
        visi->prob7 := mprob7
        visi->prob8 := mprob8
        visi->prob9 := mprob9
        visi->prob10:= mprob10
        DBUNLOCKALL()
        DBCOMMITALL()
        mquantd := mensagem2('Quantidade de Copias:',mquantd,'99',,'N')
        mensagem('Espere o Final da Impressao OK')
        IF ! imp_arq('TAB_PRECO.REL','R')
                LOOP
        ENDIF
        y :=0
        FOR y = 1 TO mquantd
                IF mtip_form = 'F'
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('⁄€€€⁄€€€ ⁄€€€€€€€ ⁄€€€€€€€                                                     ',80))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('≥€€€≥€€€ ≥€€€ø€€€ ≥€€€ø€€€         Rua Tenente Joao Cicero, 415 - Sl.05        ',80))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('≥€€€€€€€ ≥€€€€€€€ ≥€€€€€€Ÿ              Boa Viagem - Recife - PE               ',80))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('≥€€€ø€€€ ≥€€€ø€€Ÿ ≥€€€ø€€€     Fone: (81)'+mfone_hrb+' - CNPJ: 11.156.983/0001-76 ',80))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('≥€€€≥€€€ ≥€€€≥€€€ ≥€€€€€€€                                                     ',80))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('¿ƒƒŸ¿ƒƒŸ ¿ƒƒŸ¿ƒƒŸ ¿ƒƒƒƒƒƒŸ                                                     ',80))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('  Sistemas de Informatica                                                      ',80))
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('ƒ',80))
                        DEVPOS(PROW()+1,00);DEVOUT('Firma.........: '+memp_resa)
                        DEVPOS(PROW()+1,00);DEVOUT('C.G.C.........: '+mcgc_firm)
                        DEVPOS(PROW()+1,00);DEVOUT('Data da Visita: '+DTOC(mdata))
                        DEVPOS(PROW()+1,00);DEVOUT('Hora Inicial..: '+mhoraini)
                        DEVPOS(PROW()+1,00);DEVOUT('Hora Final....: '+mhorafim)
                        DEVPOS(PROW()+1,00);DEVOUT('Operador......: '+moperador)
                        DEVPOS(PROW()+1,00);DEVOUT('Tempo Duracao.: '+ELAPTIME(mhoraini,mhorafim))
                        DEVPOS(PROW()+1,00);DEVOUT(traco)

                        DEVPOS(PROW()+2,00);DEVOUT(PADC('RELATORIO DE VISITA',80))
                        DEVPOS(PROW()+2,05);DEVOUT('CONCLUSAO:')
                        DEVPOS(PROW()+1,01);DEVOUT(mprob1)
                        DEVPOS(PROW()+1,01);DEVOUT(mprob2)
                        DEVPOS(PROW()+1,01);DEVOUT(mprob3)
                        DEVPOS(PROW()+1,01);DEVOUT(mprob4)
                        DEVPOS(PROW()+1,01);DEVOUT(mprob5)
                        DEVPOS(PROW()+1,01);DEVOUT(mprob6)
                        DEVPOS(PROW()+1,01);DEVOUT(mprob7)
                        DEVPOS(PROW()+1,01);DEVOUT(mprob8)
                        DEVPOS(PROW()+1,01);DEVOUT(mprob9)
                        DEVPOS(PROW()+1,01);DEVOUT(mprob10)
                        @ PROW()+2,30 SAY 'Recife,'
                        @ PROW(),37 SAY mdata
                        @ PROW()+5,00 SAY PADC(REPLI('-',LEN(memp_resa)+4)+'     --------------------------------------',80)
                        @ PROW()+1,00 SAY PADC(+memp_resa+'         HTI Sistemas de Informatica Ltda.',80)
                        EJECT
                ELSE
                        DEVPOS(PROW(),00);DEVOUT(CHR(15))
                        DEVPOS(PROW(),00);DEVOUT('H T I  Sistemas de Informatica Ltda.       ')
                        DEVPOS(PROW()+1,00);DEVOUT('Rua Tenente Joao Cicero, 415 - Sl.05     ')
                        DEVPOS(PROW()+1,00);DEVOUT('Boa Viagem - Recife - PE                 ')
                        DEVPOS(PROW()+1,00);DEVOUT('TeleFax: (081)'+mfone_hrb)
                        DEVPOS(PROW()+1,00);DEVOUT('Versao:'+mversao)
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',54))
                        DEVPOS(PROW()+1,00);DEVOUT('Firma.........: '+memp_resa)
                        DEVPOS(PROW()+1,00);DEVOUT('C.G.C.........: '+mcgc_firm)
                        DEVPOS(PROW()+1,00);DEVOUT('Data da Visita: '+DTOC(mdata))
                        DEVPOS(PROW()+1,00);DEVOUT('Hora Inicial..: '+mhoraini)
                        DEVPOS(PROW()+1,00);DEVOUT('Hora Final....: '+mhorafim)
                        DEVPOS(PROW()+1,00);DEVOUT('Operador......: '+moperador)
                        DEVPOS(PROW()+1,00);DEVOUT('Tempo Duracao.: '+ELAPTIME(mhoraini,mhorafim))
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',54))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('RELATORIO DE VISITA',54))
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',54))
                        DEVPOS(PROW()+2,00);DEVOUT('CONCLUSAO:')
                        DEVPOS(PROW()+1,01);DEVOUT(mprob1)
                        DEVPOS(PROW()+1,01);DEVOUT(mprob2)
                        DEVPOS(PROW()+1,01);DEVOUT(mprob3)
                        DEVPOS(PROW()+1,01);DEVOUT(mprob4)
                        DEVPOS(PROW()+1,01);DEVOUT(mprob5)
                        DEVPOS(PROW()+1,01);DEVOUT(mprob6)
                        DEVPOS(PROW()+1,01);DEVOUT(mprob7)
                        DEVPOS(PROW()+1,01);DEVOUT(mprob8)
                        DEVPOS(PROW()+1,01);DEVOUT(mprob9)
                        DEVPOS(PROW()+1,01);DEVOUT(mprob10)
                        @ PROW()+2,00 SAY PADC('Recife,'+DTOC(mdata),54)
                        @ PROW()+3,00 SAY PADC(REPLI('-',LEN(memp_resa)+4),54)
                        @ PROW()+1,00 SAY PADC(memp_resa,54)
                        @ PROW()+3,00 SAY PADC('---------------------------------',54)
                        @ PROW()+1,00 SAY PADC('HTI Sistemas de Informatica Ltda.',54)
                        DEVPOS(PROW()+m_indiv[1,16],00);DEVOUT(CHR(18))
                ENDIF
                DEVPOS(PROW(),00);DEVOUT(CHR(18))
                SETPRC(00,00)
        NEXT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('TAB_PRECO.REL')
        SET KEY -9 TO
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************** f i m **************************************

