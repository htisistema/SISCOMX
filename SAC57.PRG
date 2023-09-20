***********************************
* MENU DE LISTAGEM DE CONSULTA
***********************************

FUNCTION sac57
****************
LOCAL MPRG:='SAC57',;
      opcao,lci,cci,lba,cba

lci := cci := 00
lba := 07
cba := 28
op_tela(5,30,13,58,' Tabelas de Consulta ')

WHILE .T.
        exibi_prg(mprg)
        mensagem('Escolha a Opcao ou <ESC> p/Retornar')
        setcor(10)
        @ lci,cci   PROMPT '  1-> Fornecedor/Fabricante  ' 
        @ lci+1,cci PROMPT '  2-> Clientes               ' 
        @ lci+2,cci PROMPT '  3-> Produtos               ' 
        @ lci+3,cci PROMPT '  4-> Grupo/Sub-Grupo        ' 
        @ lci+4,cci PROMPT '  5-> Despesas               ' 
        @ lci+5,cci PROMPT '  6-> Conta Despesas         ' 
        @ lci+6,cci PROMPT '  7-> Tab.Condicao Pagamento ' 
        @ lci+7,cci PROMPT '  8-> Operadores/Vendedores  ' 
        @ lci+8,cci PROMPT '  9-> Nivel de Acesso        '
        MENU TO opcao
        setcor(1)
        IF LASTKEY() = 27
                EXIT
        ENDIF
        DO CASE
                CASE opcao = 1
*                       FORNECEDOR/FABRICANTES
                        sac571()
                CASE opcao = 2
*                       CLIENTES
                        sac572()
                CASE opcao = 3
*                       PRODUTOS
                        sac576()
                CASE opcao = 4
*                       GRUPO/SUB
                        sac575()
                CASE opcao = 5
*                       DESPESAS
                        sac573()
                CASE opcao = 6
*                       CONTAS DE DESPESAS
                        sac574()
                CASE opcao = 7
*                       TAB.COND.PAGAMENTO
                        sac577()
                CASE opcao = 8
*                       USUARIOS/VENDEDORES
                        sac578()
                CASE opcao = 9
*                       NIVEL DE ACESSO
                        sac579()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************************** F I M ************************************

