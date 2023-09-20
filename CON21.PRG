*** con21.PRG: Menu de Duplicatas (a pagar)
*******************************************
FUNCTION con21(tipo)
***************
LOCAL MPRG:='CON21',;
      opcao

IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacdupp','dupp');RETURN NIL;ENDIF
IF ! AbriArq('sacdesp','cdesp');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
*------------------------------------------------------------------------------------
WHILE .T.
        exibi_prg(mprg)
        IF tipo = NIL
                op_tela(10,10,23,40,'OPCOES')
                setcor(10)
                @ 1,1 PROMPT  ' Inclusao Documento         '
                @ 2,1 PROMPT  ' Alteracao Documento        '
                @ 3,1 PROMPT  ' Exclusao Documento         '
                @ 4,1 PROMPT  ' Consulta Documento         '
                @ 5,1 PROMPT  ' Estorno Documento          '
                @ 6,1 PROMPT  ' Baixa Documentos           '
                @ 7,1 PROMPT  ' Baixa  Geral Documentos    '
                @ 8,1 PROMPT  ' Relatorios                 '
                @ 9,1 PROMPT  ' Inclusao  Varios Documentos'
                @ 10,1 PROMPT ' Fluxo de Caixa             '
                @ 11,1 PROMPT ' Agrupamento  Documentos    '
                @ 12,1 PROMPT ' Transferencia de Documentos'
                SET INTEN ON
                MENU TO opcao
                setcor(1)
                IF LASTKEY()=27
                        EXIT
                ENDIF
                IF opcao = 1
                        con211()
                ELSEIF opcao = 2
                        con212()
                ELSEIF opcao = 3
                        con212('*')
                ELSEIF opcao = 4
                        con214()
                ELSEIF opcao = 5
                        con22('E')
                ELSEIF opcao = 6
                        con22()
                ELSEIF opcao = 7
                        con221(,'*')
                ELSEIF opcao = 8
                        con41()
                ELSEIF opcao = 9
                        con2111()
                ELSEIF opcao = 10
                        sac4flu()
                ELSEIF opcao = 11
                        con221()
                ELSEIF opcao = 12
                        con215()
                ENDIF
        ELSE
                con214()
        ENDIF
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
