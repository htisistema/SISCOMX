***********************
* MENU DO BALANCO
***********************

FUNCTION sacbal
*****************
LOCAL MPRG:='SACBAL'

LOCAL opcao,tela,tecla,lci,cci,lba,cba

lci := cci := 0
lba := 20
cba := 78
opcao = 0
setcor(1)
****************************************************
op_tela(16,40,20,78,' MENU DE BALANCO ')
WHILE .T.
        exibi_prg(mprg)
        @ lci+1,cci PROMPT '  0 -> Lancamento no BALANCO          ' 
        @ lci+2,cci PROMPT '  1 -> Atualizacao do ARQUIVO BALANCO ' 
        @ lci+3,cci PROMPT "  2 -> Verificar SALDO dos PRODUTOS   " 
        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
                wvw_lclosewindow()     
                RETURN NIL
        ENDIF
        DO CASE
                CASE opcao = 1
                *       LANCAMENTO DOS PRODUTOS
                         sacbal1()
                CASE opcao = 2
                *       ATUALIZACAO DO ARQUIVO DE BALANCO
                        sacbal2()
                CASE opcao = 3
                *       VERIFICA O SALDO DOS PRODUTOS PELO MOVIMENTO
                         sacbal3()
        ENDCASE
ENDDO
wvw_lclosewindow()     
RETURN NIL

