MEMVAR getlist
#define ENT_TXT  'ENTNFE.TXT'
#define SAI_TXT  'SAINFE.TXT'
#define TMP_TXT  'ENTNFE.TMP'
************************
* EMISSAO DE NOTA FISCAL
************************
FUNCTION sac211(no_ped,mcorrecao,mno_ped,mel,mpeds,mnf1)
***************
LOCAL MPRG:='SAC211',mmodulo:='EMISSAO DE NOTAS FISCAIS',;
      opcao,mtela2,mtela1,lba,cba,mmerc,mcod_forn,mfabrica,;
      mquantd,mpr_venda,mgrupo,mval_venda,i,micm,mponto,mtp_emp,;
      mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,mtot_ped:=0,mvl_vend,;
      point,tela2,m_produto:={},mqtd_item:=0,mcomissao:=0,mqtd_lin,f,msubtotal,;
      mcert_venc:='',mtitulo:=''

MEMVAR nivel_acess,mdata_sis,cod_operado,mcgc_firm
PRIVATE m_codigo:={},m_desc:={},mdesconto,;
        m_tp_venda:={},micm_f,tela,mdata_ped,mcom_ven,;
        mnome_trans,mfrete_trans,mcid_cli,muf_cli,mcod_tran,mplaca_trans,mpluf_trans,;
        mcgc_trans,mend_trans,mmun_trans,muf_trans,minsc_trans,mesp_trans,;
        mmarca_trans,mnum_trans,mfrete,mseguro,mencargo,mcod_nota,;
        m_normal:={},m_isento:={},m_icmsub:={},m_icmdif:={},mcod_cli,;
        mcliente,mcod_merc,mnome_vend,mperc,mcod_op,mcgc,mcpf,mcod_vend,mdocumento:='000000',;
        mdata,mdata_sai,mnum_ped,mnum_orc,muf,minsc,mcod_nat,mcod_nat1,mtransporte,mnota,mcond_vezes,mtp_vend,;
        mtot_desc,m_transp:={},m_point:={},mcgccpf,mnatureza,mcredito,msai_ent,;
        mdif_icm,micm_sub,mnum_sel,mserie_not:='    ',mtipo_fat:=' ',mipi:=0,;
        mvenci,mnum_dup,mvlr_dup,mvenci1,mnum_dup1,mvlr_dup1,;
        mvenci2,mnum_dup2,mvlr_dup2,mvenci3,mnum_dup3,mvlr_dup3,;
        mvenci4,mnum_dup4,mvlr_dup4,mvenci5,mnum_dup5,mvlr_dup5,;
        mvenci6,mnum_dup6,mvlr_dup6,mvenci7,mnum_dup7,mvlr_dup7,;
        mvenci8,mnum_dup8,mvlr_dup8,mvenci9,mnum_dup9,mvlr_dup9,;
        mvenci10,mnum_dup10,mvlr_dup10,mvenci11,mnum_dup11,mvlr_dup11,;
        mintev,mintev1,mintev2,mintev3,mintev4,mintev5,;
        mintev6,mintev7,mintev8,mintev9,mintev10,mintev11,;
        mmodelo:='55',marca:=' ',;
        mtipo_nota:='N',cons_merc:={},cons_ped:={},mvlr_entrada:=0,mcod_bc,mnorm_ele:= ' ',;
        mbase_icm:=0,mtot_icm:=0,mbase_icmf:=0,mtot_icmf:=0,mtot_ipi:=0,mtot_prod:=0,;
        mtot_nota:=0,mtot_quantd:=0,mtot_peso:=0,mtot_liq:=0,ali:='ped_s',mpedidos:={},misento:='',;
        mantt:='',mapolice:='',msittrib:='',mtipo_nfe:=' ',mrefnfe:=SPACE(44),mindFinal:=' ',mindPress:=' ',;
        mtipo_sigla:='    ',mei:=SPACE(10),mrefnfe,mrefCTe,mModECF,mnECF,mnCOO,mperc_desc:=0,mperc_aux:=0,mcod_cst:='',;
        mver_acbr:='',m_mtipo_nfe,mcb_mtipo_nfe,mcb_mindfinal,m_mindfinal,m_mindpress,mcb_mindpress,m_nt_ref,mcb_nt_ref,;
        m_frete,mcb_frete,cons_cli:={},mno_ped_cli:=SPACE(8)

