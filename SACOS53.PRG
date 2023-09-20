***************************************
* RELATORIO DE PRODUTOS DA O.S. EM ABERTO
***************************************
FUNCTION sacos53()
*******************
LOCAL mprg:='SACOS51',mtitulo:='RELATORIO DE MOVIMENTO PRODUTOS DAS O.S. ABERTOS',;
      lci:=00,cci:=00,lba:=06,cba:=70,opcao,tela,mdata1,mdata2,mtotal_g:=0,;
      mtotal_os:=0,mquantd_g:=0,mponto:=0

PRIVATE mcod_cli,mcod_ope,;
        mtraco,mtit,mtipo,mpag,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),cons_cli := {}

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
*---------------------------------------------
IF ! AbriArq('sacoss','oss');RETURN NIL;ENDIF
IF ! AbriArq('sacospro','ospro');RETURN NIL;ENDIF
IF ! AbriArq('saclog','log');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*---------------------------------------------
op_tela(lci,cci,lba+2,cba,mtitulo)

mtraco := REPLI('=',132)
WHILE .T.
        mtipo_imp := m_indiv[1,18]
        mdata1    := mdata_sis - 30
        mdata2    := mdata_sis
        mcod_cli  := mcod_ope := mtotal_g := mtotal_os := mquantd_g := 0
        mcodemp   := '   '
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(lci+1,cci+2);DEVOUT('Cod.Empresa....:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Inicial...:')
        DEVPOS(lci+3,cci+2);DEVOUT('Data Final.....:')
        DEVPOS(lci+4,cci+2);DEVOUT('Codigo Cliente.:')
        DEVPOS(lci+5,cci+2);DEVOUT('Codigo Operador:')

        @ lci+1,cci+19 GET mcodemp PICT "999" VALID ver_emp(mcodemp,lci+1,cci+23,'*') WHEN mmult_emp ='S'
        @ lci+2,cci+19 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+3,cci+19 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+4,cci+19 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,lci+4,cci+25)
        @ lci+5,cci+19 GET mcod_ope PICT '999' VALID IF(EMPTY(mcod_ope),.T.,ven(mcod_ope,lci+6,cci+24))
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RELEASE mtraco,telaprint,mtit,mtipo,mpag
                RETURN NIL
        ENDIF
        ****************
        SELE('oss');ORDSETFOCUS(2)
        GO TOP
        ****************
        oss->(DBSEEK(DTOS(mdata1),.T.))
        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        IF ! imp_arq('OS_ABERT.REL','R')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mpag=0
        mtit  := 'Relatorio de Produtos em O.S. Aberta '
        mtipo := DTOC(mdata1)+' a '+DTOC(mdata2)
        WHILE oss->data_ent <= mdata2 .AND. ! EOF()
                IF mpag=0 .OR. PROW()>=59
                        mpag := mpag + 1
                        IF mpag > 1
                                EJECT
                        ENDIF
                        cabecalho(mpag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT('Data Ent')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('No.O.S')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' Cli.')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Ope')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Produto                                       ')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Quantidade')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('     Valor')
                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                ENDIF
                IF  (! EMPTY(mcod_ope) .AND. STRZERO(mcod_ope,3) <> oss->operador);
                   .OR. (! EMPTY(mcod_cli) .AND. oss->cod_cli<>mcod_cli);
                   .OR. (! EMPTY(oss->baixa));
                   .OR. (! EMPTY(mcodemp) .AND. mcodemp<>oss->empresa);
                   .OR. (! EMPTY(oss->pag))
                        SKIP;LOOP
                ENDIF
*               mponto := RECNO()
*               mtotal_os := 0
*               mtotal_os := tot_os(oss->num_os)
*               GO mponto
                ****************
                SELE('ospro');ORDSETFOCUS(1)
                GO TOP
                ****************
                IF ospro->(DBSEEK(STRZERO(VAL(oss->num_os),6)))
                        DEVPOS(PROW()+1,00);DEVOUT(oss->data_ent)
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(oss->num_os)
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(oss->cod_cli)
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(oss->operador)
*                       mtotal_g := mtotal_g + mtotal_os
                        mquantd_g ++
                        WHILE ospro->num_os = oss->num_os .AND. ! EOF()
                                DEVPOS(PROW(),26);DEVOUT(ospro->cod_merc)
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(ospro->merc)
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(ospro->quantd,'999,999.99'))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(ospro->vlr_fat,'999,999.99'))
                                SKIP
                                IF ospro->num_os = oss->num_os
                                        DEVPOS(PROW()+1,00)     //;DEVOUT('')
                                ENDIF
                                IF mpag=0 .OR. PROW()>=59
                                        mpag := mpag + 1
                                        IF mpag > 1
                                                EJECT
                                        ENDIF
                                        cabecalho(mpag,mtit,mtipo,mprg)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,00);DEVOUT('Data Ent')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('No.O.S')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' Cli.')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Ope')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Produto                                       ')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Quantidade')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('     Valor')
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                                ENDIF
                        ENDDO
                ENDIF
                ****************
                SELE('oss');ORDSETFOCUS(2)
                ****************
                SKIP
        ENDDO
        IF PROW() >= 57
                EJECT
                mpag=mpag+1
                cabecalho(mpag,mtit,mtipo,mprg)
        ENDIF
        DEVPOS(PROW()+1,00);DEVOUT("*** RESUMO FINAL ***")
        DEVPOS(PROW()+2,00);DEVOUT("Total das O.S.: "+TRANSFORM(mquantd_g,"99,999")+' - '+TRANSFORM(mtotal_g,"9,999,999.99"))
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('OS_ABERT.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M ************************

