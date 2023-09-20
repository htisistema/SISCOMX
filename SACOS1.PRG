* MENU DE ORDEM DE SERVICOS
********************
FUNCTION sacos1
***************
LOCAL MPRG:='SACOS1',mopcao,opcao,mopcao1,lci,cci,lba,cba,tela,tela1,mtraco

lci = 00
cci = 00
lba = 08
cba = 32
opcao = 0
mtraco := REPLI('=',80)
op_tela(10,10,18,41,' ORDEM DE SERVICOS ')
WHILE .T.
        exibi_prg(mprg)
        mensagem('Escolha a Opcao de Deseja:')
        setcor(10)
        @ lci,cci PROMPT   ' 0 -> Solicitacao O.S.          '   //MESSAGE '** Solicitacao da O.S. - <ESC> Retornar **'
        @ lci+1,cci PROMPT ' 1 -> 2a.Via da O.S.            ' //MESSAGE '** 2a. Via da O.S. - <ESC> Retornar **'
        @ lci+2,cci PROMPT ' 2 -> Diagnostico TECNICO       ' //MESSAGE '** Diagnostico do TECNICOS - <ESC> Retornar **'
        @ lci+3,cci PROMPT ' 3 -> Inclusao de Produtos      ' //MESSAGE '** Inclusao de Produtos na O.S. - <ESC> Retornar **'
        @ lci+4,cci PROMPT ' 4 -> Consulta da O.S.          ' //MESSAGE '** Consulta da O.S. - <ESC> Retornar **'
        @ lci+5,cci PROMPT ' 5 -> Alteracao da O.S.         ' //MESSAGE '** Alteracao da O.S. - <ESC> Retornar **'
        @ lci+6,cci PROMPT ' 6 -> Cancelar O.S.             ' //MESSAGE '** Exclusao da O.S. - <ESC> Retornar **'
        @ lci+7,cci PROMPT ' 7 -> Cadastro de Acessorios    ' //MESSAGE '** Cadastro de Acessorios - <ESC> Retornar **'
        @ lci+8,cci PROMPT ' 8 -> Relatorios da O.S.        ' //MESSAGE '** Relatorios da O.S. - <ESC> Retornar **'
        MENU TO opcao
        setcor(1)

        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        DO CASE
                CASE opcao = 1
                *          SOLICITACAO O.S.
                        sacos11()
                CASE opcao = 2
                *          2a.VIA
                        sacos15('2')
                CASE opcao = 3
                *          DIAGNOSTICO DO TECNICO O.S.
                        sacos15('D')
                CASE opcao = 4
                *          INCLUSAO DE PRODUTOS
                        os_prod()       //sacos15
                CASE opcao = 5
                *          CONSULTA DE O.S.
                        sacos15()
                CASE opcao = 6
                *          ALTERACAO DE O.S.
                        sacos15('A')
                CASE opcao = 7
                *          EXCLUSAO DE O.S.
                        sacos15('E')
                CASE opcao = 8
                *          CADASTRO DE ACESSORIOS
                        sacos2('*')
                CASE opcao = 9
                *          RELATORIO DE O.S.
                        sacos5()
        ENDCASE
ENDDO
RETURN NIL
*********************************  F I M ***********************************

