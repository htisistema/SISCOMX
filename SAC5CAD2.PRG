*************************
* RELATORIO DE FORNECEDOR
*************************
MEMVAR getlist,mdata_sis

FUNCTION sac5cad2
***************
LOCAL MPRG:='SAC5CAD2'

LOCAL opcao

PRIVATE mcod_forn,mdata1,mdata2

*------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
*------------------------------------------------------------------
op_tela(00,00,17,79,' RELATORIO DE FORNECEDOR ')
WHILE .T.
        exibi_prg(mprg)
        mdata2 := mdata_sis
        opcao := 'S'
        mcod_forn := 0

        limpa(0,00,15,54)

        DEVPOS(00,01);DEVOUT('Codigo....:')
        DEVPOS(00,19);DEVOUT('Data Cadastro.:')
        DEVPOS(01,01);DEVOUT('R.Social..:')

        botao(03,00,08,49,,' Logradouro ')

        DEVPOS(04,01);DEVOUT('Endereco..:')
        DEVPOS(05,01);DEVOUT('Bairro....:')
        DEVPOS(06,01);DEVOUT('Cidade....:')
        DEVPOS(06,35);DEVOUT('UF...:')
        DEVPOS(07,01);DEVOUT('CEP.......:')
        DEVPOS(07,35);DEVOUT('C.P..:')

        botao(09,00,12,45,,' Telefones ')

        DEVPOS(10,01);DEVOUT('Fone__:')
        DEVPOS(10,24);DEVOUT('Fone_:')
        DEVPOS(11,01);DEVOUT('Fax___:')

        botao(13,14,15,47)
        DEVPOS(13,18);DEVOUT(' Observacao ')

        botao(13,00,15,13)
        DEVPOS(13,01);DEVOUT(' Ult.Compra ')

        botao(06,50,03,79)
        DEVPOS(06,52);DEVOUT(' Identidicacao ')
        DEVPOS(00,51);DEVOUT('CGC___:')
        DEVPOS(01,51);DEVOUT('Insc._:')
        DEVPOS(02,51);DEVOUT('CPF___:')

        botao(04,51,09,79)
        DEVPOS(04,53);DEVOUT(' Cobranca ')
        DEVPOS(05,52);DEVOUT('Banco_____:')
        DEVPOS(06,52);DEVOUT('Carteira__:')
        DEVPOS(07,52);DEVOUT('Prazo Pag.:')
        DEVPOS(08,52);DEVOUT('Limite____:')

        botao(10,48,15,79)
        DEVPOS(10,50);DEVOUT(' Contatos ')
        DEVPOS(11,49);DEVOUT('Gerente_____:')
        DEVPOS(12,49);DEVOUT('Faturamento_:')
        DEVPOS(13,49);DEVOUT('Cobranca____:')
        DEVPOS(14,49);DEVOUT('Vendedor____:')
        SET INTEN ON

        @ 00,13 GET mcod_forn PICT '9999'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF EMPTY(mcod_forn)
                LOOP
        ENDIF

        ****************
        SELE('forn');ORDSETFOCUS(1)
        ****************

        IF ! forn->(DBSEEK(STRZERO(mcod_forn,4)))
                atencao('Codigo nao Cadastrado !!!')
                LOOP
        ENDIF

        WHILE .T.
                mcod_forn := VAL(forn->cod_forn)
                mdata1 := forn->data_cad
                setcor(3)
                DEVPOS(00,13);DEVOUT(STRZERO(mcod_forn,4))
                DEVPOS(00,35);DEVOUT(forn->data_cad)
                DEVPOS(01,13);DEVOUT(forn->razao)

                DEVPOS(04,13);DEVOUT(forn->endereco)
                DEVPOS(05,13);DEVOUT(forn->bairro)
                DEVPOS(06,13);DEVOUT(forn->cidade)
                DEVPOS(06,42);DEVOUT(forn->uf)
                DEVPOS(07,13);DEVOUT(forn->cep)
                DEVPOS(07,42);DEVOUT(forn->cpostal)

                DEVPOS(10,09);DEVOUT(forn->tel1)
                DEVPOS(10,31);DEVOUT(forn->tel2)
                DEVPOS(11,09);DEVOUT(forn->fax)

                DEVPOS(00,59);DEVOUTPICT(forn->cgc,'@@R 99.999.999/9999-99')
                DEVPOS(01,59);DEVOUTPICT(forn->insc,'@@R 99999999999999')
                DEVPOS(02,59);DEVOUTPICT(forn->cpf,'@@R 999.999.999-99')

                DEVPOS(05,63);DEVOUT(forn->banco)
                DEVPOS(06,63);DEVOUT(forn->carteira)
                DEVPOS(07,63);DEVOUT(forn->prazo_pag)
                DEVPOS(08,63);DEVOUTPICT(forn->limite,'9,999,999.99')

                DEVPOS(11,62);DEVOUT(forn->ct_gerente)
                DEVPOS(12,62);DEVOUT(forn->ct_fatura)
                DEVPOS(13,62);DEVOUT(forn->ct_cobran)
                DEVPOS(14,62);DEVOUT(forn->ct_vendedo)

                DEVPOS(14,16);DEVOUT(forn->obs)
                DEVPOS(14,03);DEVOUT(forn->ult_comp)
                setcor(1)

                mensagem('Imprimir <C>adastro  -  Imprimir <M>ovimento  -  <ESC>Sair')
                INKEY(0)
                IF LASTKEY() = 27
                        RESTSCREEN(01,00,24,79)
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
                IF LASTKEY() = 18
                        SKIP 10
                        IF EOF()
                                atencao('Fim de Arquivo !!!')
                                GO BOTT
                        ENDIF
                        LOOP
                ENDIF
                IF LASTKEY() = 3
                        SKIP -10
                        IF BOF()
                                atencao('Inicio de Arquivo !!!')
                                GO TOP
                        ENDIF
                        LOOP
                ENDIF
                IF LASTKEY() = ASC('c') .OR. LASTKEY() = ASC('C')
                        iforncad()        // mesmo 'PRG'
                ENDIF
                IF LASTKEY() = ASC('m') .OR. LASTKEY() = ASC('M')
                        ifornmov()        // mesmo 'PRG'
                ENDIF
        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** f i m ************************************