IF ! ver_nivel(mprg,mmodulo,'123456',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
//SET KEY -9 TO nota('1')     // Finaliza a Nota Fiscal
IF mpeds <> NIL
        mpedidos := mpeds
ENDIF
lba = 25
cba = 78
*
*----------------------------------------------------
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('SACNOTA','NOTA');RETURN NIL;ENDIF
IF ! AbriArq('SACNOTAE','NOTAE');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('SACTRAN','TRAN');RETURN NIL;ENDIF
*---------------------------------------------
*/
IF FILE('C:\ACBrMonitorPLUS\ACBrMonitor.INI')
        lin := MEMOLINE(MEMOREAD('C:\ACBrMonitorPLUS\ACBrMonitor.INI'),110,1,,)
        linhas := linha := 0
        linhas := MLCOUNT(MEMOREAD('C:\ACBrMonitorPLUS\ACBrMonitor.INI'),110)
        FOR linha = 1 TO  linhas
                lin := MEMOLINE(MEMOREAD('C:\ACBrMonitorPLUS\ACBrMonitor.INI'),110,linha,,)
                //atencao(lin)
                IF ALLTRIM(lin) = 'Versao=4.00'
                        mver_acbr:= '4.00'
                        EXIT
                ELSEIF ALLTRIM(lin) = 'Versao=3.10'
                        mver_acbr:= '3.10'
                        EXIT
                ENDIF
        NEXT
ENDIF
set_key('cliente','merc')
CLEAR GETS
m_mtipo_nfe:={'1 Normal','2 Complemento','3 Ajuste','4 Devolucao/Retorno'}
m_mindfinal:={'1 Normal','2 Consumidor Final'}
m_mindpress:={'0 Não aplica','1 Presencial','2 Não presencial,internet','3 Não presencial,Tele-atend.','4 NFC-e c/ent.domicílio','9 Op.não presencial,outros'}
//m_frete:={'0 Por conta do emitente','1 Por conta do destinatário/remetente','2 Por conta de terceiros','3 Transporte Próprio por conta do Remetente','4 Transporte Próprio por conta do Destinatário','9 Sem frete'}

/*
0=Contratação do Frete por conta do Remetente (CIF);
1=Contratação do Frete por conta do Destinatário (FOB);
2=Contratação do Frete por conta de Terceiros;
3=Transporte Próprio por conta do Remetente;
4=Transporte Próprio por conta do Destinatário;
9=Sem Ocorrência de Transporte.
*/

***INICIA O ACBRMONITOR***

IF ! inicia_acbr(1)
        RETURN NIL
ENDIF
mcert_venc:=ALLTRIM(SUBSTR(IBR_comando('NFe.CertificadoDataVencimento',,30),4))
//atencao(mcert_venc)
IF mcorrecao = NIL
        mtipo_nota := 'N'
        //IF mel <> NIL
                IF m_set[1,95] = '1' .OR. EMPTY(m_set[1,95])
                        mtitulo:= memp_resa+'  '+mversao+'  *** NOTA FISCAL E L E T R O N I C A  VERSAO: '+mver_acbr+' ***'
                ELSE
                        mtitulo:= 'Emissao de Nota Fiscal *** E L E T R O N I C A     CONTIGENCIA ***   VERSAO: '+mver_acbr
                ENDIF
                mnorm_ele:= 'E'
        /*
        ELSE
                mtitulo:= 'EMISSAO DE NOTA FISCAL *** N O R M A L ***  VERSAO: '+mver_acbr
                mnorm_ele:= 'N'
        ENDIF
        */
ELSE
        mtipo_nota := 'C'
        //IF mel <> NIL
                mtitulo:= 'EMISSAO DE NOTA FISCAL *** ELETRONICA DE CORRECAO ***  VERSAO: '+mver_acbr
                mnorm_ele:= 'E'
        /*
        ELSE
                mtitulo:= 'EMISSAO DE NOTA FISCAL - CORRECAO  VERSAO: '+mver_acbr
                mnorm_ele:= 'N'
        ENDIF
        */
ENDIF
op_tela(00,00,52,120,mtitulo+SPACE(20)+'Validade do Certificador: '+mcert_venc,,1)

mposicao:={0,0,3,4}
WVW_CBSetFont( , 'lucida console', 14,9)
mcb_mtipo_nfe := WVW_CBCreate( , 5, 1,17, m_mtipo_nfe,,20,,1,mposicao )
mcb_mindfinal := WVW_CBCreate( , 5, 19,17, m_mindfinal,,20,,1,mposicao )
mcb_mindpress := WVW_CBCreate( , 5, 38,24, m_mindpress,,20,,1,mposicao )
//mcb_frete := WVW_CBCreate( , 28, 14,35, m_frete,,15,,1,mposicao )
WVW_CBEnable( , mcb_mtipo_nfe, .F. )
WVW_CBEnable( , mcb_mindfinal, .F. )
WVW_CBEnable( , mcb_mindpress, .F. )
//WVW_CBEnable( , mcb_frete    , .F. )
WVW_CBSetIndex( , mcb_mindpress, 1 )
//WVW_CBSetFont( , 'lucida console', 14,9)

//WvW_PBSetFont( NIL, 'Arial Black', 16, 10,)
//mpb_fecha := wvw_pbCreate(NIL,50,30,51,50,'  Fechar NF-e ',,{||nota('1')},,1,.F.)
//WVW_PBEnable( NIL, mpb_fecha, .F. )

IF CTOD(mcert_venc)- mdata_sis < 30
        atencao('Falta '+STRZERO(CTOD(mcert_venc)- mdata_sis,5)+' dias para o vencimento'+m_qp+'Data de Vencimento: '+mcert_venc)
ENDIF
WHILE .T.
        limpa(00,00,51,120)
        botao(0,0,52,62)
        setcor(1)
        DEVPOS(1, 0);DEVOUT('No.Pre-Venda:')
        DEVPOS(2, 0);DEVOUT('No.Orcamento:')
        DEVPOS(3, 0);DEVOUT('Serie NF....:')
        DEVPOS(4, 0);DEVOUT('  Tipo da NOTA      Tipo Consumidor     Tipo Comprador')
        /*
        DEVPOS(4, 0);DEVOUT(' Tipo da NOTA:    [1]Normal [2]Compl. [3]Ajuste [4]Devol/Retorno')
        //DEVPOS(5, 0);DEVOUT('Modelo......:')
        DEVPOS(5, 0);DEVOUT('Consumidor..:    [1]Normal [2]Consumidor Final')
        DEVPOS(6, 0);DEVOUT('Comprador...:    *** Ver Rodape ***')
        */
        janela(7,0,'þ DADOS DO CLIENTE ','*','D')
        DEVPOS(8, 0);DEVOUT('Codigo......:')
        DEVPOS(9, 0);DEVOUT('CPF.........:')
        DEVPOS(10,0);DEVOUT('CNPJ........:')
        DEVPOS(11,0);DEVOUT('Inscricao...:')
        DEVPOS(12,0);DEVOUT('Endereco....:')
        DEVPOS(13,0);DEVOUT('Numero......:')
        DEVPOS(14,0);DEVOUT('Complemento.:')
        DEVPOS(15,0);DEVOUT('Cidade......:')
        DEVPOS(15,42);DEVOUT('UF:')
        DEVPOS(16,0);DEVOUT('Telefone....:')
        DEVPOS(17,0);DEVOUT('Observacao..:')

        janela(18,0,'þ DADOS DA NOTA FISCAL ','*','D')
        DEVPOS(19,0);DEVOUT('CFOP da Nota:')
        DEVPOS(20,0);DEVOUT('Numero Nota.:')
        DEVPOS(20,26);DEVOUT('No.Pedido do Cliente:')
        DEVPOS(21,0);DEVOUT('Emissao.....:')
        DEVPOS(21,26);DEVOUT('Data Saida:')
        DEVPOS(22,0);DEVOUT('Pagamento...:')
        DEVPOS(23,0);DEVOUT('Frete.......:')
        DEVPOS(24,0);DEVOUT('Seguro......:')
        DEVPOS(25,0);DEVOUT('Disp.Acess..:')
        DEVPOS(26,0);DEVOUT('Desconto (%):')
        janela(27,0,'þ TRANSPORTADOR/VOLUMES TRANSPORTADOS ','*','D')
        DEVPOS(28, 0);DEVOUT('Frete.......:')
        DrawLabel(29,1,'[0] Remetente(CIF) - [1] Destinatario(FOB) - [2] Terceiros - [3] Prop/Remet - [4] Prop/Desti - [9] Sem Frete',210,, 'Arial',15,7)
        DEVPOS(30,0);DEVOUT('Nome........:')
        DEVPOS(31, 0);DEVOUT('CNPJ/CPF....:')
        DEVPOS(32, 0);DEVOUT('Endereco....:')
        DEVPOS(33, 0);DEVOUT('Municipio...:')
        DEVPOS(34, 0);DEVOUT('UF..........:')
        DEVPOS(35, 0);DEVOUT('Insc.Est....:')
        DEVPOS(36, 0);DEVOUT('Placa.......:')
        DEVPOS(36,28);DEVOUT('UF:')
        DEVPOS(36,36);DEVOUT('ANTT:')
        DEVPOS(37, 0);DEVOUT('Especie.....:')
        DEVPOS(38, 0);DEVOUT('Marca.......:')
        DEVPOS(39, 0);DEVOUT('Numero......:')

        janela(40,0,'þ SOLICITAR PRODUTO ','*','D')
        DEVPOS(41,0);DEVOUT('Codigo....:')
        DEVPOS(42,0);DEVOUT('Descricao.:')
        DEVPOS(43,0);DEVOUT('Quantidade:')
        DEVPOS(44,0);DEVOUT('Sld.Atual.:')
        DEVPOS(45,0);DEVOUT('Valor Unit:')
        DEVPOS(46,0);DEVOUT('CST.......:')
        DEVPOS(47,0);DEVOUT('CFOP......:')
        DEVPOS(48,0);DEVOUT('ICM (%)...:')
        DEVPOS(49,0);DEVOUT('IPI (%)...:')
        DEVPOS(50,0);DEVOUT('ICM SUB(%):')
        DEVPOS(51,0);DEVOUT('Gramatura.:')
        DEVPOS(52,0);DEVOUT('Unidade...:')
        //DEVPOS(52,0);DEVOUT('Qtd.Itens.:')
        botao(0,64,43,119)
        DEVPOS(0,64);DEVOUT('                 PRODUTOS SOLICITADOS                   ')
        setcor(1)
        mqtd_lin := f := msubtotal := 0
        f++
        @ f,64 SAY ''

        WVW_DrawLabel(,f,COL(),'  Cod.  Descricao                                 Quantd.   Vlr.Unit.   Vlr.Total   CFOP CST  UN',,,,, 'lucida console',14,6,,,,,)
        //WVW_DrawLabel(,f,COL(),'  Cod.  Descricao                                 Quantd.   Vlr.Unit.   Vlr.Total   CFOP CST  UN',,,,, 'terminal',14,6,,,,,)
        f++
        WVW_DrawLabel(,f,COL(),REPLI(CHR(223),61))     //,,,,, 'terminal',13,4,,,,,)
        setcor(3)
        botao(45,64,51,119)
        DEVPOS(46,64);DEVOUT('              T O T A L     R $ ')
        WVW_DrawLabel(,47,64,TRANSFORM(msubtotal,ALLTRIM('@E '+m_set[1,98])),,,210,, 'arial black',60,30,,,,,)
        mensagem('Verificando STATUS DO SERVICO NFe Aguarde um momento....')
        IF m_set[1,95] = '1' .OR. EMPTY(m_set[1,95])
                IF ! EMPTY(m_indiv[1,43])
                        IF ! IBR_OK(IBR_comando('NFE.STATUSSERVICO',,30))
                               wvw_lclosewindow();RETURN NIL
                        ENDIF
                        //IBR_comando('NFe.SetFormaEmissao',{1},,.T.)
                ELSE
                        IF ! IBR_OK(nfe_comando('NFE.STATUSSERVICO',,30))
                                wvw_lclosewindow();RETURN NIL
                        ENDIF
                        //IBR_comando('NFe.SetFormaEmissao',{1},,.T.)
                ENDIF
        ENDIF
        //atencao(IBR_comando('NFe.CertificadoDataVencimento',,30))
        // NFE.CNPJCertificado
        //IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
        //IF ! AbriArq('SACSELNF','SEL');RETURN NIL;ENDIF
        //sel->(DBCLOSEAREA())
        ********************
        //SELE('ped_s');ORDSETFOCUS(1)
        ********************
        mdocumento:='000000'
        ASIZE(m_codigo,0)
        ASIZE(m_desc,0)
        ASIZE(m_normal,0)
        ASIZE(m_isento,0)
        ASIZE(m_icmsub,0)
        ASIZE(m_icmdif,0)
        ASIZE(m_produto,0)
        mensagem('Preencha os Campos - <ESC> p/Retornar ')
        mnum_orc := 0
        IF mno_ped <> NIL
                mnum_ped:= mno_ped
        ELSE
                mnum_ped := 0
        ENDIF
        IF ver_serie() = '141473'
                mserie_not := '3  '
        ELSE
                IF m_set[1,95] = '1' .OR. EMPTY(m_set[1,95])
                        mserie_not := '1  '
                ELSE
                        mserie_not := '900'
                ENDIF
        ENDIF
        mtipo_sigla:='    '
        mei := mModECF := mnECF := mnCOO := SPACE(30)
        mtipo_nfe := mindFinal := mindPress := ' '
        mrefnfe :=mrefCTe := SPACE(44)
        mperc := mperc_aux := m_set[1,20]
        mcod_op := '03'
        muf := m_set[1,19]
        mdata := mdata_sai := mdata_sis
        mnome_vend := SPACE(30)
        opcao = 'S'
        mcod_vend := VAL(cod_operado)
        mcod_nota := 'N'
        i = 1
        mcredito := msai_ent := mnota := mfrete_trans := SPACE(1)
        mtp_vend := muf_trans := mpluf_trans := muf_cli := SPACE(2)
        mcond_vezes := SPACE(3)
        mantt := mapolice := SPACE(12)
        mcod_tran := mcod_cst := SPACE(4)
        mcod_nat := mcod_nat1 := SPACE(5)
        mesp_trans := mmarca_trans := mnum_trans := SPACE(8)
        mplaca_trans := SPACE(7)
        mcpf := minsc_trans := SPACE(11)
        mcgc_trans := SPACE(14)
        mcgc := minsc := SPACE(14)
        mtransporte := SPACE(15)
        mmun_trans := mcid_cli := SPACE(20)
        mnome_trans := SPACE(30)
        mnatureza := mend_trans := SPACE(40)
        mchassis := mdescri1 := mdescri2 := mdescri3 := mdescri4 :=;
        mdescri5 := SPACE(60)
        mvenci  := mvenci1 := mvenci2 := mvenci3 := mvenci4 := mvenci5 := ;
        mvenci6  := mvenci7 := mvenci8 := mvenci9 := mvenci10:= mvenci11:= ;
        mdata_ped := CTOD('  /  /  ')
        mnum_dup := mnum_dup1 := mnum_dup2 := mnum_dup3 := mnum_dup4 := mnum_dup5 := ;
        mnum_dup6 := mnum_dup7 := mnum_dup8 := mnum_dup9 := mnum_dup10:= mnum_dup11:= SPACE(6)
        mvlr_dup := mvlr_dup1 := mvlr_dup2 := mvlr_dup3 := mvlr_dup4 := mvlr_dup5 := ;
        mvlr_dup6 := mvlr_dup7 := mvlr_dup8 := mvlr_dup9 := mvlr_dup10:= mvlr_dup11:= ;
        mcom_ven:=mtot_nota:=mtot_quantd:=mtot_peso:=mdesconto:=;
        mcod_cli := mfrete := mseguro := mencargo := mtp_emp := micm_f := ;
        mvl_vend := mfrete := micm := mdif_icm := micm_sub := ;
        mintev := mintev1 := mintev2 := mintev3 := mintev4 := mintev5 := ;
        mintev6 := mintev7 := mintev8 := mintev9 := mintev10 := mintev11 := mperc_desc := 0
        mno_ped_cli:=SPACE(8)
        *********************************************************************
        SET KEY -4 TO f5_trans(@mnome_trans,@mcgc_trans,@mend_trans,@mmun_trans,;
                               @muf_trans,@minsc_trans,@mcod_tran)
        *********************************************************************
        mensagem('Preencha os Campos ou <ESC> p/Sair')
        setcor(1)
        @ 1,14 GET mnum_ped PICT '999999' WHEN mcorrecao = NIL .AND. mtipo_nota = 'N' .AND. no_ped = NIL // mesmo PRG.
        @ 2,14 GET mnum_orc PICT '999999' WHEN EMPTY(mnum_ped) .AND. mcorrecao = NIL .AND. mtipo_nota = 'N' .AND. no_ped = NIL // mesmo PRG.
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                fimset()
                WVW_CBDestroy( , mcb_mtipo_nfe )
                WVW_CBDestroy( , mcb_mindfinal )
                WVW_CBDestroy( , mcb_mindpress )
                //WVW_CBDestroy( , mcb_frete     )
                RETURN NIL
        ENDIF
        cons_ped := {}
        IF ! EMPTY(mnum_ped)
                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_ped)
                sr_getconnection():exec('COMMIT',,.f.)
        	IF LEN(cons_ped) = 0
                        atencao('Pedido nao foi encontrado !!!')
                        LOOP
                ENDIF
                IF ! EMPTY(cons_ped[1,103])
                        atencao('Este pedido ja foi emitido NOTA FISCAL de No.: '+cons_ped[1,103])
                ENDIF
        ELSEIF ! EMPTY(mnum_orc)
                sr_getconnection():exec("SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_orc,6)),,.t.,@cons_ped)
                sr_getconnection():exec('COMMIT',,.f.)
        	IF LEN(cons_ped) = 0
                        atencao('Orcamento nao foi encontrado !!!')
                        LOOP
                ENDIF
        ENDIF
        v_ped_nt(mnum_ped)
        //IF ! AbriArq('SACSELNF','SEL');RETURN NIL;ENDIF
        /*
        IF mel = NIL
                cons_ := {}
                sr_getconnection():exec("SELECT * FROM sacselnf",,.t.,@cons_)
                IF LEN(cons_) = 0
                        mnum_sel := SPACE(10)
                ELSE
                        mnum_sel := cons_[1,1]
                ENDIF
                @ 3,14 GET mnum_sel PICT '999999999' VALID IF(ver_serie() = '141198' .AND. EMPTY(mnum_sel),.F.,.T.) WHEN mel = NIL
                READ
                IF LASTKEY() = 27
                        fimset()
                        RELEASE ALL
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
        ENDIF
        */
        mtipo_nfe := 1
        @ 3,14 GET mserie_not PICT '@!' VALID IF(EMPTY(mserie_not),.F.,.t.) WHEN m_set[1,95] = '1' .OR. EMPTY(m_set[1,95])
        READ
        IF LASTKEY() = 27
                fimset()
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        WVW_CBEnable( , mcb_mtipo_nfe, .T. )
        WVW_CBEnable( , mcb_mindfinal, .T. )
        WVW_CBEnable( , mcb_mindpress, .T. )
        //WVW_CBISFocused( , mcb_mtipo_nfe )
        //WVW_CBSetCurSel(,mcb_mtipo_nfe, 1 )
        @ 5,14 GET mtipo_nfe PICT '9'   //WHEN men_get(0,0,'Informe para NF-e [1]-NORMAL [2]-COMPLEMENTAR [3]-AJUSTE [4]-DEVOLUCAO/RETORNO') VALID mtipo_nfe $ '1,2,3,4' .AND. lim_get()
        READ
        IF LASTKEY() = 27
                fimset()
                WVW_CBDestroy( , mcb_mtipo_nfe )
                WVW_CBDestroy( , mcb_mindfinal )
                WVW_CBDestroy( , mcb_mindpress )
                //WVW_CBDestroy( , mcb_frete     )
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        mtipo_nfe := SUBSTR(WVW_CBGetCurText( , mcb_mtipo_nfe ),1,1)
        mindFinal := SUBSTR(WVW_CBGetCurText( , mcb_mindfinal ),1,1)
        mindPress := SUBSTR(WVW_CBGetCurText( , mcb_mindpress ),1,1)
        WVW_CBEnable( , mcb_mtipo_nfe, .F. )
        WVW_CBEnable( , mcb_mindfinal, .F. )
        WVW_CBEnable( , mcb_mindpress, .F. )

        //atencao(mtipo_nfe+' - '+mindFinal+' - '+mindPress)
        IF mtipo_nfe = '2' .OR. mtipo_nfe = '4'
                mtipo_sigla:='NFE '
                mei := mrefCTe := SPACE(30)
                mModECF := SPACE(2)
                mnECF   := SPACE(3)
                mnCOO   := SPACE(6)
                op_tela(09,05,14,115,'NOTA REFERENCIADA',,'*')

                m_nt_ref:={'NFE','NFP','CTE'}
                mposicao:={0,0,3,4}
                WVW_CBSetFont( , 'lucida console', 14,9)
                mcb_nt_ref := WVW_CBCreate( , 0, 38,10, m_nt_ref,,15,,0,mposicao )
                //WVW_CBISFocused( , mcb_nt_ref )
                DEVPOS(1, 0);DEVOUT('Tipo de Nota de Referencia..........:')
                DEVPOS(2, 0);DEVOUT('Chave de acesso da NF-e referenciada:')
                DEVPOS(3, 0);DEVOUT('Chave de acesso da CT-e referenciada:')
                DEVPOS(4, 0);DEVOUT('Inscricao Estadual..................:')
                //DEVPOS(5, 0);DEVOUT('Modelo da ECF.......................:    [2C] Cupom Fiscal PDV - [2D] Cupom Fiscal (emitido por ECF v2.0)')
                //DEVPOS(6, 0);DEVOUT('Numero de ordem sequencial do ECF...:')
                //DEVPOS(7, 0);DEVOUT('No.Contador  Ordem de Operação - COO:')
                //DEVPOS(8, 0);DEVOUT('Codigo do CST dos Produtos..........:')
                @ 0,38 GET mtipo_sigla PICT '@!' VALID IF(EMPTY(mtipo_sigla),.F.,.T.) .AND. mtipo_sigla $ 'NFE NFP CTE NFCE'
                @ 2,38 GET mrefnfe WHEN men_get(0,0,'Informar CHAVE DE ACESSO DA NF-e REFERENCIADA') .AND. (mtipo_sigla = 'NFE' .OR. mtipo_sigla = 'NFCE') VALID IF(EMPTY(mrefnfe),.F.,.T.) .AND. lim_get()
                @ 3,38 GET mrefCTe WHEN men_get(0,0,'Informar CHAVE DE ACESSO DA CT-e REFERENCIADA') .AND. mtipo_sigla = 'CTE' VALID IF(EMPTY(mrefCTe),.F.,.T.) .AND. lim_get()
                @ 4,38 GET mEI WHEN mtipo_sigla # 'ECF'
                //@ 5,38 GET mModECF WHEN mtipo_sigla = 'ECF' VALID IF(EMPTY(mModECF),.F.,.T.) .AND. lim_get()
                //@ 6,38 GET mnECF WHEN mtipo_sigla = 'ECF' VALID IF(EMPTY(mnECF),.F.,.T.) .AND. lim_get()
                //@ 7,38 GET mncoo WHEN mtipo_sigla = 'ECF' VALID IF(EMPTY(mncoo),.F.,.T.) .AND. lim_get()
                //@ 8,38 GET mcod_cst PICT '999' WHEN mtipo_sigla = 'ECF' VALID IF(EMPTY(mcod_cst),.F.,.T.) .AND. lim_get()
                READ
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        LOOP
                ENDIF
                mtipo_sigla := ALLTRIM(WVW_CBGetCurText( , mcb_nt_ref ))
                //ATENCAO(mtipo_nfe)
                WVW_CBDestroy( , mcb_nt_ref )
                IF 'N' = op_simnao('S','Confirma a Chave de acesso da NF-e referenciada [S/N]:')
                        wvw_lclosewindow()
                        LOOP
                ENDIF
                wvw_lclosewindow()
        ENDIF
        mtipo_fat := ' '
        mtot_ped := 0
        IF no_ped <> NIL
                IF LEN(no_ped) = 0
                        atencao('Nao existe pedido solicitado')
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                ASORT(no_ped,,, {|x,y| x[3] < y[3]})
                mcod_tran := no_ped[1,46]
                mcod_cli := VAL(no_ped[1,10])
                mdata_ped := no_ped[1,36]
                mcgc := no_ped[1,37]
                mcpf := no_ped[1,38]
                mcod_vend := VAL(no_ped[1,9])
                mnome_vend := no_ped[1,10]
                mcond_vezes := no_ped[1,39]
                mintev :=  VAL(SUBSTR(no_ped[1,40],3,3))
                mintev1 := VAL(SUBSTR(no_ped[1,40],6,3))
                mintev2 := VAL(SUBSTR(no_ped[1,40],9,3))
                mintev3 := VAL(SUBSTR(no_ped[1,40],12,3))
                mintev4 := VAL(SUBSTR(no_ped[1,40],15,3))
                mintev5 := VAL(SUBSTR(no_ped[1,40],18,3))
                mintev6 := VAL(SUBSTR(no_ped[1,40],21,3))
                mintev7 := VAL(SUBSTR(no_ped[1,40],24,3))
                mintev8 := VAL(SUBSTR(no_ped[1,40],27,3))
                mintev9 := VAL(SUBSTR(no_ped[1,40],30,3))
                mintev10:= VAL(SUBSTR(no_ped[1,40],33,3))
                mintev11:= VAL(SUBSTR(no_ped[1,40],36,3))
                mtp_vend := no_ped[1,41]
                n := 0
                FOR n = 1 TO LEN(no_ped)
                        mtot_ped := mtot_ped + (no_ped[N,6]*no_ped[N,7])
                        mqtd_item ++
                NEXT
        ELSEIF ! EMPTY(mnum_ped) .OR. ! EMPTY(mnum_orc) 
                mcod_tran := cons_ped[1,90]
                IF ! EMPTY(cons_ped[1,23])
                        mcod_cli := cons_ped[1,23]
                ELSE
                        mcod_cli := 0
                ENDIF
                mdata_ped := cons_ped[1,4]
                mcgc := cons_ped[1,24]
                mcpf := cons_ped[1,25]
                mcod_vend := VAL(cons_ped[1,32])
                mnome_vend := cons_ped[1,33]
                mcond_vezes := cons_ped[1,43]
                mintev :=  VAL(SUBSTR(cons_ped[1,44],3,3))
                mintev1 := VAL(SUBSTR(cons_ped[1,44],6,3))
                mintev2 := VAL(SUBSTR(cons_ped[1,44],9,3))
                mintev3 := VAL(SUBSTR(cons_ped[1,44],12,3))
                mintev4 := VAL(SUBSTR(cons_ped[1,44],15,3))
                mintev5 := VAL(SUBSTR(cons_ped[1,44],18,3))
                mintev6 := VAL(SUBSTR(cons_ped[1,44],21,3))
                mintev7 := VAL(SUBSTR(cons_ped[1,44],24,3))
                mintev8 := VAL(SUBSTR(cons_ped[1,44],27,3))
                mintev9 := VAL(SUBSTR(cons_ped[1,44],30,3))
                mintev10:= VAL(SUBSTR(cons_ped[1,44],33,3))
                mintev11:= VAL(SUBSTR(cons_ped[1,44],36,3))
                mtp_vend := cons_ped[1,45]
                mvlr_entrada := cons_ped[1,46]
                i:=0
                FOR i = 1 TO LEN(cons_ped)
                        cons_merc := {}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(cons_ped[i,6]),,.t.,@cons_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_merc) = 0
                                atencao('Este produto nao foi encontrado pode ter sido excluido: '+cons_ped[i,6])
                                LOOP
                        ENDIF
                        mtot_ped := mtot_ped + (cons_ped[i,14]*cons_ped[1,18])
                        mqtd_item ++
                NEXT
        ENDIF
        @ 8,14 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,8,20)
        @ 9,14 GET mcpf PICT '@@R 999.999.999-99' VALID ver_cpf(mcpf) WHEN mcod_cli = 0
        @ 10,14 GET mcgc PICT '@@R 99.999.999/9999-99' VALID ver_cgc(mcgc) WHEN mcod_cli = 0 .AND. mcpf = SPACE(11)
        READ
        IF (EMPTY(mcod_cli) .AND. EMPTY(mcpf) .AND. EMPTY(mcgc)) .OR. LASTKEY() = 27 .OR. LEN(cons_cli) = 0
                atencao('E preciso ser identificado o cliente')
                LOOP
        ENDIF
        IF LEN(ALLTRIM(cons_cli[1,29])) > 10
                atencao('Verifique o TELEFONE deste Cliente tem que ter no Maximo de 10 Posicoes  ....')
                LOOP
        ENDIF
        IF EMPTY(cons_cli[1,21]) .OR. EMPTY(cons_cli[1,24]) .OR. EMPTY(cons_cli[1,25]) .OR. EMPTY(cons_cli[1,136])
                atencao('O Cadastro deste Cliente estar faltando algum campo OBRIGATORIO ser preenchido !!!!')
                LOOP
        ENDIF
        mcid_cli := cons_cli[1,24]
        muf_cli := cons_cli[1,25]
        ver_cli(mcod_cli,8,20)
        setcor(3)
        DEVPOS(8,14);DEVOUT(STR(mcod_cli,5)+' - ')
        DEVPOS(8,COL());DEVOUT(mcliente)
        DEVPOS(9,14);DEVOUTPICT(mcpf,'@@R 999.999.999-99')
        DEVPOS(10,14);DEVOUTPICT(mcgc,'@@R 99.999.999/9999-99')
        DEVPOS(11,14);DEVOUT(cons_cli[1,33])
        DEVPOS(12,14);DEVOUT(cons_cli[1,21])
        DEVPOS(13,14);DEVOUT(cons_cli[1,136])
        DEVPOS(14,14);DEVOUT(cons_cli[1,137])
        DEVPOS(15,14);DEVOUT(cons_cli[1,24])
        DEVPOS(15,46);DEVOUT(cons_cli[1,25])
        DEVPOS(16,14);DEVOUT(cons_cli[1,29])
        IF ! EMPTY(cons_cli[1,48])
                setcor(3,'*')
                DEVPOS(17,14);DEVOUT(cons_cli[1,48])
        ENDIF
        setcor(1)
        minsc := cons_cli[1,33]
        muf := cons_cli[1,25]

        IF cons_cli[1,25] <> m_set[1,19]
                IF EMPTY(cons_cli[1,32])
                        mcod_nat := '6.102'
                ELSEIF mtipo_nfe = '2' .OR. mtipo_nfe = '4'
                        mcod_nat := '6.202'
                ELSE
                        mcod_nat := '6.102'
                ENDIF
        ELSE
                IF mtipo_nfe = '2' .OR. mtipo_nfe = '4'
                        mcod_nat := '5.202'
                ELSE
                        mcod_nat := '5.102'
                ENDIF

        ENDIF
        IF ver_serie() = '141338'
                IF cons_cli[1,25] <> m_set[1,19]
                        mcod_nat := '6.102'
                ELSE
                        mcod_nat := '5.102'
                ENDIF
        ELSE
                IF cons_cli[1,25] <> m_set[1,19]
                        //IF EMPTY(mcgc) 		//.OR. SUBSTR(minsc,1,6) = 'ISENTO'
                        //        mperc := mperc_aux := m_set[1,20]
                        //ELSE
                                mperc := mperc_aux := 12
                        //ENDIF
                ENDIF
        ENDIF
