/*
**********************************************************
* FUNCAO P/CONSULTA TELEFONES DE CLIENTES E FORNECEDORES
**********************************************************
FUNCTION sac4tel(mtelefone)
****************************
LOCAL mprg:='SAC4TEL',;
      lci:=10,cci:=05,lba:=20,cba:=75,opcao:=' ',mtela,mtel_cf,mcli:=' ',mforn:=' '

mtela := SAVESCREEN(00,00,24,79)
IF mtelefone <> NIL
        mtel_cf := mtelefone
ELSE
        mtel_cf := SPACE(14)
ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
WHILE .T.
        exibi_prg(mprg)
        opcao := 'S'
        botao(lci,cci,lba,cba,,' Consulta de Telefones < CLIENTES E FORNECEDORES > ')
        DEVPOS(lci+1,cci+1);DEVOUT('Digite o Telefone:')
        @ lci+2,cci+1 TO lci+2,cba-1
        @ lci+1,cci+20 GET mtel_cf WHEN mtelefone = NIL
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,mtela)
                RETURN NIL
        ENDIF
        ***************************
        SELE('cli');ORDSETFOCUS(1)
        ***************************
        LOCATE FOR RTRIM(mtel_cf) $ cli->tel1 .OR. RTRIM(mtel_cf) $ cli->tel2 .OR. RTRIM(mtel_cf) $ cli->fax

        IF ! FOUND()
                mcli := 'N'
        ELSE
                janela(lci+3,cci,' Telefone de CLIENTE ','*','*')
                DEVPOS(lci+4,cci+1);DEVOUT('CLIENTE..........:')
                DEVPOS(lci+5,cci+1);DEVOUT('Endereco.........:')
                DEVPOS(lci+6,cci+1);DEVOUT('Bairro...........:')
                DEVPOS(lci+7,cci+1);DEVOUT('Telefone 1.......:')
                DEVPOS(lci+8,cci+1);DEVOUT('Telefone 2.......:')
                DEVPOS(lci+9,cci+1);DEVOUT('FAX..............:')
                setcor(3)
                DEVPOS(lci+4,cci+20);DEVOUT(STR(cli->cod_cli,5)+' - '+cli->razao)
                DEVPOS(lci+5,cci+20);DEVOUT(cli->endereco)
                DEVPOS(lci+6,cci+20);DEVOUT(cli->bairro)
                DEVPOS(lci+7,cci+20);DEVOUT(cli->tel1)
                DEVPOS(lci+8,cci+20);DEVOUT(cli->tel2)
                DEVPOS(lci+9,cci+20);DEVOUT(cli->fax)
                setcor(1)
                mensagem('Pressione qualquer tecla p/continuar')
                INKEY(0)
                LOOP
        ENDIF
        ***************************
        SELE('forn');ORDSETFOCUS(1)
        ***************************
        LOCATE FOR RTRIM(mtel_cf) $ forn->tel1 .OR. RTRIM(mtel_cf) $ forn->tel2 .OR. RTRIM(mtel_cf) $ forn->fax

        IF ! FOUND()
                mforn := 'N'
        ELSE
                janela(lci+3,cci,' Telefone de FORNECEDOR ','*','*')
                DEVPOS(lci+4,cci+1);DEVOUT('FORNECEDOR.......:')
                DEVPOS(lci+5,cci+1);DEVOUT('Endereco.........:')
                DEVPOS(lci+6,cci+1);DEVOUT('Bairro...........:')
                DEVPOS(lci+7,cci+1);DEVOUT('Telefone 1.......:')
                DEVPOS(lci+8,cci+1);DEVOUT('Telefone 2.......:')
                DEVPOS(lci+9,cci+1);DEVOUT('FAX..............:')
                setcor(3)
                DEVPOS(lci+4,cci+20);DEVOUT(forn->cod_forn+' - '+forn->razao)
                DEVPOS(lci+5,cci+20);DEVOUT(forn->endereco)
                DEVPOS(lci+6,cci+20);DEVOUT(forn->bairro)
                DEVPOS(lci+7,cci+20);DEVOUT(forn->tel1)
                DEVPOS(lci+8,cci+20);DEVOUT(forn->tel2)
                DEVPOS(lci+9,cci+20);DEVOUT(forn->fax)
                setcor(1)
                mensagem('Pressione qualquer tecla p/continuar')
                INKEY(0)
                LOOP
        ENDIF
        IF mforn = 'N' .AND. mcli = 'N'
                atencao('Nao foi possivel encontra este TELEFONE em nosso arquivos de CLIENTES e FORNECEDOR')
                LOOP
        ENDIF
ENDDO
RETURN NIL
*/



