*************************
* CADASTRO DE DESPESAS
*************************
FUNCTION sac17
***************
LOCAL MPRG:='SAC17'
LOCAL tela,lci,cci,lba,cba,point,pode,msele,morde,men,;
      opcao,mmerc,f,tela1,mdesc1,mdesc2
MEMVAR nivel_acess,getlist
PRIVATE mgrupo,mcoddesp

IF ! ver_nivel(mprg,'CADASTRO DAS DESPESAS','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := 00
cci := 00
lba := 13
cba := 79

op_tela(00,00,18,79,memp_resa+SPACE(50)+' DESPESAS ')

//botao(lci,cci,lba,cba,,' DESPESAS ')
DEVPOS(lci,cci+2);DEVOUT('Cod.')
DEVPOS(lci,cci+09);DEVOUT('Descricao')
@ lci+1,cci TO lci+1,cba
pode=.t.

************
CLOSE ALL
IF ! AbriArq('saccadde','desp');RETURN NIL;ENDIF
SELE('desp');ORDSETFOCUS(1)
GO TOP
************
WHILE .T.
        mensagem('<I>nclusao  <A>lteracao  <E>xclusao  <ESC> Retorna')
        botao(lba+2,cci,lba+5,cba,,' Despesas ')        
        opcao := 'S'
        point=RECNO()
        FOR f=1 TO 10
                IF EOF()
                        setcor(3)
                        DEVPOS(lci+1+f,cci+3);DEVOUT(SPACE(43))
                        setcor(1)
                        LOOP
                ENDIF
                setcor(3)
                DEVPOS(lci+1+f,cci+3);DEVOUT(desp->codigo)
                DEVPOS(lci+1+f,cci+09);DEVOUT(desp->desc1+LEFT(desp->desc2,28))
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
                CASE LASTKEY()=18 .AND. ! BOF()
                        SKIP -9
                        pode=.T.
                CASE LASTKEY()=3 .AND. (! EOF() .AND. pode=.T.)
                        SKIP 9
                CASE LASTKEY()=27
                        RESTSCREEN(01,00,24,79,tela)
                        CLOSE ALL
                        RELEASE mgrupo
                        wvw_lclosewindow()
                        RETURN NIL
                CASE LASTKEY() = ASC('I') .OR. LASTKEY() = ASC('i')
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                *************
                                GO BOTT
                                *************
                                mensagem('Digite o Codigo da despesa e faca a descricao - <ESC> p/Retornar')
                                mcoddesp := VAL(desp->codigo)+1
                                mdesc1 := SPACE(40)
                                mdesc2 := SPACE(40)
                                botao(lba+2,cci,lba+5,cba,,' Inclusao Despesas ')
                                DEVPOS(lba+3,cci+2);DEVOUT('Cod.:')
                                DEVPOS(lba+3,cci+15);DEVOUT('Descricao:')
                                @ lba+3,cci+8 GET mcoddesp PICT '999' VALID IF(mgrupo=0,.F.,.T.)
                                READ

                                IF LASTKEY() = 27
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                IF EMPTY(mcoddesp)
                                        LOOP
                                ENDIF
                                GO TOP
                                *************
                                SEEK  STRZERO(mcoddesp,3)
                                *************
                                IF FOUND()
                                        atencao('Despesa ja Cadastrada')
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(lba+3,cci+8);DEVOUT(STRZERO(mcoddesp,3))
                                setcor(1)

                                @ lba+3,cci+26 GET mdesc1 PICT '@!'
                                @ lba+4,cci+26 GET mdesc2 PICT '@!'
                                READ
                                IF LASTKEY() = 27 .OR. EMPTY(mdesc1)
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma Inclusao da DESPESA:')
                                IF opcao = 'S'
                                        IF ADIREG()
                                                desp-> codigo := STRZERO(mcoddesp,3)
                                                desp-> desc1 := mdesc1
                                                desp-> desc2 := mdesc2
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
                                                        DEVPOS(lci+1+f,cci+3);DEVOUT(SPACE(43))
                                                        setcor(1)
                                                        LOOP
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lci+1+f,cci+3);DEVOUT(desp->codigo)
                                                DEVPOS(lci+1+f,cci+09);DEVOUT(desp->desc1+LEFT(desp->desc2,28))
                                                setcor(1)
                                                SKIP
                                        NEXT f
                                ENDIF
                        ENDDO
                CASE LASTKEY() = ASC('A') .OR. LASTKEY() = ASC('a')
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                mensagem('Digite o Codigo da Despesa a ser Alterado - <ESC> p/Retornar')
                                mcoddesp := 0
                                mdesc1 := mdesc2 := SPACE(40)
                                botao(lba+2,cci,lba+5,cba,,' Alteracao ')
                                DEVPOS(lba+3,cci+2);DEVOUT('Cod.:')
                                DEVPOS(lba+3,cci+15);DEVOUT('Descricao:')
                                @ lba+3,cci+8 GET mcoddesp PICT '999' VALID IF(mcoddesp=0,.F.,.T.)
                                READ

                                IF LASTKEY() = 27
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                *************
                                GO TOP
                                *************
                                *************
                                SEEK  STRZERO(mcoddesp,3)
                                *************
                                IF ! FOUND()
                                        atencao('Grupo nao Cadastrado !!!')
                                        LOOP
                                ENDIF
                                IF ! BLOQREG()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF

                                mdesc1 := desp->desc1
                                mdesc2 := desp->desc2
                                setcor(3)
                                DEVPOS(lba+3,cci+8);DEVOUT(STRZERO(mcoddesp,3))
                                setcor(1)

                                @ lba+3,cci+26 GET mdesc1 PICT '@!'
                                @ lba+4,cci+26 GET mdesc2 PICT '@!'
                                READ
                                IF LASTKEY() = 27
                                        UNLOCK
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma Alteracao da DESPESA:')
                                IF opcao = 'S'
                                        desp-> codigo := STRZERO(mcoddesp,3)
                                        desp-> desc1 := mdesc1
                                        desp-> desc2 := mdesc2
                                        COMMIT
                                        UNLOCK
                                        ORDSETFOCUS(1)
                                        GO TOP
                                        FOR f=1 TO 10
                                                IF EOF()
                                                        setcor(3)
                                                        DEVPOS(lci+1+f,cci+03);DEVOUT(SPACE(43))
                                                        setcor(1)
                                                        LOOP
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lci+1+f,cci+3);DEVOUT(desp->codigo)
                                                DEVPOS(lci+1+f,cci+09);DEVOUT(desp->desc1+LEFT(desp->desc2,28))
                                                setcor(1)
                                                SKIP
                                        NEXT f
                                ENDIF
                        ENDDO

                CASE LASTKEY() = ASC('E') .OR. LASTKEY() = ASC('e')
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                mensagem('Digite o Codigo da Despesa a ser Excluida - <ESC> p/Retornar')
                                mcoddesp := 0
                                mdesc1 := mdesc2 := SPACE(40)
                                botao(lba+2,cci,lba+5,cba,,' Exclusao ')
                                DEVPOS(lba+3,cci+2);DEVOUT('Cod.:')
                                DEVPOS(lba+3,cci+15);DEVOUT('Descricao:')
                                @ lba+3,cci+8 GET mcoddesp PICT '999' VALID IF(mcoddesp=0,.F.,.T.)
                                READ

                                IF LASTKEY() = 27
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                *************
                                GO TOP
                                *************
                                *************
                                SEEK  STRZERO(mcoddesp,3)
                                *************
                                IF ! FOUND()
                                        atencao('Despesa nao Cadastrado !!!')
                                        LOOP
                                ENDIF
                                IF ! BLOQARQ()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(lba+3,cci+8);DEVOUT(STRZERO(mcoddesp,3))
                                DEVPOS(lba+3,cci+26);DEVOUT(desp->desc1)
                                DEVPOS(lba+4,cci+26);DEVOUT(desp->desc2)
                                setcor(1)
                                opcao := op_simnao('N','Confirma Exclusao da DESPESA:')
                                IF LASTKEY() = 27
                                        UNLOCK
                                        LOOP
                                ENDIF
                                IF opcao = 'S'
                                        DELE
                                        COMMIT
                                        UNLOCK
                                        sr_getconnection():exec("DELETE FROM saccadde WHERE SR_DELETED = 'T'",,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                        ORDSETFOCUS(1)
                                        GO TOP
                                        FOR f=1 TO 10
                                                IF EOF()
                                                        setcor(3)
                                                        DEVPOS(lci+1+f,cci+3);DEVOUT(SPACE(43))
                                                        setcor(1)
                                                        LOOP
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lci+1+f,cci+3);DEVOUT(desp->codigo)
                                                DEVPOS(lci+1+f,cci+09);DEVOUT(desp->desc1+LEFT(desp->desc2,28))
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

