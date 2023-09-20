***********************
* MENU DO PREENCHIMENTO VALES
***********************

FUNCTION sacvale
*****************
LOCAL MPRG:='SACVALE'

LOCAL opcao,tela,tecla,lci,cci,lba,cba

lci = 0
cci = 0
lba = 3
cba = 32
opcao = 0
setcor(1)
****************************************************
op_tela(10,10,14,42,' Menu de Vales ')

WHILE .T.
        exibi_prg(mprg)
        mensagem('Escolha a opcao ou <ESC> p/ retornar')
        setcor(10)
        @ lci,cci PROMPT '  0 -> Vale p/CONTA A RECEBER  '
        @ lci+1,cci PROMPT '  1 -> Vale Antigo             '
        @ lci+2,cci PROMPT '  2 -> Cancel./Alteracao Vales '
        @ lci+3,cci PROMPT '  3 -> Pagamento de Vales      '
        SET INTEN ON
        MENU TO opcao
        setcor(1)
        IF LASTKEY() = 27
                EXIT
        ENDIF
        DO CASE
                CASE opcao = 1
                *       VALE P/CONTA A RECEBER
                         con241v('*')
                CASE opcao = 2
                *       VALES ANTIGOS
                        sac31()
                CASE opcao = 3
                *       CANCELAMENTO E ALTERACAO DE VALES
                        sac31_4()
                CASE opcao = 4
                *       PAGAMENTOS DE VALES
                        sac31_0()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL

