FUNCTION sacexp(mdir)
***************
LOCAL MPRG:='SACEXP',;
      opcao,tela,lci,cci,lba,cba

lci:=cci:=00
lba:=03
cba:=25
op_tela(10,10,13,47,' Expedicao de Pedidos ')

WHILE .T.
        exibi_prg(mprg)
        mensagem('Escolha a opcao que desejar')
        setcor(10)
        @ lci  ,cci PROMPT ' Expedicao PEDIDOS Quantidade Geral   '
        @ lci+1,cci PROMPT ' Expedicao PEDIDOS Quantidade Parcial '
        @ lci+2,cci PROMPT ' Estorno de Expedicao Pedidos         '
        @ lci+3,cci PROMPT ' Entrega de PEDIDOS                   '

        //@ lci+1,cci PROMPT '  Confirma da Expedicao  '
        SET INTEN ON
        MENU TO opcao
        setcor(1)
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        DO CASE
                CASE opcao = 1
        *               EXPEDICAO DE PEDIDOS
                        sacexp1()
                CASE opcao = 2
        *               EXPEDICAO DE PEDIDOS
                        sacexp11()
                CASE opcao = 3
        *               ESTORNO EXPEDICAO DO PEDIDO
                        sacexp3()
                CASE opcao = 5
        *               ENTREGA DE PEDIDOS
                        sacentre()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL

*************************** F I M **************************************
**********************
* MENU DE EXPEDICAO
**********************
FUNCTION sacexpm()
****************
LOCAL mprg:='SACEXPM',;
      mtela,lci,cci,lba,cba,opcao

lci := 10
cci := 25
lba := 13
cba := 57
mtela := SAVESCREEN(00,00,24,79)

WHILE .T.
        exibi_prg(mprg)
        @ 23,00 CLEAR TO 23,79
        botao(lci,cci,lba,cba,,' MENU DE EXPEDICAO PEDIDOS ')
        setcor(10)
        @ lci+1,cci+1 PROMPT ' Expedir ou Alteracao Pedidos  ' MESSAGE '** Expedicao ou Alteracao de Pedidos - <ESC> Retornar **'
        @ lci+2,cci+1 PROMPT ' Estorno de Expedicao Pedidos  ' MESSAGE '** Estorno de Expedicao de Pedidos - <ESC> Retornar **'
        MENU TO opcao
        setcor(1)
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,mtela)
                CLOSE ALL
                RETURN NIL
        ENDIF

        DO CASE
                CASE opcao = 1
                *          EXPEDICAO DE PEDIDOS
                        sacexp2()
                CASE opcao = 2
                *          ESTORNO DE PEDIDOS
                        sacexp3()
        ENDCASE
ENDDO
RETURN NIL
*********************************  F I M ***********************************








