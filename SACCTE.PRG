#include "fileio.ch"
#include "commands.ch"

#define  ETX CHR(3)
#define  CR  CHR(13)
#define  LF  CHR(10)
#define ENT_TXT  'ENTNFE.TXT'
#define SAI_TXT  'SAINFE.TXT'
#define TMP_TXT  'ENTNFE.TMP'
//Static sENDER   := ''  ,;
Static SEM_ERRO := .F. ,;
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
****************************************
* IMPRIMI CONTROLE TRANSPORTE ELETRONICA
****************************************
FUNCTION saccte(m_nota,via,texto)
*********************************
LOCAL mprg:='SACCTE',;
      cComm,aret,mcons_cid:={},cons_cli:={},m_retorno:={},lin,linhas,linha,h:=0,mretorno:=' '

PRIVATE mcod_cli,mmodelo,mcod_nat1,msittrib,mdocumento,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mpag:=0,marq_sai:='',mcam_nfe:='',mchnfe:='',;
        mcfop:='',mforPag := ' ',mserie := '0',mnCT := SPACE(10),mdhEmi,mtpImp := '1',mtpEmis := '1',;
        mtpAmb := '1',mtpCTe := '0',mprocEmi := '0',mrefCTE := SPACE(44),mmodal := '01',mtpServ := '0',;
        mcMunIni := SPACE(7),mxMunIni := SPACE(60),mUFIni   := '  ',;
        mcMunfim := SPACE(7),mxMunfim := SPACE(60),mUFfim   := '  ',;
        mretira  := '1',mxDetRetira := SPACE(160),mtoma := '3',mxCaracAd := SPACE(15),mxCaracser := SPACE(15),;
        mxEmi := SPACE(20),mxOrig := SPACE(15),mxPass := SPACE(15),mxDest := SPACE(15),mxRota := SPACE(10),;
        mtpPer := '0',mdProg := CTOD('  /  /  '),mdIni := CTOD('  /  /  '),mdFim := CTOD('  /  /  '),;
        mtpHor:= '0',mhProg := SPACE(8),mhIni := SPACE(8),mhFim := SPACE(8),morigCalc := SPACE(40),;
        mdestCalc := SPACE(40),mxObs := SPACE(200),mcod_emi := 0,mcod_reme := 0,mcod_exp := 0,;
        mcod_receb := 0,mcod_dest := 0,mvTPrest := 0,mvRec := 0,mxNome := SPACE(15),mvComp := 0,;
        mCST := 0,mvBC := 0,mpICMS := 0,mvICMS := 0,mvpicms:=0,mpRedBC := 0,mvBCSTRet := 0,mvICMSSTRet := 0,;
        mpICMSSTRet := 0,mvCred := 0,mpRedBCOutraUF := 0,mvBCOutraUF := 0,mpICMSOutraUF := 0,mvICMSOutraUF := 0,;
        mcons_emi:={},mcons_rem:={},mcons_exp:={},mcons_rece:={},mcons_dest:={},mchave:=SPACE(44),mpin:=SPACE(7),;
        mcod_cid_dest:='',mcod_cid_reme:='',mnatureza:='',mdprev:=CTOD('  /  /  '),mRNTRC:=SPACE(8),;
        mcUnid:='03',mtpmed:=SPACE(20),mqCarga:=0,mqCarga:=0,mvcarga:=0,mproPred:=SPACE(60),mxOutCat:=SPACE(30),;
        mcons_reme := {},mcons_ven := {},mnum_doc:=SPACE(10),mcons_nota := {},mrela_nota:={},msoli_nota:={},;
        mrespSeg:='0',mxSeg:= SPACE(30),mnApol:= SPACE(20),mnAver:= SPACE(20),s_vCarga:=0

mensagem('INCICIANDO O CT-e Aguarde um momento....')
CLEAR GETS
op_tela(00,00,52,120,' INFORMACOES ADICIONAIS DA CONTROLE DE TRASPORTE ELETRONICA',,'*')
marq_sai := "C:\ACBrNFeMonitor\SAINFE.TXT"
WHILE .T.
        exibi_prg(mprg)
        mcons_cid := {}
        sr_getconnection():exec("SELECT * FROM saccid WHERE cidade = "+sr_cdbvalue(RTRIM(m_set[1,134]))+" AND uf = "+sr_cdbvalue(RTRIM(m_set[1,19])),,.t.,@mcons_cid)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(mcons_cid) = 0 .OR. EMPTY(mcons_cid[1,1])
                atencao('Nao e Possivel a emissao desta CTE pois o codigo da cidade da EMPRESA EMITENTE ** '+RTRIM(m_set[1,134])+'-'+RTRIM(m_set[1,19])+' nao estar cadastrado !!!!')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mcod_cid_emit := mcons_cid[1,1]

        mcfop := SPACE(5)
        mnatureza := SPACE(60)
        mforPag := '0'
        mserie := '000'
        mnCT := SPACE(10)
        mdhEmi := mdata_sis
        mtpImp := '1'
        mtpEmis := '1'
        mtpAmb := '1'
        mtpCTe := '0'
        mprocEmi := '0'
        mrefCTE := SPACE(44)
        mmodal := '01'
        mtpServ := '0'
        mcMunIni := SPACE(7)
        mxMunIni := SPACE(60)
        mUFIni   := '  '
        mcMunfim := SPACE(7)
        mxMunfim := SPACE(60)
        mUFfim   := '  '
        mretira  := '1'
        mxDetRetira := SPACE(160)
        mtoma := '3'
        mxCaracAd := SPACE(15)
        mxCaracser := SPACE(15)
        mxEmi := SPACE(20)
        mxOrig := SPACE(15)
        mxPass := SPACE(15)
        mxDest := SPACE(15)
        mxRota := SPACE(10)
        mtpPer := '0'
        mdProg := CTOD('  /  /  ')
        mdIni := CTOD('  /  /  ')
        mdFim := CTOD('  /  /  ')
        mtpHor:= '0'
        mhProg := SPACE(8)
        mhIni := SPACE(8)
        mhFim := SPACE(8)
        morigCalc := SPACE(40)
        mdestCalc := SPACE(40)
        mxObs := SPACE(200)
        mcod_emi := 0
        mcod_reme := 0
        mcod_exp := 0
        mcod_receb := 0
        mcod_dest := 0
        mvTPrest := 0
        mvRec := 0
        mxNome := SPACE(15)
        mvComp := 0
        mCST := 0
        mvBC := 0
        mvpicms := 0
        mpICMS := 0
        mvICMS := 0
        mpRedBC := 0
        mvBCSTRet := 0
        mvICMSSTRet := 0
        mpICMSSTRet := 0
        mvCred := 0
        mpRedBCOutraUF := 0
        mvBCOutraUF := 0
        mpICMSOutraUF := 0
        mvICMSOutraUF := 0
        mindSN := IF(m_set[1,126] = 'S','1','2')
        mvTotTrib := 0
        minfAdFisco := SPACE(1000)
        mchave:=SPACE(44)
        mpin:=SPACE(7)
        mdprev:=CTOD('  /  /  ')
        mRNTRC:=SPACE(8)
        mcUnid:='03'
        mtpmed:=SPACE(20)
        mqCarga:=0
        mqCarga:=0
        mvcarga:=0
        mproPred:=SPACE(60)
        mxOutCat:=SPACE(30)
        mrespSeg:='3'
        mxSeg:= SPACE(30)
        mnApol:= SPACE(20)
        mnAver:= SPACE(20)
        s_vCarga:=0
        SET CENTURY ON
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'M'
****************************************************
        //DEVPOS(18,00);DEVOUT('Caracteristica adicional do TRANSPORTE.....:')
        //DEVPOS(19,00);DEVOUT('Caracteristica adicional do SERVICO........:')
        //DEVPOS(21,00);DEVOUT('Sigla/Codigo int. da Filial/Porto/Estacao/Aeroporto de Origem...:')
        //DEVPOS(22,00);DEVOUT('Sigla/Codigo int. da Filial/Porto/Estacao/Aeroporto de Passagem.:')
        //DEVPOS(23,00);DEVOUT('Sigla/Codigo int. da Filial/Porto/Estacao/Aeroporto de Destino..:')
        //DEVPOS(24,00);DEVOUT('Codigo da Rota de Entrega.......................................:')
        //DEVPOS(25,00);DEVOUT('Tipo de data/periodo programado para entrega:  [0]Sem data definida [1]Na data [2]Ate a data [3]A partir da data [4]No periodo')
        //DEVPOS(25,00);DEVOUT('Data programada:')
        //DEVPOS(25,00);DEVOUT('Data inicial:')
        //DEVPOS(25,00);DEVOUT('Data final:')
        //DEVPOS(26,00);DEVOUT('Tipo de hora:   [0]Sem hora definida [1]No horario [2]Ate o horario [3]A partir do horario [4]No intervalo de tempo')
        //DEVPOS(26,00);DEVOUT('Hora programada:')
        //DEVPOS(26,00);DEVOUT('Hora Inicial:')
        //DEVPOS(26,00);DEVOUT('Hora Final:')
        setcor(3)
        DEVPOS(00,01);DEVOUT('          þ IDENTIFICACAO DO CT-e') //DEVPOS(01,01);DEVOUT('Codigo da UF.....:')
        setcor(1)
        DEVPOS(01,00);DEVOUT('Codigo do CFOP.............................:')
        DEVPOS(02,00);DEVOUT('Forma pagamento............................:   [0]Pago [1]Apagar [2]Outros')
        DEVPOS(03,00);DEVOUT('Serie do CT-e..............................:')
        DEVPOS(04,00);DEVOUT('Impressão DACTE............................:   [1]Retrato [2]Paisagem')
        DEVPOS(05,00);DEVOUT('Forma emissão CT-e.........................:   [1]Normal [4]EPEC pela SVC [5]Contingência FSDA [7]Auto. p/SVC-RS [8]Auto. p/SVC-SP')
        DEVPOS(06,00);DEVOUT('Tipo do Ambiente...........................:   [1]Producao [2]Homologacao')
        DEVPOS(07,00);DEVOUT('Tipo do CT-e...............................:   [0]CT-e Normal [1]CT-e de Compl.Valores [2]CT-e Anulacao [3]CT-e Substituto')
        DEVPOS(08,00);DEVOUT('Chave acesso CT-e referenciado.............:')
        DEVPOS(09,00);DEVOUT('Modal......................................:   [01]Rodoviario [02]Aereo [03]Aquaviario [04]Ferroviario [05]Dutoviario [06]Multimodal')
        DEVPOS(10,00);DEVOUT('Tipo do Servico............................:   [0]Normal [1]Subcontratacao [2]Redespacho [3]Redespacho Interm.[4]Serv.Vinculado Multimodal')
        DEVPOS(11,00);DEVOUT('Indicador se Recebedor retira 0-Sim 1-Nao..:         (Aeroporto, Filial, Porto ou Estacao de Destino)')
        DEVPOS(12,00);DEVOUT('Detalhes da Retira.........................:')
        DEVPOS(13,00);DEVOUT('Tomador do Servico.........................:   [0]Remetente [1]Expedidor [2]Recebedor [3]Destinatario')
        DEVPOS(14,00);DEVOUT('Funcionario emissor do CTe.................:')
        DEVPOS(17,00);DEVOUT('Codigo Municipio de inicio da prestacao....:')
        DEVPOS(18,00);DEVOUT('Codigo Municipio de termino da prestacao...:')
        DEVPOS(19,00);DEVOUT('Municipio ORIGEM efeito de calculo frete...:')
        DEVPOS(20,00);DEVOUT('Municipio DESTINO efeito de calculo frete..:')
        DEVPOS(21,00);DEVOUT('Observacoes Gerais.........................:')
        setcor(3)
        DEVPOS(22,00);DEVOUT('          þ INFORMACOES -> RODOVIARIO / SEGUROS / CARGAS')
        setcor(1)
        DEVPOS(23,00);DEVOUT('RNTRC......................................:')
        DEVPOS(24,00);DEVOUT('Data prevista p/entrega carga no Recebedor.:')
        DEVPOS(25,00);DEVOUT('Valor da Carga.............................:')
        DEVPOS(26,00);DEVOUT('Produto Predominante.......................:')
        DEVPOS(27,00);DEVOUT('Outras caracteristicas da carga............:')
        DEVPOS(28,00);DEVOUT('Código da Unidade de Medida................:   00-M3 01-KG 02-TON 03-UNIDADE 04-LITROS 05-MMBTU')
        DEVPOS(29,00);DEVOUT('Tipo da Medida.............................:')
        DEVPOS(30,00);DEVOUT('Quantidade.................................:')
        DEVPOS(31,00);DEVOUT('Responsavel pelo SEGURO....................:  0-Remetente 1-Expedidor 2-Recebedor 3-Destinatario 4-Emitente CT-e ou 5-Tomador serviço)')
        DEVPOS(32,00);DEVOUT('Nome da Seguradora.........................:')
        DEVPOS(33,00);DEVOUT('Numero da Apolice..........................:')
        //DEVPOS(34,00);DEVOUT('Numero da Averbacao........................:')
        //DEVPOS(34,00);DEVOUT('Valor da Carga para efeito de AVERBACAO....:')
        setcor(3)
        DEVPOS(36,00);DEVOUT('          þ VALORES DA PRESTACAO DE SERVICO')
        setcor(1)
        DEVPOS(37,00);DEVOUT('Valor Total da Prestacao do Servico........:')
        DEVPOS(38,00);DEVOUT('Valor a Receber............................:')
        DEVPOS(39,00);DEVOUT('Nome do componente.........................:')
        DEVPOS(40,00);DEVOUT('Valor do componente........................:')
        setcor(3)
        DEVPOS(42,00);DEVOUT('          þ INFORMACOES RELATIVAS DOS IMPOSTOS ICMS')
        DEVPOS(48,00);DEVOUT('          þ RELACAO DAS NFe')
        setcor(1)
        DEVPOS(49,00);DEVOUT('Numero da NF-e.............................:')
        DEVPOS(50,00);DEVOUT('Chave de acesso da NF-e....................:')
        DEVPOS(51,00);DEVOUT('PIN SUFRAMA................................:')

                mensagem('INCICIANDO O ACBR Aguarde um momento....')
                IF ! IBR_INIT(ALLTRIM(m_indiv[1,43]))
                        atencao('Nao e possivel INICIALIZAR o ACBRNFEMONITOR pelo TCP-IP, verificar se estar instalado...')
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                mensagem('ATIVANDO O ACBR Aguarde um momento....')
                IF ! IBR_OK( IBR_COMANDO( 'CTE.Ativo',,25))
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                mensagem('Verificando STATUS DO SERVICO CTe Aguarde um momento....')
                IF ! IBR_OK(IBR_comando('CTE.STATUSSERVICO',,30))
                        //wvw_lclosewindow();RETURN NIL
                ENDIF
        mcons_ven := {}
        sr_getconnection():exec("SELECT * FROM insopera WHERE scod_op = "+sr_cdbvalue(cod_operado),,.t.,@mcons_ven)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(mcons_ven) > 0
                mxEmi := mcons_ven[1,2]
        ENDIF
        mcons_cid := {}
        sr_getconnection():exec("SELECT * FROM saccid WHERE cidade = "+sr_cdbvalue(RTRIM(m_set[1,134]))+" AND uf = "+sr_cdbvalue(RTRIM(m_set[1,19])),,.t.,@mcons_cid)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(mcons_cid) = 0 .OR. EMPTY(mcons_cid[1,1])
                atencao('Nao e Possivel a emissao desta nota pois o codigo da cidade da EMPRESA EMITENTE ** '+RTRIM(m_set[1,134])+'-'+RTRIM(m_set[1,19])+' nao estar cadastrado !!!!')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mcod_cid_emit := mcons_cid[1,1]
        mcMunIni := mcons_cid[1,1]
        mxMunIni:=RTRIM(m_set[1,134])
        mUFIni := RTRIM(m_set[1,19])
        morigCalc := mcons_cid[1,1]
        @ 01,44 GET mcfop PICT '9.999' VALID IF(EMPTY(mcfop),.F.,ver_nat(mcfop))
        @ 01,51 GET mnatureza PICT '@!'
        @ 02,44 GET mforPag PICT '9' VALID mforPag $ '0,1,2'
        @ 03,44 GET mserie PICT '@!'
        @ 04,44 GET mtpImp PICT '9' VALID mtpImp $ '1,2'
        @ 05,44 GET mtpEmis PICT '9' VALID mtpEmis $ '1,4,5,7,8'
        @ 06,44 GET mtpAmb PICT '9' VALID mtpAmb $ '1,2'
        @ 07,44 GET mtpCTe PICT '9' VALID mtpCTe $ '0,1,2,3'
        @ 08,44 GET mrefCTE PICT '@!'
        @ 09,44 GET mmodal PICT '99' VALID mmodal $ '01,02,03,04,05,06'
        @ 10,44 GET mtpServ PICT '9' VALID mtpServ $ '0,1,2,3,4'
        @ 11,44 GET mretira PICT '9' VALID mretira $ '0,1'
        @ 12,44 GET mxDetRetira PICT '@S60'
        @ 13,44 GET mtoma PICT '9' VALID mtoma $ '0,1,2,3'
        READ
        IF LASTKEY() = 27
	        wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF mtoma = '0'
                DEVPOS(15,00);DEVOUT('Codigo R E M E T E N T E...................:')
                DEVPOS(16,00);DEVOUT('Razão Social...............................:')
        ELSEIF mtoma = '1'
                DEVPOS(15,00);DEVOUT('Codigo EXPEDITOR da Carga:')
                DEVPOS(16,00);DEVOUT('Razão Social....:')
        ELSEIF mtoma = '2'
                DEVPOS(15,00);DEVOUT('Codigo RECEBEDOR da Carga:')
                DEVPOS(16,00);DEVOUT('Razão Social....:')
        ELSEIF mtoma = '3'
                DEVPOS(15,00);DEVOUT('Codigo DESTINATARIO do CT-e................:')
                DEVPOS(16,00);DEVOUT('Razão Social...............................:')
        ENDIF
        //@ 18,44 GET mxCaracAd PICT '@!'
        //@ 19,44 GET mxCaracser PICT '@!'
        //@ 21,44 GET mxOrig PICT '@!'
        //@ 22,44 GET mxPass PICT '@!'
        //@ 23,44 GET mxDest PICT '@!'
        //@ 24,44 GET mxRota PICT '@!'
        //@ 25,44 GET mtpPer PICT '@!' VALID mtpPer $ '0,1,2,3,4'
        //@ 25,44 GET mdProg
        //@ 25,44 GET mdIni
        //@ 25,44 GET mdFim
        //@ 26,44 GET mtpHor PICT '@!' VALID mtpHor $ '0,1,2,3,4'
        //@ 26,44 GET mhProg PICT '99:99:99'
        //@ 26,44 GET mhIni PICT '99:99:99'
        //@ 26,44 GET mhFim PICT '99:99:99'

        @ 14,44 GET mxEmi PICT '@!'
        READ
        IF LASTKEY() = 27
	        wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF mtoma = '0'
                mcod_reme := f7_cli()
                IF ! EMPTY(mcod_reme)
                        mcons_reme := {}
                        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(STRZERO(mcod_reme,5)),,.t.,@mcons_reme)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(mcons_reme) = 0
                                atencao('Nao e Possivel encontrar este REMETENTE !!!!')
                                LOOP
                        ENDIF
                        setcor(3)
                        DEVPOS(15,44);DEVOUT(mcons_reme[1,2])
                        DEVPOS(16,44);DEVOUT(mcons_reme[1,3])
                        setcor(1)
                        m_email := mcons_reme[1,27]
                        mcons_cid := {}
                        sr_getconnection():exec("SELECT * FROM saccid WHERE (cidade = "+sr_cdbvalue(RTRIM(mcons_reme[1,24]))+"OR cidade IS NULL) AND uf = "+sr_cdbvalue(RTRIM(mcons_reme[1,25])),,.t.,@mcons_cid)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(mcons_cid) = 0 .OR. EMPTY(mcons_cid[1,1])
                                atencao('Nao e Possivel a emissao desta nota pois o codigo da cidade do CLIENTE nao estar cadastrado !!!!')
                                LOOP
                        ENDIF
                        mcod_cid_reme := mcMunFim := mdestCalc := mcons_cid[1,1]
                        mxMunFim:=RTRIM(mcons_reme[1,24])
                        mUFFim := RTRIM(mcons_reme[1,25])
                ENDIF
        ELSEIF mtoma = '1'
                mcod_exp := f7_cli()
                IF ! EMPTY(mcod_exp)
                        mcons_exp := {}
                        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_exp),,.t.,@mcons_exp)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(mcons_exp) = 0
                                atencao('Nao e Possivel encontrar este EXPEDITOR !!!!')
                                LOOP
                        ENDIF
                        setcor(3)
                        DEVPOS(15,44);DEVOUT(mcons_exp[1,2])
                        DEVPOS(16,44);DEVOUT(mcons_exp[1,3])
                        setcor(1)
                        m_email := mcons_exp[1,27]
                        mcons_cid := {}
                        sr_getconnection():exec("SELECT * FROM saccid WHERE (cidade = "+sr_cdbvalue(RTRIM(mcons_exp[1,24]))+"OR cidade IS NULL) AND uf = "+sr_cdbvalue(RTRIM(mcons_exp[1,25])),,.t.,@mcons_cid)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(mcons_cid) = 0 .OR. EMPTY(mcons_cid[1,1])
                                atencao('Nao e Possivel a emissao desta nota pois o codigo da cidade do CLIENTE nao estar cadastrado !!!!')
                                LOOP
                        ENDIF
                        mcod_cid_dest := mcMunFim := mdestCalc := mcons_cid[1,1]
                        mxMunFim:=RTRIM(mcons_exp[1,24])
                        mUFFim := RTRIM(mcons_exp[1,25])
                ENDIF
        ELSEIF mtoma = '2'
                mcod_receb := f7_cli()
                IF ! EMPTY(mcod_receb)
                        mcons_receb := {}
                        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_exp),,.t.,@mcons_receb)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(mcons_receb) = 0
                                atencao('Nao e Possivel encontrar este RECEBEDOR !!!!')
                                LOOP
                        ENDIF
                        setcor(3)
                        DEVPOS(15,44);DEVOUT(mcons_receb[1,2])
                        DEVPOS(16,44);DEVOUT(mcons_receb[1,3])
                        setcor(1)
                        m_email := mcons_receb[1,27]
                        mcons_cid := {}
                        sr_getconnection():exec("SELECT * FROM saccid WHERE (cidade = "+sr_cdbvalue(RTRIM(mcons_receb[1,24]))+"OR cidade IS NULL) AND uf = "+sr_cdbvalue(RTRIM(mcons_receb[1,25])),,.t.,@mcons_cid)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(mcons_cid) = 0 .OR. EMPTY(mcons_cid[1,1])
                                atencao('Nao e Possivel a emissao desta nota pois o codigo da cidade do CLIENTE nao estar cadastrado !!!!')
                                LOOP
                        ENDIF
                        mcod_cid_dest := mcMunFim := mdestCalc := mcons_cid[1,1]
                        mxMunFim:=RTRIM(mcons_receb[1,24])
                        mUFFim := RTRIM(mcons_receb[1,25])
                ENDIF
        ELSEIF mtoma = '3'
                mcod_dest := f7_cli()
                IF ! EMPTY(mcod_dest)
                        mcons_dest := {}
                        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(STRZERO(mcod_dest,5)),,.t.,@mcons_dest)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(mcons_dest) = 0
                                atencao('Nao e Possivel encontrar este DESTINATARIO !!!!')
                                LOOP
                        ENDIF
                        setcor(3)
                        DEVPOS(15,44);DEVOUT(mcons_dest[1,2])
                        DEVPOS(16,44);DEVOUT(mcons_dest[1,3])
                        setcor(1)
                        m_email := mcons_dest[1,27]
                        mcons_cid := {}
                        sr_getconnection():exec("SELECT * FROM saccid WHERE (cidade = "+sr_cdbvalue(RTRIM(mcons_dest[1,24]))+"OR cidade IS NULL) AND uf = "+sr_cdbvalue(RTRIM(mcons_dest[1,25])),,.t.,@mcons_cid)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(mcons_cid) = 0 .OR. EMPTY(mcons_cid[1,1])
                                atencao('Nao e Possivel a emissao desta nota pois o codigo da cidade do CLIENTE nao estar cadastrado !!!!')
                                LOOP
                        ENDIF
                        mcod_cid_dest := mcMunFim := mdestCalc := mcons_cid[1,1]
                        mxMunFim:=RTRIM(mcons_dest[1,24])
                        mUFFim := RTRIM(mcons_dest[1,25])
                ENDIF
        ENDIF
        @ 17,44 GET mcMunIni PICT '@!'
        @ 18,44 GET mcMunFim PICT '@!'
        @ 19,44 GET morigCalc PICT '@!'
        @ 20,44 GET mdestCalc PICT '@!'
        @ 21,44 GET mxObs PICT '@S60'
        @ 23,44 GET mRNTRC
        @ 24,44 GET mdprev
        @ 25,44 GET mvCarga PICT '9,999,999.99'
        @ 26,44 GET mproPred PICT '@!' VALID IF(EMPTY(mproPred),.F.,.T.)
        @ 27,44 GET mxOutCat PICT '@!'
        @ 28,44 GET mcUnid PICT '99' VALID mcUnid $ '00,01,02,03,04,05'
        @ 29,44 GET mtpMed PICT '@!'  VALID IF(EMPTY(mtpMed),.F.,.T.) .AND. lim_get() WHEN men_get(0,0,'Exemplos: PESO BRUTO, PESO DECLARADO, PESO CUBADO, PESO AFORADO, PESO AFERIDO, PESO BASE DE CÁLCULO, LITRAGEM, CAIXAS e etc')
        @ 30,44 GET mqCarga PICT '9,999,999.9999'
        @ 31,44 GET mrespSeg PICT '9' VALID mrespSeg $ '0,1,2,3,4,5'
        @ 32,44 GET mxSeg
        @ 33,44 GET mnApol
        //@ 34,44 GET s_vCarga PICT '9,999,999.99'
        //@ 34,44 GET mnAver


        @ 37,44 GET mvTPrest PICT '9,999,999.99'
        @ 38,44 GET mvRec PICT '9,999,999.99'
        @ 39,44 GET mxNome PICT '@!'
        @ 40,44 GET mvComp PICT '9,999,999.99'
        READ
        mCST := saccst()
        IF SUBSTR(mCST,2) = '00'
                DEVPOS(43,00);DEVOUT('Valor da BASE DE CALCULO...................:')
                DEVPOS(44,00);DEVOUT('Aliquota do ICMS...........................:')
                DEVPOS(45,00);DEVOUT('Valor do ICMS..............................:')
                @ 43,44 GET mvBC PICT '9,999,999.999'
                @ 44,44 GET mpICMS PICT '9,999,999.999'
                @ 45,44 GET mvICMS PICT '9,999,999.999'
                READ
        ELSEIF SUBSTR(mCST,2) = '20'
                DEVPOS(43,00);DEVOUT('Percentual Reducao BASE DE CALCULO.........:')
                DEVPOS(44,00);DEVOUT('Valor da BASE DE CALCULO...................:')
                DEVPOS(45,00);DEVOUT('Aliquota do ICMS...........................:')
                DEVPOS(46,00);DEVOUT('Valor do ICMS..............................:')
                @ 43,44 GET mpRedBC PICT '9,999,999.999'
                @ 44,44 GET mvBC PICT '9,999,999.999'
                @ 45,44 GET mpICMS PICT '9,999,999.999'
                @ 46,44 GET mvICMS PICT '9,999,999.999'
                READ
        ELSEIF SUBSTR(mCST,2) = '60'
                DEVPOS(43,00);DEVOUT('Valor da BASE CALCULO do ICMS ST retido....:')
                DEVPOS(44,00);DEVOUT('Valor do ICMS ST retido....................:')
                DEVPOS(45,00);DEVOUT('Aliquota do ICMS...........................:')
                DEVPOS(46,00);DEVOUT('Valor do Credito outorgado/Presumido.......:')
                @ 43,44 GET mvBCSTRet PICT '9,999,999.999'
                @ 44,44 GET mvICMSSTRet PICT '9,999,999.999'
                @ 45,44 GET mpICMSSTRet PICT '9,999,999.999'
                @ 46,44 GET mvCred PICT '9,999,999.999'
                READ
        ELSEIF SUBSTR(mCST,2) = '90' .AND. mcons_emi[1,25] <> muf_firm
                DEVPOS(43,00);DEVOUT('Percentual de reducao da BASE CALCULO......:')
                DEVPOS(44,00);DEVOUT('Valor da BASE DE CALCULO...................:')
                DEVPOS(45,00);DEVOUT('Aliquota do ICMS...........................:')
                DEVPOS(46,00);DEVOUT('Valor do ICMS devido outra UF..............:')
                @ 43,44 GET mpRedBCOutraUF PICT '9,999,999.999'
                @ 44,44 GET mvBCOutraUF PICT '9,999,999.999'
                @ 45,44 GET mpICMSOutraUF PICT '9,999,999.999'
                @ 46,44 GET mvICMSOutraUF PICT '9,999,999.999'
                READ
        ELSEIF SUBSTR(mCST,2) = '90'
                DEVPOS(43,00);DEVOUT('Percentual Reducao BASE DE CALCULO.........:')
                DEVPOS(44,00);DEVOUT('Valor da BASE DE CALCULO...................:')
                DEVPOS(45,00);DEVOUT('Aliquota do ICMS...........................:')
                DEVPOS(46,00);DEVOUT('Valor do ICMS..............................:')
                DEVPOS(46,00);DEVOUT('Valor do Credito outorgado/Presumido.......:')
                @ 43,44 GET mpRedBC PICT '9,999,999.999'
                @ 44,44 GET mvBC PICT '9,999,999.999'
                @ 45,44 GET mpICMS PICT '9,999,999.999'
                @ 46,44 GET mvICMS PICT '9,999,999.999'
                @ 47,44 GET mvCred PICT '9,999,999.999'
                READ

        ENDIF
        IF mindSN = '1'
                op_tela(10,10,12,100,'Simples Nacional',,'1')
                DEVPOS(0,0);DEVOUT('Valor tributos federais, estaduais e municipais:')
                DEVPOS(1,0);DEVOUT('Informacoes adicionais de interesse do Fisco...:')
                @ 0,44 GET mvTotTrib PICT '9,999,999.999'
                @ 1,44 GET minfAdFisco PICT '@S60'
                READ
	        wvw_lclosewindow()
        ENDIF
        mrela_nota:={}
        msoli_nota:={}
        WHILE .T.
                botao(30,90,51,119)
                DEVPOS(30,90);DEVOUT('    NOTAS SOLICITADAS   ')
                mqtd_lin := 0
                f :=30
                IF LEN(mrela_nota) > 20
                        mqtd_lin := LEN(mrela_nota) - 30
                ENDIF
                f++
                @ f,90 SAY ''
                WVW_DrawLabel(,f,COL(),' No. NFe      Chave de acesso',,,,, 'terminal',13,4,,,,,)
                f++
                WVW_DrawLabel(,f,COL(),REPLI(CHR(223),29),,,,, 'terminal',13,4,,,,,)
                FOR i = 1 TO LEN(mrela_nota)
                        SETCOLOR('W/b,W/b')
                        IF mqtd_lin < i
                                @ 1+f,90 SAY ''
                                WVW_DrawLabel(,1+f,COL()+1,mrela_nota[i,3]+'  '+mrela_nota[i,1],,,,, 'terminal',13,4,,,,,)
                                f++
                        ENDIF
                NEXT
                setcor(1)
                mnum_doc:=SPACE(10)
                mchave:=SPACE(44)
                mpin:=SPACE(7)
                DEVPOS(50,44);DEVOUT(mchave)
                @ 49,44 GET mnum_doc PICT '9999999999'
                READ
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                IF ASCAN(msoli_nota,mnum_doc) > 0
                        atencao('Ja foi solicitada estar NFe de No.: '+mnum_doc)
                        LOOP
                ENDIF
                IF ! EMPTY(mnum_doc)
                        mcons_nota := {}
                        sr_getconnection():exec("SELECT * FROM sactotnt WHERE documento = "+sr_cdbvalue('NF'+RTRIM(mnum_doc))+" AND ent_sai = 'S'",,.t.,@mcons_nota)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(mcons_nota) > 0
                                mchave := mcons_nota[1,45]
                        ENDIF
                ENDIF
                @ 50,44 GET mchave PICT '@!' WHEN EMPTY(mchave)
                @ 51,44 GET mpin
                READ
                IF op_simnao('S','Confirma a NFe:') = 'S' .AND. ! EMPTY(mchave)
                        AADD(msoli_nota,mnum_doc)
                        AADD(mrela_nota,{mchave,mpin,mnum_doc})
                ENDIF
        ENDDO
        opcao := op_simnao('S','Confirma as Informacoes da CTe:')
        IF opcao = 'N'
	        wvw_lclosewindow()
                RETURN NIL
        ENDIF
        aret:={}
        lExit := .T.
        while lExit
                sr_begintransaction()
                try
                        sr_getconnection():exec( "select numero from  sacnocte where sr_recno = 1 for update with lock",,.t.,@aret)
                        if len(aRet)  == 0
                                sr_getconnection():exec("insert into sacnocte (numero,sr_deleted,sr_recno) values (" + sr_cdbvalue(strzero(1,6) ) + ",' ',1)",,.f.)
                                mdocumento = STRZERO(1,6)
                        else
                                mdocumento = STRZERO(VAL(aret[1,1])+1,6)
                                mnum = strzero(VAL(aret[1,1])+1,6)
                                sr_getconnection():exec("update sacnocte set numero = " + sr_cdbvalue(mnum) + " where sr_recno = 1 ",,.f.)
                        endif
                        sr_committransaction()
                        lExit:=.F.
                catch e
                        tracelog(valtoprg())
                        sr_COMMITtransaction()
                end
                sr_endtransaction()
        end
        sr_getconnection():exec("COMMIT",,.f.)
        mprg := ALLTRIM(STR(VAL(mdocumento)))
        atencao('Foi Gerada a CONTROLE DE TRASPORTE No.: '+mdocumento)
        m_set[1,135] := STRTRAN(m_set[1,135],'-','')
        m_set[1,135] := STRTRAN(m_set[1,135],'.','')

        //cons_cli[1,26] := STRTRAN(cons_cli[1,26],'-','')
        //cons_cli[1,26] := STRTRAN(cons_cli[1,26],'.','')

        //ATENCAO(ALLTRIM(mrefnfe) )
        mensagem('CRIANDO a CTE No. '+mdocumento)
        IF EMPTY(m_indiv[1,43])
                sLinhas     :=  'CTe.CriarCTe("[Ide]'                  + m_qp
        ELSE
                sLinhas     :=  '[Ide]'                  + m_qp
        ENDIF
        m_set[1,135] := STRTRAN(m_set[1,135],'-','')
        m_set[1,135] := STRTRAN(m_set[1,135],'.','')
        //cons_cli[1,26] := STRTRAN(cons_cli[1,26],'-','')
        //cons_cli[1,26] := STRTRAN(cons_cli[1,26],'.','')
        sLinhas := sLinhas + 'cUF='+ver_estado(ALLTRIM(muf_firm))      + m_qp + ;
                        'cCT='+mdocumento+STRZERO(mcod_reme,5)         + m_qp + ;
                        'CFOP='+STRTRAN(mcfop,'.','')                  + m_qp + ;
                        'natOp='+ALLTRIM(mnatureza)                    + m_qp + ;
                        'forPag='+ALLTRIM(mforPag)                     + m_qp + ;
                        'mod=57'                                       + m_qp + ;
                        'serie='+mserie                                + m_qp + ;
                        'nCT='+mdocumento                              + m_qp + ;
                        'dhEmi='+DTOC(mdata_sis)                       + m_qp + ;
                        'tpImp='+mtpImp                                + m_qp + ;
                        'tpemis='+mtpemis                              + m_qp + ;
                        'tpAmb='+mtpAmb                                + m_qp + ;
                        'tpCTe='+mtpCTe                                + m_qp + ;
                        'procEmi='+ALLTRIM(mprocEmi)                   + m_qp + ;  //'verProc='                                     + m_qp + ;
                        'cMunEnv='+mcod_cid_emit                       + m_qp + ;
                        'xMunEnv='+RTRIM(m_set[1,134])                 + m_qp + ;
                        'UFEnv='+RTRIM(m_set[1,19])                    + m_qp + ;
                        'modal='+mmodal                                + m_qp + ;
                        'tpServ='+mtpServ                              + m_qp + ;
                        'cMunIni='+mcMunIni                            + m_qp + ;
                        'xMunIni='+mxMunIni                            + m_qp + ;
                        'UFIni='+mUFIni                                + m_qp + ;
                        'cMunFim='+mcMunFim                            + m_qp + ;
                        'xMunFim='+mxMunFim                            + m_qp + ;
                        'UFFim='+mUFFim                                + m_qp + ;
                        'retira='+mretira                              + m_qp + ;
                        'xDetRetira='+mxDetRetira                       + m_qp + ;
                        '[compl]'                                      + m_qp + ;
                        'xCaracAd='+mxCaracAd                          + m_qp + ;
                        'xCaracSer='+mxCaracSer                        + m_qp + ;
                        'xEmi='+mxEmi                                  + m_qp + ;
                        '[fluxo]'                                      + m_qp + ;
                        'xOrig='+mxOrig                                + m_qp + ;
                        '[emit]'                                        + m_qp + ;
                        'CNPJ='+SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2)+ m_qp + ;
                        'IE='+ALLTRIM(m_set[1,128])                    + m_qp + ;
                        'xNome='+ALLTRIM(m_set[1,129])                 + m_qp + ;
                        'xFant='+ALLTRIM(m_set[1,130])                 + m_qp + ;
                        'xLgr='+ALLTRIM(m_set[1,132])                  + m_qp + ;
                        'nro='+ALLTRIM(m_set[1,160])                   + m_qp + ;
                        'xCpl='+ALLTRIM(m_set[1,161])                  + m_qp + ;
                        'xBairro='+ALLTRIM(m_set[1,133])               + m_qp + ;
                        'cMun='+ALLTRIM(mcod_cid_emit)                 + m_qp + ;
                        'xMun='+ALLTRIM(m_set[1,134])                  + m_qp + ;
                        'CEP='+ALLTRIM(m_set[1,135])                   + m_qp + ;
                        'UF='+ALLTRIM(m_set[1,19])                     + m_qp + ;
                        'fone='+ALLTRIM(m_set[1,136])                  + m_qp
                        IF mtpServ # '3'
                                sLinhas := sLinhas + '[rem]'                   + m_qp + ;
                                'CNPJCPF='+SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2)  + m_qp + ;
                                'IE='  +ALLTRIM(m_set[1,128])                  + m_qp + ;
                                'xNome='+ALLTRIM(m_set[1,129])                + m_qp + ;
                                'xFant='+ALLTRIM(m_set[1,130])                + m_qp + ;
                                'fone='+ALLTRIM(m_set[1,136])                  + m_qp + ;
                                'xLgr='+ALLTRIM(m_set[1,132])                  + m_qp + ;
                                'nro='+ALLTRIM(m_set[1,160])                   + m_qp + ;
                                'xCpl='+ALLTRIM(m_set[1,161])                  + m_qp + ;
                                'xBairro='+ALLTRIM(m_set[1,133])               + m_qp + ;
                                'cMun='+ALLTRIM(mcod_cid_emit)                 + m_qp + ;
                                'xMun='+ALLTRIM(m_set[1,134])                  + m_qp + ;
                                'CEP='+ALLTRIM(m_set[1,135])                   + m_qp + ;
                                'UF='+ALLTRIM(m_set[1,19])                     + m_qp
                        ENDIF
                        i:=0
                        FOR i = 1 TO LEN(mrela_nota)
                                sLinhas := sLinhas + '[infNFe'+STRZERO(i,3)+']' + m_qp + ;
                                'chave='+ALLTRIM(mrela_nota[i,1])      + m_qp + ;
                                'PIN='+ALLTRIM(mrela_nota[i,2])        + m_qp
                        NEXT
                        sLinhas := sLinhas + '[toma'+mtoma+']'         + m_qp + ;
                        'toma='+mtoma                                  + m_qp
                        IF mtoma = '0'
                                sLinhas := sLinhas + '[rem]'                    + m_qp + ;
                                'CNPJCPF='+IF(! EMPTY(mcons_reme[1,32]),ALLTRIM(mcons_reme[1,32]),ALLTRIM(mcons_reme[1,34]))  + m_qp + ;
                                'IE='  +ALLTRIM(mcons_reme[1,33])               + m_qp + ;
                                'xNome='+ALLTRIM(mcons_reme[1,3])               + m_qp + ;
                                'xFant='+ALLTRIM(mcons_reme[1,4])               + m_qp + ;
                                'fone='+ALLTRIM(mcons_reme[1,29])               + m_qp + ;
                                'xLgr='+ALLTRIM(mcons_reme[1,21])               + m_qp + ;
                                'nro='+ALLTRIM(mcons_reme[1,136])               + m_qp + ;
                                'xCpl='+ALLTRIM(mcons_reme[1,137])              + m_qp + ;
                                'xBairro='+ALLTRIM(mcons_reme[1,22])            + m_qp + ;
                                'cMun='+mcod_cid_reme                          + m_qp + ;
                                'xMun='+ALLTRIM(mcons_reme[1,24])               + m_qp + ;
                                'CEP='+ALLTRIM(mcons_reme[1,26])                + m_qp + ;
                                'UF='+ALLTRIM(mcons_reme[1,25])                 + m_qp + ;
                                'cPais=BRASIL'                                 + m_qp + ;
                                'xPais=1058'                                   + m_qp + ;
                                'email='+ALLTRIM(mcons_reme[1,27])             + m_qp
                        ELSEIF mtoma = '1'
                        ELSEIF mtoma = '2'
                        ELSEIF mtoma = '3'
                                sLinhas := sLinhas + '[dest]'                   + m_qp + ; //IF(! EMPTY(ALLTRIM(mcons_dest[1,32])),'CNPJ='+ALLTRIM(mcons_dest[1,32])+ m_qp +'IE='  +ALLTRIM(mcons_dest[1,33]),'CPF=' +ALLTRIM(mcons_dest[1,34]))  + m_qp + ;
                                'CNPJCPF='+IF(! EMPTY(mcons_dest[1,32]),ALLTRIM(mcons_dest[1,32]),ALLTRIM(mcons_dest[1,34]))  + m_qp + ;
                                'IE='  +ALLTRIM(mcons_dest[1,33])               + m_qp + ;
                                'xNome='+ALLTRIM(mcons_dest[1,3])               + m_qp + ;
                                'fone='+ALLTRIM(mcons_dest[1,29])               + m_qp + ;
                                'ISUF='                                        + m_qp + ;
                                'xLgr='+ALLTRIM(mcons_dest[1,21])               + m_qp + ;
                                'nro='+ALLTRIM(mcons_dest[1,136])               + m_qp + ;
                                'xCpl='+ALLTRIM(mcons_dest[1,137])              + m_qp + ;
                                'xBairro='+ALLTRIM(mcons_dest[1,22])            + m_qp + ;
                                'cMun='+mcod_cid_dest                           + m_qp + ;
                                'xMun='+ALLTRIM(mcons_dest[1,24])               + m_qp + ;
                                'CEP='+ALLTRIM(mcons_dest[1,26])                + m_qp + ;
                                'UF='+ALLTRIM(mcons_dest[1,25])                 + m_qp + ;
                                'cPais=BRASIL'                                 + m_qp + ;
                                'xPais=1058'                                   + m_qp + ;
                                'email='+ALLTRIM(mcons_dest[1,27])              + m_qp
                        ENDIF
                        sLinhas := sLinhas + '[vPrest]'                     + m_qp + ;
                        'vTPrest='+ALLTRIM(TRANSFORM(mvTPrest,'999999.99')) + m_qp + ;
                        'vRec='+ALLTRIM(TRANSFORM(mvRec,'999999.99'))       + m_qp + ;
                        'xNome='+mxNome                                     + m_qp + ;
                        'vComp='+ALLTRIM(TRANSFORM(mvComp,'999999.99'))     + m_qp + ;
                        '[ICMSSN]'                                          + m_qp + ;
                        'indSN='+mindSN                                     + m_qp + ;
                        '[imp]'                                             + m_qp + ;
                        'CST='+mcst                                         + m_qp + ;
                        'vBC='+ALLTRIM(TRANSFORM(mvBc,'999999.99'))         + m_qp + ;
                        'pICMS='+ALLTRIM(TRANSFORM(mvpICMS,'999999.99'))    + m_qp + ;
                        'vICMS='+ALLTRIM(TRANSFORM(mvICMS,'999999.99'))     + m_qp + ;
                        'pRedBC='+ALLTRIM(TRANSFORM(mpRedBC,'999999.99'))   + m_qp + ;
                        'vBCSTRet='+ALLTRIM(TRANSFORM(mvBCSTRet,'999999.99'))     + m_qp + ;
                        'vICMSSTRet='+ALLTRIM(TRANSFORM(mvICMSSTRet,'999999.99')) + m_qp + ;
                        'pICMSSTRet='+ALLTRIM(TRANSFORM(mpICMSSTRet,'999999.99')) + m_qp + ;
                        'vCred='+ALLTRIM(TRANSFORM(mvCred,'999999.99'))           + m_qp + ; //IF(m_set[1,126] = 'S','CRT=1','CRT=0')          + m_qp + ;
                        'pRedBCOutraUF='+ALLTRIM(TRANSFORM(mpRedBCOutraUF,'999999.99'))  + m_qp + ; //IF(m_set[1,126] = 'S','CRT=1','CRT=0')          + m_qp + ;
                        'vBCOutraUF='+ALLTRIM(TRANSFORM(mvBCOutraUF,'999999.99'))        + m_qp + ; //IF(m_set[1,126] = 'S','CRT=1','CRT=0')          + m_qp + ;
                        'pICMSOutraUF='+ALLTRIM(TRANSFORM(mpICMSOutraUF,'999999.99'))    + m_qp + ; //IF(m_set[1,126] = 'S','CRT=1','CRT=0')          + m_qp + ;
                        'vICMSOutraUF='+ALLTRIM(TRANSFORM(mvICMSOutraUF,'999999.99'))    + m_qp + ; //IF(m_set[1,126] = 'S','CRT=1','CRT=0')          + m_qp + ;
                        'vTotTrib='+ALLTRIM(TRANSFORM(mvTotTrib,'999999.99'))    + m_qp + ;
                        'infAdFisco='+minfAdFisco                                + m_qp + ;
                        '[infCarga]'                                             + m_qp + ;
                        'vCarga='+ALLTRIM(TRANSFORM(mvCarga,'999999.99'))        + m_qp + ;
                        'proPred='+mproPred                                      + m_qp + ;
                        'xOutCat='+mxOutCat                                      + m_qp + ;
                        '[infQ001]'                                              + m_qp + ;
                        'cUnid='+mcUnid                                          + m_qp + ;
                        'tpMed='+mtpMed                                          + m_qp + ;
                        'qCarga='+ALLTRIM(TRANSFORM(mqCarga,'999999.9999'))      + m_qp + ;
                        '[infSeg001]'                                            + m_qp + ;
                        'respSeg='+mrespSeg                                      + m_qp + ;
                        'xSeg='+mxSeg                                            + m_qp + ;
                        'nApol='+mnApol                                          + m_qp + ; //'nAver='+mnAver                                          + m_qp + ;'vCarga='+ALLTRIM(TRANSFORM(s_vCarga,'999999.99'))      + m_qp + ;
                        '[rodo]'                                                 + m_qp + ;
                        'RNTRC='+mRNTRC                                          + m_qp + ;
                        'dPrev='+DTOC(mdprev)                                    + m_qp + ;
                        'lota=0")' //+mlota                                            //+ m_qp + ;

                        //atencao(slinhas)
                        //LOOP

                        /*

                        '[pass]'                                       + m_qp + ;
                        'xPass='+mxPass                                + m_qp + ;
                        'xDest='+mxDest                                + m_qp + ;
                        'xRota='+mxRota                                + m_qp + ;
                        '[Entrega]'                                    + m_qp + ;
                        'tpPer='+mtpPer                                + m_qp + ;
                        'dProg='+DTOC(mdProg)                          + m_qp + ;
                        'dIni='+DTOC(mdIni)                            + m_qp + ;
                        'dFim='+DTOC(mdFim)                            + m_qp + ;
                        'tpHor='+mtpHor                                + m_qp + ;
                        'hProg='+mhProg                                + m_qp + ;
                        'hIni='+mhIni                                  + m_qp + ;
                        'hFim='+mhFim                                  + m_qp + ;
                        'origCalc='+morigCalc                          + m_qp + ;
                        'destCalc='+mdestCalc                          + m_qp + ;
                        'xObs='+mxObs                                  + m_qp + ;
                        '[ObsCont]'                                    + m_qp + ;
                        'xCampo='+mxCampo                              + m_qp + ;
                        'xTexto='+mxTexto                              + m_qp + ;


                        '[exped]'                                      + m_qp + ;
                        'CNPJ='                                      + m_qp + ;
                        'CPF='                                      + m_qp + ;
                        'IE='                                      + m_qp + ;
                        'xNome='                                      + m_qp + ;
                        'fone='                                      + m_qp + ;
                        'xLgr='                                      + m_qp + ;
                        'nro='                                      + m_qp + ;
                        'xCpl='                                      + m_qp + ;
                        'xBairro='                                      + m_qp + ;
                        'cMun='                                      + m_qp + ;
                        'xMun='                                      + m_qp + ;
                        'CEP='                                      + m_qp + ;
                        'UF='                                      + m_qp + ;
                        'cPais='                                      + m_qp + ;
                        'xPais='                                      + m_qp + ;
                        'email='                                      + m_qp + ;



                        'nRoma='+ALLTRIM(cons_cli[1,22])                        + m_qp + ;
                        'nPed='+ALLTRIM(mcons_cid[1,1])                      + m_qp + ;
                        'mod='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'serie='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'nDoc='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'dEmi='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'vBC='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'vICMS='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'vBCST='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'vST='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'vProd='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'vNF='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'nCFOP='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'nPeso='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'PIN='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'dPrev='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'tpUnidTransp='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'idUnidTransp='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'nLacre='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'tpUnidCarga='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'idUnidCarga='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        */
                        /*
                        'CIOT='+ALLTRIM(cons_cli[1,21])                    + m_qp + ;
                        'serie='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'nOcc='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'dEmi='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'CNPJ='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'cInt='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'IE='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'UF='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'fone='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        '[valePed]'                                      + m_qp + ;
                        'CNPJForn='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'nCompra='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'CNPJPg='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'vValePed='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'vNF='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        '[veic]'                                      + m_qp + ;
                        'cInt='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'RENAVAM='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'placa='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'tara='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'capKG='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'capM3='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'tpProp='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'tpVeic='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'tpRod='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'tpCar='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'UF='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'CPF='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'CNPJ='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'RNTRC='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'xNome='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'IE='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'UF='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'tpProp='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        '[moto]'                                      + m_qp + ;
                        'xNome='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'CPF='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        '[aereo]'                                      + m_qp + ;
                        'nMinu='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'nOCA='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'dPrevAereo='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'xLAgEmi='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'IdT='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        '[tarifa]'                                      + m_qp + ;
                        'CL='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'cTar='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'vTar='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        '[natCarga]'                                      + m_qp + ;
                        'xDime='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'cInfManu='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'cIMP='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        '[aquav]'                                      + m_qp + ;
                        'vPrest='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'vAFRMM='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'nBooking='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'nCtrl='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'xNavio='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        '[balsa]'                                      + m_qp + ;
                        'xBalsa='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'nViag='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'direc='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'prtEmb='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'prtTrans='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'prtDest='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'tpNav='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'irin='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        '[ferrov]'                                      + m_qp + ;
                        'tpTraf='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        '[trafMut]'                                      + m_qp + ;
                        'respFat='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'ferrEmi='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'fluxo='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'idTrem='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'vFrete='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        '[ferroEnv]'                                      + m_qp + ;
                        'CNPJ='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'cInt='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'IE='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'xNome='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'xLgr='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'nro='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'xCpl='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'xBairro='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'cMun='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'xMun='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'CEP='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'UF='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        '[detVag]'                                      + m_qp + ;
                        'nVag='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'cap='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'tpVag='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'pesoR='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'pesoBC='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                         */

        //atencao(slinhas)

                        mensagem('CRIANDO A CTE No. '+mretorno)
                        mretorno := IBR_comando('CTe.CriarCTe',{sLinhas},,3)
                        IF  mretorno = ' '
                                RETURN NIL
                        ELSE
                                mretorno :=ALLTRIM(SUBSTR(mretorno,LEN(mretorno)-51))
                        ENDIF
                        IF m_set[1,95] = '1' .OR. EMPTY(m_set[1,95])
                                mensagem('ASSINANDO a CTE No. '+mretorno)
                                IF IBR_comando('CTe.AssinarCTe',{mretorno},,3) = ' '
                                        RETURN NIL
                                ENDIF
                                mensagem('VALIDANDO a CTE No. '+mretorno)
                                IF IBR_comando('CTe.ValidarCTe',{mretorno},,3) = ' '
                                        RETURN NIL
                                ENDIF
                        ENDIF
                        mensagem('ENVIANDO a CTE No. '+mretorno)
                        enviar_cte(mretorno)
        IF ! EMPTY(m_email) .AND. op_simnao('S','Deseja enviar EMAIL para o Cliente') = 'S'
                op_tela(10,10,11,70,'Enviar EMAIL')
                DEVPOS(00,00);DEVOUT('Email de Destino:')
                @ 00,18 GET m_email VALID IF(EMPTY(m_email),.F.,.T.)
                READ
                IF LASTKEY() # 27
                        IF ! EMPTY(m_indiv[1,43])
                                m_ret := IBR_comando('CTe.EnviarEmail('+m_email+','+mretorno+',1)',,3)
                        ELSE
                                m_ret := CTE_comando('CTe.EnviarEmail('+m_email+','+mretorno+',1)',,3)
                        ENDIF
                        atencao(m_ret)
                ENDIF
                wvw_lclosewindow()
        ENDIF
        CLEAR GETS
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
****************************************************************************
FUNCTION enviar_cte(mret)
********************
LOCAL m_retorno,lin,linhas,linha,mmen,marq_sai

