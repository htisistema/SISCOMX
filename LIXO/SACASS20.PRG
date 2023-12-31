***************************************
* RELATORIO DE ASSISTENCIAS EM ABERTO
***************************************
FUNCTION sacass20(mtp)
*******************
LOCAL mprg:='SACASS20',mtitulo,;
      lci:=00,cci:=00,lba:=09,cba:=70,opcao,tela,mdata1,mdata2,muf,;
      mqtd_produto:=0

PRIVATE mcod_cli,mcod_merc,mcod_ven,mcod_ope,;
        mtraco,mtit,mtipo,pag,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),malias:='ass',cons_cli := {}

IF mtp = NIL
	mtitulo := 'RELATORIO DE MOVIMENTO ASSISTENCIA PRODUTOS ABERTOS'
        IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
ELSE
	mtitulo := 'RELATORIO DE MOVIMENTO SOLICITACAO DE PRODUTOS ABERTOS'
        IF ! ver_nivel(mprg+mtp,mtitulo,'15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        malias := 'solpr'
ENDIF
*---------------------------------------------
IF ! AbriArq('sacsolpr','solpr');RETURN NIL;ENDIF
IF ! AbriArq('sacass','ass');RETURN NIL;ENDIF
IF ! AbriArq('saclog','log');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*---------------------------------------------

mtraco := REPLI('=',132)
op_tela(10,10,21,70,mtitulo)

WHILE .T.
        mtipo_imp := m_indiv[1,18]
        mdata1    := mdata_sis - 30
        mdata2    := mdata_sis
        mcod_cli  := mcod_merc := mcod_ven := mqtd_produto:= mcod_ope := 0
        muf := '  '
        mcodemp   := '   '
        mensagem('Preencha os Campos - <ESC>p/Abandonar')
        DEVPOS(lci+1,cci+2);DEVOUT('Cod.Empresa....:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Inicial...:')
        DEVPOS(lci+3,cci+2);DEVOUT('Data Final.....:')
        DEVPOS(lci+4,cci+2);DEVOUT('Codigo Cliente.:')
        DEVPOS(lci+5,cci+2);DEVOUT('Codigo Produto.:')
        DEVPOS(lci+6,cci+2);DEVOUT('Codigo Vendedor:')
        DEVPOS(lci+7,cci+2);DEVOUT('Codigo Operador:')
        DEVPOS(lci+8,cci+2);DEVOUT('Sigla Estado...:')

        @ lci+1,cci+19 GET mcodemp PICT "999" VALID ver_emp(mcodemp,lci+1,cci+23,'*') WHEN mmult_emp ='S'
        @ lci+2,cci+19 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+3,cci+19 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+4,cci+19 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,lci+4,cci+25)
        @ lci+5,cci+19 GET mcod_merc PICT '99999' VALID ver_cod(mcod_merc,lci+5,cci+25,.F.,0)
        @ lci+6,cci+19 GET mcod_ven PICT '999' VALID IF(EMPTY(mcod_ven),.T.,ven(mcod_ven,lci+6,cci+24))
        @ lci+7,cci+19 GET mcod_ope PICT '999' VALID IF(EMPTY(mcod_ope),.T.,ven(mcod_ope,lci+7,cci+24))
        @ lci+8,cci+19 GET muf PICT '@!' VALID  v_uf(muf)
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RELEASE mtraco,telaprint,mtit,mtipo,pag
                RETURN NIL
        ENDIF
        ****************
        SELE(malias);ORDSETFOCUS(1)
        GO TOP
        ****************
        (malias)->(DBSEEK(DTOS(mdata1),.T.))
        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        IF ! imp_arq('ASS_ABERT.REL','R')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        pag=0
        mtit  := 'Relatorio '+IF(mtp=NIL,'Assistencia','Solicitacao')+' de Produtos em Aberto'
        mtipo := DTOC(mdata1)+' a '+DTOC(mdata2)
        WHILE (malias)->data <= mdata2 .AND. ! EOF()
                IF pag=0 .OR. PROW()>=59
                        pag=pag+1
                        IF pag>1
                                EJECT
                        ENDIF
                        cabecalho(pag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT('  Data  ')
                        DEVPOS(PROW(),09);DEVOUT('Produto')
                        DEVPOS(PROW(),55);DEVOUT('Quantidade')
                        DEVPOS(PROW(),67);DEVOUT('Cliente')
                        DEVPOS(PROW(),113);DEVOUT('UF')
                        DEVPOS(PROW(),116);DEVOUT('Ven.')
                        DEVPOS(PROW(),122);DEVOUT('Ope.')
                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                ENDIF
                IF (! EMPTY(mcod_ven) .AND. STRZERO(mcod_ven,3) <> (malias)->vendedor);
                   .OR. (! EMPTY(mcod_ope) .AND. STRZERO(mcod_ope,3) <> (malias)->oper_incl);
                   .OR. (! EMPTY(mcod_cli) .AND. (malias)->cod_cli<>mcod_cli);
                   .OR. (! EMPTY(mcod_merc) .AND. (malias)->cod_pro<>mcod_merc);
                   .OR. (! EMPTY(muf) .AND. (malias)->uf_cli<>muf);
                   .OR. (! EMPTY((malias)->data_baix));
                   .OR. (! EMPTY(mcodemp) .AND. mcodemp<>(malias)->empresa)
                        SKIP
                        LOOP
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT((malias)->data)
                DEVPOS(PROW(),09);DEVOUT((malias)->cod_pro+'-'+(malias)->produto)
                DEVPOS(PROW(),55);DEVOUT(TRANSFORM((malias)->quantd,'999,999.99'))
                DEVPOS(PROW(),67);DEVOUT((malias)->cod_cli+'-'+(malias)->cliente)
                DEVPOS(PROW(),113);DEVOUT((malias)->uf_cli)
                DEVPOS(PROW(),116);DEVOUT((malias)->vendedor)
                DEVPOS(PROW(),122);DEVOUT((malias)->oper_incl)
                DEVPOS(PROW()+1,09);DEVOUT('MOTIVO: '+(malias)->motivo)
                IF ! EMPTY((malias)->motivo1)
                        DEVPOS(PROW()+1,09);DEVOUT('        '+(malias)->motivo1)
                ENDIF
                IF ! EMPTY((malias)->motivo2)
                        DEVPOS(PROW()+1,09);DEVOUT('        '+(malias)->motivo2)
                ENDIF
                mqtd_produto := mqtd_produto + (malias)->quantd
                SKIP
        ENDDO
        IF PROW() >= 57
                EJECT
                pag=pag+1
                cabecalho(pag,mtit,mtipo,mprg)
        ENDIF
        DEVPOS(PROW()+1,00);DEVOUT("*** RESUMO FINAL ***")
        DEVPOS(PROW()+2,00);DEVOUT("Total de Produtos em '+IF(mtp=NIL,'Assistencia','Solicitacao')+': "+TRANSFORM(mqtd_produto,"9,999,999.99"))
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('ASS_ABERT.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL

