*************************
* CADASTRO DE ESTADOS
*************************

FUNCTION sac18
***************
LOCAL MPRG:='SAC18'
LOCAL tela1,tela,lci,cci,lba,cba,point,pode,msele,morde,men,;
      opcao,muf,mestado,mperc,f,m_uf:={}
MEMVAR nivel_acess,getlist
IF ! ver_nivel(mprg,'CADASTRO DE ALIQUOTA DE ICMS DOS ESTADOS','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
lci := cci := 00
lba := 12
cba := 44

men := SAVESCREEN(24,00,24,79)
op_tela(00,00,16,44," E S T A D O S ")
DEVPOS(lci+1,cci+1);DEVOUT(' UF ')
DEVPOS(lci+1,cci+6);DEVOUT(' Estado ')
DEVPOS(lci+1,cci+28);DEVOUT(' Imposto ')
pode=.t.
*---------------------------------------------
CLOSE ALL
IF ! AbriArq('SACUF','TABUF');RETURN NIL;ENDIF
*-------------------------------------------

************
SELE('tabuf');ORDSETFOCUS(1)
GO TOP
************
WHILE .T.
        mensagem('<I>nclusao  <A>lteracao  <E>xclusao  <ESC> Retorna')
        opcao := 'S'
        point=RECNO()
        FOR f=1 TO 11
                IF ! EOF()
                        setcor(3)
                        DEVPOS(lci+1+f,cci+2);DEVOUT(tabuf->uf)
                        DEVPOS(lci+1+f,cci+7);DEVOUT(tabuf->estado)
                        DEVPOS(lci+1+f,cci+30);DEVOUT(tabuf->percent)
                        setcor(1)
                        SKIP
                ELSE
                        setcor(3)
                        DEVPOS(lci+1+f,cci+2);DEVOUT(SPACE(27))
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
                CASE LASTKEY()=5 .AND. ! BOF()
                        SKIP -1
                        pode=.t.
                CASE LASTKEY()=24 .AND. (! EOF() .AND. pode=.t.)
                        SKIP
                CASE LASTKEY()=27
                        SET CURSOR ON
                        CLOSE tabuf
                        wvw_lclosewindow()
                        RETURN NIL
                CASE LASTKEY() = ASC('I') .OR. LASTKEY() = ASC('i')
                        SET CURSOR ON
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                mensagem('Digite a Sigla do Estado a ser Cadastrado')
                                muf := SPACE(2)
                                mestado :=  SPACE(20)
                                mperc :=  0
                                botao(lba+2,cci,lba+4,cba,,' INCLUSAO ')
                                @ lba+3,cci+2 GET muf PICT '@!' VALID ver_uf(muf)
                                READ

                                IF LASTKEY() = 27
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                IF EMPTY(muf)
                                        LOOP
                                ENDIF
                                *************
                                SEEK muf
                                *************
                                IF FOUND()
                                        atencao('Estado ja Cadastrado')
                                        LOOP
                                ENDIF
                                @ ROW(),cci+7 GET mestado PICT '@!'
                                @ ROW(),cci+30 GET mperc PICT '99.99'
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma Inclusao do ESTADO:')
                                IF opcao = 'S'
                                        IF ADIREG()
                                                REPLA uf WITH muf
                                                REPLA estado WITH mestado
                                                REPLA percent WITH mperc
                                                COMMIT
                                                UNLOCK
                                        ELSE
                                                atencao('Nao foi Possivel Acessar o Arquivo')
                                                LOOP
                                        ENDIF
                                        RESTSCREEN(01,00,24,79,tela1)
                                        ************
                                        GO TOP
                                        ************
                                        FOR f=1 TO 11
                                                IF ! EOF()
                                                        setcor(3)
                                                        DEVPOS(lci+1+f,cci+2);DEVOUT(tabuf->uf)
                                                        DEVPOS(lci+1+f,cci+7);DEVOUT(tabuf->estado)
                                                        DEVPOS(lci+1+f,cci+30);DEVOUT(tabuf->percent)
                                                        setcor(1)
                                                        SKIP
                                                ELSE
                                                        setcor(3)
                                                        DEVPOS(lci+1+f,cci+2);DEVOUT(SPACE(27))
                                                        setcor(1)
                                                ENDIF
                                        NEXT f
                                        LOOP
                                ELSE
                                        RESTSCREEN(01,00,24,79,tela1)
                                        LOOP
                                ENDIF
                        ENDDO

                CASE LASTKEY() = ASC('A') .OR. LASTKEY() = ASC('a')
                        SET CURSOR ON
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                mensagem('Digite a Sigla do Estado a ser Alterado')
                                muf := SPACE(2)
                                mestado :=  SPACE(20)
                                mperc :=  0
                                botao(lba+2,cci,lba+4,cba,,' Alteracao ')
                                @ lba+3,cci+2 GET muf PICT '@!' VALID ver_uf(muf)
                                READ

                                IF LASTKEY() = 27
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                IF EMPTY(muf)
                                        LOOP
                                ENDIF
                                *************
                                SEEK muf
                                *************
                                IF ! FOUND()
                                        atencao('Estado nao Cadastrado !!!')
                                        LOOP
                                ENDIF
                                IF ! BLOQREG()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF
                                mestado :=  tabuf->estado
                                mperc :=  tabuf->percent
                                @ lba+3,cci+7 GET mestado PICT '@!'
                                @ lba+3,cci+30 GET mperc PICT '99.99'
                                READ
                                IF LASTKEY() = 27
                                        UNLOCK
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma Alteracao do ESTADO:')
                                IF opcao = 'S'
                                        REPLA uf WITH muf
                                        REPLA estado WITH mestado
                                        REPLA percent WITH mperc
                                        COMMIT
                                        UNLOCK
                                        RESTSCREEN(01,00,24,79,tela1)
                                        ************
                                        GO TOP
                                        ************
                                        FOR f=1 TO 11
                                                IF ! EOF()
                                                        setcor(3)
                                                        DEVPOS(lci+1+f,cci+2);DEVOUT(tabuf->uf)
                                                        DEVPOS(lci+1+f,cci+7);DEVOUT(tabuf->estado)
                                                        DEVPOS(lci+1+f,cci+30);DEVOUT(tabuf->percent)
                                                        setcor(1)
                                                        SKIP
                                                ELSE
                                                        setcor(3)
                                                        DEVPOS(lci+1+f,cci+2);DEVOUT(SPACE(27))
                                                        setcor(1)
                                                ENDIF
                                        NEXT f
                                        LOOP
                                ELSE
                                        UNLOCK
                                        RESTSCREEN(01,00,24,79,tela1)
                                        LOOP
                                ENDIF
                        ENDDO
                CASE LASTKEY() = ASC('E') .OR. LASTKEY() = ASC('e')
                        SET CURSOR ON
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                mensagem('Digite a Sigla do Estado a ser Excluido')
                                muf := SPACE(2)
                                mestado :=  SPACE(20)
                                mperc :=  0
                                botao(lba+2,cci,lba+4,cba,,' Exclusao ')
                                @ lba+3,cci+2 GET muf PICT '@!' VALID ver_uf(muf)
                                READ

                                IF LASTKEY() = 27
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                IF EMPTY(muf)
                                        LOOP
                                ENDIF
                                *************
                                SEEK muf
                                *************
                                IF ! FOUND()
                                        atencao('Estado nao Cadastrado !!!')
                                        LOOP
                                ENDIF
                                IF ! BLOQARQ()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(lba+3,cci+7);DEVOUT(tabuf->estado)
                                DEVPOS(lba+3,cci+30);DEVOUTPICT(tabuf->percent,'99.99')
                                setcor(1)
                                opcao := op_simnao('N','Confirma Exclusao do ESTADO:')
                                IF LASTKEY() = 27
                                        UNLOCK
                                        LOOP
                                ENDIF
                                IF opcao = 'S'
                                        DELE
                                        COMMIT
                                        UNLOCK
                                        sr_getconnection():exec("DELETE FROM sacuf WHERE SR_DELETED = 'T'",,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                        RESTSCREEN(01,00,24,79,tela1)
                                        ************
                                        GO TOP
                                        ************
                                        FOR f=1 TO 08
                                                IF ! EOF()
                                                        setcor(3)
                                                        DEVPOS(lci+1+f,cci+2);DEVOUT(tabuf->uf)
                                                        DEVPOS(lci+1+f,cci+7);DEVOUT(tabuf->estado)
                                                        DEVPOS(lci+1+f,cci+30);DEVOUT(tabuf->percent)
                                                        setcor(1)
                                                        SKIP
                                                ELSE
                                                        setcor(3)
                                                        DEVPOS(lci+1+f,cci+2);DEVOUT(SPACE(27))
                                                        setcor(1)
                                                ENDIF
                                        NEXT f
                                        LOOP
                                ELSE
                                        UNLOCK
                                        RESTSCREEN(01,00,24,79,tela1)
                                        LOOP
                                ENDIF
                        ENDDO
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** f i m *******************************************

