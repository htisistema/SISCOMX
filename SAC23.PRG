*******************************
* SOLICITAR PEDIDO
*******************************
FUNCTION sac23(v,orc,li,ci)
***************
LOCAL MPRG:='SAC23',;
      lci,cci,opcao,mt

PRIVATE mcod_cond:=0,m_cod:={},m_mat:={},m_cbar:={}

lci := cci := 0

IF orc = NIL
        mt := 'PEDIDO   '
ELSE
        mt := 'ORCAMENTO'
ENDIF
op_tela(05,30,16,58,"MENU DE "+mt)
WHILE .T.
        SET KEY 28 TO menu_cons()
        exibi_prg(mprg)
        opcao := 0
        mensagem('Escolha a opcao ou <ESC> p/retornar')
        setcor(10)
        @ lci,cci+1 PROMPT ' 0-> Emissao..: '+mt+'     ' MESSAGE '** Emissao de '+mt+' - <ESC> p/Retornar **'
        @ lci+1,cci+1 PROMPT ' 1-> Alteracao: '+mt+'     ' MESSAGE '** Alteracao do '+mt+'ja Impresso - <ESC> p/Retornar **'
        @ lci+2,cci+1 PROMPT ' 2-> 2a.via do: '+mt+'     ' MESSAGE '** 2a.via do '+mt+' - <ESC> p/Retornar **'
        @ lci+3,cci+1 PROMPT ' 4-> Cancelar.: '+mt+'     ' MESSAGE '** Cancelar '+mt+' - <ESC> p/Retornar **'
        @ lci+4,cci+1 PROMPT ' 5-> Estorno Cancelamento  ' MESSAGE '** Estorno de Pedidos Cancelado '+mt+' - <ESC> p/Retornar **'
        IF mt = 'PEDIDO'
                @ lci+5,cci+1 PROMPT ' 6-> Entrega de PEDIDOS    ' MESSAGE '** Entrega de PEDIDOS - <ESC> p/Retornar **'
                @ lci+6,cci+1 PROMPT ' 7-> TALAO para PEDIDOS    ' MESSAGE '** Entrega de PEDIDOS - <ESC> p/Retornar **'
        ENDIF
        IF mt = 'ORCAMENTO'
                @ lci+5,cci+1 PROMPT ' 6-> 2a.Via Restante       ' MESSAGE '** 2a. via do Restante do ORCAMENTO - <ESC> p/Retornar **'
                @ lci+6,cci+1 PROMPT ' 7-> Estornor ORCAMENTO    ' MESSAGE '** Estorno do ORCAMENTO - <ESC> p/Retornar **'
        ENDIF
        @ lci+7,cci+1 PROMPT ' 8-> Liberar ou Cancelar   ' MESSAGE '** Liberar ou Cancelar PEDIDOS - <ESC> p/Retornar **'
        @ lci+8,cci+1 PROMPT ' 9-> Estorno de Liberacao  ' MESSAGE '** Estorno de PEDIDOS LIBERADOS - <ESC> p/Retornar **'
        @ lci+9,cci+1 PROMPT ' A-> Re-Emissao Frente Loja' MESSAGE '** Estorno de PEDIDOS LIBERADOS - <ESC> p/Retornar **'
        SET INTEN ON
        MENU TO opcao
        setcor(1)

        IF LASTKEY() = 27
                EXIT
        ENDIF
        DO CASE
                CASE opcao = 1
                        IF v = NIL
                                IF orc = NIL
                                        sac23pd1()
                                ELSE
                                        sac23orc()
                                ENDIF
                        ELSE
                                sac23pd1(,1)
                        ENDIF
                        SET KEY 287 TO alt_senha        // ALT+S
                CASE opcao = 2
                        IF orc = NIL
                                sac23pd1(,,'*')
                        ELSE
                                sac23o2()
                        ENDIF
                CASE opcao = 3
                        IF orc = NIL
                                sac5ped1()
                        ELSE
                                sac5ped1(,1)
                        ENDIF
                CASE opcao = 4
                        IF orc = NIL
                                sac342('ped_s')
                        ELSE
                                sac342o('orcam')
                        ENDIF
                CASE opcao = 5
                        IF orc = NIL
                                sac344('ped_s')
                        ELSE
                                sac344('orcam')
                        ENDIF
                CASE opcao = 6
                        IF mt = 'PEDIDO'
                                sacentre()
                        ELSE
                                sacreorc()
                        ENDIF
                CASE opcao = 7
                        IF mt = 'PEDIDO'
                                //sactpped()
                        ELSE
                                sac343()
                        ENDIF
                CASE opcao = 8
                        IF mt = 'PEDIDO'
                                sac350('P')
                        ELSE
                                sac350('O')
                        ENDIF
                CASE opcao = 9 
                        IF mt = 'PEDIDO'
                                sacexp2('E','P')
                        ELSE
                                sacexp2('E','O')
                        ENDIF
                CASE opcao = 10
                        IF orc = NIL
                                sac5ped1(,,,,'*')
                        ELSE
                                sac5ped1(,1,,,'*')
                        ENDIF
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
***************************  F I M  **********************************
