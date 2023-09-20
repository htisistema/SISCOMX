*************************
* MENU TRANSPORTADORAS
*************************

FUNCTION sac12
***************
LOCAL MPRG := 'SAC12',;
      tela,tela1,lba,cba,li,ci,lb,cb,pode,point,opcao,f
MEMVAR getlist
PRIVATE mcod_tran

li := 14
ci := 00
lb := 16
cb := 75

lba := 14
cba := 75

op_tela(00,00,19,75," Transportadora ")
DEVPOS(0+1,0+2);DEVOUT('Cod.:')
DEVPOS(0+1,0+16);DEVOUT('Transportadora:')
DEVPOS(0+2,0+2);DEVOUT('Cod.:')
DEVPOS(0+2,0+16);DEVOUT('Transportadora:')
DEVPOS(0+3,0+2);DEVOUT('Cod.:')
DEVPOS(0+3,0+16);DEVOUT('Transportadora:')
DEVPOS(0+4,0+2);DEVOUT('Cod.:')
DEVPOS(0+4,0+16);DEVOUT('Transportadora:')
DEVPOS(0+5,0+2);DEVOUT('Cod.:')
DEVPOS(0+5,0+16);DEVOUT('Transportadora:')
DEVPOS(0+6,0+2);DEVOUT('Cod.:')
DEVPOS(0+6,0+16);DEVOUT('Transportadora:')
DEVPOS(0+7,0+2);DEVOUT('Cod.:')
DEVPOS(0+7,0+16);DEVOUT('Transportadora:')
DEVPOS(0+8,0+2);DEVOUT('Cod.:')
DEVPOS(0+8,0+16);DEVOUT('Transportadora:')
DEVPOS(0+9,0+2);DEVOUT('Cod.:')
DEVPOS(0+9,0+16);DEVOUT('Transportadora:')
DEVPOS(0+10,0+2);DEVOUT('Cod.:')
DEVPOS(0+10,0+16);DEVOUT('Transportadora:')
DEVPOS(0+11,0+2);DEVOUT('Cod.:')
DEVPOS(0+11,0+16);DEVOUT('Transportadora:')
DEVPOS(0+12,0+2);DEVOUT('Cod.:')
DEVPOS(0+12,0+16);DEVOUT('Transportadora:')
*---------------------------------------------------------
CLOSE ALL
IF ! AbriArq('sactran','tran');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
*---------------------------------------------------------

***********
SELE('tran');ORDSETFOCUS(2)
***********
SET KEY -4 TO
SET KEY -5 TO f6_forn
GO TOP

pode=.T.

WHILE .T.
        exibi_prg(mprg)
        *************
        ORDSETFOCUS(2)
        *************
        mcod_tran := 0
        botao(li,ci,lb,cb)
        mensagem("<I>nclusao  <A>lteracao  <E>xclusao  <ESC> Retorna" )
        point=RECNO()
        FOR f=1 TO 12
                IF ! EOF()
                        setcor(3)
                        @ 0+f,0+8 SAY tran->cod_tran
                        @ 0+f,0+32 SAY tran->razao
                        setcor(1)
                        SKIP
                ELSE
                        setcor(3)
                        @ 0+f,0+8 SAY SPACE(4)
                        @ 0+f,0+32 SAY SPACE(30)
                        setcor(1)
                ENDIF
        NEXT F
        IF EOF()
                pode=.F.
        ENDIF
        GO POINT
        INKEY(0)
        DO CASE
                CASE LASTKEY()=5 .AND. ! BOF()
                        SKIP -1
                        pode=.T.
                CASE LASTKEY()=24 .AND. (! EOF() .AND. pode=.T.)
                        SKIP
                CASE LASTKEY()=ASC("I") .OR. LASTKEY()=ASC("i")
                        ORDSETFOCUS(1)
                        SAC120()
                        GO TOP
                        pode := .T.
                CASE LASTKEY()=ASC("A") .OR. LASTKEY()=ASC("a")
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                ORDSETFOCUS(1)
                                mensagem('Digite o Codigo do Transportadora a ser Alterado - <ESC> Retornar')
                                botao(li,ci,lb,cb,,' Alteracao ')
                                DEVPOS(li+1,ci+2);DEVOUT('Cod.:')
                                DEVPOS(li+1,ci+16);DEVOUT('Transportadora:')

                                @ li+1,ci+8 GET mcod_tran PICT '9999'
                                READ
                                IF LASTKEY() = 27
                                        GO TOP
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                IF EMPTY(mcod_tran)
                                        LOOP
                                ENDIF

                                SEEK STRZERO(mcod_tran,4)

                                IF ! FOUND()
                                        mcod_tran := 0
                                        atencao('Codigo nao Cadastrado !!!')
                                        LOOP
                                ENDIF
                                IF ! BLOQREG()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF
                                SAC121()
                                UNLOCK
                                *************
                                SELE('tran');ORDSETFOCUS(2)
                                *************
                                GO TOP
                                pode := .T.
                                RESTSCREEN(01,00,24,79,tela1)
                                EXIT
                        ENDDO
                CASE LASTKEY()=ASC("E") .OR. LASTKEY()=ASC("e")
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                ORDSETFOCUS(1)
                                mensagem('Digite o Codigo do Transportadora a ser Excluido - <ESC> Retornar')
                                botao(li,ci,lb,cb,,' Exclusao ')
                                DEVPOS(li+1,ci+2);DEVOUT('Cod.:')
                                DEVPOS(li+1,ci+16);DEVOUT('Transportadora:')

                                @ li+1,ci+8 GET mcod_tran PICT '9999'
                                READ
                                IF LASTKEY() = 27
                                        GO TOP
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                IF EMPTY(mcod_tran)
                                        LOOP
                                ENDIF

                                SEEK STRZERO(mcod_tran,4)

                                IF ! FOUND()
                                        mcod_tran := 0
                                        atencao('Codigo nao Cadastrado !!!')
                                        LOOP
                                ENDIF
                                IF ! BLOQARQ()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(li+1,ci+8);DEVOUT(STRZERO(mcod_tran,4))
                                DEVPOS(li+1,ci+32);DEVOUT(tran->razao)
                                setcor(1)
                                SAC122()
                                UNLOCK
                                *************
                                SELE('tran');ORDSETFOCUS(2)
                                *************
                                GO TOP
                                pode := .T.
                                RESTSCREEN(01,00,24,79,tela1)
                                EXIT
                        ENDDO
                CASE LASTKEY()=27
                        SET KEY -4 TO
                        SET KEY -5 TO
                        CLOSE ALL
                        wvw_lclosewindow()
                        RETURN NIL
        ENDCASE
ENDDO
RETURN NIL
******************************* f i m *********************************************

