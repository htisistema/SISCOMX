#include "inkey.ch"              // constantes de codigos das teclas
*********************************************************
* FUNCAO P/CONSULTAR, INCLUIR, ALTERAR E EXCLUIR CFOP
*********************************************************
MEMVAR getlist,nivel_acess,cod_operado

FUNCTION sac1op(mop)
*****************
LOCAL mprg:='SAC1OP',;
      f7tela,f7tela1,f7lci:=0,f7cci:=0,f7lba:=15,f7cba:=75,f7msele,f7morde,f7men,;
      oconsprod,ocolprod[5],f7i,f7nkey,f7opcao,tela1,opcao,mreg,li:=15,ci:=00,lb:=18,cb:=75,;
      mcod_op:=SPACE(5),mdesc:=SPACE(30),mcred:=SPACE(1),msaient:=space(1),mtipo:=' '

MEMVAR mcod_nat

IF ! ver_nivel(mprg,'CADASTRO DE CFOP','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
f7tela := SAVESCREEN(01,00,24,79)
op_tela(00,00,20,75,memp_resa+SPACE(50)+"CADASTRO DE CFOP'S")
f7msele := SELE()
f7morde := INDEXORD()
***********************************************
IF ! AbriArq('sacop','op');RETURN NIL;ENDIF
SELE('op');ORDSETFOCUS(1)
***********************************************
f7men := SAVESCREEN(24,00,24,79)
//botao(f7lci-1,f7cci-1,f7lba,f7cba+1,," CFOP'S ",'*')
setcor(10);oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba)
ocolprod[1] := TBCOLUMNNEW('Cod.',{||op->operacao})
ocolprod[2] := TBCOLUMNNEW('Natureza da Operacao',{||op->descr_op})
ocolprod[3] := TBCOLUMNNEW('Deb./Cre.',{||op->credito})
ocolprod[4] := TBCOLUMNNEW('Ent./Sai.',{||op->sai_ent})
ocolprod[5] := TBCOLUMNNEW('Tipo',{||op->tipo})
f7i:=0
FOR f7i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[f7i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        exibi_prg(mprg)
        IF mop = '*'
                mensagem('<P>esquisa <I>nclusao <ENTER>p/Alterar e Excluir <ESC>Retornar')
        ELSE
                mensagem('<PGUP> <PGDN> <P>esquisa <I>nclusao <ENTER> Conf. <ESC>Retornar')
        ENDIF
        botao(li,ci,lb,cb,," CFOP'S ")
        f7nkey := 0
        WHILE f7nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                f7nkey := INKEY(0)
        ENDDO
        IF f7nkey == K_ESC
                mcod_nat := SPACE(20)
                EXIT
        ELSEIF f7nkey = 73 .OR. f7nkey = 105
                tela1 := SAVESCREEN(01,00,24,79)
                WHILE .T.
                        setcor(3)
                        botao(li,ci,lb,cb,,' Inclusao ')
                        DEVPOS(li+1,ci+2);DEVOUT('Cod.')
                        DEVPOS(li+1,ci+07);DEVOUT('Natureza da Operacao')
                        DEVPOS(li+1,ci+49);DEVOUT('Deb./Cre.')
                        DEVPOS(li+1,ci+60);DEVOUT('Ent./Sai.')
                        DEVPOS(li+1,ci+70);DEVOUT('Tipo')
                        setcor(1)
                        mensagem('Digite o C¢digo do CFOP a ser incluido. [ESC] Abandona')
                        mcod_op = SPACE(5)
                        mdesc=SPACE(30)
                        mcred := msaient := mtipo := space(1)
                        @ li+2,ci+2 GET mcod_op PICT "9.999"
                        READ
                        IF LASTKEY()=27
                                RESTSCREEN(01,00,24,79,tela1)
                                GO TOP
                                EXIT
                        ENDIF
                        IF EMPTY(mcod_op)
                                LOOP
                        ENDIF
                        IF op->(DBSEEK(mcod_op))
                                atencao("Este Codigo ja existe!!!")
                                LOOP
                        ENDIF
                        mensagem("Digite o Nome/Agencia do CFOP. [ESC] Abandona.")
                        @ li+2,ci+07 GET mdesc PICT '@!'
                        @ li+2,ci+53 GET mcred PICT '@!' WHEN men_get(li-5,ci+30,'Informe o [S]p/Credito ou Debito [N]p/ter nenhuma movimentacao') VALID mcred $ 'S,N' .AND. lim_get()
                        @ li+2,ci+64 GET msaient PICT '@!'WHEN men_get(li-5,ci+37,'Informe o [E] Nota Fiscal de Entrada [S] Nota Fiscal de Saida') VALID msaient $ 'S,E' .AND. lim_get()
                        @ li+2,ci+72 GET mtipo PICT '@!'WHEN men_get(li-5,ci+37,'Informe para NF-e [1]-NORMAL [2]-COMPLEMENTAR [3]-AJUSTE [4]-DEVOLUCAO/RETORNO') VALID mtipo $ '1,2,3,4' .AND. lim_get()
                        READ
                        IF LASTKEY()=27
                                RESTSCREEN(01,00,24,79,tela1)
                                GO TOP
                                EXIT
                        ENDIF
                        IF op_simnao('S',"Confirma os dados digitados:") = 'N'
                                EXIT
                                GO TOP
                        ELSE
                                sr_getconnection():exec('INSERT INTO sacop (OPERACAO, DESCR_OP, CREDITO, SAI_ENT'+;
                                        ',TIPO,SR_DELETED)'+;
                                        ' VALUES ('+;
                                        sr_cdbvalue(mcod_op  )+','+; //1
                                        sr_cdbvalue(mdesc    )+','+; //2
                                        sr_cdbvalue(mcred    )+','+; //3
                                        sr_cdbvalue(msaient  )+','+; //4
                                        sr_cdbvalue(mtipo    )+','+; //7
                                        sr_cdbvalue(' ')+')',,.f.)
                                sr_getconnection():exec("COMMIT",,.f.)
                        ENDIF
                        *************
                        SELE('op');ORDSETFOCUS(1)
                        *************
                        setcor(10);oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba)
                        ocolprod[1] := TBCOLUMNNEW('Cod.',{||op->operacao})
                        ocolprod[2] := TBCOLUMNNEW('Natureza da Operacao',{||op->descr_op})
                        ocolprod[3] := TBCOLUMNNEW('Deb./Cre.',{||op->credito})
                        ocolprod[4] := TBCOLUMNNEW('Ent./Sai.',{||op->sai_ent})
                        ocolprod[5] := TBCOLUMNNEW('Tipo',{||op->tipo})
                        f7i:=0
                        FOR f7i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[f7i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                        EXIT
                ENDDO
        ELSEIF f7nkey == K_ENTER
                mreg := RECNO()
                mcod_nat := op->operacao
                IF mop = '*'
                        f7opcao := mensagem1('Deseja <A>lterar <E>xcluir:','A','A,E')
                        IF LASTKEY() = 27
                                RESTSCREEN(01,00,24,79,tela1)
                                EXIT
                        ELSEIF f7opcao = 'A'
                                tela1 := SAVESCREEN(01,00,24,79)
                                WHILE .T.
                                        botao(li,ci,lb,cb,,' Alteracao ')
                                        DEVPOS(li+1,ci+2);DEVOUT('Cod.')
                                        DEVPOS(li+1,ci+07);DEVOUT('Natureza da Operacao')
                                        DEVPOS(li+1,ci+49);DEVOUT('Deb./Cre.')
                                        DEVPOS(li+1,ci+60);DEVOUT('Ent./Sai.')
                                        DEVPOS(li+1,ci+70);DEVOUT('Tipo')
                                        mensagem("Digite o C¢digo a ser modificado. [ESC] Abandona")
                                        mcod_op = SPACE(5)
                                        mdesc=SPACE(30)
                                        mcred := SPACE(1)
                                        msaient := space(1)
                                        IF BLOQREG()
                                                @ li+2,ci+2 GET op->operacao PICT "9.999"
                                                @ li+2,ci+07 GET op->descr_op PICT '@!'
                                                @ li+2,ci+53 GET op->credito PICT '@!' WHEN men_get(li-5,ci+30,'Informe o [S]p/Credito ou Debito [N]p/ter nenhuma movimentacao') VALID op->credito $ 'S,N' .AND. lim_get()
                                                @ li+2,ci+64 GET op->sai_ent PICT '@!'WHEN men_get(li-5,ci+37,'Informe o [E] Nota Fiscal de Entrada [S] Nota Fiscal de Saida') VALID op->sai_ent $ 'S,E' .AND. lim_get()
                                                @ li+2,ci+72 GET op->tipo PICT '@!'WHEN men_get(li-5,ci+37,'Informe para NF-e [1]-NORMAL [2]-COMPLEMENTAR [3]-AJUSTE [4]-DEVOLUCAO/RETORNO') VALID op->tipo $ '1,2,3,4' .AND. lim_get()
                                                READ
                                                IF LASTKEY()=27
                                                        RESTSCREEN(01,00,24,79,tela1)
                                                        GO TOP
                                                        EXIT
                                                ENDIF
                                                UNLOCK
                                        ELSE
                                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                                LOOP
                                        ENDIF
                                        DBCOMMIT()
                                        *************
                                        SELE('op');ORDSETFOCUS(1)
                                        GO mreg
                                        *************
                                        setcor(10);oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba)
                                        ocolprod[1] := TBCOLUMNNEW('Cod.',{||op->operacao})
                                        ocolprod[2] := TBCOLUMNNEW('Natureza da Operacao',{||op->descr_op})
                                        ocolprod[3] := TBCOLUMNNEW('Deb./Cre.',{||op->credito})
                                        ocolprod[4] := TBCOLUMNNEW('Ent./Sai.',{||op->sai_ent})
                                        ocolprod[5] := TBCOLUMNNEW('Tipo',{||op->tipo})
                                        f7i:=0
                                        FOR f7i=1 TO LEN(ocolprod)
                                                oconsprod:ADDCOLUMN(ocolprod[f7i])
                                        NEXT
                                        oconsprod:HEADSEP := CHR(196)
                                        oconsprod:COLSEP := CHR(179)
                                        oconsprod:FORCESTABLE()
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDDO
                        ELSEIF f7opcao = 'E'
                                tela1 := SAVESCREEN(01,00,24,79)
                                WHILE .T.
                                        botao(li,ci,lb,cb,,' Exclusao ')
                                        DEVPOS(li+1,ci+2);DEVOUT('Cod.')
                                        DEVPOS(li+1,ci+07);DEVOUT('Natureza da Operacao')
                                        DEVPOS(li+1,ci+39);DEVOUT('Deb./Cre.')
                                        DEVPOS(li+1,ci+50);DEVOUT('Ent./Sai.')
                                        @ li+2,ci+2 SAY op->operacao
                                        @ li+2,ci+07 SAY op->descr_op
                                        @ li+2,ci+53 SAY op->credito
                                        @ li+2,ci+64 SAY op->sai_ent
                                        setcor(1)
                                        IF op_simnao('N',"Confirma os dados digitados:") = 'N'
                                                RESTSCREEN(01,00,24,79,tela1)
                                                GO TOP
                                                EXIT
                                        ELSE
                                                sr_getconnection():exec("DELETE FROM sacop WHERE operacao = "+sr_cdbvalue(op->operacao),,.f.)
                                                sr_getconnection():exec("COMMIT",,.f.)
                                        ENDIF
                                        sr_getconnection():exec("DELETE FROM sacop WHERE SR_DELETED = 'T'",,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                        *************
                                        SELE('op');ORDSETFOCUS(1)
                                        GO mreg
                                        *************
                                        setcor(10);oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba)
                                        ocolprod[1] := TBCOLUMNNEW('Cod.',{||op->operacao})
                                        ocolprod[2] := TBCOLUMNNEW('Natureza da Operacao',{||op->descr_op})
                                        ocolprod[3] := TBCOLUMNNEW('Deb./Cre.',{||op->credito})
                                        ocolprod[4] := TBCOLUMNNEW('Ent./Sai.',{||op->sai_ent})
                                        ocolprod[5] := TBCOLUMNNEW('Tipo',{||op->tipo})
                                        f7i:=0
                                        FOR f7i=1 TO LEN(ocolprod)
                                                oconsprod:ADDCOLUMN(ocolprod[f7i])
                                        NEXT
                                        oconsprod:HEADSEP := CHR(196)
                                        oconsprod:COLSEP := CHR(179)
                                        oconsprod:FORCESTABLE()
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDDO
                        ENDIF
                ELSE
                        CLEAR GETS
                        EXIT
                ENDIF
                setcor(10);oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba)
                ocolprod[1] := TBCOLUMNNEW('Cod.',{||op->operacao})
                ocolprod[2] := TBCOLUMNNEW('Natureza da Operacao',{||op->descr_op})
                ocolprod[3] := TBCOLUMNNEW('Deb./Cre.',{||op->credito})
                ocolprod[4] := TBCOLUMNNEW('Ent./Sai.',{||op->sai_ent})
                f7i:=0
                FOR f7i=1 TO LEN(ocolprod)
                        oconsprod:ADDCOLUMN(ocolprod[f7i])
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)
                oconsprod:FORCESTABLE()
        ELSE
                IF genkey(oconsprod,f7nkey,'op')
                        setcor(10);oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba)
                        ocolprod[1] := TBCOLUMNNEW('Cod.',{||op->operacao})
                        ocolprod[2] := TBCOLUMNNEW('Natureza da Operacao',{||op->descr_op})
                        ocolprod[3] := TBCOLUMNNEW('Deb./Cre.',{||op->credito})
                        ocolprod[4] := TBCOLUMNNEW('Ent./Sai.',{||op->sai_ent})
                        ocolprod[5] := TBCOLUMNNEW('Tipo',{||op->tipo})
                        f7i:=0
                        FOR f7i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[f7i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(f7msele);IF(f7morde>0,ORDSETFOCUS(f7morde),)
RESTSCREEN(24,00,24,79,f7men)
RESTSCREEN(01,00,24,79,f7tela)
wvw_lclosewindow()
IF f7nkey == K_ESC
        RELEASE ALL
        RETURN mcod_nat
ELSE
        RELEASE ALL
        CLEAR GETS
        RETURN mcod_nat
ENDIF
RETURN NIL
******************************* f i m *********************************************