**********************************
* CONSULTA MOVIMENTO DO FORNECEDOR
**********************************

FUNCTION ifornmov
**************

LOCAL tela,tela1,lci,cci,lba,cba,opcao,mtecla,mcod_op,;
      mtot_ent,mvlr_ent,msele,morde,mtit,mtipo,mpag,mtraco

MEMVAR mdata1,mdata2,mcod_forn

lci := cci := 0
lba := 06
cba := 33

msele := SELE()
morde := INDEXORD()

mtraco := REPLI('=',80)
op_tela(lci,cci,lba+2,cba,'RELATORIO DE FORNECEDOR')
WHILE .T.
        mcod_op := SPACE(2)
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(lci+1,cci+2);DEVOUT('Cod.Operacao___:')
        @ lci+2,cci TO lci+2,cba DOUBLE
        DEVPOS(lci+3,cci+2);DEVOUT('Data Inicial___:')
        @ lci+4,cci TO lci+4,cba
        DEVPOS(lci+5,cci+2);DEVOUT('Data Final_____:')

        @ lci+1,cci+19 GET mcod_op PICT '99' VALID mcod_op $ '01,02,03,04'
        @ lci+3,cci+19 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+5,cci+19 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        READ
        IF LASTKEY() = 27
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                EXIT
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
        opcao := op_simnao('S','Confirma a Impressao:')
        IF opcao = 'N'
                LOOP
        ELSE
                mpag := mtot_ent := mvlr_ent := 0
                mtit := 'Movimento de: '+DTOC(mdata1)+' a '+DTOC(mdata2)
                mtipo := 'Fornecedor: '+STRZERO(mcod_forn,4)+'-'+RTRIM(forn->razao)
                SET DEVI TO PRINT
                SET PRINT TO (m_indiv[1,17])
                SET PRINT ON
                WHILE mov->data_s_e <= mdata2 .AND. ! EOF()
                        IF (STRZERO(mcod_forn,4) <> mov->cod_forn);
                           .OR. (mcod_op = '01' .AND. mov->tipo = '02');
                           .OR. (mcod_op = '02' .AND. (mov->tipo = '01' .OR. mov->tipo = '03'));
                           .OR. (mcod_op = '03' .AND. (mov->tipo = '01' .OR. mov->tipo = '02'));
                           .OR. (mcod_op = '04' .AND. mov->tipo = '03')
                                SKIP
                                LOOP
                        ENDIF
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
                        DEVPOS(PROW()+1,00);DEVOUT(mov->data_s_e)
                        DEVPOS(PROW(),10);DEVOUT(mov->codigo)
                        DEVPOS(PROW(),17);DEVOUT(mov->documento)
                        DEVPOS(PROW(),27);DEVOUT(TRANSFORM(mov->quantd,'99999.99'))
                        DEVPOS(PROW(),36);DEVOUT(TRANSFORM(mov->pr_unit,'9,999,999.99'))
                        DEVPOS(PROW(),49);DEVOUT(TRANSFORM(mov->quantd * mov->pr_unit,'9,999,999.99'))
                        mvlr_ent = mvlr_ent + mov->pr_unit * mov->quantd
                        mtot_ent = mtot_ent + mov->quantd
                        SKIP
                ENDDO
                DEVPOS(PROW()+2,00);DEVOUT('Total de ENTRADAS...:')
                DEVPOS(PROW(),22);DEVOUT('('+LTRIM(TRANSFORM(mtot_ent,'999999.99'))+')')
                DEVPOS(PROW(),PCOL());DEVOUT(' - R$:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvlr_ent,'999,999,999.99')
                EJECT
                SETPRC(00,00)
                imprt('M','P6');SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************** F I M *************************************
************************************
* EMISSAO DE CADASTRO DE FORNECEDOR
************************************

FUNCTION iforncad
******************
LOCAL opcao,mtraco,mtit,mpag:=0
MEMVAR mcod_forn
PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

mtraco := REPLI('=',80)

********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************

        mtit := 'Cadastro de Fornecedor'
        IF ! imp_arq('CAD_FORN.REL','R')
                RETURN NIL
        ENDIF
        cabecalho(mpag,mtit)

        DEVPOS(PROW()+1,00);DEVOUT(PADC(' Fornecedor ',80))
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)

        DEVPOS(PROW()+1,01);DEVOUT('Codigo____:')
        DEVPOS(PROW(),13);DEVOUT(STRZERO(mcod_forn,4))
        DEVPOS(PROW(),39);DEVOUT('Data Cadastro_:')
        DEVPOS(PROW(),65);DEVOUT(forn->data_cad)
        DEVPOS(PROW()+1,01);DEVOUT('R.Social__:')
        DEVPOS(PROW(),13);DEVOUT(forn->razao)


        DEVPOS(PROW()+2,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT(PADC(' Logradouro ',80))
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)

        DEVPOS(PROW()+1,01);DEVOUT('Endereco__:')
        DEVPOS(PROW(),13);DEVOUT(forn->endereco)
        DEVPOS(PROW()+1,01);DEVOUT('Bairro____:')
        DEVPOS(PROW(),13);DEVOUT(forn->bairro)
        DEVPOS(PROW()+1,01);DEVOUT('Cidade____:')
        DEVPOS(PROW(),13);DEVOUT(forn->cidade)
        DEVPOS(PROW(),35);DEVOUT('UF___:')
        DEVPOS(PROW(),42);DEVOUT(forn->uf)
        DEVPOS(PROW()+1,01);DEVOUT('CEP_______:')
        DEVPOS(PROW(),13);DEVOUT(forn->cep)
        DEVPOS(PROW(),35);DEVOUT('C.P._:')
        DEVPOS(PROW(),42);DEVOUT(forn->cpostal)


        DEVPOS(PROW()+2,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT(PADC(' Telefones ',80))
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)

        DEVPOS(PROW()+1,01);DEVOUT('Fone__:')
        DEVPOS(PROW(),09);DEVOUT(forn->tel1)
        DEVPOS(PROW(),24);DEVOUT('Fone_:')
        DEVPOS(PROW(),31);DEVOUT(forn->tel2)
        DEVPOS(PROW()+1,01);DEVOUT('Fax___:')
        DEVPOS(PROW(),09);DEVOUT(forn->fax)


        DEVPOS(PROW()+2,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT(PADC(' Identidicacao ',80))
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)

        DEVPOS(PROW()+1,01);DEVOUT('CGC___:')
        DEVPOS(PROW(),09);DEVOUTPICT(forn->cgc,'@@R 99.999.999/9999-99')
        DEVPOS(PROW()+1,01);DEVOUT('Insc._:')
        DEVPOS(PROW(),09);DEVOUTPICT(forn->insc,'@@R 99999999999999')
        DEVPOS(PROW()+1,01);DEVOUT('CPF___:')
        DEVPOS(PROW(),09);DEVOUTPICT(forn->cpf,'@@R 999.999.999-99')

        DEVPOS(PROW()+2,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT(PADC(' Cobranca ',80))
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)

        DEVPOS(PROW()+1,01);DEVOUT('Banco_____:')
        DEVPOS(PROW(),12);DEVOUT(forn->banco)
        DEVPOS(PROW()+1,01);DEVOUT('Carteira__:')
        DEVPOS(PROW(),12);DEVOUT(forn->carteira)
        DEVPOS(PROW()+1,01);DEVOUT('Prazo Pag.:')
        DEVPOS(PROW(),12);DEVOUT(forn->prazo_pag)
        DEVPOS(PROW()+1,01);DEVOUT('Limite____:')
        DEVPOS(PROW(),12);DEVOUTPICT(forn->limite,'9,999,999.99')

        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT(PADC(' Contatos ',80))
        DEVPOS(PROW(),00);DEVOUT(PADC(' Contatos ',80))
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)

        DEVPOS(PROW()+1,01);DEVOUT('Gerente_____:')
        DEVPOS(PROW(),14);DEVOUT(forn->ct_gerente)
        DEVPOS(PROW()+1,01);DEVOUT('Faturamento_:')
        DEVPOS(PROW(),14);DEVOUT(forn->ct_fatura)
        DEVPOS(PROW()+1,01);DEVOUT('Cobranca____:')
        DEVPOS(PROW(),14);DEVOUT(forn->ct_cobran)
        DEVPOS(PROW()+1,01);DEVOUT('Vendedor____:')
        DEVPOS(PROW(),14);DEVOUT(forn->ct_vendedo)

        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,01);DEVOUT('Ult.Compra:')
        DEVPOS(PROW(),13);DEVOUT(forn->ult_comp)
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)

        DEVPOS(PROW()+1,00);DEVOUT(PADC(' Observacao ',80))
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT(PADC(forn->obs,80))
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT(TIME())
        EJECT
        SETPRC(00,00)
        imprt('M','P6')
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('CAD_FORN.REL')
        /*
        IF mimp_tipo = 2
                lertexto('CAD_FORN.REL')
        ELSEIF mtipo_imp = 'D'
                
        ELSE
                MYRUN('DOSPRINTER /RAW /DEL '+ALLTRIM(m_indiv[1,5])+'HTI.REL')
        ENDIF
        */
        RETURN NIL
RETURN NIL

