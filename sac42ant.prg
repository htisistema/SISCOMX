* CONSULTA DE CLIENTE
*********************
MEMVAR getlist,nivel_acess,mdata_sis

FUNCTION sac42ant(mtipo_con)
*************************
LOCAL MPRG:='SAC42',;
      tela,tela1,opcao,lba,cba,mrazao,mnome,msele,morder,lb,cb,mcgc,;
      mcpf,mcidade,mcon_sele,mcon_orde,minsc:=SPACE(19),mmens,mponto,;
      m_hist:={},m_ponto:={},mpesquisa:='',mtipo:='',mtit:='',mtot_doc:= 0,mqtd_doc := 0,;
      mdata_doc,mnum_ped,mdat_ped,mult_compra := {},nPBid,nPBid1,cComm,mvlr_compras := {}

PRIVATE mcod_cli,mdata1,mdata2,mlimite,mcompras,mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mnome_vend:=SPACE(30)

IF ! ver_nivel(mprg,'CONSULTA DE CLIENTE','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
lba := lb := 21
cba := cb := 79
*---------------------------------------------------------------------
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
//IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('saccheq','cheq');RETURN NIL;ENDIF
//IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('sactabme','tabme');RETURN NIL;ENDIF
IF ! AbriArq('sachist','hist');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
*---------------------------------------------------------------------
op_tela(04,10,35,95,' Consulta de CLIENTES ',,'*')
WvW_PBSetFont( NIL, "Courier New", 15, 0,)
nPBid := wvw_pbCreate(NIL,27,10,28,20, 'CONTRATOS',NIL,{||contratos(STRZERO(mcod_cli,5))})
IF cod_operado = '999'
        nPBid1 := wvw_pbCreate(NIL,27,25,28,35, 'ENVIAR EMAIL',NIL,{||cli_email()})
ENDIF
//nPBid := wvw_pbCreate(NIL,27,10,28,20, 'CONTRATOS',NIL,{||DBSKIP(1)})
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        limpa(00,00,33,90)
        exibi_prg(mprg)
        ***************************
        SELE('cli');ORDSETFOCUS(1)
        ***************************
        mdata2 := mdata_sis
        opcao := 'S'
        mcod_cli := mcompras := 0
        mnome := mrazao:= SPACE(40)
        mcgc := SPACE(14)
        mcpf := SPACE(11)
        mcidade := SPACE(20)
        minsc  := SPACE(19)
        DEVPOS(1,1);DEVOUT('Codigo....:')
        DEVPOS(1,21);DEVOUT('Data Cadastro:')
        DEVPOS(2,1);DEVOUT('R.Social..:')
        DEVPOS(2,55);DEVOUT('Data Nasc.:')
        DEVPOS(3,1);DEVOUT('Fantasia..:')
        DEVPOS(3,55);DEVOUT('[C]liente [O]utros:')

*       @ 4,1 TO 4,cba-1
        DEVPOS(4,1);DEVOUT('CNPJ:')
        DEVPOS(4,26);DEVOUT('Insc.:')
        DEVPOS(5,1);DEVOUT('CPF:')
        DEVPOS(5,22);DEVOUT('RG:')
        DEVPOS(5,42);DEVOUT('Orgao:')
        DEVPOS(5,61);DEVOUT('Emissao:')

        DEVPOS(6,1);DEVOUT('Endereco..:')
        DEVPOS(7,1);DEVOUT('Bairro....:')
        DEVPOS(7,35);DEVOUT('Cidade:')
        DEVPOS(7,65);DEVOUT('UF:')
        DEVPOS(8,1);DEVOUT('CEP.......:')
        DEVPOS(8,24);DEVOUT('EMAIL.....:')
        DEVPOS(9,1);DEVOUT('Rota......:')
        DEVPOS(10,1);DEVOUT('Fone:')
        DEVPOS(10,23);DEVOUT('Fone:')
        DEVPOS(10,45);DEVOUT('Fax:')

        DEVPOS(11,1);DEVOUT('Comprador:')
        DEVPOS(11,28);DEVOUT('Prazo Pag.:')
        DEVPOS(11,49);DEVOUT('Contato:')
        DEVPOS(12,1);DEVOUT('Area:')
        DEVPOS(12,22);DEVOUT('Vend.resp.:')
        DEVPOS(13,1);DEVOUT('Operador Resp.:')
        DEVPOS(14,1);DEVOUT('Observacao:')

        @ 17,1 TO 17,cba-1
        DEVPOS(18,1);DEVOUT('Maior Compra:')
        DEVPOS(18,25);DEVOUT('No.Pedido:')
        DEVPOS(18,44);DEVOUT('Valor Pedido:')
        DEVPOS(19,1);DEVOUT('Ult.Compra..:')
        DEVPOS(19,25);DEVOUT('No.Pedido:')
        DEVPOS(19,44);DEVOUT('Valor Pedido:')
        DEVPOS(20,1);DEVOUT('Med.Dias Atraso:')
        DEVPOS(20,26);DEVOUT('Qtd.Doc.:')
        DEVPOS(21,1);DEVOUT('Limite:')
        DEVPOS(21,23);DEVOUT('Compras:')
        DEVPOS(21,46);DEVOUT('Saldo:')
        DEVPOS(22,1);DEVOUT('Acumulado Compras R$:')
        DEVPOS(22,40);DEVOUT('Data Ult.Orcamento:')
        DEVPOS(23,1);DEVOUT('Envia  p/APP... [s/N]:')
        setcor(3)
        DEVPOS(20,42);DEVOUT('*** <A> Calcular media de Atraso ***')
        setcor(1)

        WVW_PBEnable( NIL, nPBId, .F. )
        WVW_PBEnable( NIL, nPBId1, .F. )
        //WVW_PB_Style( NIL, nPBid )

        @ 1,13 GET mcod_cli PICT '99999'
        @ 2,13 GET mrazao PICT '@!' WHEN mcod_cli = 0
        @ 3,13 GET mnome PICT '@!' WHEN mcod_cli = 0 .AND. EMPTY(mrazao)
        @ 4,7 GET mcgc PICT '@@R 99.999.999/9999-99' WHEN EMPTY(mcod_cli) .AND. EMPTY(mrazao) .AND. EMPTY(mnome) VALID IF(mcgc = cli->cgc,.T.,pesq_cgc(mcgc,'cli'))
        @ 4,33 GET minsc PICT '@!' WHEN EMPTY(mcod_cli) .AND. EMPTY(mrazao) .AND. EMPTY(mnome) .AND. EMPTY(mcgc) .AND. EMPTY(mcidade)
        @ 5,6 GET mcpf PICT '@@R 999.999.999-99' WHEN EMPTY(mcod_cli) .AND. EMPTY(mrazao) .AND. EMPTY(mnome) .AND. EMPTY(mcgc) .AND. EMPTY(minsc) VALID IF(mcpf = cli->cpf,.T.,pesq_cpf(mcpf,'cli'))
        @ 7,43 GET mcidade PICT '@!' WHEN EMPTY(mcod_cli) .AND. EMPTY(mrazao) .AND. EMPTY(mnome) .AND. EMPTY(mcgc) .AND. EMPTY(mcidade) .AND. EMPTY(mcpf) .AND. EMPTY(minsc)
        READ
        IF LASTKEY() = 27
                RELEASE ALL
                WVW_PBDestroy( NIL, nPBId )
                WVW_PBDestroy( NIL, nPBId1 )
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        /*
        IF NPBID
                atencao('ok')
        ELSE
                atencao('NAO')
        ENDIF
        */
        SELE('cli')
        IF ! EMPTY(mcod_cli)
                ***************
                ORDSETFOCUS(1)
                mpesquisa:=STRZERO(mcod_cli,5)
        ELSEIF ! EMPTY(mrazao)
                ***************
                //DBSETINDEX( "raz" )
                ORDSETFOCUS(2)
                mpesquisa := RTRIM(mrazao)
        ELSEIF ! EMPTY(mnome)
                ***************
                ORDSETFOCUS(8)
                mpesquisa := RTRIM(mnome)
        ELSEIF ! EMPTY(mcgc)
                ***************
                ORDSETFOCUS(3)
                mpesquisa := RTRIM(mcgc)
        ELSEIF ! EMPTY(mcpf)
                ***************
                ORDSETFOCUS(4)
                mpesquisa := RTRIM(mcpf)
        ELSEIF ! EMPTY(mcidade)
                ***************
                ORDSETFOCUS(5)
                mpesquisa := RTRIM(mcidade)
        ELSEIF ! EMPTY(minsc)
                ***************
                ORDSETFOCUS(10)
                mpesquisa := RTRIM(minsc)
        ELSE
                LOOP
        ENDIF
        IF ! cli->(DBSEEK(mpesquisa,.T.))
                atencao('Cliente nao Cadastrado !!!')
                LOOP
        ENDIF
        WVW_SetMousePos(,00,00)
        WVW_SetMouseMove(,.F.)
        WHILE .T.
                mcod_cli := cli->cod_cli
                mmens := ''
                mmens := ver_debito(mcod_cli)
                mdata1 := mdata_doc := cli->data_cad
                mlimite := cli->limite
                mcompras := 0
                setcor(3)
                IF cli->bloqueio = 'S'
                        janela(1,cba,' *** CLIENTE BLOQUEADO EM '+DTOC(cli->data_bloq)+' *** ')
                ELSEIF ! EMPTY(mmens)
                        janela(1,cba,ALLTRIM(mmens))
                ELSE
                        janela(1,cba,'                             ')
                ENDIF
                DEVPOS(1,13);DEVOUT(STR(cli->cod_cli,5))
                DEVPOS(1,36);DEVOUT(cli->data_cad)
                DEVPOS(2,13);DEVOUT(cli->razao)
                DEVPOS(2,67);DEVOUT(cli->nascimento)
                DEVPOS(3,13);DEVOUT(cli->nome)
                DEVPOS(3,75);DEVOUT(cli->tipo)
                DEVPOS(4,6);DEVOUTPICT(cli->cgc,'@@R 99.999.999/9999-99')
                DEVPOS(4,32);DEVOUT(cli->insc)
                DEVPOS(5,6);DEVOUTPICT(cli->cpf,'@@R 999.999.999-99')
                DEVPOS(5,26);DEVOUT(cli->rg)
                DEVPOS(5,49);DEVOUT(cli->orgao)
                DEVPOS(5,70);DEVOUT(cli->dat_emi)
                limpa(6,13,6,90)
                DEVPOS(6,13);DEVOUT(cli->endereco+' No.: '+RTRIM(cli->numero)+' - Compl.: '+RTRIM(cli->complemento))
                DEVPOS(7,13);DEVOUT(cli->bairro)
                DEVPOS(7,43);DEVOUT(cli->cidade)
                DEVPOS(7,69);DEVOUT(cli->uf)
                DEVPOS(8,13);DEVOUTPICT(cli->cep,'@@R 99999-999')
                DEVPOS(8,36);DEVOUT(cli->email)
                DEVPOS(9,13);DEVOUT(cli->rota)
                DEVPOS(10,7);DEVOUT(cli->tel1)
                DEVPOS(10,29);DEVOUT(cli->tel2)
                DEVPOS(10,50);DEVOUT(cli->fax)

                DEVPOS(11,12);DEVOUT(cli->comprado)
                DEVPOS(11,40);DEVOUTPICT(cli->prazo_pag,'@R 99-99-99')
                DEVPOS(11,57);DEVOUT(cli->contato)
                DEVPOS(12,6);DEVOUT(cli->area)
                DEVPOS(12,34);DEVOUT(cli->codvend)
                DEVPOS(13,17);DEVOUT(cli->codoper)
                //WVW_DrawLabel(,14,13,cli->obs,,,240,, 'arial',15,10,,,,,)
                //WVW_DrawLabel(,15,13,cli->l_obs1,,,240,, 'arial',15,10,,,,,)
                //WVW_DrawLabel(,16,13,cli->l_obs2,,,240,, 'arial',15,10,,,,,)
                setcor(5)
                DEVPOS(14,13);DEVOUT(cli->obs)
                DEVPOS(15,13);DEVOUT(cli->l_obs1)
                DEVPOS(16,13);DEVOUT(cli->l_obs2)
                setcor(3)

                DEVPOS(18,15);DEVOUT(cli->ultcomp_m)
                DEVPOS(18,36);DEVOUT(cli->numped_m)
                DEVPOS(18,58);DEVOUTPICT(cli->vlrcomp_m,'9,999,999.99')
                DEVPOS(19,15);DEVOUT(cli->ult_comp)
                DEVPOS(19,36);DEVOUT(cli->num_ped)
                DEVPOS(19,58);DEVOUTPICT(cli->vlr_comp,'9,999,999.99')
                DEVPOS(20,19);DEVOUTPICT(cli->dia_atras/cli->qtd_doc,'999.99')
                DEVPOS(20,36);DEVOUTPICT(cli->qtd_doc,'9999')
                mcompras := 0
                mcompras := ver_compras(mcod_cli)
                setcor(3)
                DEVPOS(21,9);DEVOUTPICT(cli->limite,'9,999,999.99')
                DEVPOS(21,32);DEVOUTPICT(mcompras,'9,999,999.99')
                DEVPOS(21,53);DEVOUTPICT(cli->limite - mcompras,'9,999,999.99')
                IF nivel_acess = '1'
                        mensagem('Aguarde Calculando o ACUMULADO DE COMPRAS.....')
                        mvlr_compras := {}
                        sr_getconnection():exec("SELECT SUM(valor) FROM sacdupr WHERE fornec = "+sr_cdbvalue(cli->cod_cli)+" AND emissao >= "+sr_cdbvalue(mdata_sis - 365),,.t.,@mvlr_compras)
                        IF LEN(mvlr_compras) > 0
                                DEVPOS(22,22);DEVOUTPICT(mvlr_compras[1,1],'9,999,999.99')
                        ELSE
                                DEVPOS(22,22);DEVOUTPICT(0,'9,999,999.99')
                        ENDIF
                ENDIF
                DEVPOS(22,60);DEVOUT(cli->ult_orc)
                DEVPOS(23,23);DEVOUT(cli->pocket)
                limpa(12,38,12,38+30)
                limpa(13,22,13,22+30)
                ven(VAL(cli->codvend),12,38,'*')
                ven(VAL(cli->codoper),13,22,'*')
                IF(ver_aniv(mcod_cli),.T.,.F.)
                setcor(1)

                IF ver_serie() = '141488'
                        IF cli->tipo = 'B'
                                WVW_DrawLabel(,24,30,'CLIENTE BRILHANTE',,,210,, 'Arial Black',35,20,,,,,)
                        ELSEIF cli->tipo = 'C'
                                WVW_DrawLabel(,24,30,'CLIENTE          ',,,210,, 'Arial Black',35,20,,,,,)
                        ELSEIF cli->tipo = 'D'
                                WVW_DrawLabel(,24,30,'CLIENTE DIAMANTE ',,,210,, 'Arial Black',35,20,,,,,)
                        ELSEIF cli->tipo = 'E'
                                WVW_DrawLabel(,24,30,'CLIENTE EXCLUIDO ',,,210,, 'Arial Black',35,20,,,,,)
                        ELSEIF cli->tipo = 'O'
                                WVW_DrawLabel(,24,30,'OUTROS           ',,,210,, 'Arial Black',35,20,,,,,)
                        ELSEIF cli->tipo = 'P'
                                WVW_DrawLabel(,24,30,'CLIENTE PEROLA   ',,,210,, 'Arial Black',35,20,,,,,)
                        ELSEIF cli->tipo = 'R'
                                WVW_DrawLabel(,24,30,'CLIENTE RUBI     ',,,210,, 'Arial Black',35,20,,,,,)
                        ELSE
                                limpa(24,30,26,70)
                        ENDIF
                ENDIF
                IF mtipo_con = 'F'
                        mensagem('<D>ocumentos <C>heque <H>istorico C<O>mercial <U>Autorizar <R>Credito <ESC>Aband.')
                ELSE
                        mensagem('<D>oc. <C>heque <M>ov. <H>ist. <P>Pedido C<O>mercial <N>NF <U>Autorizar <R>Credito <T>Dependentes')
                ENDIF
                IF cli->tipo = 'U' .AND. ! EMPTY(cli->codforn)
                        DEVPOS(23,1);DEVOUT('Cod.no CONTAS APAGAR: ')
                        setcor(3)
                        DEVPOS(23,COL());DEVOUT(cli->codforn+' - ')
                        setcor(1)
                        v_fornece(VAL(cli->codforn),23,COL())
                ENDIF
                WVW_PBEnable( NIL, nPBId, .T. )
                WVW_PBEnable( NIL, nPBId1, .T. )
                opcao := ' '
                //DEVPOS(26,01);DEVOUT('Digite a opcao que Deseja:')
                //@ 26,01 GET opcao
                //READ
                INKEY(0)
                IF LASTKEY() = 27
                        RESTSCREEN(00,00,24,79,tela)
                        EXIT
                ENDIF
                IF LASTKEY() = 5
                        SKIP
                        IF EOF()
                                atencao('Fim de Arquivo !!!')
                                SKIP -1
                        ENDIF
                        LOOP
                ENDIF
                IF LASTKEY() = 24
                        SKIP -1
                        IF BOF()
                                atencao('Inicio de Arquivo !!!')
                                SKIP
                        ENDIF
                        LOOP
                ENDIF
                IF LASTKEY() = ASC('o') .OR. LASTKEY() = ASC('O')
                        tela1 := SAVESCREEN(01,00,24,79)
                        botao(0,0,lb,cb,,' DADOS COMERCIAL ')
                        setcor(1)
                        DEVPOS(1,01);DEVOUT('Endereco p/Cobranca:')
                        DEVPOS(2,01);DEVOUT('Bairro.....:')
                        DEVPOS(2,36);DEVOUT('Cidade:')
                        DEVPOS(3,01);DEVOUT('UF.........:')
                        DEVPOS(3,17);DEVOUT('CEP:')
                        DEVPOS(3,33);DEVOUT('Fone:')
                        DEVPOS(4,01);DEVOUT('Empresa....:')
                        DEVPOS(4,36);DEVOUT('Cargo:')
                        DEVPOS(5,01);DEVOUT('Salario....:')
                        DEVPOS(6,01);DEVOUT('Endereco...:')
                        DEVPOS(7,01);DEVOUT('Bairro.....:')
                        DEVPOS(8,01);DEVOUT('Cidade.....:')
                        DEVPOS(8,36);DEVOUT('UF...:')
                        DEVPOS(8,47);DEVOUT('CEP:')
                        DEVPOS(9,01);DEVOUT('Fone.......:')
                        DEVPOS(9,30);DEVOUT('Fax:')

                        DEVPOS(10,01);DEVOUT('Filiacao...:')

                        DEVPOS(12,01);DEVOUT('Ref.Pessoal:')
                        DEVPOS(12,43);DEVOUT('Fone:')
                        DEVPOS(13,01);DEVOUT('Ref.Pessoal:')
                        DEVPOS(13,43);DEVOUT('Fone:')
                        DEVPOS(14,01);DEVOUT('Loja.......:')
                        DEVPOS(14,43);DEVOUT('Desde:')
                        DEVPOS(15,01);DEVOUT('Loja.......:')
                        DEVPOS(15,43);DEVOUT('Desde:')
                        DEVPOS(16,01);DEVOUT('Banco......:')
                        DEVPOS(16,27);DEVOUT('Agencia:')
                        DEVPOS(16,48);DEVOUT('C/C:')
                        DEVPOS(17,01);DEVOUT('Banco......:')
                        DEVPOS(17,27);DEVOUT('Agencia:')
                        DEVPOS(17,48);DEVOUT('C/C:')
                        DEVPOS(18,01);DEVOUT('Cartao.....:')
                        DEVPOS(18,32);DEVOUT('No.:')
                        DEVPOS(18,57);DEVOUT('Venc.:')
                        DEVPOS(19,01);DEVOUT('Cartao.....:')
                        DEVPOS(19,32);DEVOUT('No.:')
                        DEVPOS(19,57);DEVOUT('Venc.:')
                        setcor(3)
                        DEVPOS(1,22);DEVOUT(cli->end_cob)
                        DEVPOS(2,14);DEVOUT(cli->bairro_cob)
                        DEVPOS(2,44);DEVOUT(cli->cidade_cob)
                        DEVPOS(3,14);DEVOUT(cli->uf_cob)
                        DEVPOS(3,22);DEVOUTPICT(cli->cep_cob,'@@R 99999-999')
                        DEVPOS(3,39);DEVOUT(cli->fone_cob)
                        DEVPOS(4,14);DEVOUT(cli->empre_c)
                        DEVPOS(4,43);DEVOUT(cli->cargo_c)
                        DEVPOS(5,14);DEVOUT(cli->salario_c)
                        DEVPOS(6,14);DEVOUT(cli->end_c)
                        DEVPOS(7,14);DEVOUT(cli->bairro_c)
                        DEVPOS(8,14);DEVOUT(cli->cidade_c)
                        DEVPOS(8,43);DEVOUT(cli->uf_c)
                        DEVPOS(8,52);DEVOUTPICT(cli->cep_c,'@@R 99999-999')
                        DEVPOS(9,14);DEVOUT(cli->fone_c1)
                        DEVPOS(9,35);DEVOUT(cli->fone_c2)
                        DEVPOS(10,14);DEVOUT(cli->pai)
                        DEVPOS(10,14);DEVOUT(cli->mae)
                        DEVPOS(12,14);DEVOUT(cli->nome_r1)
                        DEVPOS(12,49);DEVOUT(cli->fone_r1)
                        DEVPOS(13,14);DEVOUT(cli->nome_r2)
                        DEVPOS(13,49);DEVOUT(cli->fone_r2)
                        DEVPOS(14,14);DEVOUT(cli->loja1)
                        DEVPOS(14,50);DEVOUT(cli->desde1)
                        DEVPOS(15,14);DEVOUT(cli->loja2)
                        DEVPOS(15,50);DEVOUT(cli->desde2)
                        DEVPOS(16,14);DEVOUT(cli->banco1)
                        DEVPOS(16,35);DEVOUT(cli->ag1)
                        DEVPOS(16,52);DEVOUT(cli->conta1)
                        DEVPOS(17,14);DEVOUT(cli->banco2)
                        DEVPOS(17,35);DEVOUT(cli->ag2)
                        DEVPOS(17,52);DEVOUT(cli->conta2)
                        DEVPOS(18,14);DEVOUT(cli->cartao1)
                        DEVPOS(18,36);DEVOUT(cli->no1)
                        DEVPOS(18,63);DEVOUT(cli->venc1)
                        DEVPOS(19,14);DEVOUT(cli->cartao2)
                        DEVPOS(19,36);DEVOUT(cli->no2)
                        DEVPOS(19,63);DEVOUT(cli->venc2)
                        setcor(1)
                        INKEY(0)
                        RESTSCREEN(01,00,24,79,tela1)
                ELSEIF LASTKEY() = ASC('d') .OR. LASTKEY() = ASC('D')
                        mcon_sele:= SELE()
                        mcon_orde:=INDEXORD()
                        //IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
                        con244(cli->cod_cli)
                        SELE(mcon_sele);ORDSETFOCUS(mcon_orde)
                ELSEIF LASTKEY() = ASC('r') .OR. LASTKEY() = ASC('R')
                        mcon_sele:= SELE()
                        mcon_orde:=INDEXORD()
                        con244(cli->cod_cli,'C')
                        SELE(mcon_sele);ORDSETFOCUS(mcon_orde)
                ELSEIF LASTKEY() = ASC('a') .OR. LASTKEY() = ASC('A')
                        mult_compra := {}
                        cComm  := "SELECT pnum_ped,pdat_ped FROM sacped_s WHERE sr_deleted = ' ' AND pcod_cli = "+sr_cdbvalue(cli->cod_cli)+" AND pdat_ped >= "+sr_cdbvalue(mdata_sis - 365)+" ORDER BY pnum_ped,pdat_ped"
                        sr_getconnection():exec(ccomm,,.t.,@mult_compra)
                        IF LEN(mult_compra) > 0
                                mnum_ped := mult_compra[LEN(mult_compra),1]
                                mdat_ped := mult_compra[LEN(mult_compra),2]
                                mult_compra := {}
                                cComm  := "SELECT SUM(pquantd*pvlr_fat) FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(mnum_ped)
                                sr_getconnection():exec(ccomm,,.t.,@mult_compra)
                                cComm  := "UPDATE saccli SET ult_comp = "+sr_cdbvalue(mdat_ped)+", num_ped = "+sr_cdbvalue(mnum_ped)+", vlr_comp = "+sr_cdbvalue(iat(mult_compra[1,1],2))+" WHERE cod_cli = "+sr_cdbvalue(cli->cod_cli)
                                sr_getconnection():exec(ccomm,,.f.)
                                sr_getconnection():exec('COMMIT',,.f.)
                        ENDIF

                        dias_atras(mcod_cli)
                        LOOP
                ELSEIF (LASTKEY() = ASC('t') .OR. LASTKEY() = ASC('T'))
                        sacdepe(STRZERO(mcod_cli,5))
                        LOOP
                ELSEIF LASTKEY() = ASC('u') .OR. LASTKEY() = ASC('U')
                        autorizar(STRZERO(mcod_cli,5))
                        LOOP
                ELSEIF LASTKEY() = ASC('c') .OR. LASTKEY() = ASC('C')
                        clicheq()       // mesmo 'PRG'
                ELSEIF LASTKEY() = ASC('m') .OR. LASTKEY() = ASC('M')
                        IF ! AbriArq('SACMOV','MOV');RETURN NIL;ENDIF
                        IF ! AbriArq('SACMOVNT','MOVNT');RETURN NIL;ENDIF
                        IF ! AbriArq('SACTOTNT','TOTNT');RETURN NIL;ENDIF
                        sac525(mcod_cli)
                ELSEIF LASTKEY() = ASC('n') .OR. LASTKEY() = ASC('N')
                        IF ! AbriArq('SACMOVNT','MOVNT');RETURN NIL;ENDIF
                        IF ! AbriArq('SACTOTNT','TOTNT');RETURN NIL;ENDIF
                        sac5not1(mcod_cli)
                ELSEIF LASTKEY() = ASC('h') .OR. LASTKEY() = ASC('H')
                        tela1 := SAVESCREEN(01,00,24,79)
                        mcon_sele:= SELE();mcon_orde:=INDEXORD()
                        WHILE .T.
                                ASIZE(m_hist,0)
                                ASIZE(m_ponto,0)
                                ******************
                                SELE('hist');ORDSETFOCUS(1)
                                GO TOP
                                IF hist->(DBSEEK(cli->cod_cli))
                                        AADD(m_hist,'Data:'+DTOC(hist->data)+' - '+hist->descricao)
                                        AADD(m_ponto,RECNO())
                                        mdata_con := hist->data
                                        SKIP
                                        WHILE ! EOF() .AND. cli->cod_cli = hist->codcli
                                                IF mdata_con = hist->data
                                                        AADD(m_hist,'                '+hist->descricao)
                                                        AADD(m_ponto,RECNO())
                                                ELSEIF ! EOF()
                                                        AADD(m_hist,REPLI('-',76-03))
                                                        AADD(m_ponto,0)
                                                        AADD(m_hist,'Data:'+DTOC(hist->data)+' - '+hist->descricao)
                                                        AADD(m_ponto,RECNO())
                                                        mdata_con := hist->data
                                                ENDIF
                                                SKIP
                                        ENDDO
                                        AADD(m_hist,PADC('****************************  F  I  M  ****************************',76-03))
                                        AADD(m_ponto,0)
                                ENDIF
                                setcor(3)
                                botao(1,00,lb,79,,' HISTORICO DO CLIENTE ')
                                IF ! EMPTY(m_hist)
                                        mponto := LEN(m_hist)
                                        Mensagem('<ENTER> p/alterar ou <ESC>p/Inclusao')
                                        setcor(10);mponto := ACHOICE(2,01,lb-1,78,m_hist,,,mponto);setcor(1)
                                        RESTSCREEN(01,00,24,79,tela1)
                                        SELE(mcon_sele);ORDSETFOCUS(mcon_orde)
                                        opcao := mensagem1('Deseja Imprimir o Historico do CLIENTE:','N','S,N')
                                        IF opcao = 'S'
                                                botao(10,10,14,50,,' Imprimir o Historico ')
                                                DEVPOS(11,11);DEVOUT('Data Inicial do Historico..:')
                                                @ 12,11 TO 12,49
                                                DEVPOS(13,11);DEVOUT('Data Inicial dos Documentos:')
                                                @ 11,39 GET mdata1
                                                @ 13,39 GET mdata_doc
                                                READ
                                                IF LASTKEY() = 27
                                                        LOOP
                                                ENDIF
                                                ******************
                                                SELE('hist');ORDSETFOCUS(1)
                                                GO TOP
                                                pag := 0
                                                mtit := 'HISTORICO DO CLIENTE'
                                                IF hist->(DBSEEK(cli->cod_cli))
                                                        mcompras := 0
                                                        mcompras := ver_compras(mcod_cli)
                                                        IF ! imp_arq('HIST_CLI.REL','R')
                                                                LOOP
                                                        ENDIF
                                                        mdata_aux := CTOD('  /  /  ')
                                                        WHILE ! EOF() .AND. cli->cod_cli = hist->codcli
                                                                IF pag=0 .OR. PROW()>=59
                                                                        pag=pag+1
                                                                        IF pag>1
                                                                                EJECT
                                                                        ENDIF
                                                                        cabecalho(pag,mtit,mtipo,mprg)
                                                                        DEVPOS(PROW()+1,00);DEVOUT('CLIENTE: '+cli->cod_cli+' - '+cli->razao)
                                                                        DEVPOS(PROW()+1,00);DEVOUT('DATA DE CADASTRO: '+DTOC(cli->data_cad))
                                                                        DEVPOS(PROW()+1,00);DEVOUT('LIMITE R$: ')
                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cli->limite,'9,999,999.99')
                                                                        DEVPOS(PROW(),PCOL()+2);DEVOUT('COMPRAS R$: ')
                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mcompras,'9,999,999.99')
                                                                        DEVPOS(PROW(),PCOL()+2);DEVOUT('SALDO R$: ')
                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cli->limite - mcompras,'9,999,999.99')
                                                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                                                                ENDIF
                                                                IF hist->data < mdata1
                                                                        SKIP;LOOP
                                                                ENDIF
                                                                IF mdata_aux <> hist->data
                                                                        DEVPOS(PROW()+1,00);DEVOUT(hist->data)
                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' - Descricao:')
                                                                        mdata_aux := hist->data
                                                                ELSE
                                                                        DEVPOS(PROW()+1,00);DEVOUT(SPACE(8))
                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('             ')
                                                                ENDIF
                                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(hist->descricao)
                                                                SKIP
                                                        ENDDO
                                                        IF ! EMPTY(mdata_doc)
                                                                **************
                                                                SELE('dupr');ORDSETFOCUS(3)
                                                                GO TOP
                                                                **************
                                                                dupr->(DBSEEK(DTOS(mdata_doc),.T.))
                                                                IF ! EOF()
                                                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                                                                        DEVPOS(PROW()+1,00);DEVOUT(' DOCUMENTO PAGOS no Periodo de : '+DTOC(mdata_doc)+' a '+DTOC(mdata_sis))
                                                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                                                                        DEVPOS(PROW()+1,00);DEVOUT('     Documento')
                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' Emissao')
                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' Vencim.')
                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Data Pg.')
                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Atrazo')
                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Valor Doc.')
                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Valor Pag.')
                                                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                                                                        WHILE ! EOF() .AND. dupr->datpag <= mdata_sis
                                                                                IF pag=0 .OR. PROW()>=59
                                                                                        pag=pag+1
                                                                                        IF pag>1
                                                                                                EJECT
                                                                                        ENDIF
                                                                                        cabecalho(pag,mtit,mtipo,mprg)
                                                                                        DEVPOS(PROW()+1,00);DEVOUT('     Documento')
                                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' Emissao')
                                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' Vencim.')
                                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Data Pg.')
                                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Atrazo')
                                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Valor Doc.')
                                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Valor Pag.')
                                                                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                                                                                ENDIF
                                                                                IF (dupr->pago <> 'B');
                                                                                   .OR.(dupr->fornec<>STRZERO(mcod_cli,5))
                                                                                        SKIP;LOOP
                                                                                ENDIF
                                                                                DEVPOS(PROW()+1,00);DEVOUT(dupr->tipo+dupr->duplicata)
                                                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(DTOC(dupr->emissao))
                                                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(DTOC(dupr->venc))
                                                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(DTOC(dupr->datpag))
                                                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(dupr->venc-dupr->datpag,'999999')
                                                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(dupr->valor,'999,999.99')
                                                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(dupr->vlpago,'999,999.99')
                                                                                SKIP
                                                                        ENDDO
                                                                ENDIF
                                                                **************
                                                                SELE('dupr');ORDSETFOCUS(4)
                                                                GO TOP
                                                                **************
                                                                dupr->(DBSEEK(DTOS(mdata_doc),.T.))
                                                                IF ! EOF()
                                                                        mtot_doc := mqtd_doc := 0
                                                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                                                                        DEVPOS(PROW()+1,00);DEVOUT(' DOCUMENTO A RECEBER ')
                                                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                                                                        DEVPOS(PROW()+1,00);DEVOUT('     Documento')
                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' Emissao')
                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' Vencim.')
                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Atrazo')
                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Valor Doc.')
                                                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                                                                        WHILE ! EOF()
                                                                                IF pag=0 .OR. PROW()>=59
                                                                                        pag=pag+1
                                                                                        IF pag>1
                                                                                                EJECT
                                                                                        ENDIF
                                                                                        cabecalho(pag,mtit,mtipo,mprg)
                                                                                        DEVPOS(PROW()+1,00);DEVOUT('     Documento')
                                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' Emissao')
                                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' Vencim.')
                                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Atrazo')
                                                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Valor Doc.')
                                                                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                                                                                ENDIF
                                                                                IF (! EMPTY(dupr->datpag));
                                                                                   .OR.(dupr->fornec<>STRZERO(mcod_cli,5))
                                                                                        SKIP;LOOP
                                                                                ENDIF
                                                                                DEVPOS(PROW()+1,00);DEVOUT(dupr->tipo+dupr->duplicata)
                                                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(DTOC(dupr->emissao))
                                                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(DTOC(dupr->venc))
                                                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(dupr->venc-mdata_sis,'999999')
                                                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(dupr->valor,'999,999.99')
                                                                                mtot_doc := mtot_doc + dupr->valor
                                                                                mqtd_doc ++
                                                                                SKIP
                                                                        ENDDO
                                                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                                                                        DEVPOS(PROW()+1,00);DEVOUT('RESUMO: Total de Documentos: '+TRANSFORM(mqtd_doc,'999999')+' em Valor R$: '+TRANSFORM(mtot_doc,'9,999,999.99'))
                                                                ENDIF
                                                        ENDIF
                                                        EJECT
                                                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                                                        conf_impressao('HIST_CLI.REL')
                                                ENDIF
                                        ENDIF
                                        EXIT

                                ELSE
                                        atencao('Nao existe nenhum HISTORICO deste CLIENTE')
                                        SELE(mcon_sele);ORDSETFOCUS(mcon_orde)
                                        EXIT
                                ENDIF
                        ENDDO
                        RESTSCREEN(01,00,24,79,tela1)
                        SET KEY -9 TO
                ELSEIF LASTKEY() = ASC('p') .OR. LASTKEY() = ASC('P')
                        mcon_sele:= SELE();mcon_orde:=INDEXORD()
                        IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
                        sac5ped5(mcod_cli)
                        SELE(mcon_sele);ORDSETFOCUS(mcon_orde)
                ELSEIF LASTKEY() = -1
                        mcon_sele:= SELE();mcon_orde:=INDEXORD()
                        IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
                        //sac23pd1()
                        SELE(mcon_sele);ORDSETFOCUS(mcon_orde)
                ENDIF
        ENDDO
        WVW_SetMouseMove(,.T.)
        LOOP
