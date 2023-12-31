#include "fileio.ch"
#include "commands.ch"
#define  ETX CHR(3)
#define  CR  CHR(13)
#define  LF  CHR(10)
#define ENT_TXT  'ENT.TXT'
#define SAI_TXT  'SAI.TXT'
#define TMP_TXT  'ENT.TMP'

Static sENDER   := ''  ,;
SEM_ERRO := .F. ,;
sSECHORA := 0   ,;
sRETHORA := ''  ,;
sSECCOO  := 0   ,;
sNUMCUPOM:= ''  ,;
sSECEST  := 0   ,;
sESTADO  := ''  ,;
sMODELO  := ''

#ifdef __XHARBOUR__
   Static sSOCKET
#ENDIF

**********************
FUNCTION ini_ecf(mini)
**********************
LOCAL ret := 0,maux,mopcao:=''
PUBLIC ActiveX,c_aberto:=' ',mFlagFiscal := 0,mAck,mSt1,mSt2,mSt3,;
       mcons_aux := '',pdata_ecf := Space(7),phora_ecf := Space(7),m_numeroSerie := Space(16),;
       m_numerocaixa := Space(5),m_cnpj := Space(19),m_ie  := Space(16),dataUsuario := Space(21),dataSWBasico := space(21),;
       m_MFAdicional := Space(1),DLLBematech,mGrandeTotal := SPACE(18),m_MarcaImp := Space(16),m_TipoImp := Space(7),m_ModeloImp := Space(21),;
       m_VersaoFirmware,m_SerieNum,mecf_ligada := 1,horaSWBasico:=''

mensagem('INCIANDO O ACBRMONITOR Aguarde um momento....')
dataUsuario   := Space(21)
dataSWBasico  := space(21)
m_MFAdicional := Space(1)
m_numerocaixa := Space(5)
m_ModeloImp   := Space(11)
IF ! FILE('n_ecfpaf.txt')
        gerar_n_ecfpaf()
        //QUIT
ENDIF
IF ! EMPTY(m_indiv[1,42])
        IF ! IBR_INIT(ALLTRIM(m_indiv[1,42]))
                atencao('Nao e possivel INICIALIZAR o ACBRMONITOR pelo TCP-IP, verificar se estar instalado...')
                mecf_ligada := 0
                RETURN .T.
        ENDIF
        mecf_ligada := 1
ELSE
        IF ! IBR_INIT(curdrive()+':\ACBRMONITOR\')
                atencao('Nao e possivel INICIALIZAR o ACBRMONITOR pelo .TXT verificar se estar instalado...')
                mecf_ligada := 0
                RETURN .T.
        ENDIF
        mecf_ligada := 1
ENDIF

mensagem('Verificando se estar ATIVO O ECF Aguarde um momento....')
IF IBR_ATIVO()
        mensagem('Ativando o ECF....')
        IF ! IBR_ATIVA()
                atencao('Nao e possivel ativar a ECF verificar se estar instalada...')
                mecf_ligada := 0
                RETURN .T.
        ENDIF
        mecf_ligada := 1
ENDIF
//gera_ead('c:\helio\siachb\sacsetup.txt',mchv_public)
//mensagem('Verificando se existe CUPOM Aberto....')
//IF ! IBR_PODE_ABRIR()
//        atencao('Existe Cupom Aberto vai ser feito o CANCELANDO DO CUPOM')
//        IBR_CAN_CUPOM()
//ENDIF
mensagem('Verificando Numero de SERIE da Impressora...')
m_numeroSerie := Space(20)
m_numeroSerie := SUBSTR(IBR_COMANDO( 'ECF.NumSerie',,,.T. ),5)
m_SerieNum    := SUBSTR(m_numeroSerie,1,20)
m_numeroSerie := SUBSTR(m_numeroSerie,1,20)

m_SerieNum    := m_numeroSerie := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))

mensagem('Verificando MODELO DA IMPRESSORA...')
m_ModeloImp := SUBSTR(SUBSTR(IBR_COMANDO( 'ECF.Modelo',,,.T. ),5),1,20)
m_MarcaImp  := SUBSTR(SUBSTR(IBR_COMANDO( 'ECF.SubModeloECF',,,.T. ),5),1,20)

m_ModeloImp := m_ModeloImp+SPACE(20-LEN(m_ModeloImp))
m_MarcaImp := m_MarcaImp+SPACE(20-LEN(m_MarcaImp))

m_VersaoFirmware := Space(5)
mensagem('Verificando VERSAO DA FIRMWARE...')
m_VersaoFirmware := SUBSTR(IBR_COMANDO( 'ECF.NumVersao',,,.T. ),5)
m_VersaoFirmware := SUBSTR(m_VersaoFirmware,1,10)
m_VersaoFirmware := m_VersaoFirmware+SPACE(10-LEN(m_VersaoFirmware))

m_numerocaixa := Space(5)
mensagem('Verificando NUMERO DO CAIXA...')
m_numerocaixa := SUBSTR(IBR_COMANDO( 'ECF.NumECF',,,.T. ),5)
m_numerocaixa := SUBSTR(m_numerocaixa,1,3)

//atencao(m_numeroSerie+m_ModeloImp+m_VersaoFirmware+m_numerocaixa)
m_cnpj := Space(19)
m_ie  := Space(16)
mensagem('Verificando CNPJ e EI...')
m_cnpj := SUBSTR(IBR_COMANDO( 'ECF.CNPJ',,,.T. ),5)
m_cnpj := STRTRAN(m_cnpj,'.','')
m_cnpj := STRTRAN(m_cnpj,'/','')
m_cnpj := STRTRAN(m_cnpj,'-','')
m_cnpj := m_cnpj+SPACE(14-LEN(m_cnpj))

m_ie := SUBSTR(IBR_COMANDO( 'ECF.IE',,,.T. ),5)
m_ie := STRTRAN(m_ie,'.','')
m_ie := STRTRAN(m_ie,'/','')
m_ie := STRTRAN(m_ie,'-','')
m_ie := m_ie+SPACE(14-LEN(m_ie))

pdata_ecf := Space(7)
phora_ecf := Space(7)
mensagem('Verificando DATA DO ECF...')
pdata_ecf := IBR_COMANDO( 'ECF.DataHora',,50,.T. )
mdata_sis := CTOD(SUBSTR(SUBSTR(pdata_ecf,5),1,8))

mensagem('Verificando Numero do GNF...')
sCont = space(150)
sCont := SUBSTR(IBR_COMANDO( 'ECF.NumGNF',,40,.T. ),5)

mensagem('Verificando Data e Hora SB...')
dataSWBasico := space(21)
dataSWBasico := SUBSTR(IBR_COMANDO( 'ECF.DataHoraSB',,50,.T. ),5)
horaSWBasico := SUBSTR(dataSWBasico,9)
dataSWBasico := SUBSTR(dataSWBasico,1,8)
Veri_Transacao()
gerar_n_ecfpaf()
/*
IF mini = NIL
        mmd5_aux := gerar_n_ecfpaf()
        IF mmd5 # mmd5_aux
                atencao('Este programa estar sendo violado...MD5 Atual:'+mmd5+' Novo MD5:'+mmd5_aux)
                QUIT
        ENDIF
ELSE
        RETURN NIL
ENDIF
*/
IF m_line # 'OFF'
mensagem('Atualizando R1...')
        mcons_r1 := {}
        sr_getconnection():exec("SELECT * FROM r1 WHERE numero_fab = "+sr_cdbvalue(m_numeroSerie),,.t.,@mcons_r1)
        IF LEN(mcons_r1) = 0
                mlinha := m_numeroSerie+;
                          ' '+;
                          m_TipoImp+;
                          m_MarcaImp+;
                          m_ModeloImp+;
                          m_VersaoFirmware+;
                          SUBSTR(dataSWBasico,1,8)+;
                          SUBSTR(dataSWBasico,9,6)+;
                          STRZERO(VAL(m_numerocaixa),3)+;
                          m_cnpj+;
                          m_ie+;
                          mcnpj_HTI+;
                          ''+;
                          mim_HTI+;
                          mdenominacao+;
                          mpaf_HTI+;
                          mpaf_ver+;
                          ''+''+;
                          mer_paf_ecf
                sr_getconnection():exec('INSERT INTO r1 ('+;
                        'NUMERO_FAB   ,'+; //1
                        'MF_ADICIONAL ,'+; //2
                        'TIPO_ECF     ,'+; //3
                        'MARCA_ECF    ,'+; //4
                        'MODELO_ECF   ,'+; //5
                        'VERSAO_SB    ,'+; //6
                        'DATA_INSTSB  ,'+; //7
                        'HORA_INSTSB  ,'+; //8
                        'NUM_SEQ_ECF  ,'+; //9
                        'CNPJ_USU     ,'+; //10
                        'INSC_USU     ,'+; //11
                        'CNPJ_DESENV  ,'+; //12
                        'INSC_ESTDESEN,'+; //13
                        'INSC_MUNDESEN,'+; //14
                        'DENOMI_DESEN ,'+; //15
                        'NOME_PAF     ,'+; //16
                        'VERSAO_PAF   ,'+; //17
                        'COD_MD5_PAF  ,'+; //18
                        'DATA_INI     ,'+; //19
                        'DATA_FINAL   ,'+; //20
                        'VERSAO_ER_PAF,'+; //21
                        'CHV_CRIPT    ,'+; //22
                        'SR_DELETED )'+;
                        ' VALUES ('+;
                        sr_cdbvalue(m_numeroSerie)+','+; //1
                        sr_cdbvalue(m_MFAdicional)+','+; //2
                        sr_cdbvalue(m_TipoImp )+','+; //3
                        sr_cdbvalue(m_MarcaImp)+','+; //4
                        sr_cdbvalue(m_ModeloImp)+','+; //5
                        sr_cdbvalue(m_VersaoFirmware)+','+; //6
                        sr_cdbvalue(SUBSTR(dataSWBasico,1,8))+','+; //7
                        sr_cdbvalue(SUBSTR(dataSWBasico,9,6))+','+; //8
                        sr_cdbvalue(STRZERO(VAL(m_numerocaixa),3))+','+; //9
                        sr_cdbvalue(m_cnpj)+','+; //9
                        sr_cdbvalue(m_ie)+','+; //9
                        sr_cdbvalue(mcnpj_HTI)+','+; //9
                        sr_cdbvalue('')+','+; //9
                        sr_cdbvalue(mim_HTI)+','+; //9
                        sr_cdbvalue(mdenominacao)+','+; //9
                        sr_cdbvalue(mpaf_HTI)+','+; //9
                        sr_cdbvalue(mpaf_ver)+','+; //9
                        sr_cdbvalue(mmd5)+','+; //9
                        sr_cdbvalue('')+','+; //9
                        sr_cdbvalue('')+','+; //9
                        sr_cdbvalue(mer_paf_ecf)+','+; //9
                        sr_cdbvalue(criptografia(mlinha,'C') )+','+; //10
                        sr_cdbvalue(' ')+')',,.f.)
        ENDIF
ELSE

ENDIF
mretorno := SUBSTR(IBR_COMANDO( 'ECF.Estado',,,.T. ),5)
IF mretorno = 'estNaoInicializada'
        atencao('Porta Serial ainda n�o foi aberta')
ENDIF
IF mretorno = 'estDesconhecido'
        atencao('Porta aberta, mas estado ainda n�o definido')
ENDIF
IF mretorno = 'estVenda'
        atencao('Cupom de Venda Aberto com ou sem venda do 1� Item')
ENDIF
IF mretorno = 'estBloqueada'
        atencao('Redu��o Z j� emitida, bloqueada at� as 00:00')
ENDIF
IF mretorno = 'estRequerZ'
        IF 'S' = op_simnao('S','Redu��o Z do dia anterior ainda n�o foi emitida. Emitir agora:')
                **********
                IF ! REDUCAOZ()
                        atencao('Nao foi possivel emitir a REDUCAO Z...')
                        RETURN .F.
                ENDIF
                **********
        ENDIF
ENDIF
IF mretorno = 'estRequerX'
        IF 'S' = op_simnao('S','Esta impressora requer Leitura X todo inicio de dia. � necess�rio imprimir uma Leitura X para poder vender, Deseja Emitir:')
                LEITURAX(STR(mvlr_abertura,2),1)
        ENDIF
ENDIF
mensagem('Escolha a sua Opcao')
RETURN .T.
************************************ F I M ******************************************************
FUNCTION menu_fiscal
********************
LOCAL op42,MPRG:='MENUFISCAL'
IF mecf_ligada = 0
        atencao('A impressora estar Desligada ou Desconectada...')
        RETURN NIL
ENDIF
op_tela(10,20,18,49,' MENU FISCAL ')
CLEAR GETS
WHILE .T.
        exibi_prg(mprg)
        mensagem('Escolha a opcao que deseja')
        setcor(1)
        //@ 02,00 PROMPT " LMFS                        "
        //@ 03,00 PROMPT " Espelho MFD                 "
        //@ 05,00 PROMPT " Tabela de Produto           "
        //@ 06,00 PROMPT " Estoque                     "
        //@ 07,00 PROMPT " Movimento por ECF           "
        //@ 08,00 PROMPT " Meio de Pagamento           "
        //@ 13,00 PROMPT " Troco em Cartao             "

        @ 00,00 PROMPT " LX                          "
        @ 01,00 PROMPT " LMF                         "
        @ 02,00 PROMPT " Arquivo MF                  "
        @ 03,00 PROMPT " Arquivo MFD                 "
        @ 04,00 PROMPT " Arq. AC 17/04               "
        @ 05,00 PROMPT " Identificao do PAF-ECF      "
        @ 06,00 PROMPT " Vendas do Periodo	     "
        @ 07,00 PROMPT " Parametro de Configuracao   "
        @ 08,00 PROMPT " Registro do PAF-ECF         "
        @ 09,00 PROMPT " Espelho MFD                 "
        @ 10,00 PROMPT " Envio ao FISCO REDUCAO Z    "
        @ 11,00 PROMPT " Envio ao FISCO ESTOQUE      "
        @ 12,00 PROMPT " Vendas Identificada CPF/CNPJ"
        @ 13,00 PROMPT " Tab.Indice Tecnico Producao "
        @ 14,00 PROMPT " REDUCAO Z                   "
        MENU TO op42
        DO CASE
                        //arquivo_mfd()
                        //tab_produto()
                        //estoque_f('T')
                        //meio_pag()
                CASE op42=0
                        wvw_lclosewindow()
                        RETURN NIL
                CASE op42=1
                        mopcao := op_simnao('N','Confirma a IMPRESSAO DA LEITURA X:')
                        IF mopcao = 'S'
                                LEITURAX('0',1)
                        ENDIF
                CASE op42=2
                        MEMORIA_D('c')
                CASE op42=3
                        //MEMORIA_D('s')
                        arquivo_mfd('MF')
                CASE op42=4
                        //espelho_mfd()
                        arquivo_mfd('MFD')
                CASE op42=5
                CASE op42=6
                        id_paf()
                CASE op42=7
                        mov_ecf()
                CASE op42=8
                        para_conf()
                CASE op42=9
                        atencao('"ESTE PAF-ECF NAO EXECUTA FUNCAO DE BAIXA DE ESTOQUE COM BASE EM INDICES TECNICOS DE PRODUCAO, NAO PODENDO SER UTILIZADO POR ESTABELECIMENTO QUE NECESSITE DESTE."')
                /*
                CASE op42=10
                CASE op42=11
                CASE op42=12
                CASE op42=13
                CASE op42=14
                        atencao('"ESTE PAF-ECF NAO UTILIZA ESTA FUNCAO."')
                */
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** f i m ********************************
FUNCTION leituraX(mvlr_ab,mtp_imp)
******************
LOCAL ret := 0,Vack:=SPACE(1),Vst1:=SPACE(1),vst2:=SPACE(1),mdado_z

SET CENTURY ON
IBR_LEITURAX()
IF ! mtp_imp = 1 .AND. ! EMPTY(VAL(mvlr_ab))
        mvlr_ab := STR(VAL(mvlr_ab)/100)
        sCont := IBR_COMANDO( 'ECF.Sangria',{mvlr_ab,,,"Dinheiro"},,.T. )
ENDIF
IF VAL(mvlr_ab) > 0
        NCupom := num_cupom()
        Operacoes = Space(7)
        Operacoes := SUBSTR(IBR_COMANDO( 'ECF.NumGNF',,,.T. ),5)
        Operacoes := SUBSTR(Operacoes,1,6)
        mhora := TIME()
        mhora := STRTRAN(mhora,':','')+SPACE(8-LEN(STRTRAN(mhora,':','')))
        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
                m_MFAdicional+; //2
                m_ModeloImp+; //3
                STRZERO(VAL(m_numerocaixa),2)+; //4
                NCupom+SPACE(6-LEN(NCupom))+; //5
                Operacoes+SPACE(6-LEN(operacoes))+; //6
                STRZERO(0,6)+; //7
                STRZERO(0,4)+; //8
                'CN'+; //9
                SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)+SPACE(8-LEN(SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)))+; //10
                mhora+; //11
                DTOC(mdata_sis)

        sr_getconnection():exec('INSERT INTO r6 ('+;
                'NUMERO_FAB  ,'+; //1
                'MF_ADICIONAL,'+; //2
                'MODELO_ECF  ,'+; //3
                'NUMERO_USU  ,'+; //4
                'COO         ,'+; //5
                'GNF         ,'+; //6
                'GRG         ,'+; //7
                'CDC         ,'+; //8
                'DENOMICAO   ,'+; //9
                'DATA_FINAL  ,'+; //10
                'HORA_FINAL  ,'+; //11
                'DATA_MOV    ,'+; //12
                'CHV_CRIPT   ,'+; //13
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(m_numeroSerie)+','+; //1
                sr_cdbvalue(m_MFAdicional)+','+; //2
                sr_cdbvalue(m_ModeloImp)+','+; //3
                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                sr_cdbvalue(NCupom)+','+; //5
                sr_cdbvalue(Operacoes)+','+; //6
                sr_cdbvalue(STRZERO(0,6))+','+; //7
                sr_cdbvalue(STRZERO(0,4))+','+; //8
                sr_cdbvalue('CN')+','+; //9
                sr_cdbvalue(SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2))+','+; //10
                sr_cdbvalue(mhora)+','+; //11
                sr_cdbvalue(mdata_sis)+','+; //12
                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //26
                sr_cdbvalue(' ')+')',,.f.)

        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
                m_MFAdicional+; //2
                m_ModeloImp+; //3
                STRZERO(VAL(m_numerocaixa),2)+; //4
                NCupom+SPACE(6-LEN(NCupom))+; //5
                STRZERO(0,6)+; //6
                Operacoes+SPACE(6-LEN(operacoes))+; //7
                SPACE(15)+; //8
                STRZERO(0,13)+; //9
                'N'+; //10
                STRZERO(0,13)+; //11
                DTOC(mdata_sis)

        sr_getconnection():exec('INSERT INTO r7 ('+;
                'NUMERO_FAB  ,'+; //1
                'MF_ADICIONAL,'+; //2
                'MODELO_ECF  ,'+; //3
                'NUMERO_USU  ,'+; //4
                'COO         ,'+; //5
                'CCF         ,'+; //6
                'GNF         ,'+; //7
                'MEIO_PAG    ,'+; //8
                'VLR_PAGO    ,'+; //9
                'IND_ESTORNO ,'+; //10
                'VLR_ESTORNO ,'+; //11
                'DATA_MOV    ,'+; //12
                'CHV_CRIPT   ,'+; //13
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(m_numeroSerie)+','+; //1
                sr_cdbvalue(m_MFAdicional)+','+; //2
                sr_cdbvalue(m_ModeloImp)+','+; //3
                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                sr_cdbvalue(NCupom)+','+; //5
                sr_cdbvalue(STRZERO(0,6))+','+; //6
                sr_cdbvalue(Operacoes)+','+; //7
                sr_cdbvalue(SPACE(15))+','+; //8
                sr_cdbvalue(STRZERO(0,13))+','+; //9
                sr_cdbvalue('N')+','+; //10
                sr_cdbvalue(STRZERO(0,13))+','+; //11
                sr_cdbvalue(mdata_sis)+','+; //12
                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //26
                sr_cdbvalue(' ')+')',,.f.)
        sr_getconnection():exec('COMMIT',,.f.)
        SET CENTURY OFF
ENDIF
RETURN .T.
*************************************  F I M ******************************************
FUNCTION reducaoZ
*****************
LOCAL ret := 0,mvet_z,mcript,maux,mCRZ,mCOO,mCRO,;
      mcar_aliq:='',maliq := '',i:=0,m_mem := {},mcons_r1 := {}

PRIVATE mFlag,cCOOInicial := space(7),cCOOFinal := space(7)

op_tela(10,10,11,70,'Impressao da REDUCAO Z',,'*')
DEVPOS(01,01);DEVOUT('Aguarde o Final da Impressao REDUCAO Z ....')
IF m_line # 'OFF'
        mvet_z :={}
        sr_getconnection():exec("SELECT pnum_ped FROM sacpv WHERE ppag IS NULL OR ppag = ' '  AND pdat_ped < "+sr_cdbvalue(ver_DataEcf())+" GROUP BY pnum_ped,pnum_ped",,.t.,@mvet_z)
        IF LEN(mvet_z) > 0
                mensagem('Aguarde Cancelando as PRE-VENDA em aberto...')
                cancelar_pv(mvet_z)
                sr_getconnection():exec("UPDATE sacpv SET ppag = 'C',pdatapag = " + sr_cdbvalue(mdata_sis)+" WHERE ppag IS NULL OR ppag = ' ' AND pdat_ped < "+sr_cdbvalue(ver_DataEcf()),,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                atencao('Foi verificado todas as PRE-VENDAS pendentes... Imprimir REDUCAO Z')
        ENDIF
ENDIF
//IF m_cfg[6] # 'REDUCAOZ'
        IBR_REDUCAOZ()
//ENDIF
DataReducao := Space(7)
HoraReducao := Space(7)

mensagem('Verificando se Data e Hora da Ultima Reducao Z...')
maux_rz := v_reducao_z()
maux := maux_rz
//datareducao := CTOD(SUBSTR(IBR_COMANDO( 'ECF.DataMovimento', , 10 ),5))
datareducao := item_rz(maux_rz,'DataMovimento')
HoraReducao := TIME()
HoraReducao := SUBSTR(HoraReducao,1,2)+':'+SUBSTR(HoraReducao,3,2)+':'+SUBSTR(HoraReducao,5,2)

M_Valor := Space(19)
mensagem('Verificando VENDA BRUTA...')
m_valor := item_rz(maux_rz,'VendaBruta')
m_valor := VAL(STRTRAN(SUBSTR(m_valor,1,18),',',''))

cCOOInicial := cCOOFinal := space(7)
mensagem('Verificando COO...')
cCOOInicial := item_rz(maux_rz,'NumCOOInicial')
cCOOFinal := item_rz(maux_rz,'NumCOO')

mCRZ := item_rz(maux_rz,'NumCRZ')
mCOO := item_rz(maux_rz,'NumCRO')
mCRO := item_rz(maux_rz,'NumCRO')
//atencao( sr_ShowVector(maux_rz ))
//mCRO := maux[2]
mGT  := item_rz(maux_rz,'GrandeTotal')

mensagem('Atualizando R1...')
IF m_line # 'OFF'
        mcons_r1 := {}
        sr_getconnection():exec("SELECT * FROM r1 WHERE numero_fab = "+sr_cdbvalue(m_numeroSerie),,.t.,@mcons_r1)
        IF LEN(mcons_r1) = 0
                mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+;
                          m_MFAdicional+;
                          m_TipoImp+SPACE(7-LEN(m_TipoImp))+;
                          m_MarcaImp+SPACE(20-LEN(m_MarcaImp))+;
                          m_ModeloImp+;
                          m_VersaoFirmware+SPACE(10-LEN(m_VersaoFirmware))+;
                          SUBSTR(dataSWBasico,1,8)+;
                          SUBSTR(dataSWBasico,9,6)+;
                          STRZERO(VAL(m_numerocaixa),3)+;
                          m_set[1,123]+;
                          m_set[1,128]+;
                          mcnpj_HTI+;
                          ''+;
                          mim_HTI+;
                          mdenominacao+;
                          mpaf_HTI+;
                          mpaf_ver+;
                          ''+''+;
                          mer_paf_ecf
                sr_getconnection():exec('INSERT INTO r1 ('+;
                        'NUMERO_FAB   ,'+; //1
                        'MF_ADICIONAL ,'+; //2
                        'TIPO_ECF     ,'+; //3
                        'MARCA_ECF    ,'+; //4
                        'MODELO_ECF   ,'+; //5
                        'VERSAO_SB    ,'+; //6
                        'DATA_INSTSB  ,'+; //7
                        'HORA_INSTSB  ,'+; //8
                        'NUM_SEQ_ECF  ,'+; //9
                        'CNPJ_USU     ,'+; //10
                        'INSC_USU     ,'+; //11
                        'CNPJ_DESENV  ,'+; //12
                        'INSC_ESTDESEN,'+; //13
                        'INSC_MUNDESEN,'+; //14
                        'DENOMI_DESEN ,'+; //15
                        'NOME_PAF     ,'+; //16
                        'VERSAO_PAF   ,'+; //17
                        'COD_MD5_PAF  ,'+; //18
                        'DATA_INI     ,'+; //19
                        'DATA_FINAL   ,'+; //20
                        'VERSAO_ER_PAF,'+; //21
                        'CHV_CRIPT    ,'+; //22
                        'SR_DELETED )'+;
                        ' VALUES ('+;
                        sr_cdbvalue(m_numeroSerie)+','+; //1
                        sr_cdbvalue(m_MFAdicional)+','+; //2
                        sr_cdbvalue(m_TipoImp )+','+; //3
                        sr_cdbvalue(m_MarcaImp)+','+; //4
                        sr_cdbvalue(m_ModeloImp)+','+; //5
                        sr_cdbvalue(m_VersaoFirmware)+','+; //6
                        sr_cdbvalue(SUBSTR(dataSWBasico,1,8))+','+; //7
                        sr_cdbvalue(SUBSTR(dataSWBasico,9,6))+','+; //8
                        sr_cdbvalue(STRZERO(VAL(m_numerocaixa),3))+','+; //9
                        sr_cdbvalue(SUBSTR(m_set[1,123],1,14))+','+; //9
                        sr_cdbvalue(m_set[1,128])+','+; //9
                        sr_cdbvalue(mcnpj_HTI)+','+; //9
                        sr_cdbvalue('')+','+; //9
                        sr_cdbvalue(mim_HTI)+','+; //9
                        sr_cdbvalue(mdenominacao)+','+; //9
                        sr_cdbvalue(mpaf_HTI)+','+; //9
                        sr_cdbvalue(mpaf_ver)+','+; //9
                        sr_cdbvalue(mmd5)+','+; //9
                        sr_cdbvalue('')+','+; //9
                        sr_cdbvalue('')+','+; //9
                        sr_cdbvalue(mer_paf_ecf)+','+; //9
                        sr_cdbvalue(criptografia(mlinha,'C') )+','+; //10
                        sr_cdbvalue(' ')+')',,.f.)
        ENDIF
        mhora := TIME()
        SET CENTURY ON
        mensagem('Atualizando R2...')
        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
                  m_MFAdicional+; //2
                  m_ModeloImp+; //3
                  STRZERO(VAL(m_numerocaixa),2)+; //4
                  STRZERO(VAL(mCRZ),6)+; //5
                  STRZERO(VAL(mCOO),6)+; //6
                  STRZERO(VAL(mCRO),6)+; //7
                  datareducao+; //8
                  SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)+SPACE(8-LEN(SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)))+; //9
                  STRTRAN(mhora,':','')+SPACE(8-LEN(STRTRAN(mhora,':','')))+; //10
                  STRZERO(m_valor,14)+; //11
                  'N'+; //12
                  cCOOInicial+; //13
                  cCOOFinal   //14

        sr_getconnection():exec('INSERT INTO r2 ('+;
                'NUMERO_FAB,  '+; //1
                'MF_ADICIONAL,'+; //2
                'MODELO_ECF,  '+; //3
                'NUMERO_USU,  '+; //4
                'CRZ,         '+; //5
                'COO,         '+; //6
                'CRO,         '+; //7
                'DATA_MOV,    '+; //8
                'DATA_EMI,    '+; //9
                'HORA_EMI,    '+; //10
                'VENDA_BRUTA, '+; //11
                'PARAMETRO,   '+; //12
                'COO_INI,     '+; //13
                'COO_FIM,     '+; //14
                'CHV_CRIPT,   '+; //15
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(m_numeroSerie)+','+; //1
                sr_cdbvalue(m_MFAdicional)+','+; //2
                sr_cdbvalue(m_ModeloImp)+','+; //3
                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                sr_cdbvalue(STRZERO(VAL(mCRZ),6))+','+; //5
                sr_cdbvalue(STRZERO(VAL(mCOO),6))+','+; //6
                sr_cdbvalue(STRZERO(VAL(mCRO),6))+','+; //7
                sr_cdbvalue(CTOD(datareducao))+','+; //8
                sr_cdbvalue(SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2))+','+; //9
                sr_cdbvalue(STRTRAN(mhora,':',''))+','+; //10
                sr_cdbvalue(STRZERO(m_valor,14))+','+; //11
                sr_cdbvalue('N')+','+; //12
                sr_cdbvalue(cCOOInicial)+','+; //13
                sr_cdbvalue(cCOOFinal)+','+; //14
                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //15
                sr_cdbvalue(' ')+')',,.f.)
        i:=0
        SET CENTURY OFF
        mensagem('Atualizando R3...')
        mcar_aliq := STRTRAN(SUBSTR(IBR_COMANDO( 'ECF.CarregaAliquotas', , 10 ),5),',','')
        mcar_aliq := STRTRAN(mcar_aliq,' ','')
        maliq := ''
        i:=0
        m_mem := {}
        FOR i = 1 TO LEN(mcar_aliq)
                IF SUBSTR(mcar_aliq,i,1) = '|'
                        AADD(m_mem,maliq)
                        maliq := ''
                        LOOP
                ELSE
                        maliq := maliq + SUBSTR(mcar_aliq,i,1)
                ENDIF
        NEXT
        AADD(m_mem,maliq)
        i:=0
        FOR i = 1 TO LEN(m_mem)
                mvlr_item := STRZERO(VAL(STRTRAN(item_rz(maux_rz,m_mem[i]),',','')),13)
                IF mvlr_item = ''
                        LOOP
                ENDIF
                mindice := m_mem[i]
                mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+;
                          m_MFAdicional+;
                          m_ModeloImp+;
                          STRZERO(VAL(m_numerocaixa),2)+;
                          STRZERO(VAL(mCRZ),6)+;
                          mindice+SPACE(7-LEN(mindice))+;
                          mvlr_item+;
                          datareducao
                sr_getconnection():exec('INSERT INTO r3 ('+;
                        'NUMERO_FAB,   '+; //1
                        'MF_ADICIONAL, '+; //2
                        'MODELO_ECF,   '+; //3
                        'NUMERO_USU,   '+; //4
                        'CRZ,          '+; //5
                        'TOTAL_PARCIAL,'+; //6
                        'VALOR_ACU,    '+; //7
                        'DATA_MOV ,    '+; //8
                        'CHV_CRIPT,    '+; //9
                        'SR_DELETED )'+;
                        ' VALUES ('+;
                        sr_cdbvalue(m_numeroSerie)+','+; //1
                        sr_cdbvalue(m_MFAdicional)+','+; //2
                        sr_cdbvalue(m_ModeloImp)+','+; //3
                        sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                        sr_cdbvalue(STRZERO(VAL(mCRZ),6))+','+; //5
                        sr_cdbvalue(mindice)+','+; //6
                        sr_cdbvalue(mvlr_item)+','+; //7
                        sr_cdbvalue(CTOD(datareducao))+','+; //13
                        sr_cdbvalue(criptografia(mlinha,'C') )+','+; //13
                        sr_cdbvalue(' ')+')',,.f.)
        NEXT
        mindice := 'I1'
        mvlr_acumulado := STRZERO(VAL(STRTRAN(item_rz(maux_rz,'TotalIsencao'),',','')),13)
        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+;
                  m_MFAdicional+;
                  m_ModeloImp+;
                  STRZERO(VAL(m_numerocaixa),2)+;
                  STRZERO(VAL(mCRZ),6)+;
                  mindice+SPACE(7-LEN(mindice))+;
                  mvlr_acumulado+;
                  datareducao

        sr_getconnection():exec('INSERT INTO r3 ('+;
                'NUMERO_FAB,   '+; //1
                'MF_ADICIONAL, '+; //2
                'MODELO_ECF,   '+; //3
                'NUMERO_USU,   '+; //4
                'CRZ,          '+; //5
                'TOTAL_PARCIAL,'+; //6
                'VALOR_ACU,    '+; //7
                'DATA_MOV ,    '+; //8
                'CHV_CRIPT,    '+; //9
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(m_numeroSerie)+','+; //1
                sr_cdbvalue(m_MFAdicional)+','+; //2
                sr_cdbvalue(m_ModeloImp)+','+; //3
                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                sr_cdbvalue(STRZERO(VAL(mCRZ),6))+','+; //5
                sr_cdbvalue(mindice)+','+; //6
                sr_cdbvalue(mvlr_acumulado)+','+; //7
                sr_cdbvalue(CTOD(datareducao))+','+; //13
                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //13
                sr_cdbvalue(' ')+')',,.f.)

        mindice := 'N1'
        mvlr_acumulado := STRZERO(VAL(STRTRAN(item_rz(maux_rz,'TotalNaoTributado'),',','')),13)
        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+;
                  m_MFAdicional+;
                  m_ModeloImp+;
                  STRZERO(VAL(m_numerocaixa),2)+;
                  STRZERO(VAL(mCRZ),6)+;
                  mindice+SPACE(7-LEN(mindice))+;
                  mvlr_acumulado+;
                  datareducao
        sr_getconnection():exec('INSERT INTO r3 ('+;
                'NUMERO_FAB,   '+; //1
                'MF_ADICIONAL, '+; //2
                'MODELO_ECF,   '+; //3
                'NUMERO_USU,   '+; //4
                'CRZ,          '+; //5
                'TOTAL_PARCIAL,'+; //6
                'VALOR_ACU,    '+; //7
                'DATA_MOV ,    '+; //8
                'CHV_CRIPT,    '+; //8
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(m_numeroSerie)+','+; //1
                sr_cdbvalue(m_MFAdicional)+','+; //2
                sr_cdbvalue(m_ModeloImp)+','+; //3
                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                sr_cdbvalue(STRZERO(VAL(mCRZ),6))+','+; //5
                sr_cdbvalue(mindice)+','+; //6
                sr_cdbvalue(mvlr_acumulado)+','+; //7
                sr_cdbvalue(CTOD(datareducao))+','+; //13
                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //13
                sr_cdbvalue(' ')+')',,.f.)

        mindice := 'F1'
        mvlr_acumulado := STRZERO(VAL(STRTRAN(item_rz(maux_rz,'TotalSubstituicaoTributaria'),',','')),13)
        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+;
                  m_MFAdicional+;
                  m_ModeloImp+;
                  STRZERO(VAL(m_numerocaixa),2)+;
                  STRZERO(VAL(mCRZ),6)+;
                  mindice+SPACE(7-LEN(mindice))+;
                  mvlr_acumulado+;
                  datareducao
        sr_getconnection():exec('INSERT INTO r3 ('+;
                'NUMERO_FAB,   '+; //1
                'MF_ADICIONAL, '+; //2
                'MODELO_ECF,   '+; //3
                'NUMERO_USU,   '+; //4
                'CRZ,          '+; //5
                'TOTAL_PARCIAL,'+; //6
                'VALOR_ACU,    '+; //7
                'DATA_MOV ,    '+; //8
                'CHV_CRIPT,    '+; //8
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(m_numeroSerie)+','+; //1
                sr_cdbvalue(m_MFAdicional)+','+; //2
                sr_cdbvalue(m_ModeloImp)+','+; //3
                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                sr_cdbvalue(STRZERO(VAL(mCRZ),6))+','+; //5
                sr_cdbvalue(mindice)+','+; //6
                sr_cdbvalue(mvlr_acumulado)+','+; //7
                sr_cdbvalue(CTOD(datareducao))+','+; //13
                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //13
                sr_cdbvalue(' ')+')',,.f.)
        mindice := 'CAN-T'
        mvlr_acumulado := STRZERO(VAL(STRTRAN(item_rz(maux_rz,'TotalCancelamentos'),',','')),13)
        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+;
                  m_MFAdicional+;
                  m_ModeloImp+;
                  STRZERO(VAL(m_numerocaixa),2)+;
                  STRZERO(VAL(mCRZ),6)+;
                  mindice+SPACE(7-LEN(mindice))+;
                  mvlr_acumulado+;
                  datareducao
        sr_getconnection():exec('INSERT INTO r3 ('+;
                'NUMERO_FAB,   '+; //1
                'MF_ADICIONAL, '+; //2
                'MODELO_ECF,   '+; //3
                'NUMERO_USU,   '+; //4
                'CRZ,          '+; //5
                'TOTAL_PARCIAL,'+; //6
                'VALOR_ACU,    '+; //7
                'DATA_MOV ,    '+; //8
                'CHV_CRIPT,    '+; //8
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(m_numeroSerie)+','+; //1
                sr_cdbvalue(m_MFAdicional)+','+; //2
                sr_cdbvalue(m_ModeloImp)+','+; //3
                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                sr_cdbvalue(STRZERO(VAL(mCRZ),6))+','+; //5
                sr_cdbvalue(mindice)+','+; //6
                sr_cdbvalue(mvlr_acumulado)+','+; //7
                sr_cdbvalue(CTOD(datareducao))+','+; //13
                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //13
                sr_cdbvalue(' ')+')',,.f.)
        mindice := 'OPNF'
        mvlr_acumulado := STRZERO(VAL(STRTRAN(item_rz(maux_rz,'TotalNaoFiscal'),',','')),13)
        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+;
                  m_MFAdicional+;
                  m_ModeloImp+;
                  STRZERO(VAL(m_numerocaixa),2)+;
                  STRZERO(VAL(mCRZ),6)+;
                  mindice+SPACE(7-LEN(mindice))+;
                  mvlr_acumulado+;
                  datareducao
        sr_getconnection():exec('INSERT INTO r3 ('+;
                'NUMERO_FAB,   '+; //1
                'MF_ADICIONAL, '+; //2
                'MODELO_ECF,   '+; //3
                'NUMERO_USU,   '+; //4
                'CRZ,          '+; //5
                'TOTAL_PARCIAL,'+; //6
                'VALOR_ACU,    '+; //7
                'DATA_MOV ,    '+; //8
                'CHV_CRIPT,    '+; //8
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(m_numeroSerie)+','+; //1
                sr_cdbvalue(m_MFAdicional)+','+; //2
                sr_cdbvalue(m_ModeloImp)+','+; //3
                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                sr_cdbvalue(STRZERO(VAL(mCRZ),6))+','+; //5
                sr_cdbvalue(mindice)+','+; //6
                sr_cdbvalue(mvlr_acumulado)+','+; //7
                sr_cdbvalue(CTOD(datareducao))+','+; //13
                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //13
                sr_cdbvalue(' ')+')',,.f.)
        mindice := 'DT'
        mvlr_acumulado := STRZERO(VAL(STRTRAN(item_rz(maux_rz,'TotalDescontos'),',','')),13)
        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+;
                  m_MFAdicional+;
                  m_ModeloImp+;
                  STRZERO(VAL(m_numerocaixa),2)+;
                  STRZERO(VAL(mCRZ),6)+;
                  mindice+SPACE(7-LEN(mindice))+;
                  mvlr_acumulado+;
                  datareducao
        sr_getconnection():exec('INSERT INTO r3 ('+;
                'NUMERO_FAB,   '+; //1
                'MF_ADICIONAL, '+; //2
                'MODELO_ECF,   '+; //3
                'NUMERO_USU,   '+; //4
                'CRZ,          '+; //5
                'TOTAL_PARCIAL,'+; //6
                'VALOR_ACU,    '+; //7
                'DATA_MOV ,    '+; //8
                'CHV_CRIPT,    '+; //8
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(m_numeroSerie)+','+; //1
                sr_cdbvalue(m_MFAdicional)+','+; //2
                sr_cdbvalue(m_ModeloImp)+','+; //3
                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                sr_cdbvalue(STRZERO(VAL(mCRZ),6))+','+; //5
                sr_cdbvalue(mindice)+','+; //6
                sr_cdbvalue(mvlr_acumulado)+','+; //7
                sr_cdbvalue(CTOD(datareducao))+','+; //13
                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //13
                sr_cdbvalue(' ')+')',,.f.)
        mindice := 'AT'
        mvlr_acumulado := STRZERO(VAL(STRTRAN(item_rz(maux_rz,'TotalAcrescimos'),',','')),13)
        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+;
                  m_MFAdicional+;
                  m_ModeloImp+;
                  STRZERO(VAL(m_numerocaixa),2)+;
                  STRZERO(VAL(mCRZ),6)+;
                  mindice+SPACE(7-LEN(mindice))+;
                  mvlr_acumulado+;
                  datareducao
        sr_getconnection():exec('INSERT INTO r3 ('+;
                'NUMERO_FAB,   '+; //1
                'MF_ADICIONAL, '+; //2
                'MODELO_ECF,   '+; //3
                'NUMERO_USU,   '+; //4
                'CRZ,          '+; //5
                'TOTAL_PARCIAL,'+; //6
                'VALOR_ACU,    '+; //7
                'DATA_MOV ,    '+; //8
                'CHV_CRIPT,    '+; //8
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(m_numeroSerie)+','+; //1
                sr_cdbvalue(m_MFAdicional)+','+; //2
                sr_cdbvalue(m_ModeloImp)+','+; //3
                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                sr_cdbvalue(STRZERO(VAL(mCRZ),6))+','+; //5
                sr_cdbvalue(mindice)+','+; //6
                sr_cdbvalue(mvlr_acumulado)+','+; //7
                sr_cdbvalue(CTOD(datareducao))+','+; //13
                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //13
                sr_cdbvalue(' ')+')',,.f.)
        sr_getconnection():exec('COMMIT',,.f.)
ELSE
        IF ! AbriArq("r2","ir2");RETURN NIL;ENDIF
        IF ! AbriArq("r3","ir3");RETURN NIL;ENDIF
        mhora := TIME()
        SET CENTURY ON
        mensagem('Atualizando R2...')
        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
                  m_MFAdicional+; //2
                  m_ModeloImp+; //3
                  STRZERO(VAL(m_numerocaixa),2)+; //4
                  STRZERO(VAL(mCRZ),6)+; //5
                  STRZERO(VAL(mCOO),6)+; //6
                  STRZERO(VAL(mCRO),6)+; //7
                  datareducao+;
                  SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)+SPACE(8-LEN(SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)))+; //8
                  STRTRAN(mhora,':','')+SPACE(8-LEN(STRTRAN(mhora,':','')))+; //9
                  STRZERO(m_valor,14)+; //10
                  'N'+; //11
                  cCOOInicial+; //12
                  cCOOFinal   //13
        ***********
        SELE('ir2')
        ***********
        ADIREG()
        ir2->NUMERO_FAB   := m_numeroSerie //1
        ir2->MF_ADICION := SUBSTR(m_MFAdicional,1,1) //2
        ir2->MODELO_ECF   := SUBSTR(m_ModeloImp,1,20) //3
        ir2->NUMERO_USU   := STRZERO(VAL(m_numerocaixa),2) //4
        ir2->CRZ          := STRZERO(VAL(mCRZ),6) //5
        ir2->COO          := STRZERO(VAL(mCOO),6) //6
        ir2->CRO          := STRZERO(VAL(mCRO),6) //7
        ir2->DATA_MOV     := CTOD(datareducao) //8
        ir2->DATA_EMI     := SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2) //9
        ir2->HORA_EMI     := STRTRAN(mhora,':','') //10
        ir2->VENDA_BRUT   := STRZERO(m_valor,14) //11
        ir2->PARAMETRO    := 'N' //12
        ir2->COO_INI      := cCOOInicial //13
        ir2->COO_FIM      := cCOOFinal //14
        ir2->CHV_CRIPT    := criptografia(mlinha,'C')  //15
        */
        DBCOMMITALL()
        DBUNLOCKALL()

        ***********
        SELE('ir3')
        ***********
        i:=0
        SET CENTURY OFF
        mensagem('Atualizando R3...')
        mcar_aliq := STRTRAN(SUBSTR(IBR_COMANDO( 'ECF.CarregaAliquotas', , 10 ),5),',','')
        mcar_aliq := STRTRAN(mcar_aliq,' ','')
        maliq := ''
        i:=0
        m_mem := {}
        FOR i = 1 TO LEN(mcar_aliq)
                IF SUBSTR(mcar_aliq,i,1) = '|'
                        AADD(m_mem,maliq)
                        maliq := ''
                        LOOP
                ELSE
                        maliq := maliq + SUBSTR(mcar_aliq,i,1)
                ENDIF
        NEXT
        AADD(m_mem,maliq)
        i:=0
        FOR i = 1 TO LEN(m_mem)
                mvlr_item := STRZERO(VAL(STRTRAN(item_rz(maux_rz,m_mem[i]),',','')),13)
                IF mvlr_item = ''
                        LOOP
                ENDIF
                mindice := m_mem[i]
                mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+;
                          m_MFAdicional+;
                          m_ModeloImp+;
                          STRZERO(VAL(m_numerocaixa),2)+;
                          STRZERO(VAL(mCRZ),6)+;
                          mindice+SPACE(7-LEN(mindice))+;
                          mvlr_item+;
                          datareducao
                ADIREG()
                ir3->NUMERO_FAB    := m_numeroSerie //1
                ir3->MF_ADICION    := m_MFAdicional //2
                ir3->MODELO_ECF    := m_ModeloImp //3
                ir3->NUMERO_USU    := STRZERO(VAL(m_numerocaixa),2) //4
                ir3->CRZ           := STRZERO(VAL(mCRZ),6) //5
                ir3->TOTAL_PARC    := mindice //6
                ir3->VALOR_ACU     := mvlr_item //7
                ir3->DATA_MOV      := CTOD(datareducao) //13
                ir3->CHV_CRIPT     := criptografia(mlinha,'C') //13
        NEXT
        mindice := 'I1'
        mvlr_acumulado := STRZERO(VAL(STRTRAN(item_rz(maux_rz,'TotalIsencao'),',','')),13)
        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+;
                  m_MFAdicional+;
                  m_ModeloImp+;
                  STRZERO(VAL(m_numerocaixa),2)+;
                  STRZERO(VAL(mCRZ),6)+;
                  mindice+SPACE(7-LEN(mindice))+;
                  mvlr_acumulado+;
                  datareducao

        ADIREG()
        ir3->NUMERO_FAB    := m_numeroSerie //1
        ir3->MF_ADICION    := m_MFAdicional //2
        ir3->MODELO_ECF    := m_ModeloImp //3
        ir3->NUMERO_USU    := STRZERO(VAL(m_numerocaixa),2) //4
        ir3->CRZ           := STRZERO(VAL(mCRZ),6) //5
        ir3->TOTAL_PARC    := mindice //6
        ir3->VALOR_ACU     := mvlr_acumulado //7
        ir3->DATA_MOV      := CTOD(datareducao) //13
        ir3->CHV_CRIPT     := criptografia(mlinha,'C') //13

        mindice := 'N1'
        mvlr_acumulado := STRZERO(VAL(STRTRAN(item_rz(maux_rz,'TotalNaoTributado'),',','')),13)
        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+;
                  m_MFAdicional+;
                  m_ModeloImp+;
                  STRZERO(VAL(m_numerocaixa),2)+;
                  STRZERO(VAL(mCRZ),6)+;
                  mindice+SPACE(7-LEN(mindice))+;
                  mvlr_acumulado+;
                  datareducao
        ADIREG()
        ir3->NUMERO_FAB    := m_numeroSerie //1
        ir3->MF_ADICION    := m_MFAdicional //2
        ir3->MODELO_ECF    := m_ModeloImp //3
        ir3->NUMERO_USU    := STRZERO(VAL(m_numerocaixa),2) //4
        ir3->CRZ           := STRZERO(VAL(mCRZ),6) //5
        ir3->TOTAL_PARC    := mindice //6
        ir3->VALOR_ACU     := mvlr_acumulado //7
        ir3->DATA_MOV      := CTOD(datareducao) //13
        ir3->CHV_CRIPT     := criptografia(mlinha,'C') //13

        mindice := 'F1'
        mvlr_acumulado := STRZERO(VAL(STRTRAN(item_rz(maux_rz,'TotalSubstituicaoTributaria'),',','')),13)
        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+;
                  m_MFAdicional+;
                  m_ModeloImp+;
                  STRZERO(VAL(m_numerocaixa),2)+;
                  STRZERO(VAL(mCRZ),6)+;
                  mindice+SPACE(7-LEN(mindice))+;
                  mvlr_acumulado+;
                  datareducao
        ADIREG()
        ir3->NUMERO_FAB    := m_numeroSerie //1
        ir3->MF_ADICION    := m_MFAdicional //2
        ir3->MODELO_ECF    := m_ModeloImp //3
        ir3->NUMERO_USU    := STRZERO(VAL(m_numerocaixa),2) //4
        ir3->CRZ           := STRZERO(VAL(mCRZ),6) //5
        ir3->TOTAL_PARC    := mindice //6
        ir3->VALOR_ACU     := mvlr_acumulado //7
        ir3->DATA_MOV      := CTOD(datareducao) //13
        ir3->CHV_CRIPT     := criptografia(mlinha,'C') //13

        mindice := 'CAN-T'
        mvlr_acumulado := STRZERO(VAL(STRTRAN(item_rz(maux_rz,'TotalCancelamentos'),',','')),13)
        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+;
                  m_MFAdicional+;
                  m_ModeloImp+;
                  STRZERO(VAL(m_numerocaixa),2)+;
                  STRZERO(VAL(mCRZ),6)+;
                  mindice+SPACE(7-LEN(mindice))+;
                  mvlr_acumulado+;
                  datareducao
        ADIREG()
        ir3->NUMERO_FAB    := m_numeroSerie //1
        ir3->MF_ADICION    := m_MFAdicional //2
        ir3->MODELO_ECF    := m_ModeloImp //3
        ir3->NUMERO_USU    := STRZERO(VAL(m_numerocaixa),2) //4
        ir3->CRZ           := STRZERO(VAL(mCRZ),6) //5
        ir3->TOTAL_PARC    := mindice //6
        ir3->VALOR_ACU     := mvlr_acumulado //7
        ir3->DATA_MOV      := CTOD(datareducao) //13
        ir3->CHV_CRIPT     := criptografia(mlinha,'C') //13

        mindice := 'OPNF'
        mvlr_acumulado := STRZERO(VAL(STRTRAN(item_rz(maux_rz,'TotalNaoFiscal'),',','')),13)
        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+;
                  m_MFAdicional+;
                  m_ModeloImp+;
                  STRZERO(VAL(m_numerocaixa),2)+;
                  STRZERO(VAL(mCRZ),6)+;
                  mindice+SPACE(7-LEN(mindice))+;
                  mvlr_acumulado+;
                  datareducao
        ADIREG()
        ir3->NUMERO_FAB    := m_numeroSerie //1
        ir3->MF_ADICION    := m_MFAdicional //2
        ir3->MODELO_ECF    := m_ModeloImp //3
        ir3->NUMERO_USU    := STRZERO(VAL(m_numerocaixa),2) //4
        ir3->CRZ           := STRZERO(VAL(mCRZ),6) //5
        ir3->TOTAL_PARC    := mindice //6
        ir3->VALOR_ACU     := mvlr_acumulado //7
        ir3->DATA_MOV      := CTOD(datareducao) //13
        ir3->CHV_CRIPT     := criptografia(mlinha,'C') //13

        mindice := 'DT'
        mvlr_acumulado := STRZERO(VAL(STRTRAN(item_rz(maux_rz,'TotalDescontos'),',','')),13)
        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+;
                  m_MFAdicional+;
                  m_ModeloImp+;
                  STRZERO(VAL(m_numerocaixa),2)+;
                  STRZERO(VAL(mCRZ),6)+;
                  mindice+SPACE(7-LEN(mindice))+;
                  mvlr_acumulado+;
                  datareducao
        ADIREG()
        ir3->NUMERO_FAB    := m_numeroSerie //1
        ir3->MF_ADICION    := m_MFAdicional //2
        ir3->MODELO_ECF    := m_ModeloImp //3
        ir3->NUMERO_USU    := STRZERO(VAL(m_numerocaixa),2) //4
        ir3->CRZ           := STRZERO(VAL(mCRZ),6) //5
        ir3->TOTAL_PARC    := mindice //6
        ir3->VALOR_ACU     := mvlr_acumulado //7
        ir3->DATA_MOV      := CTOD(datareducao) //13
        ir3->CHV_CRIPT     := criptografia(mlinha,'C') //13

        mindice := 'AT'
        mvlr_acumulado := STRZERO(VAL(STRTRAN(item_rz(maux_rz,'TotalAcrescimos'),',','')),13)
        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+;
                  m_MFAdicional+;
                  m_ModeloImp+;
                  STRZERO(VAL(m_numerocaixa),2)+;
                  STRZERO(VAL(mCRZ),6)+;
                  mindice+SPACE(7-LEN(mindice))+;
                  mvlr_acumulado+;
                  datareducao
        ADIREG()
        ir3->NUMERO_FAB    := m_numeroSerie //1
        ir3->MF_ADICION    := m_MFAdicional //2
        ir3->MODELO_ECF    := m_ModeloImp //3
        ir3->NUMERO_USU    := STRZERO(VAL(m_numerocaixa),2) //4
        ir3->CRZ           := STRZERO(VAL(mCRZ),6) //5
        ir3->TOTAL_PARC    := mindice //6
        ir3->VALOR_ACU     := mvlr_acumulado //7
        ir3->DATA_MOV      := CTOD(datareducao) //13
        ir3->CHV_CRIPT     := criptografia(mlinha,'C') //13
        DBCOMMITALL()
        DBUNLOCKALL()
ENDIF
/*
sr_getconnection():exec("DELETE FROM estoque",,.f.)
sr_getconnection():exec("COMMIT",,.f.)
mvet_z :={}
sr_getconnection():exec("SELECT * FROM sacmerc WHERE (NOT descont = 'S' OR descont IS NULL)",,.t.,@mvet_z)
IF LEN(mvet_z) > 0
        FOR i = 1 TO LEN(mvet_z)
                mlinha := mvet_z[i,2]+mvet_z[i,9]+mvet_z[i,14]+STRZERO(mvet_z[i,56]*1000,13)+STRZERO(iat(mvet_z[i,46],2)*100,14)
                sr_getconnection():exec('INSERT INTO estoque ('+;
                        'data     ,'+;
                        'hora     ,'+;
                        'cod_barr ,'+;
                        'gru_sub  ,'+;
                        'cod_merc ,'+;
                        'merc     ,'+;
                        'unidade  ,'+;
                        'pr_venda ,'+;
                        'saldo    ,'+;
                        'chv_cript,'+;
                        'SR_DELETED )'+;
                        ' VALUES ('+;
                        sr_cdbvalue(CTOD(datareducao))+','+; //1
                        sr_cdbvalue(HoraReducao)+','+; //2
                        sr_cdbvalue(mvet_z[i,2] )+','+; //3
                        sr_cdbvalue(mvet_z[i,7] )+','+; //4
                        sr_cdbvalue(mvet_z[i,8] )+','+; //5
                        sr_cdbvalue(mvet_z[i,9] )+','+; //6
                        sr_cdbvalue(mvet_z[i,14] )+','+; //7
                        sr_cdbvalue(mvet_z[i,46] )+','+; //8
                        sr_cdbvalue(mvet_z[i,56] )+','+; //9 
                        sr_cdbvalue(criptografia(mlinha,'C') )+','+; //10
                        sr_cdbvalue(' ')+')',,.f.)
        NEXT
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF                        
*/
fecha_tela()
RETURN .T.
*************************************  F I M ******************************************
FUNCTION abrir_gaveta
*********************
LOCAL ret := 0
IBR_ABRE_GAVETA()
RETURN .T.
*************************************  F I M ******************************************
FUNCTION memoria_d(mtp_rel)
***************************
LOCAL ret := 0,mdat1,mdat2,mintev1,mintev2,marq_imp,ccomm:='',mvenda_bruta:=0
PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

SET CENTURY ON
*** VARIAVEIS DE IMPRESSAO ***
mtipo_imp := m_indiv[1,18]
******************************
mdat1 := mdat2 := ctod("  /  /  ")
mintev1 := mintev2 := 0
marq_imp := 1
mvenda_bruta:=0
setcor(1)
op_tela(05,10,13,85,"Leitura da Memoria Fiscal"+IF(mtp_rel = 'S',' *** SIMPLIFICADA ***',' *** COMPLETA ***'),,1)
setcor(3)
marq := 'C:\'+CURDIR()+'\ATO_MFD_DATA.TXT'+SPACE(20)
//marq := 'C:\LMFC.TXT'
setcor(1)
@ 0,1 SAY "DATA de inicio.................: " get mdat1
@ 1,1 SAY "DATA de fim....................: " get mdat2 VALID IF(EMPTY(mdat2) .OR. mdat2 < mdat1,.F.,.T.) WHEN ! EMPTY(mdat1)
@ 2,0 TO 2,100
@ 3,1 SAY "REDUCAO inical.................: " get mintev1 PICT '9999' VALID IF(EMPTY(mintev1),.F.,.T.) WHEN EMPTY(mdat1)
@ 4,1 SAY "REDUCAO final..................: " get mintev2 PICT '9999' VALID IF(EMPTY(mintev2) .OR. mintev2 < mintev1,.F.,.T.) WHEN EMPTY(mdat1)
@ 5,0 TO 5,100
@ 7,0 TO 7,100
READ
IF LASTKEY() = 27
        SET CENTURY OFF
        wvw_lclosewindow()
        RETURN .T.
ENDIF
setcor(1)
@ 6,5 PROMPT '  IMPRESSAO  '
@ 6,COL()+2 PROMPT '  ESPELHO  '
@ 6,COL()+2 PROMPT '  COTEPE1704  '
SET INTEN ON
MENU TO marq_imp
setcor(1)
IF LASTKEY() = 27
        SET CENTURY OFF
        wvw_lclosewindow()
        RETURN .T.
ENDIF
DEVPOS(8,1);DEVOUT("Caminho do arquivo de retorno: ")
@ 8,32 get marq PICT '@S40@' WHEN marq_imp > 1
READ
IF LASTKEY() = 27
        SET CENTURY OFF
        wvw_lclosewindow()
        RETURN .T.
ENDIF
mopcao := op_simnao('N','Confirma a impressao da MEMORIA FISCAL:')
IF mopcao = 'N'
        SET CENTURY OFF
        wvw_lclosewindow()
        RETURN .T.
ENDIF
IF mtp_rel = 'C'
        IF marq_imp = 3
                IF ! EMPTY(mdat1)
                        IBR_COMANDO( 'ECF.pafmf_lmfc_cotepe1704', {DTOC(mdat1),DTOC(mdat2),ALLTRIM(marq)},100,.T. )
                        //IBR_COMANDO( 'ECF.pafmf_lmfc_cotepe1704', {DTOC(mdat1),DTOC(mdat2),"ATO_MF_DATA.TXT"},100,.T. )
                ELSE
                        IBR_COMANDO( 'ECF.pafmf_lmfc_cotepe1704', {STRZERO(mintev1,4),STRZERO(mintev2,4),ALLTRIM(marq)},100,.T. )
                ENDIF
        ELSEIF marq_imp = 2
                IF ! EMPTY(mdat1)
                        IBR_COMANDO( 'ECF.pafmf_lmfc_espelho', {DTOC(mdat1),DTOC(mdat2),ALLTRIM(marq)},100,.T. )
                ELSE
                        IBR_COMANDO( 'ECF.pafmf_lmfc_espelho', {STRZERO(mintev1,4),STRZERO(mintev2,4),ALLTRIM(marq)},100,.T. )
                ENDIF
        ELSE
                IF ! EMPTY(mdat1)
                        IBR_COMANDO( 'ECF.pafmf_lmfc_impressao', {DTOC(mdat1),DTOC(mdat2),ALLTRIM(marq)},100,.T. )
                ELSE
                        IBR_COMANDO( 'ECF.pafmf_lmfc_impressao', {STRZERO(mintev1,4),STRZERO(mintev2,4),ALLTRIM(marq)},100,.T. )
                ENDIF
        ENDIF
ELSE
        IF marq_imp = 3
                IF ! EMPTY(mdat1)
                        IBR_COMANDO( 'ECF.pafmf_lmfc_cotepe1704', {DTOC(mdat1),DTOC(mdat2),ALLTRIM(marq)},100,.F. )
                ELSE
                        IBR_COMANDO( 'ECF.pafmf_lmfc_cotepe1704', {STRZERO(mintev1,4),STRZERO(mintev2,4),ALLTRIM(marq)},100,.F. )
                ENDIF
        ELSEIF marq_imp = 2
                IF ! EMPTY(mdat1)
                        IBR_COMANDO( 'ECF.pafmf_lmfs_espelho', {DTOC(mdat1),DTOC(mdat2),ALLTRIM(marq)},100,.F. )
                ELSE
                        IBR_COMANDO( 'ECF.pafmf_lmfs_espelho', {STRZERO(mintev1,4),STRZERO(mintev2,4),ALLTRIM(marq)},100,.F. )
                ENDIF
        ELSE
                IF ! EMPTY(mdat1)
                        IBR_COMANDO( 'ECF.pafmf_lmfs_impressao', {DTOC(mdat1),DTOC(mdat2),ALLTRIM(marq)},100,.F.)
                ELSE
                        IBR_COMANDO( 'ECF.pafmf_lmfs_impressao', {STRZERO(mintev1,4),STRZERO(mintev2,4),ALLTRIM(marq)},100,.F. )
                ENDIF
        ENDIF
ENDIF
SET CENTURY OFF
wvw_lclosewindow()
IF 'S' = op_simnao('S','Deseja Editar o arquivo:') .AND. marq_imp > 1
        MYRUN('NOTEPAD '+ALLTRIM(marq))
ENDIF
RETURN .T.
*************************************  F I M ******************************************
FUNCTION espelho_mfd(mtipo)
***************************
LOCAL ret := 0,mdat1,mdat2,mint1:=0,mint2:=0,marquivo:='',marq_imp := 1
SET CENTURY ON
mdat1 := mdat2 := ctod("  /  /  ")
setcor(1)
op_tela(10,05,17,75,"Espelho da MFD")
setcor(3)
marquivo := +'C:\'+CURDIR()+'\ESP_MFD.MFD               '
setcor(1)
@ 0,1 SAY "Data de inicio.................: " get mdat1
@ 1,1 SAY "Data de fim....................: " get mdat2 VALID IF(mdat2 < mdat1,.F.,.T.) WHEN ! EMPTY(mdat1)
@ 2,0 TO 02,100
@ 3,1 SAY "Primeiro COO...................: " get mint1 PICT '999999' VALID IF(EMPTY(mint1),.F.,.T.) WHEN EMPTY(mdat1)
@ 4,1 SAY "Ultimo COO.....................: " get mint2 PICT '999999'  VALID IF(EMPTY(mint2) .OR. mint2 < mint1,.F.,.T.) WHEN EMPTY(mdat1)
@ 05,00 TO 05,100 
READ
setcor(1)
@ 6,5 PROMPT '  ESPELHO  '
@ 6,COL()+2 PROMPT '  COTEPE1704  '
SET INTEN ON
MENU TO marq_imp
setcor(1)
IF LASTKEY() = 27
        SET CENTURY OFF
        wvw_lclosewindow()
        RETURN .T.
ENDIF
@ 7,1 SAY "Caminho do arquivo de retorno..: " get marquivo PICT '@S30@'
READ
IF LASTKEY() = 27
        SET CENTURY OFF
        wvw_lclosewindow()
        RETURN .T.
ENDIF
mopcao := op_simnao('N','Confirma a impressao da ESPELHO MFD:')
IF mopcao = 'N'
        SET CENTURY OFF
        wvw_lclosewindow()
        RETURN .T.
ENDIF
IF marq_imp = 1
        IF ! EMPTY(mdat1)
                IBR_COMANDO( 'ECF.pafmf_mfd_espelho', {DTOC(mdat1),DTOC(mdat2),ALLTRIM(marquivo)},100,.T. )
        ELSE
                IBR_COMANDO( 'ECF.pafmf_mfd_espelho', {STRZERO(mint1,6),STRZERO(mint2,6),ALLTRIM(marquivo)},100,.T. )
        ENDIF
ELSE
        IF ! EMPTY(mdat1)
                IBR_COMANDO( 'ECF.pafmf_mfd_cotepe1704', {DTOC(mdat1),DTOC(mdat2),ALLTRIM(marquivo)},100,.T. )
        ELSE
                IBR_COMANDO( 'ECF.pafmf_mfd_cotepe1704', {STRZERO(mint1,6),STRZERO(mint2,6),ALLTRIM(marquivo)},100,.T. )
        ENDIF
ENDIF
SET CENTURY OFF
wvw_lclosewindow()
IF 'S' = op_simnao('S','Deseja Editar o arquivo:')
        MYRUN('NOTEPAD '+ALLTRIM(marquivo))
ENDIF
RETURN .T.
*************************************  F I M ******************************************
FUNCTION arquivo_mfd(mtipo)
******************
LOCAL ret := 0,mdat1,mdat2,mint1:=0,mint2:=0,marquivo:='',mtipo_gera:=1,marq_imp := 1
SET CENTURY ON
mdat1 := mdat2 := ctod("  /  /  ")
setcor(1)
op_tela(10,05,13,95,IF(mtipo = 'MFD',"Arquivo da MFD","Arquivo da MF"))
setcor(3)
marquivo := +'C:\'+CURDIR()+'\ARQ_MFD.MFD               '
setcor(1)
@ 0,1 SAY "Data de inicio.................: " get mdat1
@ 1,1 SAY "Data de fim....................: " get mdat2 VALID IF(EMPTY(mdat2) .OR. mdat2 < mdat1,.F.,.T.) WHEN ! EMPTY(mdat1)
//@ 2,0 TO 02,100
//@ 4,1 SAY "Primeiro COO...................: " get mint1 PICT '999999' VALID IF(EMPTY(mint1),.F.,.T.) WHEN EMPTY(mdat1)
//@ 5,1 SAY "Ultimo COO.....................: " get mint2 PICT '999999'  VALID IF(EMPTY(mint2) .OR. mint2 < mint1,.F.,.T.) WHEN EMPTY(mdat1)
//@ 6,0 TO 06,100
//@ 7,1 SAY "[1]Arquivo - [0]Cotepe 1704 ...: " get marq_imp PICT '9' VALID IF(marq_imp > 1,.F.,.T.) // WHEN mtp_rel = 'C'
@ 02,01 SAY "Caminho do arquivo de retorno.....................: "get marquivo PICT '@!'
READ
IF LASTKEY() = 27
        SET CENTURY OFF
        wvw_lclosewindow()
        RETURN .T.
ENDIF
mopcao := op_simnao('N','Confirma a impressao da ARQUIVO MFD:')
IF mopcao = 'N'
        SET CENTURY OFF
        wvw_lclosewindow()
        RETURN .T.
ENDIF

IF mtipo = 'MFD'
        IBR_COMANDO( 'ECF.pafmf_arquivomfd',{ALLTRIM(marquivo)},100,.T. )
ELSE
        IBR_COMANDO( 'ECF.pafmf_arquivomf',{ALLTRIM(marquivo)},100,.T. )
ENDIF
*/
marquivo := STRTRAN(marquivo,'.MFD','.TXT')
IF ! EMPTY(mdat1)
        IBR_COMANDO( 'ECF.pafmf_mfd_cotepe1704', {DTOC(mdat1),DTOC(mdat2),ALLTRIM(marquivo)},100,.T. )
ELSE
        IBR_COMANDO( 'ECF.pafmf_mfd_cotepe1704', {STRZERO(mint1,6),STRZERO(mint2,6),ALLTRIM(marquivo)},100,.T. )
ENDIF

/*
IF marq_imp = 0
        IF ! EMPTY(mdat1)
                IBR_COMANDO( 'ECF.pafmf_mfd_espelho', {DTOC(mdat1),DTOC(mdat2),ALLTRIM(marquivo)},100,.T. )
        ELSE
                IBR_COMANDO( 'ECF.pafmf_mfd_espelho', {STRZERO(mint1,6),STRZERO(mint2,6),ALLTRIM(marquivo)},100,.T. )
        ENDIF
ELSE
        IF ! EMPTY(mdat1)
                IBR_COMANDO( 'ECF.pafmf_mfd_cotepe1704', {DTOC(mdat1),DTOC(mdat2),ALLTRIM(marquivo)},100,.T. )
        ELSE
                IBR_COMANDO( 'ECF.pafmf_mfd_cotepe1704', {STRZERO(mint1,6),STRZERO(mint2,6),ALLTRIM(marquivo)},100,.T. )
        ENDIF
ENDIF
*/
SET CENTURY OFF
wvw_lclosewindow()
IF 'S' = op_simnao('S','Deseja Editar o arquivo:')
        MYRUN('NOTEPAD '+ALLTRIM(marquivo))
ENDIF
RETURN .T.
*************************************  F I M ******************************************
FUNCTION cancelar_item(mitem)
*****************************
LOCAL ret := 0,mdoc,mn_ecf,mn_ccf,cons_r5 := {}
PRIVATE mnum_item := '',mnum_ccf:=''
mdoc    := NUM_CUPOM()
mn_ecf  := NUM_CAIXA()
mn_ccf  := NUM_CCF()
IBR_CAN_ITEM(mitem)
cons_r5 := {}
sr_getconnection():exec("SELECT * FROM r5  WHERE numero_fab = "+sr_cdbvalue(m_numeroSerie)+" AND coo = "+sr_cdbvalue(mdoc)+" AND ccf_cvc_cbp = "+sr_cdbvalue(mn_ccf)+" AND num_item = "+sr_cdbvalue(STRZERO(mitem,3)),,.t.,@cons_r5)
IF LEN(cons_r5) > 0
        mlinha := cons_r5[1,1]+; //1 cons_r5[1,2]+; //2
                ' '+; //2
                cons_r5[1,3]+; //3
                cons_r5[1,4]+; //4
                cons_r5[1,5]+; //5
                cons_r5[1,6]+; //6
                cons_r5[1,7]+; //7
                cons_r5[1,8]+; //8
                cons_r5[1,9]+; //9
                cons_r5[1,10]+; //10
                cons_r5[1,11]+; //11
                cons_r5[1,12]+; //12
                cons_r5[1,13]+; //13
                cons_r5[1,14]+; //14
                cons_r5[1,15]+; //15
                cons_r5[1,16]+; //16
                'S'+; //17
                cons_r5[1,18]+; //18
                cons_r5[1,19]+; //19
                cons_r5[1,20]+; //20
                cons_r5[1,21]+; //21
                cons_r5[1,22]+; //22
                cons_r5[1,23]+; //23
                cons_r5[1,24]+; //24
                DTOC(cons_r5[1,25]) //25
        sr_getconnection():exec("UPDATE r5 SET ind_cancel = 'S',CHV_CRIPT = "+sr_cdbvalue(criptografia(mlinha,'C'))+" WHERE numero_fab = "+sr_cdbvalue(m_numeroSerie)+" AND coo = "+sr_cdbvalue(mdoc)+" AND ccf_cvc_cbp = "+sr_cdbvalue(mn_ccf)+" AND num_item = "+sr_cdbvalue(STRZERO(mitem,3)),,.f.)
ENDIF
RETURN .T.
*************************************  F I M ******************************************
FUNCTION cancelar_cupom(msen,mupdate)
******************
LOCAL ret := 0,mdoc := SPACE(9),mn_ecf := SPACE(9),mn_ccf := SPACE(9)
PRIVATE mnum_ccf:=''
smdoc := NUM_CUPOM()
mn_ecf   := NUM_CAIXA()
mn_ccf   := NUM_CCF()
IF msen = NIL  .AND. m_line # 'OFF'
        IF ! aut_sen('CANCELAMENTO DE CUPOM FISCAL','CAN_CUPOM',,,,'CUPOM')
                RETURN .F.
        ENDIF
ENDIF
mensagem('CANCELANDO Cupom Fiscal... Aguarde...')
IBR_CAN_CUPOM()
IF mupdate # NIL  .AND. m_line # 'OFF'
        cons_r4 := {}
        sr_getconnection():exec("SELECT * FROM r4  WHERE numero_fab = "+sr_cdbvalue(m_numeroSerie)+" AND coo = "+sr_cdbvalue(mdoc)+" AND ccf_cvc_cbp = "+sr_cdbvalue(mn_ccf),,.t.,@cons_r4)
        IF LEN(cons_r4) > 0
                mlinha := cons_r4[1,1]+; //1cons_r4[1,2]+; //2
                        ' '+; //2
                        cons_r4[1,3]+; //3
                        cons_r4[1,4]+; //4
                        cons_r4[1,5]+; //5
                        cons_r4[1,6]+; //6
                        cons_r4[1,7]+; //7
                        cons_r4[1,8]+; //8
                        cons_r4[1,9]+; //9
                        cons_r4[1,10]+; //10
                        cons_r4[1,11]+; //11
                        cons_r4[1,12]+; //12
                        cons_r4[1,13]+; //13
                        'S'+; //14
                        cons_r4[1,15]+; //15
                        cons_r4[1,16]+; //16
                        cons_r4[1,17]+; //17
                        cons_r4[1,18]+; //18
                        DTOC(cons_r4[1,19]) //18
                sr_getconnection():exec("UPDATE r4 SET ind_cancel = 'S',CHV_CRIPT = "+sr_cdbvalue(criptografia(mlinha,'C'))+" WHERE numero_fab = "+sr_cdbvalue(m_numeroSerie)+" AND coo = "+sr_cdbvalue(mdoc)+" AND ccf_cvc_cbp = "+sr_cdbvalue(mn_ccf),,.f.)
        ENDIF
        cons_r5 := {}
        sr_getconnection():exec("SELECT * FROM r5  WHERE numero_fab = "+sr_cdbvalue(m_numeroSerie)+" AND coo = "+sr_cdbvalue(mdoc)+" AND ccf_cvc_cbp = "+sr_cdbvalue(mn_ccf),,.t.,@cons_r5)
        IF LEN(cons_r5) > 0
                i := 0
                FOR i = 1 TO LEN(cons_r5)
                        mlinha := cons_r5[i,1]+; //1 cons_r5[i,2]+; //2
                                ' '+; //2
                                cons_r5[i,3]+; //3
                                cons_r5[i,4]+; //4
                                cons_r5[i,5]+; //5
                                cons_r5[i,6]+; //6
                                cons_r5[i,7]+; //7
                                cons_r5[i,8]+; //8
                                cons_r5[i,9]+; //9
                                cons_r5[i,10]+; //10
                                cons_r5[i,11]+; //11
                                cons_r5[i,12]+; //12
                                cons_r5[i,13]+; //13
                                cons_r5[i,14]+; //14
                                cons_r5[i,15]+; //15
                                cons_r5[i,16]+; //16
                                'S'+; //17
                                cons_r5[i,18]+; //18
                                cons_r5[i,19]+; //19
                                cons_r5[i,20]+; //20
                                cons_r5[i,21]+; //21
                                cons_r5[i,22]+; //22
                                cons_r5[i,23]+; //23
                                cons_r5[i,24]+; //24
                                DTOC(cons_r5[i,25])   //25
                        sr_getconnection():exec("UPDATE r5 SET ind_cancel = 'S',CHV_CRIPT = "+sr_cdbvalue(criptografia(mlinha,'C'))+" WHERE numero_fab = "+sr_cdbvalue(m_numeroSerie)+" AND coo = "+sr_cdbvalue(mdoc)+" AND ccf_cvc_cbp = "+sr_cdbvalue(mn_ccf),,.f.)
                NEXT
        ENDIF
        sr_getconnection():exec('COMMIT',,.f.)
        atu_gt()
ENDIF
mensagem('Escolha sua opcao')
RETURN .T.
*************************************  F I M ******************************************
FUNCTION abrir_cupom(mcpf)
**************************
LOCAL ret := 0,Vack:=SPACE(1),Vst1:=SPACE(1),vst2:=SPACE(1)
PUBLIC cup_aberto:=.T.
mensagem('ABRINDO Cupom Fiscal... Aguarde...')
IF ! IBR_CUPOM_ABERTO()
        IF IBR_PODE_ABRIR()
                IF ! IBR_ABRE_CUPOM(MCPF)
                        RETURN .F.
                ENDIF
        ENDIF
ENDIF
RETURN .T.
*************************************  F I M ******************************************
FUNCTION num_cupom()
******************
LOCAL ret := 0,maux
PRIVATE NumeroCupom:=SPACE(7)
mensagem('VERIFICANDO NUMERO do Documento... Aguarde...')
NumeroCupom := IBR_NUM_CUPOM()
RETURN NumeroCupom
*************************************  F I M ******************************************
FUNCTION num_ccf()
******************
LOCAL RET,sNUMCCF:=''
mensagem('VERIFICANDO Contador de Cupom Fiscal... Aguarde...')
RET := IBR_COMANDO( 'ECF.NumCcf' )
IF LEFT(RET,3) == 'OK:'
        sNUMCCF := STRZERO(VAL(SUBSTR(RET,5)),6)
        sSECCOO   := SECONDS()
ELSE
        sNUMCCF := '000000'
ENDIF
RETURN sNUMCCF
*************************************  F I M ******************************************
FUNCTION num_caixa()
******************
LOCAL ret := 0
PRIVATE NumeroCaixa:=SPACE(4)
NumeroCaixa := IBR_NUM_CAIXA()
RETURN NumeroCaixa
*************************************  F I M ***************************************************************************
FUNCTION vende_prod(vcod,vmerc,valiq,vtipo_qtd,vqtd,vcasa_dec,vvlr,vtipo_desc,vvlr_desc,vunidade,macdesc)
*********************************************************************************************************
LOCAL ret := 0
mensagem('Imprimindo o Produto: '+vcod+' - '+vmerc)
//IF ! IBR_ITEM(vcod,vmerc,valiq,TRANSFORM(vqtd,"999999.99"),TRANSFORM(vvlr,"9999999."+REPLI('9',vcasa_dec)),TRANSFORM(vvlr_desc,"999.99"),vunidade,IF(m_cfg[89]='%','%','$'),'D')
//ATENCAO(valiq)
IF m_indiv[1,37] = 'C:\ACBRMONITORPLUS\'
        IF ! IBR_ITEM(vcod,vmerc        ,valiq,vqtd,vvlr,vvlr_desc,vunidade,'$',macdesc)
                RETURN .F.
        ENDIF
ELSE
        IF ! IBR_ITEM(vcod,vmerc        ,valiq,TRANSFORM(vqtd,"999999.99"),TRANSFORM(vvlr,"9999999."+REPLI('9',vcasa_dec)),TRANSFORM(vvlr_desc,"9999999.99"),vunidade,'$',macdesc)
                RETURN .F.
        ENDIF
ENDIF
RETURN .T.
*************************************  F I M ******************************************
FUNCTION sub_total()
********************
LOCAL ret := 0,vsub_total:=0,maux
vsub_total := IBR_SUBTOTAL()
RETURN vsub_total
*************************************  F I M ******************************************
FUNCTION ini_fechamento(mdesconto)
******************
LOCAL ret := 0
PRIVATE mtp_ad := 'X',mtp_pv := '%',mvlr_fch := '0000',mvlr_fc := '0000'
mensagem('Iniciando Fechamento do Cupom...')
IF ! EMPTY(mdesconto)
        IBR_INI_FECHA(mdesconto*-1)
ELSE
        IBR_INI_FECHA()
ENDIF
RETURN .T.
*************************************  F I M ******************************************
FUNCTION forma_pag(vtipo,vvlr)
******************
LOCAL ret := 0
PRIVATE mtpo,mvlr,mparc:='0',mdescri:=''
mtpo := vtipo
mvlr := vvlr
mensagem('Fechamento do Cupom com : '+mtpo+' Valor R$: '+ALLTRIM(TRANSFORM(mvlr,'@E 999999.99')))
vind_pg := IBR_ACHA_PG(mtpo,.F.)
IF vind_pg = '  '
        atencao('Nao foi encontrada esta forma de pagamento: '+mtpo)
        IF mtpo = 'HIPERCARD'
                vind_pg := IBR_ACHA_PG('CART.CRED.',.T.)
                IF vind_pg = '  '
                        vind_pg := IBR_ACHA_PG('DINHEIRO',.T.)
                ENDIF
        ELSEIF mtpo = 'DUPLICATA'
                vind_pg := IBR_ACHA_PG('DUPLICATAS',.T.)
                IF vind_pg = '  '
                        vind_pg := IBR_ACHA_PG('DINHEIRO',.T.)
                ENDIF
        ELSE
                vind_pg := IBR_ACHA_PG('DINHEIRO',.T.)
        ENDIF
ENDIF
IBR_PAGTO(mvlr,vind_pg)
RETURN vind_pg
*************************************  F I M ******************************************
FUNCTION fim_fecha(vmensagem)
*****************************
LOCAL ret := 0,NumeroCaixa:=SPACE(4)
IBR_FIM_FECHA(vmensagem)
RETURN .T.
************************************ F I M ******************************************************
Function Fecha_RGeren()
***********************
* Fechamento do Relatorio Gerencial
*---------------------------------------------------------------------*
Local Ok:=.T.
mensagem('Fechando o Relatorio Gerencial')
IBR_FIM_REL()
Return(Ok)
************************************ F I M ******************************************************
FUNCTION LimpaTeclado()
Inkey()
keyboard Chr( 0 ) + Chr( 0 )
inkey()
inkey()
RETURN NIL
************************************ F I M ******************************************************
FUNCTION NUMRANDOM(nTam)
local nDeci
If nTam = Nil
        nTam = 5
Endif
nDeci := Set(_SET_DECIMALS,nTam)
//nTempo1 := nTempo2 := VAL(SUBSTR(TIME(),07))/4.591
//nNumero := int( ( nTempo1 - Int(nTempo2))  * 100000 )
#ifndef __XHARBOUR__
        nNumero  := random()
#else
        nNumero :=  Str(Hb_Random() * 1000000)
        npos := At(".",nNumero)
        If npos # 0
                nNumero := Stuff(nNumero,npos,1,"")
                nNumero := Val(nNumero)
        Endif
#endif
Set Decimals to nDeci
Return ( nNumero )
************************************ F I M ******************************************************
Function ExcluirTemporarios(ARQ)
********************************
*----------------------------------------*
* Exclui os arquivos Temporarios Criados
*----------------------------------------*
Local n_nume_arq := 0, arq_Tmp, file_tmp, i

Arq_Tmp := {}

If Arq # Nil
        nPos := at('X',Arq)
        If npos # 0
                Arq_Tmp := Directory(Substr(Arq,npos,7)+"*.*")
        Elseif At('*',Arq) = 0
                ok := FERASE(Arq)
        Else
                Arq_Tmp := Directory(Arq)
        Endif
Else
        Arq_Tmp := Directory('X*.*')
Endif
n_Nume_Arq := Len(Arq_Tmp)
if n_nume_arq <> 0
        for i = 1 to n_nume_arq
                file_tmp := alltrim(arq_tmp[i,1])
                FERASE(file_tmp)
        next
else
        FERASE(file_tmp)
Endif
Return Nil
************************************ F I M ******************************************************
#include "HBclass.ch"
//#include "EasyTEF.ch"
FUNCTION admecf(mtipo)
**********************
IF mtipo = 'H'
        mgerenciador := 'HIPERCARD'
ELSE
        mgerenciador := 'PADRAO'
ENDIF
RETURN
***************************************************************************
#include "fileio.ch"
#include "common.ch"

#define LINEBUFF  1024
#define CRLF      CHR(13)+CHR(10)

FUNCTION ver_retornoEcf(carquivo)
***********************
LOCAL m_retorno,lin,linhas,linha,cLinha
PRIVATE lEof:= .f.
INKEY(.8,20)
IF ! FILE(carquivo)
        atencao('Nao foi encontrado o retorno da ECF ')
        RETURN .F.
ENDIF
nArquivo:=FOPEN(cArquivo,0)
m_retorno := {}
IF nArquivo # -1
        WHILE !lEof
                cLinha := LinhaArq(nArquivo,LINEBUFF)
                IF LEN(ALLTRIM(cLinha))>0
                        AADD(m_retorno,cLinha)
                ENDIF
        ENDDO
ENDIF
FCLOSE(nArquivo)
IF LEN(m_retorno) = 0
        RETURN 0
ELSE
        RETURN m_retorno        //[1]
ENDIF
******************************************************************
FUNCTION ver_DataEcf
********************
LOCAL mdata_ecf
mdata_ecf := IBR_DATA()
RETURN mdata_ecf
*************************************  F I M ******************************************
FUNCTION estoque_f(mtipo)
*************************
LOCAL marquivo:='',mdado_arq,nHandle,nBytes,mcont_e:=0
SET CENTURY ON
mdat1 := mdat2 := ctod("  /  /  ")
setcor(1)
IF mtipo = 'T'
        op_tela(5,05,14,89,"Estoque TOTAL")
ELSE
        op_tela(5,05,14,89,"Estoque PARCIAL")
ENDIF
marquivo := +'C:\'+CURDIR()+'\ESTOQUE.TXT'+SPACE(30)
DEVPOS(00,00);DEVOUT('Razao Social..........:')
DEVPOS(01,00);DEVOUT('CNPJ..................:')
DEVPOS(02,00);DEVOUT('Inscricao Estadual....:')
DEVPOS(03,00);DEVOUT('Inscricao Municipal...:')
DEVPOS(04,00);DEVOUT('Caminho do arquivo....:')
setcor(3)
DEVPOS(00,24);DEVOUT(m_set[1,129])
DEVPOS(01,24);DEVOUT(mcgc_firm)
DEVPOS(02,24);DEVOUT(m_set[1,128])
DEVPOS(03,24);DEVOUT(m_set[1,156])
@ 05,00 TO 05,100
setcor(1)
@ 04,24 get marquivo PICT '@S30'
READ
IF LASTKEY() = 27
        SET CENTURY OFF
        wvw_lclosewindow()
        RETURN .T.
ENDIF
mdado_arq := {}
IF mtipo = 'P'
        WHILE .T.
                mcod_merc := SPACE(14)
                mmerc     := SPACE(40)
                mensagem('Digite o Codigo do Produto - Descricao ou [ENTER][ENTER] p/Finalizar')
                DEVPOS(06,00);DEVOUT('Codigo Produto/Servico:')
                DEVPOS(07,00);DEVOUT('Descricao.............:')
                @ 06,24 get mcod_merc PICT '@'
                @ 07,24 get mmerc PICT '@' WHEN EMPTY(mcod_merc)
                READ
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                IF EMPTY(mcod_merc) .AND. EMPTY(mmerc)
                        EXIT
                ENDIF
                IF ! EMPTY(mcod_merc)
                        mcons_merc := {}
                        IF LEN(ALLTRIM(mcod_merc)) <= 5
                                sr_getconnection():exec("SELECT cod_merc,cod_barr,merc,unidade,saldo_mer,data_cad,chv_cript FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(VAL(mcod_merc),5)),,.t.,@mcons_merc)
                        ELSE
                                sr_getconnection():exec("SELECT cod_merc,cod_barr,merc,unidade,saldo_mer,data_cad,chv_cript FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_barr),,.t.,@mcons_merc)
                        ENDIF
                ENDIF
                IF LEN(mcons_merc) = 0
                        atencao('Nao foi possivel encontrar este Produto....')
                        LOOP
                ENDIF
                setcor(3)
                DEVPOS(06,24);DEVOUT(mcons_merc[1,1])
                DEVPOS(07,24);DEVOUT(mcons_merc[1,3])
                setcor(1)
                mopcao := op_simnao('N','Confirma a impressao da ESTOQUE:')
                IF mopcao = 'N'
                        LOOP
                ENDIF
                AADD(mdado_arq,{mcons_merc[1,1],mcons_merc[1,2],mcons_merc[1,3],mcons_merc[1,4],mcons_merc[1,5],mcons_merc[1,6],mcons_merc[1,7]})
        ENDDO
        IF LASTKEY() = 27
                SET CENTURY OFF
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
ELSE
        mdado_arq := {}
        sr_getconnection():exec("SELECT cod_merc,cod_barr,merc,unidade,saldo_mer,data_cad,chv_cript FROM sacmerc",,.t.,@mdado_arq)
        IF LEN(mdado_arq) = 0
                atencao('Nao existe nenhum PRODUTO/SERVICOS....')
                SET CENTURY OFF
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
ENDIF
mopcao := op_simnao('N','Confirma a impressao da ESTOQUE:')
IF mopcao = 'N'
        SET CENTURY OFF
        wvw_lclosewindow()
        RETURN .T.
ENDIF
mensagem('Gerando o arquivo de ESTOQUE')
nHandle := FCreate(marquivo)
If nHandle == -1
        atencao("Nao foi possivel criar o arquivo de Estoque")
        Return(.F.)
EndIf
mcgc_firm := STRTRAN(mcgc_firm,'.','')
mcgc_firm := STRTRAN(mcgc_firm,'/','')
mcgc_firm := STRTRAN(mcgc_firm,'-','')
nBytes := FWrite(nHandle,'E1'+mcgc_firm+SUBSTR(m_set[1,128],1,14)+SUBSTR(m_set[1,156],1,14)+SUBSTR(m_set[1,129],1,50)+' '+'ECF-IF '+m_numeroSerie+m_ModeloImp+m_MarcaImp+ALLTRIM(SUBSTR(STRTRAN(dataSWBasico,'/',''),1,4)+'20'+SUBSTR(STRTRAN(dataSWBasico,'/',''),5,2))+ALLTRIM(STRTRAN(horaSWBasico,':',''))+m_qp)
if nBytes = 0
        atencao("Erro na gravacao do conteudo do arquivo do Tipo " + Tipo + "!")
        Return(.F.)
EndIf
mcont_e := i := 0
FOR i = 1 TO LEN(mdado_arq)
        mensagem('Produto: '+mdado_arq[i,2]+mdado_arq[i,3])
        IF mdado_arq[i,5] < 0
                mpos_neg := '-'
                msaldo := STRZERO((mdado_arq[i,5]*-1)*1000,9)
        ELSE
                msaldo := STRZERO(mdado_arq[i,5]*1000,9)
                mpos_neg := '+'
        ENDIF

        //mlinha := mcod_barra (14)+munidade(3)+saldo(13)+pr_ven(14)
        mchv_cript := criptografia(mdado_arq[i,7],'D')
        //atencao(mchv_cript+' - '+SUBSTR(mchv_cript,18,13))
        /*
        IF EMPTY(mdado_arq[i,2])
                IF SUBSTR(mchv_cript,15,5) <> mdado_arq[i,1]
                        mdado_arq[i,2] := REPLI('?',14)
                ELSE
                        mdado_arq[i,2] := STRZERO(VAL(mdado_arq[i,1]),14)
                ENDIF
        ELSE
                IF SUBSTR(mchv_cript,1,14) <> mdado_arq[i,2]
                        mdado_arq[i,2] := REPLI('?',14)
                ENDIF
        ENDIF
        IF SUBSTR(mchv_cript,20,40) <> mdado_arq[i,3]
                mdado_arq[i,3] := REPLI('?',40)
        ENDIF
        IF SUBSTR(mchv_cript,60,3) <> mdado_arq[i,4]
                mdado_arq[i,4] := REPLI('?',3)
        ENDIF
        IF VAL(SUBSTR(mchv_cript,63,13))/1000 <> mdado_arq[i,5]
                //mdado_arq[i,5] := REPLI('?',13)
                msaldo := REPLI('?',9)
        ENDIF
        */
        //nBytes := FWrite(nHandle,'E2'+mcgc_firm+STRZERO(VAL(mdado_arq[i,1]),14)+mdado_arq[i,3]+SPACE(10)+mdado_arq[i,4]+SPACE(3)+mpos_neg+msaldo+SUBSTR(DTOC(mdado_arq[i,6]),7)+SUBSTR(DTOC(mdado_arq[i,6]),4,2)+SUBSTR(DTOC(mdado_arq[i,6]),1,2)+m_qp)
        nBytes := FWrite(nHandle,'E2'+mcgc_firm+STRZERO(VAL(mdado_arq[i,1]),14)+mdado_arq[i,3]+SPACE(10)+mdado_arq[i,4]+SPACE(3)+mpos_neg+msaldo+m_qp)
        mcont_e ++
        if nBytes = 0
                atencao("Erro na gravacao do conteudo do arquivo do Tipo " + Tipo + "!")
                Return(.F.)
        EndIf
NEXT

nBytes := FWrite(nHandle,'E9'+mcgc_firm+SUBSTR(m_set[1,128],1,14)+STRZERO(mcont_e,6)+m_qp)
FClose(nhandle)
GERA_EAD(marquivo)
SET CENTURY OFF
wvw_lclosewindow()
IF 'S' = op_simnao('S','Deseja Editar o arquivo:')
        MYRUN('NOTEPAD '+ALLTRIM(marquivo))
ENDIF
RETURN .T.
*************************************  F I M ******************************************
FUNCTION tab_produto()
*************************
LOCAL marquivo:='',mdado_arq,nHandle,nBytes,mcont_p2,mcst,maliquota
SET CENTURY ON
setcor(1)
op_tela(5,5,7,89,"TABELA DE PRODUTOS")
marquivo := +'C:\'+CURDIR()+'\TAB_PRODUTO.TXT'+SPACE(30)
DEVPOS(1,1);DEVOUT('Caminho do Arquivo: ')
setcor(3)
DEVPOS(1,COL()+1);DEVOUT(marquivo)
setcor(1)
mopcao := op_simnao('N','Confirma a impressao da TABELA DE PRODUTOS:')
IF mopcao = 'N'
        SET CENTURY OFF
        wvw_lclosewindow()
        RETURN .T.
ENDIF
marquivo := +'C:\'+CURDIR()+'\TAB_PRODUTO.TXT'+SPACE(30)
mensagem('Gerando o arquivo de TABELA DE PRODUTO')
mdado_arq := {}
//sr_getconnection():exec("SELECT * FROM produto",,.t.,@mdado_arq)
sr_getconnection():exec("SELECT * FROM sacmerc",,.t.,@mdado_arq)
IF LEN(mdado_arq) = 0
        atencao('Nao existe nenhum PRODUTO/SERVICOS....')
        SET CENTURY OFF
        wvw_lclosewindow()
        RETURN .T.
ENDIF
nHandle := FCreate(marquivo)
If nHandle == -1
        atencao("Nao foi possivel criar o arquivo de Estoque")
        Return(.F.)
EndIf
mcgc_firm := STRTRAN(mcgc_firm,'.','')
mcgc_firm := STRTRAN(mcgc_firm,'/','')
mcgc_firm := STRTRAN(mcgc_firm,'-','')
nBytes := FWrite(nHandle,'P1'+mcgc_firm+SUBSTR(m_set[1,128],1,14)+SUBSTR(m_set[1,156],1,14)+SUBSTR(m_set[1,129],1,50)+m_qp)
if nBytes = 0
        atencao("Erro na gravacao do conteudo do arquivo do Tipo " + Tipo + "!")
        Return(.F.)
EndIf
mcont_p2 := 0
i := 0
FOR i = 1 TO LEN(mdado_arq)
        mensagem('Produto: '+mdado_arq[i,2]+mdado_arq[i,9])
        /*
        mchv_cript := criptografia(mdado_arq[i,107],'D')
        IF SUBSTR(mchv_cript,6,14) <> mdado_arq[i,2]
                mdado_arq[i,14] := REPLI('?',6)
        ELSEIF SUBSTR(mchv_cript,21,40) <> mdado_arq[i,9]
                mdado_arq[i,14] := REPLI('?',6)
        ELSEIF SUBSTR(mchv_cript,62,3) <> mdado_arq[i,14]
                mdado_arq[i,14] := REPLI('?',6)
        ELSEIF VAL(SUBSTR(mchv_cript,66,13))/1000 <> mdado_arq[i,56]
                mdado_arq[i,14] := REPLI('?',6)
        ELSEIF VAL(SUBSTR(mchv_cript,80,14)) / 100 <> mdado_arq[i,46]
                mdado_arq[i,14] := REPLI('?',6)
        ELSEIF SUBSTR(mchv_cript,95,4) <> mdado_arq[i,68]
                mdado_arq[i,14] := REPLI('?',6)
        ELSE
                mdado_arq[i,14] := mdado_arq[i,14]+space(3)
        ENDIF
        */
        mcst      := vercst(mdado_arq[i,68])     //vlr_isento(VAL(mdado_arq[i,8]))
        maliquota := STRZERO(0,4)
        IF mcst = 'T'

                IF mdado_arq[i,62] > 0
                        maliquota := STRZERO(mdado_arq[i,62] * 100,4)
                ELSE
                        maliquota := STRZERO(17.00 * 100,4)
                ENDIF
        ENDIF
        nBytes := FWrite(nHandle,'P2'+mcgc_firm+STRZERO(VAL(mdado_arq[i,8]),14)+mdado_arq[i,9]+SPACE(10)+mdado_arq[i,14]+'   '+mdado_arq[i,81]+mdado_arq[i,91]+mcst+maliquota+STRZERO(iat(mdado_arq[i,46])*100,12)+m_qp)
        mcont_p2 ++
        if nBytes = 0
                atencao("Erro na gravacao do conteudo do arquivo do Tipo " + Tipo + "!")
                Return(.F.)
        EndIf

        /*
        IF SUBSTR(mchv_cript,1,14) <> mdado_arq[i,1]
                mdado_arq[i,5] := REPLI('?',6)
        ELSEIF SUBSTR(mchv_cript,15,40) <> mdado_arq[i,4]
                mdado_arq[i,5] := REPLI('?',6)
        ELSEIF SUBSTR(mchv_cript,55,3) <> mdado_arq[i,5]
                mdado_arq[i,5] := REPLI('?',6)
        ELSEIF VAL(SUBSTR(mchv_cript,58,13))/1000 <> mdado_arq[i,7]
                mdado_arq[i,5] := REPLI('?',6)
        ELSEIF VAL(SUBSTR(mchv_cript,71,14)) / 100 <> mdado_arq[i,6]
                mdado_arq[i,5] := REPLI('?',6)
        ELSE
                mdado_arq[i,5] := mdado_arq[i,5]+space(3)
        ENDIF
        IF mdado_arq[i,11] = 'S'
                mcst := 'I'
                maliquota := STRZERO(0,4)
        ELSEIF mdado_arq[i,11] = 'N'
                mcst := 'T'
                mcons_merc := {}
                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_barr = "+sr_cdbvalue(mdado_arq[i,1]),,.t.,@mcons_merc)
                IF LEN(mcons_merc) = 0
                        LOOP
                ENDIF
                IF mcons_merc[1,62] > 0
                        maliquota := STRZERO(mcons_merc[1,62] * 100,4)
                ELSE
                        maliquota := STRZERO(17.00 * 100,4)
                ENDIF
        ELSEIF mdado_arq[i,11] = 'T'
                mcst := 'N'
                maliquota := STRZERO(0,4)
        ELSEIF mdado_arq[i,11] = 'F'
                mcst := 'F'
                maliquota := STRZERO(0,4)
        ELSEIF mdado_arq[i,11] = 'I'
                mcst := 'S'
                mcons_merc := {}
                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_barr = "+sr_cdbvalue(mdado_arq[i,1]),,.t.,@mcons_merc)
                IF LEN(mcons_merc) = 0
                        LOOP
                ENDIF
                IF mcons_merc[1,62] > 0
                        maliquota := STRZERO(mcons_merc[1,62] * 100,4)
                ELSE
                        maliquota := STRZERO(17.00 * 100,4)
                ENDIF
        ELSE
                mcst := 'T'
                mcons_merc := {}
                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_barr = "+sr_cdbvalue(mdado_arq[i,1]),,.t.,@mcons_merc)
                IF LEN(mcons_merc) = 0
                        LOOP
                ENDIF
                IF mcons_merc[1,62] > 0
                        maliquota := STRZERO(mcons_merc[1,62] * 100,4)
                ELSE
                        maliquota := STRZERO(17.00 * 100,4)
                ENDIF
        ENDIF
        nBytes := FWrite(nHandle,'P2'+mcgc_firm+mdado_arq[i,1]+mdado_arq[i,4]+SPACE(10)+mdado_arq[i,5]+mdado_arq[i,8]+mdado_arq[i,9]+mcst+maliquota+STRZERO(iat(mdado_arq[i,6],2)*100,12)+m_qp)
        mcont_p2 ++
        if nBytes = 0
                atencao("Erro na gravacao do conteudo do arquivo do Tipo " + Tipo + "!")
                Return(.F.)
        EndIf
        */
NEXT

nBytes := FWrite(nHandle,'P9'+mcgc_firm+SUBSTR(m_set[1,128],1,14)+STRZERO(mcont_p2,6)+m_qp)
FClose(nhandle)
GERA_EAD(marquivo)
SET CENTURY OFF
wvw_lclosewindow()
IF 'S' = op_simnao('S','Deseja Editar o arquivo:')
        MYRUN('NOTEPAD '+ALLTRIM(marquivo))
ENDIF
RETURN .T.
*************************************  F I M ******************************************
#include "fileio.ch"
#include "common.ch"

#define LINEBUFF  1024
#define CRLF      CHR(13)+CHR(10)

FUNCTION EXTRAI(cArquivo)
*************************
LOCAL cLinha
PRIVATE lEof:= .f.
nArquivo:=FOPEN(cArquivo,0)
IF nArquivo # -1
        WHILE !lEof
                cLinha := LinhaArq(nArquivo,LINEBUFF)
                IF LEN(ALLTRIM(cLinha))>0
                        atencao(cLinha)
                ENDIF
        ENDDO
ENDIF
RETURN NIL
******************************************************************
STATIC FUNCTION LinhaArq(nHandle,nBuffSize)
*******************************************
LOCAL cret :=  cBuff:='', nPos:= nEol:= nRead:=0
DEFAULT nBuffSize TO 1024
cBuff:=SPACE(nBuffSize)
nPos:=FSEEK(nHandle,0,FS_RELATIVE)
IF ( nRead:=FREAD(nHandle,@cBuff,nBuffSize) ) > 0
        IF ( nEol:=AT(CRLF,SUBSTR(cBuff,1,nRead)) ) == 0
                cret := SUBSTR(cBuff,1,LEN(cBuff)-1)
        ELSE
                cret := SUBSTR(cBuff,1,nEol-1)
                FSEEK(nHandle,nPos+nEol+1,FS_SET)
        END
ELSE
        lEof:=.t.
END
RETURN(cRet)
************************ f i m ******************************************
FUNCTION v_reducao_z
*********************
LOCAL ret := 0,mrz_aux:={},mreducao,lin,linhas,linha
PRIVATE m_DadosReducao := Space(1279)

mreducao := IBR_COMANDO( 'ECF.DadosUltimaReducaoZ',,30,.T. )
lin := MEMOLINE(mreducao,110,1,,)
linhas := linha := 0
linhas := MLCOUNT(mreducao,110)
mrz_aux := {}
FOR linha = 1 TO  linhas
        lin := MEMOLINE(mreducao,110,linha,,)
        //IF EMPTY(lin) .OR. SUBSTR(lin,1,1) = '['
        //        LOOP
        //ENDIF
        //lin := STRTRAN(lin,'[','')
        //lin := STRTRAN(lin,']','')
        AADD(mrz_aux,ALLTRIM(lin))
NEXT
mArq        := FCREATE('red_z.TXT')
FWRITE( mArq, @mreducao, LEN( mreducao ) )
FCLOSE(mArq)
RETURN mrz_aux
************************************* f i m **********************************************
FUNCTION item_rz(mrz_aux,mitem,mposi)
*************************************
LOCAL i:=0
IF mposi = NIL
        mposi := 110
ENDIF
FOR i = 1 TO LEN(mrz_aux)
        IF UPPER(SUBSTR(SUBSTR(mrz_aux[i],1,AT('=',mrz_aux[i])-1),1,mposi)) = UPPER(mitem)
                RETURN SUBSTR(mrz_aux[i],AT('=',mrz_aux[i])+2)
        ENDIF
NEXT
RETURN ''
************************************* f i m **********************************************
FUNCTION para_conf
********************
LOCAL mparamentro:='',mparamentro1:='',mparamentro2:='',mparamentro3:='',mparamentro4:='',;
      mparamentro5:=''  

IF 'N' = op_simnao('S','Confirma a emissao do PARAMETRO DE CONFIGURACAO:')
        RETURN NIL
ENDIF
mparametro :=            '============================================'+m_qp
mparametro := mparametro+'      PARAMENTROS DE CONFIGURACAO           '+m_qp
mparametro := mparametro+'============================================'+m_qp
mparametro := mparametro+'PERFIL DE REQUISITOS CONFIGURADOS: "E"  PE'+m_qp
mparametro := mparametro+'                                   "ND" PB'+m_qp
mparametro := mparametro+'                                   "B"  BA'+m_qp
mparametro := mparametro+'                                   "ND" AL'+m_qp
mparametro := mparametro+'                                   "ND" CE'+m_qp
mparametro := mparametro+'                                   "ND" RN'+m_qp
mparametro := mparametro+'============================================'+m_qp
mparametro := mparametro+'VERSAO ER PAF-ECF:'+mer_paf_ecf+m_qp
mparametro := mparametro+'============================================'+m_qp
mparametro := mparametro+'MD5:'+mmd5+m_qp
/*
mparametro := mparametro+'Todas as parametrizacoes relacionadas neste Relatorio sao de configuracao inacessivel ao usuario do PAF-ECF.'+m_qp
mparametro := mparametro+'A ativacao ou nao destes parametros e determinada pela unidade federada e somente pode ser feita pela intervencao da empresa desenvolvedora do PAF-ECF.'+m_qp
mparametro := mparametro+m_qp
mparametro := mparametro+'IDENTIFICACAO E CARACTERISTICAS DO PROGRAMA APLICATIVO FISCAL'+m_qp
mparametro := mparametro+'--------------------------------------------'+m_qp
mparametro := mparametro+'Nome Comercial                        SISPDV'+m_qp
mparametro := mparametro+'Versao                                '+mversao+m_qp
mparametro := mparametro+'Linguagem Programacao               XHarbour'+m_qp
mparametro := mparametro+'Sistema Operacional                  Windows'+m_qp
mparametro := mparametro+'Gerenciador de Banco de Dados       Firebird'+m_qp
mparametro := mparametro+'FUNCIONALIDADES'+m_qp
mparametro := mparametro+'--------------------------------------------'+m_qp
mparametro := mparametro+'Tipo de Funcionamento                Em Rede'+m_qp
mparametro := mparametro+'Tipo de Desenvolvimento      Comercializavel'+m_qp
mparametro := mparametro+'Integracao do PAF-ECF             Retaguarda'+m_qp

mparametro1 :=            'PARAMETRO PARA NAO CONCOMITANCIA'+m_qp
mparametro1 := mparametro1+'--------------------------------'+m_qp
mparametro1 := mparametro1+'Req IV'+m_qp
mparametro1 := mparametro1+'ITEM 2: Realiza registro de pre-venda '+m_qp
mparametro1 := mparametro1+'conforme definido no inciso II do Art. 1o....: S '+m_qp
mparametro1 := mparametro1+'ITEM 3: Emitir DAV, Impresso em equip. nao'+m_qp
mparametro1 := mparametro1+'fiscal, conf. defin. no inciso III do art. 1o: N'+m_qp

mparametro1 := mparametro1+'ITEM 4: Emite DAV, impresso no ECF, como'+m_qp
mparametro1 := mparametro1+'Relat.Ger., Conforme defin. no inciso'+m_qp
mparametro1 := mparametro1+'III do art.1o................................: N'+m_qp

mparametro1 := mparametro1+'ITEM 6: Registro de lancamento de mesa ou'+m_qp
mparametro1 := mparametro1+'conta de cliente.............................: N'+m_qp

mparametro1 := mparametro1+'Req VI'+m_qp
mparametro1 := mparametro1+'ITEM 2: Imprimir o DAV conforme o modelo'+m_qp
mparametro1 := mparametro1+'constante no Anexo II........................: N'+m_qp

mparametro1 := mparametro1+'OFICINA DE CONSERTO'+m_qp
mparametro1 := mparametro1+'--------------------------------'+m_qp
mparametro1 := mparametro1+'Req XLI'+m_qp
mparametro1 := mparametro1+'ITEM 1: Emite DAV-OS para servicos...........: N'+m_qp

mparametro1 := mparametro1+'APLICACOES ESPECIAS'+m_qp
mparametro1 := mparametro1+'--------------------------------'+m_qp
mparametro1 := mparametro1+'Req VII'+m_qp
mparametro1 := mparametro1+'ITEM 20: Tabela de indice tecnico'+m_qp
mparametro1 := mparametro1+'de producao..................................: N'+m_qp

mparametro1 := mparametro1+'Req XXXVII'+m_qp
mparametro1 := mparametro1+'ITEM 1: Bar, Restaurantes e Similares........: N'+m_qp

mparametro1 := mparametro1+'Req XXXVIII-A'+m_qp
mparametro1 := mparametro1+'ITEM 1:Bar,Restaurantes e Similares c/balanca: N'+m_qp

mparametro1 := mparametro1+'Req XXXIX'+m_qp
mparametro1 := mparametro1+'ITEM 1: Usa impressora nao fiscal no ambiente'+m_qp
mparametro1 := mparametro1+'de Producao:.................................: N'+m_qp

mparametro1 := mparametro1+'Req XL'+m_qp
mparametro1 := mparametro1+'ITEM 1 e 2: Imprimir DAV descriminando a '+m_qp
mparametro1 := mparametro1+'formula manipulada...........................: N'+m_qp


mparametro1 := mparametro1+'REVENDA DE COMBUSTIVEL'+m_qp
mparametro1 := mparametro1+'--------------------------------'+m_qp
mparametro1 := mparametro1+'Req XXXII'+m_qp
mparametro1 := mparametro1+'ITEM 1: Acumula por dia, o volume de cada'+m_qp
mparametro1 := mparametro1+'combustivel..................................: N'+m_qp

mparametro1 := mparametro1+'ITEM 2: Armazena os encerrantes inicial'+m_qp
mparametro1 := mparametro1+'e final a cada abastecimento.................: N'+m_qp

mparametro2 :=             'Req XXXIII'+m_qp
mparametro2 := mparametro2+'ITENS 1 e 2: Emite controle de encerrantes'+m_qp
mparametro2 := mparametro2+'apos a Reducao Z e Leitura X.................: N'+m_qp

mparametro2 := mparametro2+'Req XXXV'+m_qp
mparametro2 := mparametro2+'ITEM 1: PAF integrado com bombas.............: N'+m_qp
mparametro2 := mparametro2+'ITEM 3: Cria um abastecimento em caso de'+m_qp
mparametro2 := mparametro2+'divergencia de encerrantes...................: N'+m_qp

mparametro2 := mparametro2+'Req XXXVI-A'+m_qp
mparametro2 := mparametro2+'ITEM 1: Impede registro venda com valor'+m_qp
mparametro2 := mparametro2+'zerado ou negativo...........................: N'+m_qp

mparametro2 := mparametro2+'Req XXXVI-B'+m_qp
mparametro2 := mparametro2+'ITENS 1,2,3 e 4: Possui cadastro da(s)'+m_qp
mparametro2 := mparametro2+'placa(s) da(s) bomba(s)......................: N'+m_qp


mparametro3 :=             'CRITERIO POR UNIDADE FEDERADA'+m_qp
mparametro3 := mparametro3+'--------------------------------'+m_qp
mparametro3 := mparametro3+'Req XVII'+m_qp
mparametro3 := mparametro3+'ITEM 1 alinea B: Emissao de documento'+m_qp
mparametro3 := mparametro3+'fiscal por PED...............................: N'+m_qp

mparametro3 := mparametro3+'Req XVIII'+m_qp
mparametro3 := mparametro3+'ITEM 1: Tela de consulta de produtos'+m_qp
mparametro3 := mparametro3+'Alinea a: Totalizacao dos valores da lista...: N'+m_qp
mparametro3 := mparametro3+'Alinea b: Transf. das info em pre-venda......: N'+m_qp
mparametro3 := mparametro3+'Alinea c: Transf. das info em DAV............: N'+m_qp

mparametro3 := mparametro3+'Req XXII'+m_qp
mparametro3 := mparametro3+'ITEM 7 Alinea b: Recompoe valor GT...........: S'+m_qp
mparametro3 := mparametro3+'ITEM 8 Recompoe Numero Serie.................: N'+m_qp

mparametro3 := mparametro3+'Req VIII-A'+m_qp
mparametro3 := mparametro3+'ITEM 2 : MINAS LEGAL.........................: S'+m_qp
mparametro3 := mparametro3+'ITEM 2A: PARAIBA LEGAL.......................: S'+m_qp

mparametro3 := mparametro3+'Req XIV'+m_qp
mparametro3 := mparametro3+'ITEM 4 : TROCO EM CARTAO.....................: N'+m_qp
mparametro3 := mparametro3+'MD5:'+mmd5+m_qp
mparametro3 := mparametro3+'Aplicativo: SISPDV.EXE - Versao: '+mversao+m_qp

*/

mhora := TIME()
mhora := STRTRAN(mhora,':','')+SPACE(8-LEN(STRTRAN(mhora,':','')))
NCupom := num_cupom()

IBR_OK( IBR_COMANDO('ECF.AbreRelatorioGerencial' ),5)
IBR_OK( IBR_COMANDO('ECF.LinhaRelatorioGerencial',{mparametro},5 ))
//IBR_OK( IBR_COMANDO('ECF.LinhaRelatorioGerencial',{mparametro1},5 ))
//IBR_OK( IBR_COMANDO('ECF.LinhaRelatorioGerencial',{mparametro2},5 ))
//IBR_OK( IBR_COMANDO('ECF.LinhaRelatorioGerencial',{mparametro3},5 ))
//IBR_OK( IBR_COMANDO('ECF.LinhaRelatorioGerencial',{mparametro4},5 ))
//IBR_OK( IBR_COMANDO('ECF.LinhaRelatorioGerencial',{mparametro5},5 ))
IBR_FIM_REL()
Operacoes := SUBSTR(IBR_COMANDO('ECF.NumGNF',,,.T. ),5)
sRel := SUBSTR(IBR_COMANDO('ECF.NumGRG',,,.T. ),5)
SET CENTURY ON

mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
        m_MFAdicional+; //2
        m_ModeloImp+; //3
        STRZERO(VAL(m_numerocaixa),2)+; //4
        NCupom+SPACE(6-LEN(NCupom))+; //5
        Operacoes+SPACE(6-LEN(operacoes))+; //6
        sRel+SPACE(6-LEN(sRel))+; //7
        STRZERO(0,4)+; //8
        'RG'+; //9
        SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)+SPACE(8-LEN(SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)))+; //10
        mhora+; //11
        DTOC(mdata_sis)

