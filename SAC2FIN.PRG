*************************
* CADASTRO DE ALIQUOTAS FINANCIAMENTOS
*************************
FUNCTION sac2fin
***************
LOCAL MPRG:='SAC2FIN'
LOCAL tela,tela1,lci,cci,lba,cba,li,ci,lb,cb,point,pode,;
      opcao,f,mcod_fin,mdesc_fin,mcobra_fin,mtaxa_fin,mtipo_fin,maliq_fin,;
      machou
MEMVAR nivel_acess,getlist
PRIVATE mgrupo

IF ! ver_nivel(mprg,'CADASTRO DE ALIQUOTAS FINANCIAMENTO','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := 00
cci := 00
lba := 13
cba := 79

li := 14
ci := 00
lb := 20
cb := 79
op_tela(lci,cci,24,cba,' ALIQUOTAS FINANCIAMENTO ')

************
IF ! AbriArq('sacfin','fin');RETURN NIL;ENDIF
SELE('fin');ORDSETFOCUS(1)
GO TOP
************
WHILE .T.
        setcor(1)
        DEVPOS(lci,cci+2);DEVOUT('Cod.')
        DEVPOS(lci,cci+09);DEVOUT('Descricao')
        botao(li,ci,lb,cb,,' ALIQUOTA DE FINANCIAMENTO ')
        pode=.t.
        mensagem('<ENTER>Inclusao, Alteracao ou Exclusao <ESC>Retorna')
        opcao := 'S'
        point=RECNO()
        mcod_fin := SPACE(3)
        FOR f=1 TO 10
                WHILE ! EOF() .AND. mcod_fin = fin->cod_fin
                        SKIP
                ENDDO
                IF EOF()
                        setcor(3)
                        DEVPOS(lci+1+f,cci+3);DEVOUT("   ")
                        setcor(1)

                        setcor(3)
                        DEVPOS(lci+1+f,cci+09);DEVOUT(SPACE(40))
                        setcor(1)
                        LOOP
                ENDIF
                setcor(3)
                DEVPOS(lci+1+f,cci+3);DEVOUT(fin->cod_fin)
                DEVPOS(lci+1+f,cci+09);DEVOUT(fin->desc_fin)
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

                CASE LASTKEY() = 13
                        tela1 := SAVESCREEN(01,00,24,79)
                        mcod_fin := maliq_fin := 0
                        mtipo_fin := SPACE(3)
                        machou := ' '
                        botao(li,ci,lb,cb,,' ALIQUOTA DE FINANCIAMENTO ')
                        DEVPOS(li+1,ci+1);DEVOUT('Codigo:')
                        DEVPOS(li+1,ci+14);DEVOUT('Descricao:')
                        DEVPOS(li+2,ci+1);DEVOUT('Taxa Financiamento R$:')
                        DEVPOS(li+2,ci+36);DEVOUT('Cobra Financiamento no Pedido [S/N]:')
                        @ li+3,ci+1 TO li+3,cb-1
                        DEVPOS(li+4,ci+1);DEVOUT('Tipo de Financiamento:')
                        DEVPOS(li+4,ci+30);DEVOUT('Aliquota:')
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
                        mdesc_fin := fin->desc_fin
                        mtaxa_fin := fin->taxa_fin
                        mcobra_fin := fin->cobra_fin
                        setcor(3)
                        DEVPOS(li+1,ci+25);DEVOUT(fin->desc_fin)
                        DEVPOS(li+2,ci+25);DEVOUTPICT(fin->taxa_fin,'99,999.99')
                        DEVPOS(li+2,ci+73);DEVOUT(fin->cobra_fin)
                        setcor(1)
                        WHILE .T.
                               GO TOP
                               SEEK STRZERO(mcod_fin,3)
                               setcor(3)
                               botao(lci,cci,lba,cba)
                               @ lci+2,cci+2 TO lci+2,cba-1
                               setcor(1)
                               janela(lci,cba,' ALIQUOTAS FINANCIAMENTO ')
                               DEVPOS(lci+1,cci+2);DEVOUT('Cod.')
                               DEVPOS(lci+1,cci+09);DEVOUT('Descricao')
                               DEVPOS(lci+1,cci+41);DEVOUT('Tipo')
                               DEVPOS(lci+1,cci+51);DEVOUT('Aliquota')
                               point=0
                               pode := .T.
                               WHILE .T.
                                        mensagem('<> Consulta  <ENTER>inclusao, alteracao ou exclusao <ESC> Retorna')
                                        opcao := 'S'
                                        point=RECNO()
                                        f:=0
                                        FOR f=1 TO 10
                                                WHILE ! EOF() .AND. STRZERO(mcod_fin,3) = fin->cod_fin .AND. fin->tipo_fin = SPACE(3)
                                                        SKIP
                                                ENDDO
                                                IF EOF() .OR. STRZERO(mcod_fin,3) <> fin->cod_fin
                                                        LOOP
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lci+2+f,cci+3);DEVOUT(fin->cod_fin)
                                                DEVPOS(lci+2+f,cci+09);DEVOUT(fin->desc_fin)
                                                DEVPOS(lci+2+f,cci+41);DEVOUTPICT(fin->tipo_fin,'@R 9+99')
                                                DEVPOS(lci+2+f,cci+51);DEVOUT(fin->aliq_fin)
                                                setcor(1)
                                                SKIP
                                        NEXT f
                                        IF EOF() .OR. STRZERO(mcod_fin,3) <> fin->cod_fin
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
                                                CASE LASTKEY()=27 .OR. LASTKEY() = 13
                                                        EXIT
                                        ENDCASE
                                ENDDO
                                IF LASTKEY() = 27
                                        EXIT
                                        RESTSCREEN(01,00,24,79,tela1)
                                        GO TOP
                                ENDIF
                                maliq_fin := 0
                                mtipo_fin := SPACE(3)
                                machou := ' '
                                @ li+4,ci+24 GET mtipo_fin PICT '@R 9+99' VALID IF(LEN(ALLTRIM(mtipo_fin)) < 3,.F.,.T.)
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                GO TOP
                                IF fin->(DBSEEK(STRZERO(mcod_fin,3)+mtipo_fin))
                                        mensagem('Digite <A>lterar  <E>xcluir  <ESC> p/retornar:')
                                        INKEY(0)
                                        IF LASTKEY() = 27
                                                LOOP
                                        ENDIF
                                        IF LASTKEY() = ASC('E') .OR. LASTKEY() = ASC('e')
                                                opcao := op_simnao('N','Confirma a EXCLUSAO da Aliquota:')
                                                IF LASTKEY() = 27 .OR. opcao = 'N'
                                                        LOOP
                                                ENDIF
                                                IF ! BLOQREG()
                                                        atencao('Nao foi bloquear o registro !!!')
                                                        LOOP
                                                ENDIF
                                                DELE
                                                DBUNLOCK()
                                                DBCOMMIT()
                                                sr_getconnection():exec("DELETE FROM sacfin WHERE SR_DELETED = 'T'",,.f.)
                                                sr_getconnection():exec("COMMIT",,.f.)
                                                LOOP
                                        ENDIF
                                        IF ! BLOQREG()
                                                atencao('Nao foi bloquear o registro !!!')
                                                LOOP
                                        ENDIF
                                        maliq_fin := fin->aliq_fin
                                        mtipo_fin := fin->tipo_fin
                                        machou := '*'
                                        @ li+4,ci+24 GET mtipo_fin PICT '@R 9+99' VALID IF(LEN(ALLTRIM(mtipo_fin)) < 3,.F.,.T.)
                                        @ li+4,ci+40 GET maliq_fin PICT '99.999999'
                                        READ
                                        IF LASTKEY() = 27
                                                LOOP
                                        ENDIF
                                ENDIF
                                IF machou = '*'
                                        opcao := op_simnao('S','Confirma a Alteracao a Aliquota do Financiamento:')
                                        IF opcao = 'N'
                                                LOOP
                                        ENDIF
                                        fin->aliq_fin := maliq_fin
                                        fin->tipo_fin := mtipo_fin
                                        DBUNLOCK()
                                        DBCOMMIT()
                                        LOOP
                                ELSE
                                        @ li+4,ci+40 GET maliq_fin PICT '99.999999'
                                        READ
                                        IF LASTKEY() = 27
                                                LOOP
                                        ENDIF
                                ENDIF
                                opcao := op_simnao('S','Confirma a Inclusao da Aliquota do Financiamento:')
                                IF opcao = 'N'
                                        LOOP
                                ENDIF
                                IF ! ADIREG()
                                        atencao('Nao foi possivel bloquear seu arquivo !!!')
                                        LOOP
                                ENDIF
                                fin->cod_fin := STRZERO(mcod_fin,3)
                                fin->desc_fin := mdesc_fin
                                fin->taxa_fin := mtaxa_fin
                                fin->cobra_fin := mcobra_fin
                                fin->aliq_fin := maliq_fin
                                fin->tipo_fin := mtipo_fin
                                DBUNLOCK()
                                DBCOMMIT()
                                ORDSETFOCUS(1)
                                GO point
                                f:=0
                                FOR f=1 TO 10
                                        WHILE ! EOF() .AND. STRZERO(mcod_fin,3) = fin->cod_fin .AND. fin->tipo_fin = SPACE(3)
                                                SKIP
                                        ENDDO
                                        IF EOF() .OR. STRZERO(mcod_fin,3) <> fin->cod_fin
                                                LOOP
                                        ENDIF
                                        setcor(3)
                                        DEVPOS(lci+2+f,cci+3);DEVOUT(fin->cod_fin)
                                        DEVPOS(lci+2+f,cci+09);DEVOUT(fin->desc_fin)
                                        DEVPOS(lci+2+f,cci+41);DEVOUTPICT(fin->tipo_fin,'@R 9+99')
                                        DEVPOS(lci+2+f,cci+51);DEVOUT(fin->aliq_fin)
                                        setcor(1)
                                        SKIP
                                NEXT f
                        ENDDO
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** f i m *******************************************

