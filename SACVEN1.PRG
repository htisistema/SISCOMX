* MENU DE PEDIDOS
*********************
FUNCTION sacven1
***************
LOCAL mprg:='SACVEN1',opcao,lci,cci,lba,cba

lci:=cci:=0
lba:=12
cba:=29
opcao:=0
op_tela(10,05,16,30,' VENDAS ')
WHILE .T.
        exibi_prg(mprg)
        setcor(10)
        @ lci,cci PROMPT '  0 -> Pedidos            ' MESSAGE '** Emissao de Pedidos - <ESC> p/Retornar **'
        @ lci+1,cci PROMPT '  1 -> Orcamentos         ' MESSAGE '** Emissao de Orcamentos - <ESC> p/Retornar **'
        @ lci+2,cci PROMPT '  2 -> Trocas             ' MESSAGE '** Trocas de Mercadorias - <ESC> p/Retornar **'
        @ lci+3,cci PROMPT '  3 -> Inclusao Clientes  '  MESSAGE '** Inclusao de Cliente - <ESC> p/Retornar **'
        @ lci+4,cci PROMPT '  4 -> Consulta Clientes  ' MESSAGE '** Consulta de Clientes - <ESC> p/Retornar **'
        @ lci+5,cci PROMPT '  5 -> Emissao N.fiscal   ' MESSAGE '** Emissao de nota fiscal <ESC> p/Retornar **'
        @ lci+6,cci PROMPT '  6 -> Entrega de Pedidos ' MESSAGE '** Entrega de Pedidos - <ESC> p/Retornar **'
*       @ lci+7,cci PROMPT '  7 -> Consulta Produto   ' MESSAGE '** Entrega de Pedidos - <ESC> p/Retornar **'
        MENU TO opcao
        setcor(1)
        IF LASTKEY() = 27
                EXIT
        ENDIF
        DO CASE
                CASE opcao = 1
        *                 PEDIDOS
                        sac23(,,04,30)
                 CASE opcao = 2
        *                 ORCAMENTOS
                        sac23(,1,05,30)
                 CASE opcao = 3
        *                 TROCA
                        sactroca()
                CASE opcao = 4
        *                 INCLUSAO CLIENTE
                          *************
                          IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
                          IF ! AbriArq('saccep','cep');RETURN NIL;ENDIF
                          //
                          IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
                          IF ! AbriArq('sactabme','tabme');RETURN NIL;ENDIF
                          IF ! AbriArq('regiao','reg');RETURN NIL;ENDIF
                          IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
                          set_key('cliente')
                          SELE('cli');ORDSETFOCUS(2)
                          GO TOP
                          *************
                          f7_cli('*')
                CASE opcao = 5
        *                 CONSULTA DE CLIENTES
                        sac42()
                CASE opcao = 6
        *                 EMISSAO DE NOTA FISCAL
                         sac210()
                CASE opcao = 7
        *                 ENTREGA DE PEDIDOS
                        sacentre()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL

*************************** F I M **************************************



