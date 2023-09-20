*****************************************
* FUNCAO MENU DA COMISSAO DA PERFILPLAST
*****************************************
FUNCTION sac5perf
******************

LOCAL mprg:='SAC5PERF',;
      lci:=00,cci:=00,lba:=02,cba:=37,mnitemmenu:=0,tela

mnitemmenu = 0
op_tela(lci,cci,lba,cba,' Menu Comissao de CLIENTE EM DIA ')
WHILE .T.
        exibi_prg(mprg)
        setcor(10)
        @ lci,cci PROMPT   '  1-> Relatorio e BAIXA de Comissao    ' 
        @ lci+1,cci PROMPT '  2-> Relatorio Comissoes PAGAS        ' 
        @ lci+2,cci PROMPT '  3-> Estorno de Comissoes PAGAS       ' 
        MENU TO mnitemmenu
        setcor(1)
        IF LASTKEY() = 27
                EXIT
        ENDIF
        DO CASE
                CASE mnitemmenu = 1
                        sac5per1()
                CASE mnitemmenu = 2
                        sac5per2()
                CASE mnitemmenu = 3
                        sac5per3()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
