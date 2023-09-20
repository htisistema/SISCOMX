* EXCLUSAO DE CLIENTE
*********************
FUNCTION sac132
***************
LOCAL MPRG:='SAC132',tela,opcao
MEMVAR nivel_acess,mcod_cli,getlist
PRIVATE mcompras:=0
IF ! ver_nivel(mprg,'EXCLUSAO DE CLIENTES','1',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
tela:=SAVESCREEN(00,00,24,79)
WHILE .T.
        mcompras := 0
        opcao := 'S'
        limpa(06,00,22,79)
        botao(07,00,21,79,,' Exclusao de CLIENTES ','*')
        DEVPOS(07,02);DEVOUT(' Cliente ')
        DEVPOS(08,01);DEVOUT('Codigo....:')
        DEVPOS(08,19);DEVOUT('Data Cadastro.:')
        DEVPOS(09,01);DEVOUT('R.Social..:')
        DEVPOS(10,01);DEVOUT('Fantasia..:')

        DEVPOS(12,02);DEVOUT(' Logradouro ')
        DEVPOS(13,01);DEVOUT('Endereco..:')
        DEVPOS(14,01);DEVOUT('Bairro....:')
        DEVPOS(15,01);DEVOUT('Cidade....:')
        DEVPOS(15,35);DEVOUT('UF...:')
        DEVPOS(16,01);DEVOUT('CEP.......:')

        DEVPOS(18,02);DEVOUT(' Telefones ')
        DEVPOS(19,01);DEVOUT('Fone..:')
        DEVPOS(19,24);DEVOUT('Fone.:')
        DEVPOS(20,01);DEVOUT('Fax...:')

        DEVPOS(07,50);DEVOUT(' Identidicacao ')
        DEVPOS(08,50);DEVOUT('CGC...:')
        DEVPOS(09,50);DEVOUT('Insc..:')
        DEVPOS(10,50);DEVOUT('CPF...:')

        DEVPOS(12,52);DEVOUT(' Informacoes ')
        DEVPOS(13,52);DEVOUT('Comprador.:')
        DEVPOS(14,52);DEVOUT('Prazo Pag.:')
        DEVPOS(15,52);DEVOUT('Contato...:')
        DEVPOS(16,52);DEVOUT('Area......:')
        DEVPOS(17,52);DEVOUT('Limite....:')

        DEVPOS(19,49);DEVOUT(' Observacao ')
        ****************
        SELE('cli');ORDSETFOCUS(2)
        ****************
        setcor(3)
        DEVPOS(08,13);DEVOUT(STR(mcod_cli))
        DEVPOS(08,35);DEVOUT(cli->data_cad)
        DEVPOS(09,13);DEVOUT(cli->razao)
        DEVPOS(10,13);DEVOUT(cli->nome)

        DEVPOS(13,13);DEVOUT(cli->endereco)
        DEVPOS(14,13);DEVOUT(cli->bairro)
        DEVPOS(15,13);DEVOUT(cli->cidade)
        DEVPOS(15,42);DEVOUT(cli->uf)
        DEVPOS(16,13);DEVOUT(cli->cep)

        DEVPOS(19,09);DEVOUT(cli->tel1)
        DEVPOS(19,31);DEVOUT(cli->tel2)
        DEVPOS(20,09);DEVOUT(cli->fax)

        DEVPOS(08,58);DEVOUTPICT(cli->cgc,'@@R 99.999.999/9999-99')
        DEVPOS(09,58);DEVOUT(cli->insc)
        DEVPOS(10,58);DEVOUTPICT(cli->cpf,'@@R 999.999.999-99')

        DEVPOS(13,64);DEVOUT(cli->comprado)
        DEVPOS(14,64);DEVOUTPICT(cli->prazo_pag,'@R 99-99-99')
        DEVPOS(15,64);DEVOUT(cli->contato)
        DEVPOS(16,64);DEVOUT(cli->area)
        DEVPOS(17,64);DEVOUTPICT(cli->limite,'999,999,999.99')

        DEVPOS(20,48);DEVOUT(cli->obs)
        setcor(1)
        mcompras := ver_compras(cli->cod_cli)
        IF ! EMPTY(mcompras)
                atencao('Este Cliente estar com Documento a Receber no Valor Total de R$: '+TRANSFORM(mcompras,'999,999.99')+' nao pode ser EXCLUIDO')
                EXIT
        ENDIF
        opcao := op_simnao('N','Confirma a Exclusao do Cliente [s/N]:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                EXIT
        ELSE
                sr_getconnection():exec('INSERT INTO saclog (data_sis,data,hora,tipo,cod_cli,aut_oper,cod_oper,modulo,descri,cod_aut,terminal'+;
                        ',SR_DELETED )'+;
                        ' VALUES ('+;
                        sr_cdbvalue(DATE()       )+','+; //1
                        sr_cdbvalue(mdata_sis    )+','+; //2
                        sr_cdbvalue(TIME()       )+','+; //3
                        sr_cdbvalue('EXCLU.CLI.' )+','+; //4
                        sr_cdbvalue(cli->cod_cli )+','+; //6
                        sr_cdbvalue(cod_operado  )+','+; //7
                        sr_cdbvalue(cod_operado  )+','+; //8
                        sr_cdbvalue(mprg         )+','+;//9
                        sr_cdbvalue('EXCLUSAO DO CLIENTE COD.:'+STR(cli->cod_cli,5)+' '+SUBSTR(cli->razao,1,25))+','+;//10
                        sr_cdbvalue(cod_operado  )+','+; //11
                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                        sr_cdbvalue(' ')+')',,.f.)
                sr_getconnection():exec("DELETE FROM saccli WHERE cod_cli = "+sr_cdbvalue(cli->cod_cli),,.f.)
                sr_getconnection():exec("DELETE FROM saccli WHERE SR_DELETED = 'T'",,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                EXIT
        ENDIF
ENDDO
RESTSCREEN(00,00,24,79,tela)
RETURN NIL
*********************** f i m ************************************