sr_getconnection():exec('INSERT INTO r6 ('+;
        'NUMERO_FAB  ,'+; //1
        'MF_ADICIONAL,'+; //2
        'MODELO_ECF  ,'+; //3
        'NUMERO_USU  ,'+; //4
        'COO         ,'+; //5
        'GNF         ,'+; //6
        'GRG         ,'+; //7
        'CDC         ,'+; //8
        'DENOMICAO   ,'+; //9
        'DATA_FINAL  ,'+; //10
        'HORA_FINAL  ,'+; //11
        'DATA_MOV    ,'+; //12
        'CHV_CRIPT   ,'+; //13
        'SR_DELETED )'+;
        ' VALUES ('+;
        sr_cdbvalue(m_numeroSerie)+','+; //1
        sr_cdbvalue(m_MFAdicional)+','+; //2
        sr_cdbvalue(m_ModeloImp)+','+; //3
        sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
        sr_cdbvalue(NCupom)+','+; //5
        sr_cdbvalue(Operacoes)+','+; //6
        sr_cdbvalue(sRel)+','+; //7
        sr_cdbvalue(STRZERO(0,4))+','+; //8
        sr_cdbvalue('RG')+','+; //9
        sr_cdbvalue(SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2))+','+; //10
        sr_cdbvalue(mhora)+','+; //11
        sr_cdbvalue(mdata_sis)+','+; //12
        sr_cdbvalue(criptografia(mlinha,'C') )+','+; //26
        sr_cdbvalue(' ')+')',,.f.)
SET CENTURY OFF

mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
        m_MFAdicional+; //2
        m_ModeloImp+; //3
        STRZERO(VAL(m_numerocaixa),2)+; //4
        NCupom+SPACE(6-LEN(NCupom))+; //5
        STRZERO(0,6)+; //6
        Operacoes+SPACE(6-LEN(operacoes))+; //7
        SPACE(15)+; //8
        STRZERO(0,13)+; //9
        'N'+; //10
        STRZERO(0,13)+; //11
        DTOC(mdata_sis)

sr_getconnection():exec('INSERT INTO r7 ('+;
        'NUMERO_FAB  ,'+; //1
        'MF_ADICIONAL,'+; //2
        'MODELO_ECF  ,'+; //3
        'NUMERO_USU  ,'+; //4
        'COO         ,'+; //5
        'CCF         ,'+; //6
        'GNF         ,'+; //7
        'MEIO_PAG    ,'+; //8
        'VLR_PAGO    ,'+; //9
        'IND_ESTORNO ,'+; //10
        'VLR_ESTORNO ,'+; //11
        'DATA_MOV    ,'+; //12
        'CHV_CRIPT   ,'+; //13
        'SR_DELETED )'+;
        ' VALUES ('+;
        sr_cdbvalue(m_numeroSerie)+','+; //1
        sr_cdbvalue(m_MFAdicional)+','+; //2
        sr_cdbvalue(m_ModeloImp)+','+; //3
        sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
        sr_cdbvalue(NCupom)+','+; //5
        sr_cdbvalue(STRZERO(0,6))+','+; //6
        sr_cdbvalue(Operacoes)+','+; //7
        sr_cdbvalue(SPACE(15))+','+; //8
        sr_cdbvalue(STRZERO(0,13))+','+; //9
        sr_cdbvalue('N')+','+; //10
        sr_cdbvalue(STRZERO(0,13))+','+; //11
        sr_cdbvalue(mdata_sis)+','+; //12
        sr_cdbvalue(criptografia(mlinha,'C') )+','+; //26
        sr_cdbvalue(' ')+')',,.f.)
RETURN NIL
*************************************************************************
FUNCTION id_paf
***************
LOCAL mparamentro:='',mparamentro1:='',mparamentro2:='',mparamentro3:='',mparamentro4:='',;
      mparamentro5:=''  

IF 'N' = op_simnao('S','Confirma a emissao do IDENTIFICACAO DO PAF-ECF:')
        RETURN NIL
ENDIF
mparametro :=            '============================================'+m_qp
mparametro := mparametro+'      IDENTIFICACAO DO PAF-ECF              '+m_qp
mparametro := mparametro+'============================================'+m_qp
mparametro := mparametro+'Laudo No.      :'+mpaf_ecf+m_qp
mparametro := mparametro+'============================================'+m_qp
mparametro := mparametro+'  IDENTIFICACAO DA EMPRESA DESENVOLVEDORA   '+m_qp
mparametro := mparametro+'============================================'+m_qp
mparametro := mparametro+'CNPJ           :'+mcnpj_HTI+m_qp
mparametro := mparametro+'Razao Social   :'+mrazao_HTI+m_qp
mparametro := mparametro+'Endereco       :'+mend_HTI+m_qp
mparametro := mparametro+'Numero         :'+mnum_HTI+m_qp
mparametro := mparametro+'Bairro         :'+mbairro_HTI+m_qp
mparametro := mparametro+'Cidade         :'+mcidade_HTI+m_qp
mparametro := mparametro+'UF             :'+muf_HTI+m_qp
mparametro := mparametro+'CEP            :'+mcep_HTI+m_qp
mparametro := mparametro+'Fone           :'+'81 '+mfone_HTI+m_qp
mparametro := mparametro+'Contato        :'+'JOSE HELIO DE ARAUJO BELTRAO JR'+m_qp
mparametro := mparametro+'============================================'+m_qp
mparametro := mparametro+'      IDENTIFICACAO DO PAF-ECF              '+m_qp
mparametro := mparametro+'============================================'+m_qp
mparametro := mparametro+'Software       :'+msit_tip+m_qp
mparametro1 :=             'Versao         :'+mpaf_ver+m_qp
mparametro1 := mparametro1+'============================================'+m_qp
mparametro1 := mparametro1+'        PRINCIPAL ARQUIVO EXECUTAVEL        '+m_qp
mparametro1 := mparametro1+'============================================'+m_qp
mparametro1 := mparametro1+'Executavel     :'+msit_tip+'.EXE'+m_qp

lin := MEMOLINE(MEMOREAD('n_ecfpaf.txt'),110,1,,)
linhas := linha := 0
linhas := MLCOUNT(MEMOREAD('n_ecfpaf.txt'),110)
linha := 0
FOR linha = 1 TO  linhas
        IF linha = 3 .OR. linha = 4 .OR. linha = 5 .OR. linha = 6 .OR. linha = 7 .OR. linha = 8 .OR. linha = 9  .OR. linha = 10  .OR. linha = 11  .OR. linha = 12
                lin := MEMOLINE(MEMOREAD('n_ecfpaf.txt'),110,linha,,)
                IF SUBSTR(lin,1,2) # 'N3'
                        LOOP
                ENDIF
                
                IF linha = 3
                        mparametro1 := mparametro1+'MD5            :'+ALLTRIM(SUBSTR(lin,53))+m_qp
                        mparametro1 := mparametro1+'============================================'+m_qp
                        mparametro1 := mparametro1+'              DEMAIS ARQUIVOS               '+m_qp
                        mparametro1 := mparametro1+'============================================'+m_qp
                        mparametro1 := mparametro1+SUBSTR(msit_tip+'.EXE',1,30)+m_qp
                        mparametro1 := mparametro1+'      '+ALLTRIM(SUBSTR(lin,53))+m_qp
                ELSE
                        mparametro1 := mparametro1+ALLTRIM(SUBSTR(lin,3,30))+m_qp
                        mparametro1 := mparametro1+'     '+ALLTRIM(SUBSTR(lin,53))+m_qp
                ENDIF
        ENDIF
NEXT
fclose('N_ECFPAF.TXT')

//mmd5 := MEMOLINE(MEMOREAD('HTImd5.ini'),110,1,,)

//mparametro1 := mparametro1+'N'+m_qp
mparametro2 :=             '============================================'+m_qp
mparametro2 := mparametro2+'              NOME DO ARQUIVO TEXTO         '+m_qp
mparametro2 := mparametro2+'============================================'+m_qp
//mparametro2 := mparametro2+'MD5:'+ALLTRIM(mmd5)+m_qp
mparametro2 := mparametro2+'Nome.............: n_ecfpaf.txt'+m_qp
mparametro2 := mparametro2+'MD5:'+ALLTRIM(mmd5)+m_qp
mparametro2 := mparametro2+'VERSAO ER PAF-ECF:'+mer_paf_ecf+m_qp
mparametro2 := mparametro2+'============================================'+m_qp
mparametro2 := mparametro2+'          RELACAO DOS ECF AUTORIZADAS       '+m_qp
mparametro2 := mparametro2+'============================================'+m_qp
mparametro2 := mparametro2+m_SerieNum+m_qp

*/
mhora := TIME()
mhora := STRTRAN(mhora,':','')+SPACE(8-LEN(STRTRAN(mhora,':','')))
NCupom := num_cupom()

mind_rel := Ren_RGerencial('Ident.PAF-ECF')

IBR_OK( IBR_COMANDO('ECF.LinhaRelatorioGerencial',{mparametro},5 ))
IBR_OK( IBR_COMANDO('ECF.LinhaRelatorioGerencial',{mparametro1},5 ))
IBR_OK( IBR_COMANDO('ECF.LinhaRelatorioGerencial',{mparametro2},5 ))
IBR_FIM_REL()
Operacoes := SUBSTR(IBR_COMANDO('ECF.NumGNF',,,.T. ),5)
sRel := SUBSTR(IBR_COMANDO('ECF.NumGRG',,,.T. ),5)

SET CENTURY ON
mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
        m_MFAdicional+; //2
        m_ModeloImp+; //3
        STRZERO(VAL(m_numerocaixa),2)+; //4
        NCupom+SPACE(6-LEN(NCupom))+; //5
        Operacoes+SPACE(6-LEN(operacoes))+; //6
        sRel+SPACE(6-LEN(sRel))+; //7
        STRZERO(0,4)+; //8
        'RG'+; //9
        SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)+SPACE(8-LEN(SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)))+; //10
        mhora+; //11
        DTOC(mdata_sis)

sr_getconnection():exec('INSERT INTO r6 ('+;
        'NUMERO_FAB  ,'+; //1
        'MF_ADICIONAL,'+; //2
        'MODELO_ECF  ,'+; //3
        'NUMERO_USU  ,'+; //4
        'COO         ,'+; //5
        'GNF         ,'+; //6
        'GRG         ,'+; //7
        'CDC         ,'+; //8
        'DENOMICAO   ,'+; //9
        'DATA_FINAL  ,'+; //10
        'HORA_FINAL  ,'+; //11
        'DATA_MOV    ,'+; //12
        'CHV_CRIPT   ,'+; //13
        'SR_DELETED )'+;
        ' VALUES ('+;
        sr_cdbvalue(m_numeroSerie)+','+; //1
        sr_cdbvalue(m_MFAdicional)+','+; //2
        sr_cdbvalue(m_ModeloImp)+','+; //3
        sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
        sr_cdbvalue(NCupom)+','+; //5
        sr_cdbvalue(Operacoes)+','+; //6
        sr_cdbvalue(sRel)+','+; //7
        sr_cdbvalue(STRZERO(0,4))+','+; //8
        sr_cdbvalue('RG')+','+; //9
        sr_cdbvalue(SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2))+','+; //10
        sr_cdbvalue(mhora)+','+; //11
        sr_cdbvalue(mdata_sis)+','+; //12
        sr_cdbvalue(criptografia(mlinha,'C') )+','+; //26
        sr_cdbvalue(' ')+')',,.f.)
SET CENTURY OFF

mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
        m_MFAdicional+; //2
        m_ModeloImp+; //3
        STRZERO(VAL(m_numerocaixa),2)+; //4
        NCupom+SPACE(6-LEN(NCupom))+; //5
        STRZERO(0,6)+; //6
        Operacoes+SPACE(6-LEN(operacoes))+; //7
        SPACE(15)+; //8
        STRZERO(0,13)+; //9
        'N'+; //10
        STRZERO(0,13)+; //11
        DTOC(mdata_sis)

sr_getconnection():exec('INSERT INTO r7 ('+;
        'NUMERO_FAB  ,'+; //1
        'MF_ADICIONAL,'+; //2
        'MODELO_ECF  ,'+; //3
        'NUMERO_USU  ,'+; //4
        'COO         ,'+; //5
        'CCF         ,'+; //6
        'GNF         ,'+; //7
        'MEIO_PAG    ,'+; //8
        'VLR_PAGO    ,'+; //9
        'IND_ESTORNO ,'+; //10
        'VLR_ESTORNO ,'+; //11
        'DATA_MOV    ,'+; //12
        'CHV_CRIPT   ,'+; //13
        'SR_DELETED )'+;
        ' VALUES ('+;
        sr_cdbvalue(m_numeroSerie)+','+; //1
        sr_cdbvalue(m_MFAdicional)+','+; //2
        sr_cdbvalue(m_ModeloImp)+','+; //3
        sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
        sr_cdbvalue(NCupom)+','+; //5
        sr_cdbvalue(STRZERO(0,6))+','+; //6
        sr_cdbvalue(Operacoes)+','+; //7
        sr_cdbvalue(SPACE(15))+','+; //8
        sr_cdbvalue(STRZERO(0,13))+','+; //9
        sr_cdbvalue('N')+','+; //10
        sr_cdbvalue(STRZERO(0,13))+','+; //11
        sr_cdbvalue(mdata_sis)+','+; //12
        sr_cdbvalue(criptografia(mlinha,'C') )+','+; //26
        sr_cdbvalue(' ')+')',,.f.)
RETURN NIL
*************************************************************************
FUNCTION mov_ecf()
******************
LOCAL ret := 0,mdat1,mdat2,marquivo:='',mnum_ecf,mcons_r1
SET CENTURY ON
mdat1 := mdat2 := ctod("  /  /  ")
mnum_ecf := 0
setcor(1)
op_tela(10,05,19,110,"Movimento por ECF")
@ 01,00 TO 01,100
@ 04,00 TO 04,100
setcor(3)
SET CENTURY ON
marquivo := +'C:\'+CURDIR()+'\'+m_indiv[1,44]+SUBSTR(m_numeroSerie,7)+STRTRAN(DTOC(DATE()),'/','')+'.TXT               '
SET CENTURY OFF

