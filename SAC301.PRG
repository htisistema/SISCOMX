*******************************
* RECEBIMENTO DIVERSOS
*******************************
MEMVAR getlist,nivel_acess,mdata_sis,cod_operado
                                
FUNCTION sac301
***************
LOCAL MPRG:='SAC301',;
      opcao,lci,cci,lba,cba,i,mdata,mvalor,mdescri1,mdescri2,mtraco,mtipo,;
      mcom_sem:=' ',;
      mnum_banco,magencia,mc_c,mduplicata,mnome_cli,memissao,mvenc,mbanco,;
      mcorrente

PRIVATE mcodemp:=SPACE(3),malias:='dupr',mcod_cli

IF ! ver_nivel(mprg,'RECEBIMENTO DIVERSOS (CAIXA)','135',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := cci := 0
lba := 10
cba := 70
mtraco := REPLI('=',80)
*--------------------------------------------------------------------------
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
*--------------------------------------------------------------------------
op_tela(05,10,12,70,' Recebimentos Diversos ')
WHILE .T.
        mensagem('Preencha os Campos - <ESC> p/Retornar ')
        mcodemp := mcodempresa
        mnome_cli := SPACE(40)
        mcorrente := SPACE(35)
        mcod_cli := mnum_banco := 0
        mduplicata := SPACE(8)
        mbanco := 'C'
        magencia := SPACE(8)
        mc_c := SPACE(13)
        mtipo := 'RE'
        mvenc := mdata := mdata_sis
        mvalor := 0
        mdescri1 := SPACE(40)
        mdescri2 := SPACE(40)
        opcao = 'S'
        DEVPOS(lci+1,cci+2);DEVOUT('Cod.Empresa:')
        DEVPOS(lci+2,cci+2);DEVOUT('Tipo Pag...:')
        DEVPOS(lci+3,cci+2);DEVOUT('Data.......:')
        DEVPOS(lci+4,cci+2);DEVOUT('Valor R$...:')
        DEVPOS(lci+5,cci+2);DEVOUT('Descricao..:')

        @ lci+1,cci+15 GET mcodemp PICT '999' VALID ver_emp(mcodemp,lci+1,cci+19) WHEN mmult_emp = 'S'
        @ lci+2,cci+15 GET mtipo PICT '@!' VALID mtipo $ 'RE,DN,CH,DU,CT'  WHEN men_get(lci+3,cci+25,'Informe o Tipo de Documento: [RE]ceb.Diverso [CH]eque [DU]plicata [CT]Cartao [DN]Dinheiro')
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF mtipo = 'DN' .OR. mtipo = 'RE'
                @ lci+3,cci+15 GET mdata
                @ lci+4,cci+15 GET mvalor PICT '99,999,999.99' VALID IF(EMPTY(mvalor),.F.,.T.)
                @ lci+5,cci+15 GET mdescri1 PICT '@!'
                @ lci+6,cci+15 GET mdescri2 PICT '@!'
                READ
        ELSE
                op_tela(17,10,27,80,' DADOS '+IF(mtipo = 'CH','DO CHEQUE','DA DUPLICATA'))
                DEVPOS(lci+1,cci+2);DEVOUT('No.Banco/Cod.Cartao....:')
                DEVPOS(lci+1,cci+32);DEVOUT('Agencia:')
                DEVPOS(lci+1,cci+51);DEVOUT('C/C:')
                DEVPOS(lci+2,cci+2);DEVOUT('Numero Documentos......:')
                DEVPOS(lci+3,cci+2);DEVOUT('Codigo do Cliente......:')
                DEVPOS(lci+4,cci+2);DEVOUT('Data de Emissao........:')
                DEVPOS(lci+5,cci+2);DEVOUT('Data de Vencimento.....:')
                DEVPOS(lci+6,cci+2);DEVOUT('Valor Documento R$.....:')
                DEVPOS(lci+7,cci+2);DEVOUT('Pag. [C]arteria [B]anco:')
                DEVPOS(lci+8,cci+2);DEVOUT('Nome do Correntista....:')
                DEVPOS(lci+9,cci+2);DEVOUT('OBS.:')
                @ lci+1,cci+27 GET mnum_banco PICT '999' VALID IF(mtipo='CT',ver_cartao(mnum_banco,lci+1,cci+31,'*'),.T.) .AND. lim_get() WHEN mtipo <> 'DU' .AND. men_get(lci+4,cci+25,'Informe o No.do banco ou se tipo de documento for [CT] informe o codigo do cartao')
                @ lci+1,cci+41 GET magencia PICT '@!' VALID lim_get() WHEN mtipo = 'CH' .AND. men_get(lci+4,cci+41,'Informe a AGENCIA BANCARIA')
                @ lci+1,cci+56 GET mc_c PICT '@!' VALID lim_get()  WHEN mtipo = 'CH' .AND. men_get(lci+4,cci+56,'Informe a C/C BANCARIA')
                @ lci+2,cci+27 GET mduplicata PICT '@!' VALID IF(EMPTY(mduplicata),.F.,.T.)
                READ
                IF LASTKEY()=27 
                        wvw_lclosewindow()
                        LOOP
                ENDIF
                Mensagem('Complete os Dados. [ESC] Abandona.')
                @ lci+3,cci+27 GET mcod_cli PICT "99999" WHEN men_get(lci+3,cci+25,'Informe o Cod. do Cliente ou <ENTER>p/pesquisar p/NOME - <F1>Ajuda')
                @ lci+3,cci+33 GET mnome_cli PICT "@!" WHEN EMPTY(mcod_cli)
                READ
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        LOOP
                ENDIF
                IF ! EMPTY(mcod_cli)
                        *****************
                        SELE('cli');ORDSETFOCUS(1)
                        *****************
                        IF ! cli->(DBSEEK(mcod_cli))
                                atencao('Cliente nao cadastrado !!!')
                                wvw_lclosewindow()
                                LOOP
                        ENDIF
                ELSEIF ! EMPTY(mnome_cli)
                        *****************
                        SELE('cli');ORDSETFOCUS(2)
                        *****************
                
                        IF ! cli->(DBSEEK(RTRIM(mnome_cli)))
                                atencao('Cliente nao cadastrado !!!')
                                wvw_lclosewindow()
                                LOOP
                        ELSE
                                mcod_cli:=f7_cli()
                                IF LASTKEY() = 27
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                        ENDIF
                ENDIF           
                *****************
                SELE(malias);ORDSETFOCUS(1)
                GO TOP
                *****************
                IF ! mcli(mcod_cli,lci+3,cci+27)
                        wvw_lclosewindow()
                        LOOP
                ENDIF           
                IF mnum_banco = 0
                        SEEK mtipo+SPACE(3)+mduplicata+' '+mcod_cli         //+DTOS(mvenc)
                ELSE
                        SEEK mtipo+STRZERO(mnum_banco,3)+mduplicata+' '+mcod_cli         //+DTOS(mvenc)
                ENDIF
                IF FOUND()
                        IF mtipo = 'CH'
                                atencao('Este Cheque ja existe esta em ABERTO !')
                        ELSEIF mtipo = 'DU'
                                atencao('Esta Duplicata ja existe esta em ABERTO !')
                        ELSEIF mtipo = 'FI'
                                atencao('Este Financiamento ja existe esta em ABERTO!')
                        ELSE
                                atencao('Este Cartao ja existe esta em ABERTO !')
                        ENDIF
                        opcao := op_simnao('N','Deseja Incluir mesmo assim ? [S/n]:')
                        IF LASTKEY() = 27 .OR. opcao = "N"
                                wvw_lclosewindow()
                                LOOP
                        ENDIF
                ENDIF
                IF mnum_banco = 0
                        SEEK mtipo+SPACE(3)+mduplicata+'B'+mcod_cli         //+DTOS(mvenc)
                ELSE
                        SEEK mtipo+STRZERO(mnum_banco,3)+mduplicata+'B'+mcod_cli         //+DTOS(mvenc)
                ENDIF
                IF FOUND()
                        IF mtipo = 'CH'
                                atencao('Este Cheque ja existe e ja foi PAGO !')
                        ELSEIF mtipo = 'DU'
                                atencao('Esta Duplicata ja existe e ja foi PAGA !')
                        ELSEIF mtipo = 'FI'
                                atencao('Este Financiamento ja existe e ja foi PAGO !')
                        ELSE
                                atencao('Este Cartao ja existe e ja foi PAGO !')
                        ENDIF
                        opcao := op_simnao('N','Deseja Incluir mesmo assim ?:')
                        IF LASTKEY() = 27 .OR. opcao = "N"
                                wvw_lclosewindow()
                                LOOP
                        ENDIF
                ENDIF
                IF LASTKEY()=27
                        wvw_lclosewindow()
                        LOOP
                ENDIF
                IF RTRIM(mnome_cli) = 'DIVERSOS'
                        @ lci+3,cci+32 GET mnome_cli PICT '@!'
                ENDIF
                IF mtipo = 'CH' .OR. mtipo = 'FI' .OR. mtipo = 'CT'
                        mbanco := 'B'
                ELSE
                        mbanco := 'C'
                ENDIF
                @ lci+4,cci+27 GET mdata
                @ lci+5,cci+27 GET mvenc VALID IF(mvenc < mdata,.F.,.T.)
                @ lci+6,cci+27 GET mvalor PICT "9,999,999.99" VALID mvalor>0
                @ lci+7,cci+27 GET mbanco PICT "@!" VALID mbanco $ 'C,B' .AND. lim_get() WHEN men_get(lci+10,cci+23,'Digite [C] para pagamento em CARTEIRA [B] para pagamento em BANCO"')
                @ lci+8,cci+27 GET mcorrente PICT "@!"
                @ lci+9,cci+07 GET mdescri1 PICT '@!'
                READ
                mdescri2 := ' *Cli:'+mcod_cli+' Doc:'+ALLTRIM(mduplicata)+' Venc:'+DTOC(mvenc)
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        LOOP
                ENDIF
        ENDIF
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF m_set[1,155] = 'S'
                mcom_sem := mensagem1('Tipo de Recebimento Diversos:',' ','X, ')
        ENDIF
        opcao := op_simnao('S','Confirma o Recebimento [S/n]:')
        IF mtipo = 'CH' .OR. mtipo = 'DU' .OR. mtipo = 'CT'
                wvw_lclosewindow()
        ENDIF
        IF opcao = 'N'
                LOOP
        ENDIF
        IF mtipo = 'CH' .OR. mtipo = 'DU' .OR. mtipo = 'CT'
                *****************
                SELE(malias);ORDSETFOCUS(1)
                *****************
                IF ADIREG()
                        (malias)-> empresa := mcodemp
                        (malias)-> tipo    := mtipo
                        IF EMPTY(mnum_banco)
                                (malias)-> numero := SPACE(3)
                        ELSE
                                (malias)-> numero := STRZERO(mnum_banco,3)
                        ENDIF
                        (malias)-> agencia   := magencia
                        (malias)-> c_c       := mc_c
                        (malias)-> duplicata := mduplicata
                        (malias)-> valor_dup := mvalor
                        (malias)-> tip_cli   := cli->tipo
                        (malias)-> fornec    := mcod_cli
                        (malias)-> cliente   := mnome_cli
                        (malias)-> emissao   := mdata
                        (malias)-> venc      := mvenc
                        (malias)-> venc1     := mvenc
                        IF mtipo = 'CT' .AND. mtp_241 = NIL
                                (malias)-> valor := mvalor - (mvalor * (mdesc_cart/100))
                        ELSE
                                (malias)-> valor := mvalor
                        ENDIF
                        (malias)-> pago     := " "
                        (malias)-> banco    := mbanco
                        (malias)-> corrente := mcorrente
                        (malias)-> obs      := mdescri1
                        (malias)-> operador := cod_operado
                        (malias)-> mov_cx   := 'C'
/*
                        IF mdata = mvenc .AND. mtp_241 = NIL
                                botao(10,10,12,30,'Deseja fazer a BAIXA deste documento agora [S/n]:',,,,0)
                                opcao := ' '
                                @ 11,COL()+1 GET opcao PICT '@!' VALID opcao $ 'S,N' WHEN mtipo <> 'DN'
                                READ
                                IF opcao = 'S'
                                        (malias)->datpag := mvenc
                                        (malias)->vlpago := mvalor
                                        (malias)->pago   := "B"
                                        (malias)->banco  := 'C'
                                ENDIF
                        ENDIF
*/
                        DBCOMMIT()
                        DBUNLOCK()
                ENDIF
        ENDIF
        ********************
        SELE('caix');ORDSETFOCUS(1)
        ********************

        IF ADIREG()
*               caix-> tipo := 'RE'
                caix-> empresa := mcodempresa
                caix-> tipo := mtipo
                caix-> data := mdata
                caix-> venci := mvenc
                IF mtipo = 'CH'
                        caix-> documento := 'CHEQUES   '
                        caix-> nota      := ' CHEQUES  '
                ELSEIF mtipo = 'DN'
                        caix-> documento := ' DINHEIRO '
                        caix-> nota      := ' DINHEIRO '
                ELSEIF mtipo = 'DU'
                        caix-> documento := ' DUPLICATA'
                        caix-> nota      := ' DUPLICATA'
                ELSE
                        caix-> documento := ' RECEB.DIV'
                        caix-> nota      := ' RECEB.DIV'
                ENDIF
                caix-> valor := mvalor
                caix-> descri1 := mdescri1
                caix-> descri2 := mdescri2
                caix-> cod_opera := cod_operado
                caix-> hora      := TIME()
                caix-> c_s   := mcom_sem
                COMMIT
                UNLOCK
        ELSE
                atencao('Nao foi possivel acessar o Arquivo !!!')
                LOOP
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
********************************** f i m **********************************

