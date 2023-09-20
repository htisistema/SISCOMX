*************************
* CADASTRO DE FINANCIAMENTOS
*************************
FUNCTION sac1fin
***************
LOCAL MPRG:='SAC1FIN'
LOCAL tela,tela1,lci,cci,lba,cba,li,ci,lb,cb,point,pode,;
      opcao,f,mcod_fin,mdesc_fin,mtaxa_fin,mcobra_fin,mtaxa_adm
MEMVAR nivel_acess,getlist
PRIVATE mgrupo

IF ! ver_nivel(mprg,'CADASTRO DE FINANCIAMENTO','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := 00
cci := 00
lba := 13
cba := 79

li := 14
ci := 00
lb := 17
cb := 79

op_tela(lci,cci,20,cba,' FINANCIAMENTO ')
DEVPOS(lci,cci+2);DEVOUT('Cod.')
DEVPOS(lci,cci+09);DEVOUT('Descricao')
pode=.t.

************
CLOSE ALL
IF ! AbriArq('sacfin','fin');RETURN NIL;ENDIF
SELE('fin');ORDSETFOCUS(1)
GO TOP
************
WHILE .T.
        mensagem('<I>nclusao  <A>lteracao  <E>xclusao  <ESC> Retorna')
        opcao := 'S'
        point=RECNO()
        mcod_fin := SPACE(3)
        botao(li,ci,lb,cb)
        FOR f=1 TO 10
                WHILE ! EOF() .AND. mcod_fin = fin->cod_fin
                        SKIP
                ENDDO
                IF EOF()
                        setcor(3)
                        DEVPOS(lci+f,cci+3);DEVOUT("   ")
                        DEVPOS(lci+f,cci+09);DEVOUT(SPACE(40))
                        setcor(1)
                        LOOP
                ENDIF
                setcor(3)
                DEVPOS(lci+f,cci+3);DEVOUT(fin->cod_fin)
                DEVPOS(lci+f,cci+09);DEVOUT(fin->desc_fin)
                setcor(1)
                mcod_fin := fin->cod_fin
                SKIP
        NEXT f
        IF EOF()
                pode=.f.
        ENDIF
        GO point
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
                CASE LASTKEY()=27
                        RELEASE mgrupo
                        wvw_lclosewindow()
                        RETURN NIL

                CASE LASTKEY() = ASC('I') .OR. LASTKEY() = ASC('i')
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                mcod_fin := SPACE(3)
                                mdesc_fin := SPACE(25)
                                mtaxa_fin := mtaxa_adm := 0
                                mcobra_fin := SPACE(1)
                                botao(li,ci,lb,cb)
                                janela(li,cb,' INLCUSAO FINANCIAMENTO ')
                                DEVPOS(li+1,ci+1);DEVOUT('Codigo:')
                                DEVPOS(li+1,ci+14);DEVOUT('Descricao:')
                                DEVPOS(li+2,ci+1);DEVOUT('Taxa Financ. R$:')
                                DEVPOS(li+2,ci+29);DEVOUT('Taxa ADM R$:')
                                DEVPOS(li+2,ci+52);DEVOUT('Cobra no Pedido [S/N]:')
                                GO BOTT
                                mcod_fin := STRZERO(VAL(fin->cod_fin)+1,3)
                                setcor(3)
                                DEVPOS(li+1,ci+9);DEVOUT(mcod_fin)
                                setcor(1)
                                @ li+1,ci+25 GET mdesc_fin PICT '@!' VALID IF(EMPTY(mdesc_fin),.F.,.T.)
                                @ li+2,ci+19 GET mtaxa_fin PICT '99,999.99'
                                @ li+2,ci+41 GET mtaxa_adm PICT '99,999.99'
                                @ li+2,ci+75 GET mcobra_fin PICT '@!' VALID mcobra_fin $ 'S,N'
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(01,00,24,79,tela1)
                                        GO TOP
                                        EXIT
                                ENDIF
                                opcao := op_simnao('S','Confirma a Inclusao do Financiamento:')
                                IF opcao = 'N'
                                        LOOP
                                ENDIF
                                IF ! ADIREG()
                                        atencao('Nao foi possivel bloquear seu arquivo !!!')
                                        LOOP
                                ENDIF
                                fin->cod_fin := mcod_fin
                                fin->desc_fin := mdesc_fin
                                fin->taxa_fin := mtaxa_fin
                                fin->taxa_adm := mtaxa_adm
                                fin->cobra_fin := mcobra_fin
                                DBUNLOCK()
                                DBCOMMIT()
                                ORDSETFOCUS(1)
                                GO TOP
                                FOR f=1 TO 10
                                        IF EOF()
                                                setcor(3)
                                                DEVPOS(lci+2+f,cci+3);DEVOUT("   ")
                                                DEVPOS(lci+2+f,cci+09);DEVOUT(SPACE(40))
                                                setcor(1)
                                                LOOP
                                        ENDIF
                                        setcor(3)
                                        DEVPOS(lci+2+f,cci+3);DEVOUT(fin->cod_fin)
                                        DEVPOS(lci+2+f,cci+09);DEVOUT(fin->desc_fin)
                                        setcor(1)
                                        SKIP
                                NEXT f
                        ENDDO
                CASE LASTKEY() = ASC('A') .OR. LASTKEY() = ASC('a')
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                mcod_fin := mtaxa_fin := mtaxa_adm := 0
                                mdesc_fin := SPACE(25)
                                mcobra_fin := SPACE(1)
                                botao(li,ci,lb,cb)
                                janela(li,cb,' INLCUSAO FINANCIAMENTO ')
                                DEVPOS(li+1,ci+1);DEVOUT('Codigo:')
                                DEVPOS(li+1,ci+14);DEVOUT('Descricao:')
                                DEVPOS(li+2,ci+1);DEVOUT('Taxa Financ. R$:')
                                DEVPOS(li+2,ci+29);DEVOUT('Taxa ADM R$:')
                                DEVPOS(li+2,ci+52);DEVOUT('Cobra no Pedido [S/N]:')
                                @ li+1,ci+9 GET mcod_fin PICT '999' VALID IF(EMPTY(mcod_fin),.F.,.T.)
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                GO TOP
                                IF ! fin->(DBSEEK(STRZERO(mcod_fin,3)))
                                        atencao('Nao existe este codigo de financiamento em nossos arquivos !!!')
                                        LOOP
                                ENDIF
                                mdesc_fin  := fin->desc_fin
                                mtaxa_fin  := fin->taxa_fin
                                mtaxa_adm  := fin->taxa_adm
                                mcobra_fin := fin->cobra_fin
                                @ li+1,ci+25 GET mdesc_fin PICT '@!' VALID IF(EMPTY(mdesc_fin),.F.,.T.)
                                @ li+2,ci+19 GET mtaxa_fin PICT '99,999.99'
                                @ li+2,ci+41 GET mtaxa_adm PICT '99,999.99'
                                @ li+2,ci+75 GET mcobra_fin PICT '@!' VALID mcobra_fin $ 'S,N'
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma a Alteracao do Financiamento:')
                                IF opcao = 'N'
                                        LOOP
                                ENDIF
                                IF ! BLOQREG()
                                        atencao('Nao foi possivel bloquear seu arquivo !!!')
                                        LOOP
                                ENDIF
                                fin->cod_fin := STRZERO(mcod_fin,3)
                                fin->desc_fin := mdesc_fin
                                fin->taxa_fin := mtaxa_fin
                                fin->taxa_adm := mtaxa_adm
                                fin->cobra_fin := mcobra_fin
                                DBUNLOCK()
                                DBCOMMIT()
                                ORDSETFOCUS(1)
                                GO TOP
                                FOR f=1 TO 10
                                        IF EOF()
                                                setcor(3)
                                                DEVPOS(lci+2+f,cci+3);DEVOUT("   ")
                                                DEVPOS(lci+2+f,cci+09);DEVOUT(SPACE(40))
                                                setcor(1)
                                                LOOP
                                        ENDIF
                                        setcor(3)
                                        DEVPOS(lci+2+f,cci+3);DEVOUT(fin->cod_fin)
                                        DEVPOS(lci+2+f,cci+09);DEVOUT(fin->desc_fin)
                                        setcor(1)
                                        SKIP
                                NEXT f
                        ENDDO
                CASE LASTKEY() = ASC('E') .OR. LASTKEY() = ASC('e')
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                mcod_fin := mtaxa_fin := 0
                                mdesc_fin := SPACE(25)
                                mcobra_fin := SPACE(1)
                                botao(li,ci,lb,cb)
                                janela(li,cb,' INLCUSAO FINANCIAMENTO ')
                                DEVPOS(li+1,ci+1);DEVOUT('Codigo:')
                                DEVPOS(li+1,ci+14);DEVOUT('Descricao:')
                                DEVPOS(li+2,ci+1);DEVOUT('Taxa Financiamento R$:')
                                DEVPOS(li+2,ci+36);DEVOUT('Cobra Financiamento no Pedido [S/N]:')
                                @ li+1,ci+9 GET mcod_fin PICT '999' VALID IF(EMPTY(mcod_fin),.F.,.T.)
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                GO TOP
                                IF ! fin->(DBSEEK(STRZERO(mcod_fin,3)))
                                        atencao('Nao existe este codigo de financiamento em nossos arquivos !!!')
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(li+1,ci+25);DEVOUT(fin->desc_fin)
                                DEVPOS(li+2,ci+25);DEVOUTPICT(fin->taxa_fin,'99,999.99')
                                DEVPOS(li+2,ci+73);DEVOUT(fin->cobra_fin)
                                setcor(1)
                                opcao := op_simnao('N','Confirma a EXCLUSAO do Financiamento:')
                                IF LASTKEY() = 27 .OR. opcao = 'N'
                                        LOOP
                                ENDIF
                                IF ! BLOQARQ()
                                        atencao('Nao foi possivel bloquear seu arquivo !!!')
                                        LOOP
                                ENDIF
                                DELE FOR STRZERO(mcod_fin,3) = fin->cod_fin
                                DBUNLOCK()
                                DBCOMMIT()
                                sr_getconnection():exec("DELETE FROM sacfin WHERE SR_DELETED = 'T'",,.f.)
                                sr_getconnection():exec("COMMIT",,.f.)
                                ORDSETFOCUS(1)
                                GO TOP
                                FOR f=1 TO 10
                                        IF EOF()
                                                setcor(3)
                                                DEVPOS(lci+2+f,cci+3);DEVOUT("   ")
                                                DEVPOS(lci+2+f,cci+09);DEVOUT(SPACE(40))
                                                setcor(1)
                                                LOOP
                                        ENDIF
                                        setcor(3)
                                        DEVPOS(lci+2+f,cci+3);DEVOUT(fin->cod_fin)
                                        DEVPOS(lci+2+f,cci+09);DEVOUT(fin->desc_fin)
                                        setcor(1)
                                        SKIP
                                NEXT f
                        ENDDO
                        ORDSETFOCUS(1)
                        GO TOP
                        FOR f=1 TO 10
                                IF EOF()
                                        setcor(3)
                                        DEVPOS(lci+2+f,cci+3);DEVOUT("   ")
                                        DEVPOS(lci+2+f,cci+09);DEVOUT(SPACE(40))
                                        setcor(1)
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(lci+2+f,cci+3);DEVOUT(fin->cod_fin)
                                DEVPOS(lci+2+f,cci+09);DEVOUT(fin->desc_fin)
                                setcor(1)
                                SKIP
                        NEXT f
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** f i m *******************************************