setcor(1)
@ 00,01 SAY "Numero do ECF..................: " 
@ 02,01 SAY "Data de inicio.................: " 
@ 03,01 SAY "Data de fim....................: " 
@ 05,01 SAY "Caminho do arquivo de retorno..: "
WHILE .T.
        @ 00,34 GET mnum_ecf PICT '999'         //VALID IF(EMPTY(mnum_ecf),.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mcons_r1 := {}
        sr_getconnection():exec("SELECT * FROM r1 WHERE NUM_SEQ_ECF = "+sr_cdbvalue(STRZERO(mnum_ecf,3)),,.t.,@mcons_r1)
        IF LEN(mcons_r1) = 0
                atencao('Nao existe esta ECF cadastrada...')
                LOOP
        EndIf
        @ 02,34 GET mdat1 VALID IF(EMPTY(mdat1),.F.,.T.)
        @ 03,34 get mdat2 VALID IF(EMPTY(mdat2) .OR. mdat2 < mdat1,.F.,.T.) WHEN ! EMPTY(mdat1)
        @ 05,34 get marquivo PICT '@!'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mopcao := op_simnao('N','Confirma a impressao da Movimento por ECF:')
        IF mopcao = 'N'
                EXIT
        ENDIF
        nHandle := FCreate(marquivo)
        If nHandle == -1
                atencao("Nao foi possivel criar o arquivo de Estoque")
                Return(.F.)
        EndIf
        mcgc_firm := STRTRAN(mcgc_firm,'.','')
        mcgc_firm := STRTRAN(mcgc_firm,'/','')
        mcgc_firm := STRTRAN(mcgc_firm,'-','')
        /*
        mchv_cript := criptografia(mcons_r1[1,21],'D')

        IF SUBSTR(mchv_cript,1,20) <> UPPER(mcons_r1[1,1])
                mcons_r1[1,5] := ALLTRIM(mcons_r1[1,5])+REPLI('?',20-LEN(ALLTRIM(mcons_r1[1,5])))
        ELSEIF SUBSTR(mchv_cript,21,1) <> UPPER(mcons_r1[1,2])
                mcons_r1[1,5] := ALLTRIM(mcons_r1[1,5])+REPLI('?',20-LEN(ALLTRIM(mcons_r1[1,5])))
        ELSEIF SUBSTR(mchv_cript,22,7) <> UPPER(mcons_r1[1,3])
                mcons_r1[1,5] := ALLTRIM(mcons_r1[1,5])+REPLI('?',20-LEN(ALLTRIM(mcons_r1[1,5])))
        ELSEIF SUBSTR(mchv_cript,29,20) <> UPPER(mcons_r1[1,4])
                mcons_r1[1,5] := ALLTRIM(mcons_r1[1,5])+REPLI('?',20-LEN(ALLTRIM(mcons_r1[1,5])))
        ELSEIF SUBSTR(mchv_cript,49,20) <> UPPER(mcons_r1[1,5])
                mcons_r1[1,5] := ALLTRIM(mcons_r1[1,5])+REPLI('?',20-LEN(ALLTRIM(mcons_r1[1,5])))
        ELSEIF SUBSTR(mchv_cript,69,10) <> UPPER(mcons_r1[1,6])
                mcons_r1[1,5] := ALLTRIM(mcons_r1[1,5])+REPLI('?',20-LEN(ALLTRIM(mcons_r1[1,5])))
        ELSEIF SUBSTR(mchv_cript,104,14) <> UPPER(mcons_r1[1,11])
                mcons_r1[1,5] := ALLTRIM(mcons_r1[1,5])+REPLI('?',20-LEN(ALLTRIM(mcons_r1[1,5])))
        ENDIF
        */
        nBytes := FWrite(nHandle,'R1'+mcons_r1[1,1]+;
                         mcons_r1[1,2]+;
                         mcons_r1[1,3]+;
                         mcons_r1[1,4]+;
                         mcons_r1[1,5]+;
                         mcons_r1[1,6]+;
                         SPACE(14)+;
                         mcons_r1[1,11]+;
                         mcgc_firm+;
                         m_set[1,128]+;
                         mcnpj_HTI+;
                         SPACE(14)+;
                         mim_HTI+;
                         mrazao_HTI+;
                         mpaf_HTI+SPACE(34)+;
                         mpaf_ver+SPACE(34)+;
                         mmd5+;
                         SUBSTR(DTOC(mdat1),7,4)+SUBSTR(DTOC(mdat1),4,2)+SUBSTR(DTOC(mdat1),1,2)+;
                         SUBSTR(DTOC(mdat2),7,4)+SUBSTR(DTOC(mdat2),4,2)+SUBSTR(DTOC(mdat2),1,2)+;
                         mpaf_ecf+;
                         m_qp)
        if nBytes = 0
                atencao("Erro na gravacao do conteudo do arquivo do Tipo " + Tipo + "!")
                Return(.F.)
        EndIf
        mcons_r2 := {}
        sr_getconnection():exec("SELECT * FROM r2 WHERE numero_usu = "+sr_cdbvalue(STRZERO(mnum_ecf,2))+" AND data_mov >= "+sr_cdbvalue(mdat1)+" AND data_mov <= "+sr_cdbvalue(mdat2),,.t.,@mcons_r2)
        IF LEN(mcons_r2) > 0
                i := 0
                FOR i = 1 TO LEN(mcons_r2)
                        /*
                        mchv_cript := criptografia(mcons_r2[i,15],'D')
                        IF SUBSTR(mchv_cript,1,20) <> UPPER(mcons_r2[i,1])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,21,1) <> UPPER(mcons_r2[i,2])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,22,20) <> UPPER(mcons_r2[i,3])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,42,2) <> UPPER(mcons_r2[i,4])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,44,6) <> UPPER(mcons_r2[i,5])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,50,6) <> UPPER(mcons_r2[i,6])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,56,6) <> UPPER(mcons_r2[i,7])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,62,8) <> UPPER(mcons_r2[i,8])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,70,8) <> UPPER(mcons_r2[i,9])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,78,14) <> UPPER(mcons_r2[i,10])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,92,1) <> UPPER(mcons_r2[i,11])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,93,6) <> UPPER(mcons_r2[i,12])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,99,6) <> UPPER(mcons_r2[i,13])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ELSEIF SUBSTR(mchv_cript,105,14) <> UPPER(mcons_r2[i,14])
                                mcons_r2[i,3] := ALLTRIM(mcons_r2[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r2[i,3])))
                        ENDIF
                        */
                        nBytes := FWrite(nHandle,'R2'+mcons_r2[i,1]+mcons_r2[i,2]+mcons_r2[i,3]+mcons_r2[i,4]+mcons_r2[i,5]+mcons_r2[i,6]+mcons_r2[i,7]+mcons_r2[i,8]+mcons_r2[i,9]+mcons_r2[i,10]+mcons_r2[i,11]+m_qp)
                        if nBytes = 0
                                atencao("Erro na gravacao do conteudo do arquivo do Tipo " + Tipo + "!")
                                LOOP
                        EndIf
                NEXT
        EndIf

        mcons_r3 := {}
        sr_getconnection():exec("SELECT * FROM r3 WHERE numero_usu = "+sr_cdbvalue(STRZERO(mnum_ecf,2))+" AND data_mov >= "+sr_cdbvalue(mdat1)+" AND data_mov <= "+sr_cdbvalue(mdat2),,.t.,@mcons_r3)
        IF LEN(mcons_r3) > 0
                i := 0
                FOR i = 1 TO LEN(mcons_r3)
                        /*
                        mchv_cript := criptografia(mcons_r3[i,9],'D')
                        IF SUBSTR(mchv_cript,1,20) <> UPPER(mcons_r3[i,1])
                                atencao('1 '+SUBSTR(mchv_cript,1,20)+' - '+mcons_r3[i,1])
                                mcons_r3[i,3] := ALLTRIM(mcons_r3[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r3[i,3])))
                        ELSEIF SUBSTR(mchv_cript,21,1) <> UPPER(mcons_r3[i,2])
                                atencao('2 '+SUBSTR(mchv_cript,21,1)+' - '+mcons_r3[i,2])
                                mcons_r3[i,3] := ALLTRIM(mcons_r3[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r3[i,3])))
                        ELSEIF SUBSTR(mchv_cript,23,20) <> UPPER(mcons_r3[i,3])
                                atencao('3 '+SUBSTR(mchv_cript,23,20)+' - '+mcons_r3[i,3]+m_qp+mchv_cript)
                                mcons_r3[i,3] := ALLTRIM(mcons_r3[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r3[i,3])))
                        ELSEIF SUBSTR(mchv_cript,43,2) <> UPPER(mcons_r3[i,4])
                                atencao('4 '+SUBSTR(mchv_cript,43,2)+' - '+mcons_r3[i,4])
                                mcons_r3[i,3] := ALLTRIM(mcons_r3[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r3[i,3])))
                        ELSEIF SUBSTR(mchv_cript,45,6) <> UPPER(mcons_r3[i,5])
                                atencao('5 '+SUBSTR(mchv_cript,45,6)+' - '+mcons_r3[i,5])
                                mcons_r3[i,3] := ALLTRIM(mcons_r3[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r3[i,3])))
                        ELSEIF SUBSTR(mchv_cript,51,7) <> UPPER(mcons_r3[i,6])
                                atencao('6 '+SUBSTR(mchv_cript,51,7)+' - '+mcons_r3[i,6])
                                mcons_r3[i,3] := ALLTRIM(mcons_r3[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r3[i,3])))
                        ELSEIF SUBSTR(mchv_cript,58,13) <> UPPER(mcons_r3[i,7])
                                atencao('7 '+SUBSTR(mchv_cript,58,13)+' - '+mcons_r3[i,7])
                                mcons_r3[i,3] := ALLTRIM(mcons_r3[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r3[i,3])))
                        ENDIF
                        */
                        nBytes := FWrite(nHandle,'R3'+mcons_r3[i,1]+mcons_r3[i,2]+mcons_r3[i,3]+mcons_r3[i,4]+mcons_r3[i,5]+mcons_r3[i,6]+mcons_r3[i,7]+m_qp)
                        if nBytes = 0
                                atencao("Erro na gravacao do conteudo do arquivo do Tipo " + Tipo + "!")
                                LOOP
                        EndIf
                NEXT
        EndIf

        mcons_r4 := {}
        sr_getconnection():exec("SELECT * FROM r4 WHERE numero_usu = "+sr_cdbvalue(STRZERO(mnum_ecf,2))+" AND data_mov >= "+sr_cdbvalue(mdat1)+" AND data_mov <= "+sr_cdbvalue(mdat2),,.t.,@mcons_r4)
        IF LEN(mcons_r4) > 0
                i := 0
                FOR i = 1 TO LEN(mcons_r4)
                        /*
                        mchv_cript := criptografia(mcons_r4[i,20],'D')
                        IF SUBSTR(mchv_cript,1,20) <> UPPER(mcons_r4[i,1])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,21,1) <> UPPER(mcons_r4[i,2])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,22,20) <> UPPER(mcons_r4[i,3])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,42,2) <> UPPER(mcons_r4[i,4])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,44,6) <> UPPER(mcons_r4[i,5])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,50,6) <> UPPER(mcons_r4[i,6])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,56,8) <> UPPER(mcons_r4[i,7])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,64,14) <> UPPER(mcons_r4[i,8])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,78,13) <> UPPER(mcons_r4[i,9])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,91,1) <> UPPER(mcons_r4[i,10])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,92,13) <> UPPER(mcons_r4[i,11])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,105,1) <> UPPER(mcons_r4[i,12])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,106,14) <> UPPER(mcons_r4[i,13])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,120,1) <> UPPER(mcons_r4[i,14])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,121,13) <> UPPER(mcons_r4[i,15])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,134,1) <> UPPER(mcons_r4[i,16])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,135,40) <> UPPER(mcons_r4[i,17])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ELSEIF SUBSTR(mchv_cript,175,14) <> UPPER(mcons_r4[i,18])
                                mcons_r4[i,3] := ALLTRIM(mcons_r4[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r4[i,3])))
                        ENDIF
                        */
                        nBytes := FWrite(nHandle,'R4'+mcons_r4[i,1]+mcons_r4[i,2]+mcons_r4[i,3]+mcons_r4[i,4]+mcons_r4[i,5]+mcons_r4[i,6]+mcons_r4[i,7]+mcons_r4[i,8]+mcons_r4[i,9]+mcons_r4[i,10]+mcons_r4[i,11]+mcons_r4[i,12]+mcons_r4[i,13]+mcons_r4[i,14]+mcons_r4[i,15]+mcons_r4[i,16]+mcons_r4[i,17]+mcons_r4[i,18]+m_qp)
                        if nBytes = 0
                                atencao("Erro na gravacao do conteudo do arquivo do Tipo " + Tipo + "!")
                                LOOP
                        EndIf
                NEXT
        EndIf
        mcons_r5 := {}
        sr_getconnection():exec("SELECT * FROM r5 WHERE numero_usu = "+sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+" AND data_mov >= "+sr_cdbvalue(mdat1)+" AND data_mov <= "+sr_cdbvalue(mdat2),,.t.,@mcons_r5)
        IF LEN(mcons_r5) > 0
                i := 0
                FOR i = 1 TO LEN(mcons_r5)
                        /*
                        mchv_cript := criptografia(mcons_r5[i,26],'D')
                        IF SUBSTR(mchv_cript,1,20) <> UPPER(mcons_r5[i,1])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,21,1) <> UPPER(mcons_r5[i,2])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,23,20) <> UPPER(mcons_r5[i,3])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,43,2) <> UPPER(mcons_r5[i,4])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,45,6) <> UPPER(mcons_r5[i,5])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,51,6) <> UPPER(mcons_r5[i,6])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,57,3) <> UPPER(mcons_r5[i,7])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,60,14) <> UPPER(mcons_r5[i,8])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,74,100) <> UPPER(mcons_r5[i,9])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,174,7) <> UPPER(mcons_r5[i,10])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,181,3) <> UPPER(mcons_r5[i,11])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,184,8) <> UPPER(mcons_r5[i,12])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,192,8) <> UPPER(mcons_r5[i,13])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,200,8) <> UPPER(mcons_r5[i,14])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,208,14) <> UPPER(mcons_r5[i,15])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,222,7) <> UPPER(mcons_r5[i,16])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,229,1) <> UPPER(mcons_r5[i,17])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,230,7) <> UPPER(mcons_r5[i,18])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,237,13) <> UPPER(mcons_r5[i,19])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,250,13) <> UPPER(mcons_r5[i,20])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,263,1) <> UPPER(mcons_r5[i,21])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,264,1) <> UPPER(mcons_r5[i,22])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,265,1) <> UPPER(mcons_r5[i,23])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ELSEIF SUBSTR(mchv_cript,266,1) <> UPPER(mcons_r5[i,24])
                                mcons_r5[i,3] := ALLTRIM(mcons_r5[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r5[i,3])))
                        ENDIF
                        */
                        nBytes := FWrite(nHandle,'R5'+mcons_r5[i,1]+mcons_r5[i,2]+mcons_r5[i,3]+mcons_r5[i,4]+mcons_r5[i,5]+mcons_r5[i,6]+mcons_r5[i,7]+mcons_r5[i,8]+mcons_r5[i,9]+mcons_r5[i,10]+mcons_r5[i,11]+mcons_r5[i,12]+mcons_r5[i,13]+mcons_r5[i,14]+mcons_r5[i,15]+mcons_r5[i,16]+mcons_r5[i,17]+mcons_r5[i,18]+mcons_r5[i,19]+mcons_r5[i,20]+mcons_r5[i,21]+mcons_r5[i,22]+mcons_r5[i,23]+mcons_r5[i,24]+m_qp)
                        if nBytes = 0
                                atencao("Erro na gravacao do conteudo do arquivo do Tipo " + Tipo + "!")
                                LOOP
                        EndIf
                NEXT
        EndIf

        mcons_r6 := {}
        sr_getconnection():exec("SELECT * FROM r6 WHERE numero_usu = "+sr_cdbvalue(STRZERO(mnum_ecf,2))+" AND data_mov >= "+sr_cdbvalue(mdat1)+" AND data_mov <= "+sr_cdbvalue(mdat2),,.t.,@mcons_r6)
        IF LEN(mcons_r6) > 0
                i := 0
                FOR i = 1 TO LEN(mcons_r6)
                        /*
                        mchv_cript := criptografia(mcons_r6[i,13],'D')
                        IF SUBSTR(mchv_cript,1,20) <> UPPER(mcons_r6[i,1])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ELSEIF SUBSTR(mchv_cript,21,1) <> UPPER(mcons_r6[i,2])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ELSEIF SUBSTR(mchv_cript,23,20) <> UPPER(mcons_r6[i,3])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ELSEIF SUBSTR(mchv_cript,43,2) <> UPPER(mcons_r6[i,4])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ELSEIF SUBSTR(mchv_cript,45,6) <> UPPER(mcons_r6[i,5])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ELSEIF SUBSTR(mchv_cript,51,6) <> UPPER(mcons_r6[i,6])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ELSEIF SUBSTR(mchv_cript,57,6) <> UPPER(mcons_r6[i,7])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ELSEIF SUBSTR(mchv_cript,63,4) <> UPPER(mcons_r6[i,8])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ELSEIF SUBSTR(mchv_cript,67,2) <> UPPER(mcons_r6[i,9])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ELSEIF SUBSTR(mchv_cript,69,8) <> UPPER(mcons_r6[i,10])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ELSEIF SUBSTR(mchv_cript,77,8) <> UPPER(mcons_r6[i,11])
                                mcons_r6[i,3] := ALLTRIM(mcons_r6[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r6[i,3])))
                        ENDIF
                        */
                        nBytes := FWrite(nHandle,'R6'+mcons_r6[i,1]+mcons_r6[i,2]+mcons_r6[i,3]+mcons_r6[i,4]+mcons_r6[i,5]+mcons_r6[i,6]+mcons_r6[i,7]+mcons_r6[i,8]+mcons_r6[i,9]+mcons_r6[i,10]+mcons_r6[i,11]+m_qp)
                        if nBytes = 0
                                atencao("Erro na gravacao do conteudo do arquivo do Tipo " + Tipo + "!")
                                LOOP
                        EndIf
                NEXT
        EndIf

        mcons_r7 := {}
        sr_getconnection():exec("SELECT * FROM r7 WHERE numero_usu = "+sr_cdbvalue(STRZERO(mnum_ecf,2))+" AND data_mov >= "+sr_cdbvalue(mdat1)+" AND data_mov <= "+sr_cdbvalue(mdat2),,.t.,@mcons_r7)
        IF LEN(mcons_r7) > 0
                i := 0
                FOR i = 1 TO LEN(mcons_r7)
                        /*
                        mchv_cript := criptografia(mcons_r7[i,13],'D')
                        IF SUBSTR(mchv_cript,1,20) <> UPPER(mcons_r7[i,1])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ELSEIF SUBSTR(mchv_cript,21,1) <> UPPER(mcons_r7[i,2])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ELSEIF SUBSTR(mchv_cript,23,20) <> UPPER(mcons_r7[i,3])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ELSEIF SUBSTR(mchv_cript,43,2) <> UPPER(mcons_r7[i,4])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ELSEIF SUBSTR(mchv_cript,45,6) <> UPPER(mcons_r7[i,5])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ELSEIF SUBSTR(mchv_cript,51,6) <> UPPER(mcons_r7[i,6])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ELSEIF SUBSTR(mchv_cript,57,6) <> UPPER(mcons_r7[i,7])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ELSEIF SUBSTR(mchv_cript,63,15) <> UPPER(mcons_r7[i,8])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ELSEIF SUBSTR(mchv_cript,78,13) <> UPPER(mcons_r7[i,9])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ELSEIF SUBSTR(mchv_cript,91,1) <> UPPER(mcons_r7[i,10])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ELSEIF SUBSTR(mchv_cript,92,13) <> UPPER(mcons_r7[i,11])
                                mcons_r7[i,3] := ALLTRIM(mcons_r7[i,3])+REPLI('?',20-LEN(ALLTRIM(mcons_r7[i,3])))
                        ENDIF
                        */
                        nBytes := FWrite(nHandle,'R7'+mcons_r7[i,1]+mcons_r7[i,2]+mcons_r7[i,3]+mcons_r7[i,4]+mcons_r7[i,5]+mcons_r7[i,6]+mcons_r7[i,7]+mcons_r7[i,8]+mcons_r7[i,9]+mcons_r7[i,10]+mcons_r7[i,11]+m_qp)
                        if nBytes = 0
                                atencao("Erro na gravacao do conteudo do arquivo do Tipo " + Tipo + "!")
                                LOOP
                        EndIf
                NEXT
        EndIf
        FClose(nhandle)
        GERA_EAD(marquivo)
        IF 'S' = op_simnao('S','Deseja Editar o arquivo:')
                MYRUN('NOTEPAD '+ALLTRIM(marquivo))
        ENDIF
ENDDO
SET CENTURY OFF
wvw_lclosewindow()
RETURN .T.
*************************************  F I M ******************************************
FUNCTION meio_pag
******************
LOCAL mdat1,mdat2,mcons_r7,mparametro:='',mdias:=0,mtot_mp:={},mmeio_pg:={},;
      mponto:=0,mtotal_geral:=0,y:=0,i:=0,mtot_dia:=0,meio_pg := '',mtot_meio:=0
