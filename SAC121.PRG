* ALTERACAO DE Transportadora
*****************************
FUNCTION sac121
***************
LOCAL MPRG:='SAC121',;
      mfabrica,mendereco,mbairro,mcidade,muf,mcep,mcpostal,mtel1,mtel2,;
      mfax,mcgc,minsc,mcpf,mprazo_pag,mct_gerente,mct_vendedo,mct_fatura,mplaca,;
      mct_cobranca,mobs,mbanco,mcarteira,opcao,li,ci,lb,cb,;
      mcodigo,tela,lci,cci,lba,cba,point,mcod_tran,muf_placa:='  '
MEMVAR nivel_acess,getlist
IF ! ver_nivel(mprg,'ALTERACAO DA TRANSPORTADORA','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
op_tela(00,00,27,79,' Alteracao da Transportadora ')
WHILE .T.
        exibi_prg(mprg)
        point := RECNO()
        mcodigo := SPACE(4)
        opcao := 'S'
        mfabrica := SPACE(30)
        mendereco := SPACE(35)
        mbairro := mcidade := SPACE(20)
        muf := muf_placa:= SPACE(2)
        mcep := SPACE(9)
        mcpostal := SPACE(6)
        mtel1 := mtel2 := mfax := mcgc := minsc := SPACE(14)
        mcpf := SPACE(11)
        mcarteira := mbanco := SPACE(1)
        mprazo_pag := mplaca := SPACE(8)
        mct_gerente := mct_vendedo := mct_fatura := mct_cobranca := SPACE(15)
        mobs := SPACE(30)
        mensagem('Digite o Nome do Transportadora a ser Cadastrado - <ESC> p/Retornar')
        DEVPOS(00,01);DEVOUT('Codigo.....:')
        DEVPOS(00,19);DEVOUT('Data Cadastro.:')
        DEVPOS(01,01);DEVOUT('R.Social...:')
        DEVPOS(02,01);DEVOUT('CNPJ.......:')
        DEVPOS(03,01);DEVOUT('Insc.......:')
        DEVPOS(04,01);DEVOUT('CPF........:')
        setcor(3)
        @ 05,00 TO 05,100
        DEVPOS(05,02);DEVOUT(' Logradouro ')
        setcor(1)
        DEVPOS(06,01);DEVOUT('Endereco...:')
        DEVPOS(07,01);DEVOUT('Bairro.....:')
        DEVPOS(08,01);DEVOUT('Cidade.....:')
        DEVPOS(09,01);DEVOUT('UF.........:')
        DEVPOS(10,01);DEVOUT('CEP........:')
        DEVPOS(11,01);DEVOUT('Fone.......:')
        DEVPOS(12,01);DEVOUT('Fone.......:')
        DEVPOS(13,01);DEVOUT('Fax........:')

        DEVPOS(14,01);DEVOUT('Placa Carro:')
        DEVPOS(14,24);DEVOUT('UF:')
        DEVPOS(15,01);DEVOUT('ANTT.......:')
        DEVPOS(16,01);DEVOUT('Apolice Seg:')

        setcor(3)
        @ 17,00 TO 17,100
        DEVPOS(17,01);DEVOUT(' Cobranca ')
        setcor(1)
        DEVPOS(18,01);DEVOUT('Banco......:')
        DEVPOS(19,01);DEVOUT('Carteira...:')
        DEVPOS(20,01);DEVOUT('Prazo Pag..:')

        setcor(3)
        @ 21,00 TO 21,100
        DEVPOS(21,01);DEVOUT(' Contatos ')
        setcor(1)
        DEVPOS(22,01);DEVOUT('Gerente....:')
        DEVPOS(23,01);DEVOUT('Faturamento:')
        DEVPOS(24,01);DEVOUT('Cobranca...:')
        DEVPOS(25,01);DEVOUT('Vendedor...:')
        DEVPOS(26,01);DEVOUT('Observacao.:')
        mensagem('Preencha o restante do Campos - <ESC> p/Retornar')
        mfabrica := tran->razao
        mendereco := tran->endereco
        mbairro := tran->bairro
        mcidade := tran->cidade
        muf := tran->uf
        mcep := tran->cep
        mcpostal := tran->cpostal
        mtel1 := tran->tel1
        mtel2 := tran->tel2
        mfax := tran->fax
        mcgc := tran->cgc
        minsc := tran->insc
        mcpf := tran->cpf
        mcarteira := tran->carteira
        mbanco := tran->banco
        mprazo_pag := tran->prazo_pag
        mct_gerente := tran->ct_gerente
        mct_vendedo := tran->ct_vendedo
        mct_fatura := tran->ct_fatura
        mct_cobran := tran->ct_cobran
        mobs := tran->obs
        mplaca := tran->placa
        mantt := tran->antt
        mapolice := tran->apolice
        muf_placa := tran->uf_placa
        setcor(3)
        DEVPOS(00,14);DEVOUT(tran->cod_tran)
        DEVPOS(00,35);DEVOUT(tran->data_cad)
        setcor(1)

        @ 01,14 GET mfabrica PICT '@!' VALID IF(EMPTY(mfabrica),.F.,.T.)
        @ 02,14 GET mcgc PICT '@@R 99.999.999/9999-99' VALID pesq_cgc(mcgc,'tran')
        @ 03,14 GET minsc PICT '@!'
        @ 04,14 GET mcpf PICT '@@R 999.999.999-99' WHEN EMPTY(mcgc) VALID pesq_cpf(mcpf,'tran')
        @ 06,14 GET mendereco PICT '@!'
        @ 07,14 GET mbairro PICT '@!'
        @ 08,14 GET mcidade PICT '@!'
        @ 09,14 GET muf PICT '@!'
        @ 10,14 GET mcep PICT '99999-999'
        @ 11,14 GET mtel1 PICT '(999)9999-9999'
        @ 12,14 GET mtel2 PICT '(999)9999-9999'
        @ 13,14 GET mfax PICT '(999)9999-9999'
        @ 14,14 GET mplaca PICT '@!'
        @ 14,28 GET muf_placa PICT '@!'
        @ 15,14 GET mantt PICT '@!'
        @ 16,14 GET mapolice PICT '@!'



        @ 18,14 GET mbanco PICT '@!'
        @ 19,14 GET mcarteira PICT '@!'
        @ 20,14 GET mprazo_pag PICT '@R 99'

        @ 22,14 GET mct_gerente PICT '@!'
        @ 23,14 GET mct_fatura PICT '@!'
        @ 24,14 GET mct_cobranca PICT '@!'
        @ 25,14 GET mct_vendedo PICT '@!'

        @ 26,14 GET mobs PICT '@!'
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        opcao := op_simnao('S','Confirma a Alteracao da TRANSPORTADORA:')
        IF opcao = 'N'
                LOOP
        ELSE
                IF EMPTY(muf)
                        mensagem('Nao foi preenchido a campo do Estado, Campo Obrigatorio !!!')
                        @ 06,42 GET muf PICT '@!' VALID IF(EMPTY(muf),.F.,v_uf(muf))
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                *****************
                SELE('tran');ORDSETFOCUS(1)
                GO point
                *****************
                tran-> razao := mfabrica
                tran-> endereco := mendereco
                tran-> bairro := mbairro
                tran-> cidade := mcidade
                tran-> uf := muf
                tran-> cep := mcep
                tran-> cpostal := mcpostal
                tran-> tel1 := mtel1
                tran-> tel2 := mtel2
                tran-> fax := mfax
                tran-> cgc := mcgc
                tran-> insc := minsc
                tran-> cpf := mcpf
                tran-> prazo_pag := mprazo_pag
                tran-> ct_gerente := mct_gerente
                tran-> ct_fatura := mct_fatura
                tran-> ct_cobran := mct_cobranca
                tran-> ct_vendedo := mct_vendedo
                tran-> obs := mobs
                tran-> carteira := mcarteira
                tran-> banco := mbanco
                tran-> placa := mplaca
                tran-> antt := mantt
                tran-> apolice := mapolice
                tran-> uf_placa := muf_placa
                COMMIT
                UNLOCK
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
ENDDO
RETURN NIL
 ********************************** f i m *******************************