/*      
        IF ! TestaIe(cons_cli[1,33],cons_cli[1,25])
                LOOP
        ENDIF
*/
        //IF muf <> m_set[1,19] .AND. EMPTY(minsc) .AND. EMPTY(mcgc)  .AND. m_set[1,19] <> 'BA'
        //IF muf <> m_set[1,19] .AND. EMPTY(mcgc)  .AND. m_set[1,19] <> 'BA' .AND. ver_serie() <> '141338' .AND. ver_serie() <> '141535'
        //        mperc := mperc_aux := m_set[1,20]
        //ENDIF
        point = RECNO()
        @ 19,14 GET mcod_nat PICT '9.999' VALID IF(EMPTY(mcod_nat),.F.,ver_nat(mcod_nat))
        @ 19,20 GET mnatureza
        READ
        IF LASTKEY() = 27;LOOP;ENDIF
        ver_nat(mcod_nat)
        /*
        IF mcod_nat = '5.929' .OR. mcod_nat = '6.929'
                mtipo_sigla:='ECF'
                mei := mrefCTe := SPACE(30)
                mModECF := SPACE(2)
                mnECF   := SPACE(3)
                mnCOO   := SPACE(6)
                op_tela(05,05,14,115,'NOTA REFERENCIADA',,'*')
                DEVPOS(1, 0);DEVOUT('Tipo [NF] [NFE] [NFP] [CTE] [ECF]...:')
                DEVPOS(5, 0);DEVOUT('Modelo da ECF.......................:    [2C] Cupom Fiscal PDV - [2D] Cupom Fiscal (emitido por ECF v2.0)')
                DEVPOS(6, 0);DEVOUT('Numero de ordem sequencial do ECF...:')
                DEVPOS(7, 0);DEVOUT('No.Contador  Ordem de Operação - COO:')
                DEVPOS(8, 0);DEVOUT('Codigo do CST dos Produtos..........:')
                @ 1,38 GET mtipo_sigla PICT '@!' VALID IF(EMPTY(mtipo_sigla),.F.,.T.) .AND. mtipo_sigla $ 'ECF'
                @ 5,38 GET mModECF WHEN mtipo_sigla = 'ECF' VALID IF(EMPTY(mModECF),.F.,.T.) .AND. lim_get()
                @ 6,38 GET mnECF WHEN mtipo_sigla = 'ECF' VALID IF(EMPTY(mnECF),.F.,.T.) .AND. lim_get()
                @ 7,38 GET mncoo WHEN mtipo_sigla = 'ECF' VALID IF(EMPTY(mncoo),.F.,.T.) .AND. lim_get()
                @ 8,38 GET mcod_cst PICT '999' WHEN mtipo_sigla = 'ECF' VALID IF(EMPTY(mcod_cst),.F.,.T.) .AND. lim_get()
                READ
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        LOOP
                ENDIF
                IF 'N' = op_simnao('S','Confirma a Chave de acesso da NF-e referenciada [S/N]:')
                        wvw_lclosewindow()
                        LOOP
                ENDIF
                wvw_lclosewindow()
        ENDIF
        */
        IF m_set[1,117] = 'N'
                IF msai_ent = 'S'
                        *************
                        SELE('nota');ORDSETFOCUS(1)
                        GO TOP
                        *************
                        mdocumento := STRZERO(VAL(nota->numero)+1,6)
                ELSE
                        *************
                        SELE('notae');ORDSETFOCUS(1)
                        GO BOTT
                        *************
                        mdocumento := STRZERO(VAL(notae->numeroe)+1,6)
                ENDIF
        ENDIF
        @ 20,14 GET mdocumento PICT '999999' WHEN m_set[1,117] = 'N' .AND. mel = NIL   // WHEN men_get(8,cci0,'Digite o No.da N.F. da sequencia ("CAMPO-OBRIGATORIO")') VALID lim_get()
        @ 20,48 GET mno_ped_cli
        @ 21,14 GET mdata PICT '99/99/99' WHEN mel = NIL            // WHEN men_get(8,42,'Digite a data da Emissao ("CAMPO-OBRIGATORIO")') VALID lim_get()
        @ 21,38 GET mdata_sai PICT '99/99/99'
        READ
        mdocumento := STRZERO(VAL(mdocumento),6)
        IF LASTKEY() = 27;LOOP;ENDIF
        IF msai_ent = 'S'
                *************
                SELE('nota')
                *************
        ELSE
                *************
                SELE('notae')
                *************
        ENDIF
        //mtp_vend := 'AV'

        /*
        0=Contratação do Frete por conta do Remetente (CIF);
        1=Contratação do Frete por conta do Destinatário (FOB);
        2=Contratação do Frete por conta de Terceiros;
        3=Transporte Próprio por conta do Remetente;
        4=Transporte Próprio por conta do Destinatário;
        9=Sem Ocorrência de Transporte.
        */

        mfrete_trans := '0'
        @ 22,14 GET mtp_vend PICT '@!' VALID mtp_vend $ 'AV,AP,  'WHEN men_get(4,0,'Informe Forma de Pagamento: [AV] - Avista, [AP] - Aprazo ou em BRANCO ')
        @ 23,14 GET mfrete PICT '99,999,999.99'
        @ 24,14 GET mseguro PICT '99,999,999.99'
        @ 25,14 GET mencargo PICT '99,999,999.99'
        @ 26,14 GET mperc_desc PICT '99,999,999.99'
        @ 28,14 GET mfrete_trans PICT '@!' VALID mfrete_trans $ '0,1,2,3,4,9' .AND. IF(EMPTY(mfrete_trans),.F.,.T.)     //WHEN men_get(0,0,'Frete por conta <1>Emitente e <2>Destinatario ("CAMPO-OBRIGATORIO")')
        READ
        IF LASTKEY() = 27;LOOP;ENDIF
        IF mfrete_trans = '0'
                f5_trans(@mnome_trans,@mcgc_trans,@mend_trans,@mmun_trans,;
                         @muf_trans,@minsc_trans,@mplaca_trans,@mcod_tran,@mantt,@mapolice,@mpluf_trans)
                tela2 := SAVESCREEN(05,39,23,78)
        ENDIF
        @ 30,14 GET mnome_trans PICT '@!'       //WHEN mfrete_trans = '0'
        IF mcgccpf = 'CGC'
                @ 31,14 GET mcgc_trans PICT '@@R 99.999.999/9999-99' VALID IF(EMPTY(mcgc_trans),.F.,.T.) WHEN ! EMPTY(mnome_trans)
        ELSEIF mcgccpf = 'CPF'
                @ 31,14 GET mcgc_trans PICT '@@R 999.999.999-99' VALID IF(EMPTY(mcgc_trans),.F.,.T.) WHEN ! EMPTY(mnome_trans)
        ELSE
                @ 31,14 GET mcgc_trans PICT '@!' VALID IF(EMPTY(mcgc_trans),.F.,.T.) WHEN ! EMPTY(mnome_trans)
        ENDIF
        @ 32,14 GET mend_trans PICT '@!' VALID IF(EMPTY(mend_trans),.F.,.T.) WHEN ! EMPTY(mnome_trans)
        @ 33,14 GET mmun_trans PICT '@!' VALID IF(EMPTY(mmun_trans),.F.,.T.) WHEN ! EMPTY(mnome_trans)
        @ 34,14 GET muf_trans PICT '@!' VALID IF(EMPTY(muf_trans),.F.,.T.) WHEN ! EMPTY(mnome_trans)
        @ 35,14 GET minsc_trans PICT '@!' VALID IF(EMPTY(minsc_trans),.F.,.T.) WHEN ! EMPTY(mnome_trans)
        @ 36,14 GET mplaca_trans PICT '@!' VALID IF(EMPTY(mplaca_trans),.T.,.T.) WHEN ! EMPTY(mnome_trans)
        @ 36,32 GET mpluf_trans PICT '@!' VALID IF(EMPTY(mpluf_trans),.T.,.T.) WHEN ! EMPTY(mnome_trans)
        @ 36,42 GET mantt PICT '@!' WHEN ! EMPTY(mnome_trans)
        @ 37,14 GET mesp_trans PICT '@!'
        @ 38,14 GET mmarca_trans PICT '@!'
        @ 39,14 GET mnum_trans PICT '@!'
        READ
        IF LASTKEY() = 27;LOOP;ENDIF
        mcod_nataux := mcod_nat
        mtp_emp := AT('ME',minsc)
        IF no_ped <> NIL
                N := 0
                ASORT(no_ped,,, {|x,y| x[2] < y[2]})
                FOR N = 1 TO LEN(no_ped)
                        ver_cod(VAL(no_ped[N,2]))
                        IF no_ped[N,6] > merc->saldo_fis .AND. m_set[1,16] = 'S'
                                IF ! aut_sen('Produto: '+no_ped[N,2]+'-'+no_ped[N,3]+' com saldo: '+TRANSFORM(merc->saldo_fis,'99,999.9999')+' MENOR que solicitado, Senha Autorizacao:','LIBSLDNF')
                                        LOOP
                                ENDIF
                        ENDIF
                        IF no_ped[N,4] = 'FR'
                                mfrete := mfrete + (no_ped[N,7] * no_ped[N,6])
                                setcor(3,'*')
                                DEVPOS(24,8);DEVOUT(TRANSFORM(mfrete,'99,999,999.99'))
                                setcor(1)
                                LOOP
                        ELSEIF SUBSTR(no_ped[N,3],1,11) = 'MAO DE OBRA' .OR. EMPTY(no_ped[N,2])
                                LOOP
                        ENDIF
                        IF LEN(ALLTRIM(merc->nbm)) < 8
                                atencao('Este Produto estar com o NCM errado Verifique para poder tirar esta Nota...')
                                LOOP
                        ENDIF
                        mquantd := mpr_venda := mval_venda := mdif_icm := 0
                        mcod_merc := VAL(no_ped[N,2])
                        ver_cod(VAL(no_ped[N,2]))
                        mgrupo := no_ped[N,11]
                        mmerc := no_ped[N,3]
                        mcod_forn := no_ped[N,14]
                        mfabrica := no_ped[N,15]
                        mcomissao := no_ped[N,18]
                        mchassis  := no_ped[N,28]
                        mdescri1  := no_ped[N,29]
                        mdescri2  := no_ped[N,30]
                        mdescri3  := no_ped[N,31]
                        mdescri4  := no_ped[N,32]
                        mdescri5  := no_ped[N,33]
                        mipi      := no_ped[N,23]
                        IF no_ped[N,17] = 'S' .OR. SUBSTR(minsc,1,3) = '181' .OR. (mtp_emp = 0 .AND. ! EMPTY(minsc))          //.AND. mcgc_firm = '16.314.569/0001-61')
                                micm_f = 0
                        ENDIF
                        WHILE no_ped[N,2] = mcod_merc
                                mquantd := mquantd + no_ped[N,6]
                                mpr_venda := mpr_venda + (no_ped[N,6]*no_ped[N,12])
                                mval_venda := mval_venda + (no_ped[N,6]*no_ped[N,7])
                                n := n + 1
                                IF N > LEN(no_ped);EXIT;ENDIF
                        ENDDO
                        misento := vercst(IF(! EMPTY(mcod_cst),mcod_cst,merc->sittrib))
                        N := N - 1
                        mpr_venda := mpr_venda / mquantd
                        mval_venda := mval_venda / mquantd
                        IF ! EMPTY(mperc_desc)
                                mval_venda := mval_venda - (mval_venda * (mperc_desc / 100))
                        ENDIF
                        mdesconto := 0

                        IF cons_cli[1,25] <> m_set[1,19] .AND. ! EMPTY(merc->cfop_fora)
                                mcod_nataux := merc->cfop_fora
                        ELSEIF ! EMPTY(merc->cfop_dent)
                                mcod_nataux := merc->cfop_dent
                        ENDIF
                        ver_nat(mcod_nataux)
                        AADD(m_codigo,STRZERO(mcod_merc,5))
                        AADD(m_produto,STRZERO(mcod_merc,5)+' '+mmerc+' '+TRANSFORM(mquantd,'99999.99')+' '+TRANSFORM(mval_venda,ALLTRIM(m_set[1,98]))+' '+TRANSFORM(mval_venda*mquantd,ALLTRIM(m_set[1,98]))+'  '+mcod_nataux+' '+IF(! EMPTY(mcod_cst),mcod_cst,merc->sittrib)+'  '+merc->unidade)
                        IF (misento = 'I' .OR. misento = 'N' .OR. misento = 'F')        //.AND. muf = m_set[1,19]
                                mperc := micm := 0
                        ELSE
                                mperc := micm := mperc_aux
                        ENDIF
                        //IF VAL(merc->sittrib) = 40 .OR. VAL(merc->sittrib)= 41 .OR. VAL(merc->sittrib) = 50 .OR. VAL(merc->sittrib) = 60
                        //        mperc := 0
                        //ENDIF
                        //IF m_set[1,17] = 'S'
                        IF cons_cli[1,25] <> m_set[1,19] .AND. EMPTY(cons_cli[1,32])
                                mcod_cst := '041'
                        ELSEIF (mtipo_nfe = '2' .OR. mtipo_nfe = '4') .AND. m_set[1,126] = 'S'
                                mcod_cst := '900'
                        ENDIF
                        IF ! EMPTY(micm_sub)
                                //               1      2       3        4        5       6          7          8              9            10         11         12          13     14 15  16          17           18        19 20     21               22        23      24       25          26         27      28       29      30        31        32      33     34             35
                                AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,merc->unidade,merc->peso,merc->alimento,mdesconto,merc->cust_real,0,misento,0,mcomissao,merc->bebida,merc->peso_liq,0,12,merc->cod_merc,micm_sub,merc->cod_clf,mipi,merc->desc_icm,mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,merc->pr_fat,0,merc->desc_icm1,IF(! EMPTY(mcod_cst),mcod_cst,merc->sittrib),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],cons_merc[1,110],cons_merc[1,111]})
                                LOOP
                        ELSEIF (misento = 'I' .OR. misento = 'N' .OR. misento = 'F') .AND. ver_serie()= '141449'
                                AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,merc->unidade,merc->peso,merc->alimento,mdesconto,merc->cust_real,micm_f,misento,0,mcomissao,merc->bebida,merc->peso_liq,0,0,merc->cod_merc,0,merc->cod_clf,no_ped[N,23],merc->desc_icm,mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,merc->pr_fat,0,merc->desc_icm1,IF(! EMPTY(mcod_cst),mcod_cst,merc->sittrib),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],cons_merc[1,110],cons_merc[1,111]})
                                LOOP
                        ELSEIF mcod_nat = '6.915' .OR. mcod_nat = '5.915' .OR. mcod_nat = '5.922' .OR. mcod_nat = '6.922'
                                AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,merc->unidade,merc->peso,merc->alimento,mdesconto,merc->cust_real,micm_f,misento,0,mcomissao,merc->bebida,merc->peso_liq,0,0,merc->cod_merc,0,merc->cod_clf,no_ped[N,23],merc->desc_icm,mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,merc->pr_fat,0,merc->desc_icm1,IF(! EMPTY(mcod_cst),mcod_cst,merc->sittrib),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],cons_merc[1,110],cons_merc[1,111]})
                                //AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,merc->unidade,merc->peso,merc->alimento,mdesconto,merc->cust_real,micm_f,misento,0,mcomissao,merc->bebida,merc->peso_liq,0,0,mcod_merc,0,merc->cod_clf,ped_s->pipi,merc->desc_icm,mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,merc->pr_fat,0,merc->desc_icm1,'050'})
                                LOOP
                        ELSEIF mcod_nat = '6.109'
                                AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,merc->unidade,merc->peso,merc->alimento,mdesconto,merc->cust_real,micm_f,misento,0,mcomissao,merc->bebida,merc->peso_liq,0,0,merc->cod_merc,0,merc->cod_clf,0,merc->desc_icm,mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,merc->pr_fat,0,merc->desc_icm1,IF(! EMPTY(mcod_cst),mcod_cst,merc->sittrib),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],cons_merc[1,110],cons_merc[1,111]})
                                LOOP
                        ELSEIF muf <> m_set[1,19] .AND. ver_serie()= '141410'
                                AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,merc->unidade,merc->peso,merc->alimento,mdesconto,merc->cust_real,micm_f,misento,0,mcomissao,merc->bebida,merc->peso_liq,0,mperc,merc->cod_merc,0,merc->cod_clf,mipi,merc->desc_icm,mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,merc->pr_fat,0,merc->desc_icm1,IF(! EMPTY(mcod_cst),mcod_cst,merc->sittrib),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],cons_merc[1,110],cons_merc[1,111]})
                                LOOP
                        ELSEIF (misento = 'I' .OR. misento = 'N' .OR. misento = 'F') .AND. muf = m_set[1,19] .AND. merc->desc_icm = 'S'
                                AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,merc->unidade,merc->peso,merc->alimento,mdesconto,merc->cust_real,micm_f,misento,0,mcomissao,merc->bebida,merc->peso_liq,0,0,merc->cod_merc,0,merc->cod_clf,no_ped[N,23],merc->desc_icm,mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,merc->pr_fat,0,merc->desc_icm1,IF(! EMPTY(mcod_cst),mcod_cst,merc->sittrib),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],cons_merc[1,110],cons_merc[1,111]})
                                LOOP
                        ELSEIF (misento = 'I' .OR. misento = 'N' .OR. misento = 'F') .AND. ver_serie() = '141206' .AND. muf <> 'BA'
                                AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,merc->unidade,merc->peso,merc->alimento,mdesconto,merc->cust_real,micm_f,misento,0,mcomissao,merc->bebida,merc->peso_liq,0,mperc,merc->cod_merc,0,merc->cod_clf,no_ped[N,23],merc->desc_icm,mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,merc->pr_fat,0,merc->desc_icm1,IF(! EMPTY(mcod_cst),mcod_cst,merc->sittrib),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],cons_merc[1,110],cons_merc[1,111]})
                                LOOP
                        ELSEIF (misento = 'I' .OR. misento = 'N' .OR. misento = 'F')
                                AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,merc->unidade,merc->peso,merc->alimento,mdesconto,merc->cust_real,micm_f,misento,0,mcomissao,merc->bebida,merc->peso_liq,0,0,merc->cod_merc,0,merc->cod_clf,no_ped[N,23],merc->desc_icm,mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,merc->pr_fat,0,merc->desc_icm1,IF(! EMPTY(mcod_cst),mcod_cst,merc->sittrib),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],cons_merc[1,110],cons_merc[1,111]})
                                LOOP
                        ENDIF
                        icm_merc(VAL(mcod_merc))
                        IF mdif_icm > 0 .AND. (ver_serie() = '141338' .OR. ver_serie() = '141535')
                                AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,merc->unidade,merc->peso,merc->alimento,mdesconto,merc->cust_real,micm_f,misento,0,mcomissao,merc->bebida,merc->peso_liq,0,mdif_icm,merc->cod_merc,0,merc->cod_clf,mipi,merc->desc_icm,mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,merc->pr_fat,0,merc->desc_icm1,IF(! EMPTY(mcod_cst),mcod_cst,merc->sittrib),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],cons_merc[1,110],cons_merc[1,111]})
                                LOOP
                        ELSEIF muf <> m_set[1,19] .AND. (EMPTY(merc->cod_fis) .AND. ver_serie() <> '141235')
                                AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,merc->unidade,merc->peso,merc->alimento,mdesconto,merc->cust_real,micm_f,misento,0,mcomissao,merc->bebida,merc->peso_liq,0,mperc,merc->cod_merc,0,merc->cod_clf,mipi,merc->desc_icm,mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,merc->pr_fat,0,merc->desc_icm1,IF(! EMPTY(mcod_cst),mcod_cst,merc->sittrib),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],cons_merc[1,110],cons_merc[1,111]})
                                LOOP
                        ELSEIF mdif_icm > 0
                                IF micm_f > 0 .AND. muf <> 'BA'
                                        AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,merc->unidade,merc->peso,merc->alimento,mdesconto,merc->cust_real,0.075,misento,0,mcomissao,merc->bebida,merc->peso_liq,0,mdif_icm,merc->cod_merc,0,merc->cod_clf,mipi,merc->desc_icm,mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,merc->pr_fat,0,merc->desc_icm1,IF(! EMPTY(mcod_cst),mcod_cst,merc->sittrib),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],cons_merc[1,110],cons_merc[1,111]})
                                ELSE
                                        AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,merc->unidade,merc->peso,merc->alimento,mdesconto,merc->cust_real,micm_f,misento,0,mcomissao,merc->bebida,merc->peso_liq,0,mdif_icm,merc->cod_merc,0,merc->cod_clf,mipi,merc->desc_icm,mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,merc->pr_fat,0,merc->desc_icm1,IF(! EMPTY(mcod_cst),mcod_cst,merc->sittrib),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],cons_merc[1,110],cons_merc[1,111]})
                                ENDIF
                                LOOP
                        ENDIF
                        AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,merc->unidade,merc->peso,merc->alimento,mdesconto,merc->cust_real,micm_f,misento,0,mcomissao,merc->bebida,merc->peso_liq,0,mperc,merc->cod_merc,0,merc->cod_clf,mipi,merc->desc_icm,mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,merc->pr_fat,0,merc->desc_icm1,IF(! EMPTY(mcod_cst),mcod_cst,merc->sittrib),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],cons_merc[1,110],cons_merc[1,111]})
                NEXT
                nota('1')
                mnf1 := mdocumento
                LOOP
        ELSEIF ! EMPTY(mnum_ped) .OR. ! EMPTY(mnum_orc)
                i:=0
                FOR i = 1 TO LEN(cons_ped)
                        cons_merc := {}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(cons_ped[i,6]),,.t.,@cons_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF cons_ped[i,14] > cons_merc[1,55] .AND. m_set[1,16] = 'S'
                                IF ! aut_sen('Produto: '+cons_ped[i,6]+'-'+cons_ped[i,7]+' com saldo: '+TRANSFORM(cons_merc[1,55],'99,999.9999')+' MENOR que solicitado, Senha Autorizacao:','LIBSLDNF')
                                        LOOP
                                ENDIF
                        ENDIF
                        IF LEN(ALLTRIM(cons_merc[1,70])) < 8
                                atencao('Este Produto estar com o NCM errado Verifique para poder tirar esta Nota...')
                                LOOP
                        ENDIF
                        IF EMPTY(cons_merc[1,14])
                                atencao('Este Produto nao estar com a UNIDADE, Verifique para poder tirar esta Nota...')
                                LOOP
                        ENDIF
                        /*
                        IF cons_ped[i,8] = 'FR '
                                mfrete := mfrete + (cons_ped[i,18] * cons_ped[i,14])
                                setcor(3,'*')
                                DEVPOS(24,8);DEVOUT(TRANSFORM(mfrete,'99,999,999.99'))
                                setcor(1)
                                LOOP
                        */
                        IF SUBSTR(cons_ped[i,7],1,11) = 'MAO DE OBRA' .OR. EMPTY(cons_ped[i,6])
                                LOOP
                        ENDIF
                        mdif_icm := 0
                        mcod_merc := VAL(cons_ped[i,6])
                        ver_cod(VAL(cons_ped[i,6]))
                        mgrupo := cons_ped[i,5]
                        mmerc := cons_ped[i,7]
                        mcod_forn := cons_ped[i,30]
                        mfabrica := cons_ped[i,31]
                        mquantd := cons_ped[i,14]
                        mpr_venda := cons_ped[i,20]
                        mval_venda := cons_ped[i,18]
                        mdesconto := cons_ped[i,39]
                        misento := vercst(cons_merc[1,68])
                        IF cons_cli[1,25] <> m_set[1,19] .AND. ! EMPTY(cons_merc[1,108])
                                mcod_nataux := cons_merc[1,108]
                        ELSEIF ! EMPTY(cons_merc[1,109])
                                mcod_nataux := cons_merc[1,109]
                        ENDIF
                        ver_nat(mcod_nataux)
                        IF cons_ped[i,51] = 'S' .OR. cons_ped[i,51] = 'T' .OR. cons_ped[i,51] = 'F' .OR. SUBSTR(minsc,1,3) = '181' .OR. (mtp_emp = 0 .AND. ! EMPTY(minsc))          //.AND. mcgc_firm = '16.314.569/0001-61')
                                micm_f = 0
                        ENDIF
                        AADD(m_codigo,STRZERO(mcod_merc,5))
                        AADD(m_produto,STRZERO(mcod_merc,5)+' '+mmerc+' '+TRANSFORM(mquantd,'99999.99')+' '+TRANSFORM(mval_venda,ALLTRIM(m_set[1,98]))+' '+TRANSFORM(mval_venda*mquantd,ALLTRIM(m_set[1,98]))+'  '+mcod_nataux+' '+IF(! EMPTY(mcod_cst),mcod_cst,cons_merc[1,68]))
                        IF (misento = 'I' .OR. misento = 'N' .OR. misento = 'F')        //.AND. muf = m_set[1,19]
                                mperc := micm := 0
                        ELSE
                                mperc := micm := mperc_aux
                        ENDIF
                        IF cons_cli[1,25] <> m_set[1,19] .AND. EMPTY(cons_cli[1,32])
                                mcod_cst := '041'
                        ELSEIF (mtipo_nfe = '2' .OR. mtipo_nfe = '4') .AND. m_set[1,126] = 'S'
                                mcod_cst := '900'
                        ENDIF
                        IF ! EMPTY(mperc_desc)
                                mval_venda := mval_venda - (mval_venda * (mperc_desc / 100))
                        ENDIF
                        //IF m_set[1,17] = 'S'
                                IF mcod_nat = '6.915' .OR. mcod_nat = '5.915'
                                        AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,cons_merc[1,14],cons_merc[1,17],cons_merc[1,21],mdesconto,cons_merc[1,45],micm_f,cons_merc[1,61],          0,mcomissao     ,cons_merc[1,62],cons_merc[1,16],             0,0,cons_merc[1,8],0,cons_merc[1,66],cons_ped[i,57],cons_merc[1,71],mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,cons_merc[1,49],0,cons_merc[1,72],IF(! EMPTY(mcod_cst),mcod_cst,cons_merc[1,68]),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],mipi,cons_merc[1,111]})
                                        LOOP
                                ELSEIF ! EMPTY(micm_sub)
                                        AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,cons_merc[1,14],cons_ped[i,11],cons_ped[i,48],mdesconto,cons_ped[i,21],0,cons_merc[1,61],cons_ped[i,52],cons_ped[i,53],cons_ped[i,56],cons_ped[i,12],cons_ped[i,17],12,cons_ped[i,6],micm_sub,cons_merc[1,66],cons_ped[i,57],cons_merc[1,71],cons_ped[i,80],cons_ped[i,81],cons_ped[i,82],cons_ped[i,83],cons_ped[i,84],cons_ped[i,85],cons_merc[1,49],cons_ped[i,22],cons_merc[1,72],IF(! EMPTY(mcod_cst),mcod_cst,cons_merc[1,68]),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],mipi,cons_merc[1,111]})
                                        LOOP
                                ELSEIF mcod_nat = '6.109'
