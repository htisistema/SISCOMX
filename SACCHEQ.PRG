* MENU DO PREENCHIMENTO CHEQUES
***********************
FUNCTION saccheq
*****************
LOCAL MPRG:='SACCHEQ'
LOCAL opcao,tela,tecla,lci,cci,lba,cba
lci = 00
cci = 00
lba = 01
cba = 30
opcao = 0
setcor(1)
****************************************************
op_tela(lci,cci,lba,cba,' Preenchimento Cheques ')
WHILE .T.
        exibi_prg(mprg)
        setcor(10)
        @ lci,cci PROMPT '  0 -> Cheque form. Continuo 1 ' MESSAGE '** Preenchimento Cheques formulario continuo - <ESC> p/Retornar **'
        @ lci+1,cci PROMPT '  1 -> Cheque form. Continuo 2 ' MESSAGE '** Preenchimento Cheques formulario continuo - <ESC> p/Retornar **'
*       @ lci+3,cci+1 PROMPT '  2 -> Cheque Maquina CHRONOS  ' MESSAGE '** Preenchimento de Cheques Maquina CHRONOS - <ESC> p/Retornar **'
        SET INTEN ON
        MENU TO opcao
        setcor(1)
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        DO CASE
                CASE opcao = 1
                *       PREENCHIMENTO FORM.CONTINUO
                         sacpcheq(2)
                CASE opcao = 2
                *       PREENCHIMENTO FORM.CONTINUO
                         sacpcheq()
                CASE opcao = 3
                *       PREENCHIMENTO MAQ.CHRONOS
*                       saccheq1()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL

