*****************************************
* FUNCAO MENU DA REAJUSTE PARCIAL DE PRODUTOS
*****************************************
FUNCTION sacrepro
******************

LOCAL mprg:='SACREPRO',;
      lci:=00,cci:=00,lba:=04,cba:=27,mnitemmenu:=0

mnitemmenu = 0
op_tela(05,05,09,32,' Reajuste PRODUTOS ')
WHILE .T.
        exibi_prg(mprg)
        mensagem('Escolha a opcao ou <ESC>Retornar')
        setcor(10)
        @ lci,cci PROMPT '  1-> Inclusao de PRODUTOS  ' //MESSAGE '*** Inclusao de Produtos - <ESC> p/Sair ***'
        @ lci+1,cci PROMPT '  2-> Alteracao de PRODUTOS ' //MESSAGE '*** Alteracao de Produtos - <ESC> p/Sair ***'
        @ lci+2,cci PROMPT '  3-> Exclusao de PRODUTOS  ' //MESSAGE '*** Exclusao de Produtos - <ESC> p/Sair ***'
        @ lci+3,cci PROMPT '  4-> REAJUSTAR OS PRODUTOS ' //MESSAGE '*** REAJUSTE DE PRODUTOS - <ESC> p/Sair ***'
        @ lci+4,cci PROMPT '  5-> Relatorio de PRODUTOS ' //MESSAGE '*** Relatorio dos Produtos - <ESC> p/Sair ***'
        MENU TO mnitemmenu
        setcor(1)
        IF LASTKEY() = 27
                EXIT
        ENDIF
        DO CASE
                CASE mnitemmenu = 1
                        sacrepr1()
                CASE mnitemmenu = 2
                        sacrepr2('A')
                CASE mnitemmenu = 3
                        sacrepr2('E')
                CASE mnitemmenu = 4
                        sacrepr3()
                CASE mnitemmenu = 5
                        sacrepr4()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
