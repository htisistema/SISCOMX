********************
* Relatorio do SCI
********************

FUNCTION sacsci
**************
LOCAL MPRG:='SACSCI',mtitulo:='EMISSAO DO ARQUIVO SCI'
LOCAL tela,lci,cci,lba,cba,opcao,mponto,morde

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
*----------------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
SET CENTURY ON
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        morde := '01'
        morde := mensagem1('Escolha a ordem que deseja que seja gerado o arquivo [1]p/Tipo - [2]Cod.Cliente - [3]Data Pagamento - [4] Vencimento - [5] Emissao - [8]Razao - [10] Documento:','01','01,02,03,04,05,08,10')
        IF LASTKEY() = 27
                SET CENTURY OFF
                RETURN NIL
        ENDIF
        opcao := op_simnao('S','Confirma o Processo do Diskete SCI:')
        IF ! imp_arq('SCI.TXT','R')
                LOOP
        ENDIF
        ****************
        SELE('dupr');ORDSETFOCUS(VAL(morde))
        GO TOP
        ****************
        WHILE ! EOF()
                prog_imp(RECNO())
                ver_cli(VAL(dupr->fornec),,,'*')
                IF EMPTY(cli->cgc)
                        SKIP
                        LOOP
                ENDIF
                IF ! EMPTY(cli->cgc)
                        IF ! EMPTY(dupr->datpag)
                                DEVPOS(PROW(),00);DEVOUT('J')
                        ELSE
                                DEVPOS(PROW(),00);DEVOUT('U')
                        ENDIF
                        DEVPOS(PROW(),01);DEVOUT(cli->cgc)
                        DEVPOS(PROW(),15);DEVOUT(cli->razao)
                        DEVPOS(PROW(),70);DEVOUT(cli->nome)
                        DEVPOS(PROW(),125);DEVOUT('M')
                        DEVPOS(PROW(),126);DEVOUT(cli->endereco+', '+RTRIM(cli->numero)+IF(! EMPTY(RTRIM(cli->complemento)),' - Compl.:'+RTRIM(cli->complemento),''))
                        DEVPOS(PROW(),196);DEVOUT(cli->cidade)
                        DEVPOS(PROW(),226);DEVOUT(cli->uf)
                        DEVPOS(PROW(),228);DEVOUT(cli->cep)
                        DEVPOS(PROW(),240);DEVOUT(SPACE(10))
                        DEVPOS(PROW(),254);DEVOUT(SPACE(10))
