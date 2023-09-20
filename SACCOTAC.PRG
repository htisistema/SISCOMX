*****************************************
* FUNCAO MENU DA COTACAO DE PRODUTOS
*****************************************
FUNCTION saccotac
******************

LOCAL mprg:='SACCOTAC',;
      lci:=0,cci:=00,lba:=02,cba:=36,mnitemmenu:=0

mnitemmenu = 0
op_tela(lci,cci,lba,cba,' COTACAO DE PRODUTOS ')
WHILE .T.
        exibi_prg(mprg)
        setcor(10)
        @ lci,cci PROMPT '  1-> Cotacao de PRODUTOS/FORNECEDOR ' 
        @ lci+1,cci PROMPT '  2-> Cotacao de FORNECEDOR/PRODUTOS ' 
        @ lci+2,cci PROMPT '  3-> Relatorio de PRODUTOS          ' 
        MENU TO mnitemmenu
        setcor(1)
        IF LASTKEY() = 27
                EXIT
        ENDIF
        DO CASE
                CASE mnitemmenu = 1
                         saccota1()
                CASE mnitemmenu = 2
                         saccota2()
                CASE mnitemmenu = 3
                         saccota3()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
