**************************************
* COLOCAR E RETIRAR CHEQUE SEM FUNDO
**************************************
MEMVAR getlist,nivel_acess,cod_operado,mdata_sis
FUNCTION sac26(mopc,mn_ban,mdup)
**************
LOCAL MPRG:='SAC26'
LOCAL tela,lci,cci,lba,cba,opcao,;
      mcod_ven,mmotivo,mdata_che,mcod_opera,pesq,mnota,mop,mok,mcorrentist,mvlr_pago:=0,;
      mvlr_rest:=0,mdata_fund,mbloq,mdata_venc:=CTOD('  /  /  '),mcpfcnpj:=SPACE(14),;
      mtela_menu,mobs:=SPACE(50)

PRIVATE mnome_vend,mcod_cli,mcliente,point,mcom_ven,mduplicata,mtipo,mnum_ban,mvalor,;
        mcodemp:=SPACE(3),cons_cli:={}

IF ! ver_nivel(mprg,'COLOCAR E RETIRAR CHEQUE SEM FUNDO','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := 00
cci := 00
lba := 19
cba := 78

*------------------------------------------------------------------
//
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
IF ! AbriArq('saccheq','cheq');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*------------------------------------------------------------------
SET KEY 272 TO cons_che()       // ALT+Q
op_tela(00,00,24,79,' Cheques s/Fundo ')

WHILE .T.
        Wvw_SetTitle( ,' Cheques s/Fundo ')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Cod.Empresa.:')
        DEVPOS(lci+2,cci+2);DEVOUT('No.do Banco.:')
        DEVPOS(lci+3,cci+2);DEVOUT('No.do Cheque:')
        DEVPOS(lci+4,cci+2);DEVOUT('Valor Cheque:')
        DEVPOS(lci+5,cci+2);DEVOUT('Data Emissao:')
        DEVPOS(lci+6,cci+2);DEVOUT('Data Vencim.:')
        @ lci+7,cci+1 to lci+7,cba-1
        DEVPOS(lci+8,cci+2);DEVOUT('Cliente Resp.:')
        DEVPOS(lci+9,cci+2);DEVOUT('Correntista..:')
        DEVPOS(lci+9,cci+52);DEVOUT('CPF/CNPJ:')
        DEVPOS(lci+10,cci+2);DEVOUT('Vendedor Responsavel:')
        DEVPOS(lci+11,cci+2);DEVOUT('Numero do Documento.:')
        DEVPOS(lci+12,cci+2);DEVOUT('Motivo do Cheque....:')
        IF mopc = NIL
                op_tela(10,10,15,31,' Escolha Opcao ')
                mensagem('Escolha a opcao ou  <ESC>Retornar ')
                //botao(lci+3,cci+20,lci+8,cci+41,,' Escolha Opcao ')
                setcor(10)
                @ 1,0 PROMPT ' Inclusao de Cheques  '
                @ 2,0 PROMPT ' Retirada de Cheques  '
                @ 3,0 PROMPT ' Alteracao de Cheques '
                @ 4,0 PROMPT ' Estorno de Cheques   '
                SET INTEN ON
                MENU TO mop
                setcor(1)
                wvw_lclosewindow()
                mnum_ban := SPACE(3)
                mduplicata := SPACE(10)
        ELSE
                mop := mopc
                mnum_ban := mn_ban
                mduplicata:= mdup
        ENDIF
        IF LASTKEY() = 27
                RELEASE mnome_vend,mcliente,point,mcom_ven
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        ******* INCLUIR CHEQUE SEM FUNDO ****************
        IF mop = 1
                IF ! ver_nivel(mprg+'I','INCLUSAO DE CHEQUE SEM FUNDO','15',nivel_acess,,'AMBIE')
                        LOOP
                ENDIF
                WHILE .T.
                        mensagem('Preencha os Campos - <ALT+Q>Consulta Cheq.s/Fundos - <ESC>Retornar')
                        Wvw_SetTitle( ,' Cheques s/Fundo - I N C L U S A O ')           
                        setcor(1)
                        DEVPOS(lci+1,cci+2);DEVOUT('Cod.Empresa.:')
                        DEVPOS(lci+2,cci+2);DEVOUT('No.do Banco.:')
                        DEVPOS(lci+3,cci+2);DEVOUT('No.do Cheque:')
                        DEVPOS(lci+4,cci+2);DEVOUT('Valor Cheque:')
                        DEVPOS(lci+5,cci+2);DEVOUT('Data Emissao:')
                        DEVPOS(lci+6,cci+2);DEVOUT('Data Vencim.:')
                        @ lci+7,cci+1 to lci+7,cba-1
                        DEVPOS(lci+8,cci+2);DEVOUT('Cliente Resp.:')
                        DEVPOS(lci+9,cci+2);DEVOUT('Correntista..:')
                        DEVPOS(lci+9,cci+52);DEVOUT('CPF/CNPJ:')
                        DEVPOS(lci+10,cci+2);DEVOUT('Vendedor Responsavel:')
                        DEVPOS(lci+11,cci+2);DEVOUT('Numero do Documento.:')
                        DEVPOS(lci+12,cci+2);DEVOUT('Motivo do Cheque....:')
*                       mcodemp:=mcodempresa
                        mnome_vend := SPACE(30)
                        mcliente := SPACE(40)
                        mcorrentist := SPACE(35)
                        mcpfcnpj := SPACE(14)
                        mnota := SPACE(8)
                        mdata_che := mdata_venc:= CTOD(' /  /  ')
                        mvalor := mcod_ven := mcod_cli := 0
                        mmotivo := SPACE(30)

                        @ lci+1,cci+16 GET mcodemp PICT '999' VALID ver_emp(mcodemp,lci+1,cci+23) WHEN mmult_emp = 'S'
                        @ lci+2,cci+16 GET mnum_ban PICT '@!' VALID IF(EMPTY(mnum_ban),.F.,.T.)
                        @ lci+3,cci+16 GET mduplicata PICT '9999999999' VALID IF(EMPTY(mduplicata),.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                EXIT
                        ENDIF
                        ****************
                        SELE('dupr');ORDSETFOCUS(1)
                        ****************
                        pesq := 'CH'+mnum_ban + mduplicata
                        IF dupr->(DBSEEK(pesq))
                                cons_doc()
                                mcod_cli := VAL(dupr->fornec)
                                mcod_ven := VAL(dupr->vendedor)
                                mdata_che := dupr->emissao
                                mdata_venc:= dupr->venc
                                mcod_opera := dupr->operador
                                mvalor := dupr->valor
                                mcorrentist := dupr->corrente
                                mcpfcnpj    := dupr->cpfcnpj
                                mnota  := dupr->num_ped
                        ELSE
                                atencao('Nao foi possivel encontra este Documento')
                                mcod_opera := cod_operado
                        ENDIF
                        @ lci+4,cci+16 GET mvalor PICT '9,999,999.99' VALID IF(EMPTY(mvalor),.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        @ lci+5,cci+16 GET mdata_che
                        @ lci+6,cci+16 GET mdata_venc
                        @ lci+8,cci+17 GET mcod_cli PICT '99999' VALID IF(EMPTY(mcod_cli),.F.,ver_cli(mcod_cli,lci+8,cci+23))
                        @ lci+9,cci+17 GET mcorrentist PICT '@!'
                        @ lci+9,cci+61 GET mcpfcnpj PICT '@!' VALID IF(LEN(ALLTRIM(mcpfcnpj)) > 11,pesq_cgc(mcpfcnpj,,'*'),pesq_cpf(mcpfcnpj,,'*'))
                        @ lci+10,cci+24 GET mcod_ven PICT '999' VALID IF(EMPTY(mcod_ven),.F.,ven(mcod_ven,lci+10,cci+31))
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        ****************
                        SELE('cheq');ORDSETFOCUS(2)
                        ****************
                        pesq := mnum_ban + mduplicata + STR(mvalor,10,2)

                        IF cheq->(DBSEEK(pesq)) .AND. mcod_cli = cheq->cod_cli
                                mmotivo = cheq->motivo
                                IF cheq->ok = '*'
                                        opcao := op_simnao('S','Este cheque ja foi resolvido, deseja reincluir:')
                                        IF opcao = 'N'
                                                LOOP
                                        ELSE
                                                @ lci+12,cci+24 GET mmotivo PICT '@!'
                                                READ
                                                IF LASTKEY() = 27
                                                        LOOP
                                                ENDIF
                                                opcao := op_simnao('S','Confirma a reinclusao do Cheque:')
                                                IF opcao = 'N'
                                                        RESTSCREEN(01,00,24,79,tela)
                                                        LOOP
                                                ELSE
                                                        IF BLOQREG()
                                                                cheq->ok := ' '
                                                                cheq->motivo := mmotivo
                                                                COMMIT
                                                                UNLOCK
                                                                LOOP
                                                        ELSE
                                                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                                                LOOP
                                                        ENDIF
                                                ENDIF
                                        ENDIF

                                ELSE
                                        setcor(3)
                                        DEVPOS(lci+12,cci+24);DEVOUT(mmotivo)
                                        setcor(1)
                                        atencao('Este cheque ja esta em nosso arquivo !!!')
                                        LOOP
                                ENDIF
                        ENDIF
                        @ lci+11,cci+24 GET mnota PICT '@!'
                        @ lci+12,cci+24 GET mmotivo PICT '@!'
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        opcao := op_simnao('S','Confirma a Inclusao do Cheque:')
                        IF opcao = 'N'
                                RESTSCREEN(01,00,24,79,tela)
                                LOOP
                        ELSE
                                IF ADIREG()
                                        cheq-> empresa  := mcodemp
                                        cheq-> data_fund := mdata_sis
                                        cheq-> nota := mnota
                                        cheq-> data_cheq := mdata_che
                                        cheq-> data_venc := mdata_venc
                                        cheq-> num_ban := mnum_ban
                                        cheq-> num_cheq := mduplicata
                                        cheq-> cheq_vlr := mvalor
                                        cheq-> valor_cheq := mvalor
                                        cheq-> motivo := mmotivo
                                        cheq-> cod_vend := STRZERO(mcod_ven,3)
                                        cheq-> cod_cli := mcod_cli
                                        cheq-> correntist := mcorrentist
                                        cheq-> cpfcnpj    := mcpfcnpj
                                        cheq-> cod_opera := cod_opera
                                        cheq-> cod_incl := cod_operado
                                        COMMIT
                                        UNLOCK
                                        mbloq := mensagem1('Deseja Bloquear este cliente:','S','S,N')
                                        IF mbloq = 'S'
                                                ****************
                                                SELE('cli');ORDSETFOCUS(1)
                                                ****************
                                                ver_cli(mcod_cli)
                                                BLOQREG()
                                                cons_cli[1,41] := 'S'
                                                DBCOMMIT()
                                                DBUNLOCK()
                                        ENDIF

                                        LOOP
                                ELSE
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF
                        ENDIF
                ENDDO
        ELSEIF mop = 2
                IF ! ver_nivel(mprg+'R','RETIRAR CHEQUE SEM FUNDO','15',nivel_acess,,'AMBIE')
                        LOOP
                ENDIF
                WHILE .T.
                        mensagem('Preencha os Campos - <ALT+Q>Consulta Cheq.s/Fundos - <ESC>Retornar')
                        setcor(1)
                        Wvw_SetTitle( ,' Cheques s/Fundo - R E T I R A R ')           
                        DEVPOS(lci+1,cci+2);DEVOUT('Cod.Empresa.:')
                        DEVPOS(lci+2,cci+2);DEVOUT('No.do Banco.:')
                        DEVPOS(lci+3,cci+2);DEVOUT('No.do Cheque:')
                        DEVPOS(lci+4,cci+2);DEVOUT('Valor Cheque:')
                        DEVPOS(lci+5,cci+2);DEVOUT('Data Emissao:')
                        DEVPOS(lci+6,cci+2);DEVOUT('Data Vencim.:')
                        @ lci+7,cci+1 to lci+7,cba-1
                        DEVPOS(lci+8,cci+2);DEVOUT('Cliente Resp.:')
                        DEVPOS(lci+9,cci+2);DEVOUT('Correntista..:')
                        DEVPOS(lci+9,cci+52);DEVOUT('CPF/CNPJ:')
                        DEVPOS(lci+10,cci+2);DEVOUT('Vendedor Responsavel:')
                        DEVPOS(lci+11,cci+2);DEVOUT('Numero do Documento.:')
                        DEVPOS(lci+12,cci+2);DEVOUT('Motivo do Cheque....:')
                        DEVPOS(lci+14,cci+2);DEVOUT('Observacao..........:')
                        mcodemp:=mcodempresa
                        mnome_vend := SPACE(30)
                        mcliente := SPACE(40)
                        mnota := SPACE(8)
                        mnum_ban := SPACE(3)
                        mduplicata := SPACE(10)
                        mvalor := mcod_cli := 0
                        mmotivo := SPACE(30)
                        mcod_ven := SPACE(4)
                        mobs := SPACE(50)
                        @ lci+2,cci+16 GET mnum_ban PICT '@!' VALID IF(EMPTY(mnum_ban),.F.,.T.)
                        @ lci+3,cci+16 GET mduplicata PICT '@!' VALID IF(EMPTY(mduplicata),.F.,.T.)
                        @ lci+4,cci+16 GET mvalor PICT '99,999,999.99' VALID IF(EMPTY(mvalor),.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                EXIT
                        ENDIF
                        ****************
                        SELE('cheq');ORDSETFOCUS(2)
                        ****************

                        pesq := mnum_ban + mduplicata + STR(mvalor,12,2)

                        IF ! cheq->(DBSEEK(pesq))
                                atencao('Nao existe nenhum cheque desse Banco e com esse No.')
                                LOOP
                        ENDIF
                        mcod_cli := VAL(cheq->cod_cli)
                        @ lci+8,cci+17 GET mcod_cli PICT '99999' VALID IF(EMPTY(mcod_cli),.F.,ver_cli(mcod_cli,lci+8,cci+23))
                        READ
                        IF LASTKEY() = 27
                                EXIT
                        ENDIF
                        pesq := mnum_ban + mduplicata + STR(mvalor,12,2)+mcod_cli

                        IF ! cheq->(DBSEEK(pesq))
                                atencao('Nao existe nenhum cheque desse Banco e com esse No. e esse Cliente')
                                LOOP
                        ENDIF
                        point = RECNO()
                        mcodemp:=cheq->empresa
                        mcod_cli := VAL(cheq->cod_cli)
                        mcod_ven := cheq->cod_vend
                        mnota := cheq->nota
                        mmotivo := cheq->motivo
                        mdata_fund:= cheq->data_fund
                        mdata_venc:= cheq->data_venc
                        mdata_che := cheq->data_cheq
                        mcod_opera := cheq->cod_opera
                        ver_ven(mcod_ven)
                        mnome_vend := sen->snome
                        ver_cli(mcod_cli,,)
                        mcorrentist := cheq->correntist
                        mcpfcnpj := cheq->cpfcnpj
                        mduplicata := cheq->num_cheq
                        mnum_ban   := cheq->num_ban
                        mvlr_pago := cheq->valor_cheq
                        mobs      := cheq->obs
                        DEVPOS(lci+13,cci+2);DEVOUT('Valor Pago..........:')
                        setcor(3)
                        DEVPOS(lci+1,cci+16);DEVOUT(cheq->empresa)
                        DEVPOS(lci+2,cci+16);DEVOUT(cheq->num_ban)
                        DEVPOS(lci+3,cci+16);DEVOUT(cheq->num_cheq)
                        DEVPOS(lci+4,cci+16);DEVOUTPICT(cheq->valor_cheq,'99,999,999.99')
                        DEVPOS(lci+5,cci+16);DEVOUT(mdata_che)
                        DEVPOS(lci+6,cci+16);DEVOUT(mdata_venc)
                        DEVPOS(lci+8,cci+17);DEVOUT(mcod_cli +'-'+mcliente)
                        DEVPOS(lci+9,cci+17);DEVOUT(mcorrentist)
                        DEVPOS(lci+9,cci+61);DEVOUT(mcpfcnpj)
                        DEVPOS(lci+10,cci+24);DEVOUT(mcod_ven +'-'+mnome_vend)
                        DEVPOS(lci+11,cci+24);DEVOUT(mnota)
                        DEVPOS(lci+12,cci+24);DEVOUT(cheq->motivo)
                        setcor(1)
                        @ lci+13,cci+16 GET mvlr_pago PICT '99,999,999.99' VALID IF(EMPTY(mvlr_pago),.F.,.T.)
                        @ lci+14,cci+16 GET mobs
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        IF cheq->ok = '*'
                                atencao('Este cheque ja foi resolvido !!!')
                                LOOP
                        ENDIF
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        opcao := op_simnao('S','Confirma a Retirada do Cheque:')
                        IF opcao = 'N'
                                LOOP
                        ELSE
                                mvlr_rest := 0
                                IF BLOQREG()
                                        cheq-> cod_opera := cod_operado
                                        cheq-> ok        := '*'
                                        cheq-> data_ok   := mdata_sis
                                        cheq-> vlr_pago  := mvlr_pago
                                        cheq-> obs       := mobs
                                        IF cheq->valor_cheq > mvlr_pago
                                                cheq-> conta     := '*'
                                        ENDIF
                                        COMMIT
                                        UNLOCK
                                ENDIF
                                IF cheq->valor_cheq > mvlr_pago
                                        mvlr_rest := cheq->valor_cheq - mvlr_pago
                                        IF ADIREG()
                                                cheq-> empresa  := mcodemp
                                                cheq-> data_fund := mdata_fund
                                                cheq-> nota      := mnota
                                                cheq-> data_cheq := mdata_che
                                                cheq-> data_venc := mdata_venc
                                                cheq-> num_ban   := mnum_ban
                                                cheq-> num_cheq  := mduplicata
                                                cheq-> cheq_vlr  := mvalor
                                                cheq-> valor_cheq:= mvlr_rest
                                                cheq-> motivo    := mmotivo
                                                cheq-> cod_vend  := mcod_ven
                                                cheq-> cod_cli   := mcod_cli
                                                cheq-> correntist:= mcorrentist
                                                cheq-> cpfcnpj   := mcpfcnpj
                                                cheq-> cod_opera := cod_operado
                                                cheq-> cod_incl  := cod_operado
                                                cheq-> conta     := '*'
                                                COMMIT
                                                UNLOCK
                                                LOOP
                                        ENDIF
                                ENDIF
                        ENDIF
                ENDDO
        ELSEIF mop = 3 .OR. mop = 4
                IF ! ver_nivel(mprg+'AE','ALTERAR OU ESTORNAR CHEQUE SEM FUNDO','15',nivel_acess,,'AMBIE')
                        LOOP
                ENDIF
                WHILE .T.
                        mensagem('Preencha os Campos - <ALT+Q>Consulta Cheq.s/Fundos - <ESC>Retornar')
                        setcor(1)
                        Wvw_SetTitle( ,' Cheques s/Fundo - A L T E R A C A O ')           
                        DEVPOS(lci+1,cci+2);DEVOUT('Cod.Empresa.:')
                        DEVPOS(lci+2,cci+2);DEVOUT('No.do Banco.:')
                        DEVPOS(lci+3,cci+2);DEVOUT('No.do Cheque:')
                        DEVPOS(lci+4,cci+2);DEVOUT('Valor Cheque:')
                        DEVPOS(lci+5,cci+2);DEVOUT('Data Emissao:')
                        DEVPOS(lci+6,cci+2);DEVOUT('Data Vencim.:')
                        @ lci+7,cci+1 to lci+7,cba-1
                        DEVPOS(lci+8,cci+2);DEVOUT('Cliente Resp.:')
                        DEVPOS(lci+9,cci+2);DEVOUT('Correntista..:')
                        DEVPOS(lci+9,cci+52);DEVOUT('CPF/CNPJ:')
                        DEVPOS(lci+10,cci+2);DEVOUT('Vendedor Responsavel:')
                        DEVPOS(lci+11,cci+2);DEVOUT('Numero do Documento.:')
                        DEVPOS(lci+12,cci+2);DEVOUT('Motivo do Cheque....:')
                        DEVPOS(lci+14,cci+2);DEVOUT('Observacao..........:')
                        mnome_vend := mmotivo := SPACE(30)
                        mcliente := SPACE(40)
                        mnum_ban := SPACE(3)
                        mduplicata := SPACE(10)
                        mvalor := 0
                        mnota := SPACE(8)
                        mcod_ven := SPACE(4)
                        mcod_cli := 0
                        @ lci+2,cci+16 GET mnum_ban PICT '@!' VALID IF(EMPTY(mnum_ban),.F.,.T.)
                        @ lci+3,cci+16 GET mduplicata PICT '@!' VALID IF(EMPTY(mduplicata),.F.,.T.)
                        @ lci+4,cci+16 GET mvalor PICT '9,999,999.99' VALID IF(EMPTY(mvalor),.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                EXIT
                        ENDIF
                        ****************
                        SELE('cheq');ORDSETFOCUS(2)
                        ****************

                        pesq := mnum_ban + mduplicata + STR(mvalor,10,2)

                        IF ! cheq->(DBSEEK(pesq))
                                atencao('Nao existe nenhum cheque desse Banco e com esse No.')
                                LOOP
                        ENDIF
                        point = RECNO()
                        mcod_cli := VAL(cheq->cod_cli)
                        mcod_ven := VAL(cheq->cod_vend)
                        mdata_che := cheq->data_cheq
                        mdata_venc:= cheq->data_venc
                        mcod_opera := cheq->cod_opera
                        mnota := cheq->nota
                        mmotivo := cheq->motivo
                        ver_ven(STRZERO(mcod_ven,3))
                        mnome_vend := sen->snome
                        ver_cli(mcod_cli,,)
                        mvalor := cheq->valor_cheq
                        point := RECNO()
                        mok := cheq->ok
                        mobs        := cheq->obs
                        mcorrentist := cheq->correntist
                        mcpfcnpj    := cheq->cpfcnpj
                        mcodemp     := cheq->empresa
                        DEVPOS(lci+13,cci+2);DEVOUT('Resolvido [*] ou [ ]:')
                        @ lci+8,cci+24 GET mcod_cli VALID ver_cli(mcod_cli,lci+8,cci+23) WHEN mop = 3
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        ****************
                        SELE('cheq');ORDSETFOCUS(2)
                        ****************
                        pesq := mnum_ban + mduplicata + STR(mvalor,10,2)+mcod_cli

                        cheq->(DBSEEK(pesq))

                        IF mop = 4
                                IF ! FOUND()
                                        atencao('Nao existe nenhum cheque desse Banco, com esse No. e cliente')
                                        LOOP
                                ENDIF
                        ENDIF
                        IF mop = 3
                                IF FOUND()
                                        mcod_cli := VAL(cheq->cod_cli)
                                        mcod_ven := VAL(cheq->cod_vend)
                                        mdata_venc:= cheq->data_venc
                                        mdata_che := cheq->data_cheq
                                        mcod_opera := cheq->cod_opera
                                        mnota := cheq->nota
                                        mmotivo := cheq->motivo
                                        ver_ven(STRZERO(mcod_ven,3))
                                        mnome_vend := sen->snome
                                        ver_cli(mcod_cli,,)
                                        mvalor := cheq->valor_cheq
                                        point := RECNO()
                                        mok := cheq->ok
                                        mcorrentist := cheq->correntist
                                        mcpfcnpj    := cheq->cpfcnpj
                                        mcodemp     := cheq->empresa
                                        mobs        := cheq->obs
                                ELSE
                                        GO point
                                ENDIF
                        ENDIF
                        IF cheq->ok = '*' .AND. mop = 3
                                atencao('Este cheque ja foi resolvido !!!')
                                LOOP
                        ENDIF
                        IF cheq->ok = ' ' .AND. mop = 4
                                atencao('Este cheque nao esta RESOLVIDO')
                                LOOP
                        ENDIF
                        setcor(3)
                        DEVPOS(lci+8,cci+17);DEVOUT(mcod_cli+'-'+mcliente)
                        DEVPOS(lci+10,cci+24);DEVOUT(STRZERO(mcod_ven,3)+'-'+mnome_vend)
                        setcor(1)
                        @ lci+1,cci+16 GET mcodemp PICT '999' VALID ver_emp(mcodemp,lci+1,cci+23) WHEN mop = 3 .AND. mmult_emp = 'S'
                        @ lci+4,cci+16 GET mvalor PICT '99,999,999.99' VALID IF(EMPTY(mvalor),.F.,.T.) WHEN mop = 3
                        @ lci+5,cci+16 GET mdata_che WHEN mop = 3
                        @ lci+6,cci+16 GET mdata_venc WHEN mop = 3
                        @ lci+8,cci+17 GET mcod_cli VALID ver_cli(mcod_cli,lci+8,cci+23) WHEN mop = 3
                        @ lci+9,cci+17 GET mcorrentist
                        @ lci+9,cci+61 GET mcpfcnpj PICT '@!' VALID IF(LEN(ALLTRIM(mcpfcnpj)) > 11,pesq_cgc(mcpfcnpj,,'*'),pesq_cpf(mcpfcnpj,,'*'))
                        @ lci+10,cci+24 GET mcod_ven VALID ven(mcod_ven,lci+10,cci+29) WHEN mop = 3
                        @ lci+11,cci+24 GET mnota PICT '@!' WHEN mop = 3
                        @ lci+12,cci+24 GET mmotivo PICT '@!' WHEN mop = 3
                        @ lci+13,cci+24 GET mok PICT '@!' VALID mok $ '*, ' WHEN mop = 4
                        @ lci+14,cci+24 GET mobs
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        IF cheq->ok = '*' .AND. mop = 3
                                atencao('Este cheque ja foi resolvido !!!')
                                LOOP
                        ENDIF
                        opcao := op_simnao('S','Confirma a Alteracao:')
                        IF opcao = 'N'
                                LOOP
                        ELSE
                                ****************
                                SELE('cheq');ORDSETFOCUS(2)
                                ****************
                                IF BLOQREG()
                                        IF mop = 3
                                                cheq-> empresa := mcodemp
                                                cheq-> nota := mnota
                                                cheq-> data_cheq := mdata_che
                                                cheq-> data_venc := mdata_venc
                                                cheq-> num_ban := mnum_ban
                                                cheq-> num_cheq := mduplicata
                                                cheq-> valor_cheq := mvalor
                                                cheq-> motivo := mmotivo
                                                cheq-> cod_vend := STRZERO(mcod_ven,3)
                                                cheq-> cod_cli := mcod_cli
                                                cheq-> correntist := mcorrentist
                                                cheq-> cpfcnpj    := mcpfcnpj
                                                cheq-> obs        := mobs
                                        ELSE
                                                cheq-> obs        := mobs
                                                cheq->ok := mok
                                        ENDIF
                                        COMMIT
                                        UNLOCK
                                        LOOP
                                ELSE
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF
                        ENDIF
                ENDDO
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