mdat1 := mdat2 := ctod("  /  /  ")
setcor(1)
op_tela(10,05,13,95,"Meios de Pagamentos")
setcor(1)
@ 01,01 SAY "Data de Inicio.................: "
@ 02,01 SAY "Data de Fim....................: "
WHILE .T.
        SET CENTURY ON
        @ 01,34 GET mdat1 VALID IF(EMPTY(mdat1),.F.,.T.)
        @ 02,34 get mdat2 VALID IF(EMPTY(mdat2) .OR. mdat2 < mdat1,.F.,.T.) WHEN ! EMPTY(mdat1)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mopcao := op_simnao('N','Confirma a impressao do Meios de Pagamentos:')
        IF mopcao = 'N'
                EXIT
        ENDIF
        mensagem('Nomeando o Relatorio Gerencial MEIOS DE PAGAMENTOS...')
        mparametro :=            '================================================'+m_qp
        mparametro := mparametro+'             MEIOS DE PAGAMENTOS           '+m_qp
        mparametro := mparametro+'================================================'+m_qp
        mparametro := mparametro+'DT.ACUMUL. MEIO DE PAGTO TIPO DOC.   VLR.ACUMUL.'+m_qp
        mparametro := mparametro+'================================================'+m_qp

        mdias := mdat2 - mdat1
        meio_pg := ''
        mcons_r7 := {}
        sr_getconnection():exec("SELECT meio_pag,vlr_pago FROM r7 WHERE data_mov = "+sr_cdbvalue(mdat1)+' ORDER BY meio_pag',,.t.,@mcons_r7)
        IF LEN(mcons_r7) > 0
                mtot_meio:=y:= mtot_dia := 0
                FOR y = 1 TO LEN(mcons_r7)
                        meio_pg := mcons_r7[y,1]
                        IF EMPTY(mcons_r7[y,1])
                                LOOP
                        ENDIF
                        WHILE y <= LEN(mcons_r7) .AND. meio_pg = mcons_r7[y,1]
                                IF meio_pg # mcons_r7[y,1]
                                                IF y < LEN(mcons_r7)
                                                        y := Y -1
                                                ENDIF
                                        EXIT
                                ENDIF
                                AADD(mtot_mp,{mcons_r7[y,1],VAL(mcons_r7[y,2])/100})
                                AADD(mmeio_pg,mcons_r7[y,1])
                                mtot_dia:= mtot_dia + VAL(mcons_r7[y,2])/100
                                mtot_meio:= mtot_meio + VAL(mcons_r7[y,2])/100
                                y++
                        ENDDO
                        y:=y-1
                        mparametro := mparametro+DTOC(mdat1)+' '+SUBSTR(meio_pg,1,13)+'CUPOM FISCAL'+TRANSFORM(mtot_meio,'@E 9999,999.99')+m_qp
                        mtot_meio:=0
                NEXT
                mparametro := mparametro+'TOTAL DO DIA '+DTOC(mdat1)+'             '+TRANSFORM(mtot_dia,'@E 9999,999.99')+m_qp
                mparametro := mparametro+'------------------------------------------------'+m_qp
        ENDIF
        mtot_meio:=i:=0
        FOR i = 1 TO mdias
                mcons_r7 := {}
                sr_getconnection():exec("SELECT meio_pag,vlr_pago FROM r7 WHERE data_mov = "+sr_cdbvalue(mdat1+i)+' ORDER BY meio_pag',,.t.,@mcons_r7)
                IF LEN(mcons_r7) > 0
                        y:= mtot_dia := 0
                        FOR y = 1 TO LEN(mcons_r7)
                                meio_pg := mcons_r7[y,1]
                                IF EMPTY(mcons_r7[y,1])
                                        LOOP
                                ENDIF
                                WHILE y <= LEN(mcons_r7) .AND. meio_pg = mcons_r7[y,1]
                                        mensagem(mcons_r7[y,1]+' - '+mcons_r7[y,2])
                                        mponto := ASCAN(mmeio_pg,mcons_r7[y,1])
                                        IF mponto=0
                                                AADD(mtot_mp,{mcons_r7[y,1],VAL(mcons_r7[y,2])/100})
                                                AADD(mmeio_pg,mcons_r7[y,1])
                                        ELSE
                                                mtot_mp[mponto,2] := mtot_mp[mponto,2] + VAL(mcons_r7[y,2])/100
                                        ENDIF
                                        mtot_dia:= mtot_dia + VAL(mcons_r7[y,2])/100
                                        mtot_meio:= mtot_meio + VAL(mcons_r7[y,2])/100
                                        y++
                                ENDDO
                                y := Y -1
                                mparametro := mparametro+DTOC(mdat1+i)+' '+SUBSTR(meio_pg,1,13)+'CUPOM FISCAL'+TRANSFORM(mtot_meio,'@E 9999,999.99')+m_qp
                                mtot_meio:=0
                        NEXT
                        mparametro := mparametro+'TOTAL DO DIA '+DTOC(mdat1+i)+'             '+TRANSFORM(mtot_dia,'@E 9999,999.99')+m_qp
                        mparametro := mparametro+'------------------------------------------------'+m_qp
                ENDIF
        NEXT
        mparametro := mparametro+'================================================'+m_qp
        mparametro := mparametro+'TOTAIS ACUMULADOS NO PERIODO:                   '+m_qp
        mparametro := mparametro+'================================================'+m_qp
        i:=0
        FOR i = 1 TO LEN(mmeio_pg)
                mparametro := mparametro+mtot_mp[i,1]+'     '+TRANSFORM(mtot_mp[i,2],'@E 9999,999.99')+m_qp
                mtotal_geral := mtotal_geral + mtot_mp[i,2]
        NEXT
        mparametro := mparametro+'------------------------------------------------'+m_qp
        mparametro := mparametro+'TOTAL DO PERIDO: '+TRANSFORM(mtotal_geral,'@E 999,999,999.99')+m_qp
        mparametro := mparametro+'================================================'+m_qp

        mhora := TIME()
        mhora := STRTRAN(mhora,':','')+SPACE(8-LEN(STRTRAN(mhora,':','')))
        NCupom := num_cupom()
        Operacoes = Space(7)
        Operacoes := SUBSTR(IBR_COMANDO('ECF.NumGNF',,5),5,6)
        sRel = space(7)
        sRel := SUBSTR(IBR_COMANDO('ECF.NumGRG',,5),5,6)

        mind_rel := Ren_RGerencial('Meios Pagamento')
        co := 0
        FOR co = 1 TO 1
                IBR_OK( IBR_COMANDO('ECF.LinhaRelatorioGerencial',{mparametro},5 ))
        Next
        IBR_FIM_REL()

        SET CENTURY ON
        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
                m_MFAdicional+; //2
                m_ModeloImp+; //3
                STRZERO(VAL(m_numerocaixa),2)+; //4
                NCupom+SPACE(6-LEN(NCupom))+; //5
                Operacoes+SPACE(6-LEN(operacoes))+; //6
                sRel+SPACE(6-LEN(sRel))+; //7
                STRZERO(0,4)+; //8
                'RG'+; //9
                SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)+SPACE(8-LEN(SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)))+; //10
                mhora+; //11
                DTOC(mdata_sis)
        sr_getconnection():exec('INSERT INTO r6 ('+;
                'NUMERO_FAB  ,'+; //1
                'MF_ADICIONAL,'+; //2
                'MODELO_ECF  ,'+; //3
                'NUMERO_USU  ,'+; //4
                'COO         ,'+; //5
                'GNF         ,'+; //6
                'GRG         ,'+; //7
                'CDC         ,'+; //8
                'DENOMICAO   ,'+; //9
                'DATA_FINAL  ,'+; //10
                'HORA_FINAL  ,'+; //11
                'DATA_MOV    ,'+; //12
                'CHV_CRIPT   ,'+; //13
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(m_numeroSerie)+','+; //1
                sr_cdbvalue(m_MFAdicional)+','+; //2
                sr_cdbvalue(m_ModeloImp)+','+; //3
                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                sr_cdbvalue(NCupom)+','+; //5
                sr_cdbvalue(Operacoes)+','+; //6
                sr_cdbvalue(sRel)+','+; //7
                sr_cdbvalue(STRZERO(0,4))+','+; //8
                sr_cdbvalue('RG')+','+; //9
                sr_cdbvalue(SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2))+','+; //10
                sr_cdbvalue(mhora)+','+; //11
                sr_cdbvalue(mdata_sis)+','+; //12
                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //26
                sr_cdbvalue(' ')+')',,.f.)
        SET CENTURY OFF

        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
                m_MFAdicional+; //2
                m_ModeloImp+; //3
                STRZERO(VAL(m_numerocaixa),2)+; //4
                NCupom+SPACE(6-LEN(NCupom))+; //5
                STRZERO(0,6)+; //6
                Operacoes+SPACE(6-LEN(operacoes))+; //7
                SPACE(15)+; //8
                STRZERO(0,13)+; //9
                'N'+; //10
                STRZERO(0,13)+; //11
                DTOC(mdata_sis)

        sr_getconnection():exec('INSERT INTO r7 ('+;
                'NUMERO_FAB  ,'+; //1
                'MF_ADICIONAL,'+; //2
                'MODELO_ECF  ,'+; //3
                'NUMERO_USU  ,'+; //4
                'COO         ,'+; //5
                'CCF         ,'+; //6
                'GNF         ,'+; //7
                'MEIO_PAG    ,'+; //8
                'VLR_PAGO    ,'+; //9
                'IND_ESTORNO ,'+; //10
                'VLR_ESTORNO ,'+; //11
                'DATA_MOV    ,'+; //12
                'CHV_CRIPT   ,'+; //13
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(m_numeroSerie)+','+; //1
                sr_cdbvalue(m_MFAdicional)+','+; //2
                sr_cdbvalue(m_ModeloImp)+','+; //3
                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                sr_cdbvalue(NCupom)+','+; //5
                sr_cdbvalue(STRZERO(0,6))+','+; //6
                sr_cdbvalue(Operacoes)+','+; //7
                sr_cdbvalue(SPACE(15))+','+; //8
                sr_cdbvalue(STRZERO(0,13))+','+; //9
                sr_cdbvalue('N')+','+; //10
                sr_cdbvalue(STRZERO(0,13))+','+; //11
                sr_cdbvalue(mdata_sis)+','+; //12
                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //26
                sr_cdbvalue(' ')+')',,.f.)
ENDDO
SET CENTURY OFF
fecha_tela()
RETURN NIL
*************************************  F I M ******************************************
* VERIFICA SENHAS
********************
FUNCTION senha_ini()
********************
LOCAL mcont,msenha,mdata_sen,mdata_aux,msenha_aux,mtela_sen,opcao,vsenha,vsenha1,;
      lci:=0,cci:=0,lba:=5,cba:=30,mtel_senha,aret:={},mdata_dat,q_merc,m_docapagar,ccomm,m_est_min,m_est_med

MEMVAR cod_operado

PUBLIC senha_acess,nivel_acess,mcod_oper:=0

CLEAR GETS
mcont:=0
setcor(1)
op_tela(23,17,29,60,'ACESSO AO SISTEMA  '+mversao)
WHILE .T.
        WHILE mcont <= 3
                SET CENTURY ON
        	WVW_DrawImage( ,45,1,50,10,ALLTRIM(m_indiv[1,3])+'HTI.ICO',.T.,.F.)
                setcor(1)
                mensagem('Digite Senha')
                DEVPOS(lci+1,cci+1);DEVOUT('Data do Sistema:')
                DEVPOS(lci+3,cci+1);DEVOUT('Digite a Senha.:')
                WVW_DrawBoxGet(,lci+1,cci+18,12)
                WVW_DrawBoxGet(,lci+3,cci+18,12)
                DEVPOS(lci+1,cci+18);DEVOUT(mdata_sis)
                setcor(3)
                SET CENTURY OFF
		msenha = ''
		pegasenha(@msenha,lci+3,cci+18,setcor(2),12)
                IF msenha = 'NAO'
                        wvw_lclosewindow()
                        RETURN .F.
                ENDIF
                /*
                // EX: 21/07/10  21+07+10 = 3 8
		// EX: ADM: SOMA  A= ANO+DIA = 31 - D= DIA+DIA= 42 - M= MES+DIA = 28
		// EX: 3 31 42 28 8
		mdig1 := SUBSTR(STRZERO(VAL(SUBSTR(DTOC(DATE()),7,2))+VAL(SUBSTR(DTOC(DATE()),1,2))+VAL(SUBSTR(DTOC(DATE()),4,2)),2),1,1)
		mdig2 := STRZERO(VAL(SUBSTR(DTOC(DATE()),7,2))+VAL(SUBSTR(DTOC(DATE()),1,2)),2)
		mdig3 := STRZERO(VAL(SUBSTR(DTOC(DATE()),1,2))+VAL(SUBSTR(DTOC(DATE()),1,2)),2)
		mdig4 := STRZERO(VAL(SUBSTR(DTOC(DATE()),4,2))+VAL(SUBSTR(DTOC(DATE()),1,2)),2)
		mdig5 := SUBSTR(STRZERO(VAL(SUBSTR(DTOC(DATE()),7,2))+VAL(SUBSTR(DTOC(DATE()),1,2))+VAL(SUBSTR(DTOC(DATE()),4,2)),2),2,1)
                */
                mcont ++
		
		// EX: 21/07/10  21+07+10 = 3 8
		// EX: MAD: SOMA  A= ANO+DIA = 31 - D= DIA+DIA= 42 - M= MES+DIA = 28
		// EX: 3 31 42 28 8
		mdig1 := SUBSTR(STRZERO(VAL(SUBSTR(DTOC(DATE()),7,2))+VAL(SUBSTR(DTOC(DATE()),1,2))+VAL(SUBSTR(DTOC(DATE()),4,2)),2),1,1)
		mdig2 := STRZERO(VAL(SUBSTR(DTOC(DATE()),4,2))+VAL(SUBSTR(DTOC(DATE()),1,2)),2)
		mdig3 := STRZERO(VAL(SUBSTR(DTOC(DATE()),7,2))+VAL(SUBSTR(DTOC(DATE()),1,2)),2)
		mdig4 := STRZERO(VAL(SUBSTR(DTOC(DATE()),1,2))+VAL(SUBSTR(DTOC(DATE()),1,2)),2)
		mdig5 := SUBSTR(STRZERO(VAL(SUBSTR(DTOC(DATE()),7,2))+VAL(SUBSTR(DTOC(DATE()),1,2))+VAL(SUBSTR(DTOC(DATE()),4,2)),2),2,1)

                //atencao(mdig1+mdig2+mdig3+mdig4+mdig5+' - '+SUBSTR(msenha,1,8))

		//IF SUBSTR(msenha,1,8) = mdig1+mdig2+mdig3+mdig4+mdig5
		IF SUBSTR(msenha,1,12) = msen_ini
                        wvw_lclosewindow()
                        RETURN .T.
                ELSE
                        atencao('Senha Incorreta Tente Novamente')
                        TONE(100,6)
                        TONE(1600,6)
                        INKEY(2,20)
                        IF mcont = 3
                                wvw_lclosewindow()
                                RETURN .F.
                        ENDIF
                        LOOP
                ENDIF

        ENDDO
        SET CENTURY OFF
        RETURN .F.
ENDDO
RETURN NIL
*************************************  F I M ******************************************
FUNCTION ver_gt()
*****************
LOCAL ret := 0
PRIVATE mGT
mGT := SUBSTR(IBR_COMANDO( 'ECF.GrandeTotal',,10,.T. ),5,17)
RETURN mGT
************************************ F I M ******************************************************
FUNCTION atu_gt()
*****************
LOCAL mGrandeTotal:='',lin,linhas,linha,m_HTIuax,mArq,sLinhas

mensagem('Verificando o GT...')
mGrandeTotal := ver_gt()
lin := MEMOLINE(MEMOREAD('HTIAUX.INI'),110,1,,)
linhas := linha := 0
linhas := MLCOUNT(MEMOREAD('HTIAUX.INI'),110)
m_HTIaux := {}
FOR linha = 1 TO  linhas
        lin := MEMOLINE(MEMOREAD('HTIAUX.INI'),110,linha,,)
        AADD(m_HTIaux,ALLTRIM(lin))
NEXT
fclose('HTIAUX.INI')

MYRUN('DEL HTIAUX.INI')
mArq        := FCREATE('HTIAUX.INI')
sLinhas     :=  criptografia(m_numeroSerie,'C')+m_qp
sLinhas     :=  sLinhas + criptografia(mGrandeTotal,'C')+m_qp
sLinhas     :=  sLinhas + criptografia(gerar_n_ecfpaf(),'C')+m_qp
FWRITE( mArq, @sLinhas, LEN( sLinhas ) )
FCLOSE(mArq)
RETURN .T.
*************************************  F I M ******************************************
FUNCTION sacecf_aliq()
**********************
LOCAL ret := 0,maliq:=0
setcor(1)
op_tela(10,10,11,75,"Programar Aliquotas")
mensagem('Digite o valor a aliquota para ser cadastrada - [ESC]Retornar')
@ 0,1 SAY "Valor a Aliquota (%): " get maliq PICT '999.99'
READ
IF LASTKEY() = 27
        wvw_lclosewindow()
        RETURN .T.
ENDIF
mopcao := op_simnao('S','Confirma a Configuracao da ALIQUOTAS:')
IF mopcao = 'N'
        SET CENTURY OFF
        wvw_lclosewindow()
        RETURN .T.
ENDIF
IBR_OK( IBR_COMANDO( 'ECF.ProgramaAliquota',{maliq},10,.T. ))
wvw_lclosewindow()
RETURN .T.
************************************ F I M ******************************************************
FUNCTION poucopapel
*******************
IF IBR_OK( IBR_COMANDO('ECF.PoucoPapel',,,.T. ))
        atencao('Impressora estar com Pouco Papel favor verificar...')
ENDIF
RETURN NIL
************************************ F I M ******************************************************
FUNCTION Ren_RGerencial(mnome_rg)
*********************************
LOCAL mind_rg:=''
mnome_rg := SUBSTR(mnome_rg,1,15)
mind_rg := SUBSTR(IBR_COMANDO('ECF.AchaRGDescricao',{mnome_rg},,.T.),5,2)
IF EMPTY(ALLTRIM(mind_rg))
        IBR_COMANDO('ECF.ProgramaRelatoriosGerenciais',{mnome_rg},,.T.)
        mind_rg := SUBSTR(IBR_COMANDO('ECF.AchaRGDescricao',{mnome_rg},,.T.),5,2)
ENDIF
IBR_OK( IBR_COMANDO('ECF.AbreRelatorioGerencial',{mind_rg},,.T. ),5)
RETURN mind_rg
************************************ F I M ******************************************************
Function Veri_Transacao(Tempo,mcam)
***********************************
Local Ok := .t.
IF Tempo == Nil
        Tempo := 1
ENDIF
mensagem('Verifica se ha transacao pendente')
IF Ok
        M->Tef_Ret := ALLTRIM(m_indiv[1,34])
        M->Tef_env := ALLTRIM(m_indiv[1,33])
        M_ArqTef:=ALLTRIM(M->Tef_Ret) + "Intpos.001"
        IF File(M_ArqTef)
                PnConf(Tempo)
        ENDIF
        M->Tef_env := ALLTRIM(m_indiv[1,35])
        M->Tef_Ret := ALLTRIM(m_indiv[1,36])
        M_ArqTef:=ALLTRIM(M->Tef_Ret) + "Intpos.001"
        IF File(M_ArqTef)
                PnConf(Tempo)
        ENDIF
        IF mcam # NIL
                IF m_indiv[1,41] = 'PAYGOMULT'
                        If mtp_cartao = 'P'
                                M->Tef_Env:=AllTrim(m_indiv[1,35])
                                M->Tef_Ret:=AllTrim(m_indiv[1,36])
                        ElseIf mtp_cartao = 'H'
                                M->Tef_Env:=AllTrim(m_indiv[1,33])
                                M->Tef_Ret:=AllTrim(m_indiv[1,34])
                        EndIf
                ELSEIF m_indiv[1,41] = 'PAYGO'
                        If mtp_cartao = 'P'
                                M->Tef_Env:=AllTrim(m_indiv[1,35])
                                M->Tef_Ret:=AllTrim(m_indiv[1,36])
                        ElseIf mtp_cartao = 'H'
                                M->Tef_Env:=AllTrim(m_indiv[1,33])
                                M->Tef_Ret:=AllTrim(m_indiv[1,34])
                        EndIf
                ELSE
                        If mtp_cartao = 'P'
                                M->Tef_Env:=AllTrim(m_indiv[1,35])
                                M->Tef_Ret:=AllTrim(m_indiv[1,36])
                        ElseIf mtp_cartao = 'H'
                                //atencao('hiper')
                                M->Tef_Env:=AllTrim(m_indiv[1,33])
                                M->Tef_Ret:=AllTrim(m_indiv[1,34])
                        EndIf
                ENDIF
        ENDIF
        Apaga_IntPos()
ENDIF

imp_cartao()
mensagem('Escolha sua Opcao..')
RETURN(ok)
*************************************  F I M *************************************
* CANCELAR PRE-VENDA
***********************
FUNCTION cancelar_pv(mvetor)
**************************
LOCAL mped_z:={},mvlr_aliq:='  ',cons_merc:={},mvalor:=0
mensagem('Aguarde Cancelando as PRE-VENDA em aberto...')
i := 0
FOR i = 1 TO LEN(mvetor)
        mped_z :={}
        sr_getconnection():exec("SELECT * FROM sacpv WHERE pnum_ped = "+sr_cdbvalue(mvetor[i,1]),,.t.,@mped_z)
        IF LEN(mped_z) > 0
                abrir_cupom()
                z:=0
                FOR z = 1 TO LEN(mped_z)
                        cons_merc := {}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mped_z[z,6]),,.t.,@cons_merc)
                        mvlr_aliq := ''
                        mver_isento := cons_merc[1,61]   //vlr_isento(VAL(cons_merc[1,8]))
                        IF mver_isento = 'I'
                                mvlr_aliq := 'II'
                                maliq_prod := 'I1'
                        ELSEIF mver_isento = 'N'
                                mvlr_aliq := 'NN'
                                maliq_prod := 'N1'
                        ELSEIF mver_isento = 'F'
                                maliq_prod := 'F1'
                                mvlr_aliq := 'FF'
                        ELSE
                                IF cons_merc[1,62] > 0
                                        mvlr_aliq := cons_merc[1,62]
                                ELSE
                                        cons_merc[1,62] := 17
                                        mvlr_aliq := 17
                                ENDIF
                                maliq_prod := IBR_COMANDO( 'ECF.AchaIcmsAliquota',{mvlr_aliq,'T'},,.T. )
                                IF SUBSTR(maliq_prod,1,2) # 'OK'
                                        atencao('Esta Aliquota nao estar cadastrada no ECF...')
                                        LOOP
                                ENDIF
                                maliq_prod := 'T'+SUBSTR(IBR_COMANDO( 'ECF.AchaIcmsAliquota',{mvlr_aliq,'T'},,.T. ),5,2)
                                mvlr_aliq := 'T'+SUBSTR(IBR_COMANDO( 'ECF.AchaIcmsAliquota',{mvlr_aliq,'T'},,.T. ),5,2)
                        ENDIF
                        vende_prod(STRZERO(VAL(cons_merc[1,8]),13),cons_merc[1,9],mvlr_aliq,'F',mped_z[z,14],3,mped_z[z,18],'$',0,cons_merc[1,14])
                NEXT
                mvalor := sub_total()
                ini_fechamento()
                mvalor := IBR_SUBTOTAL()
                forma_pag('DINHEIRO',mvalor)
                fim_fecha(REPLI("-",48)+m_qp+'MD5:'+ALLTRIM(mmd5)+m_qp+"PV:"+STRZERO(VAL(mvetor[i,1]),10)+m_qp+"Op:"+cod_operado)
                cancelar_cupom('*',1)
                mensagem('')
        ENDIF
NEXT
RETURN NIL
*************************************  F I M *************************************
FUNCTION dados_rz
*****************
atencao( sr_ShowVector(IBR_COMANDO( 'ECF.DadosUltimaReducaoZ', , 10 )))
RETURN NIL
*************************************  F I M *************************************
FUNCTION IBR_OK(RESP)   // Retorna .T. se a String inicia com OK:
*********************
RETURN (SUBSTR(RESP,1,3) == 'OK:')
*************************************  F I M *************************************
FUNCTION IBR_COMANDO(CMD,VET_PARAM,ESPERA,TENTA)
************************************************
LOCAL RET_IMP, REQ, RESP, TEMPOR, TINI, TFIM, BLOCO, BYTES, I, TIPO_PARAM
IF EMPTY(sENDER)
        IF ! SEM_ERRO
                atencao('ACBrMonitor nao foi inicializado.')
        ENDIF

        RETURN ''
ENDIF
DEFAULT VET_PARAM   to {} ,;
ESPERA      to 0  ,;
TENTA       to .t.
///// Codificando CMD de acordo com o protocolo /////
RET_IMP  := ''
//atencao(cmd)
IF ! EMPTY(m_indiv[1,43])
        IF ! ('.' $ LEFT(CMD,7))   // Informou o Objeto no Inicio ?
                CMD := 'NFE.'+CMD       // Se nao informou assume ECF.
        ENDIF
ELSE
        IF ! ('.' $ LEFT(CMD,7))   // Informou o Objeto no Inicio ?
                CMD := 'ECF.'+CMD       // Se nao informou assume ECF.
        ENDIF
ENDIF
//ATENCAO(CMD)
IF LEN(VET_PARAM) > 0
        CMD := CMD + '('
        FOR i = 1 TO LEN(VET_PARAM)
                TIPO_PARAM := VALtype(VET_PARAM[I])

                IF TIPO_PARAM = 'C'
                // Converte aspas para simples para aspas duplas, para o ACBrMonitor
                        CMD := CMD + '"'+ STRTRAN( RTrim(VET_PARAM[I]), '"', '""' ) + '"'

                ELSEIF TIPO_PARAM = 'N'
                        CMD := CMD + STRTRAN(ALLTRIM(Str(VET_PARAM[I])),',','.')

                ELSEIF TIPO_PARAM = 'D'
                        CMD := CMD + dtoc( VET_PARAM[I] )

                ELSEIF TIPO_PARAM = 'L'
                        CMD := CMD + iif( VET_PARAM[I],'TRUE','FALSE')

                ENDIF

                CMD := CMD + ', '
        next
        CMD := SUBSTR(CMD,1,LEN(CMD)-2) + ')'
ENDIF

CMD := CMD + CR+LF+'.'+CR+LF

IF ! SEM_ERRO
        ESPERA := max(ESPERA,5)
ELSE
        TENTA := .F.
ENDIF
IF PATH_DEL $ sENDER               /// E' TXT ? ///
        //atencao(sENDER + 'ENTNFE.TXT')
        REQ    := sENDER + 'ENTNFE.TXT'
        RESP   := sENDER + SAI_TXT
        TEMPOR := sENDER + TMP_TXT
        //////// Transmitindo o comando /////////
        TFIM := SECONDS() + 3    // Tenta apagar a Resposta anterior em ate 3 segundos
        WHILE file( RESP )
                IF ferase( RESP ) = -1
                        IF (SECONDS() > TFIM)
                                //RET_IMP := 'ERRO: Nao foi possivel apagar o arquivo: ('+RESP+') '+ferror()
                                RET_IMP := 'ERRO: Nao foi possivel apagar o arquivo de RESPOSTA'
                                //ErrorOsMessage(ferror())
                        ELSE
                                INKEY(.10,20)
                        ENDIF
                ENDIF
        ENDDO
        WHILE EMPTY(RET_IMP)
                TFIM := SECONDS() + 3    // Tenta apagar a Requisicao anterior em ate 3 segundos
                WHILE file( REQ )
                        IF ferase( REQ ) = -1
                                IF (SECONDS() > TFIM)
                                        //RET_IMP := 'ERRO: Nao foi possivel apagar o arquivo de REQUISICAO: ('+REQ+') '+ferror()
                                        RET_IMP := 'ERRO: Nao foi possivel apagar o arquivo de REQUISICAO'
                                ELSE
                                        INKEY(.10,20)
                                ENDIF
                        ENDIF
                ENDDO
                // Criando arquivo TEMPORARIO com a requisicao //
                IF EMPTY(RET_IMP)
                        IF ! Grava_ARQ(TEMPOR, CMD)
                                //RET_IMP := 'ERRO: Nao foi possivel criar o arquivo: ('+TEMPOR+') '+ferror()
                                RET_IMP := 'ERRO: Nao foi possivel criar o arquivo TEMPORARIO'
                        ENDIF
                ENDIF
                // Renomeando arquivo TEMPORARIO para REQUISICAO //
                IF EMPTY(RET_IMP)
                        IF frename(TEMPOR, REQ) = -1
                                //RET_IMP := 'ERRO: Nao foi possivel renomear ('+TEMPOR+') para ('+REQ+') '+;
                                RET_IMP := 'ERRO: Nao foi possivel renomear o (ARQUIVO TEMPORARIO)  para (REQUISICAO) ' //+ferror()
                        ENDIF
                ENDIF
                // Espera ACBrMonitor apagar o arquivo de Requisicao em ate 7 segundos
                // Isso significa que ele LEU o arquivo de Requisicao
                TFIM := SECONDS() + 7
                WHILE EMPTY(RET_IMP) .and. (SECONDS() <= TFIM) .and. file(REQ)
                        INKEY(.10,20)
                ENDDO
                IF file(REQ)
                        IF ! TENTA
                                RET_IMP := 'ERRO: ACBrMonitor nao esta ativo'
                        ELSE
                                IF op_simnao('S','O ACBrMonitor nao esta� ativo Deseja tentar novamente:') = 'N'
                                        RET_IMP := 'ERRO: ACBrMonitor nao esta ativo'
                                ELSE
                                        RET_IMP := ''
                                        IF ! file(REQ)  // ACBrMonitor "acordou" enquanto perguntava
                                                exit
                                        ENDIF
                                ENDIF
                        ENDIF
                ELSE
                        exit
                ENDIF
        ENDDO
        //////// Lendo a resposta ////////
        TINI   := SECONDS()
        WHILE EMPTY(RET_IMP)
                IF file(RESP)
                        RET_IMP := ALLTRIM(memoread( RESP ))
                ENDIF
                IF EMPTY(RET_IMP)
                        IF SECONDS() > (TINI + 5)
                                mensagem('Aguardando resposta do ACBrMonitor:  '+; // '('+ProcName(2)+') '+;
                                Trim(str(TINI + ESPERA - SECONDS(),2)))
                        ENDIF
                        IF SECONDS() > (TINI + ESPERA)
                                IF ! TENTA
                                        RET_IMP := 'ERRO: Sem resposta do ACBrMonitor em '+ALLTRIM(str(ESPERA))+;
                                                ' segundos (TimeOut)'
                                ELSE
                                        IF op_simnao('S','O ACBrMonitor nao esta respondendo Deseja tentar novamente ?') <> 'S'
                                                RET_IMP := 'ERRO: Sem resposta do ACBrMonitor em '+ALLTRIM(str(ESPERA))+;
                                                        ' segundos (TimeOut)'
                                        ELSE
                                                RET_IMP := ''
                                                TINI := SECONDS()
                                        ENDIF
                                ENDIF
                        ENDIF
                        INKEY(.10,20)
                ENDIF
        ENDDO
        //   ferase( STRTRAN(RESP,'.TXT','.OLD') )
        //   frename( RESP, STRTRAN(RESP,'.TXT','.OLD') )
        ferase( RESP )
        #IFDEF __XHARBOUR__

        ELSE                                       //// TCP / IP (apenas xHarbour ) ///
                //////// Transmitindo o comando /////////
                InetSetTimeout( sSOCKET, 3000 )   // Timeout de Envio 3 seg //
                IF inetsendall( sSocket, CMD ) <= 0
                        RET_IMP := 'ERRO: Nao foi possivel transmitir dados para o ACBrMonitor|'+;
                                '('+AllTrim(Str(InetErrorCode( sSOCKET )))+') '+;
                                InetErrorDesc( sSOCKET ) + ETX
                ENDIF
                //////// Lendo a resposta ////////
                InetSetTimeout( sSOCKET, 500 )
                TINI   := SECONDS()
                WHILE (RIGHT(RET_IMP,1) <> ETX)
                        BLOCO := SPACE(64)
                        BYTES   := inetrecv(sSOCKET, @BLOCO, 64)
                        RET_IMP += LEFT(BLOCO,BYTES)
                        IF SECONDS() > (TINI + 5)
                                mensagem('Aguardando resposta do ACBrMonitor:  '+; // '('+ProcName(2)+') '+;
                                Trim(str(TINI + ESPERA - SECONDS(),2)))
                        ENDIF
                        IF SECONDS() > (TINI + ESPERA)
                                IF ! TENTA
                                        RET_IMP := 'ERRO: Sem resposta do ACBrMonitor em '+ALLTRIM(str(ESPERA))+;
                                        ' segundos (TimeOut)' + ETX
                                ELSE
                                        IF op_simnao('S','O ACBrMonitor nao esta respondendo Deseja tentar novamente ?') <> 'S'
                                                RET_IMP := 'ERRO: Sem resposta do ACBrMonitor em '+ALLTRIM(str(ESPERA))+;
                                                        ' segundos (TimeOut)' + ETX
                                        ELSE
                                                TINI := SECONDS()
                                        ENDIF
                                ENDIF
                        ENDIF
                ENDDO
        #ENDIF
