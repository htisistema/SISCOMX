***************************************************
* FUNCAO P/EXPORTAR PRODUTOS P/FILIAL OU CLIENTE
***************************************************
FUNCTION sacexpor()
*******************
LOCAL mprg:='SACEXPOR',;
      lci,cci,lba,cba,tela,opcao,i:=0

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

lci := 10
cci := 02
lba := 13
cba := 78
tela := SAVESCREEN(00,00,24,79)
*----------------------------------------------------------------------------
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
WHILE .T.
        exibi_prg(mprg)
        mtipo_imp := m_indiv[1,18]
        opcao := ' '
        botao(lci,cci,lba,cba,,' Arquivo p/Exporta Produtos ')
        DEVPOS(lci+1,cci+1);DEVOUT('Arquivo p/ [F]ilial ou [C]liente:')
        DEVPOS(lci+2,cci+1);DEVOUT('Produtos Processados.:')
        @ lci+1,cci+34 GET opcao PICT '@!' VALID opcao $ 'F,C'
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela)
                RETURN NIL
        ENDIF
        IF ! imp_arq('TABPRO.TXT','R')
                LOOP
        ENDIF
        ***************************
        SELE('merc');ORDSETFOCUS(8)
        GO TOP
        ***************************
        DEVPOS(00,00);DEVOUT(opcao)
        WHILE ! EOF()
                IF EMPTY(merc->cod_merc);SKIP;LOOP;ENDIF
                SETPOS(lci+2,cci+23);DISPOUT(merc->cod_merc+'-'+merc->merc)
                DEVPOS(PROW()+1,00);DEVOUT(merc->cod_barr)
                DEVPOS(PROW(),PCOL());DEVOUT(merc->ref)
                DEVPOS(PROW(),PCOL());DEVOUT(merc->gru_sub)
                DEVPOS(PROW(),PCOL());DEVOUT(merc->cod_merc)
                DEVPOS(PROW(),PCOL());DEVOUT(merc->merc)
                DEVPOS(PROW(),PCOL());DEVOUT(merc->unidade)
                IF opcao = 'F'
                        DEVPOS(PROW(),PCOL());DEVOUT(merc->cust_merc)
                        DEVPOS(PROW(),PCOL());DEVOUT(merc->cust_real)
                ELSE
                        DEVPOS(PROW(),PCOL());DEVOUT('      0.0000')
                        DEVPOS(PROW(),PCOL());DEVOUT('      0.0000')
                ENDIF
                DEVPOS(PROW(),PCOL());DEVOUT(merc->pr_venda)
                IF opcao = 'F'
                        DEVPOS(PROW(),PCOL());DEVOUT(merc->pr_venda1)
                        DEVPOS(PROW(),PCOL());DEVOUT(merc->pr_fat)
                        DEVPOS(PROW(),PCOL());DEVOUT(merc->varejo)
                ELSE
                        DEVPOS(PROW(),PCOL());DEVOUT('      0.0000')
                        DEVPOS(PROW(),PCOL());DEVOUT('      0.0000')
                        DEVPOS(PROW(),PCOL());DEVOUT('    0.0000')
                ENDIF
                DEVPOS(PROW(),PCOL());DEVOUT(merc->isento)
                DEVPOS(PROW(),PCOL());DEVOUT(merc->bebida)
                DEVPOS(PROW(),PCOL());DEVOUT(merc->ipi)
                DEVPOS(PROW(),PCOL());DEVOUT(merc->ind_icms)
                DEVPOS(PROW(),PCOL());DEVOUT(merc->sit_trib)
                DEVPOS(PROW(),PCOL());DEVOUT(merc->cod_fis)
                DEVPOS(PROW(),PCOL());DEVOUT(merc->sittrib)
                DEVPOS(PROW(),PCOL());DEVOUT(merc->nbm)
                DEVPOS(PROW(),PCOL());DEVOUT(merc->aplic0)
                DEVPOS(PROW(),PCOL());DEVOUT(merc->aplic1)
                DEVPOS(PROW(),PCOL());DEVOUT(merc->aplic2)
                DEVPOS(PROW(),PCOL());DEVOUT(merc->aplic3)
                DEVPOS(PROW(),PCOL());DEVOUT(merc->aplic4)
                SKIP
        ENDDO
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        IF (ver_serie()='141220' .OR. ver_serie()='141350' .OR. ver_serie()='141384' .OR. ver_serie() = '141399');
           .AND. opcao = 'F'
                IF ! imp_arq('TABFORN.TXT','R')
                        LOOP
                ENDIF
                ***************************
                SELE('forn');ORDSETFOCUS(1)
                GO TOP
                ***************************
                WHILE ! EOF()
                        IF forn->tipo <> '1.01';SKIP;LOOP;ENDIF
                        SETPOS(lci+2,cci+23);DISPOUT(forn->cod_forn+'-'+forn->razao)
                        DEVPOS(PROW(),00);DEVOUT(forn->cod_forn)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->razao)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->tipo)
                        DEVPOS(PROW(),PCOL());DEVOUT(DTOC(forn->data_cad))
                        DEVPOS(PROW(),PCOL());DEVOUT(DTOC(forn->ult_comp))
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->endereco)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->bairro)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->cidade)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->uf)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->cep)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->cpostal)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->email)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->tel1)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->tel2)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->fax)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->cgc)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->insc)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->cpf)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->carteira)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->banco)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->prazo_pag)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->ct_gerente)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->ct_vendedo)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->ct_fatura)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->ct_cobran)
                        DEVPOS(PROW(),PCOL());DEVOUT(TRANSFORM(forn->limite,'9999999.99'))
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->obs)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->obs1)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->obs2)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->obs3)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->obs4)
                        DEVPOS(PROW(),PCOL());DEVOUT(forn->obs5)
                        SKIP
                        IF ! EOF()
                                DEVPOS(PROW()+1,00);DEVOUT('')
                        ENDIF
                ENDDO
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF

                IF ! imp_arq('TABGRUP.TXT','R')
                        LOOP
                ENDIF
                ***************************
                SELE('grup');ORDSETFOCUS(1)
                GO TOP
                ***************************
                WHILE ! EOF()
                        SETPOS(lci+2,cci+23);DISPOUT(grup->gru_sub+'-'+grup->merc)
                        DEVPOS(PROW(),00);DEVOUT(grup->gru_sub)
                        DEVPOS(PROW(),PCOL());DEVOUT(grup->merc)
                        DEVPOS(PROW(),PCOL());DEVOUT(DTOC(grup->data_cad))
                        SKIP
                        IF ! EOF()
                                DEVPOS(PROW()+1,00);DEVOUT('')
                        ENDIF
                ENDDO
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        ENDIF
        RESTSCREEN(00,00,24,79,tela)
        conf_impressao('TABPRO.TXT')
ENDDO
RETURN NIL
