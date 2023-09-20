**** CON41.PRG: Menu de Relatorios  (Pagar)
********************************************
FUNCTION con41
***************
LOCAL MPRG:='CON41',op41:=0

op_tela(10,10,17,44,' Relatorio Documento  A PAGAR ')
WHILE .T.
        exibi_prg(mprg)
        setcor(10)
        @ 00,0 PROMPT " 0-> Documentos Recebidos          "
        @ 01,0 PROMPT " 1-> Documentos a Vencer/Vencidos  "
        @ 02,0 PROMPT " 2-> Documentos Pagas              "
        @ 03,0 PROMPT " 3-> Emissao de Recibo Pagamento   "
        @ 04,0 PROMPT " 4-> Documento a Receber X a Pagar "
        @ 05,0 PROMPT " 5-> BALANCETE                     "
        @ 06,0 PROMPT " 6-> Resumo do Periodo             "
        @ 07,0 PROMPT " 7-> Conta Corrente do Periodo     "
        MENU TO op41
        setcor(1)
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        DO CASE
                CASE op41=1
                        con411()
                CASE op41=2
                        con413()
                CASE op41=3
                        con414()
                CASE op41=4
                        con418()
                CASE op41=5
                        con419()
                CASE op41=6
                        con415()
                CASE op41=7
                        con412()
                CASE op41=8
                        con416()
        ENDCASE
ENDDO
RETURN NIL