IF ! EMPTY(m_indiv[1,43])
        m_retorno := IBR_comando('CTe.EnviarCTe',{ALLTRIM(m_indiv[1,40])+mret,1,1,1})
        atencao(m_retorno)
        IF m_retorno = ' '
                RETURN NIL
        ENDIF
ELSE
        marq_sai := NFE_comando('CTe.EnviarCTe',{mret,1,1,1},0)
        atencao(marq_sai)
        m_retorno :={}
        lin := MEMOLINE(marq_sai,110,1,,)
        linhas := linha := 0
        linhas := MLCOUNT(marq_sai,110)
        FOR linha = 1 TO  linhas
                lin := MEMOLINE(marq_sai,110,linha,,)
                AADD(m_retorno,ALLTRIM(lin))
        NEXT
        IF LEN(m_retorno) > 0
                IF SUBSTR(m_retorno[1],1,2) = 'OK'
                        h:=0
                        FOR h = 1 TO LEN(m_retorno)
                                IF SUBSTR(UPPER(m_retorno[h]),1,5) = 'CHCTE'
                                        mchnfe := ALLTRIM(SUBSTR(UPPER(m_retorno[h]),7))
                                        EXIT
                                ENDIF
                        NEXT
                        atencao('Messagem: CHAVE DA CTE: '+mchnfe)
                ELSE
                        mmen := 'MENSAGEM DE '
                        h:=0
                        FOR h = 1 TO LEN(m_retorno)
                                mmen := mmen + m_retorno[h]
                        NEXT
                        atencao(mmen)
                ENDIF
        ENDIF
