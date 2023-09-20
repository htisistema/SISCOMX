********************
* LISTAGEM MOVIMENTO P/SERIE
********************
MEMVAR getlist,nivel_acess,mdata_sis

FUNCTION sac530(mcod)
**************
LOCAL MPRG:='SAC530',mtitulo:='RELATORIO MOVIMENTO DE PRODUTO P/SERIE'
LOCAL lci,cci,lba,cba,opcao,mquantd,mdata1,mdata2,mtot_geral,mtot_vend,mtot_avend,;
      mqtd_geral,mqtd_vend,mqtd_avend,mtot_lucro,mop

PRIVATE mtraco,mtit,mtipo,mpag,mcod_merc

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,mtitulo,'156',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('=',132)

lci := 00
cci := 00
lba := 05
cba := 70
*----------------------------------------------------------------------------
//
IF ! AbriArq('merc_det','deta');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
set_key('merc')
op_tela(lci,cci,lba+2,cba,mtitulo)
WHILE .T.
        IF mcod <> NIL
                mcod_merc := mcod
        ELSE
                mcod_merc := 0
        ENDIF
        mtipo_imp := m_indiv[1,18]
        mdata1 := CTOD('  /  /  ')
        mdata2 := mdata_sis
        mop := 'G'
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(lci+1,cci+2);DEVOUT('Codigo Merc....:')
        DEVPOS(lci+2,cci+2);DEVOUT('Tipo [V]endidos ou [G]eral:')
        DEVPOS(lci+3,cci+2);DEVOUT('Data Inicial..............:')
        DEVPOS(lci+4,cci+2);DEVOUT('Data Final................:')
        @ lci+1,cci+19 GET mcod_merc PICT '99999' VALID ver_cod(mcod_merc,lci+1,cci+25,,0)
        @ lci+2,cci+30 GET mop PICT '@!' VALID mop $ 'V,G'
        @ lci+3,cci+30 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+4,cci+30 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        READ
        IF LASTKEY() = 27
                fimset()
                EXIT
        ENDIF
        IF mop = 'G'
                ****************
                SELE('deta');ORDSETFOCUS(3)
                GO TOP
                ****************
        ELSE
                ****************
                SELE('deta');ORDSETFOCUS(4)
                GO TOP
                ****************
        ENDIF
        deta->(DBSEEK(DTOS(mdata1),.T.))
        IF EOF()
                atencao('Nao existe movimento deste Produto')
                LOOP
        ENDIF
        IF ! imp_arq('PROD_SER.REL','R')
                LOOP
        ENDIF
        mpag = 1
        IF ! EMPTY(mcod_merc)
                mtit = 'Movimento Produto p/Serial:'+STRZERO(mcod_merc)+'-'+merc->merc+' - '+IF(mop='V','(VENDIDOS)','(GERAL)')
        ELSE
                mtit = 'Movimento Produto p/Serial'+' - '+IF(mop='V','(VENDIDOS)','(GERAL)')
        ENDIF
        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
        cabecalho(mpag,mtit,mtipo,mprg)
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+1,02);DEVOUT('Data')
        DEVPOS(PROW(),10);DEVOUT('Cod.')
        DEVPOS(PROW(),17);DEVOUT('Descricao')
        DEVPOS(PROW(),59);DEVOUT('Serial')
        DEVPOS(PROW(),81);DEVOUT(' Vlr.Venda')
        DEVPOS(PROW(),92);DEVOUT('Dat.Venda')
        DEVPOS(PROW(),102);DEVOUT('Vlr.Vendido')
        DEVPOS(PROW(),115);DEVOUT('No.Pedido')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        mtot_geral := 0
        mtot_vend  := 0
        mtot_avend := 0
        mqtd_geral := 0
        mqtd_vend  := 0
        mqtd_avend := 0
        mtot_lucro := 0
        IF mop = 'G'
                WHILE deta->data <= mdata2 .AND. ! EOF()
                        IF ! EMPTY(mcod_merc) .AND. mcod_merc <> deta->codigo
                                SKIP;LOOP
                        ENDIF

                        DEVPOS(PROW()+1,00);DEVOUT(deta->data)
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(deta->codigo)
                        ver_cod(VAL(deta->codigo),PROW(),PCOL()+2,,0,'*')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(deta->chassis)
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(deta->vlr_venda,'999,999.99'))
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(deta->dat_venda)
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(deta->vl_vendido,'999,999.99'))
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(deta->n_ped)
                        mtot_geral := mtot_geral + deta->vlr_venda
                        mqtd_geral := mqtd_geral + 1
                        IF ! EMPTY(deta->dat_venda)
                                mtot_lucro := mtot_lucro + (deta->vl_vendido - deta->vlr_custo)
                                mtot_vend  := mtot_vend + deta->vl_vendido
                                mqtd_vend  := mqtd_vend + 1
                        ELSE
                                mtot_avend := mtot_avend + deta->vlr_venda
                                mqtd_avend := mqtd_avend + 1
                        ENDIF
                        SKIP
                        IF PROW() >= 59
                                mpag ++
                                EJECT
                                cabecalho(mpag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,02);DEVOUT('Data')
                                DEVPOS(PROW(),10);DEVOUT('Cod.')
                                DEVPOS(PROW(),17);DEVOUT('Descricao')
                                DEVPOS(PROW(),59);DEVOUT('Serial')
                                DEVPOS(PROW(),81);DEVOUT(' Vlr.Venda')
                                DEVPOS(PROW(),92);DEVOUT('Dat.Venda')
                                DEVPOS(PROW(),102);DEVOUT('Vlr.Vendido')
                                DEVPOS(PROW(),115);DEVOUT('No.Pedido')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                LOOP
                        ENDIF
                ENDDO
        ELSE
                WHILE deta->dat_venda <= mdata2 .AND. ! EOF()
                        IF ! EMPTY(mcod_merc) .AND. mcod_merc <> deta->codigo
                                SKIP;LOOP
                        ENDIF

                        DEVPOS(PROW()+1,00);DEVOUT(deta->data)
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(deta->codigo)
                        ver_cod(VAL(deta->codigo),PROW(),PCOL()+2,,0,'*')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(deta->chassis)
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(deta->vlr_venda,'999,999.99'))
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(deta->dat_venda)
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(deta->vl_vendido,'999,999.99'))
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(deta->n_ped)
                        mtot_geral := mtot_geral + deta->vlr_venda
                        mqtd_geral := mqtd_geral + 1
                        IF ! EMPTY(deta->dat_venda)
                                mtot_lucro := mtot_lucro + (deta->vl_vendido - deta->vlr_custo)
                                mtot_vend  := mtot_vend + deta->vl_vendido
                                mqtd_vend  := mqtd_vend + 1
                        ELSE
                                mtot_avend := mtot_avend + deta->vlr_venda
                                mqtd_avend := mqtd_avend + 1
                        ENDIF
                        SKIP
                        IF PROW() >= 59
                                mpag ++
                                EJECT
                                cabecalho(mpag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,02);DEVOUT('Data')
                                DEVPOS(PROW(),10);DEVOUT('Cod.')
                                DEVPOS(PROW(),17);DEVOUT('Descricao')
                                DEVPOS(PROW(),59);DEVOUT('Serial')
                                DEVPOS(PROW(),81);DEVOUT(' Vlr.Venda')
                                DEVPOS(PROW(),92);DEVOUT('Dat.Venda')
                                DEVPOS(PROW(),102);DEVOUT('Vlr.Vendido')
                                DEVPOS(PROW(),115);DEVOUT('No.Pedido')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                LOOP
                        ENDIF
                ENDDO
        ENDIF
        IF PROW() >= 43
                mpag ++
                EJECT
                cabecalho(mpag,mtit,mtipo,mprg)
        ENDIF
        DEVPOS(PROW()+2,00);DEVOUT('Total de ENTRADAS..:')
        DEVPOS(PROW(),21);DEVOUT('('+LTRIM(TRANSFORM(mqtd_geral,'999999.99'))+')')
        DEVPOS(PROW(),PCOL());DEVOUT(' - R$:')
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_geral,'999,999,999.99')
        DEVPOS(PROW()+1,00);DEVOUT('Total de VENDIDO...:')
        DEVPOS(PROW(),21);DEVOUT('('+LTRIM(TRANSFORM(mqtd_vend,'999999.99'))+')')
        DEVPOS(PROW(),PCOL());DEVOUT(' - R$:')
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_vend,'999,999,999.99')
        DEVPOS(PROW(),PCOL());DEVOUT(' - Lucro R$:')
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_lucro,'999,999,999.99')
        DEVPOS(PROW(),PCOL());DEVOUT(' - ')
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT((mtot_lucro/mtot_vend)*100,'999.99')
        DEVPOS(PROW(),PCOL());DEVOUT(' %')
        DEVPOS(PROW()+1,00);DEVOUT('Total de SALDO.....:')
        DEVPOS(PROW(),21);DEVOUT('('+LTRIM(TRANSFORM(mqtd_avend,'999999.99'))+')')
        DEVPOS(PROW(),PCOL());DEVOUT(' - R$:')
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_avend,'999,999,999.99')
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        imprt(mtipo_imp,'N',1)
        EJECT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        SETPRC(00,00)
        conf_impressao('PROD_SER.REL')
        /*
        IF mimp_tipo = 2
                lertexto('PROD_SER.REL')
        ELSEIF mtipo_imp = 'D'
                
        ELSE
                MYRUN('DOSPRINTER /RAW /DEL '+ALLTRIM(m_indiv[1,5])+'HTI.REL')
        ENDIF
        */
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
