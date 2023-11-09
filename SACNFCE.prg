#define  ETX CHR(3)
#define  CR  CHR(13)
#define  LF  CHR(10)
#define ENT_TXT  'ENTNFE.TXT'
#define SAI_TXT  'SAINFE.TXT'
#define TMP_TXT  'ENTNFE.TMP'
//Static sENDER   := ''  ,;
/*
Static SEM_ERRO := .F. ,;
sSECHORA := 0   ,;
sRETHORA := ''  ,;
sSECCOO  := 0   ,;
sNUMCUPOM:= ''  ,;
sSECEST  := 0   ,;
sESTADO  := ''  ,;
sMODELO  := ''
*/
#ifdef __XHARBOUR__
   Static sSOCKET
#ENDIF
#include "sqlrdd.ch"
#include "firebird.ch"     // Needed if you plan to use native connection to Firebird
#include "msg.ch"
//#include "EasyTEF.ch"
#include "ecf.ch"
********************************
* SOLICITAR NFCe
*******************************
MEMVAR mtip_term,nivel_acess,cod_operado,getlist,inicio_protocolo,fim_protocolo_driver,;
       prepara_string,tamanho_de_retorno,mdata_sis,string_devolvida

FUNCTION SACNFCE(m_mtr,msc)        // CODIGO DE BARRA
*****************************
LOCAL MPRG:="SACNFCE",;
      mp_venda,msele,morde,mcont,f,mvar,mtelap,mtot_ipi,mperc,mtelaobs,;
      mdocum,mcomissao := 0,mqtd,mpreco:=0,mtot_,qtd:=0,nBota,;
      m_data:={},npesquisa,mcert_venc:='',m_cfop:='     ',m_vbc := 0,m_vicms   := 0

PRIVATE nErr, nPos,cComm, apCode,m_param:={},aret:={},mcons_ped := {},cons_merc:={},mecf_cpf:='',mnum_pv:=0,;
        m_matriz:={},m_codigo:={},m_merc:={},m_Cbarra:={},i,opcao,;
        mcod_merc,mquantd:=1,mdesconto:=0,mvlr_fat,mtot_ped,mmerc,mpr_venda,;
        li,lb,cb,mnome_ven,lci:=15,lba:=49,cba:=120,tela,mautoriz,mlibera,;
        mcod_bc,mcont_item,mobs1,mobs2,mobs3,orcamento,sovenda,mvarejo,tela_ant,f4,;
        mprz,mnum_ped:=0,menvelope,mcod_cli:=0,mnome_cli,mponto,m_flag,ali,no,mcod_vend:=1,;
        msubtotal:=0,mtot_custo:=0,mcod_aux,mproducao,mdocumento:=SPACE(8),mnum_ecf:=SPACE(8),mtot_nota:=0,;
        mabrir_cp:="",mretorno:=" ",mnum_aux:="",cnumpdv:=" ",cnumcupom:=" ",;
        cont_itens:=0,mcod_fab,mfabrica,mdesc_cart,mobs_prod:=SPACE(40),mobs_prod1:=SPACE(40),mcod_cond:=0,mpago:=' ',;
        mtot_limite:=0,mlim_venc:=0,mlim_avenc:=0,msld_aux:=' ',mcond_veze:=SPACE(3),mprz,m_dia[15],m_vlr[15],;
        mcons_tabpg,mtipo_preco,mcomi_tab,cons_cli:={},;
        mvalor_trans := ' ',mnome_rede := ' ',mnum_transacao := ' ',mfinal_transacao := ' ',mtot_bruto:=0,mtot_desc:=0,;
        mcliente := SPACE(40),mcpf := SPACE(11),mcgc := SPACE(14),minsc := SPACE(14),mnum_item:=0,mnum_ccf:='',;
        mtot_imposto:=0,msem_cx := 0,m_nota:={},mchassis:='',cons_cest := {},mmodelo:='65',mserie_not:='1',mver_acbr:= '',;
        mtipo_emi:=1,mpercentual := 0,mcrt:=''

//lci:=15,cci:=0,lba:=49,cba:=120

IF m_set[1,126] = 'S'
        mcrt='1'
ELSE
        mcrt='0'
