****************************************
* DEBITO NO CONTA CORRENTE
****************************************
MEMVAR getlist,nivel_acess,mdata_sis,cod_operado

FUNCTION sac2cc12(mv,mdesc,mdoc,mbc)
****************
LOCAL MPRG:='SAC2CC12'
LOCAL lci,cci,lba,cba,opcao,mdata,mcod_banco,mdocumento,mdescricao,mvalor,;
      msaldo,mbanco,mn_banco,magencia,mc_c

IF ! ver_nivel(mprg,'DEBITO NA CONTA CORRENTE','145',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := cci := 0
lba := 07
cba := 60
*************************************
op_tela(10,10,17,70,' D E B I T O   C/C ','*')
WHILE .T.
        DEVPOS(lci,cci+1);DEVOUT('Cod. Banco:')
        DEVPOS(lci+1,cci+1);DEVOUT('No.Banco..:')
        DEVPOS(lci+1,cci+19);DEVOUT('Agencia:')
        DEVPOS(lci+1,cci+38);DEVOUT('C/C:')
        DEVPOS(lci+2,cci+1);DEVOUT('Data......:')
        DEVPOS(lci+3,cci+1);DEVOUT('Documento.:')
        DEVPOS(lci+4,cci+1);DEVOUT('Valor.....:')
        DEVPOS(lci+5,cci+1);DEVOUT('Descricao.:')
        IF mbc = NIL
                mcod_banco := 0
        ELSE
                mcod_banco := mbc
        ENDIF
        @ lci,cci+13 GET mcod_banco PICT '999' VALID IF(EMPTY(mcod_banco) .OR. mcod_banco > 12,.F.,.T.)
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
        DEVPOS(lci,cci+18);DEVOUT(mbanco)
        DEVPOS(lci+1,cci+13);DEVOUT((SELE())->n_banco)
        DEVPOS(lci+1,cci+28);DEVOUT((SELE())->agencia)
        DEVPOS(lci+1,cci+43);DEVOUT((SELE())->c_c)
        setcor(1)
        mdata := mdata_sis
        IF mdoc = NIL
                mdocumento := SPACE(10)
        ELSE
                mdocumento := mdoc
        ENDIF
        IF mv = NIL
                mvalor := 0
                mdescricao := SPACE(40)
        ELSE
                mvalor := mv
                mdescricao := mdesc+(SPACE(40-LEN(mdesc)))
        ENDIF
        @ lci+2,cci+13 GET mdata VALID IF(EMPTY(mdata),.F.,.T.)
        @ lci+3,cci+13 GET mdocumento PICT '@!' VALID IF(EMPTY(mdocumento),.F.,.T.)
        @ lci+4,cci+13 GET mvalor PICT '99,999,999.99' WHEN mv = NIL VALID IF(EMPTY(mvalor) .OR. mvalor < 0,.F.,.T.)
        @ lci+5,cci+13 GET mdescricao PICT '@!' VALID IF(EMPTY(mdescricao),.F.,.T.)
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF (SELE())->(DBSEEK(mdocumento+'D'))
                opcao := op_simnao('N','Este lancamento ja foi processado deseja continuar:')
                IF LASTKEY() = 27 .OR. opcao = 'N'
                        LOOP
                ENDIF
        ENDIF
        opcao := op_simnao('S','Confirma o lancamento DEBITO:')
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
                (SELE())->deb_cred  := 'D'
                (SELE())->valor     := mvalor
                (SELE())->descricao := mdescricao
                (SELE())->saldo     := msaldo - mvalor
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
