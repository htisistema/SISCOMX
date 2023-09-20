*************************
* MENU DE SUB-GRUPOS
*************************
FUNCTION sac101
***************
LOCAL MPRG:='SAC101',;
      tela1,tela,lba,cba,point,pode,msele,morde,men,;
      opcao,mgrupo,mmerc,f
MEMVAR nivel_acess,mdata_sis,getlist
PRIVATE msub_gru

IF ! ver_nivel(mprg,'CADASTRO DE SUB-GRUPOS','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
lba := 14
cba := 74
op_tela(00,00,20,72,'S U B  -  G R U P O S' )
pode=.t.

************
CLOSE ALL
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
SELE('grup');ORDSETFOCUS(1)
GO TOP
************
WHILE .T.
        mensagem('Consulta  <I>nclusao  <A>lteracao  <E>xclusao  <ESC> Retorna')
        opcao := 'S'
        mgrupo = 0
        msub_gru = 0
        mmerc = SPACE(40)
        point=RECNO()
        FOR f=1 TO 15
                IF ! EOF()
                        IF EOF()
                                DEVPOS(f,2);DEVOUT('Cod.:')
                                DEVPOS(f,17);DEVOUT('Grupo.....:')
                                setcor(3)
                                DEVPOS(f,8);DEVOUT(SPACE(6))
                                DEVPOS(f,29);DEVOUT(SPACE(40))
                                setcor(1)
                                LOOP
                        ENDIF

                        IF LEN(RTRIM(grup->gru_sub)) < 5
                                DEVPOS(f,2);DEVOUT('Cod.:')
                                DEVPOS(f,17);DEVOUT('Grupo.....:')
                                setcor(3)
                                DEVPOS(f,8);DEVOUTPICT(grup->gru_sub,'@@R 999999')
                                DEVPOS(f,29);DEVOUT(grup->merc)
                                setcor(1)
                        ELSE
                                DEVPOS(f,2);DEVOUT('Cod.:')
                                DEVPOS(f,17);DEVOUT('Sub-Grupos:')
                                setcor(3)
                                DEVPOS(f,8);DEVOUTPICT(grup->gru_sub,'@@R 999.99')
                                DEVPOS(f,29);DEVOUT(grup->merc)
                                setcor(1)                        
                        ENDIF
                        SKIP
                ELSE
                        setcor(3)
                        DEVPOS(f,8);DEVOUT(SPACE(6))
                        DEVPOS(f,29);DEVOUT(SPACE(40))
                        setcor(1)
                ENDIF
        NEXT f
        IF EOF()
                pode=.f.
        ENDIF
        GO point
        SET CURSOR OFF
        INKEY(0)
        DO CASE
                CASE LASTKEY()=5
                        IF ! BOF()
                                SKIP -1
                                pode=.T.
                        ENDIF
                CASE LASTKEY()=24
                        IF ! EOF() .AND. pode=.T.
                                SKIP
                        ENDIF
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
                        SET KEY -2 TO
                        SET CURSOR ON
                        wvw_lclosewindow()
                        CLOSE ALL
                        RELEASE msub_gru
                        RETURN NIL

                CASE LASTKEY() = ASC('I') .OR. LASTKEY() = ASC('i')
                        SET CURSOR ON
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                mensagem('Digite o Codigo do Grupo e Sub-Grupo a ser Cadastrado - <ESC>p/Retornar')
                                mgrupo := 0
                                msub_gru := 0
                                mmerc := SPACE(40)
                                botao(lba+2,0,lba+5,cba,,' Inclusao ')
                                DEVPOS(lba+3,2);DEVOUT('Cod.:')
                                DEVPOS(lba+3,17);DEVOUT('Grupos....:')
                                DEVPOS(lba+4,2);DEVOUT('Cod.:')
                                DEVPOS(lba+4,17);DEVOUT('Sub-Grupo..')

                                setcor(3)
                                DEVPOS(lba+3,29);DEVOUT(SPACE(40))
                                DEVPOS(lba+4,29);DEVOUT(SPACE(40))
                                setcor(1)

                                @ lba+3,8 GET mgrupo PICT '999' VALID ver_gru(@mgrupo,lba+3,29,.F.)
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                IF EMPTY(mgrupo)
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(lba+3,8);DEVOUT(STRZERO(mgrupo,3))
                                setcor(1)
                                @ lba+4,8 GET msub_gru PICT '99'
                                READ

                                IF LASTKEY() = 27 .OR. EMPTY(msub_gru) .OR. EMPTY(mgrupo)
                                        LOOP
                                ENDIF
                                ********************
                                SELE('grup');ORDSETFOCUS(1)
                                GO TOP
                                ********************

                                IF grup->(DBSEEK(STRZERO(mgrupo,3)+STRZERO(msub_gru,2)))
                                        atencao('Sub-Grupo ja Cadastrado !!!')
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(lba+4,8);DEVOUT(STRZERO(msub_gru,2))
                                setcor(1)
                                @ lba+4,29 GET mmerc PICT '@!'
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma Inclusao do SUB-GRUPO:')
                                IF opcao = 'S'
                                        IF ADIREG()
                                                grup-> gru_sub := STRZERO(mgrupo,3)+STRZERO(msub_gru,2)
                                                grup-> merc := mmerc
                                                grup-> data_cad := mdata_sis
                                                COMMIT
                                                UNLOCK
                                                ORDSETFOCUS(1)
                                                GO TOP
                                                FOR f=1 TO 12
                                                        IF ! EOF()
                                                                IF EOF()
                                                                        DEVPOS(1+f,2);DEVOUT('Cod.:')
                                                                        DEVPOS(1+f,17);DEVOUT('Grupo.....:')
                                                                        setcor(3)
                                                                        DEVPOS(1+f,8);DEVOUT(SPACE(6))
                                                                        DEVPOS(1+f,29);DEVOUT(SPACE(40))
                                                                        setcor(1)
                                                                        LOOP
                                                                ENDIF
                                                                DEVPOS(1+f,2);DEVOUT('Cod.:')
                                                                DEVPOS(1+f,17);DEVOUT('Grupo.....:')
                                                                setcor(3)
                                                                DEVPOS(1+f,8);DEVOUTPICT(grup->gru_sub,'@@R 999.99')
                                                                DEVPOS(1+f,29);DEVOUT(grup->merc)
                                                                setcor(1)
                                                                SKIP
                                                        ELSE
                                                                DEVPOS(1+f,2);DEVOUT('Cod.:')
                                                                DEVPOS(1+f,17);DEVOUT('Grupo.....:')
                                                                setcor(3)
                                                                DEVPOS(1+f,8);DEVOUT(SPACE(6))
                                                                DEVPOS(1+f,29);DEVOUT(SPACE(40))
                                                                setcor(1)
                                                        ENDIF
                                                NEXT f
                                        ELSE
                                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                                LOOP
                                        ENDIF
                                ENDIF
                        ENDDO

                CASE LASTKEY() = ASC('A') .OR. LASTKEY() = ASC('a')

                        SET CURSOR ON
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                mensagem('Digite o Codigo do Grupo e Sub-Grupo a ser Alterado - <ESC> p/Retornar')
                                mgrupo := 0
                                msub_gru := 0
                                mmerc := SPACE(40)
                                botao(lba+2,0,lba+5,cba,,' Alteracao ')
                                setcor(3)
                                DEVPOS(lba+3,29);DEVOUT(SPACE(40))
                                DEVPOS(lba+4,29);DEVOUT(SPACE(40))
                                setcor(1)

                                DEVPOS(lba+3,2);DEVOUT('Cod.:')
                                DEVPOS(lba+3,17);DEVOUT('Grupos....:')
                                DEVPOS(lba+4,2);DEVOUT('Cod.:')
                                DEVPOS(lba+4,17);DEVOUT('Sub-Grupo.:')
                                @ lba+3,8 GET mgrupo PICT '999' VALID ver_gru(@mgrupo,lba+3,29,.F.)
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                IF EMPTY(mgrupo)
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(lba+3,8);DEVOUT(STRZERO(mgrupo,3))
                                setcor(1)
                                @ lba+4,8 GET msub_gru PICT '99'
                                READ
                                IF LASTKEY() = 27 .OR. EMPTY(msub_gru) .OR. EMPTY(mgrupo)
                                        LOOP
                                ENDIF
                                ********************
                                SELE('grup');ORDSETFOCUS(1)
                                GO TOP
                                ********************

                                IF ! grup->(DBSEEK(STRZERO(mgrupo,3)+STRZERO(msub_gru,2)))
                                        atencao('Sub-Grupo nao Cadastrado !!!')
                                        LOOP
                                ENDIF
                                IF ! BLOQREG()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(lba+4,8);DEVOUT(STRZERO(msub_gru,2))
                                setcor(1)
                                mmerc := grup->merc
                                @ lba+4,29 GET mmerc PICT '@!'
                                READ
                                IF LASTKEY() = 27
                                        UNLOCK
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma Alteracao do SUB-GRUPO:')
                                IF opcao = 'S'
                                        grup-> merc := mmerc
                                        COMMIT
                                        UNLOCK
                                        ORDSETFOCUS(1)
                                        GO TOP
                                        FOR f=1 TO 12
                                                IF ! EOF()
                                                        IF EOF()
                                                                DEVPOS(1+f,2);DEVOUT('Cod.:')
                                                                DEVPOS(1+f,17);DEVOUT('Grupo.....:')
                                                                setcor(3)
                                                                DEVPOS(1+f,8);DEVOUT(SPACE(6))
                                                                DEVPOS(1+f,29);DEVOUT(SPACE(40))
                                                                setcor(1)
                                                                LOOP
                                                        ENDIF
                                                        DEVPOS(1+f,2);DEVOUT('Cod.:')
                                                        DEVPOS(1+f,17);DEVOUT('Grupo.....:')
                                                        setcor(3)
                                                        DEVPOS(1+f,8);DEVOUTPICT(grup->gru_sub,'@@R 999.99')
                                                        DEVPOS(1+f,29);DEVOUT(grup->merc)
                                                        setcor(1)
                                                        SKIP
                                                ELSE
                                                        DEVPOS(1+f,2);DEVOUT('Cod.:')
                                                        DEVPOS(1+f,17);DEVOUT('Grupo.....:')
                                                        setcor(3)
                                                        DEVPOS(1+f,8);DEVOUT(SPACE(6))
                                                        DEVPOS(1+f,29);DEVOUT(SPACE(40))
                                                        setcor(1)
                                                ENDIF
                                        NEXT f
                                ENDIF
                        ENDDO

                CASE LASTKEY() = ASC('E') .OR. LASTKEY() = ASC('e')
                        IF ! ver_nivel(mprg+'EXC','EXCLUSAO DE SUB-GRUPOS','1',nivel_acess,,'AMBIE')
                                LOOP
                        ENDIF

                        SET CURSOR ON
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                mensagem('Digite o Codigo do Grupo e Sub-Grupo a ser Excluido - <ESC> p/Retornar')
                                mgrupo := 0
                                msub_gru := 0
                                mmerc := SPACE(40)
                                botao(lba+2,0,lba+5,cba,,' Exclusao ')
                                setcor(3)
                                DEVPOS(lba+3,29);DEVOUT(SPACE(40))
                                DEVPOS(lba+4,29);DEVOUT(SPACE(40))
                                setcor(1)

                                DEVPOS(lba+3,2);DEVOUT('Cod.:')
                                DEVPOS(lba+3,17);DEVOUT('Grupos....:')
                                DEVPOS(lba+4,2);DEVOUT('Cod.:')
                                DEVPOS(lba+4,17);DEVOUT('Sub-Grupo.:')
                                @ lba+3,8 GET mgrupo PICT '999' VALID ver_gru(@mgrupo,lba+3,29,.F.)
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                IF EMPTY(mgrupo)
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(lba+3,8);DEVOUT(STRZERO(mgrupo,3))
                                setcor(1)
                                @ lba+4,8 GET msub_gru PICT '99'
                                READ
                                IF LASTKEY() = 27 .OR. EMPTY(msub_gru) .OR. EMPTY(mgrupo)
                                        LOOP
                                ENDIF
                                ********************
                                SELE('grup');ORDSETFOCUS(1)
                                GO TOP
                                ********************

                                IF ! grup->(DBSEEK(STRZERO(mgrupo,3)+STRZERO(msub_gru,2)))
                                        atencao('Sub-Grupo nao Cadastrado !!!')
                                        LOOP
                                ENDIF
                                IF ! BLOQARQ()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF
                                mmerc := grup->merc
                                setcor(3)
                                DEVPOS(lba+4,8);DEVOUT(STRZERO(msub_gru,2))
                                DEVPOS(lba+4,29);DEVOUT(grup->merc)
                                setcor(1)
                                IF LASTKEY() = 27
                                        UNLOCK
                                        LOOP
                                ENDIF
                                opcao := op_simnao('N','Confirma EXCLUSAO do SUB-GRUPO:')
                                IF LASTKEY() = 27 .OR. opcao = 'N'
                                        UNLOCK
                                        LOOP
                                ENDIF
                                opcao := op_simnao('N','Se Apagar este SUB-GRUPO voce vai apagar todos os PRODUTOS do SUB-GRUPO:')
                                IF LASTKEY() = 27 .OR. opcao = 'N'
                                        UNLOCK
                                        LOOP
                                ENDIF
                                IF opcao = 'S'
                                        IF ! aut_sen('Autorizacao para EXCLUSAO DE SUB-GRUPO',mprg+'EXC')
                                                UNLOCK
                                                LOOP
                                        ENDIF
                                        DELE
                                        COMMIT
                                        UNLOCK
                                        ********************
                                        SELE('merc');ORDSETFOCUS(2)
                                        GO TOP
                                        ********************
                                        IF ! BLOQARQ()
                                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                                LOOP
                                        ENDIF
                                        DELE FOR merc->gru_sub = STRZERO(mgrupo,3)+STRZERO(msub_gru,2)
                                        COMMIT
                                        UNLOCK
                                        sr_getconnection():exec("DELETE FROM sacgrupo WHERE SR_DELETED = 'T'",,.f.)
                                        sr_getconnection():exec("DELETE FROM sacmerc WHERE SR_DELETED = 'T'",,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                        ********************
                                        SELE('grup');ORDSETFOCUS(1)
                                        GO TOP
                                        ********************
                                        GO TOP
                                        FOR f=1 TO 12
                                                IF ! EOF()
                                                        IF EOF()
                                                                setcor(3)
                                                                DEVPOS(1+f,8);DEVOUT(SPACE(6))
                                                                DEVPOS(1+f,29);DEVOUT(SPACE(40))
                                                                setcor(1)
                                                                LOOP
                                                        ENDIF
                                                        setcor(3)
                                                        DEVPOS(1+f,8);DEVOUTPICT(grup->gru_sub,'@@R 999.99')
                                                        DEVPOS(1+f,29);DEVOUT(grup->merc)
                                                        setcor(1)
                                                        SKIP
                                                ELSE
                                                        setcor(3)
                                                        DEVPOS(1+f,8);DEVOUT(SPACE(6))
                                                        DEVPOS(1+f,29);DEVOUT(SPACE(40))
                                                        setcor(1)
                                                ENDIF
                                        NEXT f
                                ENDIF
                        ENDDO
        ENDCASE
ENDDO
RETURN NIL
*************************** f i m *******************************************







