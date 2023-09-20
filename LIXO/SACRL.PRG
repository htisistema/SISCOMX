***********************
* MENU DO RELOGIO DE PONTO
***********************
FUNCTION sacrl
**************
LOCAL MPRG:='SACRL',opcao:=0
setcor(1)
op_tela(12,40,17,75,' MENU RELOGIO DE PONTO ',,'*')
WHILE .T.
        exibi_prg(mprg)
        @ 0,0 PROMPT ' 0 -> Inclusao no Relogio Ponto      ' //MESSAGE '** Alteracao no Relogio de Ponto - <ESC> p/Retornar **'
        @ 1,0 PROMPT ' 1 -> Alteracao de Lancamento        ' //MESSAGE '** Alteracao no Relogio de Ponto - <ESC> p/Retornar **'
        @ 2,0 PROMPT ' 2 -> Exclusao de Lancamento         ' //MESSAGE '** Exclusao no Relogio de Ponto - <ESC> p/Retornar **'
        @ 3,0 PROMPT " 3 -> Consulta Relogio de Ponto      " //MESSAGE "** Consulta Relogio de Ponto - <ESC> p/Retornar **"
        @ 4,0 PROMPT " 4 -> Relatorio Relogio de Ponto     " //MESSAGE "** Relatorios do Relogio de Ponto - <ESC> p/Retornar **"
        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        DO CASE
                CASE opcao = 1
                *       INCLUSAO
                        sacrl0()
                CASE opcao = 2
                *       ALTERACAO
                        sacrl1('A')
                CASE opcao = 3
                *       EXCLUSAO
                        sacrl1('E')
                CASE opcao = 4
                *       CONSULTA
                        sacrl1('C')
                CASE opcao = 5
                *       RELATORIO
                        sacrl2()
        ENDCASE
ENDDO
RETURN NIL