ENDIF
//IF SUBSTR(RET_IMP,1,3) <> 'OK:' .or. SUBSTR(RET_IMP,1,5) == 'ERRO:'
   //   ALERTA('RETORNO INVALIDO INIFIM|'+RET_IMP+'|'+ ALLTRIM(memoread( RESP )) )
//ENDIF
WHILE RIGHT(RET_IMP,1) $ CR+LF+ETX   // Remove sinalizadores do final
        RET_IMP := LEFT(RET_IMP,LEN(RET_IMP)-1)
ENDDO
IF ! SEM_ERRO
        MSG_ERRO := ''
        IF SUBSTR(RET_IMP,1,5) == 'ERRO:'
                MSG_ERRO := 'Erro ACBrMonitor|'+;  //  'Rotina ('+ProcName(2)+')|'+;
                STRTRAN(STRTRAN(SUBSTR(RET_IMP,7),CR,''),LF,'|')
                //STRTRAN(STRTRAN( MUDA_ACENTOS(SUBSTR(RET_IMP,7)),CR,''),LF,'|')
        ENDIF
        IF ! EMPTY(MSG_ERRO)
                atencao(MSG_ERRO)
                RET_IMP := ''
        ENDIF
ENDIF
//IF SUBSTR(RET_IMP,1,3) <> 'OK:' .or. SUBSTR(RET_IMP,1,5) == 'ERRO:'
   //   ALERTA('RETORNO INVALIDO FIM|'+RET_IMP+'|'+ ALLTRIM(memoread( RESP )) )
//ENDIF
RETURN RET_IMP
*************************************  F I M *************************************
FUNCTION IBR_INIT(ENDERECO)   // Abre a comunica��o com o ACBrmonitor
* ENDERECO -> Diretorio ( quando usando TXT)  Ex: C:\ACBR\ , ou
*             IP:PORTA  (Socket) Ex: 192.168.0.1:3434
************************************************************************
LOCAL P, RET := .T., TFIM, IP, PORTA, RESP

IF ! EMPTY(sENDER)  // J� est� aberto...
        RETURN .t.
ENDIF
SEM_ERRO := .F.
sENDER   := ALLTRIM(ENDERECO)
sMODELO  := ''
IP       := ''
PORTA    := 0
//atencao(IP+' Porta:'+STRZERO(porta,4))
//atencao(endereco)
#ifdef __XHARBOUR__
        IF ! (PATH_DEL $ sENDER)   /// Abrir comunicacao TCP/IP
                P := at(':',sENDER)
                IF P = 0
                        P := LEN(sENDER)+1
                ENDIF
                IP    := SUBSTR(sENDER,1,P-1)
                IF EMPTY(IP)
                        RET := .F.
                ELSE
                        PORTA := VAL(SUBSTR(sENDER,P+1))
                        IF PORTA = 0
                                PORTA := 3434
                        ENDIF
                        inetinit()
                        RET := .F.

                        TFIM := SECONDS() + 5             /// Tenta conectar durante 5 segundos ///
                        WHILE SECONDS() < TFIM .and. ! RET
                                sSOCKET := inetconnect(IP,PORTA)
                                RET     := (ineterrorcode(sSOCKET) = 0)
                                INKEY(0.10,250)
                        ENDDO
                ENDIF

                IF RET
                        InetSetTimeout( sSOCKET, 3000 )   // Timeout de Recep��o 3 seg //
                        RESP := InetRecvEndBlock( sSOCKET, ETX )
                        IF PORTA = 3434
                                RET  := ('ACBrMonitor' $ RESP )   // Recebeu as boas vindas ?
                        ELSEIF PORTA = 3436
                                RET  := ('ACBrNFeMonitor' $ RESP )   // Recebeu as boas vindas ?
                        ENDIF
                ELSE
                        atencao('Nao foi possivel abrir o SOCKET...')
                ENDIF
        ENDIF
#ENDIF
IF PATH_DEL $ sENDER   /// Abrir comunicacao TXT
        IF RIGHT(sENDER,1) <> PATH_DEL
                sENDER := sENDER + PATH_DEL
        ENDIF
ENDIF
IF ! RET
        sENDER := ''
ENDIF
RETURN RET
*************************************  F I M *************************************
FUNCTION IBR_ATIVO()   // Reseta Impressora em ERRO, Retorna .t. se OK
********************
RETURN IBR_OK( IBR_COMANDO( 'ECF.Ativo', , 40 ))

*************************************  F I M **************************
FUNCTION IBR_ATIVA()   // Reseta Impressora em ERRO, Retorna .t. se OK
********************
RETURN IBR_OK( IBR_COMANDO( 'ECF.Ativar', , 120 ))

*************************************  F I M *************************************
FUNCTION IBR_LEITURAX()   // Imprime relatorio de Leitura X, retorna .t. se ok
***********************
RETURN IBR_OK( IBR_COMANDO( 'ECF.LeituraX', , 45 ) )

*************************************  F I M *************************************
FUNCTION IBR_REDUCAOZ()   // Imprime relatorio de Reducao Z, retorna .t. se ok
***********************
RETURN IBR_OK( IBR_COMANDO( 'ECF.ReducaoZ', {dtoc(date())+' '+IBR_HORA()}, 40 ))

*************************************  F I M *************************************
FUNCTION IBR_ABRE_GAVETA()  // Abre Gaveta da Impressora, retorna .t. se abriu
**************************
IBR_COMANDO( 'GAV.AbreGaveta', , 6 )
RETURN IBR_GAVETA_ABERTA()

*************************************  F I M *************************************
FUNCTION IBR_CAN_ITEM(WITEM)
* Cancela Item do Cupom fiscal, retona .t. se ok
* WITEM -> Numerico com Codigo sequencial do Item a cancaler
*  Ex.: 1 cancela o primeiro item vendido.
****************************
RETURN IBR_OK( IBR_COMANDO( 'ECF.CancelaItemVendido',{WITEM}) )

*************************************  F I M *************************************
FUNCTION IBR_CAN_CUPOM()  // Cancela Cupom fiscal, retorna .t. se ok
************************
RETURN IBR_OK( IBR_COMANDO( 'ECF.CancelaCupom', , 14 ) )

*************************************  F I M *************************************
FUNCTION IBR_CUPOM_ABERTO()  // Retorna .t. se cupom estiver aberto
***************************
RETURN (IBR_ESTADO() = 'ECF.ESTVENDA')

*************************************  F I M *************************************
FUNCTION IBR_PODE_ABRIR()  // Retorna .t. se pode abrir novo cupom
*************************
RETURN IBR_OK( IBR_COMANDO( 'ECF.TestaPodeAbrirCupom' ) )

*************************************  F I M *************************************
FUNCTION IBR_ABRE_CUPOM(WCGC)
* Abre Cupom Fiscal, Retorna .t. se ok
* WCGC, SE RECEBIDO imprime o CGC do cliente no cabecalho
*****************************
sSECCOO := 0
RETURN IBR_OK( IBR_COMANDO( 'ECF.AbreCupom',{WCGC}, 8 ) )

*************************************  F I M *************************************
FUNCTION IBR_NUM_CUPOM()
* Le o Numero do ultimo Cupom,
* Retorna string tamanho 6 com o numero do ultimo cupom
************************
LOCAL RET
IF sSECCOO <> SECONDS()
        RET := IBR_COMANDO( 'ECF.NumCupom' )
        IF LEFT(RET,3) == 'OK:'
                sNUMCUPOM := STRZERO(VAL(SUBSTR(RET,5)),6)
                sSECCOO   := SECONDS()
        ELSE
                sNUMCUPOM := '000000'
        ENDIF
ENDIF
RETURN sNUMCUPOM
*************************************  F I M *************************************
FUNCTION IBR_NUM_CAIXA()
* Le o Numero do caixa
* Retorna string tamanho 4 com o numero do caixa da impressora,
* geralmente '0001' a nao ser que no estabelecimento existam 2 impressoras
************************
Static sNumECF := ''
IF VAL(sNumECF) = 0
        sNumECF := STRZERO(VAL(SUBSTR(IBR_COMANDO( 'ECF.NumECF' ),5)),3)
ENDIF
RETURN sNumECF

*************************************  F I M *************************************
FUNCTION IBR_ITEM(WCODIGO,WDESCRICAO,WALIQ,WQTD,WVALOR_UNIT,WDESCONTO,WUN,WTIPO,WACDES)
* Efetua venda de itens no cupom Fiscal, retorna .t. se OK
* WCODIGO -> String, Codigo do produto 13 caracteres
* WDESCRICAO -> String, Descricao do produto 29 caracteres
* WALIQ -> % da aliquita a ser impressa, a rotina acha o totalizador
* Se a aliquota for numerica, procura o totalizador, senao,
* usa o propria aliquota que foi passada ('01','02','FF','NN',...)
* FF - Totalizador de Substituicao Tributaria,
* II - Totalizador parcial de Isen�ao
* NN - Totalizador parcial de NAO incidencia
* WQTD -> Numerico, Quantidade a ser impressa, a rotina ajusta a mascara
* WVALOR_UNIT -> Numerico, Valor Unitario do Produto, a rotina ajusta a mascara
* WDESCONTO -> Numerico, Desconto em % para aplicar, a rotina ajusta a mascara
* WUN - Descricao da unidade (se nulo assume 'UN')
* WTIPO - Tipo de Desconto (%) ou ($)
* WACDES - Tipo (D)esconto ou (A)crescimo
************************************************************************
RETURN IBR_OK( IBR_COMANDO( 'ECF.VendeItem',{WCODIGO, WDESCRICAO, WALIQ, WQTD,;
 WVALOR_UNIT, WDESCONTO, WUN,WTIPO,WACDES} ) )

*************************************  F I M *************************************
FUNCTION IBR_SUBTOTAL()   // Retorna o Subtotal do cupom aberto
***********************
LOCAL WSTR
WSTR := SUBSTR(IBR_COMANDO( 'ECF.SubTotal' ),5)
RETURN VAL(STRTRAN(WSTR,',','.'))

*************************************  F I M *************************************
FUNCTION IBR_INI_FECHA( WDESC_ACRES )
* Inicia FECHAMENTO de Cupom Fiscal com Formas de Pagto, retorna .t. se OK
* WDESC_ACRES -> Numerico, Desconto/Acrescimo em VALOR, concedido para o
*                cliente. Se positivo ACRESCIMO senao DESCONTO
*************************************
LOCAL ret:=0
RETURN IBR_OK( IBR_COMANDO( 'ECF.SubTotalizaCupom',{WDESC_ACRES}, 5 ))
RETURN .T.

*************************************  F I M *************************************
FUNCTION IBR_ACHA_PG(WPAGAMENTO,WVINC)
* Retorna codigo do Totalizador (String 2)
* equivaLENte a Forma de Pagamento passada se nao encontrar tenta cadastrar
* se conseguir retorna o novo numero, se nao conseguir encontrar nem
* cadastrar retorna "  "
* WPAGAMENTO -> String de 16, com Pagamento a localizar/Cadastra.
* WVINC -> Passado por referencia, Informa.T. se a Forma de Pagamento pode
*          imprimir Cupom Fiscal Vinculado
***************************************
LOCAL RET_IMP, RET:=''
SEM_ERRO := .T.
RET_IMP  := IBR_COMANDO( 'ECF.AchaFPGDescricao',{ALLTRIM(WPAGAMENTO)}, 8 )
SEM_ERRO := .F.
IF IBR_OK( RET_IMP )
        RET_IMP := SUBSTR(RET_IMP,5)
        IF ! EMPTY(RET_IMP)
                RET   := ALLTRIM(SUBSTR(RET_IMP,1,4))
                WVINC := (SUBSTR(RET_IMP,5,1)<>' ')
        ENDIF
ENDIF
RETURN RET

*************************************  F I M *************************************
FUNCTION IBR_PAGTO( WVALOR, WCODFPG, WOBS, WVINC )
* Efetua Pagamento em Cupom. Deve ser executada apos IBR_INI_FECHA
* Retorna .t. se OK
* WVALOR -> Valor Numerico pago pela Forma de Pagamento
* WCODFPG -> Codigo da Forma de Pagamento, pode ser achado com IBR_ACHA_PG
* WOBS -> Texto de 80 caracteres para OBS
* WVINC -> Boleano, se .t. ter� Cupom NAO Fiscal vinculado a esta FPG
*          (nao � necess�rio na Bematech)
**************************************************
RETURN IBR_OK( IBR_COMANDO( 'ECF.EfetuaPagamento',{WCODFPG, WVALOR, WOBS, WVINC}) )

*************************************  F I M *************************************
FUNCTION IBR_FIM_FECHA( WMSG, WCOLUNAS )
* FECHA Cupom Fiscal, retorna .t. se OK
* WMSG -> String, Mensagem promocional, linhas separadas por '|'
*         checagem de colunas � feita por IMF_FIM_FECHA
* WCOLUNAS -> ajustada por PAI IMF_FIM_FECHA
****************************************
sSECCOO := 0
RETURN IBR_OK( IBR_COMANDO( 'ECF.FechaCupom',{WMSG}, 20 ) )

*************************************  F I M *************************************
FUNCTION IBR_FIM_REL()
* Encerra relatorio Gerencial e ou C.V.
**********************
local RET
SEM_ERRO := .T.
RET := IBR_OK( IBR_COMANDO( 'ECF.FechaRelatorio', , 20 ) )
SEM_ERRO := .F.
RETURN RET

*************************************  F I M *************************************
FUNCTION IBR_DATA()
* Le a Data gravada na Impressora
* Retorna a data da impressora no tipo DATE
*******************
LOCAL RET
IF sSECHORA <> SECONDS()
        RET := IBR_COMANDO( 'ECF.DataHora' )
        IF LEFT(RET,3) == 'OK:'
                sRETHORA := RET
                sSECHORA := SECONDS()
        ELSE
                sRETHORA := ''
        ENDIF
ENDIF
RETURN CTOD(SUBSTR(sRETHORA,5,8))

*************************************  F I M *************************************
FUNCTION IBR_ACHA_ALIQ(WALIQ)
* Retorna codigo do Totalizador (String 2)
* equivaLENte a WALIQ passada, se nao encontrar volta "  "
* WALIQ -> Numerico, % do ICMS a localizar o Totalizador.
*****************************
Static VET_ALIQ
LOCAL POS:=0
IF VET_ALIQ = NIL
        VET_ALIQ := IBR_ALIQ()
ENDIF
POS := ascan(VET_ALIQ,{|x|x[1] = WALIQ})
RETURN iif(EMPTY(POS),"  ",VET_ALIQ[POS,2])

*************************************  F I M *************************************
FUNCTION IBR_DESATIVA()
***********************
RETURN IBR_OK( IBR_COMANDO( 'ECF.Desativar', , 40 ))

*************************************  F I M *************************************
FUNCTION IBR_END()
* Fecha a porta da Impressora
* Encerra a comunicacao com a impressora, nao precisa de parametros
******************
#ifdef __XHARBOUR__
        IF ! PATH_DEL $ sENDER   /// Fechar comunicacao TCP/IP
                IF ! EMPTY(sENDER)
                        inetsendall( sSocket, 'ACBR.bye' )
                ENDIF
                IF sSOCKET <> NIL
                        inetclose(sSOCKET)
                        inetdestroy(sSOCKET)
                        inetcleanup()
                        INKEY(.10,200)
                        sSOCKET := NIL
                ENDIF
        ENDIF
#ENDIF
sENDER  := ''
sMODELO := ''
RETURN .t.

*************************************  F I M *************************************
FUNCTION IBR_TotFormaPagamento()
********************************
LOCAL mcampos_forma:=''
mcampos_forma := IBR_COMANDO( 'ECF.LerTotaisFormaPagamento')
atencao(mcampos_forma)
RETURN mcampos_forma

*************************************  F I M *************************************
FUNCTION IBR_RELATORIO(WTXT,WVIAS,WCOLUNAS)
* Imprime relatorio Gerencial
* Retorna .T. se imprimiu com sucesso
* WTXT  -> texto a Imprimir no relatorio, quebra de linhas = '|'
* WVIAS -> Numero de vias a imprimir 1 ou 2, padrao 1
* WCOLUNAS -> Numero m�ximo de colunas da impressora, ajustada por IMF_RELATORIO
*******************************************
LOCAL VET,A,RET,WIMP
DEFAULT WVIAS to 1
//VET  := SEPARA_STR(WTXT,'|')  // Separa as linhas de WTXT
VET  := WTXT
WIMP := 0
RET  := .T.
IBR_FIM_REL()   // Fecha se ficou algum aberto
//// Imprime relatorio gerencial ////
mensagem('Aguarde Imprimindo Relatorio...')
RET := IBR_OK( IBR_COMANDO( 'ECF.AbreRelatorioGerencial') )
WHILE RET
        a := 0
        FOR a = 1 TO LEN(vet)
                RET := IBR_OK( IBR_COMANDO( 'LinhaRelatorioGerencial',{VET[a]} ) )
        NEXT
        WIMP++
        IF ! RET .or. WIMP >= WVIAS
                exit
        ENDIF

//        IBR_COMANDO( 'ECF.LinhaRelatorioGerencial',{' | | | | | | '}, 5 )
//        clear typeahead
//        mensagem('  **  DESTAQUE A '+trim(str(WIMP,2))+'� VIA **              ENTER - Imprime proxima via',8)
ENDDO
IF RET
        RET := IBR_FIM_REL()
ENDIF
mensagem('Escolha a opcao que deseja...')
clear typeahead
RETURN RET

*************************************  F I M *************************************
FUNCTION IBR_CONF_BOLETO()
**************************
mensagem('Configurando o BOLETO aguarde...')
IBR_COMANDO('BOLETO.ConfigurarDados',{m_indiv[1,37]+"cedente.ini"},10)
IBR_COMANDO('BOLETO.ConfigurarDados',{m_indiv[1,37]+"titulo.ini"},10)
mensagem('Imprimindo o BOLETO aguarde...')
IBR_COMANDO('BOLETO.Imprimir', ,60)
//IBR_COMANDO('BOLETO.GerarRemessa',{m_indiv[1,38]+n_documento+".rem"},40)
IBR_COMANDO('BOLETO.LimparLista', ,10)
RETURN NIL

*************************************  F I M *************************************
FUNCTION IBR_HORA()
* Le a Hora gravada na Impressora
* Retorna uma string com a hora da impressora
*******************
LOCAL RET
IF sSECHORA <> SECONDS()
        RET := IBR_COMANDO( 'ECF.DataHora' )
        IF LEFT(RET,3) == 'OK:'
                sRETHORA := RET
                sSECHORA := SECONDS()
        ELSE
                sRETHORA := ''
        ENDIF
ENDIF
RETURN SUBSTR(sRETHORA,14,8)

*************************************  F I M *************************************
FUNCTION IBR_GAVETA_ABERTA()
* Retorna .t. se Gaveta est� aberta
****************************
RETURN (upper(SUBSTR(IBR_COMANDO( 'GAV.GavetaAberta' ),5,5)) = 'TRUE')

*************************************  F I M *************************************
FUNCTION IBR_ESTADO()
* Retorna .t. se Iniciou o Fechamento do Cupom e estiver esperando
* Formas de Pagamento
*********************
LOCAL RET
IF sSECEST <> SECONDS()
        RET := IBR_COMANDO( 'ECF.Estado' )
        IF LEFT(RET,3) == 'OK:'
                sESTADO := UPPER(ALLTRIM(SUBSTR(RET,5)))
                sSECEST := SECONDS()
        ELSE
                sESTADO := ''
        ENDIF
ENDIF
RETURN sESTADO

*************************************  F I M *************************************
FUNCTION IBR_ALIQ()
* Retorna vetor bi-dimensional com os codigos
* das aliquotas no formato {ALIQ(N 5,2),COD_ALIQ(C 2)}
* Fun�ao de uso interno, pela funcao (IBR_ACHA_ALIQ())
*******************
LOCAL RET_IMP,VET_RET:={},P,S
RET_IMP := IBR_COMANDO( 'ECF.CarregaAliquotas', , 10 )
IF IBR_OK( RET_IMP)
        RET_IMP := SUBSTR(RET_IMP,5)
        WHILE ! EMPTY(RET_IMP)
                P := at('|',RET_IMP)
                IF P = 0
                        P := LEN(RET_IMP)+1
                ENDIF
                S := SUBSTR(RET_IMP,1,P-1)
                aadd(VET_RET, {VAL(STRTRAN(SUBSTR(S,6,6),',','.')), SUBSTR(S,1,4)} )
                RET_IMP := SUBSTR(RET_IMP,P+1)
        ENDDO
ENDIF
RETURN VET_RET

*************************************  F I M *************************************
Static FUNCTION Grava_ARQ( WARQ, WTXT )
***************************************
LOCAL HANDLE, RET := .T.
HANDLE := FCREATE(WARQ, FC_NORMAL )
IF HANDLE > 0
        FWRITE(HANDLE, WTXT + CHR(13) + CHR(10) )
        RET := (FERROR() = 0)
        FCLOSE(HANDLE)
ENDIF
//atencao(WTXT + CHR(13) + CHR(10))
RETURN RET
*************************************  F I M *************************************
FUNCTION arquivo_cat52
************************
LOCAL ret := 0,mdat1,mdat2,mint1:=0,mint2:=0,marquivo:='',mtipo_gera:=1,marq_imp := 1
SET CENTURY ON
mdat1 := mdat2 := ctod("  /  /  ")
setcor(1)
op_tela(10,05,13,95,"Arquivo do CAT52")
setcor(3)
marquivo := +'C:\'+CURDIR()     //+'\ARQ_CAT52.TXT               '
setcor(1)
@ 0,1 SAY "Data de inicio.................: " get mdat1
@ 1,1 SAY "Data de fim....................: " get mdat2 VALID IF(EMPTY(mdat2) .OR. mdat2 < mdat1,.F.,.T.) WHEN ! EMPTY(mdat1)
@ 2,1 SAY "Caminho do arquivo de retorno..: "+marquivo
READ
IF LASTKEY() = 27
        SET CENTURY OFF
        wvw_lclosewindow()
        RETURN .T.
ENDIF
mopcao := op_simnao('N','Confirma a impressao da ARQUIVO CAT52:')
IF mopcao = 'N'
        SET CENTURY OFF
        wvw_lclosewindow()
        RETURN .T.
ENDIF
mensagem('Aguarde estar coletando dados da impressora....')
IBR_COMANDO( 'ECF.PafMF_GerarCAT52',{DTOC(mdat1),DTOC(mdat2),ALLTRIM(marquivo)},100,.T. )
marquivo := STRTRAN(marquivo,'.MFD','.TXT')
SET CENTURY OFF
wvw_lclosewindow()
IF 'S' = op_simnao('S','Deseja Editar o arquivo:')
        MYRUN('NOTEPAD '+ALLTRIM(marquivo))
ENDIF
RETURN .T.
*************************************  F I M ******************************************









