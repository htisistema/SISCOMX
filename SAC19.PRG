#include "inkey.ch"              // constantes de codigos das teclas
*********************************************************
* FUNCAO P/CONSULTAR, INCLUIR, ALTERAR E EXCLUIR FORMAS DE PAGAMENTOS
*********************************************************
MEMVAR getlist,nivel_acess,cod_operado

FUNCTION sac19(mop,mecf)
************************
LOCAL mprg:='SAC19',;
      f7tela,f7tela1,f7lba,f7cba,f7msele,f7morde,;
      oconsprod,ocolprod[9],f7i,f7nkey,f7opcao,tela1,opcao,mreg,li,ci,lb,cb,;
      mdesc:=SPACE(20),mdesconto := 0,mprazo := 0,mcod_forn,mtipo_conta,msigla,mtef:=' ',cons_cartao:={}

MEMVAR mcod_cart

IF ! ver_nivel(mprg,'CADASTRO DE FORMAS DE PAGAMENTOS ','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mcod_cart := SPACE(3)
f7lba := 23
f7cba := 87

li := 25
ci := 01
lb := 30
cb := 85

f7tela := SAVESCREEN(01,00,24,79)
op_tela(05,08,36,95,memp_resa+SPACE(50)+" FORMAS DE PAGAMENTOS ")

f7msele := SELE()
f7morde := INDEXORD()
***********************************************
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacdesp','cdesp');RETURN NIL;ENDIF
IF ! AbriArq('saccarta','car');RETURN NIL;ENDIF
SELE('car');ORDSETFOCUS(1)
***********************************************
setcor(10);oconsprod := TBROWSEDB(0,0,f7lba-1,f7cba)
ocolprod[1] := TBCOLUMNNEW('Cod.',{||car->codigo})
ocolprod[2] := TBCOLUMNNEW('Descricao',{||car->cartao})
ocolprod[3] := TBCOLUMNNEW('Sigla',{||car->sigla})
ocolprod[4] := TBCOLUMNNEW('Prazo',{||TRANSFORM(car->prazo,'999')})
ocolprod[5] := TBCOLUMNNEW('Desconto %',{||TRANSFORM(car->desconto,'999.99')})
ocolprod[6] := TBCOLUMNNEW('Cod.Desp.',{||car->cod_forn})
ocolprod[7] := TBCOLUMNNEW('Tipo Conta',{||TRANSFORM(car->tipo_conta,'@@R 9.99.9')})
ocolprod[8] := TBCOLUMNNEW('Venda',{||IF(car->tipo_venda='A','Avista','Aprazo')})
ocolprod[9] := TBCOLUMNNEW('Doc.TEF',{||SPACE(3)+car->tef})
f7i:=0
FOR f7i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[f7i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        IF mop = '*'
                mensagem('<P>esquisa <I>nclusao <ENTER>p/Alterar e Excluir <ESC>Retornar')
        ELSE
                mensagem('<PGUP> <PGDN> <P>esquisa <I>nclusao <ENTER> Conf. <ESC>Retornar')
        ENDIF
        f7nkey := 0
        botao(li,ci,lb,cb,,' Forma de Pagamento ')
*       WHILE f7nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                f7nkey := INKEY(0)
*       ENDDO
        IF f7nkey == K_ESC
                mcod_cart := SPACE(3)
                EXIT
        ELSEIF f7nkey = 73 .OR. f7nkey = 105
                tela1 := SAVESCREEN(01,00,24,79)
                WHILE .T.
                        GO BOTT
                        botao(li,ci,lb,cb,,' Inclusao Forma de Pagamento ')
                        mensagem('Digite o C�digo da Forma de Pagamento a incluido. [ESC] Abandona')
                        mcod_cart = STRZERO(VAL(car->codigo)+1,3)
                        mdesc=SPACE(20)
                        mdesconto := 0
                        mprazo := 0
                        mcod_forn := 0
                        mtipo_conta:=SPACE(4)
                        mtipo_venda := mtef := SPACE(1)
                        msigla:='  '
                        DEVPOS(li+1,ci+3);DEVOUT('Cod.')
                        DEVPOS(li+1,ci+08);DEVOUT('Descricao')
                        DEVPOS(li+1,ci+30);DEVOUT('Sigla')
                        DEVPOS(li+1,ci+36);DEVOUT('Prazo')
                        DEVPOS(li+1,ci+42);DEVOUT('Desc.(%)')
                        DEVPOS(li+1,ci+51);DEVOUT('Tip.Vend')
                        DEVPOS(li+3,ci+1);DEVOUT('Cod.Despesa..:')
                        DEVPOS(li+4,ci+1);DEVOUT('Tipo Conta...:')
                        DEVPOS(li+5,ci+1);DEVOUT('Doc.Tef [S/N]:')
                        @ li+2,ci+3 GET mcod_cart PICT "999" VALID IF(EMPTY(mcod_cart),.F.,.T.)
                        READ
                        IF LASTKEY()=27
                                RESTSCREEN(01,00,24,79,tela1)
                                EXIT
                        ENDIF
                        IF car->(DBSEEK(STRZERO(VAL(mcod_cart),3)))
                                atencao("Este Forma de Pagamento ja existe!!!")
                                LOOP
                        ENDIF
                        setcor(3)
                        DEVPOS(li+2,ci+3);DEVOUT(mcod_cart)
                        setcor(1)
                        mensagem("Digite o Nome/Agencia do Cartao. [ESC] Abandona.")
                        @ li+2,ci+08 GET mdesc VALID IF(EMPTY(mdesc),.F.,.T.)
                        @ li+2,ci+30 GET msigla PICT '@!' VALID IF(EMPTY(msigla),.F.,.T.)
                        @ li+2,ci+37 GET mprazo PICT '999'
                        @ li+2,ci+42 GET mdesconto PICT '999.99'
                        @ li+2,ci+54 GET mtipo_venda PICT '@!' VALID mtipo_venda $ 'A,P' .AND. lim_get() WHEN men_get(li+3,ci+54,'Indicar se a Venda neste CARTAO e considerada [A]vista - a[P]razo')
                        @ li+3,ci+16 GET mcod_forn PICT '9999' VALID v_fornece(mcod_forn,li+3,ci+19) WHEN mdesconto > 0
                        @ li+4,ci+16 GET mtipo_conta PICT '@@R 9.99.9' VALID verdesp(mtipo_conta,li+4,ci+19) .AND. lim_get() WHEN mdesconto > 0 .AND. men_get(li+5,ci+19,'Identifique o Grupo da Conta preenchendo so o primeiro digito da conta, ou preenchendo todo os espaco p/o tipo de conta <F9>p/Consultar ou deixando em BRANCO p/TODOS')
                        @ li+5,ci+16 GET mtef PICT '@!' VALID mtef $ 'S,N' WHEN men_get(0,0,'Forma de pagamento chamar GERENCIADOR TEF')
                        READ
                        IF LASTKEY()=27
                                LOOP
                        ENDIF
                        IF op_simnao('S',"Confirma os dados digitados:") = 'N'
                                LOOP
                        ELSE
                                IF ADIREG()
                                        car-> codigo := mcod_cart
                                        car-> cartao := mdesc
                                        car-> sigla  := msigla
                                        car-> prazo := mprazo
                                        car-> desconto := mdesconto
                                        car-> cod_forn := STRZERO(mcod_forn,4)
                                        car-> tipo_conta := mtipo_conta
                                        car-> tipo_venda := mtipo_venda
                                        car-> tef        := mtef
                                        COMMIT
                                        UNLOCK
                                ENDIF
                                IF mecf # NIL
                                                IBR_COMANDO('ECF.ProgramaFormaPagamento',{'CHEQUE' , .F.})
                                                IBR_COMANDO('ECF.ProgramaFormaPagamento',{ 'DUPLICATA' , .F.})
                                                IBR_COMANDO('ECF.ProgramaFormaPagamento',{ 'DINHEIRO' , .F.})
                                                IBR_COMANDO('ECF.ProgramaFormaPagamento',{ 'CREDITO' , .F.})
                                                i := 0
                                                FOR i = 1 TO LEN(cons_cartao)
                                                        IF cons_cartao[i,3] = 'CT' .OR. cons_cartao[i,9] = 'S'
                                                                mvinculado := .T.
                                                        ELSE
                                                                mvinculado := .F.
                                                        ENDIF
                                                        IBR_COMANDO('ECF.ProgramaFormaPagamento',{SUBSTR(cons_cartao[i,2],1,16) ,mvinculado})
                                                        /*
                                                        IF ! IBR_COMANDO('ECF.ProgramaFormaPagamento',{SUBSTR(cons_cartao[i,2],1,16) ,mvinculado})
                                                                LOOP
                                                        ENDIF
                                                        */
                                                NEXT
                                ENDIF
                        ENDIF
                        RESTSCREEN(01,00,24,79,tela1)
                        *************
                        SELE('car');ORDSETFOCUS(1)
                        *************
                        setcor(10);oconsprod := TBROWSEDB(0,0,f7lba-1,f7cba)
                        ocolprod[1] := TBCOLUMNNEW('Cod.',{||car->codigo})
                        ocolprod[2] := TBCOLUMNNEW('Descricao',{||car->cartao})
                        ocolprod[3] := TBCOLUMNNEW('Sigla',{||car->sigla})
                        ocolprod[4] := TBCOLUMNNEW('Prazo',{||TRANSFORM(car->prazo,'999')})
                        ocolprod[5] := TBCOLUMNNEW('Desconto %',{||TRANSFORM(car->desconto,'999.99')})
                        ocolprod[6] := TBCOLUMNNEW('Cod.Desp.',{||car->cod_forn})
                        ocolprod[7] := TBCOLUMNNEW('Tipo Conta',{||TRANSFORM(car->tipo_conta,'@@R 9.99.9')})
                        ocolprod[8] := TBCOLUMNNEW('Venda',{||IF(car->tipo_venda='A','Avista','Aprazo')})
                        ocolprod[9] := TBCOLUMNNEW('Doc.TEF',{||SPACE(3)+car->tef})
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
                mcod_cart := VAL(car->codigo)
                IF mop = '*'
                        f7opcao := mensagem1('Deseja <A>lterar <E>xcluir:','A','A,E')
                        IF LASTKEY() = 27
                                RESTSCREEN(01,00,24,79,tela1)
                                EXIT
                        ELSEIF f7opcao = 'A'
                                tela1 := SAVESCREEN(01,00,24,79)
                                WHILE .T.
                                        botao(li,ci,lb,cb,,' Alteracao ')
                                        mensagem("Altere os campos que deseja. [ESC] Abandona")
                                        DEVPOS(li+1,ci+3);DEVOUT('Cod.')
                                        DEVPOS(li+1,ci+08);DEVOUT('Descricao')
                                        DEVPOS(li+1,ci+30);DEVOUT('Sigla')
                                        DEVPOS(li+1,ci+36);DEVOUT('Prazo')
                                        DEVPOS(li+1,ci+42);DEVOUT('Desc.(%)')
                                        DEVPOS(li+1,ci+51);DEVOUT('Tip.Vend')
                                        DEVPOS(li+3,ci+1);DEVOUT('Cod.Despesa..:')
                                        DEVPOS(li+4,ci+1);DEVOUT('Tipo Conta...:')
                                        DEVPOS(li+5,ci+1);DEVOUT('Doc.Tef [S/N]:')
                                        setcor(3)
                                        DEVPOS(li+2,ci+3);DEVOUT(car->codigo)
                                        setcor(1)
                                        mdesc      := car->cartao
                                        mdesconto  := car->desconto
                                        mprazo     := car->prazo
                                        mcod_forn  := VAL(car->cod_forn)
                                        mtipo_conta:= car->tipo_conta
                                        mtipo_venda:= car->tipo_venda
                                        msigla     := car->sigla
                                        mtef       := car->tef
                                        mensagem("Modifique o Nome do Cartao (20 Caract. Maximo). [ESC] Abandona.")
                                        @ li+2,ci+08 GET mdesc
                                        @ li+2,ci+30 GET msigla PICT '@!' VALID IF(EMPTY(msigla),.F.,.T.)
                                        @ li+2,ci+37 GET mprazo PICT '999'
                                        @ li+2,ci+42 GET mdesconto PICT '999.99'
                                        @ li+2,ci+54 GET mtipo_venda PICT '@!' VALID mtipo_venda $ 'A,P' WHEN men_get(li+3,ci+54,'Indicar se a Venda neste CARTAO e considerada [A]vista - a[P]razo')
                                        @ li+3,ci+16 GET mcod_forn PICT '9999' VALID v_fornece(mcod_forn,li+3,ci+20)
                                        @ li+4,ci+16 GET mtipo_conta PICT '@@R 9.99.9' VALID verdesp(mtipo_conta,li+4,ci+20) WHEN men_get(li+5,ci+19,'Identifique o Grupo da Conta preenchendo so o primeiro digito da conta, ou preenchendo todo os espaco p/o tipo de conta <F9>p/Consultar ou deixando em BRANCO p/TODOS')
                                        @ li+5,ci+16 GET mtef PICT '@!' VALID mtef $ 'S,N' WHEN men_get(0,0,'Forma de pagamento chamar GERENCIADOR TEF')
                                        READ
                                        IF LASTKEY()=27
                                                RESTSCREEN(01,00,24,79,tela1)
                                                GO TOP
                                                EXIT
                                        ENDIF
                                        IF op_simnao('S',"Confirma os dados digitados:") = 'N'
                                                LOOP
                                        ELSE
                                                IF BLOQREG()
                                                        car-> cartao := mdesc
                                                        car-> sigla  := msigla
                                                        car-> prazo := mprazo
                                                        car-> desconto := mdesconto
                                                        car-> cod_forn := STRZERO(mcod_forn,4)
                                                        car-> tipo_conta := mtipo_conta
                                                        car-> tipo_venda := mtipo_venda
                                                        car-> tef        := mtef
                                                        COMMIT
                                                        UNLOCK
                                                ELSE
                                                        atencao('Nao foi Possivel Acessar o Arquivo')
                                                        LOOP
                                                ENDIF
                                                IF mecf # NIL
                                                        cons_cartao := {}
                                                        mcomando := "SELECT * FROM saccarta"
                                                        sr_getconnection():exec(mcomando,,.t.,@cons_cartao)
                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                        IBR_COMANDO('ECF.ProgramaFormaPagamento',{'CHEQUE' , .F.})
                                                        IBR_COMANDO('ECF.ProgramaFormaPagamento',{ 'DUPLICATA' , .F.})
                                                        IBR_COMANDO('ECF.ProgramaFormaPagamento',{ 'DINHEIRO' , .F.})
                                                        IBR_COMANDO('ECF.ProgramaFormaPagamento',{ 'CREDITO' , .F.})
                                                        i := 0
                                                        FOR i = 1 TO LEN(cons_cartao)
                                                                IF cons_cartao[i,3] = 'CT' .OR. cons_cartao[i,9] = 'S'
                                                                        mvinculado := .T.
                                                                ELSE
                                                                        mvinculado := .F.
                                                                ENDIF
                                                                IBR_COMANDO('ECF.ProgramaFormaPagamento',{SUBSTR(cons_cartao[i,2],1,16) ,mvinculado})
                                                        NEXT
                                                ENDIF
                                        ENDIF
                                        RESTSCREEN(01,00,24,79,tela1)
                                        *************
                                        SELE('car');ORDSETFOCUS(1)
                                        *************
                                        setcor(10);oconsprod := TBROWSEDB(0,0,f7lba-1,f7cba)
                                        ocolprod[1] := TBCOLUMNNEW('Cod.',{||car->codigo})
                                        ocolprod[2] := TBCOLUMNNEW('Descricao',{||car->cartao})
                                        ocolprod[3] := TBCOLUMNNEW('Sigla',{||car->sigla})
                                        ocolprod[4] := TBCOLUMNNEW('Prazo',{||TRANSFORM(car->prazo,'999')})
                                        ocolprod[5] := TBCOLUMNNEW('Desconto %',{||TRANSFORM(car->desconto,'999.99')})
                                        ocolprod[6] := TBCOLUMNNEW('Cod.Desp.',{||car->cod_forn})
                                        ocolprod[7] := TBCOLUMNNEW('Tipo Conta',{||TRANSFORM(car->tipo_conta,'@@R 9.99.9')})
                                        ocolprod[8] := TBCOLUMNNEW('Venda',{||IF(car->tipo_venda='A','Avista','Aprazo')})
                                        ocolprod[9] := TBCOLUMNNEW('Doc.TEF',{||SPACE(3)+car->tef})
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
                                        mensagem("Digite o C�digo do Cartao a ser Excluido. [ESC] Abandona")
                                        DEVPOS(li+1,ci+3);DEVOUT('Cod.')
                                        DEVPOS(li+1,ci+08);DEVOUT('Descricao')
                                        DEVPOS(li+1,ci+29);DEVOUT('Prazo')
                                        DEVPOS(li+1,ci+36);DEVOUT('Desconto (%)')
                                        setcor(3)
                                        mcod_cart := car->codigo
                                        DEVPOS(li+2,ci+3);DEVOUT(car->codigo)
                                        @ li+2,ci+08 SAY car->cartao
                                        @ li+2,ci+30 SAY car->prazo PICT '999'
                                        @ li+2,ci+36 SAY car->desconto PICT '999.99'
                                        setcor(1)
                                        IF op_simnao('N',"Confirma os dados digitados:") = 'N'
                                                RESTSCREEN(01,00,24,79,tela1)
                                                GO TOP
                                                EXIT
                                        ENDIF
                                        IF LASTKEY()=ASC("s") .OR. LASTKEY()=ASC("S")
                                                IF BLOQARQ()
                                                        DELE
                                                        UNLOCK
                                                ELSE
                                                        atencao('Nao foi Possivel Acessar o Arquivo')
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        sr_getconnection():exec("DELETE FROM saccarta WHERE codigo = "+sr_cdbvalue(mcod_cart),,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                        *************
                                        SELE('car');ORDSETFOCUS(1)
                                        *************
                                        setcor(10);oconsprod := TBROWSEDB(0,0,f7lba-1,f7cba)
                                        ocolprod[1] := TBCOLUMNNEW('Cod.',{||car->codigo})
                                        ocolprod[2] := TBCOLUMNNEW('Descricao',{||car->cartao})
                                        ocolprod[3] := TBCOLUMNNEW('Sigla',{||car->sigla})
                                        ocolprod[4] := TBCOLUMNNEW('Prazo',{||TRANSFORM(car->prazo,'999')})
                                        ocolprod[5] := TBCOLUMNNEW('Desconto %',{||TRANSFORM(car->desconto,'999.99')})
                                        ocolprod[6] := TBCOLUMNNEW('Cod.Desp.',{||car->cod_forn})
                                        ocolprod[7] := TBCOLUMNNEW('Tipo Conta',{||TRANSFORM(car->tipo_conta,'@@R 9.99.9')})
                                        ocolprod[8] := TBCOLUMNNEW('Venda',{||IF(car->tipo_venda='A','Avista','Aprazo')})
                                        ocolprod[9] := TBCOLUMNNEW('Doc.TEF',{||SPACE(3)+car->tef})
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
                setcor(10);oconsprod := TBROWSEDB(0,0,f7lba-1,f7cba)
                ocolprod[1] := TBCOLUMNNEW('Cod.',{||car->codigo})
                ocolprod[2] := TBCOLUMNNEW('Descricao',{||car->cartao})
                ocolprod[3] := TBCOLUMNNEW('Sigla',{||car->sigla})
                ocolprod[4] := TBCOLUMNNEW('Prazo',{||TRANSFORM(car->prazo,'999')})
                ocolprod[5] := TBCOLUMNNEW('Desconto %',{||TRANSFORM(car->desconto,'999.99')})
                ocolprod[6] := TBCOLUMNNEW('Cod.Desp.',{||car->cod_forn})
                ocolprod[7] := TBCOLUMNNEW('Tipo Conta',{||TRANSFORM(car->tipo_conta,'@@R 9.99.9')})
                ocolprod[8] := TBCOLUMNNEW('Venda',{||IF(car->tipo_venda='A','Avista','Aprazo')})
                ocolprod[9] := TBCOLUMNNEW('Doc.TEF',{||SPACE(3)+car->tef})
                f7i:=0
                FOR f7i=1 TO LEN(ocolprod)
                        oconsprod:ADDCOLUMN(ocolprod[f7i])
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)
                oconsprod:FORCESTABLE()
        ELSE
                IF genkey(oconsprod,f7nkey,'op')
                        setcor(10);oconsprod := TBROWSEDB(0,0,f7lba-1,f7cba)
                        ocolprod[1] := TBCOLUMNNEW('Cod.',{||car->codigo})
                        ocolprod[2] := TBCOLUMNNEW('Descricao',{||car->cartao})
                        ocolprod[3] := TBCOLUMNNEW('Sigla',{||car->sigla})
                        ocolprod[4] := TBCOLUMNNEW('Prazo',{||TRANSFORM(car->prazo,'999')})
                        ocolprod[5] := TBCOLUMNNEW('Desconto %',{||TRANSFORM(car->desconto,'999.99')})
                        ocolprod[6] := TBCOLUMNNEW('Cod.Desp.',{||car->cod_forn})
                        ocolprod[7] := TBCOLUMNNEW('Tipo Conta',{||TRANSFORM(car->tipo_conta,'@@R 9.99.9')})
                        ocolprod[8] := TBCOLUMNNEW('Venda',{||IF(car->tipo_venda='A','Avista','Aprazo')})
                        ocolprod[9] := TBCOLUMNNEW('Doc.TEF',{||SPACE(3)+car->tef})
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
wvw_lclosewindow()
IF f7nkey == K_ESC
        RELEASE ALL
        RETURN mcod_cart
ELSE
        RELEASE ALL
        CLEAR GETS
        RETURN mcod_cart
ENDIF
RETURN NIL
******************************* f i m *********************************************
*********************************************************
* FUNCAO P/CONSULTAR, INCLUIR, ALTERAR E EXCLUIR FORMAS DE PAGAMENTOS
*********************************************************
MEMVAR getlist,nivel_acess,cod_operado

FUNCTION sac191()
*****************
LOCAL mprg:='SAC19',;
      f7tela,f7lba,f7cba,f7msele,f7morde,;
      oconsprod,ocolprod[3],f7i,f7nkey,li,ci,lb,cb,mcodcartao:=SPACE(3)
      
//IF ! ver_nivel(mprg,'FORMAS DE PAGAMENTOS ','15',nivel_acess,,'AMBIE')
//        RETURN NIL
//ENDIF
f7lci := f7cci := 0
f7lba := 09
f7cba := 29

li := 13
ci := 01
lb := 19
cb := 36

f7tela := SAVESCREEN(01,00,24,79)
op_tela(20,05,29,34," FORMAS DE PAGAMENTOS ")

f7msele := SELE()
f7morde := INDEXORD()
***********************************************
IF ! AbriArq('saccarta','car');RETURN NIL;ENDIF
SELE('car');ORDSETFOCUS(2)
GO TOP
***********************************************
setcor(10);oconsprod := TBROWSEDB(0,0,f7lba-1,f7cba)
ocolprod[1] := TBCOLUMNNEW('Descricao',{||car->cartao})
ocolprod[2] := TBCOLUMNNEW('Cod.',{||car->codigo})
ocolprod[3] := TBCOLUMNNEW('TEF',{||car->tef})
f7i:=0
FOR f7i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[f7i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        mensagem('<PGUP> <PGDN> <P>esquisa <I>nclusao <ENTER> Conf. <ESC>Retornar')
        f7nkey := 0
        botao(li,ci,lb,cb,,' Forma de Pagamento ')
*       WHILE f7nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                f7nkey := INKEY(0)
*       ENDDO
        IF f7nkey == K_ESC
                mcodcartao := 0
                EXIT
        ELSEIF f7nkey == K_ENTER
                mcodcartao := VAL(car->codigo)
                EXIT
        ELSE
                IF genkey(oconsprod,f7nkey,'op')
                        setcor(10);oconsprod := TBROWSEDB(0,0,f7lba-1,f7cba)
                        ocolprod[1] := TBCOLUMNNEW('Descricao',{||car->cartao})
                        ocolprod[2] := TBCOLUMNNEW('Cod.',{||car->codigo})
                        ocolprod[3] := TBCOLUMNNEW('TEF',{||car->tef})
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
wvw_lclosewindow()
IF f7nkey == K_ESC
        RELEASE ALL
        RETURN mcodcartao
ELSE
        RELEASE ALL
        CLEAR GETS
        RETURN mcodcartao
ENDIF
RETURN NIL
******************************* f i m *********************************************


