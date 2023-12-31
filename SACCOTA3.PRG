********************
* RELATORIO COTACAO DE PRODUTOS
********************
MEMVAR getlist,nivel_acess,mdata_sis

FUNCTION saccota3
**************
LOCAL MPRG:='SACCOTA3',mtitulo:='RELATORIO DE COTACA DE PRODUTOS',;
      tela,lci,cci,lba,cba,opcao,i,mtecla,mdata1,mdata2,mcod_merc,mcod_forn,;
      mdia,mtot_item,mger_item

PRIVATE mtraco,telaprint,mtit,mtipo,mpag

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('-',132)

lci := 00
cci := 00
lba := 05
cba := 60
*----------------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('saccotac','cotac');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
op_tela(lci,cci,lba,cba,mtitulo)
WHILE .T.
        mtipo_imp := m_indiv[1,18]
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        mcod_merc := mcod_forn := 0
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(lci+1,cci+2);DEVOUT('Data Inicial...:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Final.....:')
        DEVPOS(lci+3,cci+2);DEVOUT('Cod.Produto....:')
        DEVPOS(lci+4,cci+2);DEVOUT('Cod.Fornecedor.:')
        @ lci+1,cci+19 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+2,cci+19 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+3,cci+19 GET mcod_merc PICT '99999' VALID IF(EMPTY(mcod_merc),.T.,ver_cod(mcod_merc,lci+3,cci+25))
        @ lci+4,cci+19 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn),.T.,v_fornece(mcod_forn,lci+4,cci+24))
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                RELEASE mtraco,telaprint,mtit,mtipo,mpag
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        ****************
        SELE('cotac');ORDSETFOCUS(3)
        GO TOP
        ****************
        cotac->(DBSEEK(DTOS(mdata1),.T.))
        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        mpoint := RECNO()
        marq := 'COTACAO.REL'
        IF ! imp_arq('COTACAO.REL','R')
                LOOP
        ENDIF
        mger_item := mpag := 0
        mtit = 'Relatorio Cotacoes de Produtos'
        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
        WHILE cotac->data <= mdata2 .AND. ! EOF()
                IF (! EMPTY(mcod_forn) .AND. STRZERO(mcod_forn,4) <> cotac->cod_forn);
                   .OR. (! EMPTY(mcod_merc) .AND. mcod_merc <> cotac->codigo)
                        SKIP
                        LOOP
                ENDIF
                IF PROW() >= 57 .OR. mpag = 0
                        mpag ++
                        IF mpag > 1;EJECT;ENDIF
                        cabecalho(mpag,mtit,mtipo)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT('  Data  ')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Fornecedor                                     ')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Produto                                      ')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        LOOP
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(DTOC(cotac->data)+' '+cotac->cod_forn+' '+cotac->fornece+'   '+cotac->codigo+' '+cotac->produto)
                mger_item ++
                SKIP
        ENDDO
        IF PROW() >= 59
                mpag ++
                EJECT
                cabecalho(mpag,mtit,mtipo)
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('  Data  ')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Doc.NF.')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Hora')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Transportadora      ')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Fornecedor'+SPACE(36))
                DEVPOS(PROW(),PCOL()+1);DEVOUT(' Emissao')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('   Saida')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(' Tran.')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('   Volumes')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('     Valor')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                LOOP
        ENDIF
        DEVPOS(PROW()+1,75);DEVOUT('T O T A L   G E R A L  da(s) '+TRANSFORM(mger_item,'99999'))
        DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',132))
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao(marq)
ENDDO
wvw_lclosewindow()
RETURN NIL

