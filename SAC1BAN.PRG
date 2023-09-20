***
*** SAC1BAN.PRG:  Menu de BANCOS
***

FUNCTION sac1ban
**************
LOCAL MPRG:='SAC1BAN'
LOCAL tela,tela1,lci,cci,lba,cba,li,ci,lb,cb,pode,point
LOCAL mcod_banc,mbanco,mn_banco,magencia,mc_c,mban1,mban2,mban3,mban4,mban5,;
      mban6,mban7,mban8,mban9,mban10,mban11,mban12,mban13,mban14,mban15,mop,;
      opcao,mop_conf,mnosso_num:=SPACE(15)
MEMVAR nivel_acess,mdata_sis,getlist
IF ! ver_nivel(mprg,'INCLUSAO E ALTERACAO DE BANCO (C/C)','145',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := 00
cci := 00
lba := 16
cba := 22

li := 00
ci := 00
lb := 04
cb := 72

tela := SAVESCREEN(01,00,24,79)

op_tela(00,00,14,18,"CADASTRO DE BANCOS")   
*-----------------------------------------------
CLOSE ALL
IF ! AbriArq('sacban1','ban1');RETURN NIL;ENDIF
IF ! AbriArq('sacban2','ban2');RETURN NIL;ENDIF
IF ! AbriArq('sacban3','ban3');RETURN NIL;ENDIF
IF ! AbriArq('sacban4','ban4');RETURN NIL;ENDIF
IF ! AbriArq('sacban5','ban5');RETURN NIL;ENDIF
IF ! AbriArq('sacban6','ban6');RETURN NIL;ENDIF
IF ! AbriArq('sacban7','ban7');RETURN NIL;ENDIF
IF ! AbriArq('sacban8','ban8');RETURN NIL;ENDIF
IF ! AbriArq('sacban9','ban9');RETURN NIL;ENDIF
IF ! AbriArq('sacban10','ban10');RETURN NIL;ENDIF
IF ! AbriArq('sacban11','ban11');RETURN NIL;ENDIF
IF ! AbriArq('sacban12','ban12');RETURN NIL;ENDIF
IF ! AbriArq('sacban13','ban13');RETURN NIL;ENDIF
IF ! AbriArq('sacban14','ban14');RETURN NIL;ENDIF
IF ! AbriArq('sacban15','ban15');RETURN NIL;ENDIF
*---------------------------------------------
mban1 := 'Inclusao BANCO 1   '
mban2 := 'Inclusao BANCO 2   '
mban3 := 'Inclusao BANCO 3   '
mban4 := 'Inclusao BANCO 4   '
mban5 := 'Inclusao BANCO 5   '
mban6 := 'Inclusao BANCO 6   '
mban7 := 'Inclusao BANCO 7   '
mban8 := 'Inclusao BANCO 8   '
mban9 := 'Inclusao BANCO 9   '
mban10:= 'Inclusao BANCO 10  '
mban11:= 'Inclusao BANCO 11  '
mban12:= 'Inclusao BANCO 12  '
mban13:= 'Inclusao BANCO 13  '
mban14:= 'Inclusao BANCO 14  '
mban15:= 'Inclusao BANCO 15  '
          
WHILE .T.
        mop := SPACE(1)
        *****************************
        SELE('ban1')
        IF LASTREC() > 0
                mban1 := ban1->banco
        ENDIF
        *****************************
        *****************************
        SELE('ban2')
        IF LASTREC() > 0
                mban2 := ban2->banco
        ENDIF
        *****************************
        *****************************
        SELE('ban3')
        IF LASTREC() > 0
                mban3 := ban3->banco
        ENDIF
        *****************************
        *****************************
        SELE('ban4')
        IF LASTREC() > 0
                mban4 := ban4->banco
        ENDIF
        *****************************
        *****************************
        SELE('ban5')
        IF LASTREC() > 0
                mban5 := ban5->banco
        ENDIF
        *****************************
        *****************************
        SELE('ban6')
        IF LASTREC() > 0
                mban6 := ban6->banco
        ENDIF
        *****************************
        *****************************
        SELE('ban7')
        IF LASTREC() > 0
                mban7 := ban7->banco
        ENDIF
        *****************************
        *****************************
        SELE('ban8')
        IF LASTREC() > 0
                mban8 := ban8->banco
        ENDIF
        *****************************
        *****************************
        SELE('ban9')
        IF LASTREC() > 0
                mban9 := ban9->banco
        ENDIF
        *****************************
        *****************************
        SELE('ban10')
        IF LASTREC() > 0
                mban10 := ban10->banco
        ENDIF
        *****************************
        *****************************
        SELE('ban11')
        IF LASTREC() > 0
                mban11 := ban11->banco
        ENDIF
        *****************************
        *****************************
        SELE('ban12')
        IF LASTREC() > 0
                mban12 := ban12->banco
        ENDIF
        *****************************
        *****************************
        SELE('ban13')
        IF LASTREC() > 0
                mban13 := ban13->banco
        ENDIF
        *****************************
        *****************************
        SELE('ban14')
        IF LASTREC() > 0
                mban14 := ban14->banco
        ENDIF
        *****************************
        *****************************
        SELE('ban15')
        IF LASTREC() > 0
                mban15 := ban15->banco
        ENDIF
        *****************************
        setcor(10)
        @ lci,cci PROMPT mban1
        @ lci+1,cci PROMPT mban2
        @ lci+2,cci PROMPT mban3
        @ lci+3,cci PROMPT mban4
        @ lci+4,cci PROMPT mban5
        @ lci+5,cci PROMPT mban6
        @ lci+6,cci PROMPT mban7
        @ lci+7,cci PROMPT mban8
        @ lci+8,cci PROMPT mban9
        @ lci+9,cci PROMPT mban10
        @ lci+10,cci PROMPT mban11
        @ lci+11,cci PROMPT mban12
        @ lci+12,cci PROMPT mban13
        @ lci+13,cci PROMPT mban14
        @ lci+14,cci PROMPT mban15
        SET INTEN ON
        MENU TO opcao
        setcor(1)

        IF LASTKEY() = 27
                RESTSCREEN(01,00,24,79,tela)
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF opcao = 1
                ***************
                SELE('ban1')
                ***************
                mbanco := ban1->banco
                IF SUBSTR(mban1,1,8) = 'Inclusao'
                        mop := 'I'
                ELSE
                        mop := 'A'
                ENDIF
        ELSEIF opcao = 2
                ***************
                SELE('ban2')
                ***************
                mbanco := ban2->banco
                IF SUBSTR(mban2,1,8) = 'Inclusao'
                        mop := 'I'
                ELSE
                        mop := 'A'
                ENDIF
        ELSEIF opcao = 3
                mbanco := ban3->banco
                ***************
                SELE('ban3')
                ***************
                IF SUBSTR(mban3,1,8) = 'Inclusao'
                        mop := 'I'
                ELSE
                        mop := 'A'
                ENDIF
        ELSEIF opcao = 4
                mbanco := ban4->banco
                ***************
                SELE('ban4')
                ***************
                IF SUBSTR(mban4,1,8) = 'Inclusao'
                        mop := 'I'
                ELSE
                        mop := 'A'
                ENDIF
        ELSEIF opcao = 5
                mbanco := ban5->banco
                ***************
                SELE('ban5')
                ***************
                IF SUBSTR(mban5,1,8) = 'Inclusao'
                        mop := 'I'
                ELSE
                        mop := 'A'
                ENDIF
        ELSEIF opcao = 6
                mbanco := ban6->banco
                ***************
                SELE('ban6')
                ***************
                IF SUBSTR(mban6,1,8) = 'Inclusao'
                        mop := 'I'
                ELSE
                        mop := 'A'
                ENDIF
        ELSEIF opcao = 7
                mbanco := ban7->banco
                ***************
                SELE('ban7')
                ***************
                IF SUBSTR(mban7,1,8) = 'Inclusao'
                        mop := 'I'
                ELSE
                        mop := 'A'
                ENDIF
        ELSEIF opcao = 8
                mbanco := ban8->banco
                ***************
                SELE('ban8')
                ***************
                IF SUBSTR(mban8,1,8) = 'Inclusao'
                        mop := 'I'
                ELSE
                        mop := 'A'
                ENDIF
        ELSEIF opcao = 9
                mbanco := ban9->banco
                ***************
                SELE('ban9')
                ***************
                IF SUBSTR(mban9,1,8) = 'Inclusao'
                        mop := 'I'
                ELSE
                        mop := 'A'
                ENDIF
        ELSEIF opcao = 10
                mbanco := ban10->banco
                ***************
                SELE('ban10')
                ***************
                IF SUBSTR(mban10,1,8) = 'Inclusao'
                        mop := 'I'
                ELSE
                        mop := 'A'
                ENDIF
        ELSEIF opcao = 11
                mbanco := ban11->banco
                ***************
                SELE('ban11')
                ***************
                IF SUBSTR(mban11,1,8) = 'Inclusao'
                        mop := 'I'
                ELSE
                        mop := 'A'
                ENDIF
        ELSEIF opcao = 12
                mbanco := ban12->banco
                ***************
                SELE('ban12')
                ***************
                IF SUBSTR(mban12,1,8) = 'Inclusao'
                        mop := 'I'
                ELSE
                        mop := 'A'
                ENDIF
        ELSEIF opcao = 13
                mbanco := ban13->banco
                ***************
                SELE('ban13')
                ***************
                IF SUBSTR(mban13,1,8) = 'Inclusao'
                        mop := 'I'
                ELSE
                        mop := 'A'
                ENDIF
        ELSEIF opcao = 14
                mbanco := ban14->banco
                ***************
                SELE('ban14')
                ***************
                IF SUBSTR(mban14,1,8) = 'Inclusao'
                        mop := 'I'
                ELSE
                        mop := 'A'
                ENDIF
        ELSEIF opcao = 15
                mbanco := ban15->banco
                ***************
                SELE('ban15')
                ***************
                IF SUBSTR(mban15,1,8) = 'Inclusao'
                        mop := 'I'
                ELSE
                        mop := 'A'
                ENDIF
        ELSE
                LOOP
        ENDIF
        IF mop = 'I'
                tela1 := SAVESCREEN(01,00,24,79)
                WHILE .T.
                        mbanco    := SPACE(20)
                        mn_banco := SPACE(4)
                        magencia  := SPACE(8)
                        mc_c  := SPACE(13)
                        mcod_banc := STRZERO(opcao,3)
                        mnosso_num := SPACE(15)
                        op_tela(li,ci,lb,cb,"INCLUSAO DE BANCO")   
                        @ li+1,ci TO li+1,cb
                        DEVPOS(li+2,ci+1);DEVOUT(mcod_banc)
                        mensagem('Preencha os campos. [ESC] Abandona')
                        DEVPOS(li,ci+1);DEVOUT('Cod')
                        DEVPOS(li,ci+08);DEVOUT('No. ')
                        DEVPOS(li,ci+16);DEVOUT('Banco ')
                        DEVPOS(li,ci+40);DEVOUT('Agencia ')
                        DEVPOS(li,ci+52);DEVOUT('Conta Corrente ')
                        DEVPOS(li+3,ci+1);DEVOUT('Nosso Numero:')
                        @ li+2,ci+8 GET mn_banco PICT "9999" VALID IF(EMPTY(mn_banco),.F.,.T.)
                        @ li+2,ci+16 GET mbanco PICT "@!"  VALID IF(EMPTY(mbanco),.F.,.T.)
                        @ li+2,ci+40 GET magencia PICT "@!"  VALID IF(EMPTY(magencia),.F.,.T.)
                        @ li+2,ci+52 GET mc_c PICT "@!"  VALID IF(EMPTY(mc_c),.F.,.T.)
                        @ li+3,ci+15 GET mnosso_num PICT "999999999999999"
                        READ
                        IF LASTKEY()=27
                                RESTSCREEN(01,00,24,79,tela1)
                                wvw_lclosewindow()
                                EXIT
                        ENDIF
                        IF op_simnao('S',"Confirma a INCLUSAO:") = 'N'
                                LOOP
                        ELSE
                                IF ADIREG()
                                        (SELE())->data      := mdata_sis
                                        (SELE())->cod_banc  := mcod_banc
                                        (SELE())->banco     := mbanco
                                        (SELE())->n_banco   := mn_banco
                                        (SELE())->agencia   := magencia
                                        (SELE())->c_c       := mc_c
                                        (SELE())->descricao := 'INCLUSAO DO BANCO'
                                        (SELE())->nosso_num := mnosso_num
                                        DBCOMMIT()
                                        DBUNLOCK()
                                        RESTSCREEN(01,00,24,79,tela1)
                                        wvw_lclosewindow()
                                        EXIT
                                ELSE
                                        atencao('Nao foi Possivel Acessar o Arquivo')
                                        LOOP
                                ENDIF
                        ENDIF
                ENDDO
        ELSE
                tela1 := SAVESCREEN(01,00,24,79)
                WHILE .T.
                        mcod_banc := (SELE())->cod_banc
                        mn_banco    := (SELE())->n_banco
                        mbanco  := (SELE())->banco
                        magencia  := (SELE())->agencia
                        mc_c      := (SELE())->c_c
                        mnosso_num := (SELE())->nosso_num
                        op_tela(li,ci,lb,cb,"ALTERACAO DE BANCO")   
                        @ li+1,ci TO li+1,cb
                        DEVPOS(li,ci+1);DEVOUT('Cod')
                        DEVPOS(li,ci+08);DEVOUT('No. ')
                        DEVPOS(li,ci+16);DEVOUT('Banco ')
                        DEVPOS(li,ci+40);DEVOUT('Agencia ')
                        DEVPOS(li,ci+52);DEVOUT('Conta Corrente ')
                        DEVPOS(li+3,ci+1);DEVOUT('Nosso Numero:')
                        setcor(3)
                        DEVPOS(li+2,ci+1);DEVOUT(mcod_banc)
                        setcor(1)
                        mensagem("Modifique o Nome do Cartao (20 Caract. Maximo). [ESC] Abandona.")
                        @ li+2,ci+8 GET mn_banco PICT "9999" VALID IF(EMPTY(mn_banco),.F.,.T.)
                        @ li+2,ci+16 GET mbanco PICT "@!"  VALID IF(EMPTY(mbanco),.F.,.T.)
                        @ li+2,ci+40 GET magencia PICT "@!"  VALID IF(EMPTY(magencia),.F.,.T.)
                        @ li+2,ci+52 GET mc_c PICT "@!"  VALID IF(EMPTY(mc_c),.F.,.T.)
                        @ li+3,ci+15 GET mnosso_num PICT "999999999999999"
                        READ
                        IF LASTKEY()=27
                                RESTSCREEN(01,00,24,79,tela1)
                                wvw_lclosewindow()
                                EXIT
                        ENDIF
                        mop_conf := op_simnao('S','Confirma as alteracoes:')
                        IF mop_conf = 'N'
                                LOOP
                        ENDIF
                        IF ! BLOQREG()
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                        (SELE())->data      := mdata_sis
                        (SELE())->banco     := mbanco
                        (SELE())->n_banco  := mn_banco
                        (SELE())->agencia   := magencia
                        (SELE())->c_c   := mc_c
                        (SELE())->nosso_num := mnosso_num
                        DBCOMMIT()
                        DBUNLOCK()
                        RESTSCREEN(01,00,24,79,tela1)
                        wvw_lclosewindow()
                        EXIT
                ENDDO
        ENDIF
ENDDO
RETURN NIL


