********************
* Relatorio P/CONTABILIDADE
********************
FUNCTION saccont
**************
LOCAL MPRG:='SACCONT',mtitulo:='DISKETE P/CONTABILIDADE'
LOCAL tela,lci,cci,lba,cba,opcao,mdata1,mdata2

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

tela := SAVESCREEN(01,00,24,79)

mtraco := REPLI('=',132)

lci := 08
cci := 05
lba := 11
cba := 45
*----------------------------------------------------
CLOSE ALL
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('sactotnt','totnt');RETURN NIL;ENDIF
*----------------------------------------------------
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        exibi_prg(mprg)
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        mensagem('Preencha os Campos - <ESC>p/Sair')
        botao(lci,cci,lba,cba,,mtitulo)
        DEVPOS(lci+1,cci+2);DEVOUT('Data Inicial...:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Final.....:')

        @ lci+1,cci+19 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+2,cci+19 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        READ
        IF LASTKEY() = 27
                RESTSCREEN(01,00,24,79,tela)
                CLOSE ALL
                RETURN NIL
        ENDIF
        opcao := op_simnao('S','Confirma o periodo:')
        IF opcao = 'N'
                LOOP
        ENDIF
        ****************
        SELE('totnt');ORDSETFOCUS(1)
        GO TOP
        ****************
        totnt->(DBSEEK(DTOS(mdata1),.T.))
        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        IF ! imp_arq('SAIDA.TXT','R')
                LOOP
        ENDIF
        i := 0
        WHILE totnt->emissao <= mdata2 .AND. ! EOF()     // NOTA NORMAL
                DEVPOS(PROW()+i,00);DEVOUT('NF')
                DEVPOS(PROW(),03);DEVOUT(LEFT(totnt->serie,3))
                DEVPOS(PROW(),06);DEVOUT(STRZERO(VAL(SUBSTR(totnt->documento,3)),6))
                DEVPOS(PROW(),12);DEVOUT(STRZERO(VAL(SUBSTR(totnt->documento,3)),6))
                DEVPOS(PROW(),18);DEVOUT('1')
                DEVPOS(PROW(),19);DEVOUT(SUBSTR(DTOC(totnt->emissao),1,2)+SUBSTR(DTOC(totnt->emissao),4,2)+SUBSTR(DTOC(totnt->emissao),7,2))
                DEVPOS(PROW(),25);DEVOUT('    0')
                DEVPOS(PROW(),30);DEVOUT(SPACE(3))
*               DEVPOS(PROW(),30);DEVOUT(SUBSTR(totnt->cod_nat,1,1)+SUBSTR(totnt->cod_nat,3))
                DEVPOS(PROW(),33);DEVOUTPICT(totnt->vl_nota,'99999999999.99')
                DEVPOS(PROW(),47);DEVOUTPICT(totnt->vl_nota,'99999999999.99')
                DEVPOS(PROW(),61);DEVOUTPICT(totnt->vl_base,'99999999999.99')
                DEVPOS(PROW(),75);DEVOUTPICT(totnt->vl_icm,'99999999999.99')
                IF totnt->vl_base = 0
                        DEVPOS(PROW(),89);DEVOUTPICT(totnt->vl_nota,'99999999999.99')
                ENDIF
                DEVPOS(PROW(),103);DEVOUTPICT(0,'99999999999.99')
                DEVPOS(PROW(),117);DEVOUTPICT(totnt->vl_nota-totnt->ipi,'99999999999.99')
                DEVPOS(PROW(),131);DEVOUTPICT(totnt->ipi,'99999999999.99')
                DEVPOS(PROW(),145);DEVOUTPICT(0,'99999999999.99')
                DEVPOS(PROW(),159);DEVOUTPICT(0,'99999999999.99')
                DEVPOS(PROW(),173);DEVOUTPICT(0,'99999999999.99')
                DEVPOS(PROW(),187);DEVOUTPICT((totnt->vl_icm/totnt->vl_base)*100,'99.99')
                DEVPOS(PROW(),192);DEVOUT(' 1')
                DEVPOS(PROW(),194);DEVOUT('   ')
                DEVPOS(PROW(),197);DEVOUTPICT(0,'99999999999.99')
                DEVPOS(PROW(),211);DEVOUTPICT(0,'99999999999.99')
                DEVPOS(PROW(),225);DEVOUTPICT(0,'99999999999.99')
                DEVPOS(PROW(),239);DEVOUTPICT(0,'99999999999.99')
                IF ! EMPTY(totnt->cgc_cli)
                        DEVPOS(PROW(),253);DEVOUT(totnt->cgc_cli)
                ELSE
                        DEVPOS(PROW(),253);DEVOUT(STRZERO(VAL(totnt->cpf_cli),14))
                ENDIF
                DEVPOS(PROW(),267);DEVOUT('10045')
                DEVPOS(PROW(),272);DEVOUT(totnt->uf_cli)
                DEVPOS(PROW(),395);DEVOUT(SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2))
                DEVPOS(PROW(),409);DEVOUT(minsc_firm+SPACE(4))
                DEVPOS(PROW(),427);DEVOUT(m_set[1,19])
                DEVPOS(PROW(),429);DEVOUT(LEFT(m_set[1,129],34))
                IF ! EMPTY(totnt->cgc_cli)
                        DEVPOS(PROW(),463);DEVOUT(totnt->cgc_cli)
                ELSE
                        DEVPOS(PROW(),463);DEVOUT(STRZERO(VAL(totnt->cpf_cli),14))
                ENDIF
                IF EMPTY(totnt->insc_cli)
                        DEVPOS(PROW(),477);DEVOUT('ISENTO')
                ELSE
                        DEVPOS(PROW(),477);DEVOUT(totnt->insc_cli)
                ENDIF
                DEVPOS(PROW(),495);DEVOUT(totnt->uf_cli)
                DEVPOS(PROW(),497);DEVOUT(totnt->cliente)
                DEVPOS(PROW(),531);DEVOUT('1')
                DEVPOS(PROW(),532);DEVOUT(STRZERO(VAL(SUBSTR(totnt->documento,3)),6))
                DEVPOS(PROW(),538);DEVOUT('UN ')
                DEVPOS(PROW(),541);DEVOUT('NF')
                DEVPOS(PROW(),543);DEVOUT('UN ')
                DEVPOS(PROW(),546);DEVOUT(SUBSTR(DTOC(totnt->emissao),1,2)+SUBSTR(DTOC(totnt->emissao),4,2)+SUBSTR(DTOC(totnt->emissao),7,2))
                DEVPOS(PROW(),552);DEVOUT('10')
                DEVPOS(PROW(),554);DEVOUTPICT(totnt->vl_nota,'99999999999.99')
*               DEVPOS(PROW(),568);DEVOUT('0')
                DEVPOS(PROW(),569);DEVOUTPICT(0,'99999999999.99')
                DEVPOS(PROW(),589);DEVOUTPICT(0,'99999999999.99')
                DEVPOS(PROW(),609);DEVOUTPICT(0,'99999999999.99')
                DEVPOS(PROW(),629);DEVOUTPICT(0,'99999999999.99')
                DEVPOS(PROW(),649);DEVOUTPICT(0,'99999999999.99')
                DEVPOS(PROW(),669);DEVOUTPICT(0,'99999999999.99')
                DEVPOS(PROW(),689);DEVOUTPICT(0,'99999999999.99')
                DEVPOS(PROW(),733);DEVOUT(SUBSTR(totnt->cod_nat,1,1)+SUBSTR(totnt->cod_nat,3))
                SKIP
                i := 1
        ENDDO
        SET DEVI TO SCREEN;SET PRINT OFF;SET PRINT TO
        conf_impressao('SAIDA.TXT')
ENDDO
