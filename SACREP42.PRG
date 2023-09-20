*********************************************
* RELATORIO DE PRODUTOS POR DATA DE REAJUSTE
*********************************************
FUNCTION sacrep42
*****************

LOCAL mprg:='SACREP42',mtitulo:='RELATORIO DE PRODUTOS REAJUSTADO P/DATA DE INCLUSAO',;
      lci:=00,cci:=00,lba:=04,cba:=40,opcao:=SPACE(1),;
      mdata1,mdata2,mtip_orde:=' '

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mtit,mtipo,mpag:=0,mtraco:=REPLI('-',80)

IF ! ver_nivel(mprg,mtitulo,'1235',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

*----------------------------------------------------------------------------
//
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('sacrepro','repro');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
op_tela(lci,cci,lba+2,cba,mtitulo)
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        exibi_prg(mprg)
        mdata1 := CTOD('  /  /  ')
        mdata2 := mdata_sis
        mtip_orde := ' '
        DEVPOS(lci+1,cci+1);DEVOUT('Data Incial.................:')
        DEVPOS(lci+2,cci+1);DEVOUT('Data Final..................:')
        DEVPOS(lci+3,cci+1);DEVOUT('Orde [5]Codigo [6]Alfabetica:')
        @ lci+1,cci+31 GET mdata1 VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+2,cci+31 GET mdata2 VALID IF(mdata2 < mdata1,.F.,.T.)
        @ lci+3,cci+31 GET mtip_orde VALID mtip_orde $ '5,6'
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        *****************************
        SELE('repro');ORDSETFOCUS(VAL(mtip_orde))
        GO TOP
        *****************************
        repro->(DBSEEK(DTOS(mdata1),.T.))

        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        mtit := 'Relatorio de Produtos com REAJUSTE p/ DATA DE INCLUSAO'
        mtipo := 'Periodo de: '+DTOC(mdata1)+' a '+DTOC(mdata2)
        IF ! imp_arq('PROD_REAJ.REL','R')
                LOOP
        ENDIF
        mpag := 0
        WHILE ! EOF() .AND. repro->data <= mdata2
                IF mpag = 0 .OR. PROW() >= 57
                        mpag ++
                        IF mpag > 1
                                EJECT
                        ENDIF
                        cabecalho(mpag,mtit,mtipo,mprg,'001')
                        imprt(mtipo_imp,'N')
                        DEVPOS(PROW()+1,00);DEVOUT('Produto                                           Preco Reaj.    Data    Ope')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                prog_imp(RECNO(),DTOC(repro->data_ok))
                DEVPOS(PROW()+1,00);DEVOUT(repro->cod_pro+' '+repro->produto+'      '+TRANSFORM(repro->valor,'999,999.99')+'  '+DTOC(repro->data)+'  '+repro->ope)
                SKIP
        ENDDO
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('PROD_REAJ.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL















