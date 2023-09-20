***********************
* MENU DE NOTAS DE FRETES
***********************
MEMVAR getlist,nivel_acess,mdata_sis,cod_operado

FUNCTION sacfrete
*****************
LOCAL MPRG:='SACFRETE'

LOCAL opcao,lci,cci,lba,cba

lci := cci := 0
lba = 03
cba = 29
opcao = 0
op_tela(lci,cci,lba,cba,' MENU DE NOTAS DE FRETES ')
WHILE .T.
        exibi_prg(mprg)
        setcor(10)
        @ lci,cci PROMPT ' Lancamento de Notas Frete    ' 
        @ lci+1,cci PROMPT ' Alteracao de Notas de Fretes '
        @ lci+2,cci PROMPT ' Exclusao de Notas de Fretes  '
        @ lci+3,cci PROMPT ' Consulta de Notas de Fretes  '
        SET INTEN ON
        MENU TO opcao
        setcor(1)
        IF LASTKEY() = 27
                EXIT
        ENDIF

        DO CASE
                CASE opcao = 1
                *        LANCAMENTO DE NOTAS DE FRETES
                         sacfre1()
                CASE opcao = 2
                *        ALTERACAO DE NOTAS DE FRETES
                         sacfre2()
                CASE opcao = 3
                *        EXCLUSAO DE NOTAS DE FRETES
                         sacfre3()
                CASE opcao = 4
                *        CONSULTA DE NOTAS DE FRETES
                         sacfre2('*')
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
***************************** F I M ************************************
*******************************************
* LANCAMENTO DE NOTA DE FRETE data:02/08/2004
*******************************************
FUNCTION sacfre1
*****************

LOCAL mprg:='SACFRE1',;
      li:=0,ci:=0,lb:=08,cb:=78,opcao,mdocumento,mserie,;
      mvl_base,mvl_icm,mtip_frete,mnum_cont,mtela,mmodelo,maliq_icms

PRIVATE mcif,mdisp_aux,mchegada,mavista,mdia1,mdia2,mdia3,;
       mdia4,mdia5,mdia6,mdia7,mdia8,mdia9,mdia10,mfornece,mcod_forn:=0,;
       muf,mcod_nat,memissao,mvlr_nota,mnota,mauxiliar

*------------------------------------------------------------
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacdupp','dupp');RETURN NIL;ENDIF
IF ! AbriArq('sactotnt','totnt');RETURN NIL;ENDIF
*------------------------------------------------------------
op_tela(li,ci,lb+2,cb,' INCLUSAO - Lancamento NOTA FISCAL DE FRETE ')

WHILE .T.
        ****************************
        SELE('totnt');ORDSETFOCUS(11)
        GO TOP
        ****************************
        mdia1 := '30 '
        mdia2 := mdia3 := mdia4 := mdia5 := ;
        mdia6      := mdia7 := mdia8 := mdia9 := mdia10 := SPACE(3)
        memissao  := CTOD('  /  /  ')
        opcao:=' '
        mcod_nat  := SPACE(5)
        mvlr_nota  := mvl_base := mvl_icm := maliq_icm := maliq_icms:= ;
        mcod_forn := mdocumento:= mauxiliar := 0
        mnum_cont := SPACE(12)
        mmodelo := '08'
        mserie := 'U'
        mtip_frete := '1'
        DEVPOS(li+1,ci+1);DEVOUT('Nota Fiscal Origem:')
        DEVPOS(li+2,ci+1);DEVOUT('Codigo Fornecedor.:')
        DEVPOS(li+3,ci+1);DEVOUT('No.Documento:')
        DEVPOS(li+3,ci+23);DEVOUT('Emissao:')
        DEVPOS(li+3,ci+43);DEVOUT('Modelo:')
        DEVPOS(li+3,ci+54);DEVOUT('Serie:')
        DEVPOS(li+3,ci+63);DEVOUT('Frete:')
        DEVPOS(li+4,ci+1);DEVOUT('Numero Contabil:')
        DEVPOS(li+4,ci+32);DEVOUT('CFOP:')
        DEVPOS(li+5,ci+1);DEVOUT('CGC:')
        DEVPOS(li+5,ci+22);DEVOUT('INSC.:')
        DEVPOS(li+5,ci+36);DEVOUT('UF:')
        DEVPOS(li+6,ci+1);DEVOUT('Valor Documento:')
        DEVPOS(li+6,ci+30);DEVOUT('Valor Base...:')
        DEVPOS(li+7,ci+1);DEVOUT('Valor do ICMS...:')
        DEVPOS(li+7,ci+30);DEVOUT('Aliquota ICMS:')
        @ li+1,ci+21 GET mauxiliar PICT '999999' VALID IF(EMPTY(mauxiliar),.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        ****************************
        SELE('totnt');ORDSETFOCUS(12)
        GO TOP
        ****************************
        IF totnt->(DBSEEK(STRZERO(mauxiliar,6)+'E'))
                atencao('Ja foi Lancada a Nota de Frete')
        ENDIF
        @ li+2,ci+21 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn),.F.,ent_forn(@mcod_forn,li+2,ci+26))
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        setcor(3)
        DEVPOS(li+5,ci+6);DEVOUT(forn->cgc)
        DEVPOS(li+5,ci+29);DEVOUT(forn->insc)
        DEVPOS(li+5,ci+40);DEVOUT(forn->uf)
        setcor(1)
        @ li+3,ci+15 GET mdocumento PICT '999999' VALID IF(EMPTY(mdocumento),.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mnota := STRZERO(mdocumento,6)
        ****************************
        SELE('totnt');ORDSETFOCUS(11)
        GO TOP
        ****************************
        IF totnt->(DBSEEK('70'+'NF'+STRZERO(mdocumento,6)+STRZERO(mcod_forn,4)+' '))
                atencao('Esta Nota ja foi Lancada em nosso arquivos')
        ENDIF
        @ li+3,ci+32 GET memissao
        @ li+3,ci+51 GET mmodelo PICT '@!'
        @ li+3,ci+61 GET mserie PICT '@!'
        @ li+3,ci+70 GET mtip_frete PICT '@!' VALID mtip_frete $ '1,2'

        @ li+4,ci+18 GET mnum_cont PICT '@!'
        @ li+4,ci+38 GET mcod_nat PICT '9.999'
        @ li+6,ci+18 GET mvlr_nota PICT '999,999.99'
        @ li+6,ci+45 GET mvl_base PICT '999,999.99'

        @ li+7,ci+18 GET mvl_icm PICT '999,999.99'
        @ li+7,ci+45 GET maliq_icm PICT '999,999.99'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        opcao := mensagem1('Confirma o Lancamento:','S','S,N')
        IF opcao = 'N' .OR. LASTKEY() = 27
                LOOP
        ENDIF
        IF ! ADIREG()
                atencao('Nao foi possivel acessar o arquivo')
                LOOP
        ENDIF
        totnt->empresa := mcodempresa
        totnt->tip_sef := '70'
        totnt->cod_cli := STRZERO(mcod_forn,4)
        totnt->cliente := forn->razao
        totnt->cid_cli := forn->cidade
        totnt->uf_cli  := forn->uf
        totnt->insc_cli := forn->insc
        totnt->cgc_cli  := forn->cgc
        totnt->emissao  := memissao
        totnt->ent_sai  := 'E'
        totnt->modelo   := mmodelo
        totnt->serie    := mserie
        totnt->documento:= 'NF'+STRZERO(mdocumento,6)
        totnt->auxiliar := STRZERO(mauxiliar,6)
        totnt->cod_nat  := mcod_nat
        totnt->vl_nota  := mvlr_nota
        totnt->vl_base  := mvl_base
        totnt->vl_icm   := mvl_icm
        totnt->aliq_icm := maliq_icm
        totnt->tip_frete:= mtip_frete
        totnt->num_cont := mnum_cont
        DBCOMMIT()
        DBUNLOCK()
        opcao := op_simnao('S','Deseja Gerar DUPLICATA A PAGAR [S/n]:')
        IF opcao = 'S'
                dup_pag()
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* F I M ************************************
*******************************************
* ALTERACAO LANCAMENTO DE NOTA DE FRETE data:02/08/2004
*******************************************
FUNCTION sacfre2(mtp)
*****************

LOCAL mprg:='SACFRE2',;
      lci:=0,cci:=0,lba:=8,cba:=78,opcao,mdocumento,memissao,mserie,;
      mvlr_nota,mvl_base,mvl_icm,mtip_frete,mnum_cont,mtela,mmodelo,maliq_icms,;
      mauxiliar

PRIVATE mcod_forn:=0,muf,mfornece,mcod_nat

*------------------------------------------------------------
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sactotnt','totnt');RETURN NIL;ENDIF
*------------------------------------------------------------
op_tela(lci,cci,lba+2,cba,' ALTERACAO - Lancamento NOTA FISCAL DE FRETE ')

WHILE .T.
        opcao:=' '
        memissao  := CTOD('  /  /  ')
        mserie    := mtip_frete:= ' '
        mcod_nat  := SPACE(5)
        mnum_cont := SPACE(12)
        mvlr_nota  := mvl_base  := mvl_icm   := maliq_icm := mdocumento:=;
        maliq_icms:= mcod_forn := 0
        mmodelo := SPACE(2)
        mauxiliar := SPACE(6)
        DEVPOS(lci+1,cci+1);DEVOUT('Nota Fiscal Origem:')
        DEVPOS(lci+2,cci+1);DEVOUT('Codigo Fornecedor.:')
        DEVPOS(lci+3,cci+1);DEVOUT('No.Documento:')
        DEVPOS(lci+3,cci+23);DEVOUT('Emissao:')
        DEVPOS(lci+3,cci+43);DEVOUT('Modelo:')
        DEVPOS(lci+3,cci+54);DEVOUT('Serie:')
        DEVPOS(lci+3,cci+63);DEVOUT('Frete:')
        DEVPOS(lci+4,cci+1);DEVOUT('Numero Contabil:')
        DEVPOS(lci+4,cci+32);DEVOUT('CFOP:')
        DEVPOS(lci+5,cci+1);DEVOUT('CGC:')
        DEVPOS(lci+5,cci+22);DEVOUT('INSC.:')
        DEVPOS(lci+5,cci+36);DEVOUT('UF:')
        DEVPOS(lci+6,cci+1);DEVOUT('Valor Documento:')
        DEVPOS(lci+6,cci+30);DEVOUT('Valor Base...:')
        DEVPOS(lci+7,cci+1);DEVOUT('Valor do ICMS...:')
        DEVPOS(lci+7,cci+30);DEVOUT('Aliquota ICMS:')
        IF mtp <> NIL
                *****************************
                SELE('totnt');ORDSETFOCUS(12)
                GO TOP
                *****************************
                @ lci+1,cci+21 GET mauxiliar PICT '999999'
                READ
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                IF ! totnt->(DBSEEK(mauxiliar+'E'))
                        atencao('Nao foi encontrada esta Nota de Frete...')
                        LOOP
                ENDIF
                mcod_forn := VAL(totnt->cod_cli)
                ent_forn(@mcod_forn,lci+2,cci+26)
                setcor(3)
                DEVPOS(lci+1,cci+21);DEVOUT(totnt->auxiliar)
                DEVPOS(lci+2,cci+21);DEVOUT(totnt->cod_cli)
                DEVPOS(lci+3,cci+15);DEVOUT(totnt->documento)
                DEVPOS(lci+3,cci+32);DEVOUT(totnt->emissao)
                DEVPOS(lci+3,cci+51);DEVOUT(totnt->modelo)
                DEVPOS(lci+3,cci+61);DEVOUT(totnt->serie)
                DEVPOS(lci+3,cci+70);DEVOUT(totnt->tip_frete)
                DEVPOS(lci+5,cci+6);DEVOUT(forn->cgc)
                DEVPOS(lci+5,cci+29);DEVOUT(forn->insc)
                DEVPOS(lci+5,cci+40);DEVOUT(forn->uf)
                DEVPOS(lci+4,cci+18);DEVOUT(totnt->num_cont)
                DEVPOS(lci+4,cci+38);DEVOUT(totnt->cod_nat)
                DEVPOS(lci+6,cci+18);DEVOUTPICT(totnt->vl_nota,'999,999.99')
                DEVPOS(lci+6,cci+45);DEVOUTPICT(totnt->vl_base,'999,999.99')
                DEVPOS(lci+7,cci+18);DEVOUTPICT(totnt->vl_icm,'999,999.99')
                DEVPOS(lci+7,cci+45);DEVOUTPICT(totnt->aliq_icm,'999,999.99')
                setcor(1)
                mensagem('Pressione qualquer Tecla p/continuar...')
                INKEY(0)
                LOOP
        ENDIF
        @ lci+2,cci+21 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn),.F.,ent_forn(@mcod_forn,lci+2,cci+26))
        @ lci+3,cci+15 GET mdocumento PICT '999999' VALID IF(EMPTY(mdocumento),.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        setcor(3)
        DEVPOS(lci+5,cci+6);DEVOUT(forn->cgc)
        DEVPOS(lci+5,cci+29);DEVOUT(forn->insc)
        DEVPOS(lci+5,cci+40);DEVOUT(forn->uf)
        setcor(1)
        *****************************
        SELE('totnt');ORDSETFOCUS(11)
        GO TOP
        *****************************
        IF ! totnt->(DBSEEK('70'+'NF'+STRZERO(mdocumento,6)+STRZERO(mcod_forn,4)+' '))
                atencao('Esta Nota de Frete nao foi encontrada...')
                LOOP
        ENDIF
        memissao     := totnt->emissao
        mmodelo      := totnt->modelo
        mserie       := totnt->serie
        mcod_nat     := totnt->cod_nat
        mvlr_nota    := totnt->vl_nota
        mvl_base     := totnt->vl_base
        mvl_icm      := totnt->vl_icm
        maliq_icm    := totnt->aliq_icm
        mtip_frete   := totnt->tip_frete
        mnum_cont    := totnt->num_cont
        mauxiliar    := totnt->auxiliar
        @ lci+1,cci+21 GET mauxiliar PICT '999999' VALID IF(EMPTY(mauxiliar),.F.,.T.)
        @ lci+3,cci+32 GET memissao
        @ lci+3,cci+51 GET mmodelo PICT '@!'
        @ lci+3,cci+61 GET mserie PICT '@!'
        @ lci+3,cci+70 GET mtip_frete PICT '@!' VALID mtip_frete $ '1,2'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        setcor(3)
        DEVPOS(lci+5,cci+6);DEVOUT(forn->cgc)
        DEVPOS(lci+5,cci+29);DEVOUT(forn->insc)
        DEVPOS(lci+5,cci+40);DEVOUT(forn->uf)
        setcor(1)
        @ lci+4,cci+18 GET mnum_cont PICT '@!'
        @ lci+4,cci+38 GET mcod_nat PICT '9.999'
        @ lci+6,cci+18 GET mvlr_nota PICT '999,999.99'
        @ lci+6,cci+45 GET mvl_base PICT '999,999.99'
        @ lci+7,cci+18 GET mvl_icm PICT '999,999.99'
        @ lci+7,cci+45 GET maliq_icm PICT '999,999.99'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        opcao := mensagem1('Confirma a Alteracao da Nota de Frete:','S','S,N')
        IF opcao = 'N' .OR. LASTKEY() = 27
                LOOP
        ENDIF
        IF ! BLOQREG()
                atencao('Nao foi possivel acessar o arquivo')
                LOOP
        ENDIF
        totnt->empresa := mcodempresa
        totnt->tip_sef := '70'
        totnt->cod_cli := STRZERO(mcod_forn,4)
        totnt->cliente := forn->razao
        totnt->cid_cli := forn->cidade
        totnt->uf_cli  := forn->uf
        totnt->insc_cli := forn->insc
        totnt->cgc_cli  := forn->cgc
        totnt->emissao  := memissao
        totnt->ent_sai  := 'E'
        totnt->modelo   := mmodelo
        totnt->serie    := mserie
        totnt->cod_nat  := mcod_nat
        totnt->vl_nota  := mvlr_nota
        totnt->vl_base  := mvl_base
        totnt->vl_icm   := mvl_icm
        totnt->aliq_icm := maliq_icm
        totnt->tip_frete:= mtip_frete
        totnt->num_cont := mnum_cont
        totnt->auxiliar := mauxiliar
        DBCOMMIT()
        DBUNLOCK()
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* F I M ************************************
*******************************************
* LANCAMENTO DE NOTA DE FRETE data:02/08/2004
*******************************************
FUNCTION sacfre3
*****************

LOCAL mprg:='SACFRE3',;
      lci:=0,cci:=0,lba:=7,cba:=78,opcao,mdocumento,memissao,mserie,;
      mvlr_nota,mvl_base,mvl_icm,mtip_frete,mnum_cont,mtela,mmodelo,maliq_icms

PRIVATE mcod_forn:=0,muf,mfornece,mcod_nat

*------------------------------------------------------------
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sactotnt','totnt');RETURN NIL;ENDIF
*------------------------------------------------------------
op_tela(lci,cci,lba+2,cba,' EXCLUSAO - Lancamento NOTA FISCAL DE FRETE ')

WHILE .T.
        *****************************
        SELE('totnt');ORDSETFOCUS(11)
        GO TOP
        *****************************
        memissao  := CTOD('  /  /  ')
        mserie    := mtip_frete:= opcao:=' '
        mcod_nat  := SPACE(5)
        mvlr_nota  := mvl_base  := mvl_icm   := maliq_icm := maliq_icms:= ;
        mcod_forn := mdocumento := 0
        mnum_cont := SPACE(12)
        mmodelo := SPACE(2)
        DEVPOS(lci+1,cci+1);DEVOUT('No.Documento:')
        DEVPOS(lci+1,cci+23);DEVOUT('Emissao:')
        DEVPOS(lci+1,cci+43);DEVOUT('Modelo:')
        DEVPOS(lci+1,cci+54);DEVOUT('Serie:')
        DEVPOS(lci+1,cci+63);DEVOUT('Frete:')
        DEVPOS(lci+2,cci+1);DEVOUT('Numero Contabil:')
        DEVPOS(lci+2,cci+32);DEVOUT('CFOP:')
        DEVPOS(lci+3,cci+1);DEVOUT('Codigo Fornecedor:')
        DEVPOS(lci+4,cci+1);DEVOUT('CGC:')
        DEVPOS(lci+4,cci+22);DEVOUT('INSC.:')
        DEVPOS(lci+4,cci+36);DEVOUT('UF:')
        DEVPOS(lci+5,cci+1);DEVOUT('Valor Documento:')
        DEVPOS(lci+5,cci+30);DEVOUT('Valor Base...:')
        DEVPOS(lci+6,cci+1);DEVOUT('Valor do ICMS...:')
        DEVPOS(lci+6,cci+30);DEVOUT('Aliquota ICMS:')
        @ lci+1,cci+15 GET mdocumento PICT '999999' VALID IF(EMPTY(mdocumento),.F.,.T.)
        @ lci+3,cci+20 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn),.F.,ent_forn(@mcod_forn,lci+3,cci+25))
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF ! totnt->(DBSEEK('70'+'NF'+STRZERO(mdocumento,6)+STRZERO(mcod_forn,4)+' '))
                atencao('Esta Nota de Frete nao foi encontrada...')
                LOOP
        ENDIF
        setcor(3)
        DEVPOS(lci+4,cci+6);DEVOUT(forn->cgc)
        DEVPOS(lci+4,cci+29);DEVOUT(forn->insc)
        DEVPOS(lci+4,cci+40);DEVOUT(forn->uf)
        @ lci+1,cci+32 SAY totnt->emissao
        @ lci+1,cci+51 SAY totnt->modelo
        @ lci+1,cci+61 SAY totnt->serie
        @ lci+1,cci+70 SAY totnt->tip_frete
        @ lci+2,cci+18 SAY totnt->num_cont PICT '@!'
        @ lci+2,cci+38 SAY totnt->cod_nat PICT '9.999'
        @ lci+5,cci+18 SAY totnt->vl_nota PICT '999,999.99'
        @ lci+5,cci+45 SAY totnt->vl_base PICT '999,999.99'
        @ lci+6,cci+18 SAY totnt->vl_icm PICT '999,999.99'
        @ lci+6,cci+45 SAY totnt->aliq_icm PICT '999,999.99'
        setcor(1)
        opcao := mensagem1('Confirma a Exclusao da Nota de Frete:','S','S,N')
        IF opcao = 'N' .OR. LASTKEY() = 27
                LOOP
        ENDIF
        IF ! BLOQREG()
                atencao('Nao foi possivel acessar o arquivo')
                LOOP
        ENDIF
        DELE
        DBCOMMIT()
        DBUNLOCK()
        sr_getconnection():exec("DELETE FROM sactotnt WHERE SR_DELETED = 'T'",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDDO
wvw_lclosewindow()
RETURN NIL

