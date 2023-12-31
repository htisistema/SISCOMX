*********************************************
* INCLUSAO DE COTACAO DE FORNECEDOR/PRODUTOS
*********************************************
FUNCTION saccota2
******************
LOCAL mprg:='SACCOTA2',mtitulo:='INCLUSAO DE COTACAO DE FORNECEDOR/PRODUTOS',;
      lci:=0,cci:=0,lba:=10,cba:=78,tela,mopcao,mdata,mcod_forn:=0,;
      mcod_merc:=0,mvalor1:=0,mcond1:=SPACE(30),mvalor2:=0,mcond2:=SPACE(30),;
      mvalor3:=0,mcond3:=SPACE(30),mvalor4:=0,mcond4:=SPACE(30),;
      mvalor5:=0,mcond5:=SPACE(30),mobs:=SPACE(50),mobs1:=SPACE(50),mcod_bc:=SPACE(14),;
      mreg := 0,m_cota:={},m_pos:={},li:=13,ci:=02,la:=21,ca:=78,point:=0,;
      mli:=11,mci:=02,mla:=22,mca:=78,mtela_con

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
*----------------------------------------------
//
IF ! AbriArq('sacdolar','dolar');RETURN NIL;ENDIF
IF ! AbriArq('merc_det','deta');RETURN NIL;ENDIF
IF ! AbriArq('saccotac','cotac');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
*------------------------------------------------------------------
set_key('merc',,,,'*')
op_tela(lci,cci,lba+2,cba,mtitulo)

WHILE .T.
        mcod_forn := 0
        ASIZE(m_cota,0)
        ASIZE(m_pos,0)
        exibi_prg(mprg)
        DEVPOS(lci+1,cci+1);DEVOUT('Codigo Fornecedor:')
        DEVPOS(lci+2,cci+1);DEVOUT('Codigo Produto...:')
        DEVPOS(lci+3,cci+1);DEVOUT('Valor R$ (1).....:             Condicao:')
        DEVPOS(lci+4,cci+1);DEVOUT('Valor R$ (2).....:             Condicao:')
        DEVPOS(lci+5,cci+1);DEVOUT('Valor R$ (3).....:             Condicao:')
        DEVPOS(lci+6,cci+1);DEVOUT('Valor R$ (4).....:             Condicao:')
        DEVPOS(lci+7,cci+1);DEVOUT('Valor R$ (5).....:             Condicao:')
        DEVPOS(lci+8,cci+1);DEVOUT('OBS.:')
        @ lci+1,cci+20 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn),.F.,v_fornece(mcod_forn,lci+1,cci+27))
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        WHILE .T.
                mcod_bc := SPACE(14)
                mvalor1 := mvalor2 := mvalor3 := mvalor4 := mvalor5 := mreg := 0
                mcond1:=mcond2:=mcond3:=mcond4:=mcond5:=SPACE(30)
                mobs := mobs1 := SPACE(50)
                limpa(lci+2,cci+1,lci+8,cba-1)
                DEVPOS(lci+2,cci+1);DEVOUT('Codigo Produto...:')
                DEVPOS(lci+3,cci+1);DEVOUT('Valor R$ (1).....:             Condicao:')
                DEVPOS(lci+4,cci+1);DEVOUT('Valor R$ (2).....:             Condicao:')
                DEVPOS(lci+5,cci+1);DEVOUT('Valor R$ (3).....:             Condicao:')
                DEVPOS(lci+6,cci+1);DEVOUT('Valor R$ (4).....:             Condicao:')
                DEVPOS(lci+7,cci+1);DEVOUT('Valor R$ (5).....:             Condicao:')
                DEVPOS(lci+8,cci+1);DEVOUT('OBS.:')
                @ lci+2,cci+20 GET mcod_bc PICT '@!'
                READ
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                IF ! EMPTY(mcod_bc)
                        IF LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0
                                *************
                                SELE('merc');ORDSETFOCUS(6)
                                GO TOP
                                *************
                                IF ! merc->(DBSEEK(mcod_bc))
                                        *************
                                        ORDSETFOCUS(8)
                                        GO TOP
                                        *************
                                        IF ! merc->(DBSEEK(SUBSTR(mcod_bc,1,10)))
                                                atencao('Codigo de BARRA e REFERENCIA AUXILIAR nao cadastrado')
                                                LOOP
                                        ENDIF
                                        mreg := cons_ref(merc->ref)
                                        IF ! EMPTY(mreg)
                                                GO mreg
                                        ELSE
                                                LOOP
                                        ENDIF
                                ENDIF
                                mcod_merc := VAL(merc->cod_merc)
                        ELSE
                                mcod_merc := VAL(mcod_bc)
                                *************
                                SELE('merc');ORDSETFOCUS(1)
                                GO TOP
                                *************

                                IF ! merc->(DBSEEK(mcod_merc))
                                        atencao('Codigo da mercadoria nao cadastrado')
                                        LOOP
                                ENDIF
                        ENDIF
                ELSE
                        IF(m_set[1,93] <> 'A',f4_merc(),f4_merc1())
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                setcor(3)
                DEVPOS(lci+2,cci+20);DEVOUT(merc->cod_merc)
                DEVPOS(lci+2,cci+27);DEVOUT(merc->merc)
                setcor(1)
                *************
                SELE('cotac');ORDSETFOCUS(2)
                GO TOP
                *************
                botao(li,ci,la,ca)
                setcor(3)
                DEVPOS(li+1,ci+01);DEVOUT('  Data  ')
                DEVPOS(li+1,COL()+1);DEVOUT(' Valor (1)')
                DEVPOS(li+1,COL()+1);DEVOUT(' Valor (2)')
                DEVPOS(li+1,COL()+1);DEVOUT(' Valor (3)')
                DEVPOS(li+1,COL()+1);DEVOUT(' Valor (4)')
                DEVPOS(li+1,COL()+1);DEVOUT(' Valor (5)')
                @ li+2,ci+1 TO li+2,ca-1
                setcor(1)
                IF DBSEEK(STRZERO(mcod_merc,5)+STRZERO(mcod_forn,4))
                        point := 0
                        ASIZE(m_cota,0)
                        ASIZE(m_pos,0)
                        WHILE ! EOF() .AND. mcod_merc = cotac->codigo .AND. STRZERO(mcod_forn,4) = cotac->cod_forn
                                AADD(m_cota,DTOC(cotac->data)+' '+TRANSFORM(cotac->valor1,'999,999.99')+' '+TRANSFORM(cotac->valor2,'999,999.99')+' '+TRANSFORM(cotac->valor3,'999,999.99')+' '+TRANSFORM(cotac->valor4,'999,999.99')+' '+TRANSFORM(cotac->valor5,'999,999.99'))
                                AADD(m_pos,RECNO())
                                SKIP
                        ENDDO
                        WHILE .T.
                                botao(li,ci,la,ca)
                                setcor(3)
                                DEVPOS(li+1,ci+01);DEVOUT('  Data  ')
                                DEVPOS(li+1,COL()+1);DEVOUT('Forn')
                                DEVPOS(li+1,COL()+1);DEVOUT(' Valor (1)')
                                DEVPOS(li+1,COL()+1);DEVOUT(' Valor (2)')
                                DEVPOS(li+1,COL()+1);DEVOUT(' Valor (3)')
                                DEVPOS(li+1,COL()+1);DEVOUT(' Valor (4)')
                                DEVPOS(li+1,COL()+1);DEVOUT(' Valor (5)')
                                @ li+2,ci+1 TO li+2,ca-1
                                setcor(1)
                                mensagem('<> Consulta  - <ESC> Retorna  -  <ENTER> p/Confirmar')

                                setcor(10);point := ACHOICE(li+3,ci+1,la-1,ca-1,m_cota,,,point);setcor(1)

                                DO CASE
                                        CASE LASTKEY() = 13
                                                mtela_con := SAVESCREEN(00,00,24,79)
                                                GO m_pos[point]
                                                botao(mli,mci,mla,mca,,' CONSULTA DA COTACAO DE PRODUTOS ')
                                                DEVPOS(mli+1,mci+1);DEVOUT('Data da Inclusao.:')
                                                DEVPOS(mli+2,mci+1);DEVOUT('Codigo Produto...:')
                                                DEVPOS(mli+3,mci+1);DEVOUT('Codigo Fornecedor:')
                                                DEVPOS(mli+4,mci+1);DEVOUT('Valor R$ (1).....:             Condicao:')
                                                DEVPOS(mli+5,mci+1);DEVOUT('Valor R$ (2).....:             Condicao:')
                                                DEVPOS(mli+6,mci+1);DEVOUT('Valor R$ (3).....:             Condicao:')
                                                DEVPOS(mli+7,mci+1);DEVOUT('Valor R$ (4).....:             Condicao:')
                                                DEVPOS(mli+8,mci+1);DEVOUT('Valor R$ (5).....:             Condicao:')
                                                DEVPOS(mli+9,mci+1);DEVOUT('OBS.:')
                                                setcor(3)
                                                DEVPOS(mli+1,mci+20);DEVOUT(cotac->data)
                                                DEVPOS(mli+2,mci+20);DEVOUT(cotac->codigo+'-'+cotac->produto)
                                                DEVPOS(mli+3,mci+20);DEVOUT(cotac->cod_forn+'-'+cotac->fornece)
                                                DEVPOS(mli+4,mci+20);DEVOUT(TRANSFORM(cotac->valor1,'999,999.99'))
                                                DEVPOS(mli+4,mci+42);DEVOUT(cotac->cond1)
                                                DEVPOS(mli+5,mci+20);DEVOUT(TRANSFORM(cotac->valor2,'999,999.99'))
                                                DEVPOS(mli+5,mci+42);DEVOUT(cotac->cond2)
                                                DEVPOS(mli+6,mci+20);DEVOUT(TRANSFORM(cotac->valor3,'999,999.99'))
                                                DEVPOS(mli+6,mci+42);DEVOUT(cotac->cond3)
                                                DEVPOS(mli+7,mci+20);DEVOUT(TRANSFORM(cotac->valor4,'999,999.99'))
                                                DEVPOS(mli+7,mci+42);DEVOUT(cotac->cond4)
                                                DEVPOS(mli+8,mci+20);DEVOUT(TRANSFORM(cotac->valor5,'999,999.99'))
                                                DEVPOS(mli+8,mci+42);DEVOUT(cotac->cond5)
                                                DEVPOS(mli+9,mci+7);DEVOUT(cotac->obs)
                                                DEVPOS(mli+10,mci+7);DEVOUT(cotac->obs1)
                                                setcor(1)
                                                mensagem('Pressione: <A>p/Alterar - <E>p/Excluir ou <ENTER>p/Retornar')
                                                INKEY(0)
                                                IF LASTKEY() = 65 .OR. LASTKEY() = 97
                                                        mvalor1 := cotac->valor1
                                                        mcond1  := cotac->cond1
                                                        mvalor2 := cotac->valor2
                                                        mcond2  := cotac->cond2
                                                        mvalor3 := cotac->valor3
                                                        mcond3  := cotac->cond3
                                                        mvalor4 := cotac->valor4
                                                        mcond4  := cotac->cond4
                                                        mvalor5 := cotac->valor5
                                                        mcond5  := cotac->cond5
                                                        mobs    := cotac->obs
                                                        mobs1   := cotac->obs1
                                                        @ mli+4,mci+20 GET mvalor1 PICT '999,999.99'
                                                        @ mli+4,mci+42 GET mcond1
                                                        @ mli+5,mci+20 GET mvalor2 PICT '999,999.99'
                                                        @ mli+5,mci+42 GET mcond2
                                                        @ mli+6,mci+20 GET mvalor3 PICT '999,999.99'
                                                        @ mli+6,mci+42 GET mcond3
                                                        @ mli+7,mci+20 GET mvalor4 PICT '999,999.99'
                                                        @ mli+7,mci+42 GET mcond4
                                                        @ mli+8,mci+20 GET mvalor5 PICT '999,999.99'
                                                        @ mli+8,mci+42 GET mcond5
                                                        @ mli+9,mci+7 GET mobs
                                                        @ mli+10,mci+7 GET mobs1
                                                        READ
                                                        IF LASTKEY() = 27
                                                                LOOP
                                                        ENDIF
                                                        mopcao := 'S'
                                                        mopcao := op_simnao('S','Confirma a ALTERACAO da COTACAO:')
                                                        IF mopcao = 'S'
                                                                BLOQREG()
                                                                cotac->ope  := cod_operado
                                                                cotac->valor1   := mvalor1
                                                                cotac->cond1    := mcond1
                                                                cotac->valor2   := mvalor2
                                                                cotac->cond2    := mcond2
                                                                cotac->valor3   := mvalor3
                                                                cotac->cond3    := mcond3
                                                                cotac->valor4   := mvalor4
                                                                cotac->cond4    := mcond4
                                                                cotac->valor5   := mvalor5
                                                                cotac->cond5    := mcond5
                                                                cotac->obs      := mobs
                                                                cotac->obs1     := mobs1
                                                                DBCOMMIT()
                                                                DBUNLOCK()
                                                                mcod_forn := mvalor1 := mvalor2 := mvalor3 := mvalor4 := mvalor5 := mreg := 0
                                                                mcond1:=mcond2:=mcond3:=mcond4:=mcond5:=SPACE(30)
                                                                mobs := mobs1 := SPACE(50)
                                                        ENDIF
                                                ENDIF
                                                IF LASTKEY() = 69 .OR. LASTKEY() = 101
                                                        mopcao := 'S'
                                                        mopcao := op_simnao('S','Confirma a EXCLUSAO da COTACAO:')
                                                        IF mopcao = 'S'
                                                                BLOQREG()
                                                                DELE
                                                                DBCOMMIT()
                                                                DBUNLOCK()
                                                                sr_getconnection():exec("DELETE FROM saccotac WHERE SR_DELETED = 'T'",,.f.)
                                                                sr_getconnection():exec("COMMIT",,.f.)
                                                        ENDIF
                                                ENDIF
                                                IF mopcao = 'S'
                                                        *************
                                                        SELE('cotac');ORDSETFOCUS(2)
                                                        GO TOP
                                                        *************
                                                        ASIZE(m_cota,0)
                                                        ASIZE(m_pos,0)
                                                        IF DBSEEK(STRZERO(mcod_merc,5)+STRZERO(mcod_forn,4))
                                                                WHILE ! EOF() .AND. mcod_merc = cotac->codigo .AND. STRZERO(mcod_forn,4) = cotac->cod_forn
                                                                        AADD(m_cota,DTOC(cotac->data)+' '+TRANSFORM(cotac->valor1,'999,999.99')+' '+TRANSFORM(cotac->valor2,'999,999.99')+' '+TRANSFORM(cotac->valor3,'999,999.99')+' '+TRANSFORM(cotac->valor4,'999,999.99')+' '+TRANSFORM(cotac->valor5,'999,999.99'))
                                                                        AADD(m_pos,RECNO())
                                                                        SKIP
                                                                ENDDO
                                                        ENDIF
                                                ENDIF
                                                RESTSCREEN(00,00,24,79,mtela_con)
                                        CASE LASTKEY() = 27
                                                EXIT
                                ENDCASE
                        ENDDO
                ENDIF
                @ lci+3,cci+20 GET mvalor1 PICT '999,999.99'
                @ lci+3,cci+42 GET mcond1
                @ lci+4,cci+20 GET mvalor2 PICT '999,999.99'
                @ lci+4,cci+42 GET mcond2
                @ lci+5,cci+20 GET mvalor3 PICT '999,999.99'
                @ lci+5,cci+42 GET mcond3
                @ lci+6,cci+20 GET mvalor4 PICT '999,999.99'
                @ lci+6,cci+42 GET mcond4
                @ lci+7,cci+20 GET mvalor5 PICT '999,999.99'
                @ lci+7,cci+42 GET mcond5
                @ lci+8,cci+7 GET mobs
                @ lci+9,cci+7 GET mobs1
                READ
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                mopcao := op_simnao('S','Confirma a Inclusao da COTACAO:')
                IF mopcao = 'N'
                        LOOP
                ENDIF
                *************
                SELE('cotac');ORDSETFOCUS(1)
                GO TOP
                *************
                ADIREG()
                cotac->data := mdata_sis
                cotac->ope  := cod_operado
                cotac->cod_forn := STRZERO(mcod_forn,4)
                cotac->fornece  := forn->razao
                cotac->codigo   := mcod_merc
                cotac->produto  := merc->merc
                cotac->valor1   := mvalor1
                cotac->cond1    := mcond1
                cotac->valor2   := mvalor2
                cotac->cond2    := mcond2
                cotac->valor3   := mvalor3
                cotac->cond3    := mcond3
                cotac->valor4   := mvalor4
                cotac->cond4    := mcond4
                cotac->valor5   := mvalor5
                cotac->cond5    := mcond5
                cotac->obs      := mobs
                cotac->obs1     := mobs1
                DBCOMMIT()
                DBUNLOCK()
        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL
