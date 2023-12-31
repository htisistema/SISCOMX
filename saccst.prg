#include "inkey.ch"              // constantes de codigos das teclas
*********************************************************
* FUNCAO P/CONSULTAR, INCLUIR, ALTERAR E EXCLUIR FORMAS DE PAGAMENTOS
*********************************************************
MEMVAR getlist,nivel_acess,cod_operado

FUNCTION saccst(mop,m_cst)
************************
LOCAL mprg:='SACCST',;
      f7lba,f7cba,f7msele,f7morde,;
      oconsprod,ocolprod[4],f7i,f7nkey,f7opcao,tela1,opcao,mreg,li,ci,lb,cb,;
      mdesc:=SPACE(30),mcst := SPACE(3),msittrib := ' ',cons_cartao:={}

IF ! ver_nivel(mprg,'CADASTRO DE CST (Codigo Situacao Tributaria)','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mcst := SPACE(4)
f7lba := 23
f7cba := 120

li := 25
ci := 01
lb := 29
cb := 110

f7tela := SAVESCREEN(01,00,24,79)
op_tela(0,00,36,120,memp_resa+SPACE(50)+" CST (Codigo Situacao Tributaria) ",,1)

f7msele := SELE()
f7morde := INDEXORD()
***********************************************
IF ! AbriArq('saccst','cst');RETURN NIL;ENDIF
SELE('cst')     //;ORDSETFOCUS(1)
IF m_cst # NIL
        IF ! cst->(DBSEEK(m_cst))
                GO TOP
        ENDIF
ENDIF
***********************************************
setcor(10);oconsprod := TBROWSEDB(0,0,f7lba-1,f7cba)
ocolprod[1] := TBCOLUMNNEW('CST',{||cst->cst})
ocolprod[2] := TBCOLUMNNEW('Descricao',{||SUBSTR(cst->descri,1,97)})
ocolprod[3] := TBCOLUMNNEW('ST',{||cst->sittrib})
ocolprod[4] := TBCOLUMNNEW('Emp.Simples',{||cst->simples})
f7i:=0
FOR f7i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[f7i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        exibi_prg(mprg)
        mensagem('<P>esquisa <I>nclusao <ENTER>p/Alterar e Excluir <ESC>Retornar')
        f7nkey := 0
        botao(li,ci,lb,cb,,' CST (Codigo Situacao Tributaria) ')
*       WHILE f7nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                f7nkey := INKEY(0)
*       ENDDO
        IF f7nkey == K_ESC
                mcst := SPACE(3)
                EXIT
        ELSEIF f7nkey = 73 .OR. f7nkey = 105
                tela1 := SAVESCREEN(01,00,24,79)
                WHILE .T.
                        botao(li,ci,lb,cb,,' Inclusao CST (Codigo Situacao Tributaria)')
                        mensagem('Digite o CST a incluido. [ESC] Abandona')
                        mcst := SPACE(4)
                        mdesc:=SPACE(120)
                        msittrib := ' '
                        DEVPOS(li+1,ci+1);DEVOUT('CST......:')
                        DEVPOS(li+2,ci+1);DEVOUT('Descricao:')
                        DEVPOS(li+3,ci+1);DEVOUT('Sit.Trib.:')
                        @ li+1,ci+12 GET mcst PICT "999" VALID IF(EMPTY(mcst),.F.,.T.)
                        READ
                        IF LASTKEY()=27
                                RESTSCREEN(01,00,24,79,tela1)
                                EXIT
                        ENDIF
                        IF cst->(DBSEEK(mcst))
                                atencao("Este CST ja existe!!!")
                                LOOP
                        ENDIF
                        setcor(3)
                        DEVPOS(li+1,ci+12);DEVOUT(mcst)
                        setcor(1)
                        mensagem("Digite o Descricao [ESC] Abandona.")
                        @ li+2,ci+12 GET mdesc VALID IF(EMPTY(mdesc),.F.,.T.)
                        @ li+3,ci+12 GET msittrib PICT '@!' VALID msittrib $ 'I,T,F,N,S' WHEN men_get(3,4,'[I]sento - [T]ributado - [N]ao Trib. - [F]Substituicao - [S]ervicos')
                        READ
                        IF LASTKEY()=27
                                LOOP
                        ENDIF
                        IF op_simnao('S',"Confirma os dados digitados:") = 'N'
                                LOOP
                        ELSE
                                sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,oper,sr_deleted) VALUES ("+sr_cdbvalue(mcst)+","+sr_cdbvalue(mdesc)+","+sr_cdbvalue(msittrib)+","+sr_cdbvalue(DATE())+","+sr_cdbvalue(cod_operado)+",' ')",,.f.)
                                sr_getconnection():exec("COMMIT",,.f.)
                        ENDIF
                        RESTSCREEN(01,00,24,79,tela1)
                        **************************
                        SELE('cst')     //;ORDSETFOCUS(1)
                        **************************
                        setcor(10);oconsprod := TBROWSEDB(0,0,f7lba-1,f7cba)
                        ocolprod[1] := TBCOLUMNNEW('CST',{||cst->cst})
                        ocolprod[2] := TBCOLUMNNEW('Descricao',{||SUBSTR(cst->descri,1,97)})
                        ocolprod[3] := TBCOLUMNNEW('ST',{||cst->sittrib})
                        ocolprod[4] := TBCOLUMNNEW('Emp.Simples',{||cst->simples})
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
                mcst := cst->cst
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
                                        DEVPOS(li+1,ci+1);DEVOUT('CST......:')
                                        DEVPOS(li+2,ci+1);DEVOUT('Descricao:')
                                        DEVPOS(li+3,ci+1);DEVOUT('ST.:')
                                        mdesc      := cst->descri
                                        msittrib   := cst->sittrib
                                        mensagem("Modifique o Nome do Cartao (20 Caract. Maximo). [ESC] Abandona.")
                                        @ li+1,ci+12 GET mcst WHEN EMPTY(mcst)
                                        @ li+2,ci+12 GET mdesc VALID IF(EMPTY(mdesc),.F.,.T.)
                                        @ li+3,ci+12 GET msittrib PICT '@!' VALID msittrib $ 'I,T,F,N,S' WHEN men_get(3,4,'[I]sento - [T]ributado - [N]ao Trib. - [F]Substituicao - [S]ervicos')
                                        READ
                                        IF LASTKEY()=27
                                                RESTSCREEN(01,00,24,79,tela1)
                                                GO TOP
                                                EXIT
                                        ENDIF
                                        IF op_simnao('S',"Confirma os dados digitados:") = 'N'
                                                LOOP
                                        ELSE
                                                sr_getconnection():exec("UPDATE saccst SET descri = "+sr_cdbvalue(mdesc)+",sittrib = "+sr_cdbvalue(msittrib)+",oper = "+sr_cdbvalue(cod_operado)+" WHERE cst = "+sr_cdbvalue(cst->cst),,.f.)
                                                sr_getconnection():exec("COMMIT",,.f.)
                                        ENDIF
                                        RESTSCREEN(01,00,24,79,tela1)
                                        **************************
                                        SELE('cst')     //;ORDSETFOCUS(1)
                                        **************************
                                        setcor(10);oconsprod := TBROWSEDB(0,0,f7lba-1,f7cba)
                                        ocolprod[1] := TBCOLUMNNEW('CST',{||cst->cst})
                                        ocolprod[2] := TBCOLUMNNEW('Descricao',{||SUBSTR(cst->descri,1,97)})
                                        ocolprod[3] := TBCOLUMNNEW('ST',{||cst->sittrib})
                                        ocolprod[4] := TBCOLUMNNEW('Emp.Simples',{||cst->simples})
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
                                        DEVPOS(li+1,ci+1);DEVOUT('CST......:')
                                        DEVPOS(li+2,ci+1);DEVOUT('Descricao:')
                                        DEVPOS(li+3,ci+1);DEVOUT('ST.:')
                                        setcor(3)
                                        DEVPOS(li+1,ci+12);DEVOUT(cst->cst)
                                        DEVPOS(li+2,ci+12);DEVOUT(cst->descri)
                                        DEVPOS(li+3,ci+12);DEVOUT(cst->sittrib)
                                        setcor(1)
                                        IF op_simnao('N',"Confirma os dados digitados:") = 'N'
                                                RESTSCREEN(01,00,24,79,tela1)
                                                GO TOP
                                                EXIT
                                        ENDIF
                                        IF LASTKEY()=ASC("s") .OR. LASTKEY()=ASC("S")
                                                sr_getconnection():exec("DELETE FROM saccst WHERE cst = "+sr_cdbvalue(cst->cst),,.f.)
                                                sr_getconnection():exec("COMMIT",,.f.)
                                        ENDIF
                                        **************************
                                        SELE('cst')     //;ORDSETFOCUS(1)
                                        **************************
                                        setcor(10);oconsprod := TBROWSEDB(0,0,f7lba-1,f7cba)
                                        ocolprod[1] := TBCOLUMNNEW('CST',{||cst->cst})
                                        ocolprod[2] := TBCOLUMNNEW('Descricao',{||SUBSTR(cst->descri,1,97)})
                                        ocolprod[3] := TBCOLUMNNEW('ST',{||cst->sittrib})
                                        ocolprod[4] := TBCOLUMNNEW('Emp.Simples',{||cst->simples})
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
                ocolprod[1] := TBCOLUMNNEW('CST',{||cst->cst})
                ocolprod[2] := TBCOLUMNNEW('Descricao',{||SUBSTR(cst->descri,1,97)})
                ocolprod[3] := TBCOLUMNNEW('ST',{||cst->sittrib})
                ocolprod[4] := TBCOLUMNNEW('Emp.Simples',{||cst->simples})
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
                        ocolprod[1] := TBCOLUMNNEW('CST',{||cst->cst})
                        ocolprod[2] := TBCOLUMNNEW('Descricao',{||SUBSTR(cst->descri,1,97)})
                        ocolprod[3] := TBCOLUMNNEW('ST',{||cst->sittrib})
                        ocolprod[4] := TBCOLUMNNEW('Emp.Simples',{||cst->simples})
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
        RETURN mcst
ELSE
        RELEASE ALL
        CLEAR GETS
        RETURN mcst
ENDIF
RETURN NIL
******************************* f i m *********************************************
