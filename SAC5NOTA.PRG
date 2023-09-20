***********************************
* MENU DE NOTA (RELATORIO)
***********************************
FUNCTION sac5nota
******************
LOCAL MPRG:='SAC5NOTA',opcao
op_tela(10,20,16,46,' Notas Emitidas ')
WHILE .T.
        exibi_prg(mprg)
        setcor(10)
        @ 0,0 PROMPT '  0-> Notas Emitidas       '
        @ 1,0 PROMPT '  1-> Notas Interestaduais '
        @ 2,0 PROMPT '  2-> Notas Internas       '
        @ 3,0 PROMPT '  3-> Resumo das NOTAS     '
        @ 4,0 PROMPT '  4-> Notas de Entradas    '
        @ 5,0 PROMPT '  5-> Relatorio IPI        '
        @ 6,0 PROMPT '  3-> Apuracao de Impostos '
*       @ 5,0 PROMPT '  4-> Relatorio da ROM     '
        MENU TO opcao
        setcor(1)
        IF LASTKEY() = 27
                EXIT
        ENDIF
        DO CASE
                CASE opcao = 1
                        sac5not1()
                CASE opcao = 2
                        sac5not2()
                CASE opcao = 3
                        sac5not3()
                CASE opcao = 4
                        sac5not6()
                CASE opcao = 5
                        sac5not7()
                CASE opcao = 6
                        sac5not8()
                CASE opcao = 7
                        sac5not4()
*               CASE opcao = 5
*                       sac5not5()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************************** F I M ************************************