*** con42.PRG: Menu de Relatorios  (Receber)
***********************************************
FUNCTION con42_0()
***************
LOCAL MPRG:='CON42',op42
op_tela(04,20,07,58,' Relatorio CREDITO CLIENTE ')
WHILE .T.
        exibi_prg(mprg)
        setcor(10)
        @ 00,00 PROMPT "  0-> Documentos Emitidas              "
        @ 01,00 PROMPT "  2-> Documentos a Vencer/Vencidas     "
        @ 02,00 PROMPT "  3-> Documentos Pagas                 "
        MENU TO op42
        setcor(1)
        DO CASE
                CASE op42=0
                        wvw_lclosewindow()
                        RETURN NIL
                CASE op42=1
                        * DOCUMENTOS EMITIDOS
                        con420('C')
                CASE op42=2
                        * DOCUMENTOS A VENCER/VENCIDAS
                        con423('C')
                CASE op42=3
                        * DOCUMENTOS PAGOS
                        con424('C')
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
************************** F I M ****************************************
