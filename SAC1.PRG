***********************
* MENU DE ARQUIVO
***********************

FUNCTION sac1
***************
LOCAL MPRG:='SAC1'

LOCAL opcao,tela,tecla,lci,cci,lba,cba

lci = 04
cci = 37
lba = 10
cba = 71
tela = SAVESCREEN(01,00,24,79)
opcao = 0
WHILE .T.
        exibi_prg(mprg)
        botao(lci,cci,lba,cba,,' Continuacao Arquivo ','*')
        setcor(10)
        @ lci+1,cci+1 PROMPT '  0 -> Regioes de Vendedores      ' MESSAGE '** Inclusao, Alteracao e Exclusao de Regioes de Vendedores - <ESC> p/Retornar **'
        @ lci+2,cci+1 PROMPT '  1 -> Cadastro de Cidades        ' MESSAGE '** Inclusao, Alteracao e Exclusao de Cidades - <ESC> p/Retornar **'
        @ lci+3,cci+1 PROMPT '  2 -> Classificacao Fiscal       ' MESSAGE '** Inclusao, Alteracao e Exclusao de Classificao Fiscal - <ESC> p/Retornar **'
        @ lci+4,cci+1 PROMPT '  3 -> Tabela Condicoes Pagamento ' MESSAGE '** Inclusao, Alteracao e Exclusao de Condicoes de PG. - <ESC> p/Retornar **'
        @ lci+5,cci+1 PROMPT '  4 -> Mensagens p/Observacao     ' MESSAGE '** Inclusao, Alteracao e Exclusao de MENSAGEM P/OBS. - <ESC> p/Retornar **'
        SET INTEN ON
        MENU TO opcao
        setcor(1)

        RESTSCREEN(01,00,24,79,tela)

        IF LASTKEY() = 27
                RETURN NIL
        ENDIF

        DO CASE
                CASE opcao = 1
                        sacreg()
                CASE opcao = 2
                        saccid('*')
                CASE opcao = 3
                        sacclf()
                CASE opcao = 4
                        sac20('*')
                CASE opcao = 5
                        sacobs('*')
        ENDCASE
ENDDO
RETURN NIL

