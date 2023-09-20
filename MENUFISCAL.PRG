*************************************
FUNCTION menu_fiscal
********************
LOCAL op42,MPRG:='MENUFISCAL'
op_tela(10,20,23,49,' MENU FISCAL ')
CLEAR GETS
WHILE .T.
        exibi_prg(mprg)
        setcor(1)
        @ 00,00 PROMPT " LX                          "  
        @ 01,00 PROMPT " LMFC                        "  
        @ 02,00 PROMPT " LMFS                        "  
        @ 03,00 PROMPT " Espelho MFD                 "  
        @ 04,00 PROMPT " Arquivo MFD                 "  
        @ 05,00 PROMPT " Tabela de Produto           "  
        @ 06,00 PROMPT " Estoque                   > "  
        @ 07,00 PROMPT " Movimento por ECF           "  
        @ 08,00 PROMPT " Meio de Pagamento           "  
        @ 09,00 PROMPT " Identificao do PAF-ECF      "  
        @ 10,00 PROMPT " Vendas do Periodo	     "  
        @ 11,00 PROMPT " Tab.Indice Tecnico Producao "  
        @ 12,00 PROMPT " Parametro de Configuracao   "  
        MENU TO op42
        DO CASE
                CASE op42=0
                        wvw_lclosewindow()
                        RETURN NIL
                CASE op42=1
                        mopcao := op_simnao('N','Confirma a IMPRESSAO DA LEITURA X:')
                        IF mopcao = 'S'
                                LEITURAX('0',1)
                        ENDIF           
                CASE op42=2
                        MEMORIA_D('c')
                CASE op42=3
                        MEMORIA_D('s')
                CASE op42=4
                        espelho_mfd()
                CASE op42=5
                        arquivo_mfd()
                CASE op42=6
                        tab_produto()
                CASE op42=7
                CASE op42=8
                        mov_ecf()
                CASE op42=9    
                CASE op42=10
                CASE op42=11
                CASE op42=12
                        atencao('"ESTE PAF-ECF NAO EXECUTA FUNCAO DE BAIXA DE ESTOQUE COM BASE EM INDICES TECNICOS DE PRODUCAO, NAO PODENDO SER UTILIZADO POR ESTABELECIMENTO QUE NECESSITE DESTE."')
                CASE op42=13
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** f i m ********************************
