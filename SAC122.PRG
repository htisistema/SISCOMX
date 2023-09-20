*************************
* EXCLUSAO DE Transportadora
*************************

FUNCTION sac122
***************
LOCAL MPRG:='SAC122',;
      tela,opcao,lci,cci,lba,cba,mcod_tran
MEMVAR nivel_acess,getlist
IF ! ver_nivel(mprg,'EXCLUSAO DE TRANSPORTADORA','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := 05
cci := 00
lba := 23
cba := 79

tela:=SAVESCREEN(lci,cci,lba,cba)

WHILE .T.
        opcao := 'S'
        limpa(06,00,22,79)

        botao(06,00,22,79,,' Exclusao ')
        DEVPOS(06,02);DEVOUT(' Transportadora ')
        DEVPOS(07,01);DEVOUT('Codigo....:')
        DEVPOS(07,19);DEVOUT('Data Cadastro.:')
        DEVPOS(08,01);DEVOUT('R.Social..:')

        DEVPOS(10,02);DEVOUT(' Logradouro ')

        DEVPOS(11,01);DEVOUT('Endereco..:')
        DEVPOS(12,01);DEVOUT('Bairro....:')
        DEVPOS(13,01);DEVOUT('Cidade....:')
        DEVPOS(13,35);DEVOUT('UF...:')
        DEVPOS(14,01);DEVOUT('CEP.......:')
        DEVPOS(14,35);DEVOUT('C.P..:')

        DEVPOS(16,02);DEVOUT(' Telefones ')

        DEVPOS(17,01);DEVOUT('Fone..:')
        DEVPOS(17,24);DEVOUT('Fone.:')
        DEVPOS(18,01);DEVOUT('Fax...:')

        DEVPOS(20,08);DEVOUT(' Observacao ')

        DEVPOS(06,52);DEVOUT(' Identidicacao ')
        DEVPOS(07,51);DEVOUT('CGC...:')
        DEVPOS(08,51);DEVOUT('Insc..:')

        DEVPOS(11,53);DEVOUT(' Cobranca ')
        DEVPOS(12,52);DEVOUT('Banco.....:')
        DEVPOS(13,52);DEVOUT('Carteira..:')
        DEVPOS(14,52);DEVOUT('Prazo Pag.:')

        DEVPOS(17,50);DEVOUT(' Contatos ')
        DEVPOS(18,49);DEVOUT('Gerente.....:')
        DEVPOS(19,49);DEVOUT('Faturamento.:')
        DEVPOS(20,49);DEVOUT('Cobranca....:')
        DEVPOS(21,49);DEVOUT('Vendedor....:')

        setcor(3)
        DEVPOS(07,13);DEVOUT(mcod_tran)
        DEVPOS(07,35);DEVOUT(tran->data_cad)
        DEVPOS(08,13);DEVOUT(tran->razao)

        DEVPOS(11,13);DEVOUT(tran->endereco)
        DEVPOS(12,13);DEVOUT(tran->bairro)
        DEVPOS(13,13);DEVOUT(tran->cidade)
        DEVPOS(13,42);DEVOUT(tran->uf)
        DEVPOS(14,13);DEVOUT(tran->cep)
        DEVPOS(14,42);DEVOUT(tran->cpostal)

        DEVPOS(17,09);DEVOUT(tran->tel1)
        DEVPOS(17,31);DEVOUT(tran->tel2)
        DEVPOS(18,09);DEVOUT(tran->fax)

        DEVPOS(07,59);DEVOUTPICT(tran->cgc,'99.999.999/9999-99')
        DEVPOS(08,59);DEVOUT(tran->insc)

        DEVPOS(12,63);DEVOUT(tran->banco)
        DEVPOS(13,63);DEVOUT(tran->carteira)
        DEVPOS(14,63);DEVOUTPICT(tran->prazo_pag,'@R 99')

        DEVPOS(18,62);DEVOUT(tran->ct_gerente)
        DEVPOS(19,62);DEVOUT(tran->ct_fatura)
        DEVPOS(20,62);DEVOUT(tran->ct_cobran)
        DEVPOS(21,62);DEVOUT(tran->ct_vendedo)

        DEVPOS(21,08);DEVOUT(tran->obs)
        setcor(1)
        opcao := op_simnao('N','Confirma Exclusao do Transportadora [S/n]:')
        RESTSCREEN(01,00,24,79,tela)
        IF LASTKEY() = 27 .OR. opcao = 'N'
                RETURN NIL
        ELSE
                DELE
                COMMIT
                UNLOCK
                RETURN NIL
        ENDIF
ENDDO
RETURN NIL
*********************** f i m ************************************