ENDIF
SET KEY -4 TO f5_qtd()                    // INFORMA QUANTIDADE PRODUTO NO PRG SACROT
SET KEY -2 TO C_PROD()                    // CONSULTAR PRODUTO F3
SET KEY -9 TO fecha_nfce("1")             // neste mesmo PRG. <F10>Tecla
//SET KEY 274 TO sac23ecf2()             // neste mesmo PRG. <ALT + E>Tecla
SET KEY -40 TO f7_cli("*")             // CADASTRO DE CLIENTES <F11>tecla
//SET KEY 274 TO sem_cx()             // neste mesmo PRG. <ALT + E>Tecla
*---------------------------------------------
mtip_term := m_cfg[2]
IF ! AbriArq("insopera","sen");RETURN NIL;ENDIF
IF ! AbriArq("sacmerc","merc");RETURN NIL;ENDIF
IF ! AbriArq("sactabme","tabme");RETURN NIL;ENDIF
*---------------------------------------------
setcor(1)
m_flag := 0
IF msc # NIL
        msem_cx := 1
        IF ! ver_nivel(mprg,'VENDA ECF COM ALT+E','125',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
ENDIF
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
/*
lOK1 := lOk2 := .F.
nid1 := wvw_cxcreate(,10,01,10,20,"Teste 1",,{|| Testa1() },, .F. )
nid2 := wvw_cxcreate(,12,01,12,20,"Texte 2",,{|| Testa2() },, .F. )
WVW_CXEnable( , nid1, .T. )
WVW_CXEnable( , nid2, .T. )
inkey(0)
inkey(0)
//fecha_tela()
*/
IF AT('.',m_set[1,97]) > 0
        qtd := LEN(SUBSTR(m_set[1,97],AT('.',m_set[1,97])+1))
ENDIF
m_nota:={}

***INICIA O ACBRMONITOR***

IF ! inicia_acbr(1)
        RETURN NIL
ENDIF

mcert_venc:=ALLTRIM(SUBSTR(IBR_comando('NFe.CertificadoDataVencimento',,30),4))
IF CTOD(mcert_venc)- mdata_sis < 30
        atencao('Falta '+STRZERO(CTOD(mcert_venc)- mdata_sis,5)+' dias para o vencimento'+m_qp+'Data de Vencimento: '+mcert_venc)
ENDIF
op_tela(00,00,52,120,memp_resa+'  '+mversao+'  *** NOTA FISCAL CONSUMIDOR E L E T R O N I C A   VERSAO: '+mver_acbr+'***'+SPACE(20)+'Validade do Certificador: '+mcert_venc,1,1)
setcor(4)
limpa(00,00,50,120)
setcor(1)
botao(0,0,50,120)
IF m_indiv[1,26] = 'T'
        IF msem_cx = 1
                DrawLabel(3 ,24,'CAIXA',210,,'times',170,80)
                DrawLabel(33,24,'LIVRE  ',210,,'times',170,80)
        ELSE
                DrawLabel(3 ,24,'CAIXA',,,'times',170,80)
                DrawLabel(33,24,'LIVRE  ',,,'times',170,80)
        ENDIF
ELSE
        IF msem_cx = 1
                DrawLabel(3,14,'TERMINAL',210,,'times',170,80)
                DrawLabel(33,24,' LIVRE  ',210,,'times',170,80)
        ELSE
                DrawLabel(3,14,'TERMINAL',,,'times',170,80)
                DrawLabel(33,24,' LIVRE  ',,,'times',170,80)
        ENDIF
ENDIF
WHILE .T.
        //setcor(1)
        IF ! Veri_Transacao()
                RETURN(.f.)
        ENDIF
        exibi_prg(mprg)
        //mpago:=' '

        /*
        mensagem('Montando a tela de Pedidos...')

        botao(12,90,17,115)
        botao(21,90,26,115)
        botao(30,90,35,115)
        botao(39,90,44,115)
        DrawLabel(12,92,'Codigo',,,'Arial Black',25,10)
        DrawLabel(21,92,'Quantidade',,,'Arial Black',25,10)
        DrawLabel(30,92,'Valor Unitario',,,'Arial Black',25,10)
        DrawLabel(39,92,'Valor Total',,,'Arial Black',25,10)


        WVW_PBEnable( , nBota, .F. )
        DrawLabel(47,05,'Digite <X> mais a quatidade ou <F5>Informa Quatidade',210,, 'Arial',15,8)
        DrawLabel(47,45,'Tecle <ESC>Sair/Cancelar',210,, 'Arial',15,8)
        DrawLabel(47,75,'<F4> Abrir Gaveta',210,, 'Arial',15,8)
        DrawLabel(49,05,'Digite <PD>Recuperar Pedido',210,, 'Arial',15,8)
        DrawLabel(49,45,'<F3> Consultar Produtos',210,, 'Arial',15,8)
        DrawLabel(49,75,'Digite <ALT> no Codigo p/alterar o Cupom',210,, 'Arial',15,8)

                //<F8>Canc.Item - <F10>Fechamento - <PV> Pre_venda - <F4> Abrir Gaveta - <F3> Consulta Produto - <ESC>Retornar")

        botao(00,01,02,118)
        DrawLabel(0,03,'Operador: ',,, 'Arial Black',20,10)
        //DrawLabel(0,50,'Cliente: '+STR(cli->cod_cli,5)+'-'+cli->razao,,, 'Arial Black',20,10)
        //DrawLabel(0,50,'Cliente: '+STR(cli->cod_cli,5)+'-'+cli->razao,,, 'Arial Black',20,10)

        botao(lci-3,01,lba-4,41)
        DrawLabel(12,01,'No.Cupom: '+mdocumento+'  -  Caixa: '+mnum_ecf,,, 'Arial Black',20,10)

        botao(31,50,36,80,,,'*')
        DrawLabel(31,52,'TOTAL DAS VENDAS',,,'arial black',25,10)
        DrawLabel(33,52,ALLTRIM(TRANSFORM(msubtotal,ALLTRIM('@E '+m_set[1,98]))),210,, 'arial black',45,15)

        WvW_PBSetFont( NIL, 'Arial Black', 25, 7,)
        nBota := wvw_pbCreate(NIL,42,48,45,63,'[F10] Fechar Cupom',,{||fecha_nfce("1")},,1,.F.)
        WVW_PBEnable( NIL, nBota, .F. )
        npesquisa := wvw_pbCreate(NIL,42,65,45,80,'Pesquisar',,{||menu_cons()},,1,.F.)
        WVW_PBEnable( NIL, npesquisa, .T. )
*/
        IF m_flag = 0
                //botao(03,01,08,119)
                op_tela(10,10,12,70,'COMUNICACAO COM O ACBRMONITORPLUS',,1)
                DEVPOS(01,01);DEVOUT('Verificando STATUS DO SERVICO NFe Aguarde um momento....')
                IF ! EMPTY(m_indiv[1,43])
                        IF ! IBR_OK(IBR_comando('NFE.STATUSSERVICO',,20,,1))
                                //IBR_OK(IBR_comando('NFE.STATUSSERVICO',,30))
                                atencao(IBR_OK(IBR_comando('NFE.STATUSSERVICO',,30)))
                                wvw_lclosewindow()
                                wvw_lclosewindow();RETURN NIL
                                //mtipo_emi := 9
                        ELSE
                                IBR_comando('NFe.SetFormaEmissao',{1},,.T.)
                                mtipo_emi := 1
                        ENDIF
                ELSE
                        atencao('Verificar o caminho da NFCE...')
                        wvw_lclosewindow()
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                wvw_lclosewindow()
                IF m_set[1,80] = "S"
                        IF ! alt_sen("1",1)
                                wvw_lclosewindow()
                                SET KEY -9 TO
                                RELEASE ALL
                                RETURN NIL
                        ENDIF
                        mnome_ven := SPACE(30)
                        ver_ven(cod_operado)
                        mnome_ven := sen->snome
                ELSE
                        ver_ven(cod_operado)
                        mnome_ven := sen->snome
                        //atencao(" Operador:"+cod_operado+"-"+RTRIM(mnome_ven),1)
                ENDIF
                mproducao := mabrir_cp := " "
                mcod_vend := VAL(cod_operado)
                mtot_custo := m_flag := msubtotal := mtot_ipi  := mcod_cli := mnum_ped := mnum_pv := mtot_bruto := 0
                //IF msld <> NIL
                //        msld_aux := msld
                //ENDIF
                mnome_ven := SPACE(30)
                // VENDAS A VAREJO OU ATACADO
                mvarejo := 1
                // PERCENTUAL DE DESCONTO ANTES DO PEDIDO
                mautoriz := SPACE(3)
                m_cfop:='     '
                ASIZE(m_merc,0)
                ASIZE(m_matriz,0)
                ASIZE(m_codigo,0)
                ASIZE(m_Cbarra,0)
                IF m_set[1,5] = "S"
                        mvarejo := 1
                        op_tela(15,24,17,56," Tipo de Venda ")
                        setcor(10)
                        @ 01,01 PROMPT " Venda Normal "
                        @ 01,15 PROMPT " Venda Especial "
                        MENU TO mvarejo
                        setcor(1)
                        wvw_lclosewindow()
                        IF LASTKEY() = 27
                                wvw_lclosewindow()
                                SET KEY -9 TO
                                RETURN NIL
                        ENDIF
                ENDIF
                IF m_set[1,46] = 'S'
                        mcond_veze := '00 '
                        i:=0
                        FOR i = 1 TO 15
                                m_dia[i]:=m_vlr[i]:=0
                        NEXT
                        op_tela(20,20,26,89,' CONDICOES DE PAGAMENTO ')
                        WHILE .T.
                                mensagem('Escolha a condicao de pagamento...')
                                DEVPOS(01,00);DEVOUT('Codigo Condicao Pagto:')
                                DEVPOS(02,00);DEVOUT('Condicao de Pagamento:')
                                DEVPOS(03,00);DEVOUT('Quantidades de Dias..:')
                                DEVPOS(04,00);DEVOUT('Media Dias...........:')
                                DEVPOS(05,00);DEVOUT('Percentual...........:')
                                mquantd := 1
                                mperc := mcomi_tab := mprz := mcod_cond := 0
                                WVW_DrawBoxGet(,21,23,3)
                                @ 01,23 GET mcod_cond PICT '999' VALID IF(ver_serie() = '141410' .AND. EMPTY(mcod_cond),.F.,ver_cond(mcod_cond,01,27))
                                READ
                                IF LASTKEY() = 27
                                        EXIT
                                ENDIF
                                IF ! EMPTY(mcod_cond)
                                        mcons_tabpg:=' '
                                        cons_tabpg := {}
                                        sr_getconnection():exec("SELECT * FROM sactabpg WHERE codigo = "+sr_cdbvalue(STRZERO(mcod_cond,3)),,.t.,@cons_tabpg)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        //setcor(3)
                                        WVW_DrawBoxGet(,02,23,4)
                                        DEVPOS(01,27);DEVOUT(cons_tabpg[1,4])
                                        DEVPOS(02,23);DEVOUTPICT(cons_tabpg[1,6],'@@R 9-99')
                                        mcons_tabpg := cons_tabpg[1,6]
                                        mtipo_preco := cons_tabpg[1,24]
                                        //setcor(1)
                                        mcomi_tab := cons_tabpg[1,22]
                                        m_dia[1]   := cons_tabpg[1,7]
                                        m_dia[2]   := cons_tabpg[1,8]
                                        m_dia[3]   := cons_tabpg[1,9]
                                        m_dia[4]   := cons_tabpg[1,10]
                                        m_dia[5]   := cons_tabpg[1,11]
                                        m_dia[6]   := cons_tabpg[1,12]
                                        m_dia[7]   := cons_tabpg[1,13]
                                        m_dia[8]   := cons_tabpg[1,14]
                                        m_dia[9]   := cons_tabpg[1,15]
                                        m_dia[10]  := cons_tabpg[1,16]
                                        m_dia[11]  := cons_tabpg[1,17]
                                        m_dia[12]  := cons_tabpg[1,18]
                                        m_dia[13]  := cons_tabpg[1,19]
                                        m_dia[14]  := cons_tabpg[1,20]
                                        m_dia[15]  := cons_tabpg[1,21]
                                        @ 03,23 GET m_dia[1] PICT '999'
                                        @ 03,27 GET m_dia[2] PICT '999' WHEN ! EMPTY(m_dia[1]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 1
                                        @ 03,31 GET m_dia[3] PICT '999' WHEN ! EMPTY(m_dia[2]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 2
                                        @ 03,35 GET m_dia[4] PICT '999' WHEN ! EMPTY(m_dia[3]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 3
                                        @ 03,39 GET m_dia[5] PICT '999' WHEN ! EMPTY(m_dia[4]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 4
                                        @ 03,43 GET m_dia[6] PICT '999' WHEN ! EMPTY(m_dia[5]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 5
                                        @ 03,47 GET m_dia[7] PICT '999' WHEN ! EMPTY(m_dia[6]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 6
                                        @ 03,51 GET m_dia[8] PICT '999' WHEN ! EMPTY(m_dia[7]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 7
                                        @ 03,55 GET m_dia[9] PICT '999' WHEN ! EMPTY(m_dia[8]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 8
                                        @ 03,59 GET m_dia[10] PICT '999' WHEN ! EMPTY(m_dia[9]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 9
                                        @ 03,63 GET m_dia[11] PICT '999' WHEN ! EMPTY(m_dia[10]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 10
                                        @ 03,67 GET m_dia[12] PICT '999' WHEN ! EMPTY(m_dia[11]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 11
                                        @ 03,71 GET m_dia[13] PICT '999' WHEN ! EMPTY(m_dia[12]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 12
                                        @ 03,75 GET m_dia[14] PICT '999' WHEN ! EMPTY(m_dia[13]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 13
                                        @ 03,79 GET m_dia[15] PICT '999' WHEN ! EMPTY(m_dia[14]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 14
                                        READ
                                        IF LASTKEY() = 27
                                                LOOP
                                        ENDIF
                                        IF m_dia[1] > cons_tabpg[1,7] .OR. m_dia[2] > cons_tabpg[1,8] .OR. m_dia[3] > cons_tabpg[1,9] .OR. m_dia[4] > cons_tabpg[1,10] .OR. m_dia[5] > cons_tabpg[1,11];
                                           .OR. m_dia[6] > cons_tabpg[1,12] .OR. m_dia[7] > cons_tabpg[1,13] .OR. m_dia[8] > cons_tabpg[1,14] .OR. m_dia[9] > cons_tabpg[1,15] .OR. m_dia[10] > cons_tabpg[1,16];
                                           .OR. m_dia[11] > cons_tabpg[1,17] .OR. m_dia[12] > cons_tabpg[1,18] .OR. m_dia[13] > cons_tabpg[1,19] .OR. m_dia[14] > cons_tabpg[1,20] .OR. m_dia[15] > cons_tabpg[1,21]
                                                IF ! aut_sen('Alteracao de Prazo na Tabela: '+STRZERO(mcod_cond,3)+' - Autorizacao:','LIB_PRZ',,mcod_cli)
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        mcond_veze := cons_tabpg[1,6]
                                        mprz := m_dia[1]
                                        mperc := cons_tabpg[1,5]
                                ELSE
                                        mcons_tabpg := ' '
                                        @ 02,23 GET mcond_veze PICT '@@R 9-99' VALID IF(EMPTY(mcond_veze),.F.,IF(VAL(SUBSTR(mcond_veze,1,1))>1,.F.,.T.))
                                        READ
                                        //IF(VAL(SUBSTR(mcond_veze,2,2)) >= 1,m_dia[1]:=SUBSTR(cons_cli[1,40],1,2)+' ',.T.)
                                        IF LASTKEY() = 27
                                                LOOP
                                        ENDIF
                                        IF VAL(SUBSTR(mcond_veze,2,2)) >= 1
                                                //m_dia[1]:=VAL(SUBSTR(cons_cli[1,40],1,2))
                                                //m_dia[2]:=VAL(SUBSTR(cons_cli[1,40],3,2))
                                                //m_dia[3]:=VAL(SUBSTR(cons_cli[1,40],5,2))
                                        ENDIF
                                        @ 03,23 GET m_dia[1] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 1
                                        @ 03,27 GET m_dia[2] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 2 VALID ! EMPTY(m_dia[2])
                                        @ 03,31 GET m_dia[3] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 3 VALID ! EMPTY(m_dia[3])
                                        @ 03,35 GET m_dia[4] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 4 VALID ! EMPTY(m_dia[4])
                                        @ 03,39 GET m_dia[5] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 5 VALID ! EMPTY(m_dia[5])
                                        @ 03,43 GET m_dia[6] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 6 VALID ! EMPTY(m_dia[6])
                                        @ 03,47 GET m_dia[7] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 7 VALID ! EMPTY(m_dia[7])
                                        @ 03,51 GET m_dia[8] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 8 VALID ! EMPTY(m_dia[8])
                                        @ 03,55 GET m_dia[9] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 9 VALID ! EMPTY(m_dia[9])
                                        @ 03,59 GET m_dia[10] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 10 VALID ! EMPTY(m_dia[10])
                                        @ 03,63 GET m_dia[11] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 11 VALID ! EMPTY(m_dia[11])
                                        @ 03,67 GET m_dia[12] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 12 VALID ! EMPTY(m_dia[12])
                                        @ 03,71 GET m_dia[13] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 13 VALID ! EMPTY(m_dia[13])
                                        @ 03,75 GET m_dia[14] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 14 VALID ! EMPTY(m_dia[14])
                                        @ 03,79 GET m_dia[15] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 15 VALID ! EMPTY(m_dia[15])
                                        READ
                                        IF LASTKEY() = 27
                                                LOOP
                                        ENDIF
                                        mqtd_dias := m_dia[1]+m_dia[2]+m_dia[3]+m_dia[4]+m_dia[5]+m_dia[6]+m_dia[7]+m_dia[8]+m_dia[9]+m_dia[10]+m_dia[11]+m_dia[12]+m_dia[13]+m_dia[14]+m_dia[15]
                                        mqtd_prz := 1
                                        IF(! EMPTY(m_dia[2]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[3]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[4]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[5]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[6]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[7]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[8]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[9]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[10]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[11]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[12]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[13]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[14]),mqtd_prz++,0)
                                        IF(! EMPTY(m_dia[15]),mqtd_prz++,0)
                                        mprz := mqtd_dias / mqtd_prz
                                        IF mprz = 0
                                                mperc := 0
                                        ELSEIF mprz >= m_set[1,71] .AND. mprz < m_set[1,73]
                                                mperc := m_set[1,72]
                                        ELSEIF (mprz >= m_set[1,73] .AND. mprz < m_set[1,75]) .OR. (mprz >= m_set[1,73] .AND. EMPTY(m_set[1,75]))
                                                mperc := m_set[1,74]
                                        ELSEIF (mprz >= m_set[1,75] .AND. mprz < m_set[1,77]) .OR. (mprz >= m_set[1,75] .AND. EMPTY(m_set[1,77]))
                                                mperc := m_set[1,76]
                                        ELSE
                                                mperc := m_set[1,78]
                                        ENDIF
                                        IF mprz > m_set[1,49] .AND. ! aut_sen('Prazo Permitido '+TRANSFORM(m_set[1,49],'999')+' Solicitado '+STRZERO(mprz,3)+' - Autorizacao:','LIB_PRZ',,mcod_cli)
                                                LOOP
                                        ENDIF
                                ENDIF
                                //setcor(3,'*')
                                DEVPOS(02,23);DEVOUTPICT(mcond_veze,'@@R 9-99')
                                DEVPOS(04,23);DEVOUT(TRANSFORM(mprz,'9999'))
                                DEVPOS(05,23);DEVOUT(TRANSFORM(mperc,'999.99'))
                                //setcor(1)
                                opcao := op_simnao('S','Confirma o percentual:')
                                IF LASTKEY() = 27 .OR. opcao = 'N'
                                        LOOP
                                ENDIF
                                EXIT
                        ENDDO
                        wvw_lclosewindow()
                ENDIF
                mcod_cli := IF(EMPTY(m_set[1,84]),1,m_set[1,84])
                mnome_cli := SPACE(40)
                mcod_vend := VAL(cod_operado)
                m_flag := 1
                mquantd=1
                mcont_item := cont_itens := 0
                m_flag := 1
                //wvw_lclosewindow()
        ENDIF
        //atencao('ok')
        SETCOLOR(1)
        //DEVPOS(0,03);DEVOUT('')
        botao(00,01,02,118)
        DrawLabel(0,3,'Operador: '+cod_operado,,, 'Arial Black',20,10)
        IF mtipo_emi # 1
                DrawLabel(0,60,'CONTIGENCIA',,, 'Arial Black',30,15)
        ENDIF
        WHILE .T.
                limpa(00,00,50,120)
                botao(12,50,27,80)
                IF FILE(ALLTRIM(m_indiv[1,3])+'HTIfirma.jpg')
                	WVW_DrawImage( ,12,50,27,80,ALLTRIM(m_indiv[1,3])+'HTIFIRMA.JPG',.T.,.F.)
                ENDIF

                botao(12,90,17,115)
                botao(21,90,26,115)
                botao(30,90,35,115)
                botao(39,90,44,115)
                DrawLabel(12,92,'Codigo',,,'Arial Black',25,10)
                DrawLabel(21,92,'Quantidade',,,'Arial Black',25,10)
                DrawLabel(30,92,'Valor Unitario',,,'Arial Black',25,10)
                DrawLabel(39,92,'Valor Total',,,'Arial Black',25,10)


                botao(47,01,50,118)
                WVW_PBEnable( , nBota, .F. )
                DrawLabel(47,05,'Digite <X> mais a quatidade ou <F5>Informa Quatidade',210,, 'Arial',15,8)
                DrawLabel(47,45,'Tecle <ESC>Sair/Cancelar',210,, 'Arial',15,8)
                DrawLabel(47,75,'<F4> Abrir Gaveta',210,, 'Arial',15,8)
                DrawLabel(49,05,'Digite <PD>Recuperar Pedido',210,, 'Arial',15,8)
                DrawLabel(49,45,'<F3> Consultar Produtos',210,, 'Arial',15,8)
                DrawLabel(49,75,'Digite <ALT> no Codigo p/alterar o Cupom',210,, 'Arial',15,8)

                //<F8>Canc.Item - <F10>Fechamento - <PV> Pre_venda - <F4> Abrir Gaveta - <F3> Consulta Produto - <ESC>Retornar")

                botao(00,01,02,118)
                DrawLabel(0,03,'Operador: '+cod_operado,,, 'Arial Black',20,10)
                //DrawLabel(0,50,'Cliente: '+STR(cli->cod_cli,5)+'-'+cli->razao,,, 'Arial Black',20,10)
                //DrawLabel(0,50,'Cliente: '+STR(cli->cod_cli,5)+'-'+cli->razao,,, 'Arial Black',20,10)

                botao(lci-3,01,lba-4,41)
                DrawLabel(12,01,'No.Cupom: '+mdocumento+'  -  Caixa: '+mnum_ecf,,, 'Arial Black',20,10)

                botao(31,50,36,80,,,'*')
                DrawLabel(31,52,'TOTAL DAS VENDAS',,,'arial black',25,10)
                DrawLabel(33,52,ALLTRIM(TRANSFORM(msubtotal,ALLTRIM('@E '+m_set[1,98]))),210,, 'arial black',45,15)
                setcor(1)
                IF LEN(m_codigo) = 0
                        WVW_PBEnable( NIL, nBota, .F. )
                        botao(03,01,09,118)
                        IF m_indiv[1,26] = 'T'
                                IF msem_cx = 1
                                        DrawLabel(3,45,'CAIXA LIVRE',210,,'times',65,30)
                                ELSE
                                        DrawLabel(3,45,'CAIXA LIVRE',,,'times',65,30)
                                ENDIF
                        ELSE
                                IF msem_cx = 1
                                        DrawLabel(3,45,'TERMINAL LIVRE',210,,'times',65,30)
                                ELSE
                                        DrawLabel(3,30,'TERMINAL LIVRE',,,'times',65,30)
                                ENDIF
                        ENDIF
                ELSE
                        botao(03,01,09,118)
                        WVW_PBEnable( NIL, nBota, .T. )
                ENDIF
                IF m_flag = 0
                        SET KEY -9 TO
                        RELEASE ALL
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                mlibera := ' '
                i := msubtotal := mtot_ipi  := mtot_custo := mtot_ped := f := mtot_desc := mtot_bruto := mtot_imposto := 0
                //SETCOLOR('n/w,n/w')
                SETCOLOR(3)
                botao(lci-3,01,lba-4,42)
                DrawLabel(12,02,'No.Cupom: '+mdocumento+'  -  Caixa: '+mnum_ecf,,, 'Arial Black',20,10)
                mqtd_lin := 0
                mitem := 1
                IF LEN(m_codigo) > 20
                        mqtd_lin := LEN(m_codigo) - 10
                ENDIF
                f++
                IF EMPTY(m_cfg[6])
                        DrawLabel(14,2,'Item  Cod.  Descricao           Quantd.   Vlr.Unit.   Vlr.Total',,m_color[8],'lucida console',14,7)
                ELSE
                        DrawLabel(14,2,'Item  Cod.  Descricao           Quantd.   Vlr.Unit.   Vlr.Total',,m_color[8],'lucida console',12,5)
                ENDIF
                i:=0
                FOR i = 1 TO LEN(m_codigo)
                        IF m_nota[i,5] = 0
                                LOOP
                        ENDIF
                        mlibera := ' '
                        IF mqtd_lin < i
                                @ lci+f,01 SAY ''
                                IF EMPTY(m_cfg[6])
                                        DrawLabel(14+f,2,' '+ALLTRIM(STR(i))+'  '+m_codigo[i]+' '+SUBSTR(m_nota[i,2],1,18)+' '+TRANSFORM(m_nota[i,5],ALLTRIM(m_set[1,99]))+' '+TRANSFORM(m_nota[i,7],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(m_nota[i,5] * m_nota[i,7],ALLTRIM('@E '+m_set[1,98])),,, 'lucida console',14,7)
                                ELSE
                                        DrawLabel(14+f,2,' '+ALLTRIM(STR(i))+'  '+m_codigo[i]+' '+SUBSTR(m_nota[i,2],1,18)+' '+TRANSFORM(m_nota[i,5],ALLTRIM(m_set[1,99]))+' '+TRANSFORM(m_nota[i,7],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(m_nota[i,5] * m_nota[i,7],ALLTRIM('@E '+m_set[1,98])),,, 'lucida console',12,5)
                                ENDIF
                                f++
                        ENDIF
                        msubtotal := msubtotal + iat((m_nota[i,5] * m_nota[i,7]),m_set[1,103])
                NEXT
                tela_ := {}
                tela_ := WVW_SAVESCREEN(,lci,55,lba,cba-1)
                /*
                IF (mtot_desc - msubtotal) > 0
                        DEVPOS(36,14);DEVOUT(TRANSFORM(((mtot_desc - msubtotal)/mtot_desc)*100,'99.99'))
                        DEVPOS(36,26);DEVOUT(TRANSFORM((mtot_desc - msubtotal),'99,999.99'))
                        botao(44,01,49,53,,,'*')
                        WVW_DrawLabel(,45,02,'Economia R$:'+TRANSFORM(mtot_desc - msubtotal,'@E 99,999.99'),,,210,, 'arial black',40,17,,,,,)

                ELSE
                        DEVPOS(36,14);DEVOUT(TRANSFORM(0,'99.99'))
                        DEVPOS(36,26);DEVOUT(TRANSFORM(0,'99,999.99'))
                ENDIF
                */
                //setcor(1)
                botao(31,50,36,80,,,'*')
                DrawLabel(31,52,'TOTAL DAS VENDAS',,,'arial black',25,10)
                DrawLabel(33,52,ALLTRIM(TRANSFORM(msubtotal,ALLTRIM('@E '+m_set[1,98]))),210,, 'arial black',45,15)
                mmerc := SPACE(40)
                mcod_bc := SPACE(14)
                IF(mquantd > 0,mquantd,mquantd=1)
                mcod_merc := mdesconto := mvlr_fat := 0
                mobs1 := mobs2 := SPACE(77)
                menvelope := SPACE(10)
                f4 := " "
                // ATIVA O FECHAMENTO DO PEDIDO
                SET KEY -9 TO fecha_nfce("1")       // neste mesmo PRG. <F10>Tecla
                //setcor(1)
                //mensagem("Tecle: <X mais a qtd.>Informa Qtd. - <F8>Canc.Item - <F10>Fechamento - <PV> Pre_venda - <F4> Abrir Gaveta - <F3> Consulta Produto - <ESC>Retornar")
                WVW_DrawBoxGet(,15,92,14)
                @ 15,92 GET mcod_bc PICT '@!'
                READ
                IF SUBSTR(mcod_bc,1,1) = 'X' .AND. VAL(SUBSTR(STRTRAN(mcod_bc,',','.'),2)) > 0
                        mquantd := VAL(SUBSTR(STRTRAN(mcod_bc,',','.'),2))
                        LOOP
                ENDIF
                IF SUBSTR(mcod_bc,1,1) = '*'
                        mcod_merc := IF(m_set[1,93] <> 'A',f4_merc(,mcod_bc,STRZERO(mvarejo,1),mperc),f4_merc1(,mcod_bc,STRZERO(mvarejo,1),mperc))
                        cons_merc := {}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@cons_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_merc) = 0
                                atencao('Codigo da mercadoria nao cadastrado')
                                LOOP
                        ENDIF
                        mmerc := cons_merc[1,9]
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                IF mcod_bc = "FIM"
                        LOOP
                ENDIF
                IF mcod_bc = "ALT" .AND. LEN(mdocumento) > 0
                        alt_nfce()
                        //LOOP
                ENDIF
                IF LASTKEY() = 27 .OR. mcod_bc = "FIM"
                        IF ! EMPTY(m_codigo)              //IBR_CUPOM_ABERTO()
                                opcao := op_simnao("N","Deseja CANCELAR O CUPOM Agora:")
                                IF opcao = "S"
                                        IF ! aut_sen('Deseja CANCELAR este CUPOM: '+mdocumento+' - Senha de Liberacao','LIB_NFC',,0,,,STRZERO(mnum_ped,6))
                                                LOOP
                                        ENDIF

                                        **********
                                        SELE('merc');ORDSETFOCUS(1)
                                        **********
                                        SR_BEGINTRANSACTION()
                                        //atencao('CANCEL1')

                                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = 'C' WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                        /*
                                        i := 0
                                        FOR i = 1 TO LEN(m_codigo)
                                                IF EMPTY(m_codigo[i]) .OR. m_codigo[i] = NIL    //.OR. m_matriz[i,41] = 'OS'
                                                        LOOP
                                                ENDIF
                                                cons_merc := {}
                                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_codigo[i]),,.t.,@cons_merc)
                                                mlinha := cons_merc[1,2]+cons_merc[1,8]+cons_merc[1,9]+cons_merc[1,14]+STRZERO((iat(cons_merc[1,56] + m_matriz[i,1]))*1000,13)+STRZERO(iat(cons_merc[1,46])*100,14)+cons_merc[1,68]
                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(cons_merc[1,55] +  m_matriz[i,1])+" WHERE cod_merc = "+sr_cdbvalue(m_codigo[i]),,.f.)
                                                //IF msld = NIL .AND. EMPTY(mnum_ped) .AND. EMPTY(mnum_pv)
                                                IF EMPTY(mnum_ped) .AND. EMPTY(mnum_pv)
                                                                        sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(iat(cons_merc[1,56] +  m_matriz[i,1]))+",chv_cript = "+sr_cdbvalue(criptografia(mlinha,'C'))+" WHERE cod_merc = "+sr_cdbvalue(m_codigo[i]),,.f.)
                                                                        sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                                'processo,ent_sai,SR_DELETED )'+;
                                                                                                ' VALUES ('+;
                                                                                                sr_cdbvalue(DATE())+','+; //1
                                                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                                                sr_cdbvalue(TIME())+','+; //3
                                                                                                sr_cdbvalue(m_codigo[i])+','+; //4
                                                                                                sr_cdbvalue(m_matriz[i,1])+','+; //5
                                                                                                sr_cdbvalue(cons_merc[1,56])+','+; //6
                                                                                                sr_cdbvalue(cons_merc[1,56] + m_matriz[i,1])+','+; //7
                                                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                                                sr_cdbvalue('sac23nfce')+','+; //9
                                                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                                sr_cdbvalue('CANCELANDO CUPOM FISCAL')+','+; //11
                                                                                                sr_cdbvalue('E')+','+; //11
                                                                                                sr_cdbvalue(' ')+')',,.f.)

                                                ENDIF
                                        NEXT
                                        */
                                        sr_committransaction()
                                        sr_endtransaction()
                                        IF m_mtr # NIL
                                                m_mtr := NIL
                                        ENDIF
                                        *******
                                        SELE('merc');ORDSETFOCUS(1)
                                        **********
                                ELSE
                                        LOOP
                                ENDIF
                        ENDIF
                        SET KEY -2 TO
                        SET KEY -7 TO
                        m_codigo:={}
                        m_matriz:={}
                        wvw_lclosewindow()
                        **** apagando VARIAVEIS PRIVATE *****
                        RELEASE ALL
                        SET KEY -9 TO
                        RETURN NIL
                ENDIF
                IF m_flag = 0
                        EXIT
                ENDIF
                IF ! EMPTY(mcod_bc)
                        IF SUBSTR(mcod_bc,1,1) = "P"
                                IF ! EMPTY(mnum_pv) .OR. ! EMPTY(mnum_ped)
                                        atencao('Ja foi informado um Pedido...')
                                        LOOP
                                ENDIF
                                mnum_ped := VAL(SUBSTR(mcod_bc,2))
                                op_tela(10,10,11,40,'NUMERO DO PEDIDO')
                                DEVPOS(00,01);DEVOUT('Numero do Pedido:')
                                DEVPOS(01,01);DEVOUT('Valor...........:')
                                @ 00,19 GET mnum_ped PICT '999999'
                                READ
                                IF LASTKEY() = 27
                                        mnum_ped := 0
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                mcons_ped := {}
                                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@mcons_ped)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(mcons_ped) = 0
                                        atencao('Pedido nao encontrado em nosso arquivos...')
                                        wvw_lclosewindow()
                                        mnum_ped := 0
                                        LOOP
                                ENDIF
                                mpago := ' '
                                p := mtot_ := 0
                                mcod_cli := mcons_ped[1,23]
                                FOR p = 1 TO LEN(mcons_ped)
                                        mtot_ := mtot_ + (mcons_ped[p,14]*mcons_ped[p,18])
                                NEXT
                                setcor(3)
                                DEVPOS(01,19);DEVOUT(TRANSFORM(mtot_,'999,999.99'))
                                setcor(1)
                                IF mcons_ped[1,49] = 'C'
                                        atencao('Este pedido foi CANCELADO....')
                                ELSEIF mcons_ped[1,49] = '*'
                                        atencao('Este pedido ja foi PAGO !!!')
                                        mpago := '*'
                                ELSE
                                        mpago := ' '
                                ENDIF
                                IF mcons_ped[1,4] > mdata_sis
                                        atencao('Este pedido nao pode ser Recebido com esta DATA !!!')
                                        LOOP
                                ENDIF
                                IF 'N' = op_simnao('S','Confirma o Pedido:') .OR. LASTKEY() = 27
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                wvw_lclosewindow()
                                mcod_vend := VAL(mcons_ped[1,32])
                                p:=0
                                FOR p = 1 TO LEN(mcons_ped)
                                        cons_merc := {}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcons_ped[p,6]),,.t.,@cons_merc)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        WVW_RESTSCREEN(,lci,55,lba,cba-1,tela_,.T.)
                                        //botao(00,01,07,99)
                                        IF LEN(cons_merc) = 0
                                                atencao('Produto nao encontrado...')
                                                LOOP
                                        ENDIF
                                        IF ! EMPTY(cons_merc[1,2]) .AND. LEN(ALLTRIM(cons_merc[1,2])) < 8
                                                atencao('Este Produto estar com o CODIGO DE BARRA errado Verifique para poder tirar esta Nota...')
                                                LOOP
                                        ENDIF
                                        IF EMPTY(cons_merc[1,70])
                                                atencao('Mercadoria estar sem NCM verificar no cadastro...')
                                                LOOP
                                        ENDIF
                                        IF cons_merc[1,23] > 0
                                                setcor(6)
                                                DEVPOS(00,20);DEVOUT('(Promocao)')
                                        ENDIF
                                        DrawLabel(3,2,'Descricao do Produto',,, 'Arial',20,8)
                                        DrawLabel(5,2,mcons_ped[p,7],,,'Arial Black',50,20)
                                        //DEVPOS(00,02);DEVOUT('    Codigo           Produto')
                                        //WVW_DrawLabel(,01,02,mcons_ped[p,6]+' - '+SUBSTR(mcons_ped[p,7],1,20),,,,, 'arial black',60,20,,,,,)
                                        //WVW_DrawLabel(,04,02,'             '+SUBSTR(mcons_ped[p,7],21),,,,, 'arial black',60,20,,,,,)
                                        mcod_merc := VAL(mcons_ped[p,6])
                                        mp_venda := iat(mcons_ped[p,20],cons_merc[1,81])
                                        mvlr_fat := iat(mcons_ped[p,18],cons_merc[1,81])

                                        //DEVPOS(00,80);DEVOUT('Preco   R$:')
                                        //WVW_DrawLabel(,04,70,TRANSFORM(mvlr_fat,ALLTRIM('@E '+m_set[1,98])),,,240,, 'arial black',60,30,,,,,)
                                        setcor(1)
                                        mobs_prod := mcons_ped[p,58]
                                        mquantd := mcons_ped[p,14]
                                        IF ! EMPTY(cons_merc[1,28]) .AND. cons_merc[1,28] >= (cons_merc[1,56] - mquantd) .AND. cons_merc[1,9] <> "DIVERSOS" .AND. (m_set[1,107] = "F" .OR. m_set[1,107] = "2") .AND. m_indiv[1,26] <> "T"
                                                atencao("SALDO esta menor que o ESTOQUE MINIMO: "+TRANSFORM(cons_merc[1,28],"9,999,999.99")+" estipulado !!!")
                                        ENDIF
                                        //mensagem('Validando o NCM do produto......')
                                        //mcest := IBR_comando('NCM.Validar',{ALLTRIM(cons_merc[1,70])},30)
                                        //IF ALLTRIM(mcest) # 'OK: NCM Valido'
                                        //        atencao(mcest)
                                        //        LOOP
                                        //ENDIF
                                        //mcest := ALLTRIM(cons_merc[1,114])
                                        //IF EMPTY(mcest)
                                        //        mcest := ver_cest(ALLTRIM(cons_merc[1,70]))
                                        //ENDIF
                                        //IF EMPTY(mcest)
                                        //        atencao('Este produto nao estar com NCM ou nao estar cadastrado no sistema favor verificar o cadastro do NCM...')
                                        //        LOOP
                                        //ENDIF
                                        mcomissao := mcons_ped[p,53]
                                        IF mp_venda > mvlr_fat
                                                mdesconto := ((mp_venda-mvlr_fat)/mp_venda)*100
                                                IF ! EMPTY(m_set[1,113]) .AND. mdesconto >= m_set[1,114]
                                                        IF m_set[1,113] > 1
                                                                mcomissao := mcomissao * (m_set[1,113]/100)
                                                        ELSE
                                                                mcomissao := mcomissao - (iat(mdesconto,0) * m_set[1,113])
                                                                IF mcomissao < 0
                                                                        mcomissao := 0
                                                                ENDIF
                                                        ENDIF
                                                ENDIF
                                        ENDIF
                                        IF ! EMPTY(m_set[1,153]) .AND. mcons_ped[p,14] > m_set[1,153]
                                                atencao('QUANTIDADE Solicitada maior que o MAXIMO Permitido')
                                                LOOP
                                        ENDIF
                                        IF mcons_ped[p,14] > cons_merc[1,55] .AND. m_set[1,16] = 'S'
                                                IF ! aut_sen('Produto: '+cons_merc[1,8]+'-'+cons_merc[1,9]+m_qp+'Saldo: '+TRANSFORM(cons_merc[1,55],'99,999.9999')+' MENOR que solicitado !!!'+m_qp+'Senha Autorizacao:','LIBSLDNF')
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        setcor(1)
                                        mcod_fab := cons_merc[1,30]
                                        mfabrica := cons_merc[1,31]
                                        mtot_ped = 0
                                        mtot_ped = mvlr_fat * mquantd
                                        IF LEN(m_merc) = 0
                                                lExit := .T.
                                                WHILE lExit
                                                        sr_begintransaction()
                                                        try
                                                                aret:={}
                                                                sr_getconnection():exec( "select numero from sacnonfc where sr_recno = 1 for update with lock",,.t.,@aret)
                                                                mdocumento = STRZERO(VAL(aret[1,1])+1,6)
                                                                mnum = strzero(VAL(aret[1,1])+1,6)
                                                                sr_getconnection():exec("update sacnonfc set numero = " + sr_cdbvalue(mnum) + ", data_ped = " + sr_cdbvalue( mdata_sis) + " where sr_recno = 1 ",,.f.)
                                                                sr_committransaction()
                                                                mcons_cam := {}
                                                                sr_getconnection():exec("SELECT num_nota FROM cam_dba",,.t.,@mcons_cam)
                                                                IF LEN(mcons_cam) > 0
                                                                        IF SR_SetActiveConnection(nCnn1) > 0 .AND. mcons_cam[1,1] = 'S'
                                                                                sr_getconnection():exec("update sacnonfc set numero = " + sr_cdbvalue(mnum) + ", data_ped = " + sr_cdbvalue( mdata_sis) + " where sr_recno = 1 ",,.f.)
                                                                                sr_getconnection():exec("COMMIT",,.f.)
                                                                        ENDIF
                                                                        SR_SetActiveConnection(nCnn)
                                                                ENDIF
                                                                lExit:=.F.
                                                        catch e
                                                                tracelog(valtoprg())
                                                                sr_COMMITtransaction()
                                                                lexit := .T.
                                                        END
                                                        sr_endtransaction()
                                                ENDDO
                                		Wvw_SetTitle( ,memp_resa+SPACE(50)+'EMISSAO DO NFC-e No.:'+mdocumento+SPACE(30)+'Terminal: '+m_indiv[1,1])
                                                mnum_item  := 0
                                                maliq_prod := ''
                                        ENDIF
                                        mabrir_cp := "*"
                                        AADD(m_merc,cons_merc[1,9])
                                        AADD(m_codigo,cons_merc[1,8])
                                        AADD(m_Cbarra,cons_merc[1,2])
                                        mdesconto := mpreco := 0
                                        IF mp_venda < mvlr_fat
                                                mdesconto := 0
                                                mpreco := mvlr_fat
                                        ELSE
                                                mpreco := mp_venda
                                                mdesconto := (mquantd*mp_venda) - (mquantd*mvlr_fat)
                                        ENDIF
                                        cont_itens ++
                                        misento := vercst(cons_merc[1,68])
                                                //                  1               2              3               4        5             6          7          8              9                  10         11         12          13   14    15  16          17               18         19 20        21          22        23       24       25          26    27  28  29  30  31        32      33     34             35                  36
                                        IF (misento = 'I' .OR. misento = 'N' .OR. misento = 'F')
                                                AADD(m_nota,{cons_merc[1,7],cons_merc[1,9],cons_merc[1,30],cons_merc[1,31],mquantd,cons_merc[1,46],mvlr_fat,cons_merc[1,14],cons_merc[1,17],cons_merc[1,21],mdesconto,cons_merc[1,45],0,misento,0,mcomissao,cons_merc[1,62],cons_merc[1,16],0,0,STRZERO(mcod_merc,5),0,cons_merc[1,66],0,cons_merc[1,71],mchassis,' ',' ',' ',' ',' ',cons_merc[1,49],0,cons_merc[1,72],cons_merc[1,68],cons_merc[1,109]})
                                        ELSEIF cons_merc[1,62] > 0
                                                AADD(m_nota,{cons_merc[1,7],cons_merc[1,9],cons_merc[1,30],cons_merc[1,31],mquantd,cons_merc[1,46],mvlr_fat,cons_merc[1,14],cons_merc[1,17],cons_merc[1,21],mdesconto,cons_merc[1,45],0,misento,0,mcomissao,cons_merc[1,62],cons_merc[1,16],0,cons_merc[1,62],STRZERO(mcod_merc,5),0,cons_merc[1,66],0,cons_merc[1,71],mchassis,' ',' ',' ',' ',' ',cons_merc[1,49],0,cons_merc[1,72],cons_merc[1,68],cons_merc[1,109]})
                                        ELSE
                                                AADD(m_nota,{cons_merc[1,7],cons_merc[1,9],cons_merc[1,30],cons_merc[1,31],mquantd,cons_merc[1,46],mvlr_fat,cons_merc[1,14],cons_merc[1,17],cons_merc[1,21],mdesconto,cons_merc[1,45],0,misento,0,mcomissao,cons_merc[1,62],cons_merc[1,16],0,cons_merc[1,16],STRZERO(mcod_merc,5),0,cons_merc[1,66],0,cons_merc[1,71],mchassis,' ',' ',' ',' ',' ',cons_merc[1,49],0,cons_merc[1,72],cons_merc[1,68],cons_merc[1,109]})
                                        ENDIF
                                                        //ATENCAO(STRZERO(MDESCONTO,10,2))
                                        mensagem("Imprimindo o Produto")
                                        mdesconto := 0
                                        mcont_item ++
                                        // ATUALIZANDO ARQUIVO DE MOVIMENTOS
                                        m_cfop:='     '
                                        IF ! EMPTY(cons_merc[1,109])
                                                m_cfop := ALLTRIM(cons_merc[1,109])
                                        ELSE
                                                IF STRZERO(VAL(cons_merc[1,68]),2) = '60' .OR. STRZERO(VAL(cons_merc[1,68]),3) = '500'
                                                        m_cfop := '5.405'
                                                ELSE
                                                        m_cfop := '5.102'
                                                ENDIF
                                        ENDIF
                                        m_vbc := m_vicms := 0
                                        IF cons_merc[1,62] > 0
                                                IF cons_merc[1,72] > 0
        						m_vbc     := iat((mvlr_fat * mquantd)* cons_merc[1,72],2)
                                                        m_vicms   := iat(m_vbc * (cons_merc[1,62]/100),2)
                                                ELSE
                                                        m_vbc     := iat((mvlr_fat * mquantd),2)
                                                        m_vicms   := iat((cons_merc[1,62]/100) * (mvlr_fat*mquantd),2)
                                                ENDIF
                                        ELSE
                                                m_vbc     := 0
                                                m_vicms   := 0
                                        ENDIF
                                        sr_getconnection():exec('INSERT INTO sacmovnt ('+;
                                                'empresa   ,'+; //1
                                                'documento ,'+; //2
                                                'modelo    ,'+; //3
                                                'serie     ,'+; //4
                                                'num_ecf   ,'+; //5
                                                'gru_sub   ,'+; //6
                                                'codigo    ,'+; //7
                                                'produto   ,'+; //8
                                                'cod_fab   ,'+; //9
                                                'fabrica   ,'+; //10
                                                'unidade   ,'+; //11
                                                'data_s_e  ,'+; //12
                                                'ent_sai   ,'+; //13
                                                'quantd    ,'+; //14
                                                'pr_venda  ,'+; //15
                                                'vl_vend   ,'+; //16
                                                'cod_vend  ,'+; //17
                                                'vl_fatura ,'+; //18
                                                'pr_unit   ,'+; //19
                                                'cod_nota  ,'+; //20
                                                'isento    ,'+; //21
                                                'bebida    ,'+; //22
                                                'icm       ,'+; //23
                                                'cod_nat   ,'+; //24
                                                'tipo      ,'+; //25
                                                'num_ped   ,'+; //26
                                                'vlr_icm   ,'+; //27
                                                'base_icm  ,'+; //28
                                                'SR_DELETED )'+;
                                                ' VALUES ('+;
                                                sr_cdbvalue(mcodempresa    )+','+; //1
                                                sr_cdbvalue('CP'+mdocumento)+','+; //2
                                                sr_cdbvalue(mmodelo        )+','+; //3
                                                sr_cdbvalue(mserie_not     )+','+; //4
                                                sr_cdbvalue(mnum_ecf       )+','+; //5
                                                sr_cdbvalue(cons_merc[1,7] )+','+; //6
                                                sr_cdbvalue(STRZERO(mcod_merc,5))+','+; //7
                                                sr_cdbvalue(mcons_ped[p,7] )+','+; //8
                                                sr_cdbvalue(cons_merc[1,30]     )+','+; //9
                                                sr_cdbvalue(SUBSTR(cons_merc[1,31],1,30))+','+; //10
                                                sr_cdbvalue(cons_merc[1,14]   )+','+; //11
                                                sr_cdbvalue(mdata_sis         )+','+; //12
                                                sr_cdbvalue("S"               )+','+; //13
                                                sr_cdbvalue(mquantd           )+','+; //14
                                                sr_cdbvalue(mvlr_fat          )+','+; //15
                                                sr_cdbvalue(mvlr_fat          )+','+; //16
                                                sr_cdbvalue(cod_operado       )+','+; //17
                                                sr_cdbvalue(mvlr_fat          )+','+; //18
                                                sr_cdbvalue(cons_merc[1,42]   )+','+; //19
                                                sr_cdbvalue("B"               )+','+; //20
                                                sr_cdbvalue(cons_merc[1,61]   )+','+; //21
                                                sr_cdbvalue(cons_merc[1,62]   )+','+; //22
                                                sr_cdbvalue(m_nota[i,20]      )+','+; //23
                                                sr_cdbvalue(m_cfop)+','+; //24
                                                sr_cdbvalue("01"               )+','+; //25
                                                sr_cdbvalue(STRZERO(mnum_ped,6))+','+; //26
                                                sr_cdbvalue(m_vicms)            +','+; //27
                                                sr_cdbvalue(m_vbc )             +','+; //28
                                                sr_cdbvalue(' ')+')',,.f.)
                                                sr_getconnection():exec('COMMIT',,.f.)
                                        mquantd := 1
                                NEXT
                                LOOP
                        ENDIF
                        IF SUBSTR(mcod_bc,1,1) = "2" .AND. (LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0)
                                IF ALLTRIM(m_set[1,179]) = 'TOLEDO'
                                        IF m_set[1,159] = 'V'
                                                mcod_merc := VAL(SUBSTR(mcod_bc,2,5))
                                        ELSE
                                                mcod_merc := VAL(SUBSTR(mcod_bc,2,6))
                                        ENDIF
                                ELSE
                                        IF m_set[1,159] = 'V'
                                                mcod_merc := VAL(SUBSTR(mcod_bc,2,6))
                                        ELSE
                                                mcod_merc := VAL(SUBSTR(mcod_bc,2,5))
                                        ENDIF
                                ENDIF
                                cons_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@cons_merc)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_merc) = 0
                                        atencao("Codigo Barra nao cadastrado")
                                        LOOP
                                ENDIF
                        ELSEIF LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0
                                cons_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_barr = "+sr_cdbvalue(mcod_bc),,.t.,@cons_merc)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_merc) > 0
                                        m_produto := {}
                                        IF ! EMPTY(mnum_ped)
                                                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(cons_merc[1,8]),,.t.,@m_produto)
                                                sr_getconnection():exec('COMMIT',,.f.)
                                        ENDIF
                                        IF LEN(m_produto) > 0 .AND. RTRIM(cons_merc[1,9]) <> 'DIVERSOS' .AND. m_set[1,104] <> 'S' .AND. m_indiv[1,26] <> 'T'
                                                alt_prod2()
                                                LOOP
                                        ENDIF
                                ELSE
                                        cons_merc := {}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE ref = "+sr_cdbvalue(SUBSTR(mcod_bc,1,10)),,.t.,@cons_merc)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(cons_merc) = 0
                                                atencao('Codigo de BARRA e REFERENCIA AUXILIAR nao cadastrado')
                                                LOOP
                                        ENDIF
                                ENDIF
                                mcod_merc := VAL(mcod_bc)
                        ELSE
                                mcod_merc := VAL(mcod_bc)
                                cons_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@cons_merc)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_merc) = 0
                                        atencao("Codigo da mercadoria nao cadastrado")
                                        LOOP
                                ENDIF
                        ENDIF
                ELSEIF EMPTY(mmerc)
                        mcod_merc := IF(m_set[1,93] <> 'A',f4_merc(,,STRZERO(mvarejo,1),mperc),f4_merc1(,,STRZERO(mvarejo,1),mperc))
                        //mcod_merc := VAL(f4_merc(,,STRZERO(mvarejo,1),mperc))
                        cons_merc := {}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@cons_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_merc) = 0
                                atencao("Codigo da mercadoria nao cadastrado")
                                LOOP
                        ENDIF
                        mmerc := cons_merc[1,9]
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                //atencao(ALLTRIM(cons_merc[1,70]))
                /*
                mensagem('Validando o NCM do produto......')
                mcest := IBR_comando('NCM.Validar',{ALLTRIM(cons_merc[1,70])},30)
                IF ALLTRIM(mcest) # 'OK: NCM Valido'
                        atencao(mcest)
                        LOOP
                ENDIF
                */
                IF ! EMPTY(cons_merc[1,2]) .AND. LEN(ALLTRIM(cons_merc[1,2])) < 8
                        atencao('Este Produto estar com o CODIGO DE BARRA errado Verifique para poder tirar esta Nota...')
                        LOOP
                ENDIF
                IF LEN(ALLTRIM(cons_merc[1,70])) < 8
                        atencao('Este Produto estar com o NCM errado Verifique para poder tirar esta Nota...')
                        LOOP
                ENDIF
                IF EMPTY(cons_merc[1,14])
                        atencao('Este Produto nao estar com a UNIDADE, Verifique para poder tirar esta Nota...')
                        LOOP
                ENDIF
                botao(12,50,27,80)
                IF FILE(ALLTRIM(m_indiv[1,29])+'P'+cons_merc[1,8]+'.jpg')
                	WVW_DrawImage( ,12,50,27,80,ALLTRIM(m_indiv[1,29])+'P'+cons_merc[1,8]+'.jpg',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,29])+'P'+cons_merc[1,8]+'.bmp')
                	WVW_DrawImage( ,12,50,27,80,ALLTRIM(m_indiv[1,29])+'P'+cons_merc[1,8]+'.bmp',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+cons_merc[1,8]+'.jpg')
                	WVW_DrawImage( ,12,50,27,80,ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+cons_merc[1,8]+'.jpg',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+cons_merc[1,8]+'.bmp')
                	WVW_DrawImage( ,12,50,27,80,ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+cons_merc[1,8]+'.bmp',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,3])+'HTIfirma.jpg')
                	WVW_DrawImage( ,12,50,27,80,ALLTRIM(m_indiv[1,3])+'HTIFIRMA.JPG',.T.,.F.)
                ENDIF
                IF mcont_item >= m_set[1,34] .AND. m_set[1,34] > 0
                        atencao('Nao e possivel incluir mais item porque ja ultrapassou o numero maximo de itens estipulado que e de '+STRZERO(m_set[1,34],5))
                        WVW_RESTSCREEN(,lci,55,lba,cba-1,tela_,.T.)
                        LOOP
                ENDIF
                IF EMPTY(mcod_bc) .AND. EMPTY(mmerc)
                        WVW_RESTSCREEN(,lci,55,lba,cba-1,tela_,.T.)
                        LOOP
                ENDIF
                // DESATIVA O FECHAMENTO DO PEDIDO
                SET KEY -9 TO                     // neste mesmo PRG. <F10>Tecla
                //
                mcod_merc := VAL(cons_merc[1,8])
                limpa(03,25,08,118)
                DrawLabel(3,2,'Descricao do Produto',,, 'Arial',20,8)
                DrawLabel(5,2,cons_merc[1,9],,,'Arial Black',50,20)
                setcor(1)
                mperc := 0
                IF cons_merc[1,23] > 0
                        mvlr_fat = iat(cons_merc[1,46] - (cons_merc[1,46] * (cons_merc[1,23] / 100)),cons_merc[1,81],'T',2)
                        mp_venda = iat(cons_merc[1,46],cons_merc[1,81],'T',2)
                ELSE
                        mp_venda := iat(cons_merc[1,46],cons_merc[1,81],'T',2)
                        mvlr_fat := mp_venda
                ENDIF
                IF m_set[1,125] = 'S' .AND. cons_merc[1,23] = 0
                        op_tela(10,10,12,40,'Desconto',,1)
                        mperc := 0
                        DEVPOS(01,01);DEVOUT('Desconto %:')
                        @ 01,COL()+1 GET mperc PICT '999.99'
                        READ
                        IF (mperc > cons_merc[1,80] .AND. ! EMPTY(cons_merc[1,80]));
                           .OR. (mperc > m_set[1,33] .AND. EMPTY(cons_merc[1,80]))
                                IF ! aut_sen(TRANSFORM(mperc,"999.99")+"% Desconto nao e permitido.. senha autorizacao:","LIB_DESC",,,STRZERO(mcod_merc,5))
                                        setcor(1)
                                        mquantd := 1
                                        LOOP
                                ENDIF
                        ENDIF
                        IF ! EMPTY(mperc)
                                mperc:= mperc * -1
                                mp_venda = iat(mvlr_fat,'T',2)
                                mvlr_fat = iat(mvlr_fat*((mperc/100)+1),'T',2)
                                mdesconto := ((mp_venda-mvlr_fat)/mp_venda)*100
                                IF ! EMPTY(m_set[1,113]) .AND. mdesconto >= m_set[1,114]
                                        IF m_set[1,113] > 1
                                                mcomissao := mcomissao * (m_set[1,113]/100)
                                        ELSE
                                                mcomissao := mcomissao - (iat(mdesconto,0) * m_set[1,113])
                                                IF mcomissao < 0
                                                        mcomissao := 0
                                                ENDIF
                                        ENDIF
                                ENDIF

                        ENDIF
                        fecha_tela()
                ENDIF
                mp_venda := iat(mp_venda,'T',2)
                mvlr_fat := iat(mvlr_fat,'T',2)
                IF cons_merc[1,24] = 'N'
                        atencao('MERCADORIA NAO DISPONIVEL PARA VENDA',3)
                        LOOP
                ENDIF
                DrawLabel(3,100,'Preco   R$:',,, 'Arial',20,8)
                WVW_DrawLabel(,5,100,TRANSFORM(mvlr_fat,ALLTRIM('@E '+m_set[1,98])),,,240,, 'arial black',50,20,,,,,)

                /*
                IF cons_merc[1,104] = 'S'
	                atencao('PRODUTO: '+mped_merc[1,8]+' - '+mped_merc[1,9]+' *** D E S C O N T I N U A D O *** ....',3)
                        LOOP
                ENDIF
                */
                mmerc := cons_merc[1,9]
                IF LASTKEY() = 27;LOOP;ENDIF
                IF SUBSTR(m_set[1,9],1,1) = 'P' .AND. cons_merc[1,14] <> 'PL' .OR. cons_merc[1,73] = 'SERI'
                        mobs_prod := SPACE(40)
                        mobs_prod1 := SPACE(40)
                        op_tela(22,10,24,51,' O B E R V A C A O   D O   P R O D U T O')
                        WVW_DrawBoxGet(,01,01,LEN(mobs_prod))
                        @ 00,01 GET mobs_prod VALID IF(EMPTY(mobs_prod) .AND. cons_merc[1,14]='PL',.F.,.T.)
                        @ 01,01 GET mobs_prod1
                        READ
                        wvw_lclosewindow()
                ENDIF
                mensagem("<F8> para consultar aplicacao do produto")
                IF SUBSTR(mcod_bc,1,1) = '2'  .AND. (LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0)
                        IF ALLTRIM(m_set[1,179]) = 'TOLEDO'
                                IF m_set[1,159] = 'V'
                                        mquantd := (VAL(SUBSTR(mcod_bc,8,5))/100) / mvlr_fat
                                ELSE
                                        mquantd := (VAL(SUBSTR(mcod_bc,8,5))/1000)
                                ENDIF
                        ELSE
                                IF m_set[1,159] = 'V'
                                        mquantd := (VAL(SUBSTR(mcod_bc,8,5))/1000)
                                ELSE
                                        mquantd := (VAL(SUBSTR(mcod_bc,8,5))/100) / mvlr_fat
                                ENDIF
                        ENDIF
                        WVW_DrawBoxGet(,24,92,20)
                        WVW_DrawBoxGet(,33,92,20)
                        DEVPOS(24,92);DEVOUTPICT(mquantd,ALLTRIM(m_set[1,99]))
                        DEVPOS(33,92);DEVOUTPICT(mvlr_fat,ALLTRIM(m_set[1,98]))
                        mcomissao := cons_merc[1,26]
                        setcor(1)
                ELSE
                        setcor(1)
                        mensagem("<F8> para consultar aplicacao do produto")
                        mmasc_qtd := unidade(cons_merc[1,14])
                        //mquantd := 1
                        //@ lba-3,53 GET mquantd PICT ALLTRIM(m_set[1,99]) WHEN m_indiv[1,26] <> "T" VALID IF(EMPTY(mquantd),.F.,.T.)
                        WVW_DrawBoxGet(,24,92,20)
                        @ 24,92 GET mquantd PICT ALLTRIM(mmasc_qtd) WHEN m_indiv[1,26] <> "T" VALID IF(EMPTY(mquantd),.F.,.T.)
                        READ
                        IF LASTKEY() = 27;LOOP;ENDIF

                        IF msem_cx = 0
                                IF cons_merc[1,103] = 'S' .AND. mquantd > cons_merc[1,56]
                                        atencao('MERCADORIA BLOQUEADA para nao vender com SALDO A MENOR')
                                        LOOP
                                ENDIF
                                IF mquantd > cons_merc[1,56] .AND. cons_merc[1,9] <> 'DIVERSOS' .AND. (m_set[1,107] = "F" .OR. m_set[1,107] = "2") .AND. SUBSTR(cons_merc[1,9],1,1) <> '@'      //.AND. (ver_serie() = '141490' .OR. ver_serie() = '141491' .OR. ver_serie() = '141492' .OR. ver_serie() = '141493')
                                        IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(mquantd,'999,999,999.99'))+' maior que saldo: '+ALLTRIM(TRANSFORM(cons_merc[1,56],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDO',,0,STRZERO(mcod_merc,5))
                                                LOOP
                                        ENDIF
                                        mlibera := 'S'
                                ENDIF
                                IF ! EMPTY(cons_merc[1,28]) .AND. cons_merc[1,28] >= (cons_merc[1,56] - mquantd) .AND. cons_merc[1,9] <> "DIVERSOS" .AND. (m_set[1,107] = "F" .OR. m_set[1,107] = "2") .AND. m_indiv[1,26] <> "T"
                                        atencao("SALDO esta menor que o ESTOQUE MINIMO: "+TRANSFORM(cons_merc[1,28],"9,999,999.99")+" estipulado !!!")
                                ENDIF
                                IF ! EMPTY(m_set[1,153]) .AND. mquantd > m_set[1,153] .AND. (m_set[1,107] = "F" .OR. m_set[1,107] = "2")
                                        IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(mquantd,'999,999,999.99'))+' maior que Permitido pela ADM: '+ALLTRIM(TRANSFORM(m_set[1,153],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDO',,,STRZERO(mcod_merc,5))
                                                LOOP
                                        ENDIF
                                ENDIF
                        ENDIF
                        mensagem("Digite o valor do produto - <ESC>Sair")
                        WVW_DrawBoxGet(,33,92,20)
                        @ 33,92 GET mvlr_fat PICT ALLTRIM(m_set[1,98]) VALID IF((cons_merc[1,23]>0 .AND. mvlr_fat < mp_venda) .OR. mvlr_fat = 0,.F.,.T.) WHEN m_set[1,38] <> 'P' .AND. m_indiv[1,26] <> 'S' .AND. m_indiv[1,26] <> 'T' .AND. EMPTY(mperc) .OR. mvlr_fat = 0
                        READ
                        IF LASTKEY() = 27
                                //UNLOCK
                                LOOP
                        ENDIF
                        IF ! EMPTY(m_set[1,154]) .AND. mvlr_fat > m_set[1,154]
                                IF ! aut_sen('Valor do Produto Solicitada: '+ALLTRIM(TRANSFORM(mvlr_fat,'999,999,999.99'))+' maior que Permitido pela ADM: '+ALLTRIM(TRANSFORM(m_set[1,154],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDO',,,STRZERO(mcod_merc,5))
                                        LOOP
                                ENDIF
                        ENDIF
                        mcomissao := cons_merc[1,26]
                        IF mp_venda > mvlr_fat
                                mdesconto := ((mp_venda-mvlr_fat)/mp_venda)*100
                                IF ! EMPTY(m_set[1,113]) .AND. mdesconto >= m_set[1,114]
                                        IF m_set[1,113] > 1
                                                mcomissao := mcomissao * (m_set[1,113]/100)
                                        ELSE
                                                mcomissao := mcomissao - (iat(mdesconto,0) * m_set[1,113])
                                                IF mcomissao < 0
                                                        mcomissao := 0
                                                ENDIF
                                        ENDIF
                                ENDIF
                                IF ((mp_venda - mvlr_fat)/mp_venda)*100 > m_set[1,33] .AND. EMPTY(cons_merc[1,80]) .AND. EMPTY(mperc)
                                        IF ! aut_sen(TRANSFORM(((mp_venda - mvlr_fat)/mp_venda)*100,"999.99")+"% Desconto nao e permitido.. senha autorizacao:","LIB_DESC",,,STRZERO(mcod_merc,5))
                                                setcor(1)
                                                LOOP
                                        ENDIF
                                ELSEIF ((mp_venda - mvlr_fat)/mp_venda)*100 > cons_merc[1,80] .AND. ! EMPTY(cons_merc[1,80]) .AND. EMPTY(mperc)
                                        IF ver_serie() = "141220" .OR. ver_serie() = "141350" .OR. ver_serie() = "141384"
                                                atencao(TRANSFORM(((mp_venda - mvlr_fat)/mp_venda)*100,"999.99")+"% Desconto nao e permitido..")
                                                mquantd := 1
                                                LOOP
                                        ENDIF
                                        IF ! aut_sen(TRANSFORM(((mp_venda - mvlr_fat)/mp_venda)*100,"999.99")+"% Desconto nao e permitido.. senha autorizacao:","LIB_DESC",,,STRZERO(mcod_merc,5))
                                                setcor(1)
                                                LOOP
                                        ENDIF
                                ELSEIF m_set[1,38] = "C" .AND. mvlr_fat < cons_merc[1,45]
                                        IF ! aut_sen("Senha de autorizacao:","LIB_DESC",,,STRZERO(mcod_merc,5))
                                                LOOP
                                        ENDIF
                                ELSEIF m_set[1,38] = "V" .AND. mvlr_fat < mp_venda
                                        IF ! aut_sen("Senha de autorizacao:","LIB_DESC",,,STRZERO(mcod_merc,5))
                                                LOOP
                                        ENDIF
                                ENDIF
                        ENDIF
                        IF AT('.',mmasc_qtd) = 0
                                mquantd := ROUND(mquantd,0)
                        ELSE
                                mquantd := ROUND(mquantd,LEN(SUBSTR(mmasc_qtd,AT('.',mmasc_qtd)+1)))
                        ENDIF
                ENDIF
                IF ! EMPTY(m_set[1,153]) .AND. mquantd > m_set[1,153]
                        atencao('QUANTIDADE Solicitada maior que o MAXIMO Permitido')
                        LOOP
                ENDIF
                IF mquantd > cons_merc[1,55] .AND. m_set[1,16] = 'S'
                        IF ! aut_sen('Produto: '+cons_merc[1,8]+'-'+cons_merc[1,9]+m_qp+'Saldo: '+TRANSFORM(cons_merc[1,55],'99,999.9999')+' MENOR que solicitado !!!'+m_qp+'Senha Autorizacao:','LIBSLDNF')
                                LOOP
                        ENDIF
                ENDIF
                setcor(1)
                mvlr_fat := iat(mvlr_fat,cons_merc[1,81])
                mcod_fab := cons_merc[1,30]
                mfabrica := cons_merc[1,31]
                mtot_ped = 0
                mtot_ped = mvlr_fat * mquantd
                setcor(3)
                WVW_DrawBoxGet(,42,92,20)
                @ 42,92 SAY mtot_ped PICT ALLTRIM(m_set[1,98])
                setcor(1)
                //mcomissao := cons_merc[1,26]
                opcao := 'S'
                IF m_indiv[1,26] <> 'T'
                        opcao := op_simnao('S','Confirma Inclusao da Mercadoria:')
                ELSE
                        opcao := 'S'
                ENDIF
                IF opcao = "S"
		        IF LEN(m_merc) = 0
                                //lExit := .T.
                                //WHILE lExit
                                //        sr_begintransaction()
                                //        try
                                                aret:={}
                                                sr_getconnection():exec( "select numero from sacnonfc where sr_recno = 1 for update with lock",,.t.,@aret)
                                                mdocumento = STRZERO(VAL(aret[1,1])+1,6)
                                                mnum = strzero(VAL(aret[1,1])+1,6)
                                                sr_getconnection():exec("update sacnonfc set numero = " + sr_cdbvalue(mnum) + ", data_ped = " + sr_cdbvalue( mdata_sis) + " where sr_recno = 1 ",,.f.)
                                                sr_committransaction()
                                                mcons_cam := {}
                                                sr_getconnection():exec("SELECT num_nota FROM cam_dba",,.t.,@mcons_cam)
                                                IF LEN(mcons_cam) > 0
                                                        IF SR_SetActiveConnection(nCnn1) > 0 .AND. mcons_cam[1,1] = 'S'
                                                                sr_getconnection():exec("update sacnonfc set numero = " + sr_cdbvalue(mnum) + ", data_ped = " + sr_cdbvalue( mdata_sis) + " where sr_recno = 1 ",,.f.)
                                                                sr_getconnection():exec("COMMIT",,.f.)
                                                        ENDIF
                                                        SR_SetActiveConnection(nCnn)
                                                ENDIF
                                                lExit:=.F.
                               //         catch e
                               //                 tracelog(valtoprg())
                               //                 sr_COMMITtransaction()
                               //                 lexit := .T.
                                //        END
                                //        sr_endtransaction()
                                //ENDDO
                		Wvw_SetTitle( ,memp_resa+SPACE(50)+'EMISSAO DO NFC-e No.:'+mdocumento+SPACE(30)+'Terminal: '+m_indiv[1,1])
                                mnum_item  := 0
                                maliq_prod := ''
        		ENDIF
                        mabrir_cp := "*"
                        mensagem("Imprimindo o Produto")
                        misento := vercst(cons_merc[1,68])
                        mdesconto := mpreco := 0
                        mpreco := mp_venda
                        mdesconto := mquantd*mp_venda - mquantd*mvlr_fat
                        IF (misento = 'I' .OR. misento = 'N' .OR. misento = 'F')
                                cons_merc[1,62] := 0
                        ELSE
                                cons_merc[1,62] := m_set[1,20]
                        ENDIF
                        mnum_item ++
                        AADD(m_merc,cons_merc[1,9])
                        AADD(m_codigo,cons_merc[1,8])
                        AADD(m_Cbarra,cons_merc[1,2])
                        SR_BEGINTRANSACTION()
                                cont_itens ++
                                        //                  1               2              3               4        5             6          7          8              9                  10         11           12          13   14  15  16             17            18         19 20        21           22        23      24            25           26         27      28       29      30        31        32      33     34             35
                                IF (misento = 'I' .OR. misento = 'N' .OR. misento = 'F')
                                        AADD(m_nota,{cons_merc[1,7],cons_merc[1,9],cons_merc[1,30],cons_merc[1,31],mquantd,cons_merc[1,46],mvlr_fat,cons_merc[1,14],cons_merc[1,17],cons_merc[1,21],mdesconto,cons_merc[1,45],0,misento,0,mcomissao,cons_merc[1,62],cons_merc[1,16],0,0,STRZERO(mcod_merc,5),0,cons_merc[1,66],0,cons_merc[1,71],mchassis,' ',' ',' ',' ',' ',cons_merc[1,49],0,cons_merc[1,72],cons_merc[1,68],cons_merc[1,109]})
                                ELSEIF cons_merc[1,62] > 0
                                        AADD(m_nota,{cons_merc[1,7],cons_merc[1,9],cons_merc[1,30],cons_merc[1,31],mquantd,cons_merc[1,46],mvlr_fat,cons_merc[1,14],cons_merc[1,17],cons_merc[1,21],mdesconto,cons_merc[1,45],0,misento,0,mcomissao,cons_merc[1,62],cons_merc[1,16],0,cons_merc[1,62],STRZERO(mcod_merc,5),0,cons_merc[1,66],0,cons_merc[1,71],mchassis,' ',' ',' ',' ',' ',cons_merc[1,49],0,cons_merc[1,72],cons_merc[1,68],cons_merc[1,109]})
                                ELSE
                                        AADD(m_nota,{cons_merc[1,7],cons_merc[1,9],cons_merc[1,30],cons_merc[1,31],mquantd,cons_merc[1,46],mvlr_fat,cons_merc[1,14],cons_merc[1,17],cons_merc[1,21],mdesconto,cons_merc[1,45],0,misento,0,mcomissao,cons_merc[1,62],cons_merc[1,16],0,mperc,STRZERO(mcod_merc,5),0,cons_merc[1,66],0,cons_merc[1,71],mchassis,' ',' ',' ',' ',' ',cons_merc[1,49],0,cons_merc[1,72],cons_merc[1,68],cons_merc[1,109]})
                                ENDIF

                                mdesconto := 0
                                mcont_item ++
                                m_vbc := m_vicms   := 0
                                /*
                                IF cons_merc[1,72] > 0
                                        m_vbc     := iat((mvlr_fat * mquantd)* cons_merc[1,72],2)
                                        m_vicms   := iat(m_vbc * (cons_merc[1,62]/100),2)
                                ENDIF
                                */
                                IF cons_merc[1,62] > 0
                                        IF cons_merc[1,72] > 0
                                                m_vbc     := iat((mvlr_fat * mquantd)* cons_merc[1,72],2)
                                                m_vicms   := iat(m_vbc * (cons_merc[1,62]/100),2)
                                        ELSE
                                                m_vbc     := iat((mvlr_fat * mquantd),2)
                                                m_vicms   := iat((cons_merc[1,62]/100) * (mvlr_fat*mquantd),2)
                                        ENDIF
                                ELSE
                                        m_vbc     := 0
                                        m_vicms   := 0
                                ENDIF

                                // ATUALIZANDO ARQUIVO DE MOVIMENTOS
                                sr_getconnection():exec('INSERT INTO sacmovnt ('+;
                                        'empresa   ,'+; //1
                                        'documento ,'+; //2
                                        'modelo    ,'+; //3
                                        'serie     ,'+; //4
                                        'num_ecf   ,'+; //5
                                        'gru_sub   ,'+; //6
                                        'codigo    ,'+; //7
                                        'produto   ,'+; //8
                                        'cod_fab   ,'+; //9
                                        'fabrica   ,'+; //10
                                        'unidade   ,'+; //11
                                        'data_s_e  ,'+; //12
                                        'ent_sai   ,'+; //13
                                        'quantd    ,'+; //14
                                        'pr_venda  ,'+; //15
                                        'vl_vend   ,'+; //16
                                        'cod_vend  ,'+; //17
                                        'vl_fatura ,'+; //18
                                        'pr_unit   ,'+; //19
                                        'cod_nota  ,'+; //20
                                        'isento    ,'+; //21
                                        'bebida    ,'+; //22
                                        'icm       ,'+; //23
                                        'cod_nat   ,'+; //24
                                        'tipo      ,'+; //25
                                        'sittrib   ,'+; //26
                                        'vlr_icm   ,'+; //27
                                        'base_icm  ,'+; //28
                                        'SR_DELETED )'+;
                                        ' VALUES ('+;
                                        sr_cdbvalue(mcodempresa    )+','+; //1
                                        sr_cdbvalue('CP'+mdocumento)+','+; //2
                                        sr_cdbvalue(mmodelo        )+','+; //3
                                        sr_cdbvalue(mserie_not     )+','+; //4
                                        sr_cdbvalue(mnum_ecf       )+','+; //5
                                        sr_cdbvalue(cons_merc[1,7] )+','+; //6
                                        sr_cdbvalue(STRZERO(mcod_merc,5))+','+; //7
                                        sr_cdbvalue(mmerc               )+','+; //8
                                        sr_cdbvalue(cons_merc[1,30]     )+','+; //9
                                        sr_cdbvalue(SUBSTR(cons_merc[1,31],1,30))+','+; //10
                                        sr_cdbvalue(cons_merc[1,14]   )+','+; //11
                                        sr_cdbvalue(mdata_sis         )+','+; //12
                                        sr_cdbvalue("S"               )+','+; //13
                                        sr_cdbvalue(mquantd           )+','+; //14
                                        sr_cdbvalue(mvlr_fat          )+','+; //15
                                        sr_cdbvalue(mvlr_fat          )+','+; //16
                                        sr_cdbvalue(cod_operado       )+','+; //17
                                        sr_cdbvalue(mvlr_fat          )+','+; //18
                                        sr_cdbvalue(cons_merc[1,42]   )+','+; //19
                                        sr_cdbvalue("B"               )+','+; //20
                                        sr_cdbvalue(cons_merc[1,61]   )+','+; //21
                                        sr_cdbvalue(cons_merc[1,62]   )+','+; //22
                                        sr_cdbvalue(m_nota[i,20]      )+','+; //23
                                        sr_cdbvalue(IF(STRZERO(VAL(cons_merc[1,68]),2) = '60','5.405','5.102'))+','+; //24
                                        sr_cdbvalue("01"              )+','+; //25
                                        sr_cdbvalue(cons_merc[1,68]   )+','+; //25
                                        sr_cdbvalue(m_vicms)            +','+; //27
                                        sr_cdbvalue(m_vbc )             +','+; //28
                                        sr_cdbvalue(' ')+')',,.f.)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                sr_committransaction()
                        sr_endtransaction()
                        mquantd := 1
                        **********
                        SELE("merc");ORDSETFOCUS(1)
                        **********
                        EXIT
                ENDIF
        ENDDO
        //wvw_lclosewindow()
ENDDO
RETURN NIL
***************************  F I M  **********************************
*RECEBIMENTO DE TP"s
*********************
FUNCTION fecha_nfce
*******************
LOCAL MPRG:="SACNFCE",;
      opcao,lci,lba,cba,i,mopcao,f,mtipo_comp,mtipo_pag,mtot_verif:=0,mperc_comissao,li,lb,cb,mdiferenca:=0,mtroco:=0,;
      m_recebe:={},mdinheiro,mn_banco,mn_cheque,mn_dup,mn_trans,mvencimento,mt_pag,mvalor,mn_fin,mtot_ipi,mbox_rece,;
      magencia,mc_c,mcorrente,mcartao_sn:=" ",aret:={},mvlr_cred:=0,mcredito_aux:=0,m_credito:={},Operacoes,;
      mdesc_tot:=0,mvlr_cartao:=0,mpix := 0

MEMVAR mtot_nota,m_codigo,m_merc,m_matriz,mdocumento,mnum_ecf,mcod_bc,m_flag,mcgc,mcpf,minsc,mcliente,mcod_vend,mnum_ccf

PRIVATE mlin,mcartao,mprazo_cart,mdesc_cart,mcobra_fin,mtaxa_fin,m_desc:={},mdesconto,mreceb,mcom_ven,mcom_ap,mbanco,;
        mnome_vend,mperc,mcond_vezes,mcond_intev,mtp_vend,msub_total:=0,mvl_vend:=0,mtot_icm:=0,mtipo_pg:=0,mvalor_aux,;
        string_devolvida,mtot_rece:=0,mn_cupom,mnome_arq:=' ',mvalor_cart:=0,mcod_cart,mdesc_cx:=0,mdesc_perc:=0,;
        mcredito:=0,mn_cred:=SPACE(8),nTotalAPagar:=0,mind_cartao:='00',m_flag_f:=' ',mdesc_p,mdesc_r,mdesc_u,;
        mqtd_parc := 0,mind_tef:=' ',mdif_parc:=0,mcons_emi := {},mcons_cid := {},mcod_cid_emit:=' ',mcod_cid_dest:=' ',;
        mid_cb,m_conteudo,mposicao,nPBins_dados,mcamnfe:='',ccoo:='',mobs1,mobs2,mobs3,mobs4,mobs5,;
        mnum_dup := ' '

SET KEY -9 TO
CLEAR GETS
mreceb := "R"
lci = 04
lba = 23
cba = 100
*----------------------------------------------
IF ! AbriArq("sacfin","fin");RETURN NIL;ENDIF
IF ! AbriArq("insopera","sen");RETURN NIL;ENDIF
IF ! AbriArq("saccli","cli");RETURN NIL;ENDIF
IF ! AbriArq("saccarta","car");RETURN NIL;ENDIF
*----------------------------------------------
ver_ven(cod_operado)
//atencao(" Operador:"+cod_operado+"-"+RTRIM(sen->snome))
mtot_nota := msubtotal
IF mtot_nota = 0
        atencao('O total da nota estar com valor zero....')
        RETURN NIL
ENDIF
tela_fecha := {}
tela_fecha := WVW_SAVESCREEN(,0,0,50,120)
op_tela(00,40,49,95," RECEBIMENTOS CAIXA   -    TEF: "+m_indiv[1,41],,1)

WVW_PBSetFont( , 'times new roman',20,10)
nPBins_dados := wvw_pbCreate(NIL, 5, 3,8, 15,  ' CPF/CNPJ ',NIL,{||ins_dados()})
nPBins_dados := wvw_pbCreate(NIL, 5, 25,8, 40,  ' Observacao ',NIL,{||ins_obs()})

m_conteudo:={'1 Dinheiro','2 Cheque','3 Duplicata','4 Financeira','5 Cartao','6 Credito','7 PIX', '8 Cartao de Debito' }
mposicao:={0,0,3,4}
WVW_CBSetFont( , 'times new roman', 20, 12,2,2)
//WVW_CBSetFont( , 'lucida console', 20, 12,2,2)
mid_cb := WVW_CBCreate( , 24, 02,20, m_conteudo,,20,,0,mposicao )

li := 03
ci := 00
lb := 22
cb := 54
WHILE .T.
	mobs1:=mobs2:=mobs3:=mobs4:=mobs5:=SPACE(50)
        ccoo := mdocumento
        WVW_CBEnable( , mid_cb, .F. )
        WVW_PBEnable( , nPBins_dados, .T. )
        CLEAR GETS
        ASIZE(m_desc,0)
        mensagem("Preencha os Campos - <ESC> p/Retornar ")
        mcom_ven := mcom_ap := mperc := mvl_vend := mperc_comissao := mprazo_cart := mdesc_cart := mtot_icm :=;
        mdinheiro := mcod_cart := mvalor := mtot_verif := mtot_ipi := mdiferenca := i := f := mtot_verif := mtot_rece := ;
        mvlr_cred := mdesc_p := mdesc_r := mdesc_u := mdesconto := 0
        mcliente = SPACE(40)
        //mcpf := SPACE(11)
        //mcgc := SPACE(14)
        mnome_vend := SPACE(30)
        opcao = "S"
        mtp_vend := mcond_vezes := mcond_intev := SPACE(2)
        mbanco := "C"
        mtipo_comp := "AV"
        mtipo_pag := mcartao_sn := SPACE(1)
        mn_banco := SPACE(3)
        mn_cheque := SPACE(6)
        mn_dup := mn_trans := magencia := SPACE(8)
        mc_c := SPACE(13)
        mvencimento := CTOD(" /  /  ")
        mt_pag := SPACE(1)
        mn_cupom := mn_cred:=SPACE(8)
        i := 1

        ASIZE(m_recebe,0)
        DEVPOS(li  ,1);DEVOUT("Vend...:")
        DEVPOS(li+9,1);DEVOUT("CREDITO:")
        @ li+10,0 TO li+10,cb
        DEVPOS(li+11,1);DEVOUT("Total da COMPRA R$:")
        @ li+17,0 TO li+17,cb
        DEVPOS(li+18,1);DEVOUT("Total RECEBIDO..R$:")
        DEVPOS(li+19,1);DEVOUT("Valor a RECEBER R$:")
        @ li+20,0 TO li+20,cb
        mcod_cli := IF(EMPTY(mcod_cli),m_set[1,84],mcod_cli)
        ***************
        SELE("cli");ORDSETFOCUS(1)
        GO TOP
        ***************
        DEVPOS(li  ,09);DEVOUTPICT(mcod_vend,"999")
        ven(@mcod_vend,li,14)

        IF ! EMPTY(mdesc_p)
                mtot_aux  :=  mtot_nota
                mdesc_tot  := mtot_aux * (mdesc_p / 100)
                mtot_nota := iat(mtot_nota - (mtot_nota * (mdesc_p/100)),2)
                //mdesconto := (mtot_nota * (mdesc_p/100))
                mdesconto := mtot_aux - mtot_nota
                mdesconto := mdesconto * -1
                mdesc_u := mdesc_p
        ELSEIF ! EMPTY(mdesc_r)
                mdesc_tot  := mdesc_r
                mtot_nota := mtot_nota - mdesc_r
                mdesconto := mdesc_r  * -1
                mdesc_u := iat((mdesc_r / mtot_nota) * 100,3)
        ENDIF
        IF mdesc_u > m_set[1,33]
                IF ! aut_sen('Desconto solicitado de '+TRANSFORM(mdesc_u,'9999.99')+' maior que o Autorizado de '+TRANSFORM(m_set[1,33],'9999.99')+'.. Senha de autorizacao:','LIB_DESC',,mcod_cli)
                        LOOP
                ENDIF
        ENDIF
        mcons_emi := {}
        sr_getconnection():exec("SELECT * FROM saccid WHERE cidade = "+sr_cdbvalue(RTRIM(m_set[1,134]))+" AND uf = "+sr_cdbvalue(RTRIM(m_set[1,19])),,.t.,@mcons_emi)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(mcons_emi) = 0 .OR. EMPTY(mcons_emi[1,1])
                atencao('Nao e Possivel a emissao desta nota pois o codigo da cidade da EMPRESA EMITENTE ** '+RTRIM(m_set[1,134])+'-'+RTRIM(m_set[1,19])+' nao estar cadastrado !!!!')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mcod_cid_emit := mcons_emi[1,1]

        //WVW_DrawLabel(,li+8,ci,TRANSFORM(mtot_nota,ALLTRIM('@E '+m_set[1,98])),,,210,, 'arial black',60,35,,,,,)
        //SUB_BANNER(li+8,26,TRANSFORM(mtot_nota,"999,999.99"))
        //SUB_BANNER(li+5,30,TRANSFORM(mtot_nota,"999,999.99"))
        setcor(1)
        mdiferenca := iat(mtot_nota - mtot_verif)
        mcredito := 0
        /*
        mcredito := cli_dup(mcod_cli,'*')
        IF mcredito > 0
                setcor(3,'*')
                DEVPOS(li+9,9);DEVOUT(TRANSFORM(mcredito,'999,999.99'))
                setcor(1)
                mtipo_pg := 7
        ENDIF
        */
        IF mtot_nota > 5000
                atencao('Nota mais que 5.000,00 R$ obrigatorio informa o CPF/CNPJ....')
                ins_dados()
                IF EMPTY(mcpf) .AND. EMPTY(mcgc)
                        atencao('Nao foi imforma CPF/CNPJ...')
                        LOOP
                ENDIF
        ENDIF
        WVW_CBEnable( , mid_cb, .T. )
        WHILE .T.
                IF msem_cx = 0
                        WVW_DrawLabel(,li+12,0,TRANSFORM(mtot_nota,ALLTRIM('@E '+m_set[1,98])),,,210,, 'arial black',60,35,,,,,)
                ELSE
                        WVW_DrawLabel(,li+12,0,TRANSFORM(mtot_nota,ALLTRIM('@E '+m_set[1,98])),,,,, 'arial black',60,35,,,,,)
                        DEVPOS(li+9,cb-5);DEVOUT("S/C")
                ENDIF
                //SUB_BANNER(li+8,26,TRANSFORM(mtot_nota,"999,999.99"))
                mensagem("Escolha a opcao que deseja fazer o Recebimento  -  <ESC> Retorna" )
                mtroco := mdinheiro := mcod_cart := mvalor := mpix := 0
                mn_banco := SPACE(3)
                mn_cheque := SPACE(6)
                mn_dup := mn_trans := mn_fin := magencia := SPACE(8)
                mc_c := SPACE(13)
                mvencimento := CTOD("  /  /  ")
                mt_pag := "C"
                mn_cupom := SPACE(10)
                mopcao := m_flag_f := SPACE(1)
                mcorrente := SPACE(35)
                mtipo_pg := 0

                @ 63,1 GET mtipo_pg WHEN mtipo_pg > -1
                READ
                mtipo_pg := VAL(SUBSTR(WVW_CBGetCurText( , mid_cb ),1,1))

                //mtipo_pg := WVW_CBGetIndex( , mid_cb)
                //mtipo_pg ++
                setcor(1)
                IF LASTKEY() = 27
                        WVW_PBDestroy( , nPBins_dados)
                        WVW_CBDestroy( , mid_cb )
                        CLEAR GETS
                        WVW_RESTSCREEN(,0,0,50,120,tela_fecha,.T.)
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                */
                IF mtipo_pg = 1
                        op_tela(30,30,32,70,' DINHEIRO')
                        DEVPOS(1,2);DEVOUT("Dinheiro............R$:")
                        @ 1,25 GET mdinheiro PICT "999,999,999.99"
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                ELSEIF mtipo_pg = 2
                        IF (EMPTY(mcpf) .AND. EMPTY(mcgc))
                                atencao("Esta operacao e necessario um CLIENTE")
                                LOOP
                        ENDIF
                        op_tela(30,30,38,90,'CHEQUES')
                        setcor(1)
                        DEVPOS(1,1);DEVOUT("No.Banco...:")
                        DEVPOS(2,1);DEVOUT("Agencia....:")
                        DEVPOS(3,1);DEVOUT("C/C........:")
                        DEVPOS(4,1);DEVOUT("No.Cheque..:")
                        DEVPOS(5,1);DEVOUT("Vencimento.:")
                        DEVPOS(6,1);DEVOUT("Valor......:")
                        DEVPOS(7,1);DEVOUT("Correntista:")
                        @ 1,14 GET mn_banco PICT "9999" WHEN EMPTY(mdinheiro)
                        @ 2,14 GET magencia PICT "@!"
                        @ 3,14 GET mc_c PICT "@!" VALID qtd_chq(mcod_cli,mn_banco,magencia,mc_c)
                        @ 4,14 GET mn_cheque PICT "99999999" VALID IF(! EMPTY(mn_banco) .AND. EMPTY(mn_cheque),.F.,.T.) WHEN EMPTY(mdinheiro) .AND. ! EMPTY(mn_banco)
                        @ 5,14 GET mvencimento WHEN ! EMPTY(mn_banco) VALID IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        @ 6,14 GET mvalor PICT "9,999,999.99" WHEN EMPTY(mdinheiro) .AND. ! EMPTY(mn_banco)
                        @ 7,14 GET mcorrente PICT "@!"
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mn_banco)
                                fecha_tela()
                                LOOP
                        ENDIF
                        IF mvencimento > mdata_sis
                                mtipo_comp = "AP"
                        ENDIF
               ELSEIF mtipo_pg = 3
                        IF (EMPTY(mcpf) .AND. EMPTY(mcgc))
                                atencao("Esta operacao e necessario um CLIENTE")
                                LOOP
                        ENDIF
                        op_tela(30,30,35,60,'DUPLICATA')
                        mn_dup := ALLTRIM(mdocumento)+SPACE(8-LEN(ALLTRIM(mdocumento)))
                        DEVPOS(1,1);DEVOUT("No.Duplicata.:")
                        DEVPOS(2,1);DEVOUT("Vencimento...:")
                        DEVPOS(3,1);DEVOUT("C>art. B>anco:")
                        DEVPOS(4,1);DEVOUT("Valor R$.....:")
                        @ 1,16 GET mn_dup PICT "@!"
                        @ 2,16 GET mvencimento WHEN ! EMPTY(mn_dup) VALID IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        @ 3,16 GET mt_pag PICT "@!" VALID mt_pag $ "C,B" WHEN ! EMPTY(mn_dup)
                        @ 4,16 GET mvalor PICT "9,999,999.99" WHEN ! EMPTY(mn_dup)
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mn_dup)
                                fecha_tela()
                                LOOP
                        ENDIF
                        mtipo_comp = "AP"
                ELSEIF mtipo_pg = 4
                        IF (EMPTY(mcpf) .AND. EMPTY(mcgc))
                                atencao("Esta operacao e necessario um CLIENTE")
                                LOOP
                        ENDIF
                        op_tela(30,30,35,90,'FINANCEIRA')
                        DEVPOS(1,1);DEVOUT("Cod.Financeira...:")
                        DEVPOS(2,1);DEVOUT("No.Financiamento.:")
                        DEVPOS(3,1);DEVOUT("Vencimento.......:")
                        DEVPOS(4,1);DEVOUT("Valor R$.........:")
                        @ 1,20 GET mcod_cart PICT "999" VALID ver_finan(mcod_cart,1,24)
                        @ 2,20 GET mn_fin PICT "99999999" WHEN EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND. EMPTY(mn_dup)
                        @ 3,20 GET mvencimento  VALID IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        @ 4,20 GET mvalor PICT "9,999,999.99" WHEN ! EMPTY(mn_fin)
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mn_fin)
                                fecha_tela()
                                LOOP
                        ENDIF
                        mtipo_comp = "AP"
               ELSEIF mtipo_pg = 5
                        mvalor := mdiferenca
                        mn_cupom := mdocumento
                        op_tela(30,30,36,70,'CARTAO')
                        DEVPOS(1,1);DEVOUT("Cod.Cartao:")
                        DEVPOS(3,1);DEVOUT("No.Cupom..:")
                        DEVPOS(4,1);DEVOUT('Qtd. vezes:')
                        DEVPOS(5,1);DEVOUT('Valor.....:')
                        @ 1,13 GET mcod_cart PICT "999" VALID IF(EMPTY(mcod_cart),.F.,ver_cartao(mcod_cart,1,17))
                        @ 5,13 GET mvalor PICT "999,999.99" VALID IF(mvalor > mdiferenca,.F.,.T.) WHEN car->tef # 'S'
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mcod_cart)
                                fecha_tela()
                                LOOP
                        ENDIF
                        setcor(3)
                        DEVPOS(1,13);DEVOUT(STRZERO(mcod_cart,3))
                        setcor(1)
                        ver_cartao(mcod_cart,1,17)
                        mvencimento := mdata_sis + car->prazo
                        IF LASTKEY() = 27 .OR. EMPTY(mcod_cart)
                                LOOP
                        ENDIF
                        IF car->tef = 'S'
                                //IBR_INI_FECHA(mdesconto)
                                mqtd_parc := 1
                                mgerenciador := ALLTRIM(car->cartao)
                                nTotalAPagar := mvalor
                                NumeroCupom := mdocumento
                                //IF m_indiv[1,41] = 'PAYGOMULT'
                                        mensagem('Chamando o Gerenciador: PAY & GO MULT')
                                /*
                                ELSEIF m_indiv[1,41] = 'PAYGO'
                                        mensagem('Chamando o Gerenciador: '+IF(SUBSTR(UPPER(mgerenciador),1,5) = 'HIPER','HIPERCARD','PAY & GO'))
                                ELSE
                                        mensagem('Chamando o Gerenciador: '+IF(SUBSTR(UPPER(mgerenciador),1,5) = 'HIPER','HIPERCARD','PADRAO'))
                                ENDIF
                                */
                                IF trata_tef(NumeroCupom,0,nTotalAPagar)
                                        m_flag_f := 'T'
                                ELSE
                                        atencao("Transacao nao foi aprovada !")
                                        fecha_tela()
                                        mvalor := 0
                                        m_flag_f := ''
                                        LOOP
                                ENDIF
                                m_intevalo :={}
                                m_parcela  :={}
                                i := 0
                                FOR i = 1 TO mqtd_parc
                                        AADD(m_intevalo,car->prazo*i)
                                NEXT
                                //atencao(transform(iat(mvalor/mqtd_parc,'T',2),'999,999.9999')+' - '+transform(iat(mvalor),'999,999.99'))
                                IF iat((mvalor/mqtd_parc),'T',2)*mqtd_parc # iat(mvalor)
                                        mdif_parc := iat(mvalor) - iat(mvalor/mqtd_parc,'T',2)*mqtd_parc
                                ENDIF
                                i := 0
                                FOR i = 1 TO mqtd_parc
                                        mvencimento := mdata_sis + m_intevalo[i]
                                        IF mqtd_parc > 9
                                                        AADD(m_parcela,{ALLTRIM(NumeroCupom)+'-'+STRZERO(i,2)+'/'+STRZERO(mqtd_parc,2),mvencimento,iat(mvalor/mqtd_parc,'T',2),car->cod_forn,car->tipo_conta})
                                        ELSE
                                                        AADD(m_parcela,{ALLTRIM(NumeroCupom)+'-'+STRZERO(i,1)+'/'+STRZERO(mqtd_parc,1),mvencimento,iat(mvalor/mqtd_parc,'T',2),car->cod_forn,car->tipo_conta})
                                        ENDIF
                                NEXT
                                IF mdif_parc # 0
                                        m_parcela[1,3] := m_parcela[1,3] + mdif_parc
                                ENDIF
                                IF car->tipo_venda = 'A' .OR. car->prazo = 0
                                        mtipo_comp = 'AV'
                                ELSE
                                        mtipo_comp = 'AP'
                                ENDIF
                                i := mvalor := 0
                                FOR i = 1 TO mqtd_parc
                                        mvalor := mvalor + m_parcela[i,3]
                                NEXT
                        ELSE
                                NumeroCupom := mdocumento
                                mqtd_parc := 1
                                setcor(1)
                                @ 3,13 GET NumeroCupom
                                @ 4,13 GET mqtd_parc PICT '99' VALID IF(EMPTY(mqtd_parc) .OR. mqtd_parc > 15,.F.,.T.)
                                READ
                                IF LASTKEY() = 27
                                        fecha_tela()
                                        LOOP
                                ENDIF
                                IF op_simnao('S','Confirma Inclusao da FORMA DE PAGAMENTO:') = 'N'
                                        fecha_tela()
                                        LOOP
                                ENDIF
                                m_intevalo :={}
                                m_parcela  :={}
                                i := 0
                                FOR i = 1 TO mqtd_parc
                                        AADD(m_intevalo,car->prazo*i)
                                NEXT
                                i := 0
                                FOR i = 1 TO mqtd_parc
                                        mvencimento := mdata_sis + m_intevalo[i]
                                        IF mqtd_parc > 9
                                                AADD(m_parcela,{ALLTRIM(NumeroCupom)+'-'+STRZERO(i,2)+'/'+STRZERO(mqtd_parc,2),mvencimento,iat(mvalor/mqtd_parc,'T',2),car->cod_forn,car->tipo_conta})
                                        ELSE
                                                AADD(m_parcela,{ALLTRIM(NumeroCupom)+'-'+STRZERO(i,1)+'/'+STRZERO(mqtd_parc,1),mvencimento,iat(mvalor/mqtd_parc,'T',2),car->cod_forn,car->tipo_conta})
                                        ENDIF
                                NEXT
                                IF mvalor - (iat((mvalor/mqtd_parc),'T',2) * mqtd_parc) > 0
                                        m_parcela[1,3] := m_parcela[1,3] + (mvalor - (iat((mvalor/mqtd_parc),'T',2) * mqtd_parc))
                                ENDIF
                                IF car->tipo_venda = 'A' .OR. car->prazo = 0
                                        mtipo_comp = 'AV'
                                ELSE
                                        mtipo_comp = 'AP'
                                ENDIF
                                i := mvalor := 0
                                FOR i = 1 TO mqtd_parc
                                        mvalor := mvalor + m_parcela[i,3]
                                NEXT
                        ENDIF
                        //mtipo_comp = "AP"
                ELSEIF mtipo_pg = 6
                        mcredito := cli_dup(mcod_cli,'*')
                        IF mcredito = 0
                                atencao('Esta opcao nao pode ser usada pois o Cliente: '+mcod_cli+' nao tem CREDITO')
                                LOOP
                        ENDIF
                        c_credito()
                        op_tela(30,30,34,60,' CREDITO CLIENTE ')
                        /*
                        IF ! EMPTY(mnum_ped)
                                mn_cred := ALLTRIM(STR(mnum_ped))+SPACE(8-LEN(ALLTRIM(STR(mnum_ped))))
                        ELSE
                                mn_cred := SPACE(8)
                        ENDIF
                        */
                        mvencimento := mdata_sis
                        DEVPOS(0,1);DEVOUT('No.CREDITO...:')
                        DEVPOS(1,1);DEVOUT('Data.........:')
                        DEVPOS(2,1);DEVOUT('Valor R$.....:')
                        setcor(3)
                        setcor(1)
                        @ 0,16 GET mn_cred
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        achou := f := 0
                        FOR f = 1 TO LEN(m_recebe)
                                IF m_recebe[f,5] = mn_cred
                                        atencao('Este Credito ja foi solicitado....')
                                        achou := 1
                                        EXIT
                                ENDIF
                        NEXT
                        IF achou > 0
                                LOOP
                        ENDIF
                        mcredito_aux := cli_dup(mcod_cli,'*',mn_cred)
                        IF mcredito_aux = 0
                                atencao('Nao existe CREDITO com esse Numero ....')
                                fecha_tela()
                                LOOP
                        ENDIF
                        IF mdiferenca < mcredito_aux
                                mvalor := mdiferenca
                        ELSE
                                mvalor := mcredito_aux
                        ENDIF
                        @ 1,16 SAY mvencimento
                        setcor(1)
                        @ 2,16 GET mvalor PICT '9,999,999.99' VALID IF(mvalor>mcredito,.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        mtipo_comp = 'AV'
                ELSEIF mtipo_pg = 7
                        op_tela(30,30,32,70,' P I X ')
                        DEVPOS(1,2);DEVOUT("Valor do PIX........R$:")
                        @ 1,25 GET mpix PICT "999,999,999.99"
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF

                ELSE
                        LOOP
                ENDIF
                fecha_tela()
                IF EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND. EMPTY(mn_dup) .AND. EMPTY(mn_fin) .AND.;
                   EMPTY(mcod_cart) .AND. EMPTY(mn_trans) .AND. EMPTY(mn_cred) .AND. EMPTY(mpix) .AND. mvalor+mdinheiro > 0
                        LOOP
                ENDIF
                IF (! EMPTY(mn_banco) .OR. ! EMPTY(mn_dup) .OR. ! EMPTY(mn_fin) .OR. ! EMPTY(mcod_cart) .OR. ! EMPTY(mn_cred)) .AND. ! EMPTY(mn_trans) .AND. EMPTY(mcod_cli)
                        atencao("Este tipo de operacao exige cliente para que nao haja problemas futuros")
                       LOOP
                ENDIF
                IF m_flag_f = 'T'
                        mopcao := 'S'
                ELSE
                        mopcao := op_simnao("S","Confirma a Inclusao:")
                ENDIF
                //setcor(1)
                //WVW_DrawLabel(,li+12,ci,TRANSFORM(mtot_nota,ALLTRIM('@E '+m_set[1,98])),,,210,, 'arial black',60,35,,,,,)

                //SUB_BANNER(li+8,26,TRANSFORM(mtot_nota,"999,999.99"))
                IF mopcao = "N"
                        LOOP
                ENDIF
                IF mopcao = "S"
                        mtot_rece := mtot_rece + mvalor + mdinheiro + mpix
                        IF ! (EMPTY(mdinheiro) .AND. EMPTY(mpix) .AND. EMPTY(mn_banco) .AND.;
                             EMPTY(mn_dup) .AND. EMPTY(mcod_cart) .AND. EMPTY(mn_fin) .AND. EMPTY(mn_trans) .AND. EMPTY(mn_cred));
                              .OR. mdinheiro = mtot_nota
                                IF ! EMPTY(mdinheiro) .OR. mdinheiro = mtot_nota
                                        IF mdinheiro + mtot_verif > mtot_nota
                                                mtroco := (mdinheiro+mtot_verif) - (mtot_nota)
                                                mvalor := mtot_nota - mtot_verif
                                                mdinheiro := 0
                                        ELSE
                                                mvalor := mdinheiro
                                        ENDIF
                                        //               1    2      3         4       5        6        7         8                  8       10     11       12    13      14
                                        AADD(m_recebe,{"DN","AV",mn_banco,mn_cheque,"99999999",mdata_sis,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                ELSEIF ! EMPTY(mpix)
                                        mvalor := mpix
                                        //               1    2      3         4       5        6        7         8                  8       10     11       12    13      14
                                        AADD(m_recebe,{"PX","AV",mn_banco,mn_cheque,"99999999",mdata_sis,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                ELSE
                                        IF ! EMPTY(mn_banco)
                                                IF mvencimento > mdata_sis
                                                        //               1    2      3         4       5        6        7         8                  9       10     11       12    13      14
                                                        AADD(m_recebe,{"CH","AP",mn_banco,mn_cheque,mn_dup,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                                ELSE
                                                        AADD(m_recebe,{"CH","AV",mn_banco,mn_cheque,mn_dup,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                                ENDIF
                                        ELSEIF ! EMPTY(mn_dup)
                                                 AADD(m_recebe,{"DU","AP",mn_banco,mn_cheque,mn_dup,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                        ELSEIF ! EMPTY(mn_cupom)
                                                i := 0
                                                FOR i = 1 TO LEN(m_parcela)
                                                        IF EMPTY(m_parcela[i,1])
                                                                LOOP
                                                        ENDIF
                                                        IF m_parcela[i,2] > mdata_sis
                                                                //               1        2       3        4       5          6        7           8                 9            10          11      12       13       14        15         16            17            18
                                                                AADD(m_recebe,{'CT',mtipo_comp,SPACE(3),SPACE(6),mn_dup,m_parcela[i,2],'B',STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,mdesc_cart,m_parcela[i,4],m_parcela[i,5],' '})
                                                        ELSE

                                                                AADD(m_recebe,{'CT',mtipo_comp,SPACE(3),SPACE(6),mn_dup,m_parcela[i,2],'B',STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,mdesc_cart,m_parcela[i,4],m_parcela[i,5],' '})
                                                        ENDIF
                                                NEXT
/*
*                                               mvencimento := mdata_sis + mprazo_cart
                                                IF mvencimento > mdata_sis
                                                        AADD(m_recebe,{"CT","AP",mn_banco,mn_cheque,mn_dup,mvencimento,"B",STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart})
                                                ELSE
                                                                  //     1    2     3         4         5       6       7          8               9       10      11    12        13     14    15
                                                        AADD(m_recebe,{"CT","AV",mn_banco,mn_cheque,mn_dup,mvencimento,"B",STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart})
                                                ENDIF
*/
                                        ELSEIF ! EMPTY(mn_fin)
                                                IF mvencimento > mdata_sis
                                                        AADD(m_recebe,{"FI","AP",mn_banco,mn_cheque,mn_dup,mvencimento,"B",STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                                ELSE
                                                        AADD(m_recebe,{"FI","AV",mn_banco,mn_cheque,mn_dup,mvencimento,"B",STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                                ENDIF
                                        ELSEIF ! EMPTY(mn_trans)
                                                AADD(m_recebe,{"TR","AP",mn_banco,mn_cheque,mn_trans,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                        ELSEIF ! EMPTY(mn_cred)
                                                mcredito := mcredito - mvalor
                                                AADD(m_recebe,{'CR','AV',SPACE(3),SPACE(6) ,mn_cred,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',' '})
                                        ENDIF
                                ENDIF
                        ENDIF
                        mtot_verif := mtot_verif + mvalor       //+ mdinheiro
                        mdiferenca := iat(iat(mtot_nota - mtot_verif,2),2)
                        setcor(3)
                        DEVPOS(li+18,21);DEVOUTPICT(mtot_verif,"9,999,999.99")
                        DEVPOS(li+19,21);DEVOUTPICT(mtot_nota - mtot_verif,"9,999,999.99")
                        limpa(li+27,1,lb-1,cb-1)
                        f := 1
                        i := 0
                        FOR i = 1 TO LEN(m_recebe)
                                DEVPOS(li+27+f,1)
                                IF m_recebe[i,1] = "DN"
                                        //DEVPOS(li+23+f,1);DEVOUT("DINHEIRO.....: ")
                                        DEVOUT("DINHEIRO.....: ")
                                ELSEIF m_recebe[i,1] = "CH"
                                        //DEVOUT("CHEQUE.......: Bco.: "+m_recebe[i,3]+" No.: "+m_recebe[i,4]+" Venc.:"+DTOC(m_recebe[i,6]))
                                        DEVOUT("CHEQUE.......: No: "+m_recebe[i,4]+" Vc:"+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = "DU"
                                        DEVOUT("DUPLICATA....: No: "+m_recebe[i,5]+" Vc:"+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = "CT"
                                        DEVOUT("CARTAO.......: "+m_recebe[i,8]+"-"+LEFT(m_recebe[i,12],10)+" Cupom: "+m_recebe[i,9])
                                ELSEIF m_recebe[i,1] = "FI"
                                        DEVOUT("FINANCIAMENTO: "+m_recebe[i,11]+" Venc.: "+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = "TR"
                                        DEVOUT("TRANSFERENCIA: "+m_recebe[i,11]+" Venc.: "+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = "CR"
                                        DEVOUT("CREDITO......: ")
                                ELSEIF m_recebe[i,1] = "PX"
                                        DEVOUT("P I X .......: ")
                                ENDIF
                                DEVPOS(li+27+f,39);DEVOUT("Vlr:"+TRANSFORM(m_recebe[i,10],"999,999.99"))
                                IF i > 4
                                        SCROLL(li+27,1,lb-1,cb-1,1)
                                ELSE
                                        f++
                                ENDIF
                        NEXT
                        mdinheiro := 0
                        setcor(1)
                        IF mtot_verif >= mtot_nota
                                IF m_flag_f = 'T'
                                        mopcao := 'S'
                                ELSE
                                        mopcao := op_simnao("S","Todas informacoes [OK], Confirma Dados Preenchido:")
                                ENDIF
                                IF mopcao = "N"
                                        ASIZE(m_recebe,0)
                                        mtot_verif := 0
                                        setcor(3)
                                        DEVPOS(li+18,21);DEVOUTPICT(mtot_verif,"9,999,999.99")
                                        DEVPOS(li+19,21);DEVOUTPICT(mtot_nota,"9,999,999.99")
                                        setcor(1)
                                        limpa(li+27,1,lb-1,cb-1)
                                        LOOP
                                ENDIF
                                IF mopcao = "S"
                                        IF mtroco > 0
                                                //op_tela(10,05,40,95,' T R O C O ')
                                                //DEVPOS(0,0);DEVOUT('')
                                                //WVW_DrawLabel(,00,0,'   Troco',,,210,, 'arial black',60,35,,,,,)
                                                //WVW_DrawLabel(,05,0,'R$:'+TRANSFORM(mtroco,ALLTRIM('@E 99,999.99')),,,210,, 'arial black',60,35,,,,,)
                                                //botao1(30,0,45,120,' T R O C O ')
                                                WVW_DrawLabel(,32,1,'   Troco',,,210,, 'arial black',60,25,,,,,)
                                                WVW_DrawLabel(,37,1,'R$:'+TRANSFORM(mtroco,ALLTRIM('@E 99,999.99')),,,210,, 'arial black',60,25,,,,,)
                                                INKEY(.90,850)
                                                //fecha_tela()
                                        ENDIF
                                        EXIT
                                ENDIF
                        ENDIF
                ENDIF
        ENDDO
        IF LASTKEY() = 27;LOOP;ENDIF
                //IBR_INI_FECHA(mdesconto)
                mensagem("Aguarde Finalizando o Cupom Fiscal...")

                mnome_arq := ' '
                mvalor_cart := 0
                mind_pg := '  '
                mtef := ' '
                i := 0
                IF m_flag_f # 'T'
                        //ATENCAO(TRANSFORM(mdesc_tot,'9999.99'))
                        //ini_fechamento(mdesc_tot)
                ENDIF

                mforma_pag := ''
                i:=0
                FOR i = 1 TO LEN(m_recebe)
                        IF m_recebe[i,1] = 'DN'
                                mforma_pag := 'DINHEIRO'
                                //mind_cartao := forma_pag('DINHEIRO',m_recebe[i,10]+mtroco)
                                //mind_cartao := forma_pag('DINHEIRO',m_recebe[i,10]-10)
                        ELSEIF m_recebe[i,1] = 'CH'
                                mforma_pag := 'CHEQUE'
                        ELSEIF m_recebe[i,1] = 'PX'
                                mforma_pag := 'P I X'
                                //mind_cartao := forma_pag('CHEQUE',m_recebe[i,10])
                        ELSEIF m_recebe[i,1] = 'DU'
                                mforma_pag := 'DUPLICATA'
                                //mind_cartao := forma_pag('DUPLICATA',m_recebe[i,10])
                        ELSEIF m_recebe[i,1] = 'FI'
                                mforma_pag := 'FINANCIAMENTO'
                                //mind_cartao := forma_pag('FINANCIAMENTO',m_recebe[i,10])
                        ELSEIF m_recebe[i,1] = 'CR'
                                mforma_pag := 'CREDITO'
                                //mind_cartao := forma_pag('CREDITO',m_recebe[i,10])
                        ELSEIF m_recebe[i,1] = 'CT'
                                LOOP
                                //cons_forma := {}
                                //sr_getconnection():exec("SELECT * FROM saccarta WHERE codigo = "+sr_cdbvalue(m_recebe[i,8]),,.t.,@cons_forma)
                                //IF LEN(cons_forma) = 0
                                //        LOOP
                                //ENDIF
                                /*
                                mvlr := y := 0
                                FOR y = 1 TO LEN(m_recebe)
                                        IF m_recebe[y,1] # 'CT'
                                                LOOP
                                        ENDIF
                                        cons_forma := {}
                                        sr_getconnection():exec("SELECT * FROM saccarta WHERE codigo = "+sr_cdbvalue(m_recebe[y,8]),,.t.,@cons_forma)
                                        IF LEN(cons_forma) = 0
                                                LOOP
                                        ENDIF
                                        mind_cartao := forma_pag(ALLTRIM(cons_forma[1,2]),m_recebe[y,10])
                                        //mvlr := mvlr + m_recebe[y,10]
                                NEXT
                                mind_tef := mind_cartao
                                */
                        ENDIF
                        SET CENTURY ON
                NEXT
                y := mvlr_cartao := 0
                FOR y = 1 TO LEN(m_recebe)
                        IF m_recebe[y,1] # 'CT'
                                LOOP
                        ENDIF
                        cons_forma := {}
                        sr_getconnection():exec("SELECT * FROM saccarta WHERE codigo = "+sr_cdbvalue(m_recebe[y,8]),,.t.,@cons_forma)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_forma) = 0
                                LOOP
                        ENDIF
                        mvlr_cartao := mvlr_cartao + m_recebe[y,10]
                NEXT
                IF mtef = '*'
                        LOOP
                ENDIF
                // Mensagem rodape do cumpom fiscal.
                /*
                SET CENTURY ON
                mcpf_cnpj := IF(! EMPTY(cons_cli[1,34]),TRANSFORM(cons_cli[1,34],'@@R 999.999.999-99'),IF(! EMPTY(cons_cli[1,32]),TRANSFORM(cons_cli[1,32],'@@R 99.999.999/9999-99'),''))
                mcpf_cnpj_cli := STRTRAN(mcpf_cnpj,'.','')
                mcpf_cnpj_cli := ALLTRIM(STRTRAN(mcpf_cnpj_cli,'-',''))
                mnome_cli := cons_cli[1,2]+'-'+cons_cli[1,3]
                mend_aux  := IF(! EMPTY(cons_cli[1,21]),ALLTRIM(cons_cli[1,22])+'-'+ALLTRIM(cons_cli[1,24])+' - '+ALLTRIM(cons_cli[1,25])+'-'+ALLTRIM(cons_cli[1,26]),'')
                mend_cli  := IF(! EMPTY(cons_cli[1,21]),RTRIM(cons_cli[1,21]),'')
                mlinha1 := ALLTRIM(mmd5)
                mlinha2 := ALLTRIM(mmd5)+m_qp+IF(! EMPTY(mnum_pv),'PV: '+STRZERO(mnum_pv,10)+m_qp,'')+;
                           IF(muf_firm = 'MG','MINAS LEGAL:'+m_cnpj+' '+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),7)+' '+ALLTRIM(TRANSFORM(iat(mtot_nota,2)*100,'99999999'))+m_qp,'')+;
                           IF(muf_firm = 'PB' .AND. ! EMPTY(mcpf_cnpj_cli),'PARAIBA LEGAL - RECEITA CIDADA'+m_qp+'TORPEDO PREMIADO:'+m_cnpj+' '+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),7)+' '+ALLTRIM(TRANSFORM(iat(mtot_nota,2)*100,'99999999'))+' '+mcpf_cnpj_cli+m_qp,'')

                           //IF(muf_firm = 'RJ','CUPOM MANIA:'+m_cnpj+' '+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),7,2)+' '+ALLTRIM(TRANSFORM(iat(mtot_nota,2)*100,'99999999'))+m_qp,'')+;

                //IBR_COMANDO('ECF.IdentificaPAF',{mlinha1, mlinha2},,,.T. )
                IF m_indiv[1,45] = 'EPSON'
                        fim_fecha('Val Aprox Tributos R$:'+ALLTRIM(TRANSFORM(mtot_imposto,'999999.99'))+' ('+ALLTRIM(TRANSFORM((mtot_imposto/mtot_nota)*100,'999999.99'))+'%) Fonte:IBPT'+m_qp+'HTI SISTEMAS 81'+mfone_HTI+'-Aplic:'+mpaf_HTI+' '+mpaf_ver+m_qp+;
                                ALLTRIM(m_set[1,25]+m_set[1,26])+' - Vend.:'+STRZERO(mcod_vend,3)+IF(msem_cx = 1,' - S/C',''))
                ELSE
                        fim_fecha('<n>Val Aprox Tributos R$:'+ALLTRIM(TRANSFORM(mtot_imposto,'999999.99'))+' ('+ALLTRIM(TRANSFORM((mtot_imposto/mtot_nota)*100,'999999.99'))+'%) Fonte:IBPT</n>'+m_qp+'HTI SISTEMAS 81'+mfone_HTI+'-Aplic:'+mpaf_HTI+' '+mpaf_ver+m_qp+;
                                ALLTRIM(m_set[1,25]+m_set[1,26])+' - Vend.:'+STRZERO(mcod_vend,3)+IF(msem_cx = 1,' - S/C',''))
                ENDIF

                */
                //ATENCAO(ALLTRIM(mrefnfe) )

                mensagem('CRIANDO a Nota No. '+mdocumento)
                        //mArq := FCREATE('ENTNFE.TMP')
                sLinhas     :=  '[Identificacao]'                  + m_qp
                mdata_nfe := DTOC(mdata_sis)+' '+time()
                //atencao(mdata_nfe+' '+m_indiv[1,37])
                m_set[1,135] := STRTRAN(m_set[1,135],'-','')
                m_set[1,135] := STRTRAN(m_set[1,135],'.','')
                mcpf := STRTRAN(mcpf,'-','')
                mcgc := STRTRAN(mcgc,'.','')
                //IF ALLTRIM(cons_cli[1,33]) = '' .OR. EMPTY(cons_cli[1,33])
                        mindIEDest := '9'
                //ELSEIF ALLTRIM(cons_cli[1,33]) = 'ISENTO'
                //        mindIEDest := '2'
                //ELSE
                //        mindIEDest := '1'
                //ENDIF
                /*
                xJus=TESTE DE CONTINGENCIA DA NFE EM CONTINGENCIA
                dhCont=07/08/2018 13:43:11
                */
                sLinhas := sLinhas + 'NaturezaOperacao= VENDA PARA DENTRO DO ESTADO'+ m_qp + ; //'Modelo='+ALLTRIM(mmodelo)                      + m_qp + ;
                                'Modelo=65'                      + m_qp + ;
                                'Serie=001'                      + m_qp + ;	//'Codigo='+ALLTRIM(mdocumento)                   + m_qp + ;
                                'Codigo=0'                                      + m_qp + ;
                                'Numero='+ALLTRIM(mdocumento)                   + m_qp + ;
                                'Emissao='+DTOC(mdata_sis)+' '+time()           + m_qp + ;
                                'Saida='+DTOC(mdata_sis)                     + m_qp + ; //'Tipo=1'                               + m_qp + ;
                                IF(mtp_vend = 'AP','FormaPag=1',IF(mtp_vend = 'AV','FormaPag=0','FormaPag=2'))   + m_qp +; //'Finalidade='+mtipo_nfe                         + m_qp + ;'idDest='+IF(cons_cli[1,25] = ALLTRIM(m_set[1,19]),'1','2')          + m_qp + ;'indFinal='+ALLTRIM(mindFinal)                  + m_qp + ;'indPress='+ALLTRIM(mindPress)                  + m_qp + ;
                                'Finalidade=1'                          + m_qp + ;
                                'idDest=1'                              + m_qp + ;
                                'indFinal=1'                            + m_qp + ;
                                'indPres=1'                             + m_qp + ;
                                'Tpimp=4'                                       + m_qp  //4
                                IF mtipo_emi # 1
                                        sLinhas := sLinhas + 'xJust=NFE EM CONTINGENCIA POR FALTA DE COMUNICACAO COM SERVIDOR'+ m_qp + ;
                                                             'dhCont='+DTOC(mdata_sis)+' '+time()           + m_qp
                                ENDIF
                sLinhas := sLinhas + '[Emitente]'                                    + m_qp + ;
                                'CNPJ='+SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2)+ m_qp + ; //'CNPJ=03726794000163'+ m_qp + ;
                                'IE='+ALLTRIM(m_set[1,128])                     + m_qp + ;
                                'Razao='+ALLTRIM(m_set[1,129])                  + m_qp + ;
                                'Fantasia='+ALLTRIM(m_set[1,130])               + m_qp + ;
                                'Fone='+ALLTRIM(m_set[1,136])                   + m_qp + ;
                                'CEP='+ALLTRIM(m_set[1,135])                    + m_qp + ;
                                'Logradouro='+ALLTRIM(m_set[1,132])             + m_qp + ;
                                'Numero='+ALLTRIM(m_set[1,160])                 + m_qp + ;
                                'Complemento='+ALLTRIM(m_set[1,161])            + m_qp + ;
                                'Bairro='+ALLTRIM(m_set[1,133])                 + m_qp + ;
                                'CidadeCod='+ALLTRIM(mcod_cid_emit)             + m_qp + ;
                                'Cidade='+ALLTRIM(m_set[1,134])                 + m_qp + ;
                                'UF='+ALLTRIM(m_set[1,19])                      + m_qp + ;
                                'CRT='+mcrt                                     + m_qp + ;
                                '[Destinatario]'                                + m_qp + ;
                                IF( ! EMPTY(mcpf),'CNPJ='+ALLTRIM(mcpf),'CNPJ='+ALLTRIM(mcgc))+ m_qp+;
                                'indIEDest=9'                         + m_qp + ; //'indIEDest='+mindIEDest                         + m_qp + ;
                                'NomeRazao='+ALLTRIM(mcliente) + m_qp
                                /*
                                'IE='+ALLTRIM(cons_cli[1,33])                  + m_qp + ;
                                'Fone='+ALLTRIM(cons_cli[1,29])                          + m_qp + ;
                                'CEP='+SUBSTR(ALLTRIM(cons_cli[1,26]),1,8)                           + m_qp + ;
                                'Logradouro='+ALLTRIM(cons_cli[1,21])                    + m_qp + ;
                                'Numero='+RTRIM(cons_cli[1,136])                         + m_qp + ;
                                'Complemento='+ALLTRIM(cons_cli[1,137])                  + m_qp + ;
                                'Bairro='+ALLTRIM(cons_cli[1,22])                        + m_qp + ;
                                'CidadeCod='+ALLTRIM(mcons_cid[1,1])                      + m_qp + ;
                                'Cidade='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                                'UF='+cons_cli[1,25]                                     + m_qp
                                */
                //m_email := cons_cli[1,27]
                mbase_icm := i := mtot_nota := mitem := 0
                FOR i = 1 TO LEN(m_nota)
                        IF m_nota[i,5] = 0
                                LOOP
                        ENDIF
                        mitem ++
                        //IF mcod_fat = '02' .OR. mcod_fat = '  '
                        //        mpr_fat := m_nota[i,12]
                	//ELSE
	       	               mpr_fat := m_nota[i,7]
                	//ENDIF
                        mpr_fat := iat(mpr_fat,2)
                        mcons_prod := {}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_nota[i,21]),,.t.,@mcons_prod)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(mcons_prod) = 0
                                atencao('Nao foi possivel encontrar este Produto: '+m_nota[i,21])
                                LOOP
                        ENDIF
                        /*
                        mcest := ver_cest(ALLTRIM(mcons_prod[1,70]))
                        cons_cest := {}
                        IF ! EMPTY(mcest)
                                sr_getconnection():exec("SELECT * FROM saccest WHERE codigo = "+sr_cdbvalue(mcest),,.t.,@cons_cest)
                                IF LEN(cons_cest) > 0
                                        m_cst := SUBSTR(mcons_prod[1,68],1,1)
                                        IF m_cst $ '0345'
                                                mtot_imposto := mtot_imposto + iat(((m_nota[i,5] * mpr_fat) * (cons_cest[1,5] / 100)),m_set[1,103])
                                        ELSE
                                                mtot_imposto := mtot_imposto + iat(((m_nota[i,5] * mpr_fat) * (cons_cest[1,6] / 100)),m_set[1,103])
                                        ENDIF
                                        mtot_imposto := mtot_imposto + iat(((m_nota[i,5] * mpr_fat) * (cons_cest[1,7] / 100)),m_set[1,103])
                                        mtot_imposto := mtot_imposto + iat(((m_nota[i,5] * mpr_fat) * (cons_cest[1,8] / 100)),m_set[1,103])
                                ENDIF
                        ENDIF
                        */
                        IF m_nota[i,34] > 0
                                mtot_imposto := mtot_imposto + iat((((m_nota[i,5] * mpr_fat) * m_nota[i,34]) * ((ver_ncm(mcons_prod[1,70],mcons_prod[1,68])+18) / 100)),m_set[1,103])
                        ELSE
                                mtot_imposto := mtot_imposto + iat(((m_nota[i,5] * mpr_fat) * ((ver_ncm(mcons_prod[1,70],mcons_prod[1,68])+18) / 100)),m_set[1,103])
                        ENDIF
                        sLinhas := slinhas +    '[Produto'+STRZERO(mitem,3)+']'      + m_qp
                                                IF ! EMPTY(m_nota[i,36])
                                                        sLinhas := slinhas + 'CFOP='+ALLTRIM(m_nota[i,36]) + m_qp
                                                ELSE
                                                        IF STRZERO(VAL(m_nota[i,35]),2) = '60' .OR. STRZERO(VAL(m_nota[i,35]),3) = '500'
                                                                sLinhas := slinhas + 'CFOP=5405' + m_qp
                                                        ELSE
                                                                sLinhas := slinhas + 'CFOP=5102' + m_qp
                                                        ENDIF
                                                ENDIF
                                                IF mver_acbr = '4.00'
                                                        sLinhas := slinhas + 'Codigo='+STRZERO(VAL(mcons_prod[1,8]),6)+ m_qp + ;
                                                        IF(! EMPTY(mcons_prod[1,99]),'Descricao='+ALLTRIM(mcons_prod[1,99]+mcons_prod[1,4]),'Descricao='+ALLTRIM(m_nota[i,2]))+ m_qp +;
                                                        IF(! EMPTY(ALLTRIM(mcons_prod[1,2])),'cEAN='+ALLTRIM(mcons_prod[1,2]),'cEAN=SEM GTIN')+ m_qp +;
                                                        IF(! EMPTY(ALLTRIM(mcons_prod[1,2])),'cEANTrib='+ALLTRIM(mcons_prod[1,2]),'cEANTrib=SEM GTIN')+ m_qp +;
                                                        'NCM='+ALLTRIM(mcons_prod[1,70])+ m_qp
                                                ELSE
                                                        sLinhas := slinhas + 'Codigo='+STRZERO(VAL(mcons_prod[1,8]),6)+ m_qp + ;
                                                        IF(! EMPTY(mcons_prod[1,99]),'Descricao='+ALLTRIM(mcons_prod[1,99]+mcons_prod[1,4]),'Descricao='+ALLTRIM(m_nota[i,2]))+ m_qp +;
                                                        IF(m_set[1,14] = 'S',IF(LEN(ALLTRIM(mcons_prod[1,2])) >= 13,'cEAN='+ALLTRIM(mcons_prod[1,2]),''),'cEAN=')+ m_qp +;
                                                        IF(m_set[1,14] = 'S',IF(LEN(ALLTRIM(mcons_prod[1,2])) >= 13,'cEANTrib='+ALLTRIM(mcons_prod[1,2]),''),'cEANTrib=')+ m_qp +;
                                                        'NCM='+ALLTRIM(mcons_prod[1,70])+ m_qp
                                                ENDIF
                                                mcest := ALLTRIM(mcons_prod[1,114])
                                                IF EMPTY(mcest)
                                                        mcest := ver_cest(ALLTRIM(mcons_prod[1,70]))
                                                ENDIF
                                                IF LEN(mcest) < 7
                                                        mcest := STRZERO(VAL(mcest),7)
                                                ENDIF

                                                //ATENCAO(ver_cest(ALLTRIM(mcons_prod[1,70])))
                                                IF ! EMPTY(mcest)
                                                        sLinhas := slinhas +'CEST='+mcest+ m_qp
                                                ELSE
                                                        sLinhas := slinhas +'CEST=' + m_qp
                                                ENDIF
                                                IF ! EMPTY(mcons_prod[1,118])
                                                        sLinhas := slinhas +'Unidade='+ALLTRIM(mcons_prod[1,118])+ m_qp
                                                ELSE
                                                        sLinhas := slinhas +'Unidade='+ALLTRIM(m_nota[i,8])+ m_qp
                                                ENDIF
                                                sLinhas := slinhas + 'Quantidade='+STRTRAN(ALLTRIM(TRANSFORM(m_nota[i,5],m_set[1,99])),',','')+ m_qp + ;
                                                'Quantidade='+STRTRAN(ALLTRIM(TRANSFORM(m_nota[i,5],m_set[1,99])),',','')+ m_qp + ;
                                                'ValorUnitario='+ALLTRIM(TRANSFORM(iat(mpr_fat,2),STRTRAN(ALLTRIM(m_set[1,98]),',','')))+ m_qp + ;
                                                'ValorTotal='+ALLTRIM(TRANSFORM(iat(mpr_fat,2)*m_nota[i,5],STRTRAN(ALLTRIM(m_set[1,98]),',','')))+ m_qp + ;
                                                '[ICMS'+STRZERO(mitem,3)+']'+ m_qp + ;
                                                'Origem=0'+ m_qp
                                                mtot_nota := mtot_nota + iat(mpr_fat*m_nota[i,5])
                                                //MvCredICMSSN := (iat(mpr_fat,2)*m_nota[i,5]) * 0.05
                                                IF m_set[1,126] = 'S'
                                                        sLinhas := slinhas +'CSOSN='+ALLTRIM(STR(VAL(m_nota[i,35])))+ m_qp +;
                                                                            'ModalidadeST=4' + m_qp
                                                                            //'pCredSN=5'+ m_qp+;
                                                                            //'vCredICMSSN='+ALLTRIM(TRANSFORM(MvCredICMSSN,STRTRAN(ALLTRIM(m_set[1,98]),',','')))+ m_qp
                                                        mbase_icm := mbase_icm + 0
                                                        mtot_icm := mtot_icm + 0
		              			ELSEIF m_nota[i,25] = 'S' //DESCONTO DE ICMS
//atencao('ok')
                                                        sLinhas := slinhas + IF(LEN(ALLTRIM(m_nota[i,35])) > 3,'CST='+STRZERO(VAL(m_nota[i,35]),3),'CST='+STRZERO(VAL(m_nota[i,35]),2))+ m_qp
                                                        IF ! EMPTY(m_nota[i,20])
                                                                        IF VAL(m_nota[i,35]) = 40 .OR. VAL(m_nota[i,35])= 41 .OR. VAL(m_nota[i,35]) = 50
                                                                                mbase_icm := mbase_icm + 0
                                                                                mtot_icm := mtot_icm + 0
                                                                        ELSE
                                                                                mbase_icm := mbase_icm + iat(((iat(mpr_fat,2) * m_nota[i,5])*m_nota[i,34]),2)
                                                                                mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * iat((((iat(mpr_fat,2) * m_nota[i,5])*m_nota[i,34])),2),2)
                                                                        ENDIF
                                                                        sLinhas := slinhas +    'vBC='+ALLTRIM(TRANSFORM(iat(((iat(mpr_fat,2) * m_nota[i,5])*m_nota[i,34]),2),'999999.99'))+ m_qp + ;
                                                                                        'pICMS='+ALLTRIM(TRANSFORM(m_nota[i,20],'999.99'))+ m_qp + ;
                                                                                        'vICMS='+ALLTRIM(TRANSFORM(iat((m_nota[i,20]/100) * iat((((iat(mpr_fat,2) * m_nota[i,5])*m_nota[i,34])),2),2),'999999.99'))+ m_qp+;
                                                                                        'pRedBCEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                        'vBCEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                        'pICMSEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                        'vICMSEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp
                                                                        mbase_fcp := iat(((iat(mpr_fat,2) * m_nota[i,5])*m_nota[i,34]),2)
                                                        ELSE
                                                                sLinhas := slinhas +    'vBC='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                        'pICMS='+ALLTRIM(TRANSFORM(m_nota[i,20],'999.99'))+ m_qp +;
                                                                                        'vICMS='+ALLTRIM(TRANSFORM(iat((iat(m_nota[i,20])/100) * iat((((iat(mpr_fat) * m_nota[i,5])*m_nota[i,34])),2),2),'999999.99'))+ m_qp +;
                                                                                        'pRedBCEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                        'vBCEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                        'pICMSEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                        'vICMSEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp
                                                                        mbase_fcp := 0
                                                        ENDIF
                                                        sLinhas := slinhas +  'pRedBC='+ALLTRIM(TRANSFORM(m_nota[i,34],'999999.99'))+ m_qp
                                                ELSE
                                                        sLinhas := slinhas + IF(LEN(ALLTRIM(m_nota[i,35])) > 3,'CST='+STRZERO(VAL(m_nota[i,35]),3),'CST='+STRZERO(VAL(m_nota[i,35]),2))+ m_qp
                                                        IF ! EMPTY(m_nota[i,20])
                                                                        IF VAL(m_nota[i,35]) = 40 .OR. VAL(m_nota[i,35])= 41 .OR. VAL(m_nota[i,35]) = 50
                                                                                mbase_icm := mbase_icm + 0
                                                                                mtot_icm := mtot_icm + 0
                                                                        ELSE
                                                                                mbase_icm = mbase_icm + iat((iat(mpr_fat) * m_nota[i,5]),2)
                                                                                mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * iat((iat(mpr_fat)*m_nota[i,5]),2),2)
                                                                        ENDIF
                                                                        sLinhas := slinhas +    'vBC='+ALLTRIM(TRANSFORM(iat((iat(mpr_fat) * m_nota[i,5]),2),'999999.99'))+ m_qp + ;
                                                                                                'pICMS='+ALLTRIM(TRANSFORM(m_nota[i,20],'999.99'))+ m_qp + ;
                                                                                                'vICMS='+ALLTRIM(TRANSFORM(iat((m_nota[i,20]/100) * iat((iat(mpr_fat)*m_nota[i,5]),2),2),'999999.99'))+ m_qp

                                                                                mbase_fcp := iat((iat(mpr_fat) * m_nota[i,5]),2)
                                                        ELSE
                                                                sLinhas := slinhas +    'vBC='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                        'pICMS='+ALLTRIM(TRANSFORM(m_nota[i,24],'999.99'))+ m_qp + ;
                                                                                        'vICMS='+ALLTRIM(TRANSFORM(iat((mpr_fat*m_nota[i,5]),2) * (m_nota[i,24]/100),'999999.99'))+ m_qp
                                                                                mbase_fcp := 0
                                                        ENDIF
                                                ENDIF
                                                IF ! EMPTY(mcons_prod[1,117])
                                                        sLinhas := slinhas +'[comb'+STRZERO(mitem,3)+']'+ m_qp +;
                                                                            'cProdANP='+mcons_prod[1,117]+ m_qp + ;
                                                                            'descANP=GLP'+ m_qp + ;
                                                                            'pGLP=100.00'+ m_qp + ;     //'vPart=10.00'+ m_qp + ;
                                                                            'UFCons='+m_set[1,19]+ m_qp
                                                ENDIF

                NEXT
                //mtot_nota := mtot_nota  - (mpis+mconfis+micms_desc)
                sLinhas := slinhas + '[Total]'+ m_qp
                sLinhas := slinhas + 'BaseICMS='+ALLTRIM(TRANSFORM(mbase_icm,'999999.99'))+ m_qp + ;
                        'ValorICMS='+ALLTRIM(TRANSFORM(mtot_icm,'999999.99'))+ m_qp +; //                        'ValorFrete='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp
                        'ValorProduto='+ALLTRIM(TRANSFORM(mtot_nota,'999999.99'))+ m_qp + ;
                        'ValorNota='+ALLTRIM(TRANSFORM(iat(mtot_nota),'999999.99'))+ m_qp
                //mcons_cid := {}
                //cComm := "SELECT * FROM saccid WHERE (cidade = "+sr_cdbvalue(RTRIM(cons_cli[1,24]))+" OR cidade IS NULL) AND uf = "+sr_cdbvalue(RTRIM(cons_cli[1,25]))
                sr_getconnection():exec(ccomm,,.t.,@mcons_cid)
                sr_getconnection():exec('COMMIT',,.f.)
                sLinhas := slinhas +    '[Transportador]'+ m_qp + ;
                                        'modFrete=9'+ m_qp

                y:=0
                FOR y = 1 TO LEN(m_recebe)
                        sLinhas := slinhas +    '[pag'+STRZERO(Y,3)+']'+ m_qp + ;
                                                'tpIntegra=2'+ m_qp
                        IF m_recebe[y,1] = 'CH'
                                sLinhas := slinhas + 'tpag=02'+ m_qp + ;
                                                      'vpag='+ALLTRIM(TRANSFORM(iat(m_recebe[y,10]),'999999.99'))+ m_qp+;
                                                      'indpag=1'+ m_qp
                        ELSEIF m_recebe[y,1] = 'CT'
                                sLinhas := slinhas + 'tpag=03'+ m_qp + ;
                                                      'vpag='+ALLTRIM(TRANSFORM(iat(m_recebe[y,10]),'999999.99'))+ m_qp+;
                                                      'indpag=1'+ m_qp
                        ELSEIF m_recebe[y,1] = 'CD'
                                sLinhas := slinhas + 'tpag=04'+ m_qp + ;
                                                      'vpag='+ALLTRIM(TRANSFORM(iat(m_recebe[y,10]),'999999.99'))+ m_qp+;
                                                      'indpag=1'+ m_qp
                        ELSEIF m_recebe[y,1] = 'DU'
                                sLinhas := slinhas + 'tpag=05'+ m_qp + ;
                                                      'vpag='+ALLTRIM(TRANSFORM(iat(m_recebe[y,10]),'999999.99'))+ m_qp+;
                                                      'indpag=1'+ m_qp
                        ELSEIF m_recebe[y,1] = 'PX'
                                sLinhas := slinhas + 'tpag=17'+ m_qp + ;
                                                      'vpag='+ALLTRIM(TRANSFORM(iat(m_recebe[y,10]),'999999.99'))+ m_qp+;
                                                      'indpag=0'+ m_qp
                        ELSE
                                sLinhas := slinhas + 'tpag=01'+ m_qp + ;
                                                      'vpag='+ALLTRIM(TRANSFORM(iat(m_recebe[y,10]),'999999.99'))+ m_qp+;
                                                      'indpag=0'+ m_qp
                        ENDIF
                        sLinhas := slinhas + 'vtroco='+ALLTRIM(TRANSFORM(mtroco,'999999.99'))+ m_qp
                NEXT
                //atencao(slinhas)
                sLinhas := slinhas +    '[DadosAdicionais]'+ m_qp + ;
                                        'Complemento= Op.:'+cod_operado+' - Val Aprox Tributos R$:'+ALLTRIM(TRANSFORM(mtot_imposto,'999999.99'))+' ('+ALLTRIM(TRANSFORM((mtot_imposto/mtot_nota)*100,'999999.99'))+'%) Fonte: IBPT   '+mobs1+mobs2+mobs3+mobs4+mobs5+ m_qp +;
                                        '[infRespTec]'+ m_qp + ;
                                        'CNPJ='+mcnpj_HTI+ m_qp + ;
                                        'xContato=Jose Helio de Araujo Beltrao Junior'+ m_qp + ;
                                        'email=helioaraujobeltrao@gmail.com'+ m_qp + ;
                                        'fone=081992816878'

                op_tela(10,5,18,85,'FINALIZANDO O CUPOM....',,1)
                mArq        := fcreate("NFCE"+ALLTRIM(mdocumento)+".ini")
                * mArq        := fcreate("NFE.ini" )
                fwrite( mArq, @sLinhas, len( sLinhas ) )
                FCLOSE(mArq)
                mretorno := IBR_comando('NFE.CriarNFe',{sLinhas},,.T.)
                prog(2,1,20,'CRIANDO A NFE No....: '+mretorno)
                //WVW_DrawProgressBar( ,1,1,2,60,,25,50,155,,.f.,0 )
                //DEVPOS(01,01);DEVOUT('CRIANDO A NFE No....: '+mretorno)
                //atencao(mretorno)
                IF 'Alertas:' $ mretorno
                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = 'C' WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                        atencao(mretorno)
                        fecha_tela()
                        LOOP
                ELSEIF  mretorno = ' '
                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = 'C' WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                        fecha_tela()
                        wvw_lclosewindow()
                        RETURN NIL
                ELSE
                        mretorno :=ALLTRIM(SUBSTR(mretorno,LEN(mretorno)-51))
                ENDIF
                mcamnfe := mretorno
                mretorno := ALLTRIM(m_indiv[1,40])+mretorno
                prog(2,1,40,'ASSINANDO a Nota No.: '+mretorno)
                //DEVPOS(02,01);DEVOUT('ASSINANDO a Nota No.: '+mretorno)
                IF IBR_comando('NFE.AssinarNFe',{mretorno},,.T.) = ' '
                        atencao(mretorno)
                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = 'C' WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                        fecha_tela()
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                prog(2,1,60,'VALIDANDO a Nota No.: '+mretorno)
                //DEVPOS(03,01);DEVOUT('VALIDANDO a Nota No.: '+mretorno)
                IF IBR_comando('NFE.ValidarNFe',{mretorno},,.T.) = ' '
                        atencao(mretorno)
                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = 'C' WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                        //fecha_tela()
                        wvw_lclosewindow()
                        LOOP
                        //RETURN NIL
                ENDIF
                prog(2,1,80,'ENVIANDO a Nota No..: '+mretorno)
                //DEVPOS(04,01);DEVOUT('ENVIANDO a Nota No..: '+mretorno)
                IF ! enviar_nfe(mretorno,'NFCE')
                        //atencao('2')
                        mpago := ' '
                        mabrir_cp := m_flag_f := " "
                        ASIZE(m_codigo,0)
                        ASIZE(m_merc,0)
                        ASIZE(m_matriz,0)
                        ASIZE(m_recebe,0)
                        ASIZE(m_desc,0)
                        ASIZE(m_nota,0)
                        m_flag :=0
                        mdocumento := mnum_ecf:=SPACE(8)
                        CLEAR GETS
                        fecha_tela()
                        EXIT
                ENDIF
                IF mtipo_emi # 1
                        sr_getconnection():exec("UPDATE sacmovnt SET alimento = 'C' WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                ENDIF
                i := 0
                FOR i = 1 TO LEN(m_nota)
                        aret:={}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_nota[i,21]),,.t.,@aret)
                        sr_getconnection():exec('COMMIT',,.f.)
                        mlinha := aret[1,2]+aret[1,8]+aret[1,9]+aret[1,14]+STRZERO((aret[1,56] - m_nota[i,5])*1000,13)+STRZERO(iat(aret[1,46])*100,14)+aret[1,68]
                        sr_getconnection():exec("UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(aret[1,55] - m_nota[i,5])+" WHERE cod_merc = "+sr_cdbvalue(m_nota[i,21]),,.f.)
                        sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                'processo,ent_sai )'+;
                                ' VALUES ('+;
                                sr_cdbvalue(DATE())+','+; //1
                                sr_cdbvalue(mdata_sis)+','+; //2
                                sr_cdbvalue(TIME())+','+; //3
                                sr_cdbvalue(m_nota[i,21])+','+; //4
                                sr_cdbvalue(m_nota[i,5])+','+; //5
                                sr_cdbvalue(aret[1,55])+','+; //6
                                sr_cdbvalue(aret[1,55] - m_nota[i,5])+','+; //7
                                sr_cdbvalue(cod_operado)+','+; //8
                                sr_cdbvalue('SACNFCE')+','+; //9
                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                sr_cdbvalue('CUPOM:'+'CP'+mdocumento)+','+; //11
                                sr_cdbvalue('S')+')',,.f.)
                        IF msem_cx = 0 .AND. EMPTY(mnum_ped)
                                sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(aret[1,56] - m_nota[i,5])+",data_atu = "+sr_cdbvalue(mdata_sis)+" WHERE cod_merc = "+sr_cdbvalue(m_nota[i,21]),,.f.)
                                sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                'processo,ent_sai,SR_DELETED )'+;
                                                                ' VALUES ('+;
                                                                sr_cdbvalue(DATE())+','+; //1
                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                sr_cdbvalue(TIME())+','+; //3
                                                                sr_cdbvalue(m_nota[i,21])+','+; //4
                                                                sr_cdbvalue(mquantd)+','+; //5
                                                                sr_cdbvalue(aret[1,56])+','+; //6
                                                                sr_cdbvalue(aret[1,56] - m_nota[i,5])+','+; //7
                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                sr_cdbvalue('sac23nfce')+','+; //9
                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                sr_cdbvalue('INCLUSAO PRODUTO CUPOM')+','+; //11
                                                                sr_cdbvalue('S')+','+; //11
                                                                sr_cdbvalue(' ')+')',,.f.)
                        ENDIF
                NEXT

                *** IMPRIMIR O CUPOM  ***
                // DEVPOS(05,01);DEVOUT('IMPRIMINDO DANFE No.: '+mretorno)
                // prog(2,1,100,'IMPRIMINDO DANFE No.: '+mretorno)
                // mret := IBR_comando('NFE.ImprimirDanfe('+mretorno+')',,100,.T.)
                // WVW_SetMousePos(,10,10)
                //mret := IBR_comando('NFE.ImprimirDanfe('+mretorno+')')
                //atencao(mret)
                //SR_BEGINTRANSACTION()
                //TRY
                DEVPOS(06,01);DEVOUT('ATUALIZANDO DANFE No: '+mretorno)
                sr_getconnection():exec('INSERT INTO sactotnt ('+;
                'empresa  	,'+;//1
                'modelo  	,'+;//2
                'num_ped 	,'+;//5
                'documento 	,'+;//6
                'serie     	,'+;//7
                'emissao 	,'+;//8 'cod_cli 	,'+;//9
                'cliente 	,'+;//10
                'cgc_cli 	,'+;//14
                'cpf_cli 	,'+;//15
                'cod_vend 	,'+;//16
                'ent_sai 	,'+;//17
                'vl_base        ,'+;//18
                'vl_icm         ,'+;//19
                'vl_nota        ,'+;//26
                'vl_prod        ,'+;//27
                'cod_nat        ,'+;//31
                'obs1           ,'+;//32
                'obs2           ,'+;//33
                'norm_ele       ,'+;//52
                'camnfe         ,'+;//52
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(mcodempresa         )+','+; //1
                sr_cdbvalue('65'             )+','+; //2
                sr_cdbvalue(STRZERO(mnum_ped,6) )+','+; //5
                sr_cdbvalue('CP'+mdocumento     )+','+; //6
                sr_cdbvalue('001'               )+','+; //7
                sr_cdbvalue(mdata_sis           )+','+; //8 sr_cdbvalue(cons_cli[1,2] )+','+; //9
                sr_cdbvalue(mcliente       )+','+; //10
                sr_cdbvalue(mcgc     )+','+; //14
                sr_cdbvalue(mcpf     )+','+; //15
                sr_cdbvalue(STRZERO(mcod_vend,3))+','+; //16
                sr_cdbvalue('S')                +','+; //17
                sr_cdbvalue(iat(mbase_icm   ,2))+','+; //18
                sr_cdbvalue(iat(mtot_icm    ,2))+','+; //19
                sr_cdbvalue(iat(mtot_nota   ,2))+','+; //26
                sr_cdbvalue(iat(mtot_nota,2))+','+; //27
                sr_cdbvalue('5102'            )+','+; //31
                sr_cdbvalue(mobs1    )+','+; //32
                sr_cdbvalue(mobs2    )+','+; //33
                sr_cdbvalue('E'      )+','+; //52
                sr_cdbvalue(mretorno )+','+; //52
                sr_cdbvalue(' ')+')',,.f.)
                //sr_getconnection():exec(ccomm,,.f.)
                sr_getconnection():exec('COMMIT',,.f.)
                //CATCH e
                //        SR_ENDTRANSACTION()
                //END
                /*
                IF ! EMPTY(m_email) .AND. op_simnao('S','Deseja enviar EMAIL para o Cliente') = 'S'
                        op_tela(10,10,11,70,'Enviar EMAIL')
                        DEVPOS(00,00);DEVOUT('Email de Destino:')
                        @ 00,18 GET m_email VALID IF(EMPTY(m_email),.F.,.T.)
                        READ
                        IF LASTKEY() # 27
                                IF ! EMPTY(m_indiv[1,43])
                                        m_ret := IBR_comando('NFE.ENVIAREMAIL('+m_email+','+mretorno+',1)',,3)
                                ELSE
                                        m_ret := NFE_comando('NFE.ENVIAREMAIL('+m_email+','+mretorno+',1)',,3)
                                ENDIF
                                atencao(m_ret)
                                wvw_lclosewindow()
                        ELSE
                                wvw_lclosewindow()
                        ENDIF
                ENDIF
                */
                //fim_fecha('Val Aprox Tributos R$:'+ALLTRIM(TRANSFORM(mtot_imposto,'999999.99'))+' ('+ALLTRIM(TRANSFORM((mtot_imposto/mtot_nota)*100,'999999.99'))+'%) Fonte:IBPT'+m_qp+'HTI SISTEMAS 81'+mfone_HTI+'-Aplic:'+mpaf_HTI+' '+mpaf_ver+m_qp+;
                //                ALLTRIM(m_set[1,25]+m_set[1,26])+' - Vend.:'+STRZERO(mcod_vend,3)+IF(msem_cx = 1,' - S/C',''))
                mtot_imposto := 0
                /*
                fim_fecha(IF(! EMPTY(mnum_pv),'PV: '+STRZERO(mnum_pv,10)+m_qp,'')+;
                                IF(muf_firm = 'MG','Minas Legal:'+m_cnpj+' '+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),7,2)+' '+ALLTRIM(TRANSFORM(iat(mtot_nota,2)*100,'99999999'))+m_qp,'')+;
                                IF(muf_firm = 'RJ','Cupom Mania:'+m_cnpj+' '+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),7,2)+' '+ALLTRIM(TRANSFORM(iat(mtot_nota,2)*100,'99999999'))+m_qp,'')+;
                                IF(muf_firm = 'PB','PARAIBA LEGAL - RECEITA CIDADA'+m_qp+'TORPEDO PREMIADO:'+m_cnpj+' '+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),7,2)+' '+ALLTRIM(TRANSFORM(iat(mtot_nota,2)*100,'99999999'))+' '+mcpf_cnpj+m_qp,'')+;
                                ALLTRIM(m_set[1,25])+' - Vend.:'+STRZERO(mcod_vend,3)+IF(msem_cx = 1,' - S/C',''))
                                //ALLTRIM(m_set[1,25]+m_set[1,26])+' - Vend.:'+STRZERO(mcod_vend,3)+IF(msem_cx = 1,' - S/C',''))
                */
                SET CENTURY OFF
                fecha_tela()
                IF m_flag_f = 'T'
                        //ATENCAO(NumeroCupom+' - '+mind_tef+' - '+transform(mvalor,'999,999.99'))
                        PAC00TEF(ccoo,mind_tef,mvalor)
                ENDIF
        IF mtroco > 0
                INKEY(3)
                RESTSCREEN(00,00,24,79,mbox_rece)
        ENDIF
        IF ! EMPTY(mdesconto)
                sr_getconnection():exec("UPDATE sacmovnt SET vl_fatura = vl_fatura - (vl_fatura * "+sr_cdbvalue(mdesc_u/100)+") WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.f.)
                sr_getconnection():exec('COMMIT',,.f.)
        ENDIF
        IF EMPTY(mpago) .AND. msem_cx = 0
//ATENCAO('OK')
                mensagem("Atualizando o Arquivo de CAIXA....")
                i = 0
                FOR i = 1 TO LEN(m_recebe)
                        IF EMPTY(m_recebe[i,1])
                                LOOP
                        ENDIF
                        IF m_recebe[i,1] = 'DN'
                                mnum_dup := STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6)
                                mdup_num := '99999999'
                        ELSEIF m_recebe[i,1] = 'DU' .OR. m_recebe[i,1] = 'TR' .OR. m_recebe[i,1] = 'CR'
                                mnum_dup := m_recebe[i,5]
                                mdup_num := m_recebe[i,5]
                        ELSEIF m_recebe[i,1] = 'CH'
                                mnum_dup := m_recebe[i,5]
                                mdup_num := m_recebe[i,4]
                        ELSEIF m_recebe[i,1] = 'CT'
                                mnum_dup := m_recebe[i,5]
                                mdup_num := m_recebe[i,9]
                        ELSEIF m_recebe[i,1] = 'FI'
                                mnum_dup := m_recebe[i,11]
                                mdup_num := m_recebe[i,11]
                        ELSEIF m_recebe[i,1] = 'PX'
                                mnum_dup := STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6)
                                mdup_num := '99999999'
                        ENDIF
                        m_recebe[i,10] := iat(m_recebe[i,10],3)
                        sr_getconnection():exec('INSERT INTO saccaixa (empresa ,';//1
                                      +'data      ,';//2
                                      +'tipo      ,';//3
                                      +'tipo_comp ,';//4
                                      +'nota      ,';//5
                                      +'cod_cli   ,';//6
                                      +'cod_vend  ,';//7
                                      +'cod_opera ,';//8
                                      +'hora      ,';//9
                                      +'valor_com ,';//10
                                      +'comissao  ,';//11
                                      +'venci     ,';//12
                                      +'valor     ,';//13
                                      +'num_ban   ,';//14
                                      +'cod_ct    ,';//15
                                      +'c_s       ,';//16
                                      +'num_dup   ,';//17
                                      +'documento ,';//18
                                      +'descri2   ,';//19
                                      +'num_cup   ,'; //20
				      +'sr_deleted)'+;
				      ' VALUES ('+;
                                sr_cdbvalue(mcodempresa                            )+','+; //1
                                sr_cdbvalue(mdata_sis                              )+','+;//2
                                sr_cdbvalue(m_recebe[i,1]                          )+','+;//3
                                sr_cdbvalue(m_recebe[i,2]                          )+','+;//4
                                sr_cdbvalue(IF(EMPTY(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv)),'CP'+mdocumento,'PD'+STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6)))+','+;//5
                                sr_cdbvalue(mcod_cli                    )+','+;//6
                                sr_cdbvalue(STRZERO(mcod_vend,3)                   )+','+;//7
                                sr_cdbvalue(cod_operado                            )+','+;//8
                                sr_cdbvalue(TIME()                                 )+','+;//9
                                sr_cdbvalue(iat(m_recebe[i,10],3)                  )+','+;//10
                                sr_cdbvalue(mperc_comissao                         )+','+;//11
                                sr_cdbvalue(m_recebe[i,6]                          )+','+;//12
                                sr_cdbvalue(iat(m_recebe[i,10],3)                  )+','+;//13
                                sr_cdbvalue(m_recebe[i,3]                          )+','+;//14
                                sr_cdbvalue(m_recebe[i,8]                          )+','+;//15
                                sr_cdbvalue('C'                                    )+','+;//16
                                sr_cdbvalue(mnum_dup                               )+','+;//17
                                sr_cdbvalue(mdup_num                               )+','+;//18
                                sr_cdbvalue(IF(m_recebe[i,1] = 'CT',m_recebe[i,12],' '))+','+;//19
                                sr_cdbvalue(mdocumento                             )+','+;//20
                                sr_cdbvalue(' ')+')',,.f.)
                NEXT
                sr_getconnection():exec('COMMIT',,.f.)
                mensagem('Atualizando o DUPLICATAS....')
                c := i := 0
                FOR i = 1 TO LEN(m_recebe)
                        IF EMPTY(m_recebe[i,1]);LOOP;ENDIF
                        IF m_recebe[i,1] = 'DN'
                                mnum_dup := STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6)
                        ELSEIF m_recebe[i,1] = 'CH'
                                mnum_dup := m_recebe[i,4]
                        ELSEIF m_recebe[i,1] = 'DU' .OR. m_recebe[i,1] = 'TR' .OR. m_recebe[i,1] = 'CR'
                                mnum_dup := m_recebe[i,5]
                        ELSEIF m_recebe[i,1] = 'FI'
                                mnum_dup := m_recebe[i,11]
                        ELSEIF m_recebe[i,1] = 'CT'
                                mnum_dup := m_recebe[i,9]
                        ENDIF
                        sr_getconnection():exec('INSERT INTO sacdupr (empresa ,';//1
                                        +'emissao         ,';//2
                                        +'tipo            ,';//3 +'tip_cli         ,';//4
                                        +'fornec          ,';//5
                                        +'cliente         ,';//6
                                        +'venc            ,';//7
                                        +'venc1           ,';//8
                                        +'comissao        ,';//9
                                        +'comissao1       ,';//10
                                        +'operador        ,';//11
                                        +'vendedor        ,';//12
                                        +'num_ped         ,';//13
                                        +'ope_venda       ,';//15
                                        +'mov_cx          ,';//16
                                        +'c_cpfcnpj       ,';//17
                                        +'numero          ,';//18
                                        +'duplicata       ,';//19
                                        +'valor_dup       ,';//20
                                        +'valor           ,';//21
                                        +'agencia         ,';//22
                                        +'c_c             ,';//23
                                        +'datpag          ,';//24
                                        +'vlpago          ,';//25
                                        +'pago            ,';//26
                                        +'banco           ,';//27
                                        +'corrente        ,'; //28
                                        +'sr_deleted)      '+;
                                        ' VALUES ('+;
                                        sr_cdbvalue(mcodempresa                            )+','+; //1
                                        sr_cdbvalue(mdata_sis                              )+','+; //1
                                        sr_cdbvalue(m_recebe[i,1]                          )+','+; //1
                                        sr_cdbvalue(mcod_cli                    )+','+;
                                        sr_cdbvalue(mcliente                               )+','+;
                                        sr_cdbvalue(m_recebe[i,6]                          )+','+;
                                        sr_cdbvalue(m_recebe[i,6]                          )+','+;
                                        sr_cdbvalue(mperc_comissao                         )+','+;
                                        sr_cdbvalue(0                                      )+','+;
                                        sr_cdbvalue(cod_operado                            )+','+;
                                        sr_cdbvalue(STRZERO(mcod_vend,3)                   )+','+;
                                        sr_cdbvalue(STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6))+','+;
                                        sr_cdbvalue(STRZERO(mcod_oper,3)                   )+','+;
                                        sr_cdbvalue('C'                                    )+','+;
                                        sr_cdbvalue(IF(! EMPTY(mcpf),mcpf,mcgc)            )+','+;
                                        sr_cdbvalue(IF(m_recebe[i,1] = 'FI' .OR. m_recebe[i,1] = 'CT',m_recebe[i,8],m_recebe[i,3]))+','+;
                                        sr_cdbvalue(mnum_dup                               )+','+;
                                        sr_cdbvalue(m_recebe[i,10]                         )+','+;
                                        sr_cdbvalue(IF(m_recebe[i,1] = 'CT',m_recebe[i,10] - (m_recebe[i,10] * (m_recebe[i,16] / 100)),m_recebe[i,10]))+','+;
                                        sr_cdbvalue(m_recebe[i,13]                         )+','+;
                                        sr_cdbvalue(m_recebe[i,14]                         )+','+;
                                        IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR' .OR. m_recebe[i,1]='CT' .OR. (m_recebe[i,1]='CH' .AND. m_recebe[i,6] <= mdata_sis),sr_cdbvalue(m_recebe[i,6]),'NULL')+','+;
                                        sr_cdbvalue(IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR' .OR. m_recebe[i,1]='CT' .OR. (m_recebe[i,1]='CH' .AND. m_recebe[i,6] <= mdata_sis),m_recebe[i,10],0))+','+;
                                        sr_cdbvalue(IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR' .OR. m_recebe[i,1]='CT' .OR. (m_recebe[i,1]='CH' .AND. m_recebe[i,6] <= mdata_sis),'B',' '))+','+;
                                        sr_cdbvalue(IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR','C',' '))+','+;
                                        sr_cdbvalue(m_recebe[i,15]                          )+','+;
                                        sr_cdbvalue(' ')+')',,.f.)
                NEXT
                sr_getconnection():exec('COMMIT',,.f.)
                i := 0
                IF ! EMPTY(mnum_ped)
                        //mensagem('Atualizando o ARQUIVO DE PEDIDO....')
                                aret:={}
                                cComm  := "UPDATE sacped_s SET "
                                ccomm := ccomm +"ppag  = '*'"
                                ccomm := ccomm +",pdatapag = "+sr_cdbvalue(mdata_sis)
                                ccomm := ccomm +",phora_pg = "+sr_cdbvalue(TIME())
                                ccomm := ccomm +",pnum_pdv = "+sr_cdbvalue(mnum_ecf)
                                ccomm := ccomm +",pnum_cup = "+sr_cdbvalue(mdocumento)
                                ccomm := ccomm +" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                                sr_getconnection():exec(ccomm,,.f.)
                ENDIF
                sr_getconnection():exec('COMMIT',,.f.)
                sr_committransaction()
                sr_endtransaction()
                mensagem('Atualizando o CONTA A PAGAR....')
                c := i := 0
                FOR i = 1 TO LEN(m_recebe)
                        IF EMPTY(m_recebe[i,1]) .OR. EMPTY(VAL(m_recebe[i,17]))
                                LOOP
                        ENDIF
                        sr_getconnection():exec('INSERT INTO sacdupp (empresa ,';//1
                                        +'tipo      ,';//2
                                        +'numero    ,';//3
                                        +'duplicata ,';//4
                                        +'valor_dup ,';//5
                                        +'tip_for   ,';//6
                                        +'fornec    ,';//7
                                        +'cliente   ,';//8
                                        +'emissao   ,';//9
                                        +'venc      ,';//10
                                        +'datpag    ,';//11
                                        +'valor     ,';//12
                                        +'vlpago    ,';//13
                                        +'banco     ,';//14
                                        +'pago      ,';//15
                                        +'operador  ,';//16
                                        +'num_ped   ,';//17
                                        +'obs       ,';//18
                                        +'sr_deleted)       '+;
                                        ' VALUES ('+;
                                        sr_cdbvalue('001'                                             )+','+; //1
                                        sr_cdbvalue('PA'                                              )+','+; //2
                                        sr_cdbvalue(m_recebe[i,8]                                     )+','+; //3
                                        sr_cdbvalue(m_recebe[i,9]                                     )+','+; //4
                                        sr_cdbvalue(iat((m_recebe[i,10] * (m_recebe[i,16] / 100)),2))+','+; //5
                                        sr_cdbvalue(m_recebe[i,18]                                    )+','+; //6
                                        sr_cdbvalue(m_recebe[i,17]                                    )+','+; //7
                                        sr_cdbvalue(IF(v_fornece(VAL(m_recebe[i,17])),forn->razao,'DESCONTO DO CARTAO DE CREDITO'))    +','+; //8
                                        sr_cdbvalue(mdata_sis                                         )+','+; //9
                                        sr_cdbvalue(mdata_sis                                         )+','+; //10
                                        sr_cdbvalue(mdata_sis                                         )+','+; //11
                                        sr_cdbvalue(iat((m_recebe[i,10] * (m_recebe[i,16] / 100)),2))+','+; //12
                                        sr_cdbvalue(ROUN((m_recebe[i,10] * (m_recebe[i,16] / 100)),2) )+','+; //13
                                        sr_cdbvalue('C'                                               )+','+; //14
                                        sr_cdbvalue('B'                                               )+','+; //15
                                        sr_cdbvalue(cod_operado                                       )+','+; //16
                                        sr_cdbvalue(STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6)                               )+','+; //17
                                        sr_cdbvalue('Pedido:'+STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6)+' DESCONTO DE CARTAO')+','+; //18
                                        sr_cdbvalue(' ')+')',,.f.)
                NEXT
                sr_getconnection():exec('COMMIT',,.f.)
                mensagem('Atualizando o CREDITO....')
                i := 0
                FOR i = 1 TO LEN(m_recebe)
                        IF m_recebe[i,1] = 'CR'
                                cons_cred := {}
                                mcomando := "SELECT * FROM saccred WHERE fornec = "+sr_cdbvalue(mcod_cli)+" AND (pago IS NULL OR pago = ' ') AND duplicata = "+sr_cdbvalue(m_recebe[i,5])
                                sr_getconnection():exec(mcomando,,.t.,@cons_cred)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF m_recebe[i,10] = cons_cred[1,19]
                                        mcomando := "UPDATE saccred "
                                        mcomando := mcomando + "SET datpag = "+sr_cdbvalue(mdata_sis)
                                        mcomando := mcomando + ",vlpago = "+sr_cdbvalue(m_recebe[i,10])
                                        mcomando := mcomando + ",pago = 'B'"
                                        mcomando := mcomando + ",operador = "+sr_cdbvalue(cod_operado)
                                        mcomando := mcomando + ",conta = '*'"
                                        mcomando := mcomando + ",mov_cx = 'C'"
                                        mcomando := mcomando + " WHERE fornec = "+sr_cdbvalue(mcod_cli)+" AND (pago IS NULL OR pago = ' ') AND duplicata = "+sr_cdbvalue(m_recebe[i,5])
                                        sr_getconnection():exec(mcomando,,.f.)
                                ELSE
                                        mcomando := "UPDATE saccred "
                                        mcomando := mcomando + "SET datpag = "+sr_cdbvalue(mdata_sis)
                                        mcomando := mcomando + ",vlpago = "+sr_cdbvalue(m_recebe[i,10])
                                        mcomando := mcomando + ",pago = 'B'"
                                        mcomando := mcomando + ",operador = "+sr_cdbvalue(cod_operado)
                                        mcomando := mcomando + ",conta = '*'"
                                        mcomando := mcomando + ",mov_cx = 'C'"
                                        mcomando := mcomando + " WHERE fornec = "+sr_cdbvalue(mcod_cli)+" AND (pago IS NULL OR pago = ' ') AND duplicata = "+sr_cdbvalue(m_recebe[i,5])
                                        sr_getconnection():exec(mcomando,,.f.)

                                        cComm  := "INSERT INTO saccred (empresa,tipo,duplicata,valor_dup,"
                                        ccomm  := ccomm + "fornec,cliente,emissao,venc1,venc,valor,vendedor,"
                                        ccomm  := ccomm + "num_ped,operador,obs,conta,sr_deleted)"
                                        ccomm  := ccomm + " VALUES ("+sr_cdbvalue(mcodempresa)+",'CR',"+sr_cdbvalue(m_recebe[i,5])
                                        ccomm  := ccomm + ","+sr_cdbvalue(iat(m_recebe[i,10],2))+","+sr_cdbvalue(mcod_cli)+","+sr_cdbvalue(mcliente)+","+sr_cdbvalue(mdata_sis)+","+sr_cdbvalue(mdata_sis)+","+sr_cdbvalue(mdata_sis)
                                        ccomm  := ccomm + ","+sr_cdbvalue(iat(cons_cred[1,19]-m_recebe[i,10],2))+","+sr_cdbvalue(cons_cred[1,30])+","+sr_cdbvalue(STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6))+","+sr_cdbvalue(cod_operado)+","+sr_cdbvalue(cons_cred[1,46])+",'*',' ')"
                                        sr_getconnection():exec(ccomm,,.f.)
                                ENDIF
                        ENDIF
                NEXT
                sr_getconnection():exec('COMMIT',,.f.)
        ENDIF
        /*
        IF msem_cx = 1 .AND. EMPTY(mnum_ped)
                i := 0
                FOR i = 1 TO LEN(m_codigo)
                        IF EMPTY(m_codigo[i]);LOOP;ENDIF
                        SR_BEGINTRANSACTION()
                                cons_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_codigo[i]),,.t.,@cons_merc)
                                mlinha := cons_merc[1,2]+cons_merc[1,8]+cons_merc[1,9]+cons_merc[1,14]+STRZERO((cons_merc[1,56] + m_matriz[i,1])*1000,13)+STRZERO(iat(cons_merc[1,46])*100,14)+cons_merc[1,68]
                                sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = saldo_mer + "+sr_cdbvalue(m_matriz[i,1])+",chv_cript = "+sr_cdbvalue(criptografia(mlinha,'C'))+" WHERE cod_merc = "+sr_cdbvalue(m_codigo[i]),,.f.)
                                sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                        'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                        'processo,ent_sai,SR_DELETED )'+;
                                                        ' VALUES ('+;
                                                        sr_cdbvalue(DATE())+','+; //1
                                                        sr_cdbvalue(mdata_sis)+','+; //2
                                                        sr_cdbvalue(TIME())+','+; //3
                                                        sr_cdbvalue(STRZERO(mcod_merc,5))+','+; //4
                                                        sr_cdbvalue(mquantd)+','+; //5
                                                        sr_cdbvalue(cons_merc[1,56])+','+; //6
                                                        sr_cdbvalue(cons_merc[1,56] + m_matriz[i,1])+','+; //7
                                                        sr_cdbvalue(cod_operado)+','+; //8
                                                        sr_cdbvalue('sac23nfce')+','+; //9
                                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                        sr_cdbvalue('CUPOM S/C: '+mdocumento)+','+; //11
                                                        sr_cdbvalue('E')+','+; //11
                                                        sr_cdbvalue(' ')+')',,.f.)

                                sr_committransaction()
                        SR_ENDTRANSACTION()
                NEXT
        ENDIF
        sr_getconnection():exec('COMMIT',,.f.)
        */
                prog(2,1,100,'IMPRIMINDO DANFE No.: '+mretorno)
                mret := IBR_comando('NFE.ImprimirDanfe('+mretorno+')',,100,.T.)
                WVW_SetMousePos(,10,10)

        mpago := ' '
        mabrir_cp := m_flag_f := " "
        ASIZE(m_codigo,0)
        ASIZE(m_merc,0)
        ASIZE(m_matriz,0)
        ASIZE(m_recebe,0)
        ASIZE(m_desc,0)
        ASIZE(m_nota,0)
        m_flag :=0
        mdocumento := mnum_ecf:=SPACE(8)
        CLEAR GETS
        EXIT
ENDDO
WVW_RESTSCREEN(,0,0,50,120,tela_fecha,.T.)
WVW_PBDestroy( , nPBins_dados)
WVW_CBDestroy( , mid_cb )
wvw_lclosewindow()
RETURN NIL
*********************** FIM ***************************
FUNCTION c_prod()
MEMVAR mcod_bc,mmerc,mcod_merc
CLEAR GETS
op_tela(10,10,14,70," CONSULTA DE PRODUTO ")
WHILE .T.
        limpa(00,00,33,100)
        setcor(1)
        DEVPOS(01,01);DEVOUT("Codigo:")
        mensagem("Digite codigo ou Descricao - <ESC>Sair")
        mcod_bc := SPACE(14)
        mcod_merc := 0
        @ 01,09 GET mcod_bc PICT "@!"     //VALID lim_get() WHEN men_get(lba-09,2,"Informe o Cod.do produto <ENTER>descricao <F4>pesquisar <ALT+A>Alterar Produto")
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF EMPTY(mcod_bc)
                @ 01,17 GET mmerc PICT "@!"               //VALID lim_get() WHEN men_get(lba-09,13,"<Digite descricao mercadoria> <ENTER>retornar <F4>pesquisar <ALT+A>Alterar Produto")
                READ
                IF LASTKEY() = 27;LOOP;ENDIF
        ENDIF
        IF EMPTY(mcod_bc) .AND. EMPTY(mmerc)
                LOOP
        ENDIF
        IF ! EMPTY(mcod_bc)
                IF LEN(RTRIM(mcod_bc)) > 5
                        *************
                        SELE("merc");ORDSETFOCUS(6)
                        *************
                        SEEK mcod_bc
                        IF ! FOUND()
                                atencao("Codigo de BARRA nao cadastrado")
                                LOOP
                        ENDIF
                        mcod_merc := VAL(mcod_bc)
                ELSE
                        mcod_merc := VAL(mcod_bc)
                        *************
                        SELE("merc");ORDSETFOCUS(1)
                        *************
                        SEEK mcod_merc
                        IF ! FOUND()
                                atencao("Codigo da mercadoria nao cadastrado")
                                LOOP
                        ENDIF
                ENDIF
        ELSEIF ! EMPTY(mmerc)
                *************
                SELE("merc");ORDSETFOCUS(3)
                *************
                SEEK RTRIM(mmerc)
                IF ! FOUND()
                        atencao("Esta mercadoria nao cadastrada")
                        LOOP
                ENDIF
                IF merc->cod_merc = SPACE(5)
                        WHILE ! EOF() .AND. merc->cod_merc = SPACE(5)
                                SKIP
                        ENDDO
                ENDIF
                IF EOF() .OR. merc->cod_merc = SPACE(5)
                        atencao("Mercadoria nao cadastrada")
                        LOOP
                ENDIF
                IF(m_set[1,93] <> 'A',f4_merc(),f4_merc1())
                //f4_merc()
                IF LASTKEY() = 27
                        LOOP
                ENDIF
        ENDIF
        setcor(3)
        DEVPOS(01,09);DEVOUT(merc->cod_merc+"-"+merc->merc)
        DEVPOS(02,01);DEVOUT("Preco: "+TRANSFORM(merc->pr_venda,"999,999.99"))
        DEVPOS(03,01);DEVOUT("Pressione qualquer tecla p/ continuar")
        INKEY(0)
        CLEAR GETS
        setcor(1)
ENDDO
CLEAR GETS
wvw_lclosewindow()
RETURN NIL
************************ F I M **************************
FUNCTION ins_dados()
******************
op_tela(00,01,05,55,'DADOS DO CLIENTE',,1)
CLEAR GETS
WHILE .T.
        mcliente = SPACE(40)
        mcpf := SPACE(11)
        mcgc := SPACE(14)
        mcod_cli := 0
        opcao = "S"
        DEVPOS(1,1);DEVOUT("Codigo.:")
        DEVPOS(2,1);DEVOUT("Cliente:")
        DEVPOS(3,1);DEVOUT("CPF....:")
        DEVPOS(4,1);DEVOUT("CNPJ...:")
        //mcod_cli := IF(EMPTY(mcod_cli),m_set[1,84],mcod_cli)
        ***************
        SELE("cli");ORDSETFOCUS(1)
        GO TOP
        ***************
        @ 1,09 GET mcod_cli PICT "99999" VALID ver_cli(mcod_cli,1,14)
        @ 2,09 GET mcliente PICT "@!"
        @ 3,09 GET mcpf PICT "@@R 999.999.999-99"       //VALID IF(SUBSTR(mcpf,10,2) <> GDV2(SUBSTR(mcpf,1,9)),.F.,.T.)
        @ 4,09 GET mcgc PICT "@@R 99.999.999/9999-99"   //VALID IF(! VCGC(mcgc),.F.,.T.) WHEN mcpf = SPACE(11)
        READ
        //mcredito := cli_dup(mcod_cli,'*')
        IF ! EMPTY(mcod_cli)
                ver_cli(mcod_cli,1,14)
        ENDIF
        IF LASTKEY() = 27
                fecha_tela()
                EXIT
        ENDIF
        IF op_simnao('S','Confirma os Dados:') = 'N'
                LOOP
        ELSE
                fecha_tela()
                EXIT
        ENDIF

ENDDO
RETURN NIL
***************************  F I M  **********************************
* ALTERACAO DE MERCADORIA
***************************
FUNCTION alt_nfce(vcd_prod)
****************************
LOCAL li:=08,ci:=10,lb:=23,cb:=89,mp_venda:=0,mtelap,telapro,malt_merc:={},cons_formula :={},mcond_canc:=0

MEMVAR mponto,mcod_merc,mquantd,mvlr_fat,menvelope,m_matriz,;
       m_codigo,ali,m_alt,lci,cci,lba,cba,opcao,mcomissao,cod_operado,;
       mproducao,mcont_item,mtot_ped,mdesconto,msubtotal,mtot_custo,mvarejo,;
       mperc,mcod_cli,mmasc_qtd,c_pedi,m_posi

/*
IF LEN(M_MATRIZ) = 0
        atencao('Nao tem nenhum produto neste PEDIDO para ser alterado....')
        RETURN NIL
ENDIF
*/
op_tela(4,10,29,89,' ALTERACAO DE PRODUTOS ')
SETCOR(3)
DEVPOS(00,01);DEVOUT(' PRODUTO                                      QUANTD.    PR.UNIT.      TOTAL')
@ 01,00 TO 01,100
SETCOR(1)
mensagem('Escolha com as Setas e Tecle <ENTER>p/Alterar ou <ESC>p/Sair')
setcor(1)
//c_pedi := {}
//sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.t.,@c_pedi)
m_alt := {}
m_posi := {}
i := 0
FOR i = 1 TO LEN(m_nota)
        //AADD(m_posi,c_pedi[i,84])
        //AADD(m_codigo,m_nota[i,11])
        AADD(m_alt,m_codigo[i]+' '+LEFT(m_nota[i,2],38)+' '+TRANSFORM(m_nota[i,5],'99999.99')+' '+TRANSFORM(m_nota[i,7],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(m_nota[i,5] * m_nota[i,7],ALLTRIM('@E '+m_set[1,98])))
NEXT
mponto:=0
setcor(10);mponto := ACHOICE(02,01,27,78,m_alt,,,mponto);setcor(1)
wvw_lclosewindow()
IF mponto = 0
        RETURN .T.
ENDIF
IF ! ver_nivel('ALTPRODNFC','ALTERACAO DE PRODUTOS NO PEDIDO VENDA','1245',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
op_tela(10,10,17,79,' ALTERACAO DE PRODUTOS ')
CLEAR GETS
DO WHILE .T.
        malt_merc := {}
        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_codigo[mponto]),,.t.,@malt_merc)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(malt_merc) = 0
                atencao('Codigo nao cadastrado')
                LOOP
        ENDIF
        mcod_merc := VAL(malt_merc[1,8])
        IF EMPTY(mcod_merc)
		EXIT
        ENDIF
        DEVPOS(00,00);DEVOUT('Produto....:')
        DEVPOS(02,00);DEVOUT('Saldo......:')
        DEVPOS(03,00);DEVOUT('Quantidade.:')
        DEVPOS(04,00);DEVOUT('Prc.Tabela :')
        DEVPOS(05,00);DEVOUT('Preco Venda:')
        DEVPOS(06,00);DEVOUT('Observacao.:')
        SETCOR(3)
        IF malt_merc[1,23] > 0
                WVW_DrawBoxGet(,04,14,10)
                DEVPOS(04,14);DEVOUT(TRANSFORM(malt_merc[1,46],'999,999.99'))
        ENDIF
        //setcor(3)
        DEVPOS(00,14);DEVOUT(STRZERO(mcod_merc,5))
        DEVPOS(00,COL()+1);DEVOUT(malt_merc[1,9])
        DEVPOS(02,14);DEVOUTPICT(malt_merc[1,56],ALLTRIM(m_set[1,98]))
        SETCOR(1)
        mvlr_fat = m_nota[mponto,7]
        //mvlr_fat = m_matriz[mponto,2]
        mp_venda = malt_merc[1,46]
        IF ! EMPTY(malt_merc[1,23])
                mp_venda := mvlr_fat
                @ 00,COL()+1 SAY '(P)'
        ENDIF
        mquantd = m_nota[mponto,5]
        mmasc_qtd := unidade(malt_merc[1,14])
        WVW_DrawBoxGet(,03,14,LEN(mmasc_qtd))
        @ 03,14 GET mquantd PICT mmasc_qtd WHEN men_get(0,2,'Informe a quantidade que deseja, so nao pode ultrapassar o saldo da mercadoria') VALID lim_get()
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mpacote := mpecas := 0
        /*
        IF mquantd > malt_merc[1,56] + c_pedi[mponto,14] .AND. m_set[1,107] = 'S' .AND. ali = 'ped_s'
                IF ! aut_sen('Quantidade maior que saldo... Senha de autorizacao:','LIB_SALDO',,0,STRZERO(mcod_merc,5))
                        EXIT
                ENDIF
        ENDIF
        */
        IF mquantd = 0
                IF ! aut_sen('Deseja CANCELAR o produto do CUPOM: '+mdocumento+' - Senha de Liberacao','LIB_NFC',,0,,,STRZERO(mnum_ped,6))
                        LOOP
                ENDIF
                opcao := op_simnao('S','Confirma Exclusao da Mercadoria:')
                IF opcao = 'S'
                        c_ped := {}
                        sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.t.,@c_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(c_ped) = 1
                                atencao('Nao e possivel Excluir este Produto pois so existe (01) Um produto no pedido !!!!')
                                LOOP
                        ENDIF
                        mquantd = 0
                        aret:={}
                        mensagem('Atualizando o Produto...')
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_codigo[mponto]),,.t.,@aret)
                        sr_getconnection():exec('COMMIT',,.f.)
                        SR_BEGINTRANSACTION()
                                mensagem('Atualizando o Arquivo de PEDIDO...')
                                sr_getconnection():exec("DELETE FROM sacmovnt WHERE documento = "+sr_cdbvalue('CP'+mdocumento)+" AND codigo = "+sr_cdbvalue(m_codigo[mponto]),,.f.)
                                sr_committransaction()
                        sr_endtransaction()
                        m_codigo[mponto] := '     '
                        m_nota[mponto,5] := 0
                        m_nota[mponto,7] := 0
                        mcont_item --
                        //DEVPOS(lba-2,cci+10);DEVOUT(STRZERO(mcont_item,3))
                        setcor(1)
                        mquantd := 1
                        EXIT
                ELSE
                        mquantd := 1
                        EXIT
                ENDIF
        ENDIF
        IF mvarejo = 2
                IF ! EMPTY(malt_merc[1,47])
                        mp_venda = malt_merc[1,47]
                ELSE
                        mp_venda = iat(malt_merc[1,46]*((malt_merc[1,50]/100)+1),m_set[1,103])
                ENDIF
        //ELSEIF mperc > 0
        //        mp_venda = iat(malt_merc[1,46]*((mperc/100)+1),m_set[1,103])
        ELSEIF ver_descon(mcod_cli,mcod_merc,malt_merc[1,7]) > 0
                mp_venda = iat(malt_merc[1,46] - (malt_merc[1,46]*(ver_descon(mcod_cli,mcod_merc,malt_merc[1,7])/100)),m_set[1,103])
        ELSE
                mp_venda = iat(malt_merc[1,46],m_set[1,103])
        ENDIF
        /*
        cons_formula :={}
        sr_getconnection():exec("SELECT * FROM formula WHERE cod_merc = "+sr_cdbvalue(m_codigo[mponto]),,.t.,@cons_formula)
        IF LEN(cons_formula) > 0
                mvlr_fat := tab_formula(m_codigo[mponto])
        ENDIF
        */
        mensagem('Digite o valor do produto - <ESC>Sair')
        WVW_DrawBoxGet(,05,14,LEN(ALLTRIM(m_set[1,98])))
        @ 05,14 GET mvlr_fat PICT ALLTRIM(m_set[1,98]) VALID IF(malt_merc[1,23] > 0 .AND. mvlr_fat < mp_venda,.F.,.T.) WHEN m_set[1,38] <> 'P'
        //@ 06,14 GET c_pedi[mponto,58] PICT '@!'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        // FRIPAL, FRANGO DOURADO ou DISCAPE
        IF mvlr_fat < (malt_merc[1,45] * 1.10) .AND. (ver_serie() = '141597' .OR. ver_serie() = '141390' .OR. ver_serie() = '141336')
                atencao('Cod.Prod...: '+STRZERO(mcod_merc,5)+m_qp+;
                        'Vlr.p/Produto Solic.: '+ALLTRIM(TRANSFORM(mvlr_fat,'999,999,999.99'))+m_qp+;
                        'Valor Minimo R$.....: '+ALLTRIM(TRANSFORM(malt_merc[1,45] * 1.10,'999,999.99')))
                LOOP
        ENDIF
        IF ! EMPTY(m_set[1,154]) .AND. mvlr_fat > m_set[1,154]
                IF ! aut_sen('Valor por Produto Solicitada: '+ALLTRIM(TRANSFORM(mvlr_fat,'999,999,999.99'))+' maior que Permitido pela ADM: '+ALLTRIM(TRANSFORM(m_set[1,154],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDO',,0,STRZERO(mcod_merc,5))
                        LOOP
                ENDIF
        ENDIF
        IF iat(mp_venda,m_set[1,103]) > mvlr_fat
                IF ((iat(mp_venda,m_set[1,103]) - mvlr_fat)/iat(mp_venda,m_set[1,103]))*100 > m_set[1,33] .AND. EMPTY(malt_merc[1,80])
                        IF ! aut_sen(TRANSFORM(((iat(mp_venda,m_set[1,103]) - mvlr_fat)/iat(mp_venda,m_set[1,103]))*100,'999.99')+'% Desconto nao e permitido.. senha autorizacao:','LIB_DESC',,0,STRZERO(mcod_merc,5))
                                LOOP
                        ENDIF
                ENDIF
                IF (((iat(mp_venda,m_set[1,103]) - mvlr_fat)/iat(mp_venda,m_set[1,103]))*100 > malt_merc[1,80] .AND. ! EMPTY(malt_merc[1,80])) .AND. ! EMPTY(malt_merc[1,80])
                        IF ver_serie() = '141220' .OR. ver_serie() = '141350' .OR. ver_serie() = '141384'
                                atencao(TRANSFORM(((iat(mp_venda,m_set[1,103]) - mvlr_fat)/iat(mp_venda,m_set[1,103]))*100,'999.99')+'% Desconto nao e permitido.. ')
                                mquantd := 1
                                LOOP
                        ENDIF
                        IF ! aut_sen(TRANSFORM(((iat(mp_venda,m_set[1,103]) - mvlr_fat)/iat(mp_venda,m_set[1,103]))*100,'999.99')+'% Desconto nao e permitido.. senha autorizacao:','LIB_DESC',,0,STRZERO(mcod_merc,5))
                                LOOP
                        ENDIF
                ENDIF
        ENDIF
        IF m_set[1,38] = 'C'
                IF mvlr_fat < iat(mp_venda,m_set[1,103])
                       IF mvlr_fat < malt_merc[1,45]
                                IF ! aut_sen('Senha de autorizacao:','LIB_DESC',,0,STRZERO(mcod_merc,5))
                                        LOOP
                                ENDIF
                        ENDIF
                ENDIF
        ELSEIF m_set[1,38] = 'V'
                IF mvlr_fat < iat(mp_venda,m_set[1,103])
                       IF mvlr_fat < iat(mp_venda,m_set[1,103])
                                IF ! aut_sen('Senha de autorizacao:','LIB_DESC',,0,STRZERO(mcod_merc,5))
                                        LOOP
                                ENDIF
                        ENDIF
                ENDIF
        ENDIF
        /*
        IF m_set[1,37] = 'S'
                mmontador := VAL(c_pedi[mponto,36])
                mmontador1 := VAL(c_pedi[mponto,38])
                op_tela(10,25,13,75,' Informe o Montador ')
                DEVPOS(00,00);DEVOUT('Montador 1:')
                DEVPOS(01,00);DEVOUT('Montador 2:')
                WVW_DrawBoxGet(,00,14,3)
                WVW_DrawBoxGet(,01,14,3)
                @ 00,14 GET mmontador PICT '999' VALID ven(mmontador,00,18)
                @ 01,14 GET mmontador1 PICT '999' VALID IF(mmontador1 = mmontador,.F.,ven(mmontador1,01,18)) WHEN ! EMPTY(mmontador)
                READ
                opcao := op_simnao('S','Confirma os Montador:')
                wvw_lclosewindow()
                IF  opcao = 'N'
                        LOOP
                ENDIF
        ENDIF
        IF m_set[1,115] = 'S'
                //mcomissao := m_matriz[mponto,15]
                mcomissao := c_pedi[mponto,53]
                op_tela(10,10,11,65,'Comissao do Produto')
                DEVPOS(00,00);DEVOUT('Digite o percentual de Comissao do Vendedor [%]:')
                WVW_DrawBoxGet(,00,COL()+1,6)
                @ 00,COL()+1 GET mcomissao PICT '999.99' VALID IF(EMPTY(mcomissao),.F.,.T.)
                READ
                wvw_lclosewindow()
                IF LASTKEY() = 27
                        LOOP
                ENDIF
        ENDIF
        */
        mtot_ped = 0
        mtot_ped = mvlr_fat * mquantd
        opcao := op_simnao('S','Confirma Alteracao da Mercadoria:')
        IF opcao = 'S'
                mdesconto := 0
*               IF mvlr_fat < iat(malt_merc[1,46],m_set[1,103])
*                       mdesconto := ((iat(malt_merc[1,46],m_set[1,103])-mvlr_fat)/iat(malt_merc[1,46],m_set[1,103]))*100
                IF mvlr_fat < iat(mp_venda,m_set[1,103])
                        mdesconto := ((iat(mp_venda,m_set[1,103])-mvlr_fat)/iat(mp_venda,m_set[1,103]))*100
                ENDIF
                aret:={}
                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_codigo[mponto]),,.t.,@aret)
                sr_getconnection():exec('COMMIT',,.f.)
                SR_BEGINTRANSACTION()
                        sr_getconnection():exec("UPDATE sacmovnt SET quantd = "+sr_cdbvalue(mquantd)+",vl_fatura = "+sr_cdbvalue(mvlr_fat)+" WHERE documento = "+sr_cdbvalue('CP'+mdocumento)+" AND codigo = "+sr_cdbvalue(m_codigo[mponto]),,.f.)
                        sr_committransaction()
                sr_endtransaction()
                m_nota[mponto,5] := mquantd
                m_nota[mponto,7] := mvlr_fat
                mquantd := 1
                EXIT
        ELSE
                mquantd := 1
                EXIT
        ENDIF
ENDDO
mcod_bc := SPACE(14)
malterou := '*'
CLEAR GETS
wvw_lclosewindow()
keyboard CHR(13)
RETURN .T.
********************************** F I M ***************************************
FUNCTION ins_obs()
******************
op_tela(00,01,05,65,'OBSERVACAO',,1)
CLEAR GETS
WHILE .T.
        opcao = "S"
        DEVPOS(1,1);DEVOUT("Observacao:")
        @ 1,13 GET mobs1
        @ 2,13 GET mobs2 
        @ 3,13 GET mobs3
        @ 4,13 GET mobs4
        @ 5,13 GET mobs5
        READ
        IF LASTKEY() = 27
                fecha_tela()
                EXIT
        ENDIF
        IF op_simnao('S','Confirma os Dados:') = 'N'
                LOOP
        ELSE
                fecha_tela()
                EXIT
        ENDIF

ENDDO
RETURN NIL
***************************  F I M  **********************************






