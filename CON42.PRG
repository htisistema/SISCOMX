*** con42.PRG: Menu de Relatorios  (Receber)
***********************************************
FUNCTION con42(mtp_)
***************
LOCAL MPRG:='CON42',op42
op_tela(04,20,24,58,' Relatorio Doc. A RECEBER ')
WHILE .T.
        exibi_prg(mprg)
        setcor(10)
        @ 00,00 PROMPT "  0-> Documentos Emitidas              "
        @ 01,00 PROMPT "  1-> Analitico de Cliente             "
        @ 02,00 PROMPT "  2-> Documentos a Vencer/Vencidas     "  
        @ 03,00 PROMPT "  3-> Documentos Pagas                 "
        @ 04,00 PROMPT "  4-> Emissao de Documento             "
        @ 05,00 PROMPT "  5-> Documento a Receber X a Pagar    "
        @ 06,00 PROMPT "  6-> Emissao de Faturamento p/Cliente "
        @ 07,00 PROMPT "  7-> Carta de Cobranca p/Clientes     "
        @ 08,00 PROMPT "  8-> Demonstrativo de DEBITO          "
        @ 09,00 PROMPT "  9-> Documentos c/Baixa Parcial       "
        @ 10,00 PROMPT "  A-> Clientes sem DEBITOS             "
        @ 11,00 PROMPT "  B-> Clientes Pedidos x Doc. Quitados "
        @ 12,00 PROMPT "  C-> Documentos Transferidos          "
        @ 13,00 PROMPT "  D-> Controle de Recebimento          "
        @ 14,00 PROMPT "  E-> Resumo Vendedor p/Cheqs.e Dup.   "  
        @ 15,00 PROMPT "  F-> Estatistica de Documentos        "
        @ 16,00 PROMPT "  G-> Emissao de Documentos Acordo     "
        @ 17,00 PROMPT "  H-> Documentos Pagos (DATA OPERACAO) "
        @ 18,00 PROMPT "  I-> Cliente Media de Dias em Atraso  "
        @ 19,00 PROMPT "  J-> Cliente com LIMITE ESTOURADO     "
        @ 20,00 PROMPT "  L-> Relatorio de Funcionarios        "
        MENU TO op42
        setcor(1)
        DO CASE
                CASE op42=0
                        wvw_lclosewindow()
                        RETURN NIL
                CASE op42=1
                        * DOCUMENTOS EMITIDOS
                        con420()
                CASE op42=2
                        * ANALITICOS DE CLIENTES
                        con421()
                CASE op42=3
                        * DOCUMENTOS A VENCER/VENCIDAS
                        con423()
                CASE op42=4
                        * DOCUMENTOS PAGOS
                        con424()
                CASE op42=5
                        con428()
                CASE op42=6
                        con419()
                CASE op42=7
                        con429()
                CASE op42=8
                        con425()
                CASE op42=9     // DEMONSTRATIVO DE DEBITO
                        con252(,'*')
                CASE op42=10
                        con422(,'*')
                CASE op42=11            // ARQUIVO REMESSA
                        con4201()
                CASE op42=12            // ARQUIVO REMESSA
                        con4202()
                CASE op42=13
                        con426()
                CASE op42=14
                        con4231()
                CASE op42=15
                        cheq_res()      // SAC561.PRG
                CASE op42=16
                        con427()
                CASE op42=17
                        con252(,'E')
                CASE op42=18
                        con4203()
                CASE op42=19
                        con4204()
                CASE op42=20
                        con4205()
                CASE op42=21
                        con4191()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
************************** F I M ****************************************
***********************************************
* RELATORIO DE RESUMO DE CHEQUES S/FUNDOS
***********************************************
FUNCTION cheq_res
*****************
LOCAL MPRG:='CHEQ_RES'
LOCAL tela,tela1,lci,cci,lba,cba,li,ci,lb,cb,opcao,mtraco,;
      mcod_vend,mdata1,mdata2,m_matriz:={},m_vend:={},;
      mvlr_ger,mtot_ger,mtot_dup:=0,mvlr_dup:=0,mtipo_doc:='  ',i,;
      mpag,mtit,mtipo,cons_senha:={},mponto:=0,cons_cheq:={}

