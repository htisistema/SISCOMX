************************************************************
* FUNCAO DE SOLICITACAO DE O.S.
* 20/02/2006
************************************************************
FUNCTION sacos11
****************
LOCAL mprg:='SACOS11',mtitulo:='SOLICITACAO DE O.S.',;
      mtela,lci:=00,cci:=00,lba:=22,cba:=76,opcao,tela_ped,;
      mnum_os:=0,mmarca,mdata_ent,mhora_ent,maparelho,mmodelo,mserie,;
      mnumero,mdiag1,mdiag2,mdiag3,mdiag4,mdiag5,mdiag6,mdiag7,mdiag8,mdiag9,mdiag10,;
      mvlr_esti,mprev_ent,mgarantia,mngarantia,mgconserto,mtipo_os:='M'

PRIVATE mcod_cli,mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),;
        macesso1,macesso2,macesso3,macesso4,macesso5,macesso6,macesso7,;
        macesso8,macesso9,macesso10,mvia:=2,cons_cli := {}

IF ! ver_nivel(mprg,mtitulo,'156',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mtela:=SAVESCREEN(00,00,24,79)
SET KEY -8 TO sac130()           // inclusao de clientes
*---------------------------------------------
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacosno','osno');RETURN NIL;ENDIF
IF ! AbriArq('sacospro','ospro');RETURN NIL;ENDIF
IF ! AbriArq('sacoss','oss');RETURN NIL;ENDIF
*---------------------------------------------
op_tela(lci,cci,lba+2,cba,mtitulo)

WHILE .T.
        exibi_prg(mprg)
        mtipo_imp := m_indiv[1,18]
        mnum_os:=moperador := mcod_cli  := mvlr_esti := 0
        mprev_ent := CTOD('  /  /  ')
        mdata_ent := mdata_sis
        mhora_ent := TIME()
        mserie := SPACE(10)
        mmarca := mmodelo := SPACE(15)
        mnumero   := SPACE(12)
        mdiag1:=mdiag2:=mdiag3:=mdiag4 := mdiag5:=mdiag6:=mdiag7:= mdiag8:=mdiag9:=mdiag10:= SPACE(60)
        macesso1:=macesso2:=macesso3:=macesso4:=macesso5:=macesso6:=macesso7:=;
        macesso8:=macesso9:=macesso10:=SPACE(3)
        mgarantia:=mngarantia:=mgconserto:=SPACE(1)
        DEVPOS(lci+1,cci+1);DEVOUT('Cliente:')
        IF m_set[1,157] # 'PROVEDOR'
                DEVPOS(lci+2,cci+1);DEVOUT('Entrada:           Hora:')
                IF m_set[1,37] = 'S'
                        DEVPOS(lci+3,cci+1);DEVOUT('Placa..:')
                        DEVPOS(lci+3,cci+27);DEVOUT('Km....:')
                ELSE
                        DEVPOS(lci+3,cci+1);DEVOUT('Serie..:')
                        DEVPOS(lci+3,cci+27);DEVOUT('Numero:')
                ENDIF
                DEVPOS(lci+4,cci+1);DEVOUT('Marca..:')
                DEVPOS(lci+4,cci+32);DEVOUT('Modelo:')
                DEVPOS(lci+5,cci+1);DEVOUT('Diagnostico:')
                DEVPOS(lci+15,cci+1);DEVOUT('Valor Estipulado:')
                DEVPOS(lci+15,cci+31);DEVOUT('Previsao Entrega:')
                DEVPOS(lci+16,cci+1);DEVOUT('Acessorios:                             Acessorio:')
                DEVPOS(lci+17,cci+1);DEVOUT('Acessorios:                             Acessorio:')
                DEVPOS(lci+18,cci+1);DEVOUT('Acessorios:                             Acessorio:')
                DEVPOS(lci+19,cci+1);DEVOUT('Acessorios:                             Acessorio:')
                DEVPOS(lci+20,cci+1);DEVOUT('Acessorios:                             Acessorio:')
                DEVPOS(lci+21,cci+1);DEVOUT('[ ] Garantia   [ ] Nao Garantia   [ ] Garantia Conserto')
                IF ! alt_senha('1')
                        RELEASE ALL
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                @ lci+1,cci+10 GET mcod_cli PICT '99999' VALID IF(EMPTY(mcod_cli),.F.,ver_cli(mcod_cli,lci+1,cci+16))
                READ
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                @ lci+2,cci+10 GET mdata_ent VALID IF(EMPTY(mdata_ent),.F.,.T.)
                @ lci+2,cci+26 GET mhora_ent
                @ lci+3,cci+10 GET mserie PICT '@!' VALID IF(EMPTY(mserie),.F.,.T.)
                READ
                IF ver_envelope(mserie,'*')
                        IF(EMPTY(mmarca),mmarca := ped_s->pcarro,mmarca)
                        IF(EMPTY(mmodelo),mmodelo := ped_s->pmodelo,mmodelo)
                        IF(EMPTY(mnumero),mnumero := ped_s->pkm,mnumero)
                ENDIF
                @ lci+3,cci+35 GET mnumero PICT '@!' VALID IF(EMPTY(mnumero),.F.,.T.)
                @ lci+4,cci+10 GET mmarca PICT '@!' VALID IF(EMPTY(mmarca),.F.,.T.)
                @ lci+4,cci+40 GET mmodelo PICT '@!' VALID IF(EMPTY(mmodelo),.F.,.T.)
                @ lci+5,cci+14 GET mdiag1
                @ lci+6,cci+14 GET mdiag2
                @ lci+7,cci+14 GET mdiag3
                @ lci+8,cci+14 GET mdiag4
                @ lci+9,cci+14 GET mdiag5
                @ lci+10,cci+14 GET mdiag6
                @ lci+11,cci+14 GET mdiag7
                @ lci+12,cci+14 GET mdiag8
                @ lci+13,cci+14 GET mdiag9
                @ lci+14,cci+14 GET mdiag10
                @ lci+15,cci+19 GET mvlr_esti PICT '999,999.99'
                @ lci+15,cci+49 GET mprev_ent VALID IF(EMPTY(mprev_ent),.F.,.T.)
                @ lci+16,cci+14 GET macesso1 PICT '999' VALID ver_acess(macesso1,lci+16,cci+18,,0)
                @ lci+17,cci+14 GET macesso2 PICT '999' VALID ver_acess(macesso2,lci+17,cci+18,,0)
                @ lci+18,cci+14 GET macesso3 PICT '999' VALID ver_acess(macesso3,lci+18,cci+18,,0)
                @ lci+19,cci+14 GET macesso4 PICT '999' VALID ver_acess(macesso4,lci+19,cci+18,,0)
                @ lci+20,cci+14 GET macesso5 PICT '999' VALID ver_acess(macesso5,lci+20,cci+18,,0)
                @ lci+16,cci+52 GET macesso6 PICT '999' VALID ver_acess(macesso6,lci+16,cci+56,,0)
                @ lci+17,cci+52 GET macesso7 PICT '999' VALID ver_acess(macesso7,lci+17,cci+56,,0)
                @ lci+18,cci+52 GET macesso8 PICT '999' VALID ver_acess(macesso8,lci+18,cci+56,,0)
                @ lci+19,cci+52 GET macesso9 PICT '999' VALID ver_acess(macesso9,lci+19,cci+56,,0)
                @ lci+20,cci+52 GET macesso10 PICT '999' VALID ver_acess(macesso10,lci+20,cci+56,,0)
                @ lci+21,cci+2 GET mgarantia PICT '@!' VALID mgarantia $ 'X, '
                @ lci+21,cci+17 GET mngarantia PICT '@!' VALID mngarantia $ 'X, ' WHEN EMPTY(mgarantia)
                @ lci+21,cci+36 GET mgconserto PICT '@!' VALID mgconserto $ 'X, ' WHEN EMPTY(mgarantia) .AND. EMPTY(mngarantia)
                READ
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
        ELSE
                DEVPOS(lci+2,cci+1);DEVOUT('Entrada:')
                DEVPOS(lci+3,cci+1);DEVOUT('Hora...:')
                DEVPOS(lci+5,cci+1);DEVOUT('Diagnostico:')
                DEVPOS(lci+16,cci+1);DEVOUT('Tipo de O.S.:')
                IF ! alt_senha('1')
                        RELEASE ALL
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                @ lci+1,cci+10 GET mcod_cli PICT '99999' VALID IF(EMPTY(mcod_cli),.F.,ver_cli(mcod_cli,lci+1,cci+16))
                READ
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                @ lci+2,cci+10 GET mdata_ent VALID IF(EMPTY(mdata_ent),.F.,.T.)
                @ lci+3,cci+10 GET mhora_ent
                @ lci+5,cci+14 GET mdiag1
                @ lci+6,cci+14 GET mdiag2
                @ lci+7,cci+14 GET mdiag3
                @ lci+8,cci+14 GET mdiag4
                @ lci+9,cci+14 GET mdiag5
                @ lci+10,cci+14 GET mdiag6
                @ lci+11,cci+14 GET mdiag7
                @ lci+12,cci+14 GET mdiag8
                @ lci+13,cci+14 GET mdiag9
                @ lci+14,cci+14 GET mdiag10
                @ lci+16,cci+14 GET mtipo_os PICT '@!' VALID mtipo_os $ 'M,I'
                READ
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
        ENDIF
        opcao := op_simnao('S','Confirma a Operacao:')
        IF opcao = 'N'
                LOOP
        ENDIF
        *************
        SELE('osno')
        *************
        IF ! BLOQARQ()
                LOOP
        ENDIF
        GO TOP
        IF LASTREC() = 0
                IF ! ADIREG()
                        atencao('Nao foi possivel gerar o numero do PEDIDO')
                        LOOP
                ENDIF
        ELSE
                IF ! BLOQARQ()
                        atencao('Nao foi possivel gerar o numero da O.S.')
                        LOOP
                ENDIF
        ENDIF
        mnum_os = VAL(osno->num_os)+1
        osno->num_os := STRZERO(mnum_os,6)
        DBCOMMIT()
        DBUNLOCK()
        **************************
        SELE('oss');ORDSETFOCUS(1)
        **************************
        ADIREG()
        oss->empresa     := mcodempresa
        oss->num_os      := STRZERO(mnum_os,6)
        oss->operador    := cod_operado
        oss->cod_cli     := mcod_cli
        oss->data_ent    := mdata_ent
        oss->hora_ent    := mhora_ent
        oss->marca       := mmarca
        oss->modelo      := mmodelo
        oss->serie       := mserie
        oss->numero      := mnumero
        oss->diag1       := mdiag1
        oss->diag2       := mdiag2
        oss->diag3       := mdiag3
        oss->diag4       := mdiag4
        oss->diag5       := mdiag5
        oss->diag6       := mdiag6
        oss->diag7       := mdiag7
        oss->diag8       := mdiag8
        oss->diag9       := mdiag9
        oss->diag10      := mdiag10
        oss->vlr_esti    := mvlr_esti
        oss->prev_ent    := mprev_ent
        oss->garantia    := mgarantia
        oss->ngarantia   := mngarantia
        oss->gconserto   := mgconserto
        oss->acesso1     := macesso1
        oss->acesso2     := macesso2
        oss->acesso3     := macesso3
        oss->acesso4     := macesso4
        oss->acesso5     := macesso5
        oss->acesso6     := macesso6
        oss->acesso7     := macesso7
        oss->acesso8     := macesso8
        oss->acesso9     := macesso9
        oss->acesso10    := macesso10
        oss->tipo_os     := mtipo_os
        DBCOMMIT()
        DBUNLOCK()
        op_tela(02,00,08,79,,'1','1')
        SUB_BANNER(01,01,'O.S.: '+STRZERO(mnum_os,6))
        setcor(1)
        atencao('Foi Gerada o Numero da O.S.: '+STRZERO(mnum_os,6))
        wvw_lclosewindow()
        IF m_set[1,157] # 'PROVEDOR' .AND. m_set[1,37] = 'S'
                os_prod(mnum_os)
        ENDIF
        sacosimp(mnum_os)
ENDDO
wvw_lclosewindow()
RETURN NIL
