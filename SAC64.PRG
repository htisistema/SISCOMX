****************************
* RELATORIO DE SOLICITACOES
****************************
MEMVAR getlist,nivel_acess,memp_resa

FUNCTION sac64
LOCAL mprg:= 'SAC64',;
      lci,cci,lba,cba,linha,lin,linhas := 0;
      ,opcao,mdata,;
      mtipo,mquantd,y,mprob1,mprob2,mprob3,mprob4,mprob5,mprob6,;
      mprob7,mprob8,mprob9,mprob10,moperador,mabrireg

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),;
        traco

IF ! ver_nivel(mprg,'RELATORIO DE SOLICITACOES','1245',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
opcao := SPACE(1)
traco := REPLI('-',80)
mdata := DATE()
lci := cci := 0
lba := 15
cba := 78
mquantd := 1
SET KEY -9 TO ctrl_w()
********************************************
IF ! AbriArq('sacsoli','soli');RETURN NIL;ENDIF
SELE('soli')
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
mabrireg := '*'
op_tela(lci,cci,lba+2,cba,' S O L I C I T A C O E S  ')
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Data........:')
        DEVPOS(lci+2,cci+2);DEVOUT('Operador....:')
        DEVPOS(lci+3,cci+2);DEVOUT('Solicitacao.:')
        @ lci+1,cci+16 GET mdata PICT '99/99/99' VALID IF(EMPTY(mdata),.F.,.T.)
        READ
        IF LASTKEY() = 27
                SET KEY -9 TO
                EXIT
        ENDIF

        SEEK DTOS(mdata)

        IF FOUND()
                IF ! BLOQREG()
                        LOOP
                ENDIF
                moperador := soli->operador
                mprob1 := soli->prob1
                mprob2 := soli->prob2
                mprob3 := soli->prob3
                mprob4 := soli->prob4
                mprob5 := soli->prob5
                mprob6 := soli->prob6
                mprob7 := soli->prob7
                mprob8 := soli->prob8
                mprob9 := soli->prob9
                mprob10:= soli->prob10
                mabrireg := ' '
        ENDIF
        @ lci+2,cci+16 GET moperador PICT '@!'
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
        IF opcao = 'N';LOOP;DBUNLOCKALL();DBCOMMITALL();ENDIF
        IF mabrireg = '*'
                IF ! ADIREG()
                        GO TOP
                        LOOP
                ENDIF
        ENDIF
        soli->nome := memp_resa
        soli->data := mdata
        soli->operador := moperador
        soli->prob1 := mprob1
        soli->prob2 := mprob2
        soli->prob3 := mprob3
        soli->prob4 := mprob4
        soli->prob5 := mprob5
        soli->prob6 := mprob6
        soli->prob7 := mprob7
        soli->prob8 := mprob8
        soli->prob9 := mprob9
        soli->prob10:= mprob10
        DBUNLOCKALL()
        DBCOMMITALL()
        mquantd := mensagem2('Quantidade de Copias:',mquantd,'99',,'N')
        mensagem('Espere o Final da Impressao OK')
        IF ! imp_arq('SOLICITA.REL','R')
                LOOP
        ENDIF
        y :=0
        FOR y = 1 TO mquantd
                imprt(mtipo_imp,'E')
                DEVPOS(PROW(),00);DEVOUT(memp_resa)
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT(RTRIM(m_set[1,132])+'-'+RTRIM(m_set[1,133])+'-'+RTRIM(m_set[1,134])+'-'+RTRIM(m_set[1,19])+' - Fone: '+m_set[1,136])
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+1,00);DEVOUT(traco)
                DEVPOS(PROW()+1,00);DEVOUT('Data da Solicitacao: '+DTOC(mdata))
                DEVPOS(PROW()+1,00);DEVOUT('Operador...........: '+moperador)
                DEVPOS(PROW()+1,00);DEVOUT(traco)

                DEVPOS(PROW()+2,00);DEVOUT(PADC('RELATORIO DE SOLICITACOES',80))
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
                @ PROW()+2,30 SAY RTRIM(m_set[1,134])+'-'+RTRIM(m_set[1,19])+','
                @ PROW(),PCOL()+1 SAY mdata
                @ PROW()+5,00 SAY PADC(REPLI('-',LEN(memp_resa)+4),80)
                @ PROW()+1,00 SAY PADC(memp_resa,80)
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        NEXT
        conf_impressao('SOLICITA.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************** f i m **************************************

