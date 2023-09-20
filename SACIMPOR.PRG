***********************************************
* IMPORTAR ARQUIVO DE PRODUTOS
***********************************************

FUNCTION sacimpor()
******************
LOCAL mprg := 'SACIMPOR',mtitulo:='IMPORTAR ARQUIVO DE PRODUTO',;
      tela,opcao,lci,cci,lba,cba,msele,morde,mtip_imp,mtp_imp,;
      mtraco := REPLI('=',80),mqtd_prod:=0,mnome_arq,mcodigo,m_matriz:={},i:=0,;
      mcam_arq,mn_arq

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mtipo,mtit,mpag

IF ! ver_nivel(mprg,mtitulo,'1245',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
lci := 10
cci := 03
lba := 14
cba := 78
tela := SAVESCREEN(00,00,24,79)
mtraco := REPLI('=',80)
*---------------------------------------------
CLOSE ALL
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
mtip_term := m_cfg[2]
IF ! AbriArq('sacforn','forn','E');RETURN NIL;ENDIF
IF ! AbriArq('sacgrupo','grup','E');RETURN NIL;ENDIF
IF ! AbriArq('sactbmer','tbmer','E');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
*---------------------------------------------
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        exibi_prg(mprg)
        ASIZE(m_matriz,0)
        mtit := 'Listagem de Produtos Importado'
        mcam_arq := '\'+CURDIR()+'\'+SPACE(30)
        mn_arq := 'TABPRO.TXT'+SPACE(2)
        mtp_imp:='S'
        @ 23,00 CLEAR TO 23,79
        botao(lci,cci,lba,cba,,mtitulo)
        DEVPOS(lci+1,cci+1);DEVOUT('Caminho do Arquivo..................:')
        DEVPOS(lci+2,cci+1);DEVOUT('Nome do Arquivo com extensao........:')
        DEVPOS(lci+3,cci+1);DEVOUT('Deseja imprimir os Produtos Incluido:')
        @ lci+1,cci+39 GET mcam_arq PICT '@S30!'
        @ lci+2,cci+39 GET mn_arq PICT '@!'
        @ lci+3,cci+39 GET mtp_imp PICT '@!' VALID mtp_imp $ 'S,N'
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela)
                RETURN NIL
        ENDIF
        mensagem('Fazendo BACKUP do arquivo SACMERC.DBF... Aguarde um momento')
        COPY FILE sacmerc.dbf TO ('merc'+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+'.dbf')
        mnome_arq := RTRIM(mcam_arq)+RTRIM(mn_arq)
        IF ! FILE((mnome_arq))
                atencao('Nao foi possivel encontra este ARQUIVO')
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma a operacao [S/n]:')
        IF opcao = 'N'
                LOOP
        ENDIF
        mensagem('Fazendo BACKUP do arquivo SACMERC.DBF... Aguarde um momento')
        COPY FILE sacmerc.dbf TO ('merc'+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+'.dbf')
        marq := 'IM'+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),7,2)+'.TXT'
        IF mtp_imp = 'S'
                IF ! imp_arq(marq,'R')
                        LOOP
                ENDIF
        ENDIF
        mensagem('Fazendo IMPORTACAO arquivo TABPRO.TXT... Aguarde um momento')
        ***************
        SELE('tbmer')
        msele := SELE()
        ***************
        ZAP
        APPEND FROM (mnome_arq) SDF  //LIMITED WITH BLANK
        GO TOP
        mtip_imp := SUBSTR(tbmer->cod_barr,1,1)
        IF mtip_imp = 'F'
                mtipo := '*** FILIAL ***'
        ELSE
                mtipo := '*** CLIENTE ***'
        ENDIF
        mpag := mqtd_prod:=0
        mensagem('Aguarde o final do PROCESSO...')
        SKIP
        WHILE ! EOF()
                prog_IMP(VAL(tbmer->cod_merc))
                IF EMPTY(tbmer->ref)
                        SKIP
                        LOOP
                ENDIF
                msele := SELE()
                morde := INDEXORD()
                ****************************
                SELE('merc');ORDSETFOCUS(8)
                GO TOP
                ****************************
                IF merc->(DBSEEK(tbmer->ref))
                        BLOQREG()
                        IF mtip_imp = 'F'
                                merc->cod_barr  := tbmer->cod_barr
                                merc->ref       := tbmer->ref
                                merc->gru_sub   := tbmer->gru_sub
                                merc->cod_merc  := tbmer->cod_merc
                                merc->merc      := tbmer->merc
                                merc->unidade   := tbmer->unidade
                                merc->isento    := tbmer->isento
                                merc->bebida    := VAL(tbmer->bebida)
                                merc->ipi       := VAL(tbmer->ipi)
                                merc->cod_fis   := tbmer->cod_fis
                                merc->sittrib   := tbmer->sittrib
                                merc->nbm       := tbmer->nbm
                                merc->ind_icms  := tbmer->ind_icms
                                merc->sit_trib  := tbmer->sit_trib
                                merc->aplic0    := tbmer->aplic0
                                merc->aplic1    := tbmer->aplic1
                                merc->aplic2    := tbmer->aplic2
                                merc->aplic3    := tbmer->aplic3
                                merc->aplic4    := tbmer->aplic4

                                merc->pr_venda  := VAL(tbmer->pr_venda)
                                merc->pr_venda1 := VAL(tbmer->pr_venda1)
                                merc->pr_fat    := VAL(tbmer->pr_fat)
                                merc->varejo    := VAL(tbmer->varejo)
                        ENDIF
                ELSE
                        AADD(m_matriz,{tbmer->cod_barr,tbmer->ref,tbmer->gru_sub,tbmer->merc,tbmer->unidade,;
                                        'N','S',tbmer->isento,VAL(tbmer->bebida),VAL(tbmer->ipi),tbmer->cod_fis,tbmer->sittrib,;
                                        tbmer->nbm,tbmer->ind_icms,tbmer->sit_trib,tbmer->aplic0,tbmer->aplic1,tbmer->aplic2,;
                                        tbmer->aplic3,tbmer->aplic4,VAL(tbmer->cust_merc),VAL(tbmer->cust_real),VAL(tbmer->pr_venda),;
                                        VAL(tbmer->pr_venda1),VAL(tbmer->pr_fat),VAL(tbmer->varejo)})
                ENDIF
                *********
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                *********
                SKIP
        ENDDO
        i := 0
        FOR i = 1 TO LEN(m_matriz)
                ****************************
                SELE('merc');ORDSETFOCUS(1)
                GO BOTT
                ****************************
                mcodigo := STRZERO(VAL(merc->cod_merc)+1,5)
                ADIREG()
                merc->cod_merc  := mcodigo
                merc->cod_barr  := m_matriz[i,1]
                merc->ref       := m_matriz[i,2]
                merc->gru_sub   := m_matriz[i,3]
                merc->merc      := m_matriz[i,4]
                merc->unidade   := m_matriz[i,5]
                merc->alimento  := m_matriz[i,6]
                merc->disp      := m_matriz[i,7]
                merc->isento    := m_matriz[i,8]
                merc->bebida    := m_matriz[i,9]
                merc->ipi       := m_matriz[i,10]
                merc->cod_fis   := m_matriz[i,11]
                merc->sittrib   := m_matriz[i,12]
                merc->nbm       := m_matriz[i,13]
                merc->ind_icms  := m_matriz[i,14]
                merc->sit_trib  := m_matriz[i,15]
                merc->aplic0    := m_matriz[i,16]
                merc->aplic1    := m_matriz[i,17]
                merc->aplic2    := m_matriz[i,18]
                merc->aplic3    := m_matriz[i,19]
                merc->aplic4    := m_matriz[i,20]
                IF mtip_imp = 'F'
                        merc->cust_merc := m_matriz[i,21]
                        merc->cust_real := m_matriz[i,22]
                        merc->pr_venda  := m_matriz[i,23]
                        merc->pr_venda1 := m_matriz[i,24]
                        merc->pr_fat    := m_matriz[i,25]
                        merc->varejo    := m_matriz[i,26]
                ELSE
                        merc->cust_merc := 0
                        merc->cust_real := 0
                        merc->pr_venda  := 0
                        merc->pr_venda1 := 0
                        merc->pr_fat    := 0
                        merc->varejo    := 0
                ENDIF
                DBCOMMIT()
                IF mtp_imp = 'S'
                        IF mpag = 0 .OR. PROW() >= 57
                                mpag ++
                                IF mpag > 1
                                        EJECT
                                ENDIF
                                cabecalho(mpag,mtit,mtipo,mprg,1)
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW()+1,00);DEVOUT(' Cod.')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Descricao                               ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Cod.Barra/Ref')
                                DEVPOS(PROW(),PCOL()+4);DEVOUT('UN')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT(merc->cod_merc)
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(merc->merc)
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(LEFT(merc->cod_barr,16))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(merc->unidade)
                        mqtd_prod ++
                ENDIF
        NEXT
        DBCOMMITALL()
        DBUNLOCKALL()
        IF ver_serie()='141220' .OR. ver_serie()='141350' .OR. ver_serie()='141384' .OR. ver_serie() = '141399'
                ***************
                SELE('forn');ORDSETFOCUS(1)
                msele := SELE()
                ***************
                ZAP
                mnome_arq := 'TABFORN.TXT'
                APPEND FROM (RTRIM(mcam_arq)+mnome_arq) SDF  //LIMITED WITH BLANK
                ***************
                SELE('grup');ORDSETFOCUS(1)
                msele := SELE()
                ***************
                ZAP
                mnome_arq := 'TABGRUP.TXT'
                APPEND FROM (RTRIM(mcam_arq)+mnome_arq) SDF  //LIMITED WITH BLANK
        ENDIF
        IF mtp_imp = 'S'
                DEVPOS(PROW()+2,00);DEVOUT('Quantidade de Produtos: '+TRANSFORM(mqtd_prod,'9,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT(TIME())
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao(marq)
        ENDIF
ENDDO
RETURN NIL

