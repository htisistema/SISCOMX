*************************
* CADASTRO DE CLIENTE
*************************
MEMVAR getlist

FUNCTION sac5cad1(mcod)
***************
LOCAL MPRG:='SAC5CAD1',;
      opcao,mtraco,mtit,mpag:=0,mcod_cli,mop_rel:=' '

PRIVATE mtipo_imp:=SPACE(4),mimp_tipo:=0,marq:=SPACE(35),;
        mnome_ven := SPACE(30)

mtraco := REPLI('-',80)

IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*---------------------------------------------------------------------
op_tela(00,00,24,79,' RELATORIO CLIENTE ')
WHILE .T.
        limpa(00,00,33,100)
        exibi_prg(mprg)
        mtipo_imp := m_indiv[1,18]
        IF mcod <> NIL
                mcod_cli := mcod
        ELSE
                mcod_cli := 0
        ENDIF
        mnome_ven := SPACE(30)
        opcao := 'S'

        DEVPOS(01,01);DEVOUT('Codigo..:')
        DEVPOS(01,19);DEVOUT('Data Cadastro.:')
        DEVPOS(02,01);DEVOUT('R.Social:')
        DEVPOS(03,01);DEVOUT('Fantasia:')

        DEVPOS(05,02);DEVOUT(' Logradouro ')
        DEVPOS(06,01);DEVOUT('Endereco:')
        DEVPOS(07,01);DEVOUT('Bairro..:')
        DEVPOS(08,01);DEVOUT('Cidade..:')
        DEVPOS(08,35);DEVOUT('UF...:')
        DEVPOS(09,01);DEVOUT('CEP.....:')

        DEVPOS(11,02);DEVOUT(' Telefones ')
        DEVPOS(12,01);DEVOUT('Fone..:')
        DEVPOS(12,24);DEVOUT('Fone.:')
        DEVPOS(13,01);DEVOUT('Fax...:')

        DEVPOS(00,52);DEVOUT(' Identidicacao ')
        DEVPOS(01,52);DEVOUT('CGC...:')
        DEVPOS(02,52);DEVOUT('Insc..:')
        DEVPOS(03,52);DEVOUT('CPF...:')

        DEVPOS(05,52);DEVOUT(' Informacoes ')
        DEVPOS(06,52);DEVOUT('Comprador.:')
        DEVPOS(07,52);DEVOUT('Prazo Pag.:')
        DEVPOS(08,52);DEVOUT('Contato...:')
        DEVPOS(09,52);DEVOUT('Area......:')
        DEVPOS(10,52);DEVOUT('Limite....:')

        DEVPOS(12,49);DEVOUT(' Observacao ')

        DEVPOS(16,02);DEVOUT('Data da Ultima Compra:')

        @ 01,13 GET mcod_cli PICT '99999' WHEN mcod = NIL
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF EMPTY(mcod_cli)
                LOOP
        ENDIF
        cons_cli := {}
        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@cons_cli)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_cli) = 0
                atencao('Nao existe nenhum cliente cadastrado com esse codigo.....')
                LOOP
        ENDIF
        mcod_cli := cons_cli[1,2]
        setcor(3)
        DEVPOS(01,13);DEVOUT(STR(mcod_cli))
        DEVPOS(01,35);DEVOUT(cons_cli[1,5])
        DEVPOS(02,11);DEVOUT(cons_cli[1,3])
        DEVPOS(03,11);DEVOUT(cons_cli[1,4])

        DEVPOS(06,13);DEVOUT(cons_cli[1,21]+', '+RTRIM(cons_cli[1,136])+IF(! EMPTY(RTRIM(cons_cli[1,137])),' - Compl.:'+RTRIM(cons_cli[1,137]),''))
        DEVPOS(07,13);DEVOUT(cons_cli[1,22])
        DEVPOS(08,13);DEVOUT(cons_cli[1,24])
        DEVPOS(08,42);DEVOUT(cons_cli[1,25])
        DEVPOS(09,13);DEVOUT(cons_cli[1,26])

        DEVPOS(12,09);DEVOUT(cons_cli[1,29])
        DEVPOS(12,31);DEVOUT(cons_cli[1,30])
        DEVPOS(13,09);DEVOUT(cons_cli[1,31])

        DEVPOS(01,60);DEVOUTPICT(cons_cli[1,32],'@@R 99.999.999/9999-99')
        DEVPOS(02,60);DEVOUTPICT(cons_cli[1,33],'99999999999999')
        DEVPOS(03,60);DEVOUTPICT(cons_cli[1,34],'@@R 999.999.999-99')

        DEVPOS(06,64);DEVOUT(cons_cli[1,38])
        DEVPOS(07,64);DEVOUT(cons_cli[1,40])
        DEVPOS(08,64);DEVOUT(cons_cli[1,39])
        DEVPOS(09,64);DEVOUT(cons_cli[1,43])
        DEVPOS(10,64);DEVOUTPICT(cons_cli[1,44],'999,999,999.99')

        DEVPOS(13,48);DEVOUT(cons_cli[1,48])
        DEVPOS(16,25);DEVOUT(cons_cli[1,11])
        setcor(1)
        mop_rel := 'C'
        mop_rel := mensagem1('Tipo de relatorio: [C]adastro ou [V]isitas','C','C,V')
        IF ! imp_arq('CAD_CLI.REL','R')
                LOOP
        ENDIF
        mtit := 'Cadastro de Cliente'
        cabecalho(mpag,mtit,,mprg)
        DEVPOS(PROW()+1,01);DEVOUT('Codigo....:')
        DEVPOS(PROW(),13);DEVOUT(STR(mcod_cli))
        DEVPOS(PROW(),20);DEVOUT('Data Cadastro:')
        DEVPOS(PROW(),35);DEVOUT(cons_cli[1,5])
        IF mop_rel = 'C'
                DEVPOS(PROW(),48);DEVOUT('Data Nascimento:')
                DEVPOS(PROW(),65);DEVOUT(cons_cli[1,9])
        ENDIF

        DEVPOS(PROW()+1,01);DEVOUT('R.Social..:')
        DEVPOS(PROW(),13);DEVOUT(cons_cli[1,3])
        DEVPOS(PROW()+1,01);DEVOUT('Fantasia..:')
        DEVPOS(PROW(),13);DEVOUT(cons_cli[1,4])
        IF ! EMPTY(cons_cli[1,32])
                DEVPOS(PROW()+1,01);DEVOUT('CNPJ..:')
                DEVPOS(PROW(),08);DEVOUTPICT(cons_cli[1,32],'@@R 99.999.999/9999-99')
                DEVPOS(PROW(),28);DEVOUT('Insc.:')
                DEVPOS(PROW(),35);DEVOUT(cons_cli[1,33])
        ELSE
                DEVPOS(PROW()+1,01);DEVOUT('CPF:')
                DEVPOS(PROW(),6);DEVOUTPICT(cons_cli[1,34],'@@R 999.999.999-99')
                DEVPOS(PROW(),22);DEVOUT('RG:')
                DEVPOS(PROW(),26);DEVOUT(cons_cli[1,35])
                DEVPOS(PROW(),42);DEVOUT('Orgao:')
                DEVPOS(PROW(),49);DEVOUT(cons_cli[1,36])
                DEVPOS(PROW(),61);DEVOUT('Emissao:')
                DEVPOS(PROW(),70);DEVOUT(cons_cli[1,37])

        ENDIF
        DEVPOS(PROW()+1,00);DEVOUT('Profissao: '+cons_cli[1,135]+' - ')
        ver_profi(VAL(cons_cli[1,135]),PROW(),PCOL()+1)

        DEVPOS(PROW()+1,00);DEVOUT(PADC(REPLI('-',34)+' LOGRADOURO '+REPLI('-',34),80))

        DEVPOS(PROW()+1,01);DEVOUT('Rota......:')
        DEVPOS(PROW(),13);DEVOUT(cons_cli[1,28])
        
        DEVPOS(PROW()+1,01);DEVOUT('Endereco..:')
        DEVPOS(PROW(),13);DEVOUT(cons_cli[1,21]+', '+RTRIM(cons_cli[1,136])+IF(! EMPTY(RTRIM(cons_cli[1,137])),' - Compl.:'+RTRIM(cons_cli[1,137]),''))
        DEVPOS(PROW()+1,01);DEVOUT('Bairro....:')
        DEVPOS(PROW(),13);DEVOUT(cons_cli[1,22])
        DEVPOS(PROW(),35);DEVOUT('Cidade:')
        DEVPOS(PROW(),43);DEVOUT(cons_cli[1,24])
        DEVPOS(PROW(),65);DEVOUT('UF:')
        DEVPOS(PROW(),69);DEVOUT(cons_cli[1,25])

        DEVPOS(PROW()+1,01);DEVOUT('CEP.......:')
        DEVPOS(PROW(),13);DEVOUT(cons_cli[1,26])

        DEVPOS(PROW()+1,01);DEVOUT('Fone:')
        DEVPOS(PROW(),07);DEVOUT(cons_cli[1,29])
        DEVPOS(PROW(),23);DEVOUT('Fone:')
        DEVPOS(PROW(),29);DEVOUT(cons_cli[1,30])
        DEVPOS(PROW(),45);DEVOUT('Fax:')
        DEVPOS(PROW(),50);DEVOUT(cons_cli[1,31])

        IF mop_rel = 'C'
                IF ! EMPTY(cons_cli[1,98]) .OR. ! EMPTY(cons_cli[1,99])
                        DEVPOS(PROW()+1,00);DEVOUT(PADC(REPLI('-',35)+' FILIACAO '+REPLI('-',35),80))

                        DEVPOS(PROW()+1,01);DEVOUT('Nome do Pai:')
                        DEVPOS(PROW(),14);DEVOUT(cons_cli[1,98])
                        DEVPOS(PROW()+1,01);DEVOUT('Nome da Mae:')
                        DEVPOS(PROW(),14);DEVOUT(cons_cli[1,99])
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(PADC(REPLI('-',33)+' INFORMACOES '+REPLI('-',33),80))

                DEVPOS(PROW()+1,01);DEVOUT('Comprador:')
                DEVPOS(PROW(),12);DEVOUT(cons_cli[1,38])
                DEVPOS(PROW(),29);DEVOUT('Prazo Pag.:')
                DEVPOS(PROW(),41);DEVOUT(cons_cli[1,40])
                DEVPOS(PROW(),52);DEVOUT('Contato:')
                DEVPOS(PROW(),61);DEVOUT(cons_cli[1,39])

                DEVPOS(PROW()+1,01);DEVOUT('Area:')
                DEVPOS(PROW(),7);DEVOUT(cons_cli[1,43])
                DEVPOS(PROW(),24);DEVOUT('Limite Credito:')
                DEVPOS(PROW(),40);DEVOUTPICT(cons_cli[1,44],'999,999.99')
                DEVPOS(PROW(),52);DEVOUT('Data Ult.Compra:')
                DEVPOS(PROW(),70);DEVOUT(cons_cli[1,11])

                IF ! EMPTY(cons_cli[1,66])
                        DEVPOS(PROW()+1,00);DEVOUT(PADC(REPLI('-',28)+' EMPRESA ONDE TRABALHA '+REPLI('-',28),80))

                        DEVPOS(PROW()+1,01);DEVOUT('Empresa:')
                        DEVPOS(PROW(),10);DEVOUT(cons_cli[1,66])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Cargo:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_cli[1,67])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Salario:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(cons_cli[1,68],'999,999.99'))

                        DEVPOS(PROW()+1,01);DEVOUT('Endereco:')
                        DEVPOS(PROW(),11);DEVOUT(cons_cli[1,69])
                        DEVPOS(PROW(),48);DEVOUT('Bairro:')
                        DEVPOS(PROW(),56);DEVOUT(cons_cli[1,70])

                        DEVPOS(PROW()+1,01);DEVOUT('Cidade:')
                        DEVPOS(PROW(),09);DEVOUT(cons_cli[1,71])
                        DEVPOS(PROW(),31);DEVOUT('UF:')
                        DEVPOS(PROW(),35);DEVOUT(cons_cli[1,72])
                        DEVPOS(PROW(),38);DEVOUT('CEP:')
                        DEVPOS(PROW(),43);DEVOUT(cons_cli[1,73])

                        DEVPOS(PROW()+1,01);DEVOUT('Fone:')
                        DEVPOS(PROW(),07);DEVOUT(cons_cli[1,74])
                        DEVPOS(PROW(),22);DEVOUT('Fax:')
                        DEVPOS(PROW(),27);DEVOUT(cons_cli[1,75])
                ENDIF
                IF ! EMPTY(cons_cli[1,82]) .OR. ! EMPTY(cons_cli[1,76]) .OR. ! EMPTY(cons_cli[1,86]);
                   .OR. ! EMPTY(cons_cli[1,92])
                        DEVPOS(PROW()+1,00);DEVOUT(PADC(REPLI('-',33)+' REFERENCIAS '+REPLI('-',33),80))

                        DEVPOS(PROW()+1,01);DEVOUT('Ref. Pessoal:')
                        DEVPOS(PROW(),15);DEVOUT(cons_cli[1,82])
                        DEVPOS(PROW(),42);DEVOUT('Fone:')
                        DEVPOS(PROW(),48);DEVOUT(cons_cli[1,83])

                        DEVPOS(PROW()+1,01);DEVOUT('Ref. Pessoal:')
                        DEVPOS(PROW(),15);DEVOUT(cons_cli[1,84])
                        DEVPOS(PROW(),42);DEVOUT('Fone:')
                        DEVPOS(PROW(),48);DEVOUT(cons_cli[1,85])

                        DEVPOS(PROW()+1,01);DEVOUT('Loja........:')
                        DEVPOS(PROW(),15);DEVOUT(cons_cli[1,76])
                        DEVPOS(PROW(),42);DEVOUT('Desde:')
                        DEVPOS(PROW(),48);DEVOUT(cons_cli[1,78])

                        DEVPOS(PROW()+1,01);DEVOUT('Loja........:')
                        DEVPOS(PROW(),15);DEVOUT(cons_cli[1,79])
                        DEVPOS(PROW(),42);DEVOUT('Desde:')
                        DEVPOS(PROW(),48);DEVOUT(cons_cli[1,81])

                        DEVPOS(PROW()+1,01);DEVOUT('Banco.......:')
                        DEVPOS(PROW(),15);DEVOUT(cons_cli[1,86])
                        DEVPOS(PROW(),42);DEVOUT('Agencia:')
                        DEVPOS(PROW(),51);DEVOUT(cons_cli[1,87])
                        DEVPOS(PROW(),63);DEVOUT('C/C:')
                        DEVPOS(PROW(),68);DEVOUT(cons_cli[1,88])

                        DEVPOS(PROW()+1,01);DEVOUT('Banco.......:')
                        DEVPOS(PROW(),15);DEVOUT(cons_cli[1,89])
                        DEVPOS(PROW(),42);DEVOUT('Agencia:')
                        DEVPOS(PROW(),51);DEVOUT(cons_cli[1,90])
                        DEVPOS(PROW(),63);DEVOUT('C/C:')
                        DEVPOS(PROW(),68);DEVOUT(cons_cli[1,91])

                        DEVPOS(PROW()+1,01);DEVOUT('Cartao......:')
                        DEVPOS(PROW(),15);DEVOUT(cons_cli[1,92])
                        DEVPOS(PROW(),32);DEVOUT('No.:')
                        DEVPOS(PROW(),37);DEVOUT(cons_cli[1,93])
                        DEVPOS(PROW(),56);DEVOUT('Vencimento:')
                        DEVPOS(PROW(),68);DEVOUT(cons_cli[1,94])

                        DEVPOS(PROW()+1,01);DEVOUT('Cartao......:')
                        DEVPOS(PROW(),15);DEVOUT(cons_cli[1,95])
                        DEVPOS(PROW(),32);DEVOUT('No.:')
                        DEVPOS(PROW(),37);DEVOUT(cons_cli[1,96])
                        DEVPOS(PROW(),56);DEVOUT('Vencimento:')
                        DEVPOS(PROW(),68);DEVOUT(cons_cli[1,97])
                ENDIF
                IF PROW() > 54
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,,mprg)
                        DEVPOS(PROW()+1,01);DEVOUT('Codigo....:')
                        DEVPOS(PROW(),13);DEVOUT(STR(mcod_cli))
                        DEVPOS(PROW(),20);DEVOUT('Data Cadastro:')
                        DEVPOS(PROW(),35);DEVOUT(cons_cli[1,5])
                        DEVPOS(PROW()+1,00);DEVOUT(PADC(REPLI('-',34)+' CONTINUACAO '+REPLI('-',33),80))
                ENDIF

                aret:={}
                cComm  := "SELECT * FROM saccliaux WHERE cod_cli = "+sr_cdbvalue(mcod_cli)
                sr_getconnection():exec( cComm,,.t.,@aret)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(aret) > 0
                        DEVPOS(PROW()+1,00);DEVOUT(PADC(REPLI('-',35)+' CONJUGE '+REPLI('-',35),80))
                        DEVPOS(PROW()+1,00);DEVOUT('Conjuge: '+aret[1,2])
                        DEVPOS(PROW()+1,00);DEVOUT('CPF: '+aret[1,4])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('RG: '+aret[1,5])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Data Nascimento: '+DTOC(aret[1,3]))
                        DEVPOS(PROW()+1,00);DEVOUT('Emp. Trabalha: '+aret[1,6])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Cargo: '+aret[1,7])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Salario: '+TRANSFORM(aret[1,8],'999,999.99'))
                        DEVPOS(PROW()+1,00);DEVOUT('Endereco: '+aret[1,9])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Bairro: '+aret[1,10])
                        DEVPOS(PROW()+1,00);DEVOUT('Cidade: '+aret[1,11])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('UF: '+aret[1,12])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Cep: '+aret[1,13])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Fone: '+aret[1,14])
                        DEVPOS(PROW()+1,00);DEVOUT('OBS.: '+aret[1,15])

                        DEVPOS(PROW()+1,00);DEVOUT(PADC(REPLI('-',35)+' AVALISTA '+REPLI('-',35),80))
                        DEVPOS(PROW()+1,00);DEVOUT('Avalista: '+aret[1,16])
                        DEVPOS(PROW()+1,00);DEVOUT('CPF: '+aret[1,20])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('RG: '+aret[1,21])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Data Nasc.: '+DTOC(aret[1,19]))
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Sexo: '+aret[1,17])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Est.Civil: '+aret[1,18])
                        DEVPOS(PROW()+1,00);DEVOUT('Emp. Trabalha: '+aret[1,22])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Cargo: '+aret[1,23])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Salario: '+TRANSFORM(aret[1,24],'999,999.99'))
                        DEVPOS(PROW()+1,00);DEVOUT('Endereco: '+aret[1,25])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Bairro: '+aret[1,26])
                        DEVPOS(PROW()+1,00);DEVOUT('Cidade: '+aret[1,27])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('UF: '+aret[1,28])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Cep: '+aret[1,29])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Fone: '+aret[1,30])
                        DEVPOS(PROW()+1,00);DEVOUT('OBS.: '+aret[1,31])
                ENDIF
                IF PROW() > 54
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,,mprg)
                        DEVPOS(PROW()+1,01);DEVOUT('Codigo....:')
                        DEVPOS(PROW(),13);DEVOUT(STR(mcod_cli))
                        DEVPOS(PROW(),20);DEVOUT('Data Cadastro:')
                        DEVPOS(PROW(),35);DEVOUT(cons_cli[1,5])
                        DEVPOS(PROW()+1,00);DEVOUT(PADC(REPLI('-',34)+' CONTINUACAO '+REPLI('-',33),80))
                ENDIF
                aret:={}
                cComm  := "SELECT * FROM sachist WHERE codcli = "+sr_cdbvalue(mcod_cli)
                sr_getconnection():exec( cComm,,.t.,@aret)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(aret) > 0
                        DEVPOS(PROW()+1,00);DEVOUT(PADC(REPLI('-',34)+' HISTORICO '+REPLI('-',34),80))
                        //DEVPOS(PROW()+1,01);DEVOUT('Operador: '+aret[1,5])
                        i:=0
                        FOR i = 1 TO LEN(aret)
                                DEVPOS(PROW()+1,01);DEVOUT(DTOC(aret[i,1])+' '+aret[i,2]+' '+aret[i,4])
                                IF PROW() > 54
                                        mpag ++
                                        EJECT
                                        cabecalho(mpag,mtit,,mprg)
                                        DEVPOS(PROW()+1,01);DEVOUT('Codigo....:')
                                        DEVPOS(PROW(),13);DEVOUT(STR(mcod_cli))
                                        DEVPOS(PROW(),20);DEVOUT('Data Cadastro:')
                                        DEVPOS(PROW(),35);DEVOUT(cons_cli[1,5])
                                        DEVPOS(PROW()+1,00);DEVOUT(PADC(REPLI('-',34)+' CONTINUACAO '+REPLI('-',33),80))
                                ENDIF
                        NEXT
                ENDIF
                IF PROW() > 54
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,,mprg)
                        DEVPOS(PROW()+1,01);DEVOUT('Codigo....:')
                        DEVPOS(PROW(),13);DEVOUT(STR(mcod_cli))
                        DEVPOS(PROW(),20);DEVOUT('Data Cadastro:')
                        DEVPOS(PROW(),35);DEVOUT(cons_cli[1,5])
                        DEVPOS(PROW()+1,00);DEVOUT(PADC(REPLI('-',34)+' CONTINUACAO '+REPLI('-',33),80))
                ENDIF
                IF ! EMPTY(data_bloq)
                        DEVPOS(PROW()+1,00);DEVOUT(PADC(REPLI('-',34)+' BLOQUEIO '+REPLI('-',34),80))
                        DEVPOS(PROW()+1,01);DEVOUT('DATA: '+DTOC(cons_cli[1,138])+' - MOTIVO: '+cons_cli[1,139])
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(PADC(REPLI('-',34)+' OBSERVACAO '+REPLI('-',34),80))
                DEVPOS(PROW()+1,00);DEVOUT(cons_cli[1,48])
                DEVPOS(PROW()+1,01);DEVOUT(cons_cli[1,113])
                DEVPOS(PROW()+1,01);DEVOUT(cons_cli[1,114])
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(PADC(ALLTRIM(m_set[1,134])+', ...../...../.....',80))
                DEVPOS(PROW()+2,00);DEVOUT(PADC('...............................',80))
                DEVPOS(PROW()+1,00);DEVOUT(PADC('     Assinatura do Cliente     ',80))
                DEVPOS(PROW()+1,00);DEVOUT(TIME())
        ELSE
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                DEVPOS(PROW()+1,00);DEVOUT(PADC(' ENDERECO DE COBRANCA ',80))

                DEVPOS(PROW()+1,01);DEVOUT('Endereco:')
                DEVPOS(PROW(),11);DEVOUT(cons_cli[1,100])
                DEVPOS(PROW(),48);DEVOUT('Bairro:')
                DEVPOS(PROW(),56);DEVOUT(cons_cli[1,101])

                DEVPOS(PROW()+1,01);DEVOUT('Cidade:')
                DEVPOS(PROW(),09);DEVOUT(cons_cli[1,102])
                DEVPOS(PROW(),31);DEVOUT('UF:')
                DEVPOS(PROW(),35);DEVOUT(cons_cli[1,103])
                DEVPOS(PROW(),38);DEVOUT('CEP:')
                DEVPOS(PROW(),43);DEVOUT(cons_cli[1,104])

                DEVPOS(PROW()+1,01);DEVOUT('Fone:')
                DEVPOS(PROW(),07);DEVOUT(cons_cli[1,105])

                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                DEVPOS(PROW()+1,00);DEVOUT(PADC(' INFORMACAOES/CONTATOS ',80))

                DEVPOS(PROW()+1,01);DEVOUT('Comprador:')
                DEVPOS(PROW(),12);DEVOUT(cons_cli[1,38])

                DEVPOS(PROW(),PCOL()+3);DEVOUT('Manutencao:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_cli[1,107])

                DEVPOS(PROW()+2,00);DEVOUT(mtraco)
                DEVPOS(PROW()+1,00);DEVOUT(PADC(' RELATORIO DE VISITAS: ',80))

                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('.',80))
                DEVPOS(PROW()+2,00);DEVOUT(PADC(ALLTRIM(m_set[1,134])+', ...../...../.....',80))
                DEVPOS(PROW()+2,00);DEVOUT(TIME())
        ENDIF
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('CAD_CLI.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** f i m ************************************
/*
********************************
* EMISSAO DE CADASTRO DE CLIENTE
********************************

FUNCTION iclicad
***************

LOCAL opcao,mtraco,mtit,mpag:=0

mtraco := REPLI('=',80)

RETURN NIL
*********************** f i m ************************************
********************************************
* CONSULTA DE CHEQUE SEM FUNDO DO CLIENTE
********************************************

FUNCTION iclicheq
****************

LOCAL opcao,msele,morde,mtot_ok,mqua_ok,mtot_np,mqua_np,mtraco,mtit,mtipo

PRIVATE mnome_ven

msele := SELE()
morde := INDEXORD()
****************
SELE('cheq');ORDSETFOCUS(1)
GO TOP
****************
mtraco := REPLI('=',80)

WHILE .T.
        mensagem('Confirma a impressao [S/n]:')
        opcao := 'S'
        @ 26,COL()+1 GET opcao PICT '@!' VALID opcao $ 'S,N'
        READ
        IF LASTKEY() = 27 .OR. opcao = 'N'
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN NIL
        ENDIF

        IF ! cheq->(DBSEEK(mcod_cli))
                atencao('Nao existe nenhum cheque sem fundo deste Cliente')
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN NIL
        ENDIF
        mqua_ok := 0
        mtot_ok := 0
        mqua_np := 0
        mtot_np := 0
        mpag := 0
        mtit := 'Relatorio de Cheques Sem Fundo '
        mtipo := 'Cliente: '+mcod_cli+'-'+LEFT(cons_cli[1,3],25)
        SET DEVI TO PRINT
        SET PRINT TO (m_indiv[1,17])
        SET PRINT ON
        WHILE mcod_cli = cod_cli .AND. ! EOF()
                IF mpag = 0 .OR. PROW() >= 60
                        mpag ++
                        IF mpag > 1
                                EJECT
                        ENDIF
                        cabecalho(mpag,mtit,mtipo)
                        imprt(mtipo_imp,'C',1)
                        DEVPOS(PROW(),01);DEVOUT('Emissao')
                        DEVPOS(PROW(),10);DEVOUT('Devolvido')
                        DEVPOS(PROW(),21);DEVOUT('NF/PD')
                        DEVPOS(PROW(),31);DEVOUT('Bco.')
                        DEVPOS(PROW(),36);DEVOUT('No.Cheque')
                        DEVPOS(PROW(),48);DEVOUT('Vlr.do Cheque')
                        DEVPOS(PROW(),74);DEVOUT('Motivo')
                        DEVPOS(PROW(),96);DEVOUT('Codigo do Vendedor')
                        DEVPOS(PROW(),130);DEVOUT('Situacao')
                        imprt(mtipo_imp,'N',1)
                        DEVPOS(PROW(),00);DEVOUT(mtraco)
                ENDIF
                ver_ven(cod_vend)
                mnome_ven := sen->snome
                imprt(mtipo_imp,'C',1)
                DEVPOS(PROW(),00);DEVOUT(data_cheq)
                DEVPOS(PROW(),10);DEVOUT(data_fund)
                DEVPOS(PROW(),20);DEVOUT(nota)
                DEVPOS(PROW(),30);DEVOUT(num_ban)
                DEVPOS(PROW(),35);DEVOUT(num_cheq)
                DEVPOS(PROW(),47);DEVOUTPICT(valor_cheq,'99,999,999.99')
                DEVPOS(PROW(),63);DEVOUT(motivo)
                DEVPOS(PROW(),95);DEVOUT(cod_vend+'-')
                DEVPOS(PROW(),100);DEVOUT(mnome_ven)
                IF ok = '*'
                        DEVPOS(PROW(),132);DEVOUT('Ok')
                        mtot_ok := mtot_ok + valor_cheq
                        mqua_ok ++
                ELSE
                        DEVPOS(PROW(),132);DEVOUT(' ')
                        mtot_np := mtot_ok + valor_cheq
                        mqua_np ++
                ENDIF
                SKIP
        ENDDO
        IF PROW() >= 54
                EJECT
                mpag ++
                cabecalho(mpag,mtit)
                imprt(mtipo_imp,'C',1)
                DEVPOS(PROW(),01);DEVOUT('Emissao')
                DEVPOS(PROW(),10);DEVOUT('Devolvido')
                DEVPOS(PROW(),20);DEVOUT('NF/PD')
                DEVPOS(PROW(),31);DEVOUT('Bco.')
                DEVPOS(PROW(),36);DEVOUT('No.Cheque')
                DEVPOS(PROW(),48);DEVOUT('Vlr.do Cheque')
                DEVPOS(PROW(),74);DEVOUT('Motivo')
                DEVPOS(PROW(),96);DEVOUT('Codigo do Vendedor')
                DEVPOS(PROW(),130);DEVOUT('Situacao')
                imprt(mtipo_imp,'N',1)
                DEVPOS(PROW(),00);DEVOUT(mtraco)
        ENDIF
        DEVPOS(PROW()+2,00);DEVOUT('Quantidade de Cheques "OK"......:')
        DEVPOS(PROW(),PCOL()+1);DEVOUT(STRZERO(mqua_ok,6))
        DEVPOS(PROW()+1,00);DEVOUT('Total de Cheques "OK" R$........:')
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_ok,'99,999,999.99')
        DEVPOS(PROW()+2,00);DEVOUT('Quantidade de Cheques "NAO PAGO":')
        DEVPOS(PROW(),PCOL()+1);DEVOUT(STRZERO(mqua_np,6))
        DEVPOS(PROW()+1,00);DEVOUT('Total de Cheques "NAO PAGO" R$..:')
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_np,'99,999,999.99')
        DEVPOS(PROW()+2,00);DEVOUT(time())
        imprt(mtipo_imp,'N',1)
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN NIL
ENDDO
******************************* f i m *********************************************
*******************************
* CONSULTA MOVIMENTO DO CLIENTE
*******************************

FUNCTION iclimov
**************

LOCAL tela,tela1,lci,cci,lba,cba,opcao,mcod_op,mtot_sai,mtot_dif,mvlr_sai,;
      mtot_cust,mtot_prven,msele,morde,mtit,mtipo,mtraco,mpag

PRIVATE mnome_ven

lci := 08
cci := 05
lba := 14
cba := 33

tela := SAVESCREEN(01,00,24,79)

msele := SELE()
morde := INDEXORD()
mtraco := REPLI('=',80)

WHILE .T.
        mcod_op := SPACE(2)
        mquantd := 0
        mensagem('Preencha os Campos - <ESC>p/Sair')
        botao(lci,cci,lba,cba)
        @ lci+2,cci+1 TO lci+2,cba-1 DOUBLE
        @ lci+4,cci+1 TO lci+4,cba-1
        DEVPOS(lci+1,cci+2);DEVOUT('Cod.Operacao___:')
        DEVPOS(lci+3,cci+2);DEVOUT('Data Inicial___:')
        DEVPOS(lci+5,cci+2);DEVOUT('Data Final_____:')

        @ lci+1,cci+19 GET mcod_op PICT '99' VALID mcod_op $ '01,02,03,04'
        @ lci+3,cci+19 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+5,cci+19 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        READ
        IF LASTKEY() = 27
                RESTSCREEN(01,00,24,79)
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN NIL
        ENDIF
        ****************
        SELE('mov');ORDSETFOCUS(1)
        GO TOP
        ****************

        mov->(DBSEEK(DTOS(mdata1),.T.))

        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        mensagem('Confirma a Impressao [S/n]:')
        opcao := 'S'
        @ 26,COL()+1 GET opcao PICT '@!' VALID opcao $ 'S,N'
        READ
        IF LASTKEY() = 27 .OR. opcao = 'N'
                LOOP
        ELSE
                mtot_cust := 0
                mtot_prven := 0
                mtot_ent := 0
                mtot_sai := 0
                mtot_dif := 0
                mvlr_ent := 0
                mvlr_sai := 0
                mpag := 0
                mtit := 'Movimento de: '+DTOC(mdata1)+' a '+DTOC(mdata2)
                mtipo := 'Cliente: '+mcod_cli+'-'+ RTRIM(cons_cli[1,3])
                SET DEVI TO PRINT
                SET PRINT TO (m_indiv[1,17])
                SET PRINT ON
                WHILE data_s_e <= mdata2 .AND. ! EOF()
                        IF mpag = 0 .OR. PROW() >= 60
                                mpag ++
                                IF mpag > 1
                                        EJECT
                                ENDIF
                                cabecalho(mpag,mtit,mtipo)
                                DEVPOS(PROW()+1,02);DEVOUT('Data')
                                DEVPOS(PROW(),10);DEVOUT('Cod.')
                                DEVPOS(PROW(),17);DEVOUT('Doc.(NF)')
                                DEVPOS(PROW(),28);DEVOUT('Quantd.')
                                DEVPOS(PROW(),43);DEVOUT('Valor')
                                DEVPOS(PROW(),52);DEVOUT('T o t a l')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        ENDIF
                        IF (mcod_cli <> cod_cli);
                           .OR. (mcod_op = '01' .AND. tipo = '02');
                           .OR. (mcod_op = '02' .AND. (tipo = '01' .OR. tipo = '03'));
                           .OR. (mcod_op = '03' .AND. (tipo = '01' .OR. tipo = '02'));
                           .OR. (mcod_op = '04' .AND. tipo = '03')
                                SKIP
                                LOOP
                        ENDIF
                        IF mcod_op = '04'
                                DEVPOS(PROW()+1,00);DEVOUT(data_s_e)
                                DEVPOS(PROW(),10);DEVOUT(codigo)
                                DEVPOS(PROW(),17);DEVOUT(documento)
                                DEVPOS(PROW(),27);DEVOUT(TRANSFORM(quantd,'99999.99'))
                                DEVPOS(PROW(),36);DEVOUT(TRANSFORM(vl_vend,'9,999,999.99'))
                                DEVPOS(PROW(),49);DEVOUT(TRANSFORM(quantd * vl_vend,'9,999,999.99'))
                                mvlr_sai = mvlr_sai + vl_vend * quantd
                                mtot_dif = mtot_dif + (quantd * pr_venda - quantd * vl_vend)
                        ELSE
                                DEVPOS(PROW()+1,00);DEVOUT(data_s_e)
                                DEVPOS(PROW(),10);DEVOUT(codigo)
                                DEVPOS(PROW(),17);DEVOUT(documento)
                                DEVPOS(PROW(),27);DEVOUT(TRANSFORM(quantd,'99999.99'))
                                DEVPOS(PROW(),36);DEVOUT(TRANSFORM(vl_fatura,'9,999,999.99'))
                                DEVPOS(PROW(),49);DEVOUT(TRANSFORM(quantd * vl_fatura,'9,999,999.99'))
                                mvlr_sai = mvlr_sai + vl_fatura * quantd
                                mtot_dif = mtot_dif + (quantd * pr_venda - quantd * vl_fatura)
                        ENDIF
                        mtot_sai = mtot_sai + quantd
                        mtot_prven = mtot_prven + pr_venda * quantd
                        mtot_cust = mtot_cust + pr_unit * quantd
                        SKIP
                ENDDO
                DEVPOS(PROW()+2,00);DEVOUT('Total de SAIDAS.....:')
                DEVPOS(PROW(),22);DEVOUT('('+LTRIM(TRANSFORM(mtot_sai,'999999.99'))+')')
                DEVPOS(PROW(),PCOL());DEVOUT(' - R$:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvlr_sai,'999,999,999.99')
                DEVPOS(PROW()+1,00);DEVOUT('Desconto Medio R$...:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dif,'999,999,999.99')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('em (%):')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT((mtot_prven - mvlr_sai) * 100 / mvlr_sai,'999.99')
                DEVPOS(PROW()+1,00);DEVOUT('Lucro Medio R$......:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvlr_sai - mtot_cust,'999,999,999.99')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('em (%):')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT((mvlr_sai - mtot_cust) * 100 / mtot_cust,'999.99')
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                RESTSCREEN(01,00,24,79)
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN NIL
        ENDIF
ENDDO
*/


