#include 'INKEY.CH'
*********************************************************
* FUNCAO P/CONSULTAR, INCLUIR, ALTERAR E EXCLUIR EMPRESAS
*********************************************************
FUNCTION sacemp(mop)
********************
LOCAL mprg:='SACEMP',mtitulo:='MENU DE EMPRESAS',;
      f7tela,f7tela1,f7lci,f7cci,f7lba,f7cba,f7msele,f7morde,f7men,;
      oconsprod,ocolprod[4],f7i,f7nkey,f7opcao,tela1,opcao,li,ci,lb,cb,;
      mapre3,mrazao,mfantasia,mend,mbairro,mcidade,mcgc,mfone,;
      mdataini,mnome_cab,minsc,mcep,memail,mcam_db

MEMVAR mcodemp

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
f7lci := 04
f7cci := 06
f7lba := 19
f7cba := 74

li := 05
ci := 02
lb := 20
cb := 78

f7tela := SAVESCREEN(01,00,24,79)

f7msele := SELE()
f7morde := INDEXORD()
***********************************************
IF ! AbriArq('sacemp','emp');RETURN NIL;ENDIF
SELE('emp')
GO TOP
***********************************************
f7men := SAVESCREEN(24,00,24,79)

botao(f7lci-1,f7cci-1,f7lba,f7cba+1,,mtitulo,'*')
setcor(10);oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba)
ocolprod[1] := TBCOLUMNNEW('Codigo',{||emp->codemp})
ocolprod[2] := TBCOLUMNNEW('Empresa',{||emp->fantasia})
ocolprod[3] := TBCOLUMNNEW('CNPJ',{||emp->cnpj})
ocolprod[4] := TBCOLUMNNEW('Razao Social',{||emp->razao})
f7i:=0
FOR f7i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[f7i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        exibi_prg(mprg)
        IF mop = '*'
                mensagem('< > <P>esquisa <I>nclusao <ENTER>p/Alterar e Excluir <ESC>Retornar')
        ELSE
                mensagem('<> <PGUP> <PGDN> <P>esquisa <I>nclusao <ENTER> Conf. <ESC>Retornar')
        ENDIF
        f7nkey := 0
        WHILE f7nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                f7nkey := INKEY(0)
        ENDDO
        IF f7nkey == K_ESC
                mcodemp := 0
                EXIT
        ELSEIF f7nkey = 73 .OR. f7nkey = 105
                IF ! ver_nivel(mprg,'INCLUSAO DE EMPRESAS','1',nivel_acess,,'AMBIE')
                        RETURN NIL
                ENDIF
                tela1 := SAVESCREEN(01,00,24,79)
                WHILE .T.
                        mapre3    := SPACE(50)
                        mrazao    := SPACE(35)
                        mfantasia := SPACE(35)
                        mnome_cab := SPACE(1)
                        mend      := SPACE(30)
                        mbairro   := SPACE(20)
                        mcidade   := SPACE(20)
                        mcep      := SPACE(8)
                        mcgc      := SPACE(14)
                        minsc     := SPACE(14)
                        mfone     := mcam_db := SPACE(30)
                        memail    := SPACE(50)
                        mdataini := DATE()
                        ***********
                        SELE('emp');ORDSETFOCUS(1)
                        ***********
                        GO BOTT
                        mcodemp := STRZERO(VAL(emp->codemp)+1,3)
                        setcor(3)
                        botao(li,ci,lb,cb,,' Inclusao da Empresa ')
                        opcao = 'S'
                        setcor(1)
                        DEVPOS(li+1,ci+2);DEVOUT('Codigo da Empresa....:')
                        //DEVPOS(li+2,ci+2);DEVOUT('1a.Linha Apresentacao:')
                        //DEVPOS(li+3,ci+2);DEVOUT('2a.Linha Apresentacao:')
                        DEVPOS(li+4,ci+2);DEVOUT('3a.Linha Apresentacao:')
                        DEVPOS(li+5,ci+2);DEVOUT('Razao Social.........:')
                        DEVPOS(li+6,ci+2);DEVOUT('Nome Fantasia........:')
                        DEVPOS(li+7,ci+2);DEVOUT('Nome p/Cabecalho dos documentos [F]antasia [R]azao:')
                        DEVPOS(li+8,ci+2);DEVOUT('CNPJ.................:')
                        DEVPOS(li+8,ci+45);DEVOUT('Inscricao:')
                        DEVPOS(li+9,ci+2);DEVOUT('Endereco.............:')
                        DEVPOS(li+10,ci+2);DEVOUT('Bairro...............:')
                        DEVPOS(li+11,ci+2);DEVOUT('Cidade ..............:')
                        DEVPOS(li+11,ci+57);DEVOUT('CEP:')
                        DEVPOS(li+12,ci+2);DEVOUT('Telefones e Fax .....:')
                        DEVPOS(li+13,ci+2);DEVOUT('EMAIL................:')
                        DEVPOS(li+14,ci+2);DEVOUT('Nome DB..............:')
                        setcor(3)
                        DEVPOS(li+1,ci+25);DEVOUT(mcodemp)
                        setcor(1)
                        @ li+4,ci+25 GET mapre3
                        @ li+5,ci+25 GET mrazao VALID IF(EMPTY(mrazao),.F.,.T.)
                        @ li+6,ci+25 GET mfantasia VALID IF(EMPTY(mfantasia),.F.,.T.)
                        @ li+7,ci+54 GET mnome_cab PICT '@!' VALID mnome_cab $ 'F,R'
                        @ li+8,ci+25 GET mcgc PICT '@@r 99.999.999/9999-99' VALID IF(VCGC(mcgc),.T.,.F.) WHEN cod_operado = '999'
                        @ li+8,ci+56 GET minsc PICT '@!'
                        @ li+9,ci+25 GET mend
                        @ li+10,ci+25 GET mbairro
                        @ li+11,ci+25 GET mcidade
                        @ li+11,ci+62 GET mcep
                        @ li+12,ci+25 GET mfone
                        @ li+13,ci+25 GET memail
                        @ li+14,ci+25 GET mcam_db
                        READ
                        IF LASTKEY() = 27
                                SET CURSOR ON
                                RESTSCREEN(01,00,24,79,tela1)
                                RETURN .F.
                        ENDIF
                        setcor(1)
                        opcao := op_simnao('S','Confirma a Inclusao da Firma:')
                        IF opcao = 'N'
                                LOOP
                        ENDIF
                        ************
                        SELE('emp');ORDSETFOCUS(1)
                        ************
                        IF ! ADIREG()
                                atencao('Nao foi possivel bloquear o registro')
                                LOOP
                        ENDIF
                        emp->codemp   := mcodemp
                        emp->apre3    := mapre3
                        emp->razao    := mrazao
                        emp->fantasia := mfantasia
                        emp->nome_cab := mnome_cab
                        emp->endereco := mend
                        emp->bairro   := mbairro
                        emp->cidade   := mcidade
                        emp->cep      := mcep
                        emp->fone     := mfone
                        emp->email    := memail
                        emp->insc     := minsc
                        emp->dataini := mdataini
                        emp->cnpj    := ALLTRIM(mcgc)
                        emp->cam_db    := ALLTRIM(mcam_db)
                        DBCOMMIT()
                        DBUNLOCK()
                        *************
                        SELE('emp');ORDSETFOCUS(1)
                        *************
                        setcor(10);oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba)
                        ocolprod[1] := TBCOLUMNNEW('Codigo',{||emp->codemp})
                        ocolprod[2] := TBCOLUMNNEW('Empresa',{||emp->fantasia})
                        ocolprod[3] := TBCOLUMNNEW('CNPJ',{||emp->cnpj})
                        ocolprod[4] := TBCOLUMNNEW('Razao Social',{||emp->razao})
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
        ELSEIF f7nkey == K_ENTER
                mreg := RECNO()
                IF mop = '*'
                        f7opcao := mensagem1('Deseja <A>lterar <E>xcluir:','A','A,E')
                        IF LASTKEY() = 27
                                EXIT
                        ELSEIF f7opcao = 'A'
                                IF ! ver_nivel(mprg,'ALTERACAO DE EMPRESAS','1',nivel_acess,,'AMBIE')
                                        RETURN NIL
                                ENDIF
                                tela1 := SAVESCREEN(01,00,24,79)
                                CLEAR GETS
                                WHILE .T.
                                        mcodemp   :=   emp->codemp
                                        mapre3    :=   emp->apre3
                                        mrazao    :=   emp->razao
                                        mfantasia :=   emp->fantasia
                                        mnome_cab :=   emp->nome_cab
                                        mend      :=   emp->endereco
                                        mbairro   :=   emp->bairro
                                        mcidade   :=   emp->cidade
                                        mcep      :=   emp->cep
                                        mfone     :=   emp->fone
                                        memail    :=   emp->email
                                        minsc     :=   emp->insc
                                        mdataini  :=   emp->dataini
                                        mcgc      :=   emp->cnpj
                                        mcam_db   :=   emp->cam_db
                                        setcor(3)
                                        botao(li,ci,lb,cb,,' Alteracao da Empresa ')
                                        opcao = 'S'
                                        setcor(1)
                                        DEVPOS(li+1,ci+2);DEVOUT('Codigo da Empresa....:')
                                        //DEVPOS(li+2,ci+2);DEVOUT('1a.Linha Apresentacao:')
                                        //DEVPOS(li+3,ci+2);DEVOUT('2a.Linha Apresentacao:')
                                        DEVPOS(li+4,ci+2);DEVOUT('3a.Linha Apresentacao:')
                                        DEVPOS(li+5,ci+2);DEVOUT('Razao Social.........:')
                                        DEVPOS(li+6,ci+2);DEVOUT('Nome Fantasia........:')
                                        DEVPOS(li+7,ci+2);DEVOUT('Nome p/Cabecalho dos documentos [F]antasia [R]azao:')
                                        DEVPOS(li+8,ci+2);DEVOUT('CNPJ.................:')
                                        DEVPOS(li+8,ci+45);DEVOUT('Inscricao:')
                                        DEVPOS(li+9,ci+2);DEVOUT('Endereco.............:')
                                        DEVPOS(li+10,ci+2);DEVOUT('Bairro...............:')
                                        DEVPOS(li+11,ci+2);DEVOUT('Cidade ..............:')
                                        DEVPOS(li+11,ci+57);DEVOUT('CEP:')
                                        DEVPOS(li+12,ci+2);DEVOUT('Telefones e Fax .....:')
                                        DEVPOS(li+13,ci+2);DEVOUT('EMAIL................:')
                                        DEVPOS(li+14,ci+2);DEVOUT('Nome do DB...........:')
                                        setcor(3)
                                        DEVPOS(li+1,ci+25);DEVOUT(mcodemp)
                                        setcor(1)
                                        @ li+4,ci+25 GET mapre3
                                        @ li+5,ci+25 GET mrazao VALID IF(EMPTY(mrazao),.F.,.T.)
                                        @ li+6,ci+25 GET mfantasia VALID IF(EMPTY(mfantasia),.F.,.T.)
                                        @ li+7,ci+54 GET mnome_cab PICT '@!' VALID mnome_cab $ 'F,R'
                                        @ li+8,ci+25 GET mcgc PICT '@@r 99.999.999/9999-99' VALID IF(VCGC(mcgc),.T.,.F.) WHEN cod_operado = '999'
                                        @ li+8,ci+56 GET minsc PICT '@!'
                                        @ li+9,ci+25 GET mend
                                        @ li+10,ci+25 GET mbairro
                                        @ li+11,ci+25 GET mcidade
                                        @ li+11,ci+62 GET mcep
                                        @ li+12,ci+25 GET mfone
                                        @ li+13,ci+25 GET memail
                                        @ li+14,ci+25 GET mcam_db
                                        READ
                                        IF LASTKEY() = 27
                                                SET CURSOR ON
                                                RESTSCREEN(01,00,24,79,tela1)
                                                RETURN .F.
                                        ENDIF
                                        setcor(1)
                                        opcao := op_simnao('S','Confirma a Inclusao da Firma:')
                                        IF opcao = 'N'
                                                LOOP
                                        ENDIF
                                        IF ! BLOQREG()
                                                atencao('Nao foi possivel bloquear o registro')
                                                LOOP
                                        ENDIF
                                        emp->codemp   := mcodemp
                                        emp->apre3    := mapre3
                                        emp->razao    := mrazao
                                        emp->fantasia := mfantasia
                                        emp->nome_cab := mnome_cab
                                        emp->endereco := mend
                                        emp->bairro   := mbairro
                                        emp->cidade   := mcidade
                                        emp->cep      := mcep
                                        emp->fone     := mfone
                                        emp->email    := memail
                                        emp->insc     := minsc
                                        emp->dataini := mdataini
                                        emp->cnpj    := ALLTRIM(mcgc)
                                        emp->cam_db  := mcam_db
                                        DBCOMMIT()
                                        DBUNLOCK()
                                        setcor(10);oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba)
                                        ocolprod[1] := TBCOLUMNNEW('Codigo',{||emp->codemp})
                                        ocolprod[2] := TBCOLUMNNEW('Empresa',{||emp->fantasia})
                                        ocolprod[3] := TBCOLUMNNEW('CNPJ',{||emp->cnpj})
                                        ocolprod[4] := TBCOLUMNNEW('Razao Social',{||emp->razao})
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
                                IF ! ver_nivel(mprg,'EXCLUSAO DE OPERADORES','1',nivel_acess,,'AMBIE')
                                        RETURN NIL
                                ENDIF
                                tela1 := SAVESCREEN(01,00,24,79)
                                CLEAR GETS
                                WHILE .T.
                                        setcor(3)
                                        botao(li,ci,lb,cb,,' Alteracao da Empresa ')
                                        opcao = 'S'
                                        setcor(1)
                                        DEVPOS(li+1,ci+2);DEVOUT('Codigo da Empresa....:')
                                        //DEVPOS(li+2,ci+2);DEVOUT('1a.Linha Apresentacao:')
                                        //DEVPOS(li+3,ci+2);DEVOUT('2a.Linha Apresentacao:')
                                        DEVPOS(li+4,ci+2);DEVOUT('3a.Linha Apresentacao:')
                                        DEVPOS(li+5,ci+2);DEVOUT('Razao Social.........:')
                                        DEVPOS(li+6,ci+2);DEVOUT('Nome Fantasia........:')
                                        DEVPOS(li+7,ci+2);DEVOUT('Nome p/Cabecalho dos documentos [F]antasia [R]azao:')
                                        DEVPOS(li+8,ci+2);DEVOUT('CNPJ.................:')
                                        DEVPOS(li+8,ci+45);DEVOUT('Inscricao:')
                                        DEVPOS(li+9,ci+2);DEVOUT('Endereco.............:')
                                        DEVPOS(li+10,ci+2);DEVOUT('Bairro...............:')
                                        DEVPOS(li+11,ci+2);DEVOUT('Cidade ..............:')
                                        DEVPOS(li+11,ci+57);DEVOUT('CEP:')
                                        DEVPOS(li+12,ci+2);DEVOUT('Telefones e Fax .....:')
                                        DEVPOS(li+13,ci+2);DEVOUT('EMAIL................:')
                                        setcor(3)
                                        DEVPOS(li+1,ci+25);DEVOUT(emp->codemp)
                                        @ li+4,ci+25 SAY emp->apre3
                                        @ li+5,ci+25 SAY emp->razao
                                        @ li+6,ci+25 SAY emp->fantasia
                                        @ li+7,ci+54 SAY emp->nome_cab
                                        @ li+8,ci+25 SAY emp->cnpj PICT '@@r 99.999.999/9999-99'
                                        @ li+8,ci+56 SAY emp->insc PICT '@!'
                                        @ li+9,ci+25 SAY emp->endereco
                                        @ li+10,ci+25 SAY emp->bairro
                                        @ li+11,ci+25 SAY emp->cidade
                                        @ li+11,ci+62 SAY emp->cep
                                        @ li+12,ci+25 SAY emp->fone
                                        @ li+13,ci+25 SAY emp->email
                                        setcor(1)
                                        opcao := 'N'
                                        opcao := op_simnao('N','Deseja a Exclusao do Operador:')
                                        IF LASTKEY() = 27 .OR. opcao = 'N'
                                                RESTSCREEN(01,00,24,79,tela1)
                                                EXIT
                                        ENDIF
                                        IF opcao = 'S'
                                                IF ! BLOQREG()
                                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                                        LOOP
                                                ENDIF
                                                DELE
                                                DBCOMMIT()
                                                DBUNLOCK()
                                                sr_getconnection():exec("DELETE FROM sacemp WHERE SR_DELETED = 'T'",,.f.)
                                                sr_getconnection():exec("COMMIT",,.f.)
                                                LOOP
                                        ENDIF
                                        *************
                                        SELE('emp');ORDSETFOCUS(1)
                                        *************
                                        setcor(10);oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba)
                                        ocolprod[1] := TBCOLUMNNEW('Codigo',{||emp->codemp})
                                        ocolprod[2] := TBCOLUMNNEW('Empresa',{||emp->fantasia})
                                        ocolprod[3] := TBCOLUMNNEW('CNPJ',{||emp->cnpj})
                                        ocolprod[4] := TBCOLUMNNEW('Razao Social',{||emp->razao})
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
                *************
                SELE('emp');ORDSETFOCUS(1)
                *************
                setcor(10);oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba)
                ocolprod[1] := TBCOLUMNNEW('Codigo',{||emp->codemp})
                ocolprod[2] := TBCOLUMNNEW('Empresa',{||emp->fantasia})
                ocolprod[3] := TBCOLUMNNEW('CNPJ',{||emp->cnpj})
                ocolprod[4] := TBCOLUMNNEW('Razao Social',{||emp->razao})
                f7i:=0
                FOR f7i=1 TO LEN(ocolprod)
                        oconsprod:ADDCOLUMN(ocolprod[f7i])
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)
                oconsprod:FORCESTABLE()
        ELSE
                IF genkey(oconsprod,f7nkey,'emp')
                        *************
                        SELE('emp');ORDSETFOCUS(1)
                        *************
                        setcor(10);oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba)
                        ocolprod[1] := TBCOLUMNNEW('Codigo',{||emp->codemp})
                        ocolprod[2] := TBCOLUMNNEW('Empresa',{||emp->fantasia})
                        ocolprod[3] := TBCOLUMNNEW('CNPJ',{||emp->cnpj})
                        ocolprod[4] := TBCOLUMNNEW('Razao Social',{||emp->razao})
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
IF f7nkey == K_ESC
        RELEASE ALL
        RETURN mcodemp
ELSE
        RELEASE ALL
        CLEAR GETS
        RETURN mcodemp
ENDIF
RETURN NIL
******************************* f i m *********************************************

