#include "inkey.ch"              // constantes de codigos das teclas
*********************************************************
* FUNCAO P/CONSULTAR, INCLUIR, ALTERAR E EXCLUIR PROFISSAO
*********************************************************
MEMVAR getlist,nivel_acess,cod_operado

FUNCTION sacprofi(mop)
*****************
LOCAL mprg:='SACPROFI',mtitulo:='CADASTRO DE PROFISSOES/RAMO DE ATIVIDADE',;
      f7tela,f7tela1,f7lci,f7cci,f7lba,f7cba,f7msele,f7morde,f7men,;
      oconsprod,ocolprod[2],f7i,f7nkey,f7opcao,mcod_prof,mprofi,;
      tela1,opcao
MEMVAR mcod_profi
IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
f7lci := 00
f7cci := 01
f7lba := 17
f7cba := 41

op_tela(00,10,17,52,mtitulo)
f7msele := SELE()
f7morde := INDEXORD()
***********************************************
IF ! AbriArq('sacprofi','profi');RETURN NIL;ENDIF
SELE('profi');ORDSETFOCUS(1)
***********************************************
setcor(10);oconsprod := TBROWSEDB(f7lci,f7cci,f7lba,f7cba)
ocolprod[1] := TBCOLUMNNEW('Profissao/Ramo de Atividade',{||profi->profi})
ocolprod[2] := TBCOLUMNNEW('Codigo',{||profi->cod_profi})
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
        WHILE f7nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                f7nkey := INKEY(0)
        ENDDO
        IF f7nkey == K_ESC
                mcod_profi := ' '
                EXIT
        ELSEIF f7nkey = 73 .OR. f7nkey = 105
                op_tela(18,10,21,52,' Inclusao da Profissao/Ramo de Atividade ')
                WHILE .T.
                        *************
                        SELE('profi');ORDSETFOCUS(2)
                        GO BOTT
                        *************
                        mensagem('Digite o Nome da Profissao - <ESC> p/Retornar')
                        mcod_profi := STRZERO(VAL(profi->cod_profi)+1,5)
                        mprofi := SPACE(30)
                        DEVPOS(01,f7cci);DEVOUT('Cod.')
                        DEVPOS(01,f7cci+7);DEVOUT('Profissao/Ramo de Atividade')
                        setcor(3)
                        DEVPOS(02,f7cci);DEVOUT(mcod_profi)
                        setcor(1)

                        @ 02,f7cci+7 GET mprofi PICT '@!'    //VALID ver_Profissao(mprofi,.T.)
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mprofi)
                                wvw_lclosewindow()
                                GO TOP
                                EXIT
                        ENDIF
                        opcao := 'S'
                        opcao := op_simnao('S','Confirma Inclusao:')
                        IF opcao = 'S'
                                IF ADIREG()
                                        profi-> cod_profi := mcod_profi
                                        profi-> profi     := mprofi
                                        COMMIT
                                        UNLOCK
                                        mreg := RECNO()
                                        wvw_lclosewindow()
                                        *************
                                        SELE('profi');ORDSETFOCUS(1)
                                        GO mreg
                                        *************
                                        setcor(10);oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba)
                                        ocolprod[1] := TBCOLUMNNEW('Profissao/Ramo de Atividade',{||profi->profi})
                                        ocolprod[2] := TBCOLUMNNEW('Codigo',{||profi->cod_profi})
                                        f7i:=0
                                        FOR f7i=1 TO LEN(ocolprod)
                                                oconsprod:ADDCOLUMN(ocolprod[f7i])
                                        NEXT
                                        oconsprod:HEADSEP := CHR(196)
                                        oconsprod:COLSEP := CHR(179)
                                        oconsprod:FORCESTABLE()
                                        EXIT
                                ELSE
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        ORDSETFOCUS(3)
                                        LOOP
                                ENDIF
                        ENDIF
                ENDDO
        ELSEIF f7nkey == K_ENTER
                mcod_profi := VAL(profi->cod_profi)
                mprofi    := profi->profi
                IF mop = '*'
                        f7opcao := mensagem1('Deseja <A>lterar <E>xcluir:','A','A,E')
                        IF LASTKEY() = 27
                                EXIT
                        ELSEIF f7opcao = 'A'
                                op_tela(18,10,21,52,' Alteracao da Profissao/Ramo de Atividade ')
                                WHILE .T.
                                        mensagem('Digite o Codigo da Despesa a ser Alterado - <ESC> p/Retornar')
                                        DEVPOS(01,f7cci);DEVOUT('Cod.')
                                        DEVPOS(01,f7cci+7);DEVOUT('Profissao/Ramo de Atividade')
                                        setcor(3)
                                        DEVPOS(02,f7cci);DEVOUT(mcod_profi)
                                        setcor(1)
                                        @ 02,f7cci+7 GET mprofi PICT '@!'
                                        READ
                                        IF LASTKEY() = 27
                                                wvw_lclosewindow()
                                                GO TOP
                                                EXIT
                                        ENDIF
                                        opcao := op_simnao('S','Confirma Alteracao:')
                                        IF opcao = 'S'
                                                IF ! BLOQREG()
                                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                                        LOOP
                                                ENDIF
                                                profi->profi := mprofi
                                                COMMIT
                                                UNLOCK
                                                SELE('profi');ORDSETFOCUS(1)
                                                wvw_lclosewindow()
                                                EXIT
                                        ENDIF
                                ENDDO
                        ELSEIF f7opcao = 'E'
                                op_tela(18,10,21,52,' Exclusao da Profissao/Ramo de Atividade ')
                                WHILE .T.
                                        mensagem('Digite o Codigo da Despesa a ser Excluida - <ESC> p/Retornar')
                                        DEVPOS(01,f7cci);DEVOUT('Cod.')
                                        DEVPOS(01,f7cci+7);DEVOUT('Profissao/Ramo de Atividade')
                                        setcor(3)
                                        DEVPOS(02,f7cci);DEVOUT(profi->cod_profi)
                                        DEVPOS(02,f7cci+7);DEVOUT(profi->profi)
                                        setcor(1)
                                        opcao := op_simnao('N','Confirma Exclusao:')
                                        IF LASTKEY() = 27
                                                UNLOCK
                                                LOOP
                                        ENDIF
                                        IF opcao = 'S'
                                                IF ! BLOQARQ()
                                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                                        LOOP
                                                ENDIF
                                                DELE
                                                COMMIT
                                                UNLOCK
                                                sr_getconnection():exec("DELETE FROM sacprofi WHERE SR_DELETED = 'T'",,.f.)
                                                sr_getconnection():exec("COMMIT",,.f.)
                                                RESTSCREEN(01,00,24,79,tela1)
                                                setcor(10);oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba)
                                                ocolprod[1] := TBCOLUMNNEW('Profissao',{||profi->profi})
                                                ocolprod[2] := TBCOLUMNNEW('Codigo',{||profi->cod_profi})
                                                f7i:=0
                                                FOR f7i=1 TO LEN(ocolprod)
                                                        oconsprod:ADDCOLUMN(ocolprod[f7i])
                                                NEXT
                                                oconsprod:HEADSEP := CHR(196)
                                                oconsprod:COLSEP := CHR(179)
                                                oconsprod:FORCESTABLE()
                                                wvw_lclosewindow()
                                                EXIT
                                        ENDIF
                                ENDDO
                        ENDIF
                ELSE
                        CLEAR GETS
                        EXIT
                ENDIF
                setcor(10);oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba)
                ocolprod[1] := TBCOLUMNNEW('Profissao',{||profi->profi})
                ocolprod[2] := TBCOLUMNNEW('Codigo',{||profi->cod_profi})
                f7i:=0
                FOR f7i=1 TO LEN(ocolprod)
                        oconsprod:ADDCOLUMN(ocolprod[f7i])
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)
                oconsprod:FORCESTABLE()
        ELSE
                IF genkey(oconsprod,f7nkey,'profi')
                        setcor(10);oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba)
                        ocolprod[1] := TBCOLUMNNEW('Profissao',{||profi->profi})
                        ocolprod[2] := TBCOLUMNNEW('Codigo',{||profi->cod_profi})
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
        RETURN mcod_profi
ELSE
        RELEASE ALL
        CLEAR GETS
        RETURN mcod_profi
ENDIF
RETURN NIL
******************************* f i m *********************************************

