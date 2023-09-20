MEMVAR getlist,cod_operado,nivel_acess,mdata_sis
********************************
* CADASTRO DE COTACAO DO DOLAR
********************************
FUNCTION sacdolar
******************
LOCAL MPRG:='SACDOLAR',mtitulo:='CADASTRO DA COTACAO DO DOLAR',;
      tela,lci,cci,lba,cba,point,pode,msele,morde,men,;
      opcao,mdata_dolar,f,tela1,;
      mvlr_dolar,mvlr_dola1,mvlr_dola2,mvlr_dola3,mvlr_dola4,;
      mhora_dolr,mhora_dol1,mhora_dol2,mhora_dol3,mhora_dol4

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := cci := 00
lba := 13
cba := 79
op_tela(1ci,cci,lba+8,cba,' COTACAO DO DOLAR')

tela := SAVESCREEN(01,00,24,79)
//botao(lci,cci,lba,cba,,' DOLAR ')
DEVPOS(lci,cci+1);DEVOUT('  Data  ')
DEVPOS(lci,COL()+1);DEVOUT(' Hora')
DEVPOS(lci,COL()+1);DEVOUT('   Valor')
DEVPOS(lci,COL()+2);DEVOUT(' Hora')
DEVPOS(lci,COL()+1);DEVOUT('   Valor')
DEVPOS(lci,COL()+2);DEVOUT(' Hora')
DEVPOS(lci,COL()+1);DEVOUT('   Valor')
DEVPOS(lci,COL()+2);DEVOUT(' Hora')
DEVPOS(lci,COL()+1);DEVOUT('   Valor')
@ lci+1,cci TO lci+1,cba
pode=.t.