*                                                        1      2       3        4         5        6         7             8             9           10             11           12            13        14            15          16              17              18               19      20        21       22     23        24     25                26            27              28            29             30             31            32               33             34             35
                                        AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,cons_merc[1,14],cons_ped[i,11],cons_ped[i,48],mdesconto,cons_ped[i,21],micm_f,cons_merc[1,61],cons_ped[i,52],cons_ped[i,53],cons_ped[i,56],cons_ped[i,12],cons_ped[i,17],0,cons_ped[i,6],0,cons_merc[1,66],0,cons_merc[1,71],cons_ped[i,80],cons_ped[i,81],cons_ped[i,82],cons_ped[i,83],cons_ped[i,84],cons_ped[i,85],cons_merc[1,49],cons_ped[i,22],cons_merc[1,72],IF(! EMPTY(mcod_cst),mcod_cst,cons_merc[1,68]),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],mipi,cons_merc[1,111]})
                                        LOOP
                                ELSEIF (misento = 'I' .OR. misento = 'N' .OR. misento= 'F') .AND. muf = m_set[1,19] .AND. cons_merc[1,71] = 'S'
                                        AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,cons_merc[1,14],cons_ped[i,11],cons_ped[i,48],mdesconto,cons_ped[i,21],micm_f,cons_merc[1,61],cons_ped[i,52],cons_ped[i,53],cons_ped[i,56],cons_ped[i,12],cons_ped[i,17],0,cons_ped[i,6],0,cons_merc[1,66],cons_ped[i,57],cons_merc[1,71],cons_ped[i,80],cons_ped[i,81],cons_ped[i,82],cons_ped[i,83],cons_ped[i,84],cons_ped[i,85],cons_merc[1,49],cons_ped[i,22],cons_merc[1,72],IF(! EMPTY(mcod_cst),mcod_cst,cons_merc[1,68]),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],mipi,cons_merc[1,111]})
                                        LOOP
                                //ELSEIF (misento = 'I' .OR. misento = 'N' .OR. misento= 'F') .AND. ver_serie() = '141206' .AND. muf <> 'BA'
                                //        AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,cons_merc[1,14],cons_ped[i,11],cons_ped[i,48],mdesconto,cons_ped[i,21],micm_f,cons_merc[1,61],cons_ped[i,52],cons_ped[i,53],cons_ped[i,56],cons_ped[i,12],cons_ped[i,17],mperc,cons_ped[i,6],0,cons_merc[1,66],cons_ped[i,57],cons_merc[1,71],cons_ped[i,80],cons_ped[i,81],cons_ped[i,82],cons_ped[i,83],cons_ped[i,84],cons_ped[i,85],cons_merc[1,49],cons_ped[i,22],cons_merc[1,72],;
                                //             cons_merc[1,68],mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],cons_merc[1,110],cons_merc[1,111]})
                                //        LOOP
                                ELSEIF (misento = 'I' .OR. misento = 'N' .OR. misento= 'F')
                                        AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,cons_merc[1,14],cons_ped[i,11],cons_ped[i,48],mdesconto,cons_ped[i,21],micm_f,cons_merc[1,61],cons_ped[i,52],cons_ped[i,53],cons_ped[i,56],cons_ped[i,12],cons_ped[i,17],0,cons_ped[i,6],0,cons_merc[1,66],cons_ped[i,57],cons_merc[1,71],cons_ped[i,80],cons_ped[i,81],cons_ped[i,82],cons_ped[i,83],cons_ped[i,84],cons_ped[i,85],cons_merc[1,49],cons_ped[i,22],cons_merc[1,72],IF(! EMPTY(mcod_cst),mcod_cst,cons_merc[1,68]),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],mipi,cons_merc[1,111]})
                                        LOOP
                                ENDIF
                                icm_merc(VAL(cons_ped[i,6]))
                                IF mdif_icm > 0 .AND. (ver_serie() = '141338' .OR. ver_serie() = '141535')
                                        AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,cons_merc[1,14],cons_ped[i,11],cons_ped[i,48],mdesconto,cons_ped[i,21],micm_f,cons_merc[1,61],cons_ped[i,52],cons_ped[i,53],cons_ped[i,56],cons_ped[i,12],cons_ped[i,17],mdif_icm,cons_ped[i,6],0,cons_merc[1,66],cons_ped[i,57],cons_merc[1,71],cons_ped[i,80],cons_ped[i,81],cons_ped[i,82],cons_ped[i,83],cons_ped[i,84],cons_ped[i,85],cons_merc[1,49],cons_ped[i,22],cons_merc[1,72],IF(! EMPTY(mcod_cst),mcod_cst,cons_merc[1,68]),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],mipi,cons_merc[1,111]})
                                        LOOP
                                ELSEIF muf <> m_set[1,19] .AND. EMPTY(cons_merc[1,67]) //.AND. ver_serie() <> '141235')
                                        AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,cons_merc[1,14],cons_ped[i,11],cons_ped[i,48],mdesconto,cons_ped[i,21],micm_f,cons_merc[1,61],cons_ped[i,52],cons_ped[i,53],cons_ped[i,56],cons_ped[i,12],cons_ped[i,17],mperc,cons_ped[i,6],0,cons_merc[1,66],cons_ped[i,57],cons_merc[1,71],cons_ped[i,80],cons_ped[i,81],cons_ped[i,82],cons_ped[i,83],cons_ped[i,84],cons_ped[i,85],cons_merc[1,49],cons_ped[i,22],cons_merc[1,72],;
                                             IF(! EMPTY(mcod_cst),mcod_cst,cons_merc[1,68]),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],mipi,cons_merc[1,111]})
                                        LOOP
                                ELSEIF mdif_icm > 0
                                        IF micm_f > 0 .AND. muf <> 'BA'
                                                AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,cons_merc[1,14],cons_ped[i,11],cons_ped[i,48],mdesconto,cons_ped[i,21],0.075,cons_merc[1,61],cons_ped[i,52],cons_ped[i,53],cons_ped[i,56],cons_ped[i,12],cons_ped[i,17],mdif_icm,cons_ped[i,6],0,cons_merc[1,66],cons_ped[i,57],cons_merc[1,71],cons_ped[i,80],cons_ped[i,81],cons_ped[i,82],cons_ped[i,83],cons_ped[i,84],cons_ped[i,85],cons_merc[1,49],;
                                                     cons_ped[i,22],cons_merc[1,72],IF(! EMPTY(mcod_cst),mcod_cst,cons_merc[1,68]),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],mipi,cons_merc[1,111]})
                                        ELSE

                                                AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,cons_merc[1,14],cons_ped[i,11],cons_ped[i,48],mdesconto,cons_ped[i,21],micm_f,cons_merc[1,61],cons_ped[i,52],cons_ped[i,53],cons_ped[i,56],cons_ped[i,12],cons_ped[i,17],mdif_icm,cons_ped[i,6],0,cons_merc[1,66],cons_ped[i,57],cons_merc[1,71],cons_ped[i,80],cons_ped[i,81],cons_ped[i,82],cons_ped[i,83],cons_ped[i,84],cons_ped[i,85],cons_merc[1,49],;
                                                     cons_ped[i,22],cons_merc[1,72],IF(! EMPTY(mcod_cst),mcod_cst,cons_merc[1,68]),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],mipi,cons_merc[1,111]})
                                        ENDIF
                                        LOOP
                                ENDIF
                                AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,cons_merc[1,14],cons_ped[i,11],cons_ped[i,48],mdesconto,cons_ped[i,21],micm_f,cons_merc[1,61],cons_ped[i,52],cons_ped[i,53],cons_ped[i,56],cons_ped[i,12],cons_ped[i,17],mperc,cons_ped[i,6],0,cons_merc[1,66],cons_ped[i,57],cons_merc[1,71],cons_ped[i,80],cons_ped[i,81],cons_ped[i,82],cons_ped[i,83],cons_ped[i,84],cons_ped[i,85],cons_merc[1,49],cons_ped[i,22],cons_merc[1,72],IF(! EMPTY(mcod_cst),mcod_cst,cons_merc[1,68]),mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],mipi,cons_merc[1,111]})
                NEXT
                //nota('1')
                //mnf1 := mdocumento
                //LOOP
        ENDIF
        WHILE .T.
                botao(0,64,43,119)
                DEVPOS(0,64);DEVOUT('                 PRODUTOS SOLICITADOS                 ')
                mqtd_lin := f := msubtotal := 0
                IF LEN(m_produto) > 30
                        mqtd_lin := LEN(m_produto) - 40
                ENDIF
                f++
                @ f,64 SAY ''

                WVW_DrawLabel(,f,COL(),'  Cod.  Descricao                                 Quantd.   Vlr.Unit.   Vlr.Total   CFOP CST  UN',,,,, 'lucida console',14,6,,,,,)
                f++
                WVW_DrawLabel(,f,COL(),REPLI(CHR(223),61))     //,,,,, 'terminal',13,4,,,,,)
                FOR i = 1 TO LEN(m_produto)
                        SETCOLOR('W/b,W/b')
                        IF mqtd_lin < i
                                @ 1+f,64 SAY ''
                                WVW_DrawLabel(,1+f,COL()+1,m_produto[i],,,,, 'lucida console',14,6,,,,,)
                                f++
                        ENDIF
                        msubtotal := msubtotal + iat((m_normal[i,7] * m_normal[i,5]),'R',m_set[1,103])
                NEXT
                tela_ := {}
                tela_ := WVW_SAVESCREEN(,0,64,lba,119)
                setcor(3)
                botao(45,64,53,119)
                DEVPOS(46,64);DEVOUT('              T O T A L     R $ ')
                WVW_DrawLabel(,47,65,TRANSFORM(msubtotal,ALLTRIM('@E '+m_set[1,98])),,,210,, 'arial black',60,30,,,,,)
                janela(40,0,'þ SOLICITAR PRODUTO ','*','D')
                DEVPOS(41,0);DEVOUT('Codigo....:')
                DEVPOS(42,0);DEVOUT('Descricao.:')
                DEVPOS(43,0);DEVOUT('Quantidade:')
                DEVPOS(44,0);DEVOUT('Sld.Atual.:')
                DEVPOS(45,0);DEVOUT('Valor Unit:')
                DEVPOS(46,0);DEVOUT('CST.......:')
                DEVPOS(47,0);DEVOUT('CFOP......:')
                DEVPOS(48,0);DEVOUT('ICM (%)...:')
                DEVPOS(49,0);DEVOUT('IPI (%)...:')
                DEVPOS(50,0);DEVOUT('ICM SUB(%):')
                DEVPOS(51,0);DEVOUT('Qtd.Itens.:')
                DEVPOS(51,0);DEVOUT('Gramatura.:')
                //DEVPOS(52,0);DEVOUT('Unidade...:')
                mensagem('<ENTER><ENTER> p/Finalizar a Nota - <ESC> Abandona ')
                mcod_merc := mquantd := mdesconto := mpr_venda := mdif_icm := 0
                mcod_bc := SPACE(14)
                mmerc := SPACE(40)
                mgrupo := SPACE(5)
                micm := mperc
                setcor(1)
                @ 41,12 GET mcod_bc PICT '@!'
                READ
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                IF EMPTY(mcod_bc)
                        @ 41,12 GET mcod_bc PICT '@!'
                        READ
                        IF LASTKEY() = 27;LOOP;ENDIF
                        IF LEN(m_normal) = 0
                                mnf1 := mdocumento
                                EXIT
                        ENDIF
                        IF EMPTY(mcod_bc)
                                nota('1')
                                mnf1 := mdocumento
                                EXIT
                        ELSE
                                mcod_merc := VAL(mcod_bc)
                                cons_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@cons_merc)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_merc) = 0
                                        atencao('Codigo da mercadoria nao cadastrado')
                                        LOOP
                                ENDIF
                        ENDIF
                ENDIF
                IF LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0
                        cons_merc := {}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_barr = "+sr_cdbvalue(mcod_bc),,.t.,@cons_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_merc) = 0
                                atencao('Codigo da mercadoria nao cadastrado')
                                LOOP
                        ENDIF
                        mcod_merc := VAL(mcod_bc)
                ELSE
                        mcod_merc := VAL(mcod_bc)
                        cons_merc := {}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@cons_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_merc) = 0
                                atencao('Codigo da mercadoria nao cadastrado')
                                LOOP
                        ENDIF
                ENDIF
                misento := vercst(IF(! EMPTY(mcod_cst),mcod_cst,cons_merc[1,68]))
                setcor(3)
                DEVPOS(41,12);DEVOUT(cons_merc[1,8]+SPACE(10))
                setcor(1)
                mcod_merc := VAL(cons_merc[1,8])
                mponto := ASCAN(m_codigo,STRZERO(mcod_merc,5))

                IF mponto > 0
                        opcao := op_simnao('S','Mercadoria ja foi solicitada deseja incluir novamente:')
                        IF opcao = 'N';LOOP;ENDIF
                ENDIF
                IF (misento = 'I' .OR. misento = 'N' .OR. misento = 'F')        //.AND. muf = m_set[1,19]
                        micm := mperc := 0
                ELSE
                        micm := mperc
                ENDIF
                IF (cons_merc[1,62] > 0 .AND. muf = m_set[1,19]) .OR. (cons_merc[1,62] > 0 .AND. ! EMPTY(cons_merc[1,67]))
                        micm := cons_merc[1,62]
                ENDIF
                IF (ver_serie() = '141338' .OR. ver_serie() = '141535') .AND. cons_merc[1,62] > 0
                        micm := cons_merc[1,62]
                ENDIF
                IF LEN(ALLTRIM(cons_merc[1,70])) < 8
                        atencao('Este Produto estar com o NCM errado Verifique para poder tirar esta Nota...')
                        LOOP
                ENDIF
                IF EMPTY(cons_merc[1,14])
                        atencao('Este Produto nao estar com a UNIDADE, Verifique para poder tirar esta Nota...')
                        LOOP
                ENDIF
                mpr_venda := iat(cons_merc[1,46],'T',2)
                mval_venda := iat(cons_merc[1,46],'T',2)
                //mval_venda := cons_merc[1,46]
                //mpr_venda := cons_merc[1,46]
                mmerc := cons_merc[1,9]
                mgrupo := cons_merc[1,7]
                mcod_forn := cons_merc[1,30]
                mfabrica := cons_merc[1,31]
                mipi := cons_merc[1,65]
                //misento := cons_merc[1,61]
                msittrib := IF(! EMPTY(mcod_cst),mcod_cst,cons_merc[1,68])
                IF cons_cli[1,25] <> m_set[1,19] .AND. ! EMPTY(cons_merc[1,108])
                        mcod_nataux := cons_merc[1,108]
                ELSEIF ! EMPTY(cons_merc[1,109])
                        mcod_nataux := cons_merc[1,109]
                ELSE
                        mcod_nataux := mcod_nat
                ENDIF

                IF (mtipo_nfe = '2' .OR. mtipo_nfe = '4') .AND. m_set[1,126] = 'S'
                        msittrib := '900'
                        mcod_nataux := mcod_nat
                ENDIF
                setcor(3)
                DEVPOS(41,12);DEVOUT(STRZERO(mcod_merc,5))
                DEVPOS(42,12);DEVOUT(mmerc)
                DEVPOS(44,12);DEVOUTPICT(cons_merc[1,55],'999,999,999.99')
                //DEVPOS(46,12);DEVOUT(cons_merc[1,68])
                DEVPOS(51,12);DEVOUTPICT(cons_merc[1,76],'999.99')
                IF cons_merc[1,23] <> 0
                        mval_venda := iat(cons_merc[1,46],2) - ((cons_merc[1,23]/100)*iat(cons_merc[1,46],2))
                ENDIF
                setcor(1)
                IF ! EMPTY(mperc_desc)
                        mval_venda := iat(mval_venda - (mval_venda * (mperc_desc / 100)),m_set[1,103])
                ENDIF
                mval_venda := iat(mval_venda,,m_set[1,103])
                //atencao(TRANSFORM(mval_venda,'999,999,999.9999'))
                icm_merc(mcod_merc)
                @ 42,12 GET mmerc PICT '@!' WHEN cons_merc[1,25] = 'S'
                @ 43,12 GET mquantd PICT  ALLTRIM(m_set[1,99]) VALID IF(mquantd > 0,.T.,.F.)
                @ 45,12 GET mval_venda PICT ALLTRIM(m_set[1,97])             //VALID lim_get() WHEN men_get(21,37,'Informe o Preco a ser faturado <ESC>retornar')
                @ 46,12 GET msittrib PICT '999' VALID vercst(msittrib,1)             //VALID lim_get() WHEN men_get(21,37,'Informe o Preco a ser faturado <ESC>retornar')
                @ 47,12 GET mcod_nataux PICT '9.999' VALID IF(EMPTY(mcod_nataux),.F.,ver_nat(mcod_nataux,,47,18))
                @ 48,12 GET micm PICT '999.99'
                @ 49,12 GET mipi PICT '999.99'
                @ 50,12 GET micm_sub PICT '999.99'
                //@ 52,12 GET cons_merc[1,14] PICT '@!' VALID IF(EMPTY(cons_merc[1,14]),.F.,.T.) WHEN cons_merc[1,25] = 'S'
                READ
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                IF mquantd > cons_merc[1,55] .AND. m_set[1,16] = 'S'
                        IF ! aut_sen('Produto Solicitado esta com Saldo a MENOR, Senha Autorizacao:','LIBSLDNF')
                                LOOP
                        ENDIF
                ENDIF
                //misento := vercst(cons_merc[1,68])
                misento := vercst(msittrib)
                opcao := op_simnao('S','Confirma Saida da Mercadoria:')
                IF opcao = 'N' .OR. SUBSTR(mmerc,1,11) = 'MAO DE OBRA' .OR. mquantd = 0
                        LOOP
                ENDIF
                IF (misento = 'I' .OR. misento = '' .OR. misento = 'F') .OR. SUBSTR(minsc,1,3) = '181' .OR. (mtp_emp = 0 .AND. ! EMPTY(minsc) .AND. mcgc_firm = '16.314.569/0001-61')
                        micm_f = 0
                ENDIF
                AADD(m_codigo,STRZERO(mcod_merc,5))
                AADD(m_produto,STRZERO(mcod_merc,5)+' '+mmerc+' '+TRANSFORM(mquantd,'99999.99')+' '+TRANSFORM(mval_venda,ALLTRIM(m_set[1,98]))+' '+TRANSFORM(mval_venda*mquantd,ALLTRIM(m_set[1,98]))+'  '+mcod_nataux+' '+msittrib+'  '+cons_merc[1,14])
                IF mtipo_nota = 'C'
                                     //  1      2       3         4       5       6          7           8                 9              10           11           12          13     14           15             16            17               18            19      20          21           22         23      24       25             26       27        28      29       30      31           32             33              34             35         36       37          38                 39                40              41
                        AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,cons_merc[1,14],cons_merc[1,17],cons_merc[1,21],mdesconto,cons_merc[1,45],micm_f,misento,cons_merc[1,23],cons_merc[1,26],cons_merc[1,62],cons_merc[1,16],mval_venda,micm,STRZERO(mcod_merc,5),0,cons_merc[1,66],mipi,cons_merc[1,71],mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,cons_merc[1,49],cons_merc[1,44],cons_merc[1,72],msittrib,mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],mipi,cons_merc[1,111]})
                ELSE    //IF m_set[1,17] = 'S'
                        IF mcod_nataux = '6.915' .OR. mcod_nataux = '5.915'
                                AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,cons_merc[1,14],cons_merc[1,17],cons_merc[1,21],mdesconto,cons_merc[1,45],micm_f,misento,cons_merc[1,23],cons_merc[1,26],cons_merc[1,62],cons_merc[1,16],mval_venda,micm,STRZERO(mcod_merc,5),0,cons_merc[1,66],mipi,cons_merc[1,71],mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,cons_merc[1,49],cons_merc[1,44],cons_merc[1,72],msittrib,mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],mipi,cons_merc[1,111]})
                        ELSEIF micm_sub > 0
                                AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,cons_merc[1,14],cons_merc[1,17],cons_merc[1,21],mdesconto,cons_merc[1,45],0,misento,cons_merc[1,23],cons_merc[1,26],cons_merc[1,62],cons_merc[1,16],mval_venda,micm,STRZERO(mcod_merc,5),micm_sub,cons_merc[1,66],mipi,cons_merc[1,71],mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,cons_merc[1,49],cons_merc[1,44],cons_merc[1,72],msittrib,mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],mipi,cons_merc[1,111]})
                        ELSEIF (misento = 'I' .OR. misento = 'N' .OR. misento = 'F') .AND. muf = m_set[1,19] .AND. cons_merc[1,71] = 'S'
                                AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,cons_merc[1,14],cons_merc[1,17],cons_merc[1,21],mdesconto,cons_merc[1,45],micm_f,misento,cons_merc[1,23],cons_merc[1,26],cons_merc[1,62],cons_merc[1,16],mval_venda,micm,STRZERO(mcod_merc,5),0,cons_merc[1,66],mipi,cons_merc[1,71],mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,cons_merc[1,49],cons_merc[1,44],cons_merc[1,72],msittrib,mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],mipi,cons_merc[1,111]})
                        ELSEIF (misento = 'I' .OR. misento = 'N' .OR. misento = 'F') .AND. ver_serie() = '141206' .AND. muf <> 'BA'
                                AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,cons_merc[1,14],cons_merc[1,17],cons_merc[1,21],mdesconto,cons_merc[1,45],micm_f,misento,cons_merc[1,23],cons_merc[1,26],cons_merc[1,62],cons_merc[1,16],mval_venda,micm,STRZERO(mcod_merc,5),0,cons_merc[1,66],mipi,cons_merc[1,71],mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,cons_merc[1,49],cons_merc[1,44],cons_merc[1,72],msittrib,mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],mipi,cons_merc[1,111]})
                        ELSEIF (misento = 'I' .OR. misento = 'N' .OR. misento = 'F')
                                AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,cons_merc[1,14],cons_merc[1,17],cons_merc[1,21],mdesconto,cons_merc[1,45],micm_f,misento,cons_merc[1,23],cons_merc[1,26],cons_merc[1,62],cons_merc[1,16],mval_venda,micm,STRZERO(mcod_merc,5),0,cons_merc[1,66],mipi,cons_merc[1,71],mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,cons_merc[1,49],cons_merc[1,44],cons_merc[1,72],msittrib,mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],mipi,cons_merc[1,111]})
                        //ELSEIF muf <> m_set[1,19] .AND. EMPTY(cons_merc[1,67])
                        //        AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,cons_merc[1,14],cons_merc[1,17],cons_merc[1,21],mdesconto,cons_merc[1,45],micm_f,misento,cons_merc[1,23],cons_merc[1,26],cons_merc[1,62],cons_merc[1,16],mval_venda,micm,STRZERO(mcod_merc,5),0,cons_merc[1,66],mipi,cons_merc[1,71],mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,cons_merc[1,49],cons_merc[1,44],cons_merc[1,72],msittrib})
                        //        LOOP
                        ELSEIF mdif_icm > 0
                                IF micm_f > 0 .AND. muf <> 'BA'
                                        AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,cons_merc[1,14],cons_merc[1,17],cons_merc[1,21],mdesconto,cons_merc[1,45],0.075,misento,cons_merc[1,23],cons_merc[1,26],cons_merc[1,62],cons_merc[1,16],mval_venda,micm,STRZERO(mcod_merc,5),0,cons_merc[1,66],mipi,cons_merc[1,71],mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,cons_merc[1,49],cons_merc[1,44],cons_merc[1,72],msittrib,mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],mipi,cons_merc[1,111]})
                                ELSE
                                        AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,cons_merc[1,14],cons_merc[1,17],cons_merc[1,21],mdesconto,cons_merc[1,45],micm_f,misento,cons_merc[1,23],cons_merc[1,26],cons_merc[1,62],cons_merc[1,16],mval_venda,micm,STRZERO(mcod_merc,5),0,cons_merc[1,66],mipi,cons_merc[1,71],mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,cons_merc[1,49],cons_merc[1,44],cons_merc[1,72],msittrib,mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],mipi,cons_merc[1,111]})
                                ENDIF
                        ELSE
                                AADD(m_normal,{mgrupo,mmerc,mcod_forn,mfabrica,mquantd,mpr_venda,mval_venda,cons_merc[1,14],cons_merc[1,17],cons_merc[1,21],mdesconto,cons_merc[1,45],micm_f,misento,cons_merc[1,23],cons_merc[1,26],cons_merc[1,62],cons_merc[1,16],mval_venda,micm,STRZERO(mcod_merc,5),0,cons_merc[1,66],mipi,cons_merc[1,71],mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,cons_merc[1,49],cons_merc[1,44],cons_merc[1,72],msittrib,mcod_nataux,mcredito,cons_merc[1,105],cons_merc[1,106],mipi,cons_merc[1,111]})
                        ENDIF
                ENDIF
                //WVW_PBEnable( NIL, mpb_fecha, .T. )
        ENDDO
ENDDO
RETURN NIL
*********************** FIM ***************************