ENDIF
RETURN NIL
************************** F I M *************************************
FUNCTION CTE_COMANDO(CMD,VET_PARAM,ESPERA,TENTA)
* Funcao de uso interno para enviar os comandos para a impressora e
* registrar os erros retornados pela mesma. Exibe os erros se existirem
************************************************************************
LOCAL RET_IMP, REQ:='', RESP:='', TEMPOR:='', TINI, TFIM, BLOCO, BYTES, I, TIPO_PARAM

IF EMPTY(sENDER)
        IF ! SEM_ERRO
                atencao('ACBrNFeMonitor nao foi inicializado.')
        ENDIF
        RETURN ''
ENDIF
DEFAULT VET_PARAM   to {} ,;
ESPERA      to 0  ,;
TENTA       to .t.
///// Codificando CMD de acordo com o protocolo /////
RET_IMP  := ''
IF ! ('.' $ LEFT(CMD,5))   // Informou o Objeto no Inicio ?
        CMD := 'CTE.'+CMD       // Se nao informou assume ECF.
ENDIF
IF LEN(VET_PARAM) > 0
        CMD := CMD + '('
        FOR i = 1 TO LEN(VET_PARAM)
                TIPO_PARAM := VALtype(VET_PARAM[I])

                IF TIPO_PARAM = 'C'
                // Converte aspas para simples para aspas duplas, para o ACBrNFeMonitor
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
CMD := CMD + CR+LF + CR+LF
IF ! SEM_ERRO
        ESPERA := max(ESPERA,5)
