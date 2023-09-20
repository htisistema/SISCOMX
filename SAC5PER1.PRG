*************************
* LISTAGEM DE COMISSAO DE OPERADOR
*************************
MEMVAR getlist,nivel_acess,mdata_sis,cod_operado

FUNCTION sac5per1
***************
LOCAL MPRG:='SAC5PER1',;
      opcao,lci,cci,lba,cba,tela

PRIVATE mcod_vend,mcomissao,mdata1,mdata2,mcli_ven,mcota:=0,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcliente,mcpf,mcgc,mcodemp:=SPACE(3),;
        mexcel:='N',mdatpag,m_vendedor:={}

IF ! ver_nivel(mprg,'RELATORIO DE COMISSAO (CLIENTE EM DIA)','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci:=cci:=0
lba:=12
cba:=62

*-----------------------------------------------------
CLOSE ALL
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*-----------------------------------------------------
op_tela(lci,cci,lba+2,cba,' Comissao por Vendedor/Operador ')

WHILE .T.
        exibi_prg(mprg)
        ***************************************************
        IF ! AbriArq('saccomi','comi','E');RETURN NIL;ENDIF
        ***************************************************
        mdata2 = mdata_sis
        mdatpag := CTOD('  /  /  ')
        mcod_vend = 0
        opcao = SPACE(1)
        mcliente := SPACE(30)
        mcpf := SPACE(11)
        mcgc := SPACE(14)
        @ lci+7,cci+1 TO lci+7,cba-1
        mensagem('Digite o Codigo do Operador a ser Consultado  - <ESC> p/Sair')
        ***********
        SELE('sen');ORDSETFOCUS(2)
        GO TOP
        ***********
        DEVPOS(lci+1,cci+2);DEVOUT('Codigo da Empresa..:')
        DEVPOS(lci+2,cci+2);DEVOUT('Cod.Oper./Vendedor.:')
        DEVPOS(lci+3,cci+2);DEVOUT('Nome...............:')
        DEVPOS(lci+4,cci+2);DEVOUT('Nivel..............:')
        DEVPOS(lci+5,cci+2);DEVOUT('Comissao %.........:')
        DEVPOS(lci+6,cci+2);DEVOUT('Data Cadastro......:')
        DEVPOS(lci+8,cci+2);DEVOUT('Data Ultimo Acesso.:')
        DEVPOS(lci+9,cci+2);DEVOUT('Hora de Entrada....:')
        DEVPOS(lci+10,cci+2);DEVOUT('Hora de Saida......:')
        DEVPOS(lci+11,cci+2);DEVOUT('Cota R$............:')

        @ lci+1,cci+23 GET mcodemp PICT '999' VALID ver_emp(mcodemp,lci+1,cci+27,,'*') WHEN mmult_emp = 'S'
        @ lci+2,cci+23 GET mcod_vend PICT '999' VALID ven(mcod_vend,lci+3,cci+23)
        READ
        IF LASTKEY() = 27
                RELEASE ALL
                EXIT
        ENDIF
        ASIZE(m_vendedor,0)
        IF ! EMPTY(mcod_vend)
                mcota := sen->scota
                mcod_vend := VAL(sen->scod_op)
*               mcomissao := sen->scomissao
                mdata1 := mdata_sis -30
                setcor(3)
                DEVPOS(lci+2,cci+23);DEVOUT(STRZERO(mcod_vend,3))
                DEVPOS(lci+3,cci+23);DEVOUT(sen->snome)
                DEVPOS(lci+4,cci+23);DEVOUT(sen->snivel)
                DEVPOS(lci+5,cci+23);DEVOUTPICT(sen->scomissao,'99.99')
                DEVPOS(lci+6,cci+23);DEVOUT(sen->sdata_cad )
                DEVPOS(lci+8,cci+23);DEVOUT(sen->sult_ent)
                DEVPOS(lci+9,cci+23);DEVOUT(sen->shora_ini)
                DEVPOS(lci+10,cci+23);DEVOUT(sen->shora_fim)
                DEVPOS(lci+11,cci+23);DEVOUTPICT(mcota,'999,999.99')
                setcor(1)
                AADD(m_vendedor,{sen->scod_op,sen->snome})
        ELSE
                ***********
                SELE('sen');ORDSETFOCUS(2)
                GO TOP
                ***********
                WHILE ! EOF()
                        AADD(m_vendedor,{sen->scod_op,sen->snome})
                        SKIP
                ENDDO
        ENDIF
        impperf()
ENDDO
CLOSE ALL
wvw_lclosewindow()
RETURN NIL
*********************** f i m ************************************
*******************************
* IMPRIMI MOVIMENTO DE COMISSAO DO VENDEDOR EXTRATOS
*******************************
FUNCTION impperf
**************
LOCAL telaprin,tela1,lci,cci,lba,cba,opcao,i:=0,mtecla,;
      point,msele,morde,mdesc,mdata_dia,mtolera,mcomissao,;
      mtot_dup,mcom_dup,mcom_dia,mtot_dia,mvlr_cobra,mtot_cobra,mvlr_doc:=0

MEMVAR mcli_ven,mdata1,mdata2,mcod_vend,mcota,mtipo_imp,mimp_tipo,marq,mdatpag

PRIVATE mcliente,mcpf,mcgc,mcod_cli,mdoc,mtraco,mcom_ped,mpag:=0,mtit,mtipo,;
        m_dupli:={},m_print:={},mtele


mtraco := REPLI('=',132)

lci := cci := 0
lba := 03
cba := 60

msele := SELE()
morde := INDEXORD()
op_tela(lci,cci,lba+2,cba,'Pagamento da Comissao')

WHILE .T.
        mtipo_imp := m_indiv[1,18]
        mcliente := SPACE(30)
        mcpf := SPACE(11)
        mcgc := SPACE(14)
        mexcel := 'N'
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(lci+1,cci+2);DEVOUT('Data Pagamento da Comissao...........:')
        DEVPOS(lci+2,cci+2);DEVOUT('Gerar Arquivo p/Planilha EXCEL [S/N].:')

        @ lci+1,cci+40 GET mdata2 PICT '99/99/99'       //VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+2,cci+40 GET mexcel PICT '@!' VALID mexcel $ 'S,N'
        READ
        IF LASTKEY() = 27
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RELEASE ALL
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma os Dados:')
        IF opcao = 'N'
                LOOP
        ENDIF
        mensagem('Aguarde Coletando dados para este Relatorio !!!')
        f:=0
        FOR f = 1 TO LEN(m_vendedor)
                IF mexcel = 'S'
                        ****************
                        SELE('comi')
                        ***************
                        ZAP
                ENDIF
                ****************
                SELE('dupr');ORDSETFOCUS(15)
                GO TOP
                ***************
                mdata1 := CTOD('  /  /  ')
                IF ! dupr->(DBSEEK(DTOS(mdata1)+m_vendedor[f,1]))
                        atencao('Nao existe Comissao neste periodo')
                        RETURN .T.
                ENDIF
                mdata_dia := mdata := mov->data_s_e
                mensagem('Espere o Final da Impressao OK !!!')
                marq := 'COM_VEND.REL'
                IF ! imp_arq('COM_VEND.REL','R')
                        LOOP
                ENDIF
                mpag := 1
                mtit := IF(ver_serie() = '141302','REPRESENTANTE: ','VENDEDOR: ')+m_vendedor[f,1]
                mtipo := 'Data do Pagamento Comissao: '+DTOC(mdata2)
                cabecalho(mpag,mtit,mtipo)
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('Cliente                        Doc.(NF)    Vlr.Docum.   IPI (R$)   Vlr.S/IPI    Vlr.Pago   Vlr.Comi  (%)Comi  Vencim.  Dat.Pag Oper')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                mtot_dup := mcom_dup := mcom_dia := mtot_dia := ;
                mvlr_cobra := mtot_cobra := 0
                ASIZE(m_dupli,0)
                ASIZE(m_print,0)
                WHILE EMPTY(dupr->pg_comi) .AND. m_vendedor[f,1] = dupr->vendedor .AND. ! EOF()
                        mcodcli := dupr->fornec
                        mvlr_cobra := 0
                        WHILE mcodcli = dupr->fornec .AND. EMPTY(dupr->pg_comi) .AND. m_vendedor[f,1] = dupr->vendedor .AND. ! EOF()
                                prog_imp(RECNO(),DTOC(dupr->venc))

                                IF ! EMPTY(dupr->dat_tran);
                                   .OR. (dupr->venc > mdata2 .AND. (dupr->datpag > mdata2 .OR. EMPTY(dupr->datpag)))
                                        SKIP;LOOP
                                ENDIF
                                IF dupr->datpag > mdata2
                                        mdatpag := CTOD('  /  /  ')
                                ELSE
                                        mdatpag := dupr->datpag
                                ENDIF
                                mvlr_doc := dupr->vlpago
                                IF dupr->vlpago > dupr->valor
                                        mvlr_doc := dupr->valor
                                ENDIF
                                mcomi_aux := dupr->comissao
                                mcom_dia := mcom_dia + iat(((mvlr_doc-dupr->vl_ipi) * mcomi_aux),2)
                                mtot_dia := mtot_dia + (mvlr_doc-dupr->vl_ipi)
                                IF EMPTY(mdatpag)
                                        mvlr_cobra := mvlr_cobra + dupr->valor
                                        mtot_cobra := mtot_cobra + dupr->valor
                                ENDIF
                                imprt(mtipo_imp,'C')
                                mtele:=' '
                                IF ! EMPTY(dupr->num_ped)
                                        IF ver_ped(dupr->num_ped,,,,'*')
                                                mtele := ped_s->pstat_item
                                        ENDIF
                                ENDIF
                                DEVPOS(PROW()+1,00);DEVOUT(dupr->fornec+'-'+LEFT(dupr->cliente,23)+'  '+dupr->tipo+LEFT(dupr->duplicata,8)+'  '+TRANSFORM(dupr->valor,'999,999.99')+'  '+TRANSFORM(dupr->vl_ipi,'99,999.99')+'  '+TRANSFORM(dupr->valor - dupr->vl_ipi,'999,999.99')+'  '+TRANSFORM(dupr->vlpago,'999,999.99')+'  '+TRANSFORM((mvlr_doc-dupr->vl_ipi) * mcomi_aux,'99,999.99')+' '+TRANSFORM(mcomi_aux*100,'999.9999');
                                                           +' '+DTOC(dupr->venc)+' '+DTOC(mdatpag)+' '+dupr->operador+' '+mtele)
                                AADD(m_print,dupr->fornec+'-'+LEFT(dupr->cliente,23)+'  '+dupr->tipo+LEFT(dupr->duplicata,8)+'  '+TRANSFORM(dupr->valor,'999,999.99')+'  '+TRANSFORM(dupr->vl_ipi,'99,999.99')+'  '+TRANSFORM(dupr->valor - dupr->vl_ipi,'999,999.99')+'  '+TRANSFORM(dupr->vlpago,'999,999.99')+'  '+TRANSFORM((mvlr_doc-dupr->vl_ipi) * mcomi_aux,'99,999.99')+' '+TRANSFORM(mcomi_aux*100,'999.9999');
                                                           +' '+DTOC(dupr->venc)+' '+DTOC(mdatpag)+' '+dupr->operador+' '+mtele)
                                AADD(m_dupli,{dupr->fornec,dupr->banco,dupr->duplicata,dupr->venc,mdatpag,dupr->vendedor,' ',dupr->valor,dupr->vl_ipi,dupr->vlpago,mcomi_aux,mtele})
                                IF mexcel = 'S'
                                        ****************
                                        SELE('comi')
                                        ***************
                                        ADIREG()
                                        comi-> Documento := dupr->tipo+dupr->duplicata
                                        comi-> cliente   := dupr->fornec+' - '+dupr->cliente
                                        comi-> c_ipi     := dupr->valor
                                        comi-> s_ipi     := dupr->valor - dupr->vl_ipi
                                        comi-> ipi       := dupr->vl_ipi
                                        comi-> Valor     := mvlr_doc
                                        comi-> Venc      := dupr->venc
                                        comi-> Data_pag  := mdatpag
                                        comi-> Com       := 0
                                        comi-> Sit       := '    '
                                        comi-> Perc_com  := mcomi_aux   // VAL(mtipo_rel)
                                        comi-> Vlr_com   := mvlr_doc * mcomi_aux    // VAL(mtipo_rel)
                                        comi-> Represent := dupr->vendedor+'-'+sen->snome
                                        comi-> n_pedido  := dupr->num_ped
                                        comi-> periodo   := DTOC(mdata1)+' a '+DTOC(mdata2)
                                        DBCOMMIT()
                                        DBUNLOCK()
                                        ****************
                                        SELE('dupr');ORDSETFOCUS(15)
                                        ***************
                                ENDIF
                                IF PROW() >= 59
                                        EJECT
                                        mpag ++
                                        cabecalho(mpag,mtit,mtipo)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,00);DEVOUT('Cliente                        Doc.(NF)    Vlr.Docum.   IPI (R$)   Vlr.S/IPI    Vlr.Pago   Vlr.Comi  (%)Comi  Vencim.  Dat.Pag Oper')
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ENDIF
                                SKIP
                        ENDDO
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',132))
                        DEVPOS(PROW()+1,00);DEVOUT('Valor Pago: '+TRANSFORM(mtot_dia,'9,999,999.99')+' - Vlr.Comissao: '+TRANSFORM(mcom_dia,'999,999.99')+' - Vlr. A Cobrar: '+TRANSFORM(mvlr_cobra,'999,999.99'))
                        IF EMPTY(mvlr_cobra)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(' *** COMISSAO PAGA ***')
                                mcom_dup := mcom_dup + mcom_dia
                                mtot_dup := mtot_dup + mtot_dia
                                i := 0
                                FOR i = 1 TO LEN(m_dupli)
                                        IF m_dupli[i,1] = mcodcli
                                                m_dupli[i,7] := 'P'
                                        ENDIF
                                NEXT
                        ELSE
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(' *** CLIENTE EM DEBITO ***')
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',132))
                        mcom_dia := mtot_dia := mvlr_cobra := 0
                        IF PROW() >= 59
                                EJECT
                                mpag ++
                                cabecalho(mpag,mtit,mtipo)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT('Cliente                        Doc.(NF)    Vlr.Docum.   IPI (R$)   Vlr.S/IPI    Vlr.Pago   Vlr.Comi  (%)Comi  Vencim.  Dat.Pag Oper')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        ENDIF
                ENDDO
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+1,00);DEVOUT('************ TOTAL GERAL ***************************************************')
                DEVPOS(PROW()+1,00);DEVOUT('Total R$......: '+TRANSFORM(mtot_dup,'999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT('Total Comissao: '+TRANSFORM(mcom_dup,'999,999.99')+' - Medio de Comissao (%) : '+TRANSFORM((mcom_dup/mtot_dup)*100,'999.99'))
                DEVPOS(PROW()+1,00);DEVOUT('Total Valor a Cobrar R$: '+TRANSFORM(mtot_cobra,'9,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT('****************************************************************************')
                DEVPOS(PROW()+1,00);DEVOUT(' ')
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao(marq)
                IF mexcel = 'S'
                        comi->(DBCLOSEAREA())
                        RUN EXCEL.EXE SACCOMI.XLS
*                        SWPRUNCMD('EXCEL.EXE SACCOMI.XLS')
                ENDIF
                opcao := mensagem1('Deseja da baixa na comissao agora:','N','S,N')
                IF opcao = 'S'
                        i := 0
                        FOR i = 1 TO LEN(m_dupli)
                                IF EMPTY(m_dupli[i,7]);LOOP;ENDIF
                                ****************
                                SELE('dupr');ORDSETFOCUS(4)
                                GO TOP
                                ***************
                                IF dupr->(DBSEEK(DTOS(m_dupli[i,4])+m_dupli[i,1]+m_dupli[i,2]+m_dupli[i,3]))
                                        BLOQREG()
                                        dupr->pg_comi := mdata2
                                        dupr->ope_pgcom := cod_operado
                                        DBUNLOCK()
                                ENDIF
                        NEXT
                        DBUNLOCKALL()
                        DBCOMMITALL()
                        marq := 'CM'+SUBSTR(DTOC(mdata2),1,2)+SUBSTR(DTOC(mdata2),4,2)+SUBSTR(DTOC(mdata2),7,2)+'.REL'
                        IF ! imp_arq(marq,'R')
                                LOOP
                        ENDIF
                        mpag := 1
                        mtit := IF(ver_serie() = '141302','REPRESENTANTE: ','VENDEDOR: ')+m_vendedor[f,1]
                        mtipo := 'Pagamento das Comissao ate : '+DTOC(mdata2)
                        cabecalho(mpag,mtit,mtipo)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT('Cliente                        Doc.(NF)    Vlr.Docum.   IPI (R$)   Vlr.S/IPI    Vlr.Pago   Vlr.Comi  (%)Comi  Vencim.  Dat.Pag Oper')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        mtot_dup := mcom_dup := mcom_dia := mtot_dia := ;
                        mvlr_cobra := mtot_cobra := i := 0
                        FOR i = 1 TO LEN(m_print)
                                IF EMPTY(m_dupli[i,7])
                                        LOOP
                                ENDIF
                                mcomi_aux := m_dupli[i,11]
                                mcom_dia := mcom_dia + iat(((m_dupli[i,10]-m_dupli[i,9]) * mcomi_aux),2)
                                mtot_dia := mtot_dia + (m_dupli[i,10]-m_dupli[i,9])
                                IF EMPTY(m_dupli[i,5])
                                        mvlr_cobra := mvlr_cobra + m_dupli[i,8]
                                        mtot_cobra := mtot_cobra + m_dupli[i,8]
                                ENDIF
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT(m_print[i])
                                IF PROW() >= 59
                                        EJECT
                                        mpag ++
                                        cabecalho(mpag,mtit,mtipo)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,00);DEVOUT('Cliente                        Doc.(NF)    Vlr.Docum.   IPI (R$)   Vlr.S/IPI    Vlr.Pago   Vlr.Comi  (%)Comi  Vencim.  Dat.Pag Oper')
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ENDIF
                        NEXT
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',132))
                        DEVPOS(PROW()+1,00);DEVOUT('Valor Pago: '+TRANSFORM(mtot_dia,'9,999,999.99')+' - Vlr.Comissao: '+TRANSFORM(mcom_dia,'999,999.99')+' - (%) Comissao: '+TRANSFORM((mcom_dia/mtot_dia)*100,'9,999.9999'))
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',132))
                        mcom_dia := mtot_dia := mvlr_cobra := 0
                        EJECT
                        SETPRC(00,00)
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        conf_impressao(marq)
                ENDIF
        NEXT
        RELEASE ALL
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
**********************************  F I M **********************************
