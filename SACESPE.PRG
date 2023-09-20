********************************
* CADASTRO DE ESPECIE DE PRODUTO
********************************
FUNCTION sacespe
***************
LOCAL MPRG:='SACESPE',mtitulo:='CADASTRO DE ESPECIE DO PRODUTO'

LOCAL tela,lci,cci,lba,cba,point,pode,msele,morde,men,;
      opcao,mcod_espe,mdescri,f,tela1
MEMVAR nivel_acess,getlist
IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := 00
cci := 00
lba := 13
cba := 55
op_tela(00,00,19,55,memp_resa+SPACE(10)+mtitulo)
DEVPOS(lci,cci+2);DEVOUT('Cod.')
DEVPOS(lci,cci+09);DEVOUT('Descricao')
@ lci+1,cci TO lci+1,cba
pode=.t.

************
CLOSE ALL
//
IF ! AbriArq('sacespe','espe');RETURN NIL;ENDIF
SELE('espe');ORDSETFOCUS(1)
GO TOP
************
WHILE .T.
        mensagem('<I>nclusao  <A>lteracao  <E>xclusao  <ESC> Retorna')
        botao(lba+2,cci,lba+4,cba,,' Especie do Produto ')
        opcao := 'S'
        point=RECNO()
        FOR f=1 TO 10
                IF EOF()
                        setcor(3)
                        DEVPOS(lci+1+f,cci+3);DEVOUT(SPACE(24))
                        setcor(1)
                        LOOP
                ENDIF
                setcor(3)
                DEVPOS(lci+1+f,cci+3);DEVOUT(espe->cod_espe)
                DEVPOS(lci+1+f,cci+09);DEVOUT(espe->descri)
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
                                mcod_espe := VAL(espe->cod_espe)+1
                                mdescri := SPACE(20)
                                botao(lba+2,cci,lba+4,cba,,' Inclusao Especie do Produto ')
                                DEVPOS(lba+3,cci+2);DEVOUT('Cod.:')
                                DEVPOS(lba+3,cci+15);DEVOUT('Descricao:')

                                @ lba+3,cci+8 GET mcod_espe PICT '9999'
                                READ
                                IF LASTKEY() = 27 .OR. EMPTY(mcod_espe)
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                        LOOP
                                ENDIF
                                *************
                                GO TOP
                                *************
                                IF espe->(DBSEEK(STRZERO(mcod_espe,4)))
                                        atencao('Especie do produto ja Estar Cadastrado !!!')
                                        LOOP
                                ENDIF
                                @ lba+3,cci+26 GET mdescri PICT '@!'
                                READ
                                IF LASTKEY() = 27 .OR. EMPTY(mdescri)
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma Inclusao:')
                                IF opcao = 'S'
                                        IF ADIREG()
                                                espe-> cod_espe := STRZERO(mcod_espe,4)
                                                espe-> descri := mdescri
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
                                                        DEVPOS(lci+2+f,cci+3);DEVOUT(SPACE(24))
                                                        setcor(1)
                                                        LOOP
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lci+2+f,cci+3);DEVOUT(espe->cod_espe)
                                                DEVPOS(lci+2+f,cci+09);DEVOUT(espe->descri)
                                                setcor(1)
                                                SKIP
                                        NEXT f
                                ENDIF
                        ENDDO
                CASE LASTKEY() = ASC('A') .OR. LASTKEY() = ASC('a')
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                mensagem('Digite o Codigo da Despesa a ser Alterado - <ESC> p/Retornar')
                                mcod_espe := 0
                                mdescri := SPACE(20)
                                botao(lba+2,cci,lba+4,cba,,' Alteracao Especie do produto ')
                                DEVPOS(lba+3,cci+2);DEVOUT('Cod.:')
                                DEVPOS(lba+3,cci+15);DEVOUT('Descricao:')
                                @ lba+3,cci+8 GET mcod_espe PICT '9999'
                                READ

                                IF LASTKEY() = 27
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                *************
                                GO TOP
                                *************
                                IF ! espe->(DBSEEK(STRZERO(mcod_espe,4)))
                                        atencao('Especie do produto nao Cadastrado !!!')
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(lba+3,cci+8);DEVOUT(STRZERO(mcod_espe,4))
                                setcor(1)
                                mdescri := espe->descri
                                @ lba+3,cci+26 GET mdescri PICT '@!'
                                READ
                                IF LASTKEY() = 27 .OR. EMPTY(mdescri)
                                        LOOP
                                ENDIF
                                IF ! BLOQREG()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF

                                opcao := op_simnao('S','Confirma Alteracao:')
                                IF opcao = 'S'
                                        espe-> cod_espe := STRZERO(mcod_espe,4)
                                        espe-> descri := mdescri
                                        COMMIT
                                        UNLOCK
                                        ORDSETFOCUS(1)
                                        GO TOP
                                        FOR f=1 TO 10
                                                IF EOF()
                                                        setcor(3)
                                                        DEVPOS(lci+2+f,cci+3);DEVOUT(SPACE(24))
                                                        setcor(1)
                                                        LOOP
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lci+2+f,cci+3);DEVOUT(espe->cod_espe)
                                                DEVPOS(lci+2+f,cci+09);DEVOUT(espe->descri)
                                                setcor(1)
                                                SKIP
                                        NEXT f
                                ENDIF
                        ENDDO

                CASE LASTKEY() = ASC('E') .OR. LASTKEY() = ASC('e')
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                mensagem('Digite o Codigo da Despesa a ser Excluida - <ESC> p/Retornar')
                                mcod_espe := 0
                                mdescri := SPACE(20)
                                botao(lba+2,cci,lba+4,cba,,' Exclusao Especie de produto ')
                                DEVPOS(lba+3,cci+2);DEVOUT('Cod.:')
                                DEVPOS(lba+3,cci+15);DEVOUT('Descricao:')
                                @ lba+3,cci+8 GET mcod_espe PICT '9999'
                                READ

                                IF LASTKEY() = 27
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                *************
                                GO TOP
                                *************
                                IF ! espe->(DBSEEK(STRZERO(mcod_espe,4)))
                                        atencao('Especie do produto nao Cadastrado !!!')
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(lba+3,cci+8);DEVOUT(STRZERO(mcod_espe,4))
                                DEVPOS(lba+3,cci+26);DEVOUT(espe->descri)
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
                                        sr_getconnection():exec("DELETE FROM sacespe WHERE SR_DELETED = 'T'",,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                        ORDSETFOCUS(1)
                                        GO TOP
                                        FOR f=1 TO 10
                                                IF EOF()
                                                        setcor(3)
                                                        DEVPOS(lci+2+f,cci+3);DEVOUT(SPACE(24))
                                                        setcor(1)
                                                        LOOP
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lci+2+f,cci+3);DEVOUT(espe->cod_espe)
                                                DEVPOS(lci+2+f,cci+09);DEVOUT(espe->descri)
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