ELSE
        TENTA := .F.
ENDIF
IF PATH_DEL $ sENDER               /// E' TXT ? ///
        REQ    := sENDER + ENT_TXT
        RESP   := sENDER + SAI_TXT
        TEMPOR := sENDER + TMP_TXT
        //////// Transmitindo o comando /////////
        TFIM := SECONDS() + 3    // Tenta apagar a Resposta anterior em ate 3 segundos
        WHILE file( RESP )
                IF ferase( RESP ) = -1
                        IF (SECONDS() > TFIM)
                                RET_IMP := 'ERRO: Nao foi possivel apagar o arquivo: ('+RESP+') '+;
                                ferror()
                                //ErrorOsMessage(ferror())
                        ELSE
                                INKEY(.10,20)
                        ENDIF
                ENDIF
        ENDDO
        op_tela(10,10,11,90,'Criando arquivo TEMPORARIO com a requisicao',,1)
        WHILE EMPTY(RET_IMP)
                TFIM := SECONDS() + 3    // Tenta apagar a Requisicao anterior em ate 3 segundos
                WHILE file( REQ )
                        IF ferase( REQ ) = -1
                                IF (SECONDS() > TFIM)
                                        RET_IMP := 'ERRO: Nao foi possivel apagar o arquivo: ('+REQ+') '+;
                                        ferror()
                                ELSE
                                        INKEY(.10,20)
                                ENDIF
                        ENDIF
                ENDDO
                // Criando arquivo TEMPORARIO com a requisicao //
                IF EMPTY(RET_IMP)
                        IF ! Grava_NFE(TEMPOR, CMD)
                                RET_IMP := 'ERRO: Nao foi possivel criar o arquivo: ('+TEMPOR+') '+;
                                ferror()
                        ENDIF
                ENDIF
                DEVPOS(1,1);DEVOUT('Renomeando arquivo TEMPORARIO para REQUISICAO')
                IF EMPTY(RET_IMP)
                        IF frename(TEMPOR, REQ) = -1
                                RET_IMP := 'ERRO: Nao foi possivel renomear ('+TEMPOR+') para ('+REQ+') '+;
                                ferror()
                        ENDIF
                ENDIF
                INKEY(.10,20)
                // Espera ACBrNFeMonitor apagar o arquivo de Requisicao em ate 7 segundos
                // Isso significa que ele LEU o arquivo de Requisicao
                TFIM := SECONDS() + 7
                //atencao(cmd)

                WHILE EMPTY(RET_IMP) .and. (SECONDS() <= TFIM) .and. file(REQ)
                        IF ferase(REQ) = -1
                                LOOP
                        ENDIF
                        INKEY(.10,20)
                ENDDO
                IF file(REQ)
                        IF ! TENTA
                                RET_IMP := 'ERRO: ACBrNFeMonitor nao esta ativo'
                        ELSE
                                IF op_simnao('S','O ACBrNfeMonitor nao esta ativo Deseja tentar novamente:') = 'N'
                                        RET_IMP := 'ERRO: ACBrNFeMonitor nao esta ativo'
                                ELSE
                                        IF ! file(REQ)  // ACBrNFeMonitor "acordou" enquanto perguntava
                                                exit
                                        ENDIF
                                ENDIF
                        ENDIF
                ELSE
                        exit
                ENDIF
        ENDDO
        fecha_tela()
        op_tela(10,10,11,90,'Lendo a resposta do ACBRNFEMONITOR',,1)
        DEVPOS(1,1);DEVOUT('Aguardando resposta do ACBrNFeMonitor: ')
        TINI   := SECONDS()
        WHILE EMPTY(RET_IMP)
                INKEY(.10,20)
                IF file(RESP)
                        RET_IMP := ALLTRIM(memoread( RESP ))
                ENDIF

                IF EMPTY(RET_IMP)
                        IF SECONDS() > (TINI + 5)
                                DEVPOS(1,1);DEVOUT('Aguardando resposta do ACBrNFeMonitor:  '+; // '('+ProcName(2)+') '+;
                                Trim(str(TINI + ESPERA - SECONDS(),2)))
                        ENDIF
                        IF SECONDS() > (TINI + ESPERA)
                                IF ! TENTA
                                        RET_IMP := 'ERRO: Sem resposta do ACBrNFeMonitor em '+ALLTRIM(str(ESPERA))+;
                                                ' segundos (TimeOut)'
                                ELSE
                                        IF op_simnao('S','O ACBrNFeMonitor nao esta respondendo Deseja tentar novamente ?') <> 'S'
                                                RET_IMP := 'ERRO: Sem resposta do ACBrNFeMonitor em '+ALLTRIM(str(ESPERA))+;
                                                        ' segundos (TimeOut)'
                                        ELSE
                                                TINI := SECONDS()
                                        ENDIF
                                ENDIF
                        ENDIF
                        INKEY(.10,20)
                ENDIF
        ENDDO
        fecha_tela()
        ferase( RESP )
        #IFDEF __XHARBOUR__

        ELSE                                       //// TCP / IP (apenas xHarbour ) ///
                mensagem('//////// Transmitindo o comando /////////')
                InetSetTimeout( sSOCKET, 3000 )   // Timeout de Envio 3 seg //
                //atencao(cmd)
                IF inetsendall( sSocket, CMD ) <= 0
                        RET_IMP := 'ERRO: Nao foi possivel transmitir dados para o ACBrNFeMonitor('+AllTrim(Str(InetErrorCode( sSOCKET )))+') '+;
                                InetErrorDesc( sSOCKET ) + ETX
                ENDIF
                mensagem('//////// Lendo a resposta ////////')
                InetSetTimeout( sSOCKET, 500 )
                TINI   := SECONDS()

                WHILE (RIGHT(RET_IMP,1) <> ETX)
                        BLOCO := SPACE(64)

                        BYTES   := inetrecv(sSOCKET, @BLOCO, 64)
                        RET_IMP += LEFT(BLOCO,BYTES)
                        //atencao(RET_IMP)

                        IF SECONDS() > (TINI + 5)
                                mensagem('Aguardando resposta do ACBrNFeMonitor:  '+; // '('+ProcName(2)+') '+;
                                Trim(str(TINI + ESPERA - SECONDS(),2)))
                        ENDIF

                        IF SECONDS() > (TINI + ESPERA)

                                IF ! TENTA
                                        RET_IMP := 'ERRO: Sem resposta do ACBrNFeMonitor em '+ALLTRIM(str(ESPERA))+;
                                        ' segundos (TimeOut)' + ETX
                                ELSE
                                        IF op_simnao('S','O ACBrNFeMonitor nao esta respondendo Deseja tentar novamente ?') = 'S'
                                                RET_IMP := 'ERRO: Sem resposta do ACBrNFeMonitor em '+ALLTRIM(str(ESPERA))+;
                                                        ' segundos (TimeOut)' + ETX
                                        ELSE
                                                TINI := SECONDS()
                                        ENDIF
                                ENDIF
                        ENDIF
                ENDDO

        #ENDIF
ENDIF
WHILE RIGHT(RET_IMP,1) $ CR+LF+ETX   // Remove sinalizadores do final
        RET_IMP := LEFT(RET_IMP,LEN(RET_IMP)-1)
ENDDO

IF ! SEM_ERRO
        MSG_ERRO := ''
        IF SUBSTR(RET_IMP,1,5) == 'ERRO:'
                MSG_ERRO := 'Erro ACBrNFeMonitor '+;  //  'Rotina ('+ProcName(2)+')|'+;
                STRTRAN(STRTRAN(SUBSTR(RET_IMP,7),CR,''),LF,' ')
                //STRTRAN(STRTRAN( MUDA_ACENTOS(SUBSTR(RET_IMP,7)),CR,''),LF,'|')
        ENDIF

        IF ! EMPTY(MSG_ERRO)
                atencao(MSG_ERRO)
                RET_IMP := ''
        ENDIF
ENDIF
RETURN RET_IMP
************************************************************************