*                       DEVPOS(PROW(),240);DEVOUT(SUBSTR(cli->tel1,1,10))
*                       DEVPOS(PROW(),254);DEVOUT(SUBSTR(cli->fax,1,10))
                        DEVPOS(PROW(),264);DEVOUT(cli->email)
                        DEVPOS(PROW(),314);DEVOUT(SUBSTR(DTOC(cli->data_cad),4,2)+SUBSTR(DTOC(cli->data_cad),7))
                        DEVPOS(PROW(),320);DEVOUT(dupr->duplicata)
                        DEVPOS(PROW(),332);DEVOUT(SUBSTR(dupr->tipo,1,1))
                        DEVPOS(PROW(),333);DEVOUT('R$  ')
                        DEVPOS(PROW(),337);DEVOUT(SUBSTR(STRZERO(dupr->valor,14,2),1,11))
                        DEVPOS(PROW(),348);DEVOUT(SUBSTR(STRZERO(dupr->valor,14,2),13,2))
                        DEVPOS(PROW(),350);DEVOUT(SUBSTR(STRZERO(dupr->vlpago,14,2),1,11))
                        DEVPOS(PROW(),361);DEVOUT(SUBSTR(STRZERO(dupr->vlpago,14,2),13,2))
                        DEVPOS(PROW(),363);DEVOUT(SUBSTR(DTOC(dupr->emissao),1,2)+SUBSTR(DTOC(dupr->emissao),4,2)+SUBSTR(DTOC(dupr->emissao),7))
                        DEVPOS(PROW(),371);DEVOUT(SUBSTR(DTOC(dupr->venc),1,2)+SUBSTR(DTOC(dupr->venc),4,2)+SUBSTR(DTOC(dupr->venc),7))
                        DEVPOS(PROW(),379);DEVOUT(SUBSTR(DTOC(dupr->datpag),1,2)+SUBSTR(DTOC(dupr->datpag),4,2)+SUBSTR(DTOC(dupr->datpag),7))
                ELSE
                        IF ! EMPTY(dupr->datpag)
                                DEVPOS(PROW(),00);DEVOUT('F')
                        ELSE
                                DEVPOS(PROW(),00);DEVOUT('I')
                        ENDIF
                        DEVPOS(PROW(),01);DEVOUT(cli->cpf)
                        DEVPOS(PROW(),12);DEVOUT(cli->rg)
                        DEVPOS(PROW(),32);DEVOUT(SUBSTR(cli->orgao,4))
                        DEVPOS(PROW(),36);DEVOUT(cli->razao)
                        DEVPOS(PROW(),91);DEVOUT('R')
                        DEVPOS(PROW(),92);DEVOUT(cli->endereco+', '+RTRIM(cli->numero)+IF(! EMPTY(RTRIM(cli->complemento)),' - Compl.:'+RTRIM(cli->complemento),''))
                        DEVPOS(PROW(),162);DEVOUT(cli->cidade)
                        DEVPOS(PROW(),192);DEVOUT(cli->uf)
                        DEVPOS(PROW(),194);DEVOUT(cli->cep)
                        DEVPOS(PROW(),206);DEVOUT(SPACE(10))
                        DEVPOS(PROW(),220);DEVOUT(SPACE(10))
*                       DEVPOS(PROW(),206);DEVOUT(SUBSTR(cli->tel1,1,10))
*                       DEVPOS(PROW(),220);DEVOUT(SUBSTR(cli->fax,1,10))
                        DEVPOS(PROW(),230);DEVOUT(cli->email)
                        DEVPOS(PROW(),280);DEVOUT(SUBSTR(cli->data_cad,4,2)+SUBSTR(cli->data_cad,7))
                        DEVPOS(PROW(),286);DEVOUT(dupr->duplicata)
                        DEVPOS(PROW(),298);DEVOUT(SUBSTR(dupr->tipo,1,1))
                        DEVPOS(PROW(),299);DEVOUT('R$  ')
                        DEVPOS(PROW(),303);DEVOUT(SUBSTR(STRZERO(dupr->valor,14,2),1,11))
                        DEVPOS(PROW(),314);DEVOUT(SUBSTR(STRZERO(dupr->valor,14,2),13,2))
                        DEVPOS(PROW(),316);DEVOUT(SUBSTR(STRZERO(dupr->vlpago,14,2),1,11))
                        DEVPOS(PROW(),327);DEVOUT(SUBSTR(STRZERO(dupr->vlpago,14,2),13,2))
                        DEVPOS(PROW(),329);DEVOUT(SUBSTR(DTOC(dupr->emissao),1,2)+SUBSTR(DTOC(dupr->emissao),4,2)+SUBSTR(DTOC(dupr->emissao),7))
                        DEVPOS(PROW(),337);DEVOUT(SUBSTR(DTOC(dupr->venc),1,2)+SUBSTR(DTOC(dupr->venc),4,2)+SUBSTR(DTOC(dupr->venc),7))
                        DEVPOS(PROW(),345);DEVOUT(SUBSTR(DTOC(dupr->datpag),1,2)+SUBSTR(DTOC(dupr->datpag),4,2)+SUBSTR(DTOC(dupr->datpag),7))
                        DEVPOS(PROW(),PCOL());DEVOUT(SPACE(34))
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT('')
                SKIP
        ENDDO
        SET DEVI TO SCREEN;SET PRINT OFF;SET PRINT TO
        conf_impressao('SCI.TXT')
ENDDO
