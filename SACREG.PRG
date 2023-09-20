MEMVAR getlist
**
*** SACREG.PRG:  Menu de Regi”es
***

FUNCTION sacreg

LOCAL tela:=SAVESCREEN(00,00,24,79),cod,desc,cdvend,pode,f,point,opcao,s


op_tela(00, 00, 14,49,' Regioes ')
DEVPOS(00,00);DEVOUT(" Cod   Descricao da Regiao             Ven")
@ 01,00 TO 01,49
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('regiao','reg');RETURN NIL;ENDIF
ORDSETFOCUS(1)
go top
pode=.t.
WHILE .t.
        mensagem("[I]nclusao  [A]lteracao  [E]xclusao  [ ou ] Consulta  [ESC] Retorna")
        BOTAO(09, 00, 11, 58)
        point=recno()
        FOR f=1 TO 6
                IF ! EOF()
                        @ 01+f,02 SAY reg->codigo
                        @ 01+f,07 SAY reg->Regiao
                        @ 01+f,40 SAY reg->codvend
                        SKIP
                ELSE
                        @ 01+f,02 SAY SPACE(34)
                ENDIF
        NEXT f
        IF eof()
                pode=.f.
        ENDIF
        go point
        s=INKEY(0)
        do CASE
                CASE s=asc("I") .or. s=asc("i")
                        WHILE .t.
                                BOTAO(09, 00, 11, 58,,' INCLUSAO ')
                                Mensagem('Digite o Codigo da Regiao a ser incluida. [ESC] Abandona')
                                cod=SPACE(2)
                                desc=SPACE(30)
                                cdvend=SPACE(3)
                                @ 10,02 GET cod PICT "99"
                                READ
                                IF lastkey()=27 .or. cod="  "
                                        go top
                                        EXIT
                                ENDIF
                                IF reg->(DBSEEK(cod))
                                        atencao("Esta Regi„o j  existe!   Tecle [ ÄÙ ]")
                                        LOOP
                                ENDIF
                                Mensagem('Digite a Descri‡„o, e o C¢digo do Vendedor Responsavel. [ESC] Fim')
                                @ 10,07 GET desc PICT '@!'
                                @ 10,40 GET cdvend PICT "999" VALID ver_ven(cdvend)
                                READ
                                IF lastkey()=27
                                        go top
                                        EXIT
                                ENDIF
                                opcao = Mensagem1('Confirma os dados digitados ? [S/n]:','S','S/N')
                                IF opcao = 'S'
                                        ADIREG()
                                        reg->codigo := cod
                                        reg->Regiao := desc
                                        reg->codvend := cdvend
                                        DBCOMMIT()
                                        DBUNLOCK()
                                ELSE
                                        LOOP
                                ENDIF
                                GO TOP
                        ENDDO
                CASE s=5
                        IF ! BOF()
                                SKIP -1
                                pode=.t.
                        ENDIF
                CASE s=24
                        IF ! EOF() .and. pode=.t.
                                SKIP
                        ENDIF
                CASE s=asc("A") .or. s=asc("a")
                        WHILE .t.
                                BOTAO(09, 00, 11, 58,,' ALTERACAO ')
                                Mensagem("Digite o C¢digo da Regi„o a ser modificada. [ESC] Abandona")
                                cod=SPACE(2)
                                @ 10,02 GET cod PICT "99"
                                READ
                                IF lastkey()=27 .or. cod="  "
                                        go top
                                        EXIT
                                ENDIF
                                IF ! reg->(DBSEEK(cod))
                                        atencao("Esta Regi„o n„o existe!   Tecle [ ÄÙ ]")
                                        LOOP
                                ENDIF
                                cod := reg->codigo
                                desc := reg->Regiao
                                cdvend := reg->codvend
                                @ 10,07 GET desc PICT '@!'
                                @ 10,40 GET cdvend PICT "999" VALID ver_ven(cdvend)
                                Mensagem("Modifique a Descri‡„o, e o Vendedor Respons vel. [ESC] Fim.")
                                READ
                                IF lastkey()=27
                                        go top
                                        EXIT
                                ENDIF
                                opcao = Mensagem1('Confirma os dados digitados ? [S/n]:','S','S/N')
                                IF opcao = 'N' .OR. LASTKEY() = 27
                                        LOOP
                                ELSE
                                        BLOQREG()
                                        reg->Regiao := desc
                                        reg->codvend := cdvend
                                ENDIF
                                go point
                                FOR f=1 TO 7
                                        IF ! EOF()
                                                @ 01+f,02 SAY reg->codigo
                                                @ 01+f,07 SAY reg->Regiao
                                                @ 01+f,40 SAY reg->codvend
                                                SKIP
                                        ELSE
                                                @ 01+f,02 SAY "  "
                                                @ 01+f,07 SAY SPACE(40)
                                                @ 01+f,40 SAY "  "
                                        ENDIF
                                NEXT f
                        ENDDO
                CASE s=asc("E") .or. s=asc("e")
                        WHILE .t.
                                BOTAO(09, 00, 11, 58,,' EXCLUSAO ')
                                Mensagem("Digite o C¢digo da Regi„o a ser Excluida. [ESC] Abandona")
                                cod=SPACE(3)
                                @ 10,02 GET cod PICT "99"
                                READ
                                IF lastkey()=27 .or. cod="  "
                                        go top
                                        EXIT
                                ENDIF
                                IF ! reg->(DBSEEK(cod))
                                        atencao("Esta Regi„o n„o existe!   Tecle [ ÄÙ ]")
                                        LOOP
                                ENDIF
                                @ 10,07 SAY reg->Regiao
                                @ 10,40 SAY reg->codvend
                                opcao = Mensagem1('Confirma Exclus„o ? [s/N]:','N','S/N')
                                IF opcao = 'N' .OR. LASTKEY() = 27
                                        go top
                                        EXIT
                                ELSE
                                        BLOQREG()
                                        DELE
                                        PACK
                                ENDIF
                                go point
                                FOR f=1 TO 7
                                        IF ! EOF()
                                                @ 01+f,02 SAY reg->codigo
                                                @ 01+f,07 SAY reg->Regiao
                                                @ 01+f,40 SAY reg->codvend
                                                SKIP
                                        ELSE
                                                @ 01+f,02 SAY "  "
                                                @ 01+f,07 SAY SPACE(30)
                                                @ 01+f,40 SAY "  "
                                        ENDIF
                                NEXT f
                                EXIT
                        ENDDO
                CASE s=27
                        wvw_lclosewindow()
                        RETURN NIL
        endCASE
ENDDO
wvw_lclosewindow()
RETURN NIL