PRIVATE mnome_ven,mcom_ven,mcliente,mcpf,mcgc
PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcodemp:=SPACE(3)

IF ! ver_nivel(mprg,'CHEQUE SEM FUNDO (RESUMO POR VENDEDOR)','1456',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mtraco := REPLI('=',132)

lci := cci := 0
lba := 05
cba := 75
op_tela(10,10,17,85,' Relatorio Comissao/Vendas ')
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mdata1 := mdata_sis - 31
        mdata2 := mdata_sis
        mcod_vend := mvlr_ger := mtot_ger := mvlr_dup := mtot_dup := 0
        mimp_tipo := 1
        m_matriz :={}
        m_vend   :={}
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(lci+1,cci+2);DEVOUT('Codigo da Empresa:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Inicial.....:')
        DEVPOS(lci+3,cci+2);DEVOUT('Data Final.......:')
        DEVPOS(lci+4,cci+2);DEVOUT('Tipo de Documento:')

        @ lci+1,cci+22 GET mcodemp PICT '999' VALID ver_emp(mcodemp,lci+1,cci+26,,'*') WHEN mmult_emp = 'S'
        @ lci+2,cci+21 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+3,cci+21 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+4,cci+21 GET mtipo_doc PICT '@!' VALID ver_tipdc(mtipo_doc,'*')
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        cons_senha := {}
        sr_getconnection():exec("SELECT * FROM insopera ORDER BY snome",,.t.,@cons_senha)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_senha) = 0
                atencao('Nao existe nenhum Vendedor !!!')
        ENDIF
        mensagem('Aguarde.. Gerando Consulta')
        i := 0
        FOR i = 1 TO LEN(cons_senha)
                prog_imp(i)
                cons_cheq := {}
                cComm  := "SELECT COUNT(*),SUM(valor_cheq) FROM saccheq WHERE data_ok IS NULL AND ok IS NULL"
                ccomm := ccomm + " AND data_fund  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)
                ccomm := ccomm + " AND cod_vend = "+sr_cdbvalue(cons_senha[i,1])
                IF ! EMPTY(mcodemp)
                        cComm  := ccomm + " AND empresa = "+sr_cdbvalue(mcodemp)
                ENDIF
                sr_getconnection():exec(ccomm,,.t.,@cons_cheq)
                sr_getconnection():exec('COMMIT',,.f.)
                IF cons_cheq[1,1] = 0
                        LOOP
                ENDIF