ENDDO
CLOSE ALL
RETURN NIL
*********************** f i m ************************************
/*
* CONSULTA DE CHEQUE SEM FUNDO DO CLIENTE
********************************************
FUNCTION clicheq
****************
LOCAL tela,tela1,lba,cba,li,ci,lb,cb,opcao,marq,i,m_posicao:={},;
       m_movimento:={},point,msele,morde
MEMVAR mcod_cli
PRIVATE mnome_ven := SPACE(30)

tela := SAVESCREEN(01,00,24,79)

lba := 14
cba := 33

li := 05
ci := 02
lb := 21
cb := 65

msele := SELE()
morde := INDEXORD()
****************
SELE('cheq');ORDSETFOCUS(1)
GO TOP
****************

WHILE .T.
        mnome_ven := SPACE(30)
        IF ! cheq->(DBSEEK(STRZERO(mcod_cli,5)))
                atencao('Nao existe nenhum cheque sem fundo deste Cliente')
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN NIL
        ENDIF

        WHILE STRZERO(mcod_cli,5) = cheq->cod_cli .AND. ! EOF()
                AADD(m_movimento,' '+DTOC(cheq->data_fund)+' '+CHR(179)+' '+DTOC(cheq->data_cheq)+' '+CHR(179)+' '+cheq->num_ban+' '+CHR(179)+cheq->num_cheq+CHR(179)+TRANSFORM(cheq->valor_cheq,'9,999,999.99')+CHR(179)+cheq->ok)
                AADD(m_posicao,RECNO())
                SKIP
        ENDDO
        IF LEN(m_movimento) = 0
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        botao(li,ci,lb,cb)
        @ 2,1 TO 2,cb-1
        @ 3,11 TO lb-1,11
        @ 3,25 TO lb-1,25
        @ 3,31 TO lb-1,31
        @ 3,46 TO lb-1,46
        @ 3,55 TO lb-1,55
        DEVPOS(1,1);DEVOUT('Ocorrencia')
        DEVPOS(1,15);DEVOUT('Data')
        DEVPOS(1,25);DEVOUT('Banco')
        DEVPOS(1,31);DEVOUT('No.Cheque')
        DEVPOS(1,46);DEVOUT('Valor')
        DEVPOS(1,55);DEVOUT('Sit.')
        setcor(1)
        tela1 := SAVESCREEN(01,00,24,79)
        WHILE .T.
                CLEAR TYPEAHEAD
                mensagem("< ou > Consulta  -  <ESC> Retorna  -  <ENTER> p/Resumo" )
                setcor(10);point := ACHOICE(3,1,lb-1,cb-1,m_movimento);setcor(1)

                DO CASE
                        CASE LASTKEY()=27
                                RESTSCREEN(01,00,24,79,tela)
                                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                                RETURN NIL
                        CASE LASTKEY() = 13
                                GO m_posicao[point]
                                botao(09,06,17,70)
                                DEVPOS(10,08);DEVOUT('Motivo...........:')
                                DEVPOS(11,08);DEVOUT('Vendedor.........:')
                                DEVPOS(12,08);DEVOUT('Operador Inclusao:')
                                DEVPOS(13,08);DEVOUT('Operador Baixa...:')
                                DEVPOS(14,08);DEVOUT('Correntista......:')
                                DEVPOS(15,08);DEVOUT('Situacao.........:')
                                setcor(3)
                                DEVPOS(10,27);DEVOUT(cheq->motivo)
                                ver_ven(cheq->cod_vend)
                                mnome_ven := sen->snome
                                setcor(3)
                                DEVPOS(11,27);DEVOUT(cheq->cod_vend+'-'+mnome_ven)
                                ver_ven(cheq->cod_incl)
                                mnome_ven := sen->snome
                                setcor(3)
                                DEVPOS(12,27);DEVOUT(cheq->cod_incl+'-'+mnome_ven)
                                ver_ven(cheq->cod_opera)
                                mnome_ven := sen->snome
                                setcor(3)
                                DEVPOS(13,27);DEVOUT(cheq->cod_opera+'-'+mnome_ven)
                                DEVPOS(14,27);DEVOUT(cheq->correntist)
                                IF cheq->ok = '*'
                                        DEVPOS(15,27);DEVOUT('Este cheque ja foi resolvido ')
                                ELSE
                                        DEVPOS(15,27);DEVOUT('Este cheque esta em aberto')
                                ENDIF
                                setcor(1)
                                mensagem('Pressione qualquer tecla p/retornar')
                                INKEY(0)
                                RESTSCREEN(01,00,24,79,tela1)
                                LOOP
                ENDCASE
        ENDDO
ENDDO
RETURN NIL
*********************** f i m ************************************
FUNCTION cli_email(mtipo_con)
*****************************
LOCAL mcaminho:=''

//op_tela(10,10,35,95,' Consulta de CLIENTES ')

nHandle := FCreate('mensagem.txt')
If nHandle == -1
        atencao("Nao foi possivel criar o arquivo de Estoque")
        Return(.F.)
EndIf
nBytes := FWrite(nHandle,'Teste de EMAIL'+m_qp)
if nBytes = 0
        atencao("Erro na gravacao do conteudo do arquivo do Tipo ")
        Return(.F.)
EndIf
FClose(nhandle)

c_arq := 'mensagem.txt'
mcaminho := ALLTRIM(m_indiv[1,3])+cli->cod_cli+SUBSTR(STRTRAN(cli->razao,' ',''),1,10)
MYRUN('MD '+mcaminho)
mcaminho := ALLTRIM(m_indiv[1,3])+cli->cod_cli+SUBSTR(STRTRAN(cli->razao,' ',''),1,10)+'\boleto.pdf'
msubject :=STRTRAN('Error da Empresa:'+memp_resa+' - Operador: '+cod_operado+' - Data:'+DTOC(DATE())+' as '+TIME(),' ','%20')
//MYRUN('lssendmail.exe -from="erroHTI@HTIsistemas.com.br" -to="erroHTI@HTIsistemas.com.br" -subject='+msubject+'  -messagefile='+ALLTRIM(m_indiv[1,5])+cArq+' -messagetype=txt -attached='+ALLTRIM(m_indiv[1,5])+cArq+' -user="erroHTI@HTIsistemas.com.br" -password="HTI6821" -host="smtp.HTIsistemas.com.br" -port="25" -ssl="n" -tls="n"')
//atencao('lssendmail.exe -from="error@htisistemas.com" -to="error@htisistemas.com" -subject='+msubject+' -attached='+mcaminho+' -user="error@htisistemas.com" -password="error" -host="mail.htisistemas.com" -port="1025" -ssl="n" -tls="n"')
//  MYRUN('lssendmail.exe -from="error@htisistemas.com" -to="error@htisistemas.com" -subject='+msubject+' -messagefile='+c_arq+' -messagetype=txt -attached='+mcaminho+' -user="error@htisistemas.com" -password="error" -host="mail.htisistemas.com" -port="1025" -ssl="n" -tls="n"')


atencao('lssendmail.exe -from="suporte@htisistemas.com" -to='+ALLTRIM(cli->email)+' -subject='+msubject+'  -messagefile='+c_arq+' -messagetype=txt -attached='+mcaminho+' -user="suporte@htisistemas.com" -password="suporte" -host="mail.htisistemas.com" -port="1025" -ssl="n" -tls="n"')
  MYRUN('lssendmail.exe -from="suporte@htisistemas.com" -to='+ALLTRIM(cli->email)+' -subject='+msubject+'  -messagefile='+c_arq+' -messagetype=txt -attached='+mcaminho+' -user="suporte@htisistemas.com" -password="suporte" -host="mail.htisistemas.com" -port="1025" -ssl="n" -tls="n"') //
RETURN NIL
*/