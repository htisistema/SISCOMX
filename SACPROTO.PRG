*****************************************
* FUNCAO MENU DA PROTOCOLO DE NOTAS
*****************************************
FUNCTION sacproto
******************

LOCAL mprg:='SACPROTO',;
      lci:=00,cci:=00,lba:=03,cba:=24,mnitemmenu:=0,tela

mnitemmenu = 0
op_tela(lci,cci,lba,cba,' PROTOCOLO de NOTA ')
WHILE .T.
        exibi_prg(mprg)
        setcor(10)
        @ lci,cci PROMPT '  1-> Inclusao de Notas  '   
        @ lci+1,cci PROMPT '  2-> Alteracao de Notas ' 
        @ lci+2,cci PROMPT '  3-> Exclusao de Notas  ' 
        @ lci+3,cci PROMPT '  4-> Relatorio de Notas ' 
        MENU TO mnitemmenu
        setcor(1)
        IF LASTKEY() = 27
                EXIT
        ENDIF
        DO CASE
                CASE mnitemmenu = 1
                        sacprot1()
                CASE mnitemmenu = 2
                        sacprot2('A')
                CASE mnitemmenu = 3
                        sacprot2('E')
                CASE mnitemmenu = 4
                        sacprot3()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
