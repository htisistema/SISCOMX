********************************
* CADASTRO DE CLASSIFICACAO FISCAL
********************************
FUNCTION sacclf
***************
LOCAL MPRG:='SACCLF',mtitulo:='CADASTRO DA CLASSIFICACAO FISCAL'

LOCAL tela,lci,cci,lba,cba,point,pode,msele,morde,men,;
      opcao,mcodigo,mnumero,f,tela1
MEMVAR nivel_acess,getlist
IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := 00
cci := 00
lba := 13
cba := 25
op_tela(lci,cci,20,cba,mtitulo)
DEVPOS(lci,cci+2);DEVOUT('Cod.')
DEVPOS(lci,cci+09);DEVOUT('Numero')
@ lci+1,cci TO lci+1,cba
pode=.t.

************
CLOSE ALL
//
IF ! AbriArq('sacclf','clf');RETURN NIL;ENDIF
SELE('clf');ORDSETFOCUS(1)
GO TOP
************
WHILE .T.
        mensagem('<I>ncl. <A>lt. <E>xcl.')
        opcao := 'S'
        point=RECNO()
        botao(lba+2,cci,lba+5,cba)
        FOR f=1 TO 10
                IF EOF()
                        setcor(3)
                        DEVPOS(lci+1+f,cci+3);DEVOUT(SPACE(22))
                        setcor(1)
                        LOOP
                ENDIF
                setcor(3)
                DEVPOS(lci+1+f,cci+3);DEVOUT(clf->codigo)
                DEVPOS(lci+1+f,cci+09);DEVOUT(clf->numero)
                setcor(1)
                SKIP
        NEXT f
        IF EOF()
                pode=.f.
        ENDIF
        GO point
        INKEY(0)
        DO CASE
                CASE LASTKEY()=5 .AND. ! BOF()
                        SKIP -1
                        pode=.T.
                CASE LASTKEY()=24 .AND. (! EOF() .AND. pode=.T.)
                        SKIP
                CASE LASTKEY()=18
                        IF ! BOF()
                                SKIP -9
                                pode=.T.
                        ENDIF
                CASE LASTKEY()=3
                        IF ! EOF() .AND. pode=.T.
                                SKIP 9
                        ENDIF

                CASE LASTKEY()=27
                        RELEASE mgrupo
                        wvw_lclosewindow()
                        RETURN NIL

                CASE LASTKEY() = ASC('I') .OR. LASTKEY() = ASC('i')
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                mensagem('Digite o Codigo da despesa e faca a descricao - <ESC> p/Retornar')
                                mcodigo := SPACE(2)
                                mnumero := SPACE(10)
                                botao(lba+2,cci,lba+5,cba,,' Inclusao ')
                                DEVPOS(lba+3,cci+1);DEVOUT('Codigo:')
                                DEVPOS(lba+4,cci+1);DEVOUT('Numero:')

                                @ lba+3,cci+09 GET mcodigo PICT '@!'
                                READ
                                IF LASTKEY() = 27 .OR. EMPTY(mcodigo)
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                        LOOP
                                ENDIF
                                *************
                                GO TOP
                                *************
                                IF clf->(DBSEEK(mcodigo))
                                        atencao('Classificacao Fiscal ja Estar Cadastrado !!!')
                                        LOOP
                                ENDIF
                                @ lba+4,cci+09 GET mnumero PICT '@!'
                                READ
                                IF LASTKEY() = 27 .OR. EMPTY(mnumero)
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma Inclusao:')
                                IF opcao = 'S'
                                        IF ADIREG()
                                                clf-> codigo := mcodigo
                                                clf-> numero := mnumero
                                                COMMIT
                                                UNLOCK
                                        ELSE
                                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                                ORDSETFOCUS(3)
                                                LOOP
                                        ENDIF
                                        ORDSETFOCUS(1)
                                        GO TOP
                                        FOR f=1 TO 10
                                                IF EOF()
                                                        setcor(3)
                                                        DEVPOS(lci+1+f,cci+3);DEVOUT(SPACE(22))
                                                        setcor(1)
                                                        LOOP
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lci+1+f,cci+3);DEVOUT(clf->codigo)
                                                DEVPOS(lci+1+f,cci+09);DEVOUT(clf->numero)
                                                setcor(1)
                                                SKIP
                                        NEXT f
                                ENDIF
                        ENDDO
                CASE LASTKEY() = ASC('A') .OR. LASTKEY() = ASC('a')
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                mensagem('Digite o Codigo da Classificacao Fiscal a ser Alterado - <ESC> p/Retornar')
                                mcodigo := SPACE(2)
                                mnumero := SPACE(10)
                                botao(lba+2,cci,lba+5,cba,,' Alteracao ')
                                DEVPOS(lba+3,cci+1);DEVOUT('Codigo:')
                                DEVPOS(lba+4,cci+1);DEVOUT('Numero:')
                                @ lba+3,cci+09 GET mcodigo PICT '@!'
                                READ

                                IF LASTKEY() = 27
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                *************
                                GO TOP
                                *************
                                IF ! clf->(DBSEEK(mcodigo))
                                        atencao('Classificacao Fiscal nao Cadastrada !!!')
                                        LOOP
                                ENDIF
                                mnumero := clf->numero
                                @ lba+4,cci+09 GET mnumero PICT '@!'
                                READ
                                IF LASTKEY() = 27 .OR. EMPTY(mnumero)
                                        LOOP
                                ENDIF
                                IF ! BLOQREG()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF

                                opcao := op_simnao('S','Confirma Alteracao:')
                                IF opcao = 'S'
                                        clf-> codigo := mcodigo
                                        clf-> numero := mnumero
                                        COMMIT
                                        UNLOCK
                                        ORDSETFOCUS(1)
                                        GO TOP
                                        FOR f=1 TO 10
                                                IF EOF()
                                                        setcor(3)
                                                        DEVPOS(lci+1+f,cci+3);DEVOUT(SPACE(22))
                                                        setcor(1)
                                                        LOOP
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lci+1+f,cci+3);DEVOUT(clf->codigo)
                                                DEVPOS(lci+1+f,cci+09);DEVOUT(clf->numero)
                                                setcor(1)
                                                SKIP
                                        NEXT f
                                ENDIF
                        ENDDO

                CASE LASTKEY() = ASC('E') .OR. LASTKEY() = ASC('e')
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                mensagem('Digite o Codigo da Classificacao Fiscal ser Excluida - <ESC> p/Retornar')
                                mcodigo := SPACE(2)
                                botao(lba+2,cci,lba+5,cba,,' Exclusao ')
                                DEVPOS(lba+3,cci+1);DEVOUT('Codigo:')
                                DEVPOS(lba+4,cci+1);DEVOUT('Numero:')
                                @ lba+3,cci+09 GET mcodigo PICT '@!'
                                READ

                                IF LASTKEY() = 27
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                *************
                                GO TOP
                                *************
                                IF ! clf->(DBSEEK(mcodigo))
                                        atencao('Classificai Fiscal nao Cadastrado !!!')
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(lba+4,cci+09);DEVOUT(clf->numero)
                                setcor(1)
                                IF ! BLOQARQ()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma Exclusao:')
                                IF opcao = 'S'
                                        DELE
                                        COMMIT
                                        UNLOCK
                                        sr_getconnection():exec("DELETE FROM sacclf WHERE SR_DELETED = 'T'",,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                        ORDSETFOCUS(1)
                                        GO TOP
                                        FOR f=1 TO 10
                                                IF EOF()
                                                        setcor(3)
                                                        DEVPOS(lci+1+f,cci+3);DEVOUT(SPACE(22))
                                                        setcor(1)
                                                        LOOP
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lci+1+f,cci+3);DEVOUT(clf->codigo)
                                                DEVPOS(lci+1+f,cci+09);DEVOUT(clf->numero)
                                                setcor(1)
                                                SKIP
                                        NEXT f
                                ENDIF
                        ENDDO
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** f i m *******************************************