************
//
IF ! AbriArq('sacdolar','dolar');RETURN NIL;ENDIF
SELE('dolar');ORDSETFOCUS(2)
GO TOP
************
WHILE .T.
        mensagem('<I>nclusao  <A>lteracao  <E>xclusao  <ESC> Retorna')
        botao(lba+1,cci,lba+7,cba,,' Cotacao do dolar ')
        opcao := 'S'
        ORDSETFOCUS(2)
        GO TOP
        point=RECNO()
        FOR f=1 TO 10
                IF EOF()
                        setcor(3)
                        DEVPOS(lci+1+f,cci+1);DEVOUT(SPACE((cba-cci)-1))
                        setcor(1)
                        LOOP
                ENDIF
                setcor(3)
                DEVPOS(lci+1+f,cci+1);DEVOUT(dolar->data_dolar)
                DEVPOS(lci+1+f,COL()+1);DEVOUT(dolar->hora_dolar)
                DEVPOS(lci+1+f,COL()+1);DEVOUT(TRANSFORM(dolar->vlr_dolar,'999.9999'))
                DEVPOS(lci+1+f,COL()+2);DEVOUT(dolar->hora_dola1)
                DEVPOS(lci+1+f,COL()+1);DEVOUT(TRANSFORM(dolar->vlr_dola1,'999.9999'))
                DEVPOS(lci+1+f,COL()+2);DEVOUT(dolar->hora_dola2)
                DEVPOS(lci+1+f,COL()+1);DEVOUT(TRANSFORM(dolar->vlr_dola2,'999.9999'))
                DEVPOS(lci+1+f,COL()+2);DEVOUT(dolar->hora_dola3)
                DEVPOS(lci+1+f,COL()+1);DEVOUT(TRANSFORM(dolar->vlr_dola3,'999.9999'))
                setcor(1)
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
                        RESTSCREEN(01,00,24,79,tela)
                        CLOSE ALL
                        RELEASE mgrupo
                        wvw_lclosewindow()
                        RETURN NIL

                CASE LASTKEY() = ASC('I') .OR. LASTKEY() = ASC('i')
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                mensagem('Preencha os campos abaixo - <ESC> p/Retornar')
                                mdata_dolar := mdata_sis
                                mhora_dolr := TIME()
                                mhora_dol1 := mhora_dol2 := ;
                                mhora_dol3 := mhora_dol4 := SPACE(5)
                                mvlr_dolar := mvlr_dola1 := mvlr_dola2 := ;
                                mvlr_dola3 := mvlr_dola4 := 0
                                botao(lba+1,cci,lba+7,cba,,' Inclusao Cotacao do dolar ')
                                DEVPOS(lba+2,cci+2);DEVOUT('Data:')
                                DEVPOS(lba+2,cci+20);DEVOUT('Hora:')
                                DEVPOS(lba+3,cci+20);DEVOUT('Hora:')
                                DEVPOS(lba+4,cci+20);DEVOUT('Hora:')
                                DEVPOS(lba+5,cci+20);DEVOUT('Hora:')
                                DEVPOS(lba+6,cci+20);DEVOUT('Hora:')
                                DEVPOS(lba+2,cci+36);DEVOUT('Valor(1):')
                                DEVPOS(lba+3,cci+36);DEVOUT('Valor(2):')
                                DEVPOS(lba+4,cci+36);DEVOUT('Valor(3):')
                                DEVPOS(lba+5,cci+36);DEVOUT('Valor(4):')
                                DEVPOS(lba+6,cci+36);DEVOUT('Valor(5):')

                                @ lba+2,cci+8 GET mdata_dolar
                                READ
                                IF LASTKEY() = 27 .OR. EMPTY(mdata_dolar)
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                        LOOP
                                ENDIF
                                *************
                                ORDSETFOCUS(1)
                                GO TOP
                                *************
                                IF dolar->(DBSEEK(mdata_dolar))
                                        atencao('Esta Data ja foi informa a Cotacao do Dolar !!!')
                                        LOOP
                                ENDIF
                                @ lba+2,cci+26 GET mhora_dolr PICT '99:99'
                                @ lba+2,cci+46 GET mvlr_dolar PICT '9,999.9999'
                                @ lba+3,cci+26 GET mhora_dol1 PICT '99:99'
                                @ lba+3,cci+46 GET mvlr_dola1 PICT '9,999.9999'
                                @ lba+4,cci+26 GET mhora_dol2 PICT '99:99'
                                @ lba+4,cci+46 GET mvlr_dola2 PICT '9,999.9999'
                                @ lba+5,cci+26 GET mhora_dol3 PICT '99:99'
                                @ lba+5,cci+46 GET mvlr_dola3 PICT '9,999.9999'
                                @ lba+6,cci+26 GET mhora_dol4 PICT '99:99'
                                @ lba+6,cci+46 GET mvlr_dola4 PICT '9,999.9999'
                                READ
                                IF LASTKEY() = 27 .OR. EMPTY(mdata_dolar)
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma Inclusao:')
                                IF opcao = 'S'
                                        IF ADIREG()
                                                dolar->data_dolar := mdata_dolar
                                                dolar->hora_dolar := mhora_dolr
                                                dolar->hora_dola1 := mhora_dol1
                                                dolar->hora_dola2 := mhora_dol2
                                                dolar->hora_dola3 := mhora_dol3
                                                dolar->hora_dola4 := mhora_dol4
                                                dolar->vlr_dolar := mvlr_dolar
                                                dolar->vlr_dola1 := mvlr_dola1
                                                dolar->vlr_dola2 := mvlr_dola2
                                                dolar->vlr_dola3 := mvlr_dola3
                                                dolar->vlr_dola4 := mvlr_dola4
                                                dolar->ope_dolar := cod_operado
                                                COMMIT
                                                UNLOCK
                                        ELSE
                                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                                ORDSETFOCUS(3)
                                                LOOP
                                        ENDIF
                                        ORDSETFOCUS(2)
                                        GO TOP
                                        FOR f=1 TO 10
                                                IF EOF()
                                                        setcor(3)
                                                        DEVPOS(lci+1+f,cci+1);DEVOUT(SPACE((cba-cci)-1))
                                                        setcor(1)
                                                        LOOP
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lci+2+f,cci+1);DEVOUT(dolar->data_dolar)
                                                DEVPOS(lci+2+f,COL()+1);DEVOUT(dolar->hora_dolar)
                                                DEVPOS(lci+2+f,COL()+1);DEVOUT(TRANSFORM(dolar->vlr_dolar,'999.9999'))
                                                DEVPOS(lci+2+f,COL()+2);DEVOUT(dolar->hora_dola1)
                                                DEVPOS(lci+2+f,COL()+1);DEVOUT(TRANSFORM(dolar->vlr_dola1,'999.9999'))
                                                DEVPOS(lci+2+f,COL()+2);DEVOUT(dolar->hora_dola2)
                                                DEVPOS(lci+2+f,COL()+1);DEVOUT(TRANSFORM(dolar->vlr_dola2,'999.9999'))
                                                DEVPOS(lci+2+f,COL()+2);DEVOUT(dolar->hora_dola3)
                                                DEVPOS(lci+2+f,COL()+1);DEVOUT(TRANSFORM(dolar->vlr_dola3,'999.9999'))
                                                setcor(1)
                                                SKIP
                                        NEXT f
                                ENDIF
                        ENDDO
                CASE LASTKEY() = ASC('A') .OR. LASTKEY() = ASC('a')
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                mensagem('Digite a data que deseja Alterar - <ESC> p/Retornar')
                                mdata_dolar := mdata_sis
                                mhora_dolr := mhora_dol1 := mhora_dol2 := ;
                                mhora_dol3 := mhora_dol4 := TIME()
                                mvlr_dolar := mvlr_dola1 := mvlr_dola2 := ;
                                mvlr_dola3 := mvlr_dola4 := 0
                                botao(lba+1,cci,lba+7,cba,,' Alteracao Cotacao do dolar ')
                                DEVPOS(lba+2,cci+2);DEVOUT('Data:')
                                DEVPOS(lba+2,cci+20);DEVOUT('Hora:')
                                DEVPOS(lba+3,cci+20);DEVOUT('Hora:')
                                DEVPOS(lba+4,cci+20);DEVOUT('Hora:')
                                DEVPOS(lba+5,cci+20);DEVOUT('Hora:')
                                DEVPOS(lba+6,cci+20);DEVOUT('Hora:')
                                DEVPOS(lba+2,cci+36);DEVOUT('Valor(1):')
                                DEVPOS(lba+3,cci+36);DEVOUT('Valor(2):')
                                DEVPOS(lba+4,cci+36);DEVOUT('Valor(3):')
                                DEVPOS(lba+5,cci+36);DEVOUT('Valor(4):')
                                DEVPOS(lba+6,cci+36);DEVOUT('Valor(5):')

                                @ lba+2,cci+8 GET mdata_dolar
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                        LOOP
                                ENDIF

                                *************
                                ORDSETFOCUS(1)
                                GO TOP
                                *************
                                IF ! dolar->(DBSEEK(mdata_dolar))
                                        atencao('Data nao existe em nosso cadastrado !!!')
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(lba+2,cci+8);DEVOUT(dolar->data_dolar)
                                setcor(1)
                                mvlr_dolar := dolar->vlr_dolar
                                mvlr_dola1 := dolar->vlr_dola1
                                mvlr_dola2 := dolar->vlr_dola2
                                mvlr_dola3 := dolar->vlr_dola3
                                mvlr_dola4 := dolar->vlr_dola4
                                mhora_dolr := dolar->hora_dolar
                                mhora_dol1 := dolar->hora_dola1
                                mhora_dol2 := dolar->hora_dola2
                                mhora_dol3 := dolar->hora_dola3
                                mhora_dol4 := dolar->hora_dola4
                                @ lba+2,cci+26 GET mhora_dolr PICT '99:99'
                                @ lba+2,cci+46 GET mvlr_dolar PICT '9,999.9999'
                                @ lba+3,cci+26 GET mhora_dol1 PICT '99:99'
                                @ lba+3,cci+46 GET mvlr_dola1 PICT '9,999.9999'
                                @ lba+4,cci+26 GET mhora_dol2 PICT '99:99'
                                @ lba+4,cci+46 GET mvlr_dola2 PICT '9,999.9999'
                                @ lba+5,cci+26 GET mhora_dol3 PICT '99:99'
                                @ lba+5,cci+46 GET mvlr_dola3 PICT '9,999.9999'
                                @ lba+6,cci+26 GET mhora_dol4 PICT '99:99'
                                @ lba+6,cci+46 GET mvlr_dola4 PICT '9,999.9999'
                                READ
                                IF LASTKEY() = 27 .OR. EMPTY(mdata_dolar)
                                        EXIT
                                ENDIF
                                IF ! BLOQREG()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF

                                opcao := op_simnao('S','Confirma Alteracao:')
                                IF opcao = 'S'
                                        dolar->data_dolar := mdata_dolar
                                        dolar->hora_dolar := mhora_dolr
                                        dolar->hora_dola1 := mhora_dol1
                                        dolar->hora_dola2 := mhora_dol2
                                        dolar->hora_dola3 := mhora_dol3
                                        dolar->hora_dola4 := mhora_dol4
                                        dolar->vlr_dolar := mvlr_dolar
                                        dolar->vlr_dola1 := mvlr_dola1
                                        dolar->vlr_dola2 := mvlr_dola2
                                        dolar->vlr_dola3 := mvlr_dola3
                                        dolar->vlr_dola4 := mvlr_dola4
                                        dolar->ope_dolar := cod_operado
                                        COMMIT
                                        UNLOCK
                                        ORDSETFOCUS(2)
                                        GO TOP
                                        FOR f=1 TO 10
                                                IF EOF()
                                                        setcor(3)
                                                        DEVPOS(lci+1+f,cci+1);DEVOUT(SPACE((cba-cci)-1))
                                                        setcor(1)
                                                        LOOP
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lci+2+f,cci+1);DEVOUT(dolar->data_dolar)
                                                DEVPOS(lci+2+f,COL()+1);DEVOUT(dolar->hora_dolar)
                                                DEVPOS(lci+2+f,COL()+1);DEVOUT(TRANSFORM(dolar->vlr_dolar,'999.9999'))
                                                DEVPOS(lci+2+f,COL()+2);DEVOUT(dolar->hora_dola1)
                                                DEVPOS(lci+2+f,COL()+1);DEVOUT(TRANSFORM(dolar->vlr_dola1,'999.9999'))
                                                DEVPOS(lci+2+f,COL()+2);DEVOUT(dolar->hora_dola2)
                                                DEVPOS(lci+2+f,COL()+1);DEVOUT(TRANSFORM(dolar->vlr_dola2,'999.9999'))
                                                DEVPOS(lci+2+f,COL()+2);DEVOUT(dolar->hora_dola3)
                                                DEVPOS(lci+2+f,COL()+1);DEVOUT(TRANSFORM(dolar->vlr_dola3,'999.9999'))
                                                setcor(1)
                                                SKIP
                                        NEXT f
                                ENDIF
                        ENDDO

                CASE LASTKEY() = ASC('E') .OR. LASTKEY() = ASC('e')
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                mensagem('Digite a data que deseja Excluir - <ESC> p/Retornar')
                                mdata_dolar := mdata_sis
                                botao(lba+2,cci,lba+4,cba,,' Exclusao Cotacao do dolar ')
                                DEVPOS(lba+3,cci+2);DEVOUT('Data:')
                                DEVPOS(lba+3,cci+20);DEVOUT('Hora:')
                                DEVPOS(lba+3,cci+36);DEVOUT('Valor:')

                                @ lba+3,cci+8 GET mdata_dolar
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                        LOOP
                                ENDIF
                                *************
                                ORDSETFOCUS(1)
                                GO TOP
                                *************
                                IF ! dolar->(DBSEEK(mdata_dolar))
                                        atencao('Data nao existe em nosso cadastrado !!!')
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(lba+3,cci+8);DEVOUT(dolar->data_dolar)
                                DEVPOS(lba+3,cci+26);DEVOUT(dolar->hora_dolar)
                                DEVPOS(lci+3,cci+43);DEVOUT(TRANSFORM(dolar->vlr_dolar,'9,999.9999'))
                                setcor(1)
                                opcao := op_simnao('S','Confirma Exclusao:')
                                IF opcao = 'S'
                                        IF ! BLOQREG()
                                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                                LOOP
                                        ENDIF
                                        DELE
                                        COMMIT
                                        UNLOCK
                                        sr_getconnection():exec("DELETE FROM sacdolar WHERE SR_DELETED = 'T'",,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                        ORDSETFOCUS(2)
                                        GO TOP
                                        FOR f=1 TO 10
                                                IF EOF()
                                                        setcor(3)
                                                        DEVPOS(lci+1+f,cci+1);DEVOUT(SPACE((cba-cci)-1))
                                                        setcor(1)
                                                        LOOP
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lci+2+f,cci+1);DEVOUT(dolar->data_dolar)
                                                DEVPOS(lci+2+f,COL()+1);DEVOUT(dolar->hora_dolar)
                                                DEVPOS(lci+2+f,COL()+1);DEVOUT(TRANSFORM(dolar->vlr_dolar,'999.9999'))
                                                DEVPOS(lci+2+f,COL()+2);DEVOUT(dolar->hora_dola1)
                                                DEVPOS(lci+2+f,COL()+1);DEVOUT(TRANSFORM(dolar->vlr_dola1,'999.9999'))
                                                DEVPOS(lci+2+f,COL()+2);DEVOUT(dolar->hora_dola2)
                                                DEVPOS(lci+2+f,COL()+1);DEVOUT(TRANSFORM(dolar->vlr_dola2,'999.9999'))
                                                DEVPOS(lci+2+f,COL()+2);DEVOUT(dolar->hora_dola3)
                                                DEVPOS(lci+2+f,COL()+1);DEVOUT(TRANSFORM(dolar->vlr_dola3,'999.9999'))
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