*                                   1                2               3               4       5 6
                AADD(m_matriz,{cons_senha[i,1],cons_senha[i,2],cons_cheq[1,2],cons_cheq[1,1],0,0})
                AADD(m_vend,cons_senha[i,1])
                mtot_ger := mtot_ger + cons_cheq[1,1]
                mvlr_ger := mvlr_ger + cons_cheq[1,2]
        NEXT
        i := 0
        FOR i = 1 TO LEN(cons_senha)
                prog_imp(i)
                cons_cheq := {}
                cComm  := "SELECT COUNT(*),SUM(valor) FROM sacdupr WHERE datpag IS NULL AND pago IS NULL"
                ccomm := ccomm + " AND venc  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)
                ccomm := ccomm + " AND vendedor = "+sr_cdbvalue(cons_senha[i,1])
                IF ! EMPTY(mcodemp)
                        cComm  := ccomm + " AND empresa = "+sr_cdbvalue(mcodemp)
                ENDIF
                IF ! EMPTY(mtipo_doc)
                        cComm  := ccomm + " AND tipo = "+sr_cdbvalue(mtipo_doc)
                ENDIF
                sr_getconnection():exec(ccomm,,.t.,@cons_cheq)
                sr_getconnection():exec('COMMIT',,.f.)
                IF cons_cheq[1,1] = 0
                        LOOP
                ENDIF
                mponto := ASCAN(m_vend,cons_senha[i,1])
                IF mponto > 0
                        m_matriz[mponto,5] := cons_cheq[1,2]
                        m_matriz[mponto,6] := cons_cheq[1,1]
                ELSE
                        AADD(m_vend,cons_senha[i,1])
                        AADD(m_matriz,{cons_senha[i,1],cons_senha[i,2],0,0,cons_cheq[1,2],cons_cheq[1,1]})
                ENDIF
                mtot_dup := mtot_dup + cons_cheq[1,1]
                mvlr_dup := mvlr_dup + cons_cheq[1,2]
        NEXT
        ASORT(m_matriz,,,{|x,y| x[2] > y[2]})
        mensagem('Espere o Final da Impressao OK !!!')
        marq := 'RES_CHEQ.REL'
        IF ! imp_arq('RES_CHEQ.REL','R')
                LOOP
        ENDIF
        mpag := 1
        mtit := 'Relatorio de Cheques s/fundos e Doc.a Receber (RESUMO GERAL)'
        mtipo := 'periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2)
        cabecalho(mpag,mtit,mtipo,mprg,mcodemp)
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+1,47);DEVOUT('CHEQUES SEM FUNDO')
        DEVPOS(PROW(),91);DEVOUT('DOUMENTOS EM ABERTO')
        DEVPOS(PROW()+1,00);DEVOUT('Vendedor')
        DEVPOS(PROW(),37);DEVOUT('Qtd.Cheq.')
        DEVPOS(PROW(),47);DEVOUT('Tot. Cheques')
        DEVPOS(PROW(),60);DEVOUT(' Med.Cheq.')
        DEVPOS(PROW(),71);DEVOUT('(%)Geral')
        DEVPOS(PROW(),81);DEVOUT('Qtd.Docs.')
        DEVPOS(PROW(),91);DEVOUT('Tot.Document')
        DEVPOS(PROW(),104);DEVOUT(' Med.Docs.')
        DEVPOS(PROW(),115);DEVOUT('(%)Geral')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        i := 0
        FOR i = 1 TO LEN(m_matriz)
                prog_imp(VAL(m_matriz[i,1]))
                DEVPOS(PROW()+1,00);DEVOUT(m_matriz[i,1]+'-'+m_matriz[i,2])
                DEVPOS(PROW(),37);DEVOUT(TRANSFORM(m_matriz[i,4],'999999.99'))
                DEVPOS(PROW(),47);DEVOUT(TRANSFORM(m_matriz[i,3],'9,999,999.99'))
                DEVPOS(PROW(),60);DEVOUT(TRANSFORM(m_matriz[i,3]/m_matriz[i,4],'999,999.99'))
                DEVPOS(PROW(),71);DEVOUT(TRANSFORM((m_matriz[i,3]/mvlr_ger)*100,'99999.99'))
                DEVPOS(PROW(),81);DEVOUT(TRANSFORM(m_matriz[i,6],'999999.99'))
                DEVPOS(PROW(),91);DEVOUT(TRANSFORM(m_matriz[i,5],'9,999,999.99'))
                DEVPOS(PROW(),104);DEVOUT(TRANSFORM(m_matriz[i,5]/m_matriz[i,6],'999,999.99'))
                DEVPOS(PROW(),115);DEVOUT(TRANSFORM((m_matriz[i,5]/mvlr_dup)*100,'99999.99'))
        NEXT
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT('T O T A L   G E R A L:')
        DEVPOS(PROW(),37);DEVOUT(TRANSFORM(mtot_ger,'999999.99'))
        DEVPOS(PROW(),47);DEVOUT(TRANSFORM(mvlr_ger,'9,999,999.99'))
        DEVPOS(PROW(),60);DEVOUT(TRANSFORM(mvlr_ger/mtot_ger,'999,999.99'))
        DEVPOS(PROW(),81);DEVOUT(TRANSFORM(mtot_dup,'999999.99'))
        DEVPOS(PROW(),91);DEVOUT(TRANSFORM(mvlr_dup,'9,999,999.99'))
        DEVPOS(PROW(),104);DEVOUT(TRANSFORM(mvlr_dup/mtot_dup,'999,999.99'))
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao(marq)
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M **********************************************











