***********************************
* MENU DE RELATORIO DE CADASTRAMENTO
***********************************

FUNCTION sac5cad
****************
LOCAL MPRG:='SAC5CAD'

LOCAL opcao,lci,cci,lba,cba,tela

lci := 08
cci := 10
lba := 11
cba := 28

tela := SAVESCREEN(01,00,24,79)

WHILE .T.
        exibi_prg(mprg)
        botao(lci,cci,lba,cba,,' Cadastros ')
        setcor(10)
        @ lci+1,cci+1 PROMPT '  Clientes        ' MESSAGE '*** Relatorio de Cadastramento de Clientes - <ESC> p/Sair ***'
        @ lci+2,cci+1 PROMPT '  Fornecedores    ' MESSAGE '*** Relatorio de Cadastramento de Fornecedores - <ESC> p/Sair ***'
        MENU TO opcao
        setcor(1)
        IF LASTKEY() = 27
                RESTSCREEN(01,00,24,79,tela)
                EXIT
        ENDIF
        DO CASE
                CASE opcao = 1
                        sac5cad1()
                CASE opcao = 2
                        sac5cad2()
        ENDCASE
ENDDO
RETURN NIL
*********************************** F I M ************************************

