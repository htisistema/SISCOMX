***************************
* MENU DE CONTAS CORRENTES
***************************

FUNCTION sac2cc1
***************
LOCAL MPRG:='SAC2CC1'

LOCAL opcao,tecla,lci,cci,lba,cba

lci = 00
cci = 00
lba = 03
cba = 27
opcao = 0
op_tela(lci,cci,lba,cba,'CONTA CORRENTE ')
WHILE .T.
        exibi_prg(mprg)
        setcor(1)
        @ lci+1,cci PROMPT '  0-> Lancamento de Credito ' MESSAGE '** Lancamento de Credito no Conta Corrente - <ESC> p/Retornar **'
        @ lci+2,cci PROMPT '  1-> Lancamento de Debito  ' MESSAGE '** Lancamento de Debito no Conta Corrente - <ESC> p/Retornar **'
        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        DO CASE
                CASE opcao = 1
                *       CREDITO
                         sac2cc11()
                CASE opcao = 2
                *       DEBITO
                         sac2cc12()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL

