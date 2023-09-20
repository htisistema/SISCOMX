* FUNCAO MENU DA REAJUSTE PARCIAL DE PRODUTOS
*****************************************
FUNCTION sacrepr4
******************
LOCAL mprg:='SACREPR4',;
      lci:=00,cci:=00,lba:=01,cba:=27,mnitemmenu:=0,tela

mnitemmenu = 0
op_tela(10,10,12,37,' Reajuste PRODUTOS ')
WHILE .T.
        mensagem('Escolha a opcao ou <ESC>Retornar')
        exibi_prg(mprg)
        setcor(10)
        @ lci,cci PROMPT '  1-> Por Data de REAJUSTE  ' 
        @ lci+1,cci PROMPT '  2-> Por Data de INCLUSAO  ' 
        MENU TO mnitemmenu
        setcor(1)
        IF LASTKEY() = 27
                EXIT
        ENDIF
        DO CASE
                CASE mnitemmenu = 1
                        sacrep41()
                CASE mnitemmenu = 2
                        sacrep42()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
