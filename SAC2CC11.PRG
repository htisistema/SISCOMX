* CREDITO NO CONTA CORRENTE
****************************************
MEMVAR getlist,nivel_acess,mdata_sis,cod_operado

FUNCTION sac2cc11(mv,mdesc)
****************
LOCAL MPRG:='SAC2CC11',;
      opcao,mdata,mcod_banco,mdocumento,mdescricao,mvalor,;
      msaldo,mc_c,magencia,mn_banco,mbanco

IF ! ver_nivel(mprg,'CREDITO NA CONTA CORRENTE','145',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
op_tela(10,10,17,70,' C R E D I T O   C/C ','*')
WHILE .T.
        exibi_prg(mprg)
        DEVPOS(0,0);DEVOUT('Cod. Banco:')
        DEVPOS(1,0);DEVOUT('No.Banco..:')
        DEVPOS(1,18);DEVOUT('Agencia:')
        DEVPOS(1,37);DEVOUT('C/C:')
        DEVPOS(2,0);DEVOUT('Data......:')
        DEVPOS(3,0);DEVOUT('Documento.:')
        DEVPOS(4,0);DEVOUT('Valor.....:')
        DEVPOS(5,0);DEVOUT('Descricao.:')
        mcod_banco := 0
        @ 0,12 GET mcod_banco PICT '999' VALID IF(EMPTY(mcod_banco) .OR. mcod_banco > 12,.F.,.T.)
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        ('ban'+ALLTRIM(TRANSFORM(mcod_banco,'99')))->(DBCLOSEAREA())
        IF ! AbriArq('sacban'+ALLTRIM(TRANSFORM(mcod_banco,'99')),'ban'+ALLTRIM(TRANSFORM(mcod_banco,'99')));RETURN NIL;ENDIF
        **************
        SELE('ban'+ALLTRIM(TRANSFORM(mcod_banco,'99')));ORDSETFOCUS(1)
        **************
        IF LASTREC() = 0
                atencao('Este Banco nao esta Cadastrado')
                LOOP
        ENDIF
        GO TOP
        mbanco   := (SELE())->banco
        mn_banco := (SELE())->n_banco
        magencia := (SELE())->agencia
        mc_c     := (SELE())->c_c
        setcor(3)
        DEVPOS(0,17);DEVOUT(mbanco)
        DEVPOS(1,12);DEVOUT((SELE())->n_banco)
        DEVPOS(1,27);DEVOUT((SELE())->agencia)
        DEVPOS(1,42);DEVOUT((SELE())->c_c)
        setcor(1)
        mdata := mdata_sis
        mdocumento := SPACE(10)
        IF mv = NIL
                mvalor := 0
                mdescricao := SPACE(40)
        ELSE
                mvalor := mv
                mdescricao := mdesc+(SPACE(40-LEN(mdesc)))
        ENDIF
        @ 2,12 GET mdata VALID IF(EMPTY(mdata),.F.,.T.)
        @ 3,12 GET mdocumento PICT '@!' VALID IF(EMPTY(mdocumento),.F.,.T.)
        @ 4,12 GET mvalor PICT '99,999,999.99' WHEN mv = NIL VALID IF(EMPTY(mvalor) .OR. mvalor < 0,.F.,.T.)
        @ 5,12 GET mdescricao PICT '@!' VALID IF(EMPTY(mdescricao),.F.,.T.)
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF (SELE())->(DBSEEK(mdocumento+'C'))
                opcao := op_simnao('N','Este lancamento ja foi processado deseja continuar:')
                IF LASTKEY() = 27 .OR. opcao = 'N'
                        LOOP
                ENDIF
        ENDIF
        opcao := op_simnao('S','Confirma o lancamento CREDITO:')
        IF opcao = 'N'
                LOOP
        ENDIF
        *****************************
        SELE('ban'+ALLTRIM(TRANSFORM(mcod_banco,'99')));ORDLISTCLEAR()
        GO BOTT
        *****************************
        msaldo := (SELE())->saldo
        IF mdata < (SELE())->data
                atencao('Este lancamento nao pode ser efetuado com esta data que e menor que a data do ultimo lancamento')
                LOOP
        ENDIF
        IF ADIREG()
                (SELE())->data      := mdata
                (SELE())->cod_banc  := STRZERO(mcod_banco,3)
                (SELE())->banco     := mbanco
                (SELE())->n_banco   := mn_banco
                (SELE())->agencia   := magencia
                (SELE())->c_c       := mc_c
                (SELE())->documento := mdocumento
                (SELE())->deb_cred  := 'C'
                (SELE())->valor     := mvalor
                (SELE())->descricao := mdescricao
                (SELE())->saldo     := msaldo + mvalor
                (SELE())->operador  := cod_operado
                DBCOMMIT()
                DBUNLOCK()
        ELSE
                atencao('Nao foi Possivel Acessar o Arquivo')
                LOOP
        ENDIF
        IF mv <> NIL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL

