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
*********************************
* IMPRIMI NOTA FISCAL ELETRONICA
*********************************
FUNCTION sacnf_e(m_nota,via,texto)
**********************************
LOCAL mprg:='SACNF_E',;
      lci,cci,lba,cba,micm,mdoc,maux,;
      mdoc_aux,mcli_nota,mend_nota,mbai_nota,;
      mop_nota:='N',mcod_uax,mcont_prod:=0,mpeso:=0,mpeso_liq:=0,;
      cComm,aret,mcons_cid:={},mobs1,mobs2,mobs3,mobs4,mobs5,mobs6,mobs7,mobs8,;
      mobs9,mobs10,mobs11,mobs12,mobs13,mobs14,mobs15,mobs16,mobs17,mobs18,mobs19,mobs20,cons_cli:={},;
      m_retorno:={},lin,linhas,linha,h:=0,mretorno:=' ',mcons_prod:={},mc_merc,mc_obs,m_obs,mpt,;
      mvlr_icmsub:=0,mbase_icmsub:=0,mpr_fat:=0,mcod_cid_emit:='',mcod_cid_dest:='',mcons_emit,mmen:='',m_ret:='',;
      mtot_imposto:=0,mbase_fcp := 0,mdif_aliq :=0,mvICMSUFDest := 0,mvICMSUFRemet:= 0,mtICMSUFDest := 0,mtICMSUFRemet:= 0,;
      mtFCPUFDest := 0,mdata_nfe:=CTOD('  /  /  '),mindIEDest:='',mv_outro:=0,;
      m_vbc := 0,m_vicms := 0,m_vbcst := 0,m_vicmsst := 0,mcrt:='',mcod_cid := '',;
      nBotao_imp ,nBotao_pre_imp,mperc_frete := 0,lin1 := ' ',i:=0,mvlr_frete := {},x:=0, mtot_ipi_dev:=0


MEMVAR mcod_cli,mmodelo,mcod_nat1,msittrib,mdocumento
PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mpag:=0,marq_sai:='',mcam_nfe:='',mchnfe:='',;
        mcamnfe := ''

IF m_set[1,126] = 'S'
        mcrt='1'
ELSE
        mcrt='0'
ENDIF

mensagem('INCICIANDO O NFe Aguarde um momento....')
marca := '*'
lci := 13
cci := 01
lba := 20
cba := 70
mtot_icm := 0
nota := mend_nota := mbai_nota := ' '
CLEAR GETS
IF ! mtipo_nota = 'N'
        mtot_quantd := ctot_quantd
        mtot_peso   := ctot_peso
        mtot_liq    := ctot_liq
ENDIF
op_tela(01,40,46,120,' INFORMACOES ADICIONAIS DA NOTA FISCAL ELETRONICA',,'*')
marq_sai := ALLTRIM(m_indiv[1,37])+"SAINFE.TXT"
WHILE .T.
        exibi_prg(mprg)
        cons_cli := {}
        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@cons_cli)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_cli) = 0
                atencao('Nao foi encontrado o Cliente !!!!')
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
        mcons_cid := {}
        sr_getconnection():exec("SELECT * FROM saccid WHERE (cidade = "+sr_cdbvalue(RTRIM(cons_cli[1,24]))+"OR cidade IS NULL) AND uf = "+sr_cdbvalue(RTRIM(cons_cli[1,25])),,.t.,@mcons_cid)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(mcons_cid) = 0 .OR. EMPTY(mcons_cid[1,1])
                atencao('Nao e Possivel a emissao desta nota pois o codigo da cidade do CLIENTE nao estar cadastrado !!!!')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mcod_cid_dest := mcons_cid[1,1]
        mobs1:=mobs2:=mobs3:=mobs4:=mobs5:=mobs6:=mobs7:=mobs8:=mobs9:=mobs10 :=SPACE(50)
        mobs11:=mobs12:=mobs13:=mobs14:=mobs15:=mobs16:=mobs17:=mobs18:=mobs19:=mobs20 :=SPACE(50)
        mretorno := mchnfe := m_ret := ''
        mvlr_icmsub := mbase_icmsub := mtot_imposto := mbase_fcp := mdif_aliq :=mvICMSUFDest := mvICMSUFRemet:= mtICMSUFDest := ;
        mtICMSUFRemet:= mtFCPUFDest := mperc_frete := 0

        SET CENTURY ON
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'M'
****************************************************
        //mtot_quantd := mensagem2('Quantidade de item:',mtot_quantd,'999,999.99',,'N')
        botao(00,01,04,79,,' VOLUMES')
        DEVPOS(01,01);DEVOUT('Quantidade Item:')
        DEVPOS(02,01);DEVOUT('Peso Bruto.....:')
        DEVPOS(03,01);DEVOUT('Peso Liquido...:')
        botao(06,01,28,79,,' OBSERVACAO NOTA')
        botao(30,01,45,79,,' Duplicatas ')
        DEVPOS(31,11);DEVOUT('Qt.Vezes:')
        DEVPOS(31,25);DEVOUT('Intervalos:')

        DEVPOS(32,11);DEVOUT('No.Dup.:')
        DEVPOS(32,33);DEVOUT('Venc.:')
        DEVPOS(32,52);DEVOUT('Vlr.:')

        DEVPOS(33,11);DEVOUT('No.Dup.:')
        DEVPOS(33,33);DEVOUT('Venc.:')
        DEVPOS(33,52);DEVOUT('Vlr.:')
        DEVPOS(34,11);DEVOUT('No.Dup.:')
        DEVPOS(34,33);DEVOUT('Venc.:')
        DEVPOS(34,52);DEVOUT('Vlr.:')
        DEVPOS(35,11);DEVOUT('No.Dup.:')
        DEVPOS(35,33);DEVOUT('Venc.:')
        DEVPOS(35,52);DEVOUT('Vlr.:')
        DEVPOS(36,11);DEVOUT('No.Dup.:')
        DEVPOS(36,33);DEVOUT('Venc.:')
        DEVPOS(36,52);DEVOUT('Vlr.:')
        DEVPOS(37,11);DEVOUT('No.Dup.:')
        DEVPOS(37,33);DEVOUT('Venc.:')
        DEVPOS(37,52);DEVOUT('Vlr.:')

        DEVPOS(38,11);DEVOUT('No.Dup.:')
        DEVPOS(38,33);DEVOUT('Venc.:')
        DEVPOS(38,52);DEVOUT('Vlr.:')

        DEVPOS(39,11);DEVOUT('No.Dup.:')
        DEVPOS(39,33);DEVOUT('Venc.:')
        DEVPOS(39,52);DEVOUT('Vlr.:')

        DEVPOS(40,11);DEVOUT('No.Dup.:')
        DEVPOS(40,33);DEVOUT('Venc.:')
        DEVPOS(40,52);DEVOUT('Vlr.:')

        DEVPOS(41,11);DEVOUT('No.Dup.:')
        DEVPOS(41,33);DEVOUT('Venc.:')
        DEVPOS(41,52);DEVOUT('Vlr.:')

        DEVPOS(42,11);DEVOUT('No.Dup.:')
        DEVPOS(42,33);DEVOUT('Venc.:')
        DEVPOS(42,52);DEVOUT('Vlr.:')

        DEVPOS(43,11);DEVOUT('No.Dup.:')
        DEVPOS(43,33);DEVOUT('Venc.:')
        DEVPOS(43,52);DEVOUT('Vlr.:')

        DEVPOS(44,11);DEVOUT('Valor do IPI:'+TRANSFORM(mtot_ipi,'999,999.99'))
	IF mtipo_nota = 'N'
	        mtot_quantd := LEN(m_nota)
        	mtot_icm := mtot_icmf:=mtot_peso:=mtot_liq:=mbase_icm:=i := 0
        	FOR i = 1 TO LEN(m_nota)
                        IF m_nota[i,5] = 0
                                LOOP
                        ENDIF
			mtot_liq := mtot_liq + (m_nota[i,18] * m_nota[i,5])
	                mtot_peso := mtot_peso + (m_nota[i,9] * m_nota[i,5])
        	NEXT
        ENDIF
        @ 01,18 GET mtot_quantd PICT '999,999.99'
        @ 02,18 GET mtot_peso PICT '99,999.999'
        @ 03,18 GET mtot_liq PICT '99,999.999'
        READ
	IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
	ENDIF
        mpis:=mconfis:=micms_desc:=0
        i := 0
        FOR i = 1 TO LEN(mpedidos)
                IF i <= 7
                        mobs7 := ALLTRIM(mobs1) + ','+mpedidos[i]
                ELSEIF i <= 14
                        mobs8 := ALLTRIM(mobs2) + ','+mpedidos[i]
                ELSEIF i <= 21
                        mobs9 := ALLTRIM(mobs3) + ','+mpedidos[i]
                ENDIF
        NEXT
        i := 0
        m_obs := {}
        IF ! EMPTY(mfrete)
                IF m_set[1,151] # 'N'
                        mperc_frete := (mfrete / mtot_nota) + 1
                        mtot_nota := 0
                        FOR i = 1 TO LEN(m_nota)
                                m_nota[i,7] := iat(m_nota[i,7] * mperc_frete,,2)
                                //atencao(transform(m_nota[i,7],'999,999.9999')+' - '+transform(mperc_frete,'999,999.99999'))
                                mtot_nota := mtot_nota + (m_nota[i,7] * m_nota[i,5])
                        NEXT
                ELSE
                        mresto := mfrete - (iat((mfrete / LEN(m_nota)),'T',2) * LEN(m_nota))
                        x:=0
                        FOR x = 1 TO LEN(m_nota)
                                AADD(mvlr_frete,iat((mfrete / LEN(m_nota)),'T',2))
                        NEXT
                        mvlr_frete[1] := mvlr_frete[1] + mresto

                        //atencao( sr_ShowVector(mvlr_frete))

                       /*
                        mperc_frete := (mfrete / mtot_nota)
                        IF mperc_frete < 1
                                mperc_frete := (mfrete / mtot_nota)
                        ELSE
                                mperc_frete := (mfrete / mtot_nota) - 1
                        ENDIF
                        */
                ENDIF
        ENDIF
        i := 0
        FOR i = 1 TO LEN(m_nota)
                mc_merc := {}
                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_nota[i,21]),,.t.,@mc_merc)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(mc_merc) > 0
                        IF ! EMPTY(mc_merc[1,66])
                                mpt := ASCAN(m_obs,mc_merc[1,66])
                                IF mpt > 0
                                        LOOP
                                ENDIF
                                AADD(m_obs,mc_merc[1,66])
                                mc_obs := {}
                                sr_getconnection():exec("SELECT * FROM sacobs WHERE cod_obs = "+sr_cdbvalue(mc_merc[1,66]),,.t.,@mc_obs)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(mc_obs) > 0
                                        IF EMPTY(mobs1)
                                                mobs1 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs2)
                                                mobs2 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs3)
                                                mobs3 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs4)
                                                mobs4 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs5)
                                                mobs5 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs6)
                                                mobs6 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs7)
                                                mobs7 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs8)
                                                mobs8 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs9)
                                                mobs9 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs10)
                                                mobs10 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs11)
                                                mobs11 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs12)
                                                mobs12 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs13)
                                                mobs13 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs14)
                                                mobs14 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs15)
                                                mobs15 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs16)
                                                mobs16 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs17)
                                                mobs17 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs18)
                                                mobs18 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs19)
                                                mobs19 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs20)
                                                mobs11 := mc_obs[1,1]
                                        ENDIF
                                ENDIF
                        ENDIF
                ENDIF
        NEXT
        @ 07,1 GET mobs1 PICT '@!'
        @ 08,1 GET mobs2 PICT '@!'
        @ 09,1 GET mobs3 PICT '@!'
        @ 10,1 GET mobs4 PICT '@!'
        @ 11,1 GET mobs5 PICT '@!'
        @ 12,1 GET mobs6 PICT '@!'
        @ 13,1 GET mobs7 PICT '@!'
        @ 14,1 GET mobs8 PICT '@!'
        @ 15,1 GET mobs9 PICT '@!'
        @ 16,1 GET mobs10 PICT '@!'
        @ 17,1 GET mobs11 PICT '@!'
        @ 18,1 GET mobs12 PICT '@!'
        @ 19,1 GET mobs13 PICT '@!'
        @ 20,1 GET mobs14 PICT '@!'
        @ 21,1 GET mobs15 PICT '@!'
        @ 22,1 GET mobs16 PICT '@!'
        @ 23,1 GET mobs17 PICT '@!'
        @ 24,1 GET mobs18 PICT '@!'
        @ 25,1 GET mobs19 PICT '@!'
        @ 26,1 GET mobs20 PICT '@!'
        READ
        opcao := op_simnao('S','Confirma as observacoes:')
        IF opcao = 'N'
	        wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF via = '1'
        	aret:={}
                lExit := .T.
                IF m_set[1,95] = '1' .OR. EMPTY(m_set[1,95])
                	while lExit
                                sr_begintransaction()
                                try
                                        sr_getconnection():exec( "select numero from  sacnota where sr_recno = 1 for update with lock",,.t.,@aret)
                                        if len(aRet)  == 0
                               	                sr_getconnection():exec("insert into sacnota (numero,sr_deleted,serie,sr_recno)   values (" + sr_cdbvalue(strzero(1,6) ) + ",' ','1',1)",,.f.)
                               	                mdocumento = STRZERO(1,6)
                                        else
                                                mdocumento = STRZERO(VAL(aret[1,1])+1,6)
                                                mnum = strzero(VAL(aret[1,1])+1,6)
                       	                        sr_getconnection():exec("update sacnota set numero = " + sr_cdbvalue(mnum) + ",serie = " + sr_cdbvalue('1') +"  where sr_recno = 1 ",,.f.)
                                        endif
                                        sr_committransaction()
                                        lExit:=.F.
                                catch e
                                        tracelog(valtoprg())
                                        sr_COMMITtransaction()
                                end
                                sr_endtransaction()
                        end
                ELSE
                	while lExit
                                sr_begintransaction()
                                try
                                        sr_getconnection():exec( "select numero from  sacnota where sr_recno = 2 for update with lock",,.t.,@aret)
                                        if len(aRet)  == 0
                               	                sr_getconnection():exec("insert into sacnota (numero,sr_deleted,serie,sr_recno)   values (" + sr_cdbvalue(strzero(1,6) ) + ",' ','900',2)",,.f.)
                               	                mdocumento = STRZERO(1,6)
                                        else
                                                mdocumento = STRZERO(VAL(aret[1,1])+1,6)
                                                mnum = strzero(VAL(aret[1,1])+1,6)
                       	                        sr_getconnection():exec("update sacnota set numero = " + sr_cdbvalue(mnum) + ",serie = " + sr_cdbvalue('900') +"  where sr_recno = 2 ",,.f.)
                                        endif
                                        sr_committransaction()
                                        lExit:=.F.
                                catch e
                                        tracelog(valtoprg())
                                        sr_COMMITtransaction()
                                end
                                sr_endtransaction()
                        end
                ENDIF
                sr_getconnection():exec("COMMIT",,.f.)
                mprg := ALLTRIM(STR(VAL(mdocumento)))
                //atencao('Foi Gerada a Nota Fiscal No.: '+mdocumento)
                //IF m_set[1,117] = 'S'

                        IF mtp_vend = 'AP'
                                WHILE .T.
                                        mnum_dup := mnum_dup1 := mnum_dup2 := mnum_dup3 := ;
                                        mnum_dup4 := mnum_dup5 := mnum_dup6 := ;
                                        mnum_dup7 := mnum_dup8 := mnum_dup9 := ;
                                        mnum_dup10 := mnum_dup11 := SPACE(8)
                                        mvenci :=  mvenci1 := mvenci2 := ;
                                        mvenci3 := mvenci4 := mvenci5 := ;
                                        mvenci6 := mvenci7 := mvenci8 := ;
                                        mvenci9 := mvenci10 := mvenci11 := CTOD('  /  /  ')
                                        mvlr_dup  := mvlr_dup1 := mvlr_dup2 := ;
                                        mvlr_dup3 := mvlr_dup4 := mvlr_dup5 := ;
                                        mvlr_dup6 := mvlr_dup7 := mvlr_dup8 := ;
                                        mvlr_dup9 := mvlr_dup10 := mvlr_dup11 := 0
                                        mnum_dup := STRZERO(mnum_ped,6)
                                        @ 31,20 GET mcond_vezes PICT '@@R 9-99' VALID IF((VAL(SUBSTR(mcond_vezes,1,1))) + (VAL(SUBSTR(mcond_vezes,2,2))) > 7,.F.,.T.)
                                        @ 31,36 GET mintev PICT '@@R - 999' VALID IF(EMPTY(mintev),.F.,.T.)
                                        @ 31,COL()+1 GET mintev1 PICT '@@R - 999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 2 VALID IF(EMPTY(mintev1),.F.,.T.)
                                        @ 31,COL()+1 GET mintev2 PICT '@@R - 999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 3 VALID IF(EMPTY(mintev2),.F.,.T.)
                                        @ 31,COL()+1 GET mintev3 PICT '@@R - 999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 4 VALID IF(EMPTY(mintev3),.F.,.T.)
                                        @ 31,COL()+1 GET mintev4 PICT '@@R - 999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 5 VALID IF(EMPTY(mintev4),.F.,.T.)
                                        @ 31,COL()+1 GET mintev5 PICT '@@R - 999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 6 VALID IF(EMPTY(mintev5),.F.,.T.)
                                        @ 31,COL()+1 GET mintev6 PICT '@@R - 999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 7 VALID IF(EMPTY(mintev6),.F.,.T.)
                                        @ 31,COL()+1 GET mintev7 PICT '@@R - 999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 8 VALID IF(EMPTY(mintev7),.F.,.T.)
                                        @ 31,COL()+1 GET mintev8 PICT '@@R - 999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 9 VALID IF(EMPTY(mintev8),.F.,.T.)
                                        @ 31,COL()+1 GET mintev9 PICT '@@R - 999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 10 VALID IF(EMPTY(mintev9),.F.,.T.)
                                        @ 31,COL()+1 GET mintev10 PICT '@@R - 999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 11 VALID IF(EMPTY(mintev10),.F.,.T.)
                                        @ 31,COL()+1 GET mintev11 PICT '@@R - 999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 12 VALID IF(EMPTY(mintev11),.F.,.T.)
                                        READ
                                
                                        IF EMPTY(mnum_ped) .OR. mnum_ped = 0 .OR. ver_serie() = '141235' .OR. ver_serie() = '141376'
                                                mnum_dup := mdocumento
                                        ENDIF
                                        IF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 1
                                                mnum_dup := mnum_dup+'-01/01'
                                                mvenci := mdata + mintev
                                                mvlr_dup := mtot_nota+mencargo+mseguro+mtot_ipi+mvlr_icmsub+mdif_icms+micm_sub - mdesc_icm
                                        ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 2
                                                mnum_dup1 := mnum_dup+'-02/02'
                                                mnum_dup := mnum_dup+'-01/02'
                                                mvenci := mdata + mintev
                                                mvenci1 := mdata + mintev1
                                                mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /2) + mtot_ipi
                                                mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /2
                                                msobra := mvlr_dup
                                        ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 3
                                                mnum_dup1 := mnum_dup+'-02/03'
                                                mnum_dup2 := mnum_dup+'-03/03'
                                                mnum_dup := mnum_dup+'-01/03'
                                                mvenci := mdata + mintev
                                                mvenci1 := mdata + mintev1
                                                mvenci2 := mdata + mintev2
                                                mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /3) + mtot_ipi
                                                mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /3
                                                mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /3
                                        ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 4
                                                mnum_dup1 := mnum_dup+'-02/04'
                                                mnum_dup2 := mnum_dup+'-03/04'
                                                mnum_dup3 := mnum_dup+'-04/04'
                                                mnum_dup := mnum_dup+'-01/04'
                                                mvenci := mdata + mintev
                                                mvenci1 := mdata + mintev1
                                                mvenci2 := mdata + mintev2
                                                mvenci3 := mdata + mintev3
                                                mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /4) + mtot_ipi
        	                                mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /4
                	                        mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /4
                        	                mvlr_dup3 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /4
                                        ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 5
                                                mnum_dup1 := mnum_dup+'-02/05'
                                                mnum_dup2 := mnum_dup+'-03/05'
                                                mnum_dup3 := mnum_dup+'-04/05'
                                                mnum_dup4 := mnum_dup+'-05/05'
                                                mnum_dup := mnum_dup+'-01/05'
                                                mvenci := mdata + mintev
                                                mvenci1 := mdata + mintev1
                                                mvenci2 := mdata + mintev2
                                                mvenci3 := mdata + mintev3
                                                mvenci4 := mdata + mintev4
                                                mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /5) + mtot_ipi
        	                                mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /5
                	                        mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /5
                        	                mvlr_dup3 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /5
                                	        mvlr_dup4 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /5
                                        ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 6
                                                mnum_dup := mnum_dup+'-01/06'
                                                mnum_dup1 := mnum_dup+'-02/06'
                                                mnum_dup2 := mnum_dup+'-03/06'
                                                mnum_dup3 := mnum_dup+'-04/06'
                                                mnum_dup4 := mnum_dup+'-05/06'
                                                mnum_dup5 := mnum_dup+'-06/06'
                                                mvenci := mdata + mintev
                                                mvenci1 := mdata + mintev1
                                                mvenci2 := mdata + mintev2
                                                mvenci3 := mdata + mintev3
                                                mvenci4 := mdata + mintev4
                                                mvenci5 := mdata + mintev5
                                                mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /6) + mtot_ipi
                                                mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /6
                                                mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /6
                                                mvlr_dup3 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /6
                                                mvlr_dup4 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /6
                                                mvlr_dup5 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /6
                                        ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 7
                                                mnum_dup := mnum_dup+'-01/07'
                                                mnum_dup1 := mnum_dup+'-02/07'
                                                mnum_dup2 := mnum_dup+'-03/07'
                                                mnum_dup3 := mnum_dup+'-04/07'
                                                mnum_dup4 := mnum_dup+'-05/07'
                                                mnum_dup5 := mnum_dup+'-06/07'
                                                mnum_dup6 := mnum_dup+'-07/07'
                                                mvenci := mdata + mintev
                                                mvenci1 := mdata + mintev1
                                                mvenci2 := mdata + mintev2
                                                mvenci3 := mdata + mintev3
                                                mvenci4 := mdata + mintev4
                                                mvenci5 := mdata + mintev5
                                                mvenci6 := mdata + mintev6
                                                mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /7) + mtot_ipi
                                                mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /7
                                                mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /7
                                                mvlr_dup3 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /7
                                                mvlr_dup4 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /7
                                                mvlr_dup5 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /7
                                                mvlr_dup6 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /7
                                        ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 8
                                                mnum_dup := mnum_dup+'-01/08'
                                                mnum_dup1 := mnum_dup+'-02/08'
                                                mnum_dup2 := mnum_dup+'-03/08'
                                                mnum_dup3 := mnum_dup+'-04/08'
                                                mnum_dup4 := mnum_dup+'-05/08'
                                                mnum_dup5 := mnum_dup+'-06/08'
                                                mnum_dup6 := mnum_dup+'-07/08'
                                                mnum_dup7 := mnum_dup+'-08/08'
                                                mvenci := mdata + mintev
                                                mvenci1 := mdata + mintev1
                                                mvenci2 := mdata + mintev2
                                                mvenci3 := mdata + mintev3
                                                mvenci4 := mdata + mintev4
                                                mvenci5 := mdata + mintev5
                                                mvenci6 := mdata + mintev6
                                                mvenci7 := mdata + mintev7
                                                mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /8) + mtot_ipi
                                                mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /8
                                                mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /8
                                                mvlr_dup3 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /8
                                                mvlr_dup4 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /8
                                                mvlr_dup5 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /8
                                                mvlr_dup6 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /8
                                                mvlr_dup7 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /8
                                        ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 9
                                                mnum_dup := mnum_dup+'-01/09'
                                                mnum_dup1 := mnum_dup+'-02/09'
                                                mnum_dup2 := mnum_dup+'-03/09'
                                                mnum_dup3 := mnum_dup+'-04/09'
                                                mnum_dup4 := mnum_dup+'-05/09'
                                                mnum_dup5 := mnum_dup+'-06/09'
                                                mnum_dup6 := mnum_dup+'-07/09'
                                                mnum_dup7 := mnum_dup+'-08/09'
                                                mnum_dup8 := mnum_dup+'-09/09'
                                                mvenci := mdata + mintev
                                                mvenci1 := mdata + mintev1
                                                mvenci2 := mdata + mintev2
                                                mvenci3 := mdata + mintev3
                                                mvenci4 := mdata + mintev4
                                                mvenci5 := mdata + mintev5
                                                mvenci6 := mdata + mintev6
                                                mvenci7 := mdata + mintev7
                                                mvenci8 := mdata + mintev8
                                                mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /9) + mtot_ipi
                                                mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /9
                                                mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /9
                                                mvlr_dup3 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /9
                                                mvlr_dup4 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /9
                                                mvlr_dup5 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /9
                                                mvlr_dup6 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /9
                                                mvlr_dup7 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /9
                                                mvlr_dup8 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /9
                                        ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 10
                                                mnum_dup := mnum_dup+'-01/10'
                                                mnum_dup1 := mnum_dup+'-02/10'
                                                mnum_dup2 := mnum_dup+'-03/10'
                                                mnum_dup3 := mnum_dup+'-04/10'
                                                mnum_dup4 := mnum_dup+'-05/10'
                                                mnum_dup5 := mnum_dup+'-06/10'
                                                mnum_dup6 := mnum_dup+'-07/10'
                                                mnum_dup7 := mnum_dup+'-08/10'
                                                mnum_dup8 := mnum_dup+'-09/10'
                                                mnum_dup9 := mnum_dup+'-10/10'
                                                mvenci := mdata + mintev
                                                mvenci1 := mdata + mintev1
                                                mvenci2 := mdata + mintev2
                                                mvenci3 := mdata + mintev3
                                                mvenci4 := mdata + mintev4
                                                mvenci5 := mdata + mintev5
                                                mvenci6 := mdata + mintev6
                                                mvenci7 := mdata + mintev7
                                                mvenci8 := mdata + mintev8
                                                mvenci9 := mdata + mintev9
                                                mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /10) + mtot_ipi
                                                mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /10
                                                mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /10
                                                mvlr_dup3 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /10
                                                mvlr_dup4 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /10
                                                mvlr_dup5 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /10
                                                mvlr_dup6 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /10
                                                mvlr_dup7 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /10
                                                mvlr_dup8 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /10
                                                mvlr_dup9 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /10
                                        ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 11
                                                mnum_dup := mnum_dup+'-01/11'
                                                mnum_dup1 := mnum_dup+'-02/11'
                                                mnum_dup2 := mnum_dup+'-03/11'
                                                mnum_dup3 := mnum_dup+'-04/11'
                                                mnum_dup4 := mnum_dup+'-05/11'
                                                mnum_dup5 := mnum_dup+'-06/11'
                                                mnum_dup6 := mnum_dup+'-07/11'
                                                mnum_dup7 := mnum_dup+'-08/11'
                                                mnum_dup8 := mnum_dup+'-09/11'
                                                mnum_dup9 := mnum_dup+'-10/11'
                                                mnum_dup10:= mnum_dup+'-11/11'
                                                mvenci := mdata + mintev
                                                mvenci1 := mdata + mintev1
                                                mvenci2 := mdata + mintev2
                                                mvenci3 := mdata + mintev3
                                                mvenci4 := mdata + mintev4
                                                mvenci5 := mdata + mintev5
                                                mvenci6 := mdata + mintev6
                                                mvenci7 := mdata + mintev7
                                                mvenci8 := mdata + mintev8
                                                mvenci9 := mdata + mintev9
                                                mvenci10:= mdata + mintev10
                                                mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /11) + mtot_ipi
                                                mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /11
                                                mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /11
                                                mvlr_dup3 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /11
                                                mvlr_dup4 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /11
                                                mvlr_dup5 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /11
                                                mvlr_dup6 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /11
                                                mvlr_dup7 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /11
                                                mvlr_dup8 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /11
                                                mvlr_dup9 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /11
                                                mvlr_dup10:= (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /11
                                        ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 12
                                                mnum_dup := mnum_dup+'-01/12'
                                                mnum_dup1 := mnum_dup+'-02/12'
                                                mnum_dup2 := mnum_dup+'-03/12'
                                                mnum_dup3 := mnum_dup+'-04/12'
                                                mnum_dup4 := mnum_dup+'-05/12'
                                                mnum_dup5 := mnum_dup+'-06/12'
                                                mnum_dup6 := mnum_dup+'-07/12'
                                                mnum_dup7 := mnum_dup+'-08/12'
                                                mnum_dup8 := mnum_dup+'-09/12'
                                                mnum_dup9 := mnum_dup+'-10/12'
                                                mnum_dup10:= mnum_dup+'-11/12'
                                                mnum_dup11:= mnum_dup+'-12/12'
                                                mvenci := mdata + mintev
                                                mvenci1 := mdata + mintev1
                                                mvenci2 := mdata + mintev2
                                                mvenci3 := mdata + mintev3
                                                mvenci4 := mdata + mintev4
                                                mvenci5 := mdata + mintev5
                                                mvenci6 := mdata + mintev6
                                                mvenci7 := mdata + mintev7
                                                mvenci8 := mdata + mintev8
                                                mvenci9 := mdata + mintev9
                                                mvenci10:= mdata + mintev10
                                                mvenci11:= mdata + mintev11
                                                mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /12) + mtot_ipi
                                                mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /12
                                                mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /12
                                                mvlr_dup3 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /12
                                                mvlr_dup4 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /12
                                                mvlr_dup5 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /12
                                                mvlr_dup6 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /12
                                                mvlr_dup7 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /12
                                                mvlr_dup8 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /12
                                                mvlr_dup9 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /12
                                                mvlr_dup10:= (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /12
                                                mvlr_dup11:= (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /12
                                        ENDIF
                                        msobra := 0
                                        msobra := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub+mtot_ipi-mdesc_icm)  - (iat(mvlr_dup,2) + iat(mvlr_dup1,2) +iat(mvlr_dup2,2) +iat(mvlr_dup3,2) +iat(mvlr_dup4,2) + iat(mvlr_dup5,2) + iat(mvlr_dup6,2) + iat(mvlr_dup7,2) + iat(mvlr_dup8,2) + iat(mvlr_dup9,2) + iat(mvlr_dup10,2) + iat(mvlr_dup11,2))
                                        mvlr_dup := mvlr_dup + msobra
                
                                        @ 32,20 GET mnum_dup PICT '@!'
                                        @ 32,40 GET mvenci
                                        @ 32,58 GET mvlr_dup PICT '999,999.99'

                                        @ 33,20 GET mnum_dup1 PICT '@!'
                                        @ 33,40 GET mvenci1
                                        @ 33,58 GET mvlr_dup1 PICT '999,999.99'

                                        @ 34,20 GET mnum_dup2 PICT '@!'
                                        @ 34,40 GET mvenci2
                                        @ 34,58 GET mvlr_dup2 PICT '999,999.99'

                                        @ 35,20 GET mnum_dup3 PICT '@!'
                                        @ 35,40 GET mvenci3
                                        @ 35,58 GET mvlr_dup3 PICT '999,999.99'

                                        @ 36,20 GET mnum_dup4 PICT '@!'
                                        @ 36,40 GET mvenci4
                                        @ 36,58 GET mvlr_dup4 PICT '999,999.99'

                                        @ 37,20 GET mnum_dup5 PICT '@!'
                                        @ 37,40 GET mvenci5
                                        @ 37,58 GET mvlr_dup5 PICT '999,999.99'

                                        @ 38,20 GET mnum_dup6 PICT '@!'
                                        @ 38,40 GET mvenci6
                                        @ 38,58 GET mvlr_dup6 PICT '999,999.99'

                                        @ 39,20 GET mnum_dup7 PICT '@!'
                                        @ 39,40 GET mvenci7
                                        @ 39,58 GET mvlr_dup7 PICT '999,999.99'

                                        @ 40,20 GET mnum_dup8 PICT '@!'
                                        @ 40,40 GET mvenci8
                                        @ 40,58 GET mvlr_dup8 PICT '999,999.99'

                                        @ 41,20 GET mnum_dup9 PICT '@!'
                                        @ 41,40 GET mvenci9
                                        @ 41,58 GET mvlr_dup9 PICT '999,999.99'

                                        @ 42,20 GET mnum_dup10 PICT '@!'
                                        @ 42,40 GET mvenci10
                                        @ 42,58 GET mvlr_dup10 PICT '999,999.99'

                                        @ 43,20 GET mnum_dup11 PICT '@!'
                                        @ 43,40 GET mvenci11
                                        @ 43,58 GET mvlr_dup11 PICT '999,999.99'
                                        READ
                                        mopcao := op_simnao('S','Confirma as Duplicatas:')
                                        IF mopcao = 'N'
                                                LOOP
                                        ELSE
                                                EXIT
                                        ENDIF
                                ENDDO
                        ENDIF
                //ENDIF
                wvw_lclosewindow()
                m_set[1,135] := STRTRAN(m_set[1,135],'-','')
                m_set[1,135] := STRTRAN(m_set[1,135],'.','')

                cons_cli[1,26] := STRTRAN(cons_cli[1,26],'-','')
                cons_cli[1,26] := STRTRAN(cons_cli[1,26],'.','')
                i := mbase_aux := mpr_fat := mtot_ipi_dev := 0
                SR_BEGINTRANSACTION()
                        FOR i = 1 TO LEN(m_nota)
                                IF m_nota[i,5] = 0
                                        LOOP
                                ENDIF
                                mcons_prod:={}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_nota[i,21]),,.t.,@mcons_prod)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF mcod_fat = '02' .OR. mcod_fat = '  '
					mpr_fat := m_nota[i,12]
        	               	ELSE
	               	        	mpr_fat := m_nota[i,7]
	                       	ENDIF
                                //f++
                                //TRY
                                mcons_prod:={}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_nota[i,21]),,.t.,@mcons_prod)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF msai_ent = 'S'
                                        ccomm :="UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(mcons_prod[1,55] - m_nota[i,5])
                                        //ccomm := ccomm +",icm = "+sr_cdbvalue(aret[1,60] - iat((m_nota[i,20]/100) * (mpr_fat * m_nota[i,5]),2))
                                        IF EMPTY(cons_cli[1,33])
                                                mbase_aux := iat((mpr_fat * m_nota[i,5])+((mpr_fat * m_nota[i,5]) * (m_nota[i,24]/100)),2)
                                        ELSE
                                                mbase_aux := iat(mpr_fat * m_nota[i,5],2)
                                        ENDIF
                                        sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                'processo,ent_sai )'+;
                                                ' VALUES ('+;
                                                sr_cdbvalue(DATE())+','+; //1
                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                sr_cdbvalue(TIME())+','+; //3
                                                sr_cdbvalue(m_nota[i,21])+','+; //4
                                                sr_cdbvalue(m_nota[i,5])+','+; //5
                                                sr_cdbvalue(mcons_prod[1,55])+','+; //6
                                                sr_cdbvalue(mcons_prod[1,55] - m_nota[i,5])+','+; //7
                                                sr_cdbvalue(cod_operado)+','+; //8
                                                sr_cdbvalue('SACNF_E')+','+; //9
                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                sr_cdbvalue('NF-e: '+'NF'+mdocumento)+','+; //11
                                                sr_cdbvalue('S')+')',,.f.)

                                ELSE
                                        ccomm :="UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(mcons_prod[1,55] + m_nota[i,5])
                                        //ccomm := ccomm +",icm = "+sr_cdbvalue(aret[1,60] + iat((m_nota[i,20]/100) * (mpr_fat * m_nota[i,5]),2))
                                        IF EMPTY(cons_cli[1,33])
                                                mbase_aux := iat((mpr_fat * m_nota[i,5])+((mpr_fat * m_nota[i,5]) * (m_nota[i,24]/100)),2)
                                        ELSE
                                                mbase_aux := iat(mpr_fat * m_nota[i,5],2)
                                        ENDIF
                                        sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                'processo,ent_sai )'+;
                                                ' VALUES ('+;
                                                sr_cdbvalue(DATE())+','+; //1
                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                sr_cdbvalue(TIME())+','+; //3
                                                sr_cdbvalue(m_nota[i,21])+','+; //4
                                                sr_cdbvalue(m_nota[i,5])+','+; //5
                                                sr_cdbvalue(mcons_prod[1,55])+','+; //6
                                                sr_cdbvalue(mcons_prod[1,55] + m_nota[i,5])+','+; //7
                                                sr_cdbvalue(cod_operado)+','+; //8
                                                sr_cdbvalue('SACNF_E')+','+; //9
                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                sr_cdbvalue('NF-e: '+'NF'+mdocumento)+','+; //11
                                                sr_cdbvalue('E')+')',,.f.)
                                ENDIF
                                //sr_getconnection():exec("COMMIT",,.f.)
                                ccomm := ccomm +",data_atu = "+sr_cdbvalue(mdata_sis)
                                ccomm := ccomm + " WHERE cod_merc = "+sr_cdbvalue(m_nota[i,21])
                                sr_getconnection():exec(ccomm,,.f.)
                                sr_getconnection():exec("COMMIT",,.f.)
                                ccomm := 'INSERT INTO sacmovnt ('+;
                                'empresa        ,'+;//1
                                'modelo         ,'+;//2
                                'num_ped        ,'+;//3
                                'tipo_nota	,'+;//4
                                'documento      ,'+;//5
                                'serie    	,'+;//6
                                'codigo	        ,'+;//7
                                'produto        ,'+;//8
                                'cod_fab        ,'+;//9
                                'fabrica        ,'+;//10
                                'unidade        ,'+;//11
                                'data_s_e       ,'+;//12
                                'ent_sai        ,'+;//13
                                'quantd 	,'+;//14
                                'pr_venda       ,'+;//15
                                'vl_vend        ,'+;//16
                                'cod_vend       ,'+;//17
                                'cod_cli        ,'+;//18
                                'cliente        ,'+;//19
                                'uf_cli 	,'+;//20
                                'cgc_cli        ,'+;//21
                                'cpf_cli        ,'+;//22
                                'insc_cli       ,'+;//23
                                'icm            ,'+;//24
                                'ipi_aliq       ,'+;//25
                                'ipi            ,'+;//26
                                'vl_fatura      ,'+;//27
                                'icm_f 	        ,'+;//28
                                'icm_sub        ,'+;//29
                                'pr_unit        ,'+;//30
                                'cust_mer       ,'+;//31
                                'frete 	        ,'+;//32
                                'encargo_f      ,'+;//33
                                'disp_asse      ,'+;//34
                                'tipo 	        ,'+;//35
                                'isento 	,'+;//36
                                'sittrib	,'+;//37                'desc1 	        ,'+;//38
                                'peso 	        ,'+;//39
                                'peso_liq       ,'+;//40
                                'alimento       ,'+;//41
                                'bebida 	,'+;//42
                                'tp_venda       ,'+;//43
                                'cond_vezes     ,'+;//44
                                'cond_intev     ,'+;//45
                                'cod_nat        ,'+;//46
                                'conjunta       ,'+;//47
                                'obs1           ,'+;//48
                                'obs2           ,'+;//49
                                'obs3           ,'+;//50
                                'obs4           ,'+;//51
                                'obs5           ,'+;//52
                                'obs6           ,'+;//53
                                'cod_nota       ,'+;//54
                                'norm_ele       ,'+;//55
                                'desc1          ,'+;//56
                                'vlr_icm        ,'+;//57
                                'base_icm       ,'+;//58
                                'base_icmsu     ,'+;//59
                                'vlr_icmsub     ,'+;//60
                                'SR_DELETED )'+;
                                ' VALUES ('+;
                                sr_cdbvalue(mcodempresa         )+','+; //1
                                sr_cdbvalue(mmodelo             )+','+; //2
                                sr_cdbvalue(STRZERO(mnum_ped,6) )+','+; //3
                                sr_cdbvalue(mtipo_nota          )+','+; //4
                                sr_cdbvalue('NF'+mdocumento     )+','+; //5
                                sr_cdbvalue(mserie_not          )+','+; //6
                                sr_cdbvalue(m_nota[i,21]        )+','+; //7
                                sr_cdbvalue(m_nota[i,2]         )+','+; //8
                                sr_cdbvalue(m_nota[i,3]         )+','+; //9
                                sr_cdbvalue(m_nota[i,4]         )+','+; //10
                                sr_cdbvalue(m_nota[i,8]         )+','+; //11
                                sr_cdbvalue(mdata               )+','+; //12
                                sr_cdbvalue(msai_ent            )+','+; //13
                                sr_cdbvalue(m_nota[i,5]         )+','+; //14
                                sr_cdbvalue(m_nota[i,6]         )+','+; //15
                                sr_cdbvalue(iat(mpr_fat,4)    )+','+; //16
                                sr_cdbvalue(STRZERO(mcod_vend,3))+','+; //17
                                sr_cdbvalue(mcod_cli )+','+; //18
                                sr_cdbvalue(mcliente            )+','+; //19
                                sr_cdbvalue(muf_cli             )+','+; //20
                                sr_cdbvalue(cons_cli[1,32]     )+','+; //21
                                sr_cdbvalue(cons_cli[1,34]     )+','+; //22
                                sr_cdbvalue(cons_cli[1,33]     )+','+; //23
                                sr_cdbvalue(m_nota[i,20]        )+','+; //24
                                sr_cdbvalue(iat(m_nota[i,24],2))+','+; //25
                                sr_cdbvalue(iat(((mpr_fat*(m_set[1,6]/100+1)) * m_nota[i,5]) * (m_nota[i,24]/100),2))+','+; //26
                                sr_cdbvalue(iat(mpr_fat,2)    )+','+; //27
                                sr_cdbvalue(m_nota[i,13]     )+','+; //28
                                sr_cdbvalue(m_nota[i,22]     )+','+; //29
                                sr_cdbvalue(iat(mpr_fat,4) )+','+; //30
                                sr_cdbvalue(m_nota[i,33]     )+','+; //31
                                sr_cdbvalue(mfrete           )+','+; //32
                                sr_cdbvalue(mencargo         )+','+; //33
                                sr_cdbvalue(mseguro          )+','+; //34
                                sr_cdbvalue('03'             )+','+; //35
                                sr_cdbvalue(m_nota[i,14]     )+','+; //36
                                sr_cdbvalue(m_nota[i,35]     )+','+; //37                sr_cdbvalue(m_nota[i,11]     )+','+; //38
                                sr_cdbvalue(m_nota[i,9]      )+','+; //39
                                sr_cdbvalue(m_nota[i,18]     )+','+; //40
                                sr_cdbvalue(m_nota[i,10]     )+','+; //41
                                sr_cdbvalue(m_nota[i,17]     )+','+; //42
                                sr_cdbvalue(mtp_vend         )+','+; //43
                                sr_cdbvalue(mcond_vezes      )+','+; //44
                                sr_cdbvalue(STRZERO(mintev,2))+','+; //45
                                sr_cdbvalue(m_nota[i,36]     )+','+; //46
                                sr_cdbvalue(mno_ped_cli      )+','+; //47
                                sr_cdbvalue(mobs1            )+','+; //48
                                sr_cdbvalue(mobs2            )+','+; //49
                                sr_cdbvalue(mobs3            )+','+; //50
                                sr_cdbvalue(mobs4            )+','+; //51
                                sr_cdbvalue(mobs5            )+','+; //52
                                sr_cdbvalue(mobs6            )+','+; //53
                                sr_cdbvalue(mcod_nota        )+','+; //54
                                sr_cdbvalue('E'              )+','   //55
					
                                IF mtipo_nota = 'N'
                                        mtot_icmf := mtot_icmf + iat(m_nota[i,13] * ((mpr_fat*(m_set[1,6]/100+1)) * m_nota[i,5]),2)
                                        ccomm := ccomm + sr_cdbvalue(iat(((mpr_fat*(m_set[1,6]/100+1)) * m_nota[i,5])*.12,2))+','
					IF mcons_prod[1,63] > 0
                                                //IF ! EMPTY(mfrete) .AND. m_set[1,151] = 'N'
                                                //        m_vbc     := iat(((mpr_fat * m_nota[i,5])* mcons_prod[1,72]) + mfrete,2)
                                                //        m_vicms   := iat(m_vbc * (mcons_prod[1,62]/100),2)
                                                //ELSE
                                                        m_vbc     := iat((mpr_fat * m_nota[i,5])* mcons_prod[1,72],2)
                                                        m_vicms   := iat(m_vbc * (mcons_prod[1,62]/100),2)
                                                //ENDIF
						m_vbcst   := iat(((mpr_fat * m_nota[i,5]) * ((mcons_prod[1,63]/100)+1) * mcons_prod[1,72]),2)
						m_vicmsst := iat((m_vbcst * (mcons_prod[1,62] /100)) - m_vicms,2)
                                                ccomm := ccomm + sr_cdbvalue(m_vicms)+','
                                                ccomm := ccomm + sr_cdbvalue(m_vbc)+','
                                        ELSEIF VAL(m_nota[i,35]) = 40 .OR. VAL(m_nota[i,35])= 41 .OR. VAL(m_nota[i,35]) = 50
                                                mbase_icm := mbase_icm + 0
                                                //mtot_icm := mtot_icm + 0
                                                ccomm := ccomm + sr_cdbvalue(0)+','
                                                ccomm := ccomm + sr_cdbvalue(0)+','
                                        ELSEIF  m_nota[i,20] > 0
                                                IF m_nota[i,25] = 'S'
                                                        //mbase_icm = mbase_icm + iat((((mpr_fat * m_nota[i,5])*m_nota[i,34])),2)
                                                        //mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (((mpr_fat * m_nota[i,5])*m_nota[i,34])),2)
                                                        ccomm := ccomm + sr_cdbvalue(iat((m_nota[i,20]/100) * (((mpr_fat * m_nota[i,5])*m_nota[i,34])),2))+','
                                                        ccomm := ccomm + sr_cdbvalue(iat((((mpr_fat * m_nota[i,5])*m_nota[i,34])),2))+','
                                                ELSE
                                                        //mbase_icm = mbase_icm + iat((mpr_fat * m_nota[i,5]),2)
                                                        //mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (mpr_fat*m_nota[i,5]),2)

                                                        ccomm := ccomm + sr_cdbvalue(iat((m_nota[i,20]/100) * (mpr_fat*m_nota[i,5]),2))+','
                                                        ccomm := ccomm + sr_cdbvalue(iat((mpr_fat * m_nota[i,5]),2))+','
                                                ENDIF
                                        ELSE
                                                ccomm := ccomm + sr_cdbvalue(0)+','
                                                ccomm := ccomm + sr_cdbvalue(0)+','
                                                //mtot_icm := mtot_icm + 0
                                                //mbase_icm 	:= mbase_icm + 0
                                        ENDIF
                                ELSE
                                        ccomm := ccomm + sr_cdbvalue(0)+','
                                        ccomm := ccomm + sr_cdbvalue(0)+','
                                        ccomm := ccomm + sr_cdbvalue(0)+','
                                ENDIF
                                IF mcons_prod[1,63] > 0
                                        ccomm := ccomm + sr_cdbvalue(iat(m_vbcst,2))+','
                                        ccomm := ccomm + sr_cdbvalue(iat(m_vicmsst,2))+','
				ELSEIF ! EMPTY(m_nota[i,22])                                                    // 2.35
                                        //mbase_icmsub 	:= mbase_icmsub + (((mpr_fat * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                        //mvlr_icmsub 	:= mvlr_icmsub + (((mpr_fat * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_set[1,20]/100) - (m_nota[i,20]/100) * ((mpr_fat * (m_set[1,6]/100+1)) * m_nota[i,5])
                                        //ccomm := ccomm + sr_cdbvalue(iat((((mpr_fat * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1)),2))+','
                                        //ccomm := ccomm + sr_cdbvalue(iat((((mpr_fat * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_set[1,20]/100) - (m_nota[i,20]/100) * ((mpr_fat * (m_set[1,6]/100+1)) * m_nota[i,5]),2))+','
                                        ccomm := ccomm + sr_cdbvalue(iat((mpr_fat * m_nota[i,5])*m_nota[i,22],2))+','
                                        ccomm := ccomm + sr_cdbvalue(iat((((mpr_fat * m_nota[i,5])*m_nota[i,22])*(m_set[1,20]/100)) - ((mpr_fat  * m_nota[i,5]) * (m_nota[i,20]/100)),2))+','
                                ELSE
                                        ccomm := ccomm + sr_cdbvalue(0)+','
                                        ccomm := ccomm + sr_cdbvalue(0)+','
                                ENDIF
                                ccomm := ccomm + sr_cdbvalue(' ')+')'
                                sr_getconnection():exec(ccomm,,.f.)
                        NEXT
                        sr_committransaction()
                sr_endtransaction()
                sr_getconnection():exec("COMMIT",,.f.)
                mdoc_aux := mdocumento
                //mbase_icm := mbase_icm + mfrete
                //mtot_icm := mtot_icm + (mfrete * (m_nota[1,20]/100))
                //mtot_icm := iat(mtot_icm,2)
        ENDIF
        //ATENCAO(ALLTRIM(mrefnfe) )
        mensagem('CRIANDO a Nota No. '+mdocumento)
                //mArq := FCREATE('ENTNFE.TMP')
        sLinhas     :=  '[Identificacao]'                  + m_qp
        mdata_nfe := DTOC(mdata)+' '+time()
        IF EMPTY(mdata_sai)
                mdata_sai := ''
        ELSE
                mdata_sai := DTOC(mdata_sai)+' '+time()
        ENDIF
        m_set[1,135] := STRTRAN(m_set[1,135],'-','')
        m_set[1,135] := STRTRAN(m_set[1,135],'.','')
        cons_cli[1,26] := STRTRAN(cons_cli[1,26],'-','')
        cons_cli[1,26] := STRTRAN(cons_cli[1,26],'.','')
        IF ALLTRIM(cons_cli[1,33]) = '' .OR. EMPTY(cons_cli[1,33])
                mindIEDest := '9'
        ELSEIF ALLTRIM(cons_cli[1,33]) = 'ISENTO'
                mindIEDest := '2'
        ELSE
                mindIEDest := '1'
        ENDIF
        sLinhas := sLinhas + 'NaturezaOperacao='+ALLTRIM(mnatureza)          + m_qp + ; //'Modelo='+ALLTRIM(mmodelo)                      + m_qp + ;
                        'Modelo=55'                      + m_qp + ;
                        'Serie='+ALLTRIM(STRZERO(VAL(mserie_not),2))    + m_qp + ;	//'Codigo=0'+ALLTRIM(mdocumento)                   + m_qp + ;
                        'Codigo=0'                                      + m_qp + ;
                        'Numero='+ALLTRIM(mdocumento)                   + m_qp + ;
                        'Serie='+ALLTRIM(STR(VAL(mserie_not)))          + m_qp + ;
                        'Emissao='+mdata_nfe                   + m_qp + ;
                        'Saida='+mdata_sai                     + m_qp + ;
                        IF(msai_ent = 'S','Tipo=1','Tipo=0')            + m_qp + ;
                        IF(mtp_vend = 'AP','FormaPag=1',IF(mtp_vend = 'AV','FormaPag=0','FormaPag=2'))   + m_qp +;
                        'Finalidade='+mtipo_nfe                         + m_qp + ;
                        'idDest='+IF(cons_cli[1,25] = ALLTRIM(m_set[1,19]),'1','2')          + m_qp + ;
                        'indFinal='+ALLTRIM(mindFinal)                  + m_qp + ;
                        'indPress='+ALLTRIM(mindPress)                  + m_qp + ;
                        'Tplmp=1'                                       + m_qp + ;
                        '[NFRef001]'                                    + m_qp + ;
                        'Tipo='+ALLTRIM(mtipo_sigla)                    + m_qp + ;
                        'IE='+ALLTRIM(mei)                              + m_qp + ;
                        'refNFe='+ALLTRIM(mrefnfe)                      + m_qp + ;
                        'refCTe='+ALLTRIM(mrefcte)                      + m_qp + ;
                        'ModECF='+ALLTRIM(mmodecf)                      + m_qp + ;
                        'nECF='+ALLTRIM(mnecf)                          + m_qp + ;
                        'nCOO='+ALLTRIM(mncoo)                          + m_qp + ;
                        'ModFrete='+ALLTRIM(mfrete_trans)               + m_qp + ;
                        '[Emitente]'                                    + m_qp + ;
                        'CRT='+mcrt                                     + m_qp + ;
                        'CNPJCPF='+SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2)+ m_qp + ;
                        'xNome='+ALLTRIM(m_set[1,129])                  + m_qp + ;
                        'xFant='+ALLTRIM(m_set[1,130])               + m_qp + ;
                        'IE='+ALLTRIM(m_set[1,128])                     + m_qp + ;
                        'xLgr='+ALLTRIM(m_set[1,132])             + m_qp + ;
                        'Nro='+ALLTRIM(m_set[1,160])                 + m_qp + ;
                        'xCpl='+ALLTRIM(m_set[1,161])            + m_qp + ;
                        'xBairro='+ALLTRIM(m_set[1,133])                 + m_qp + ;
                        'cMun='+ALLTRIM(mcod_cid_emit)             + m_qp + ;
                        'xMun='+ALLTRIM(m_set[1,134])                 + m_qp + ;
                        'UF='+ALLTRIM(m_set[1,19])                      + m_qp + ;
                        'CEP='+ALLTRIM(m_set[1,135])                    + m_qp + ;
                        'Fone='+ALLTRIM(m_set[1,136])                   + m_qp + ;
                        '[Destinatario]'                                + m_qp + ;
                        IF( ! EMPTY(cons_cli[1,32]),'CNPJ='+ALLTRIM(cons_cli[1,32]),'CNPJ='+ALLTRIM(cons_cli[1,34]))+ m_qp+;
                        'indIEDest='+mindIEDest                         + m_qp + ;
                        'IE='+ALLTRIM(cons_cli[1,33])                  + m_qp + ;
                        'NomeRazao='+STR(cons_cli[1,2],5)+' - '+ALLTRIM(cons_cli[1,3]) + m_qp + ;
                        'Fone='+ALLTRIM(cons_cli[1,29])                          + m_qp + ;
                        'CEP='+SUBSTR(ALLTRIM(cons_cli[1,26]),1,8)                           + m_qp + ;
                        'Logradouro='+ALLTRIM(cons_cli[1,21])                    + m_qp + ;
                        'Numero='+RTRIM(cons_cli[1,136])                         + m_qp + ;
                        'Complemento='+ALLTRIM(cons_cli[1,137])                  + m_qp + ;
                        'Bairro='+ALLTRIM(cons_cli[1,22])                        + m_qp + ;
                        'CidadeCod='+ALLTRIM(mcons_cid[1,1])                      + m_qp + ;
                        'Cidade='+ALLTRIM(cons_cli[1,24])                        + m_qp + ;
                        'UF='+cons_cli[1,25]                                     + m_qp
                        IF ALLTRIM(m_set[1,19]) = 'BA'
                                sLinhas := slinhas +'[autXML001]'                                + m_qp + ;
                                                    'CNPJ=13937073000156'                   + m_qp
                        ENDIF
        m_email := cons_cli[1,27]
        i := 0
        //mbase_icm := mfrete
        /*
        FOR i = 1 TO LEN(m_nota)
                mv_outro := mv_outro + m_nota[i,5]
        NEXT
        */
        mv_outro := mencargo / LEN(m_nota)
        mtot_ipi_dev := 0
        FOR i = 1 TO LEN(m_nota)
                IF m_nota[i,5] = 0
                        LOOP
                ENDIF
                IF mcod_fat = '02' .OR. mcod_fat = '  '
                        mpr_fat := m_nota[i,12]
        	ELSE
                        mpr_fat := m_nota[i,7]
        	ENDIF
                mpr_fat := iat(mpr_fat,2)
                mcons_prod := {}
                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_nota[i,21]),,.t.,@mcons_prod)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(mcons_prod) = 0
                        LOOP
                ENDIF
                mtot_imposto := mtot_imposto + iat(((m_nota[i,5] * mpr_fat) * ((ver_ncm(mcons_prod[1,70],mcons_prod[1,68])+18) / 100)),m_set[1,103])
                sLinhas := slinhas +    '[Produto'+STRZERO(i,3)+']'      + m_qp + ; //'CFOP='+STRTRAN(mcod_nat,'.','') + m_qp + ;
                                        'CFOP='+STRTRAN(m_nota[i,36],'.','') + m_qp + ;
                                        'Codigo='+STRZERO(VAL(mcons_prod[1,8]),6)+ m_qp + ;
                                        IF(mcons_prod[1,25] = 'N',IF(! EMPTY(mcons_prod[1,99]),'Descricao='+ALLTRIM(mcons_prod[1,99]),'Descricao='+ALLTRIM(m_nota[i,2])),'Descricao='+ALLTRIM(m_nota[i,2]))+ m_qp + ;
                                        IF(m_set[1,14] = 'S',IF(LEN(ALLTRIM(mcons_prod[1,2])) >= 13,' - EAN: '+ALLTRIM(mcons_prod[1,2]),''),'')+ m_qp +;
                                        IF(LEN(ALLTRIM(mcons_prod[1,2])) >= 13,'EAN='+ALLTRIM(mcons_prod[1,2]),'EAN=SEM GTIN')+ m_qp +;
                                        IF(LEN(ALLTRIM(mcons_prod[1,2])) >= 13,'cEANTrib='+ALLTRIM(mcons_prod[1,2]),'cEANTrib=SEM GTIN')+ m_qp +;
                                        'NCM='+ALLTRIM(mcons_prod[1,70])+ m_qp
                                        mcest := ALLTRIM(mcons_prod[1,114])
                                        IF EMPTY(mcest)
                                                mcest := ver_cest(ALLTRIM(mcons_prod[1,70]))
                                        ENDIF
                                        //ATENCAO(ver_cest(ALLTRIM(mcons_prod[1,70])))
                                        IF ! EMPTY(mcest)
                                                sLinhas := slinhas +'CEST='+mcest+ m_qp
                                        ENDIF
                                        sLinhas := slinhas +'Unidade='+ALLTRIM(m_nota[i,8])+ m_qp
                                        IF ! EMPTY(mcons_prod[1,118])
                                                sLinhas := slinhas +'uTrib='+ALLTRIM(mcons_prod[1,118])+ m_qp
                                        ENDIF
                                        sLinhas := slinhas + 'Quantidade='+STRTRAN(ALLTRIM(TRANSFORM(m_nota[i,5],m_set[1,99])),',','')+ m_qp + ;
                                        'ValorUnitario='+ALLTRIM(TRANSFORM(iat(mpr_fat),STRTRAN(ALLTRIM(m_set[1,98]),',','')))+ m_qp + ;
                                        'ValorTotal='+ALLTRIM(TRANSFORM(iat(mpr_fat)*m_nota[i,5],STRTRAN(ALLTRIM(m_set[1,98]),',','')))+ m_qp + ;
                                        'Voutro='+ALLTRIM(TRANSFORM(iat(mv_outro,2),STRTRAN(ALLTRIM(m_set[1,98]),',','')))+ m_qp
                                        IF ! EMPTY(mfrete) .AND. m_set[1,151] = 'N'
                                                sLinhas := slinhas + 'vFrete='+ALLTRIM(TRANSFORM(mvlr_frete[i],STRTRAN(ALLTRIM(m_set[1,98]),',','')))+ m_qp
                                        ENDIF
                                        IF ! EMPTY(mno_ped_cli)
                                                sLinhas := slinhas +'xPed='+mno_ped_cli+ m_qp + ;
                                                                    'nItemPed='+STRZERO(i,6)+ m_qp
                                        ENDIF
                                        sLinhas := slinhas +'[ICMS'+STRZERO(i,3)+']'+ m_qp
                                        //MvCredICMSSN := (iat(mpr_fat,2)*m_nota[i,5]) * 0.05
                                        IF m_set[1,126] = 'S'
                                                sLinhas := slinhas +'CSOSN='+ALLTRIM(STRZERO(VAL(m_nota[i,35]),3))+ m_qp + ;
                                                                    'Origem=0'+ m_qp +; //+SUBSTR(m_nota[i,35],1,1)+ m_qp +;
                                                                    'ModalidadeST=4'+ m_qp
                                                                    //'pCredSN=5'+ m_qp+;
                                                                    //'vCredICMSSN='+ALLTRIM(TRANSFORM(MvCredICMSSN,STRTRAN(ALLTRIM(m_set[1,98]),',','')))+ m_qp
                                                IF m_nota[i,35] = '900'
                                                        mbase_icm = mbase_icm + iat((iat(mpr_fat) * m_nota[i,5]),2)
                                                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * iat((iat(mpr_fat)*m_nota[i,5]),2),2)
                                                        m_vbc     := iat((mpr_fat * m_nota[i,5]) * mcons_prod[1,72])
                                                        m_vicms   := iat(m_vbc * (m_nota[i,20]/100))
                                                        m_vbcst   := iat(((mpr_fat * m_nota[i,5]) * ((mcons_prod[1,63]/100)+1) * mcons_prod[1,72]))
                                                        m_vicmsst := iat((m_vbcst * (mcons_prod[1,62] /100)) - m_vicms)
                                                        //m_vicmsst := iat((m_vbcst * (m_nota[i,20] /100)) - m_vicms)
                                                        //atencao('BASE ICMSST:' + TRANSFORM(m_vbcst,'999,999.99')+' valor icms:'+TRANSFORM(m_vicms,'999,999.99')+' valor icmsST:'+TRANSFORM(m_vicmsst,'999,999.99'))
                                                        sLinhas := slinhas +    'vBC='+ALLTRIM(TRANSFORM(iat((iat(mpr_fat) * m_nota[i,5]),2),'999999.99'))+ m_qp + ;
                                                                                'pICMS='+ALLTRIM(TRANSFORM(m_nota[i,20],'999.99'))+ m_qp + ;
                                                                                'vICMS='+ALLTRIM(TRANSFORM(iat((m_nota[i,20]/100) * iat((iat(mpr_fat)*m_nota[i,5]),2),2),'999999.99'))+ m_qp +;
                                                                                'pRedBCEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                'vBCEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                'pICMSEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                'vICMSEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                        'pRedBC='+ALLTRIM(TRANSFORM(mcons_prod[1,72],'99.9999'))+ m_qp + ;
                                                                        'pMVAST='+ALLTRIM(TRANSFORM(mcons_prod[1,63],'999999.99'))+ m_qp +;
                                                                        'pRedBCST='+ALLTRIM(TRANSFORM(mcons_prod[1,72],'99.9999'))+ m_qp + ;
                                                                        'vBCST='+ALLTRIM(TRANSFORM(m_vbcst,'999999.99'))+ m_qp + ;
                                                                        'pICMSST='+ALLTRIM(TRANSFORM(mcons_prod[1,62],'999999.99'))+ m_qp+;
									'vICMSST='+ALLTRIM(TRANSFORM(m_vicmsst,'999999.99'))+ m_qp

                                                        mbase_fcp := iat((iat(mpr_fat) * m_nota[i,5]),2)
	              					mbase_icmsub := mbase_icmsub + m_vbcst
	               					mvlr_icmsub := mvlr_icmsub + m_vicmsst

                                                ELSE
                                                        mbase_icm := mbase_icm + 0
                                                        mtot_icm := mtot_icm + 0
                                                ENDIF
                                        ELSE
                                                //sLinhas := slinhas + IF(LEN(ALLTRIM(mcons_prod[1,68])) > 3,'CST='+STRZERO(VAL(mcons_prod[1,68]),3),'CST='+STRZERO(VAL(mcons_prod[1,68]),2))+ m_qp
                                                IF ! EMPTY(mcons_prod[1,117])
                                                        sLinhas := slinhas + 'CST=61'+ m_qp +;
                                                                                'Origem=0'+ m_qp
                                                                                //'pST=0'+ m_qp + ;
                                                                                //'vICMSSubstituto=0'+ m_qp
                                                ELSE
                                                        sLinhas := slinhas + IF(LEN(ALLTRIM(m_nota[i,35])) > 3,'CST='+STRZERO(VAL(m_nota[i,35]),3),'CST='+STRZERO(VAL(m_nota[i,35]),2))+ m_qp +;
                                                                                'Origem=0'+ m_qp
                                                ENDIF
                                                //atencao(sLinhas)
                                                IF mcons_prod[1,63] > 0
                                                        m_vbc     := iat((mpr_fat * m_nota[i,5]) * mcons_prod[1,72])
                                                        m_vicms   := iat(m_vbc * (mcons_prod[1,62]/100))
                                                        m_vbcst   := iat(((mpr_fat * m_nota[i,5]) * ((mcons_prod[1,63]/100)+1) * mcons_prod[1,72]))
                                                        m_vicmsst := iat((m_vbcst * (mcons_prod[1,62] /100)) - m_vicms)
                                                        sLinhas := slinhas +    'pRedBC='+ALLTRIM(TRANSFORM(mcons_prod[1,72],'99.9999'))+ m_qp + ;
						                        'vBC='+ALLTRIM(TRANSFORM(m_vbc,'999999.99'))+ m_qp + ;
                                                                        'pICMS='+ALLTRIM(TRANSFORM(mcons_prod[1,62],'999.99'))+ m_qp + ;
                                                                        'vICMS='+ALLTRIM(TRANSFORM(m_vicms,'999999.99'))+ m_qp +;
                                                                        'pMVAST='+ALLTRIM(TRANSFORM(mcons_prod[1,63],'999999.99'))+ m_qp +;
                                                                        'pRedBCST='+ALLTRIM(TRANSFORM(mcons_prod[1,72],'99.9999'))+ m_qp + ;
                                                                        'vBCST='+ALLTRIM(TRANSFORM(m_vbcst,'999999.99'))+ m_qp + ;
                                                                        'pICMSST='+ALLTRIM(TRANSFORM(mcons_prod[1,62],'999999.99'))+ m_qp+;
									'vICMSST='+ALLTRIM(TRANSFORM(m_vicmsst,'999999.99'))+ m_qp +;
									'ModalidadeST=4' + m_qp
                                                        mbase_icm := mbase_icm + m_vbc
                                                        mtot_icm := mtot_icm + m_vicms
	              					mbase_icmsub := mbase_icmsub + m_vbcst
	               					mvlr_icmsub := mvlr_icmsub + m_vicmsst
		              			ELSEIF m_nota[i,25] = 'S' //DESCONTO DE ICMS
                                                        IF ! EMPTY(m_nota[i,20])
                                                                IF EMPTY(cons_cli[1,33])
                                                                        IF VAL(m_nota[i,35]) = 40 .OR. VAL(m_nota[i,35])= 41 .OR. VAL(m_nota[i,35]) = 50
                                                                                mbase_icm := mbase_icm + 0
                                                                                mtot_icm := mtot_icm + 0
                                                                        ELSE
                                                                	       	mbase_icm := mbase_icm + iat(((iat(mpr_fat,2) * m_nota[i,5])*m_nota[i,34])+((iat(mpr_fat,2) * m_nota[i,5]) * (m_nota[i,24]/100)),2)
                                                                                mtot_icm := mtot_icm + iat(m_nota[i,20]/100,2) * iat(((iat(mpr_fat,2) * m_nota[i,5])*m_nota[i,34])+iat(mpr_fat * m_nota[i,5],2) * (iat(m_nota[i,24],2)/100),2)
                                                                        ENDIF
                                                                        sLinhas := slinhas +'vBC='+ALLTRIM(TRANSFORM(iat(((iat(mpr_fat,2) * m_nota[i,5])*m_nota[i,34])+((iat(mpr_fat,2) * m_nota[i,5]) * (m_nota[i,24]/100)),2),'999999.99'))+ m_qp + ;
                                                                                        'pICMS='+ALLTRIM(TRANSFORM(m_nota[i,20],'999.99'))+ m_qp + ;
                                                                                        'vICMS='+ALLTRIM(TRANSFORM(iat(m_nota[i,20]/100,2) * iat(((iat(mpr_fat,2) * m_nota[i,5])*m_nota[i,34])+iat(mpr_fat * m_nota[i,5],2) * (iat(m_nota[i,24],2)/100),2),'999999.99'))+ m_qp+;
                                                                                        'pRedBCEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                        'vBCEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                        'pICMSEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                        'vICMSEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp
                                                                        mbase_fcp := iat(((iat(mpr_fat,2) * m_nota[i,5])*m_nota[i,34])+((iat(mpr_fat,2) * m_nota[i,5]) * (m_nota[i,24]/100)),2)

                                                                ELSE
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
                                                                ENDIF
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
                                                        IF ! EMPTY(m_nota[i,20])
                                                                IF EMPTY(cons_cli[1,33])
                                                                        IF VAL(m_nota[i,35]) = 40 .OR. VAL(m_nota[i,35])= 41 .OR. VAL(m_nota[i,35]) = 50
                                                                                mbase_icm := mbase_icm + 0
                                                                                mtot_icm := mtot_icm + 0
                                                                        ELSE
                                                                                mbase_icm := mbase_icm + iat((iat(mpr_fat) * m_nota[i,5])+((iat(mpr_fat) * m_nota[i,5]) * (m_nota[i,24]/100)),2)
                                                                                mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * iat((iat(mpr_fat) * m_nota[i,5])+((iat(mpr_fat) * m_nota[i,5]) * (m_nota[i,24]/100)),2),2)
                                                                        ENDIF
                                                                        sLinhas := slinhas +    'vBC='+ALLTRIM(TRANSFORM(iat((iat(mpr_fat) * m_nota[i,5])+((iat(mpr_fat) * m_nota[i,5]) * (m_nota[i,24]/100)),2),'999999.99'))+ m_qp + ;
                                                                                                'pICMS='+ALLTRIM(TRANSFORM(m_nota[i,20],'999.99'))+ m_qp + ;
                                                                                                'vICMS='+ALLTRIM(TRANSFORM(iat((m_nota[i,20]/100) * iat((iat(mpr_fat) * m_nota[i,5])+((iat(mpr_fat) * m_nota[i,5]) * (m_nota[i,24]/100)),2),2),'999999.99'))+ m_qp +;
                                                                                                'pRedBCEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                                'vBCEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                                'pICMSEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                                'vICMSEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp

                                                                                mbase_fcp := iat((iat(mpr_fat) * m_nota[i,5])+((iat(mpr_fat) * m_nota[i,5]) * (m_nota[i,24]/100)),2)

                                                                ELSE
                                                                        IF VAL(m_nota[i,35]) = 40 .OR. VAL(m_nota[i,35])= 41 .OR. VAL(m_nota[i,35]) = 50
                                                                                mbase_icm := mbase_icm + 0
                                                                                mtot_icm := mtot_icm + 0
                                                                        ELSE
                                                                                mbase_icm = mbase_icm + iat((iat(mpr_fat) * m_nota[i,5]),2)
                                                                                mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * iat((iat(mpr_fat)*m_nota[i,5]),2),2)
                                                                        ENDIF
                                                                        sLinhas := slinhas +    'vBC='+ALLTRIM(TRANSFORM(iat((iat(mpr_fat) * m_nota[i,5]),2),'999999.99'))+ m_qp + ;
                                                                                                'pICMS='+ALLTRIM(TRANSFORM(m_nota[i,20],'999.99'))+ m_qp + ;
                                                                                                'vICMS='+ALLTRIM(TRANSFORM(iat((m_nota[i,20]/100) * iat((iat(mpr_fat)*m_nota[i,5]),2),2),'999999.99'))+ m_qp +;
                                                                                                'pRedBCEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                                'vBCEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                                'pICMSEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                                'vICMSEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp

                                                                                mbase_fcp := iat((iat(mpr_fat) * m_nota[i,5]),2)
                                                                ENDIF
                                                        ELSE
                                                                sLinhas := slinhas +    'vBC='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                        'pICMS='+ALLTRIM(TRANSFORM(m_nota[i,20],'999.99'))+ m_qp + ;
                                                                                        'vICMS='+ALLTRIM(TRANSFORM(iat((m_nota[i,20]/100) * iat((iat(mpr_fat)*m_nota[i,5]),2),2),'999999.99'))+ m_qp+;
                                                                                        'pRedBCEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                        'vBCEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                        'pICMSEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                        'vICMSEfet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp
                                                                                mbase_fcp := 0
                                                        ENDIF
                                                        *
                                                        IF cons_cli[1,25] <> m_set[1,19] .AND. EMPTY(cons_cli[1,32])
                                                                mdif_aliq := m_set[1,20] / 2
                                                                //mdif_aliq := m_set[1,20] - m_nota[i,20]
                                                                //mvICMSUFDest := (mbase_fcp * (mdif_aliq /100)) * .4
                                                                //mvICMSUFRemet:= (mbase_fcp * (mdif_aliq /100)) - mvICMSUFDest
                                                                //mtICMSUFDest := mtICMSUFDest + mvICMSUFDest
                                                                //mtICMSUFRemet:= mtICMSUFRemet + mvICMSUFRemet
                                                                //IF cons_cli[1,25]= 'SP'
                                                                //        mtFCPUFDest := mbase_fcp*.02
                                                                //ELSE
                                                                //        mtFCPUFDest := mbase_fcp*.01
                                                                //ENDIF
                                                                sLinhas := slinhas +'[ICMSUFDest'+STRZERO(i,3)+']'+ m_qp + ;
                                                                                     'vBCUFDest='+ALLTRIM(TRANSFORM(mbase_fcp,'999999.99'))+ m_qp + ;
                                                                                     'pFCPUFDest='+ALLTRIM(TRANSFORM(0,'999.99'))+ m_qp + ;
                                                                                     'pICMSUFDest='+ALLTRIM(TRANSFORM(m_nota[i,20],'999.99'))+ m_qp + ;
                                                                                     'pICMSInter='+ALLTRIM(TRANSFORM(m_nota[i,20],'999.99'))+ m_qp + ;
                                                                                     'pICMSInterPart='+ALLTRIM(TRANSFORM(100,'999.99'))+ m_qp + ;
                                                                                     'vFCPUFDest='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ; //'vICMSUFDest='+ALLTRIM(TRANSFORM(mbase_fcp * (mdif_aliq/100),'999999.99'))+ m_qp + ;
                                                                                     'vICMSUFDest='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                     'vICMSUFRemet='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp
                                                                                     //mtICMSUFDest := mtICMSUFDest + (mbase_fcp * (mdif_aliq/100))
                                                                                     mtICMSUFDest := mtICMSUFDest + 0

                                                        ENDIF
                                                ENDIF

                                                IF mtipo_nfe = '4'
                                                        sLinhas := slinhas +'[impostoDevol'+STRZERO(i,3)+']'+ m_qp+;
                                                                            'pDevol='+ALLTRIM(TRANSFORM(m_nota[i,40],'999999.99'))+ m_qp + ;
                                                                            'vIPIDevol='+ALLTRIM(TRANSFORM((iat(mpr_fat)*m_nota[i,5])*(m_nota[i,40]/100),'999999.99'))+ m_qp
                                                        mtot_ipi_dev += (iat(mpr_fat)*m_nota[i,5])*(m_nota[i,40]/100)
                                                ELSE
        	               				IF ! EMPTY(m_nota[i,24])
                                                                 sLinhas := slinhas +  '[IPI'+STRZERO(i,3)+']'+ m_qp + ;
                                                                        IF(LEN(ALLTRIM(m_nota[i,35])) > 3,'CST='+STRZERO(VAL(m_nota[i,35]),3),'CST='+STRZERO(VAL(m_nota[i,35]),2))+ m_qp + ;
                                                                        'vBC='+ALLTRIM(TRANSFORM(iat((iat(mpr_fat,2) * m_nota[i,5]),2),'999999.99'))+ m_qp + ;
                                                                        'pIPI='+ALLTRIM(TRANSFORM(m_nota[i,24],'999999.99'))+ m_qp + ;
                                                                        'vIPI'+ALLTRIM(TRANSFORM((iat(mpr_fat)*m_nota[i,5])*(m_nota[i,24]/100),'999999.99'))+ m_qp
                                                        ENDIF
                                                ENDIF
                                                IF ! EMPTY(mcons_prod[1,117])
                                                        sLinhas := slinhas +'[COMB'+STRZERO(i,3)+']'+ m_qp +;
                                                                            'cProdANP='+mcons_prod[1,117]+ m_qp + ;
                                                                            'descANP=GLP'+ m_qp + ;
                                                                            'pGLP=100.00'+ m_qp + ;
                                                                            'UFCons='+cons_cli[1,25]+ m_qp

                                                                            //'[ICMS61'+STRZERO(i,3)+']'+ m_qp + ;
                                                                            //'CST=61'+ m_qp +;
                                                                            //'Origem=0'+ m_qp + ;
                                                                            //'adRemICMSRet='+ALLTRIM(TRANSFORM(mcons_prod[1,119],'99.9999'))+ m_qp + ;
                                                                            //'vICMSMonoRet='+STRTRAN(ALLTRIM(TRANSFORM(m_nota[i,5]*mcons_prod[1,119],m_set[1,99])),',','')+ m_qp


                                                ENDIF
                                                IF ! (VAL(m_nota[i,35]) = 40 .OR. VAL(m_nota[i,35])= 41 .OR. VAL(m_nota[i,35]) = 50) .AND. mtipo_nfe # '4'
                                                        sLinhas := slinhas +'[PIS'+STRZERO(i,3)+']'+ m_qp+;
                                                                            'CST='+m_nota[i,38]+ m_qp + ;
                                                                            'vBC='+ALLTRIM(TRANSFORM(iat((iat(mpr_fat,2) * m_nota[i,5]),2),'999999.99'))+ m_qp + ;
                                                                            'PPIS='+ALLTRIM(TRANSFORM(m_nota[i,40],'999999.99'))+ m_qp + ;
                                                                            'vPIS='+ALLTRIM(TRANSFORM((iat(mpr_fat)*m_nota[i,5])*(m_nota[i,40]/100),'999999.99'))+ m_qp
                                                                            mpis := mpis + (iat(mpr_fat)*m_nota[i,5])*(m_nota[i,40]/100)

                                                        sLinhas := slinhas +'[COFINS'+STRZERO(i,3)+']'+ m_qp+;
                                                                            'CST='+m_nota[i,39]+ m_qp + ;
                                                                            'vBC='+ALLTRIM(TRANSFORM(iat((iat(mpr_fat,2) * m_nota[i,5]),2),'999999.99'))+ m_qp + ;
                                                                            'PCOFINS='+ALLTRIM(TRANSFORM(m_nota[i,41],'999999.99'))+ m_qp + ;
                                                                            'vCOFINS='+ALLTRIM(TRANSFORM((iat(mpr_fat)*m_nota[i,5])*(m_nota[i,41]/100),'999999.99'))+ m_qp
                                                                            mconfis := mconfis + (iat(mpr_fat)*m_nota[i,5])*(m_nota[i,41]/100)
                                                ENDIF
                                        ENDIF

        NEXT
        IF mtipo_nota = 'N'
                mtot_nota := mtot_nota  - micms_desc
        ENDIF
        IF ! EMPTY(mfrete) .AND. m_set[1,151] = 'N'
                mbase_icm := mbase_icm + mfrete
                IF cons_cli[1,25] <> m_set[1,19]
                        mtot_icm  := mtot_icm + (mfrete * .12)
                ELSEIF EMPTY(m_set[1,20])
                        mtot_icm  := mtot_icm + (mfrete * .18)
                ELSE
                        mtot_icm  := mtot_icm + (mfrete * (m_set[1,20]/100))
                ENDIF
        ENDIF

        sLinhas := slinhas + '[Total]'+ m_qp
        IF mtipo_nota = 'C'
                sLinhas := slinhas + 'BaseICMS='+ALLTRIM(TRANSFORM(cbase_icm,'999999.99'))+ m_qp + ;
                'ValorICMS='+ALLTRIM(TRANSFORM(ctot_icm,'999999.99'))+ m_qp
                IF cons_cli[1,25] <> m_set[1,19]
                        IF EMPTY(cons_cli[1,32])
                                sLinhas := slinhas + 'vICMSUFDest='+ALLTRIM(TRANSFORM(mtICMSUFDest,'999999.99'))+ m_qp
                        ELSE
                                sLinhas := slinhas + 'vFCPUFDest='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp
                        ENDIF
                ENDIF
                sLinhas := slinhas + 'ValorProduto='+ALLTRIM(TRANSFORM(ctot_prod,'999999.99'))+ m_qp + ;
                'BaseICMSSubstituicao='+ALLTRIM(TRANSFORM(cbase_icmf,'999999.99'))+ m_qp + ;
                'ValorICMSSubstituicao='+ALLTRIM(TRANSFORM(ctot_icmf,'999999.99'))+ m_qp
                IF m_set[1,151] = 'N'
                        sLinhas := slinhas + 'ValorFrete='+ALLTRIM(TRANSFORM(mfrete,'999999.99'))+ m_qp
                ENDIF
                sLinhas := slinhas + 'ValorSeguro='+ALLTRIM(TRANSFORM(mseguro,'999999.99'))+ m_qp + ;
                'ValorIPI='+ALLTRIM(TRANSFORM(ctot_ipi,'999999.99'))+ m_qp + ;
                'VPIS='+ALLTRIM(TRANSFORM(mpis,'999999.99'))+ m_qp + ;
                'VCOFINS='+ALLTRIM(TRANSFORM(mconfis,'999999.99'))+ m_qp + ;
                'ValorOutrasDespesas='+ALLTRIM(TRANSFORM(mencargo,'999999.99'))+ m_qp + ;
                'ValorNota='+ALLTRIM(TRANSFORM(ctot_nota,STRTRAN(ALLTRIM(m_set[1,98]),',','')))+ m_qp + ;
                'vICMSDeson='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp

        ELSE
                IF mtot_icm = 0
                        mbase_icm := 0
                ENDIF
                sLinhas := slinhas + 'BaseICMS='+ALLTRIM(TRANSFORM(mbase_icm,'999999.99'))+ m_qp + ;
                'ValorICMS='+ALLTRIM(TRANSFORM(mtot_icm,'999999.99'))+ m_qp + ;
                'ValorProduto='+ALLTRIM(TRANSFORM(mtot_nota,STRTRAN(ALLTRIM(m_set[1,98]),',','')))+ m_qp + ;
                'BaseICMSSubstituicao='+ALLTRIM(TRANSFORM(mbase_icmsub,'999999.99'))+ m_qp + ;
                'ValorICMSSubstituicao='+ALLTRIM(TRANSFORM(mvlr_icmsub,'999999.99'))+ m_qp
                IF m_set[1,151] = 'N'
                        sLinhas := slinhas + 'ValorFrete='+ALLTRIM(TRANSFORM(mfrete,'999999.99'))+ m_qp + ;
                                             'ValorNota='+ALLTRIM(TRANSFORM(iat(mtot_nota + mtot_icmf + mseguro + mtot_ipi + mvlr_icmsub + mencargo + mfrete),STRTRAN(ALLTRIM(m_set[1,98]),',','')))+ m_qp
                ELSE
                        sLinhas := slinhas + 'ValorFrete='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                             'ValorNota='+ALLTRIM(TRANSFORM(iat(mtot_nota + mtot_icmf + mseguro + mtot_ipi + mvlr_icmsub + mencargo),STRTRAN(ALLTRIM(m_set[1,98]),',','')))+ m_qp
                ENDIF
                sLinhas := slinhas + 'ValorSeguro='+ALLTRIM(TRANSFORM(mseguro,'999999.99'))+ m_qp
                IF mtipo_nfe = '4'
                        sLinhas := slinhas + 'vIPIDevol=='+ALLTRIM(TRANSFORM(mtot_ipi_dev,'999999.99'))+ m_qp
                ENDIF
                sLinhas := slinhas + 'VPIS='+ALLTRIM(TRANSFORM(mpis,'999999.99'))+ m_qp +;
                'VCOFINS='+ALLTRIM(TRANSFORM(mconfis,'999999.99')) + m_qp + ;
                'ValorOutrasDespesas='+ALLTRIM(TRANSFORM(mencargo,'999999.99'))+ m_qp + ;
                'vICMSDeson='+ALLTRIM(TRANSFORM(0,'999999.99')) + m_qp
                IF cons_cli[1,25] <> m_set[1,19]
                        IF EMPTY(cons_cli[1,32])
                                sLinhas := slinhas + 'vICMSUFDest='+ALLTRIM(TRANSFORM(mtICMSUFDest,'999999.99'))+ m_qp
                        ELSE
                                sLinhas := slinhas + 'vFCPUFDest='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp
                        ENDIF
                ENDIF
//                IF mtipo_nfe = '4'
//                        sLinhas := slinhas + 'vIPIDevol='+ALLTRIM(TRANSFORM(mtot_ipi,'999999.99'))+ m_qp
//                ENDIF

        ENDIF
        mcons_cid := {}
        cComm := "SELECT * FROM saccid WHERE (cidade = "+sr_cdbvalue(RTRIM(cons_cli[1,24]))+" OR cidade IS NULL) AND uf = "+sr_cdbvalue(RTRIM(cons_cli[1,25]))
        sr_getconnection():exec(ccomm,,.t.,@mcons_cid)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(mcons_cid) > 0 .AND. ! EMPTY(mcons_cid[1,1])
                sLinhas := slinhas +    '[Transportador]'+ m_qp + ;
                                        'FretePorConta='+ALLTRIM(mfrete_trans)+ m_qp + ;
                                        'CnpjCpf='+ALLTRIM(mcgc_trans)+ m_qp + ;
                                        'NomeRazao='+ALLTRIM(mnome_trans)+ m_qp + ;
                                        'IE='+ALLTRIM(minsc_trans)+ m_qp + ;
                                        'Endereco='+ALLTRIM(mend_trans)+ m_qp + ;
                                        'Cidade='+ALLTRIM(mmun_trans)+ m_qp + ;
                                        'UF='+ALLTRIM(muf_trans)+ m_qp + ;
                                        'CidadeCod='+ m_qp + ;
                                        'Placa='+ALLTRIM(mplaca_trans)+ m_qp + ;
                                        'UFPlaca='+ALLTRIM(mpluf_trans)+ m_qp +;
                                        'RNTC='+ALLTRIM(mantt)+ m_qp
        ENDIF
        sLinhas := slinhas +    '[Volume001]'+ m_qp + ;
                                'Quantidade='+ALLTRIM(TRANSFORM(mtot_quantd,'999999'))+ m_qp + ;
                                'Especie='+ALLTRIM(mesp_trans)+ m_qp + ;
                                'Marca='+ALLTRIM(mmarca_trans)+ m_qp + ;
                                'Numeracao='+ALLTRIM(mnum_trans)+ m_qp + ;
                                'PesoLiquido='+ALLTRIM(TRANSFORM(mtot_liq,'999999.99'))+ m_qp + ;
                                'PesoBruto='+ALLTRIM(TRANSFORM(mtot_peso,'999999.99'))+ m_qp

        IF ! EMPTY(mnum_dup) .AND. ! EMPTY(mvenci)
                sLinhas := slinhas +    '[Fatura]'+ m_qp + ;      //'Numero=001'+ m_qp + ;
                                        'nFat='+SUBSTR(mnum_dup,1,6)+ m_qp + ;
                                        'vOrig='+ALLTRIM(TRANSFORM(iat(mtot_nota + mtot_icmf + mseguro + mtot_ipi + mvlr_icmsub + mencargo),'999999.99'))+ m_qp + ;
                                        'vDesc=0.00'+ m_qp + ;
                                        'vliq='+ALLTRIM(TRANSFORM(iat(mtot_nota + mtot_icmf + mseguro + mtot_ipi + mvlr_icmsub + mencargo),'999999.99'))+ m_qp
        ENDIF
        IF mtipo_nfe = '3' .OR. mtipo_nfe = '4'
                sLinhas := slinhas +    '[pag001]'+ m_qp + ;
                                        'tpag=90'+ m_qp
        ELSE
                sLinhas := slinhas +    '[pag001]'+ m_qp + ;
                                        'tpIntegra=2'+ m_qp
                                        IF ! EMPTY(mnum_dup) .AND. ! EMPTY(mvenci)
                                                sLinhas := slinhas + 'tpag=05'+ m_qp + ;
                                                        'vpag='+ALLTRIM(TRANSFORM(iat(mtot_nota + mtot_icmf + mseguro + mtot_ipi + mvlr_icmsub + mencargo),'999999.99'))+ m_qp+;
                                                        'indpag=1'+ m_qp
                                        ELSE
                                                sLinhas := slinhas + 'tpag=01'+ m_qp + ;
                                                        'vpag='+ALLTRIM(TRANSFORM(iat(mtot_nota + mtot_icmf + mseguro + mtot_ipi + mvlr_icmsub + mencargo),'999999.99'))+ m_qp+;
                                                        'indpag=0'+ m_qp
                                        ENDIF
                                        sLinhas := slinhas + 'vtroco='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup) .AND. ! EMPTY(mvenci)
                sLinhas := slinhas +    '[Duplicata001]'+ m_qp + ;      //'Numero=001'+ m_qp + ;
                                        'Numero=001'+ m_qp + ;
                                        'DataVencimento='+DTOC(mvenci)+ m_qp + ;
                                        'Valor='+ALLTRIM(TRANSFORM(mvlr_dup,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup1) .AND. ! EMPTY(mvenci1)
                sLinhas := slinhas + '[Duplicata002]'+ m_qp + ;
                'Numero=002'+ m_qp + ;
                'DataVencimento='+DTOC(mvenci1)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup1,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup2) .AND. ! EMPTY(mvenci2)
                sLinhas := slinhas + '[Duplicata003]'+ m_qp + ;
                'Numero=003'+ m_qp + ;
                'DataVencimento='+DTOC(mvenci2)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup2,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup3) .AND. ! EMPTY(mvenci3)
                sLinhas := slinhas + '[Duplicata004]'+ m_qp + ;
                'Numero=004'+ m_qp + ;
                'DataVencimento='+DTOC(mvenci3)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup3,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup4) .AND. ! EMPTY(mvenci4)
                sLinhas := slinhas + '[Duplicata005]'+ m_qp + ;
                'Numero=005'+ m_qp + ;
                'DataVencimento='+DTOC(mvenci4)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup4,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup5) .AND. ! EMPTY(mvenci5)
                sLinhas := slinhas + '[Duplicata006]'+ m_qp + ;
                'Numero=006'+ m_qp + ;
                'DataVencimento='+DTOC(mvenci5)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup5,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup6) .AND. ! EMPTY(mvenci6)
                sLinhas := slinhas + '[Duplicata007]'+ m_qp + ;
                'Numero=007'+ m_qp + ;
                'DataVencimento='+DTOC(mvenci6)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup6,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup7) .AND. ! EMPTY(mvenci7)
                sLinhas := slinhas + '[Duplicata008]'+ m_qp + ;
                'Numero=008'+ m_qp + ;
                'DataVencimento='+DTOC(mvenci7)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup7,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup8) .AND. ! EMPTY(mvenci8)
                sLinhas := slinhas + '[Duplicata009]'+ m_qp + ;
                'Numero=009'+ m_qp + ;
                'DataVencimento='+DTOC(mvenci8)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup8,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup9) .AND. ! EMPTY(mvenci9)
                sLinhas := slinhas + '[Duplicata010]'+ m_qp + ;
                'Numero=010'+ m_qp + ;
                'DataVencimento='+DTOC(mvenci9)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup9,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup10) .AND. ! EMPTY(mvenci10)
                sLinhas := slinhas + '[Duplicata011]'+ m_qp + ;
                'Numero=011'+ m_qp + ;
                'DataVencimento='+DTOC(mvenci10)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup10,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup11) .AND. ! EMPTY(mvenci11)
                sLinhas := slinhas + '[Duplicata012]'+ m_qp + ;
                'Numero=011'+ m_qp + ;
                'DataVencimento='+DTOC(mvenci11)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup11,'999999.99'))+ m_qp
        ENDIF
        sLinhas := slinhas +    '[DadosAdicionais]'+ m_qp + ;
                                'Complemento= Oper.:'+cod_operado+'  -  Valores  Aproximado dos Tributos R$.:'+ALLTRIM(TRANSFORM(mtot_imposto,'999999.99'))+' - ('+ALLTRIM(TRANSFORM((mtot_imposto/mtot_nota)*100,'999999.99'))+'%)   -   Fonte: IBPT   .'+mobs1+mobs2+mobs3+mobs4+mobs5+mobs6+mobs7+mobs8+mobs9+mobs10+mobs11+mobs12+mobs13+mobs14+mobs15+mobs16+mobs17+mobs18+mobs19+mobs20+ m_qp
                                //vIPIDevol"
        sLinhas := slinhas +    '[infRespTec]'+ m_qp + ;
                                'CNPJ='+mcnpj_HTI+ m_qp + ;
                                'xContato=Jose Helio de Araujo Beltrao Junior'+ m_qp + ;
                                'email=helioaraujobeltrao@gmail.com'+ m_qp + ;
                                'fone=081992816878'
        IF m_set[1,91] = 'T'
                nHandle := FCreate(slinhas,FC_NORMAL)
        ELSE
                mensagem('CRIANDO A NFE No. '+mretorno)
                *mArq        := "NFE"+ALLTRIM(mdocumento)+".ini"
                mArq        := fcreate("NFE"+ALLTRIM(mdocumento)+".ini")
                * mArq        := fcreate("NFE.ini" )
                fwrite( mArq, @sLinhas, len( sLinhas ) )
                FCLOSE(mArq)
                mretorno := IBR_comando('NFE.CriarNFe',{sLinhas},,.T.)
                IF 'Alertas:' $ mretorno
                        mArq        := FCREATE('ALERTA.LOG')
                        lin1 := ' '
                        linhas := MLCOUNT(mretorno,110)
                        //ATENCAO(STRZERO(linhas,5))
                        i := 0
                        FOR i = 1 TO  linhas
                                lin1 := MEMOLINE(mretorno,100,i,,) + m_qp
                                IF 'Alertas:' $ lin1
                                        atencao(lin1)
                                ENDIF
                                FWRITE( mArq,@lin1)
                        NEXT
                        fclose(mArq)

                        //mretorno :=ALLTRIM(SUBSTR(mretorno,LEN(mretorno)-51))

                        //mposicao := AT('Alertas:',mretorno)
                        //atencao(mretorno)
                        //LOOP
                        RETURN NIL
                ELSEIF mretorno = ' '
                        RETURN NIL
                ELSE
                        mretorno :=ALLTRIM(SUBSTR(mretorno,LEN(mretorno)-51))
                ENDIF
                mcamnfe := mretorno
                mretorno := ALLTRIM(m_indiv[1,40])+mretorno
                mensagem('ASSINANDO a Nota No. '+mretorno)
                IF IBR_comando('NFE.AssinarNFe',{mretorno},,.T.) = ' '
                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = 'C' WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                        RETURN NIL
                ENDIF
                mensagem('VALIDANDO a Nota No. '+mretorno)
                IF IBR_comando('NFE.ValidarNFe',{mretorno},,.T.) = ' '
                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = 'C' WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                        LOOP
                ENDIF
                mensagem('ENVIANDO a Nota No. '+mretorno)
                IF ! enviar_nfe(mretorno,'NFE')
                        mpago := ' '
                        mabrir_cp := m_flag_f := " "
                        ASIZE(m_codigo,0)
                        m_flag :=0
                        mdocumento := mnum_ecf:=SPACE(8)
                        CLEAR GETS
                        RETURN NIL
                ENDIF
                op_tela(01,10,6,54,'IMPRIMINDO O DANFE No.: '+mdocumento,,'*')
                WvW_PBSetFont( NIL, 'times new roman', 25, 10,)
                nBotao_imp := wvw_pbCreate(NIL,2,1,4,21,'[I]mprimir',,{||Imprimir(1)},,1,.F.)
                nBotao_pre_imp := wvw_pbCreate(NIL,2,23,4,43,'[P]re-Impressao',,{||imprimir(2)},,1,.F.)
                mensagem('Tecle: [ENTER] ou [I]mprimir - [P]re-impressao')
                WHILE .T.
                        INKEY(0)
                        IF LASTKEY() = ASC('I') .OR. LASTKEY() = ASC('i') .OR. ;
                           LASTKEY() = ASC('P') .OR. LASTKEY() = ASC('p') .OR. ;
                           LASTKEY() = 13 .OR. LASTKEY() = 27
                                EXIT
                        ENDIF
                ENDDO
                IF LASTKEY() = 27
                        WVW_PBDestroy( NIL, nBotao_imp)
                        WVW_PBDestroy( NIL, nBotao_pre_imp)
                        fecha_tela()
                ELSE
                        WVW_PBDestroy( NIL, nBotao_imp)
                        WVW_PBDestroy( NIL, nBotao_pre_imp)
                        fecha_tela()
                        mensagem('IMPRIMINDO O DANFE No. '+mretorno)
                        IF LASTKEY() = ASC('P') .OR. LASTKEY() = ASC('p')
                                mretorno := IBR_comando('NFE.ImprimirDanfe('+mretorno+',,,,1,'+ALLTRIM(m_indiv[1,40])+'fecha_pedido.bmp)',,1,.F.,1,)
                                mret := IBR_comando('NFE.ImprimirDanfePDF('+mretorno+')',,100,.T.,,ALLTRIM(m_indiv[1,40])+'HTIfirma.jpg')
                        ELSE
                                mret := IBR_comando('NFE.ImprimirDanfe('+mretorno+')',,100,.T.,,ALLTRIM(m_indiv[1,40])+'HTIfirma.jpg')
                                mret := IBR_comando('NFE.ImprimirDanfePDF('+mretorno+')',,100,.T.,,ALLTRIM(m_indiv[1,40])+'HTIfirma.jpg')
                        ENDIF
                ENDIF
                WVW_SetMousePos(,10,10)
                /*
                SR_BEGINTRANSACTION()
                        i:=0
                        FOR i = 1 TO LEN(m_nota)
                                IF m_nota[i,5] = 0 .OR. m_nota[i,37] = 'N'
                                        LOOP
                                ENDIF
                                aret:={}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_nota[i,21]),,.t.,@aret)
                                IF msai_ent = 'S'
                                        ccomm :="UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(aret[1,55] - m_nota[i,5])
                                        ccomm := ccomm +",icm = "+sr_cdbvalue(aret[1,60] - iat((m_nota[i,20]/100) * (mpr_fat * m_nota[i,5]),2))
                                        sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                'processo,ent_sai )'+;
                                                ' VALUES ('+;
                                                sr_cdbvalue(DATE())+','+; //1
                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                sr_cdbvalue(TIME())+','+; //3
                                                sr_cdbvalue(m_nota[i,21])+','+; //4
                                                sr_cdbvalue(m_nota[i,5])+','+; //5
                                                sr_cdbvalue(mcons_prod[1,55])+','+; //6
                                                sr_cdbvalue(mcons_prod[1,55] - m_nota[i,5])+','+; //7
                                                sr_cdbvalue(cod_operado)+','+; //8
                                                sr_cdbvalue('SACNF_E')+','+; //9
                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                sr_cdbvalue('NF-e: '+'NF'+mdocumento)+','+; //11
                                                sr_cdbvalue('S')+')',,.f.)

                                ELSE
                                        ccomm :="UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(aret[1,55] + m_nota[i,5])
                                        ccomm := ccomm +",icm = "+sr_cdbvalue(aret[1,60] + iat((m_nota[i,20]/100) * (mpr_fat * m_nota[i,5]),2))
                                        sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                'processo,ent_sai )'+;
                                                ' VALUES ('+;
                                                sr_cdbvalue(DATE())+','+; //1
                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                sr_cdbvalue(TIME())+','+; //3
                                                sr_cdbvalue(m_nota[i,21])+','+; //4
                                                sr_cdbvalue(m_nota[i,5])+','+; //5
                                                sr_cdbvalue(mcons_prod[1,55])+','+; //6
                                                sr_cdbvalue(mcons_prod[1,55] + m_nota[i,5])+','+; //7
                                                sr_cdbvalue(cod_operado)+','+; //8
                                                sr_cdbvalue('SACNF_E')+','+; //9
                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                sr_cdbvalue('NF-e: '+'NF'+mdocumento)+','+; //11
                                                sr_cdbvalue('E')+')',,.f.)
                                ENDIF
                                ccomm := ccomm +",data_atu = "+sr_cdbvalue(mdata_sis)
                                ccomm := ccomm + " WHERE cod_merc = "+sr_cdbvalue(m_nota[i,21])
                                sr_getconnection():exec(ccomm,,.f.)
                        NEXT
                        sr_committransaction()
                sr_endtransaction()
                sr_getconnection():exec("COMMIT",,.f.)
                */
                SR_BEGINTRANSACTION()
                TRY

                sr_getconnection():exec('INSERT INTO sactotnt ('+;
                        'empresa  	,'+;//1
                        'modelo  	,'+;//2
                        'cod_nota 	,'+;//3
                        'tipo_nota 	,'+;//4
                        'num_ped 	,'+;//5
                        'documento 	,'+;//6
                        'serie     	,'+;//7
                        'emissao 	,'+;//8
                        'cod_cli 	,'+;//9
                        'cliente 	,'+;//10
                        'uf_cli 	,'+;//11
                        'cid_cli 	,'+;//12
                        'insc_cli 	,'+;//13
                        'cgc_cli 	,'+;//14
                        'cpf_cli 	,'+;//15
                        'cod_vend 	,'+;//16
                        'ent_sai 	,'+;//17
                        'vl_base        ,'+;//18
                        'vl_icm         ,'+;//19
                        'vl_icmsu	,'+;//20
                        'vlr_icmsub     ,'+;//21
                        'base_icmsu     ,'+;//22
                        'ipi            ,'+;//23
                        'peso           ,'+;//24
                        'peso_liq       ,'+;//25
                        'vl_nota        ,'+;//26
                        'vl_prod        ,'+;//27
                        'frete          ,'+;//28
                        'encargo_f      ,'+;//29
                        'disp_asse      ,'+;//30
                        'cod_nat        ,'+;//31
                        'obs1           ,'+;//32
                        'obs2           ,'+;//33
                        'obs3           ,'+;//34
                        'obs4           ,'+;//35
                        'obs5           ,'+;//36
                        'obs6           ,'+;//37
                        'obs7           ,'+;//38
                        'obs8           ,'+;//39
                        'obs9           ,'+;//40
                        'obs10          ,'+;//41
                        'obs11          ,'+;//42
                        'obs12          ,'+;//43
                        'obs13          ,'+;//44
                        'obs14  	,'+;//45
                        'obs15          ,'+;//46
                        'obs16          ,'+;//47
                        'obs17          ,'+;//48
                        'obs18          ,'+;//49
                        'obs19          ,'+;//50
                        'obs20          ,'+;//51
                        'norm_ele       ,'+;//52
                        'camnfe         ,'+;//52
                        'SR_DELETED )'+;
                        ' VALUES ('+;
                        sr_cdbvalue(mcodempresa         )+','+; //1
                        sr_cdbvalue(mmodelo             )+','+; //2
                        sr_cdbvalue(mcod_nota           )+','+; //3
                        sr_cdbvalue(mtipo_nota          )+','+; //4
                        sr_cdbvalue(STRZERO(mnum_ped,6) )+','+; //5
                        sr_cdbvalue('NF'+mdocumento     )+','+; //6
                        sr_cdbvalue(mserie_not          )+','+; //7
                        sr_cdbvalue(mdata               )+','+; //8
                        sr_cdbvalue(mcod_cli )+','+; //9
                        sr_cdbvalue(mcliente            )+','+; //10
                        sr_cdbvalue(muf_cli             )+','+; //11
                        sr_cdbvalue(mcid_cli            )+','+; //12
                        sr_cdbvalue(cons_cli[1,33]     )+','+; //13
                        sr_cdbvalue(cons_cli[1,32]     )+','+; //14
                        sr_cdbvalue(cons_cli[1,34]     )+','+; //15
                        sr_cdbvalue(STRZERO(mcod_vend,3))+','+; //16
                        sr_cdbvalue(msai_ent            )+','+; //17
                        sr_cdbvalue(iat(IF(mtipo_nota = 'C',cbase_icm ,mbase_icm   ),2))+','+; //18
                        sr_cdbvalue(iat(IF(mtipo_nota = 'C',ctot_icm  ,mtot_icm    ),2))+','+; //19
                        sr_cdbvalue(iat(IF(mtipo_nota = 'C',ctot_icmf ,mtot_icmf   ),2))+','+; //20
                        sr_cdbvalue(iat(IF(mtipo_nota = 'C',ctot_icmf ,mvlr_icmsub ),2))+','+; //21
                        sr_cdbvalue(iat(IF(mtipo_nota = 'C',cbase_icmf,mbase_icmsub),2))+','+; //22
                        sr_cdbvalue(iat(IF(mtipo_nota = 'C',ctot_ipi  ,mtot_ipi    ),2))+','+; //23
                        sr_cdbvalue(iat(IF(mtipo_nota = 'C',ctot_peso ,mtot_peso   ),2))+','+; //24
                        sr_cdbvalue(iat(IF(mtipo_nota = 'C',ctot_liq  ,mtot_liq    ),2))+','+; //25
                        sr_cdbvalue(iat(IF(mtipo_nota = 'C',ctot_nota ,(mtot_nota + mtot_icmf + mseguro + mencargo + mtot_ipi + mvlr_icmsub)),2))+','+; //26
                        sr_cdbvalue(iat(IF(mtipo_nota = 'C',ctot_prod ,IF(mtipo_nota = 'N',mtot_nota,mtot_prod) ),2))+','+; //27
                        sr_cdbvalue(mfrete   )+','+; //28
                        sr_cdbvalue(mencargo )+','+; //29
                        sr_cdbvalue(mseguro  )+','+; //30
                        sr_cdbvalue(mcod_nat )+','+; //31
                        sr_cdbvalue(mobs1    )+','+; //32
                        sr_cdbvalue(mobs2    )+','+; //33
                        sr_cdbvalue(mobs3    )+','+; //34
                        sr_cdbvalue(mobs4    )+','+; //35
                        sr_cdbvalue(mobs5    )+','+; //36
                        sr_cdbvalue(mobs6    )+','+; //37
                        sr_cdbvalue(mobs7    )+','+; //38
                        sr_cdbvalue(mobs8    )+','+; //39
                        sr_cdbvalue(mobs9    )+','+; //40
                        sr_cdbvalue(mobs10   )+','+; //41
                        sr_cdbvalue(mobs11   )+','+; //42
                        sr_cdbvalue(mobs12   )+','+; //43
                        sr_cdbvalue(mobs13   )+','+; //44
                        sr_cdbvalue(mobs14   )+','+; //45
                        sr_cdbvalue(mobs15   )+','+; //46
                        sr_cdbvalue(mobs16   )+','+; //47
                        sr_cdbvalue(mobs17   )+','+; //48
                        sr_cdbvalue(mobs18   )+','+; //49
                        sr_cdbvalue(mobs19   )+','+; //50
                        sr_cdbvalue(mobs20   )+','+; //51
                        sr_cdbvalue('E'      )+','+; //52
                        sr_cdbvalue(mretorno )+','+; //52
                        sr_cdbvalue(' ')+')',,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                CATCH e
                        SR_ENDTRANSACTION()
                END
        ENDIF
        IF ! EMPTY(m_email) .AND. op_simnao('S','Deseja enviar EMAIL para o Cliente') = 'S'
                op_tela(10,10,11,70,'Enviar EMAIL')
                DEVPOS(00,00);DEVOUT('Email de Destino:')
                @ 00,18 GET m_email VALID IF(EMPTY(m_email),.F.,.T.)
                READ
                IF LASTKEY() # 27
                        m_ret := IBR_comando('NFE.ENVIAREMAIL('+m_email+','+mretorno+',1)',,3)
                        atencao(m_ret)
                        wvw_lclosewindow()
                ELSE
                        wvw_lclosewindow()
                ENDIF
        ENDIF
        ASIZE(m_nota,0)
        KEYBOARD CHR(27)
        CLEAR GETS
        RETURN NIL
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** F I M **********************************
* VERIFICAR RETORNO DO MONITOR AcbrNFeMonitor
*********************************************
FUNCTION retorno_acbr(mmensa)
LOCAL m_retorno:={},lin,linhas,linha,h:=0

IF FILE(marq_sai)
        lin := MEMOLINE(MEMOREAD(marq_sai),110,1,,)
        linhas := linha := 0
        linhas := MLCOUNT(MEMOREAD(marq_sai),110)
        FOR linha = 1 TO  linhas
                lin := MEMOLINE(MEMOREAD(marq_sai),110,linha,,)
                AADD(m_retorno,ALLTRIM(lin))
        NEXT
ENDIF
IF LEN(m_retorno) > 0
        IF SUBSTR(m_retorno[1],1,2) = 'OK'
                IF  mmensa = NIL
                        atencao('Messagem: '+m_retorno[1])
                ENDIF
                WHILE FILE(marq_sai)
                        MYRUN('DEL '+marq_sai)
                ENDDO
                RETURN .T.
        ELSE
                mmen := 'MENSAGEM DE '
                h:=0
                FOR h = 1 TO LEN(m_retorno)
                        mmen := mmen + m_retorno[h]
                NEXT
                atencao(mmen)
        ENDIF
ENDIF
WHILE FILE(marq_sai)
        MYRUN('DEL '+marq_sai)
ENDDO
RETURN .F.
************************************************************************
FUNCTION NFE_INIT(ENDERECO)   // Abre a comunica??o com o ACBrNFeMonitor
* ENDERECO -> Diretorio ( quando usando TXT)  Ex: C:\ACBR\ , ou
*             IP:PORTA  (Socket) Ex: 192.168.0.1:3436
************************************************************************
LOCAL P, RET := .T., TFIM, IP, PORTA, RESP,marq_:=''
IF ! EMPTY(sENDER)  // J? est? aberto...
        RETURN .t.
ENDIF
/*
IF m_indiv[1,37] = 'C:\ACBRMONITORPLUS\'
        marq_ := ALLTRIM(m_indiv[1,37])
ELSE
        marq_ := "ACBrNFeMonitor"
ENDIF
*/
marq_ := 'C:\ACBRMONITORPLUS\'
SEM_ERRO := .F.
sENDER   := ALLTRIM(ENDERECO)
sMODELO  := ''
IP       := ''
PORTA    := 0
#ifdef __XHARBOUR__

        IF ! (PATH_DEL $ sENDER)   /// Abrir comunicacao TCP/IP
                P := at(':',sENDER)
                IF P = 0
                        P := LEN(sENDER)+1
                ENDIF
                IP    := SUBSTR(sENDER,1,P-1)
                //atencao(ip)
                IF EMPTY(IP)
                        RET := .F.
                ELSE
                        PORTA := VAL(SUBSTR(sENDER,P+1))
                        IF PORTA = 0
                                PORTA := 3436
                        ENDIF
                        //atencao(STRZERO(porta,4))

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
                        InetSetTimeout( sSOCKET, 3000 )   // Timeout de Recep??o 3 seg //
                        RESP := InetRecvEndBlock( sSOCKET, ETX )
                        RET  := (marq_ $ RESP )   // Recebeu as boas vindas ?
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
************************************************************************
FUNCTION NFE_COMANDO(CMD,VET_PARAM,ESPERA,TENTA)
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
        CMD := 'NFE.'+CMD       // Se nao informou assume ECF.
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
CMD := CMD + CR+LF  + CR+LF
//atencao(cmd)
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
                mensagem('Criando arquivo TEMPORARIO com a requisicao')
                IF EMPTY(RET_IMP)
                        IF ! Grava_NFE(TEMPOR, CMD)
                                RET_IMP := 'ERRO: Nao foi possivel criar o arquivo: ('+TEMPOR+') '+;
                                ferror()
                        ENDIF
                ENDIF
                mensagem('Renomeando arquivo TEMPORARIO para REQUISICAO')
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
                                IF op_simnao('S','O ACBrNfeMonitor nao esta?ativo Deseja tentar novamente:') = 'N'
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
        mensagem('Lendo a resposta do ACBRNFEMONITOR')
        TINI   := SECONDS()
        WHILE EMPTY(RET_IMP)
                INKEY(.10,20)
                IF file(RESP)
                        RET_IMP := ALLTRIM(memoread( RESP ))
                ENDIF

                IF EMPTY(RET_IMP)
                        IF SECONDS() > (TINI + 5)
                                mensagem('Aguardando resposta do ACBrNFeMonitor:  '+; // '('+ProcName(2)+') '+;
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
//Static FUNCTION Grava_NFE( WARQ, WTXT )
FUNCTION Grava_NFE( WARQ, WTXT )
LOCAL HANDLE, RET := .T.

HANDLE := FCREATE(WARQ, FC_NORMAL )
IF HANDLE > 0
        FWRITE(HANDLE, WTXT + CHR(13) + CHR(10) )
        RET := (FERROR() = 0)

        FCLOSE(HANDLE)
ENDIF

RETURN RET
****************************************************************************
FUNCTION enviar_nfe(mret,mtipo,mmanut)
*************************
LOCAL m_retorno,lin,linhas,linha,mmen,marq_sai,m_movnt:={},m:=0

m_retorno := IBR_comando('NFE.EnviarNFe',{mret,1,1,0,0,1},30,.T.)

IF mtipo = 'NFCE'
        msai_ent = 'S'
ENDIF
//atencao('1')
IF 'Autorizado o uso da NF-e' $ m_retorno
        IF mtipo = 'NFCE'
                sr_getconnection():exec("UPDATE sacmovnt SET cancel = ' ',camnfe = "+sr_cdbvalue(mcamnfe)+" WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ELSE
                sr_getconnection():exec("UPDATE sacmovnt SET cancel = ' ',camnfe = "+sr_cdbvalue(mcamnfe)+" WHERE documento = "+sr_cdbvalue('NF'+mdocumento),,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ENDIF
        RETURN .T.

//ELSEIF 'XMotivo=Rejeicao' $ m_retorno
ELSEIF 'Nota(s) nao confirmadas:' $ m_retorno
        atencao(ler_proc(m_retorno,'Nota(s) nao confirmadas:'))
        IF mtipo = 'NFCE'
                //atencao('CANCEL2')
                m_movnt := {}
                sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.t.,@m_movnt)
                sr_getconnection():exec('COMMIT',,.f.)
                sr_getconnection():exec("UPDATE sacmovnt SET cancel = 'C',camnfe = "+sr_cdbvalue(mcamnfe)+" WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ELSE
                m_movnt := {}
                sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento = "+sr_cdbvalue('NF'+mdocumento),,.t.,@m_movnt)
                sr_getconnection():exec('COMMIT',,.f.)
                sr_getconnection():exec("UPDATE sacmovnt SET cancel = 'C',camnfe = "+sr_cdbvalue(mcamnfe)+" WHERE documento = "+sr_cdbvalue('NF'+mdocumento),,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ENDIF
        RETURN .F.
ELSE
        atencao(m_retorno)
        IF mtipo = 'NFCE'
                sr_getconnection():exec("UPDATE sacmovnt SET cancel = ' ',camnfe = "+sr_cdbvalue(mcamnfe)+" WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ELSE
                sr_getconnection():exec("UPDATE sacmovnt SET cancel = ' ',camnfe = "+sr_cdbvalue(mcamnfe)+" WHERE documento = "+sr_cdbvalue('NF'+mdocumento),,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ENDIF
        RETURN .T.
        //atencao(m_retorno)
ENDIF
RETURN NIL
************************** F I M *************************************
* FUNCAO P/RENVIAR NFE
**********************
FUNCTION sac_nfe(mtp_nf)
************************
LOCAL m_aux1:={},m_demo:={},mmotivo:=SPACE(20),mdat_ini,mdat_fim,m_caminho:={},mcaminho:='',mcons_nota := {},mtipo:=0,marq_sai := '',;
      m_inutilizar:={},mcons_mov:={},mnum_ini := 0,mnum_fim := 0,;
      mjust := SPACE(40),mmodelo := '  ',mchave:=SPACE(44),mnota_xml :='',mtipo_nota := SPACE(4),;
      mano,mmes,mdoc_mdfe:='',m_mdfe := {},mmdfe:=' ',nBotao_imp,nBotao_pre_imp,mcam_nota:=''

PRIVATE mchnfe:='',m_email:=SPACE(60),mdocumento:='',mcamnfe := ''
//marq_sai := ALLTRIM(m_indiv[1,37])+"SAINFE.TXT"
mdat_ini := mdat_fim := CTOD('  /  /  ')
WHILE .T.
        op_tela(10,03,23,70,'Opcoes para NFE',,'*')
        exibi_prg('SACNF_E/SAC_NFE')

        ***INICIA O ACBRMONITOR***

        IF ! inicia_acbr(1)
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        //mretorno := IBR_comando('GTIN.Consultar('+"7897534827622"+')',,3)
        //atencao( sr_ShowVector( mretorno ))

        /*
        mensagem('INCICIANDO O ACBR Aguarde um momento....')
        IF ! IBR_INIT(ALLTRIM(m_indiv[1,43]))
                atencao('Nao e possivel INICIALIZAR o ACBRMONITORPLUS pelo TCP-IP, verificar se estar instalado...')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mensagem('ATIVANDO O ACBR Aguarde um momento....')
        IF ! IBR_OK( IBR_COMANDO( 'NFE.Ativo',,25))
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mensagem('Verificando STATUS DO SERVICO NFe Aguarde um momento....')
        IF m_set[1,95] = '1' .OR. EMPTY(m_set[1,95])
                IF ! IBR_OK(IBR_comando('NFE.STATUSSERVICO',,30))
                        wvw_lclosewindow();RETURN NIL
                ENDIF
        ENDIF
        */
        mensagem('Escolha a Opcao')
        limpa(00,00,30,140)
        setcor(1)
        botao1(1,01,3,14)
        botao1(1,17,3,30)
        botao1(1,33,3,46)
        botao1(1,49,3,62)
        botao1(5,01,7,14)
        botao1(5,17,7,30)
        botao1(5,33,7,46)
        botao1(5,49,7,62)
        botao1(9,01,11,14)
        botao1(9,17,11,30)
        botao1(9,33,11,46)
        botao1(9,49,11,62)
        setcor(10)
        @ 2,03 PROMPT  ' ASSINAR  '
        @ 2,19 PROMPT  ' VALIDAR  '
        @ 2,35 PROMPT  ' ENVIAR   '
        @ 2,51 PROMPT  ' IMPRIMIR '
        @ 6,03 PROMPT  ' CANCELAR '
        @ 6,19 PROMPT  ' COPIAR XML '
        @ 6,35 PROMPT  ' LER XML '
        @ 6,51 PROMPT  ' CONSULTA  '
        @ 10,01 PROMPT ' ENVIAR EMAIL '
        @ 10,19 PROMPT ' INUTILIZAR '
        @ 10,35 PROMPT ' CHECKLIST '
        IF mtp_nf = 'MDFE'
                @ 10,51 PROMPT '  ENCERRAR '
        ENDIF
        //@ 10,35 PROMPT ' NFe/NFCe VERIFICAR CANCEL '
        SET INTEN ON
        MENU TO mtipo
        setcor(1)
        wvw_lclosewindow()
        IF LASTKEY() = 27
                RETURN NIL
        ENDIF
        IF mtipo = 10
                m_inutilizar:={}
                mnum_ini := mnum_fim := 0
                mano := '  '
                mjust := SPACE(40)
                IF mtp_nf = 'NF'
                        mmodelo := '55'
                ELSEIF mtp_nf = 'NFC'
                        mmodelo := '65'
                ENDIF
                mcaminho := ' '
                op_tela(10,10,15,90,'Inutilizando')
                DEVPOS(01,01);DEVOUT('No.Inicial...:')
                DEVPOS(02,01);DEVOUT('No.Final.....:')
                DEVPOS(03,01);DEVOUT('Ano Emissao..:')
                DEVPOS(04,01);DEVOUT('Justificativa:')
                @ 01,16 GET mnum_ini PICT '99999'
                @ 02,16 GET mnum_fim PICT '99999'
                @ 03,16 GET mano PICT '99'
                @ 04,16 GET mjust PICT '@!'
                READ
                IF LASTKEY() = 27
                        fecha_tela()
                        LOOP
                ENDIF
                WHILE mnum_ini <= mnum_fim
                        mensagem('Verificando o No.: '+STRZERO(mnum_ini,6))
                        mretorno := IBR_comando('NFE.InutilizarNFe('+SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2)+',Error de dados na nota,'+mano+','+mmodelo+',1,'+STR(mnum_ini)+','+STR(mnum_ini)+')',,3)
                        IF ! EMPTY(mretorno)
                                        lin := MEMOLINE(mretorno,110,1,,)
                                        linhas := linha := 0
                                        linhas := MLCOUNT(mretorno,110)
                                        FOR linha = 1 TO  linhas
                                                lin := MEMOLINE(mretorno,110,linha,,)
//NomeArquivo=C:\HELIO\siachb\NFE\24494200000106\NFe\201808\Inu\26182449420000010655001000000074000000074-procInutNFe.xml
                                                IF SUBSTR(lin,1,12) = 'NomeArquivo='
                                                        mcaminho := SUBSTR(lin,13)
                                                        EXIT
                                                ENDIF
                                        NEXT

                                //atencao(mretorno)
                                sr_getconnection():exec('INSERT INTO nfe_inutilizada ('+;
                                'JUSTIFICATIVA,'+;//1
                                'ANO          ,'+;//2
                                'MODELO       ,'+;//3
                                'SERIE        ,'+;//4
                                'NUMERO       ,'+;//4
                                'CAMINHO      )'+;
                                ' VALUES ('+;
                                sr_cdbvalue(mjust)+','+; //1
                                sr_cdbvalue(mano )+','+; //2
                                sr_cdbvalue(mmodelo)+','+; //3
                                sr_cdbvalue('1' )+','+; //4
                                sr_cdbvalue(STRZERO(mnum_ini,6))+','+;
                                sr_cdbvalue(mcaminho)+')',,.f.)
                                sr_getconnection():exec('COMMIT',,.f.)
                        //ELSE
                        //        atencao(mretorno)
                        ENDIF
                        mnum_ini++
                ENDDO
                wvw_lclosewindow()
                LOOP
        /*
        ELSEIF mtipo = 11
                op_tela(10,10,13,90,'BAIXAR XML DE FORNECEDORES')
                DEVPOS(01,01);DEVOUT('Chave de Acesso:')
                @ 01,16 GET mchave
                READ
                IF LASTKEY() = 27
                        fecha_tela()
                        LOOP
                ENDIF
                mretorno := IBR_comando('NFe.DistribuicaoDFePorChaveNFe('+m_set[1,19]+','+SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2)+','+ALLTRIM(mchave),,3)
                fecha_tela()
                LOOP
        */

        ENDIF
        op_tela(0,10,50,110,IF(mtp_nf = 'NF','Arquivos NF-e (XML)','Arquivos NFC-e (XML)'),,1)
        limpa(00,00,50,100)
        DEVPOS(00,01);DEVOUT('Tipo da Nota...:')
                DrawLabel(00,23,'[NFE] - [NFCE] - [MDFE] - [CTE] - [CCE]',210,, 'Arial',15,7)
        DEVPOS(01,01);DEVOUT('Digite o ANO...:')
        DEVPOS(02,01);DEVOUT('Digite o MES...:')
        DEVPOS(03,01);DEVOUT('Caminho dos XML:')
        @ 04,00 TO 04,100
        setcor(3)
        DEVPOS(05,00);DEVOUT(' N.Nota                  Arquivo XML                                                 Data')
        setcor(1)
        @ 06,00 TO 06,110
        SET CENTURY ON
        mano := SUBSTR(DTOC(mdata_sis),7,4)
        mmes := SUBSTR(DTOC(mdata_sis),4,2)
        SET CENTURY OFF
        IF mtp_nf = 'NF'
                mtipo_nota := 'NFE '
                mtipo_nota2 := 'NFE'
                mcam_nota := 'NFE'
        ELSEIF mtp_nf = 'NFC'
                mtipo_nota := 'NFCE'
                mtipo_nota2 := 'NFCE'
                mcam_nota := 'NFCE'
        ELSEIF mtp_nf = 'MDFE'
                mtipo_nota := 'MDFE'
                mtipo_nota2 := 'MDFE'
                mcam_nota := 'MDFE'
        ELSEIF mtp_nf = 'CCE'
                mtipo_nota := 'CCE '
        ENDIF
        mcaminho := ''
        @ 00,18 GET mtipo_nota PICT '@!' VALID mtipo_nota $ 'NFE ,NFCE,MDFE,CTE ,CCE '
        @ 01,18 GET mano PICT '9999'
        @ 02,18 GET mmes PICT '99'
        //@ 00,40 GET mdat_fim VALID IF(mdat_fim < mdat_ini,.F.,.T.)
        READ
        IF LASTKEY() = 27
                fecha_tela()
                LOOP
        ENDIF
        mtipo_nota := ALLTRIM(mtipo_nota)
        IF mtipo_nota = 'CCE'
                mtipo_nota2 := 'NFE'
                mcam_nota := 'EVENTO\CCE'
        ENDIF
        mcaminho := ALLTRIM(m_indiv[1,40])+SUBSTR(m_set[1,123],1,14)+'\'+mtipo_nota2+'\'+mano+mmes+'\'+mcam_nota+'\'+SPACE(20)
        @ 03,18 GET mcaminho PICT '@!'
        READ
        IF LASTKEY() = 27
                fecha_tela()
                LOOP
        ENDIF
        /*
        IF EMPTY(mdat_ini)
                mdat_ini := CTOD('01/01/94')
                mdat_fim := DATE()
        ENDIF
        */
        m_aux1:={}
        m_demo:={}
        m_caminho:={}
        CLEAR GETS
        mensagem('Coletanto os XMLs....')
        IF mtipo_nota = 'MDFE'
                m_aux1 := DIRECTORY(ALLTRIM(mcaminho)+'*-mdfe.xml','D')
        ELSEIF mtipo_nota = 'CCE'
                m_aux1 := DIRECTORY(ALLTRIM(mcaminho)+'*.xml','D')
        ELSE
                m_aux1 := DIRECTORY(ALLTRIM(mcaminho)+'*-nfe.xml','D')
        ENDIF
        IF LEN(m_aux1) > 0
                i := 0
                FOR i = 1 TO LEN(m_aux1)
                        mmdfe:=' '
                        IF mtipo_nota # 'MDFE' .AND. mtipo_nota # 'CCE'
                                IF mtipo_nota = 'NFE' .AND. SUBSTR(m_aux1[i,1],21,2) = '65'
                                        LOOP
                                ELSEIF mtipo_nota = 'NFCE' .AND. SUBSTR(m_aux1[i,1],21,2) = '55'
                                        LOOP
                                ENDIF
                        ENDIF
                        IF mtipo_nota = 'MDFE'
                                m_mdfe := {}
                                sr_getconnection():exec("SELECT encerrou FROM sacmdfe WHERE cmdf = "+sr_cdbvalue(SUBSTR(m_aux1[i,1],29,6)),,.t.,@m_mdfe)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(m_mdfe) > 0
                                        IF m_mdfe[1,1] = '*'
                                                mmdfe := '*'
                                        ENDIF
                                ENDIF
                        ENDIF
                        AADD(m_demo,' '+SUBSTR(m_aux1[i,1],29,6)+'  '+m_aux1[i,1]+'                      '+DTOC(m_aux1[i,3])+' '+mmdfe)
                        AADD(m_caminho,m_aux1[i,1])
                NEXT            
        ELSE
                atencao('Nao existe nenhuma NFE neste Caminho: '+ALLTRIM(mcaminho))
                fecha_tela()
                LOOP
        ENDIF
        IF LEN(m_caminho) = 0
                atencao('Nao existe nenhuma NOTA....')
                LOOP
        ENDIF
        //m_demosort := ASORT(m_demo,,, { |x, y| x[1] < y[1] })
        m_demosort := m_demo
	point := 0
        mensagem('<CTRL + Page Down> p/Ultima Nota - Escolha a Nota e pressione <ENTER>')
        @ 46,00 TO 46,110
        DEVPOS(47,01);DEVOUT('TOTAL DE NOTAS FISCAIS:')
        @ 48,00 TO 48,110
        setcor(3)
        DEVPOS(47,25);DEVOUT(ALLTRIM(TRANSFORM(LEN(m_demo),'999,999,999')))
        setcor(10);point := ACHOICE(7,0,45,99,m_demosort,,,point);setcor(1)
        setcor(1)
        DO CASE
                CASE LASTKEY()=27
                        fecha_tela()
                        LOOP
                CASE LASTKEY() = 13
			mnota_xml := ALLTRIM(SUBSTR(m_demosort[point],10,73))
			//mnota_xml := ALLTRIM(SUBSTR(m_demosort[point],10))
                        IF mtipo = 1
                                mensagem('ASSINANDO a Nota No. '+mnota_xml)
                                mretorno := IBR_COMANDO('NFE.AssinarNFe('+ALLTRIM(mcaminho)+mnota_xml+')',,3)
                                atencao(mretorno)
                                fecha_tela()
                        ELSEIF mtipo = 2
                                mensagem('VALIDANDO a Nota No. '+mnota_xml)
                                mretorno := NFE_comando('NFE.ValidarNFe('+ALLTRIM(mcaminho)+mnota_xml+')',,3)
                                atencao(mretorno)
                                fecha_tela()
                        ELSEIF mtipo = 3
                                mensagem('ENVIANDO a Nota No. '+mnota_xml)
                                IF mtipo_nota = 'MDFE'
                                        mretorno := IBR_comando('MDFE.ENVIARMDFe('+ALLTRIM(mcaminho)+mnota_xml+')',,120)
                                        atencao(mretorno)
                                        mensagem('Aguarde um momento estar Imprimindo a Nota No. '+mnota_xml)
                                        mretorno := IBR_comando('MDFE.IMPRIMIRDAMDFE('+ALLTRIM(mcaminho)+mnota_xml+')',,120,,,)
                                        atencao(mretorno)
                                        mretorno := IBR_comando('MDFE.IMPRIMIRDAMDFEPDF('+ALLTRIM(mcaminho)+mnota_xml+')',,120,,,)
                                ELSE
                                        mdocumento := SUBSTR(mnota_xml,29,6)
                                        enviar_nfe(ALLTRIM(mcaminho)+mnota_xml,IF(mtp_nf = 'NF','NF','NFCE'),1)
                                        mretorno := IBR_comando('NFE.ImprimirDanfe('+ALLTRIM(mcaminho)+mnota_xml+')',,20,,,ALLTRIM(mcaminho)+'HTIfirma.jpg')
                                        atencao(mretorno)
                                        mretorno := IBR_comando('NFE.ImprimirDanfePDF('+ALLTRIM(mcaminho)+mnota_xml+')',,20,,,ALLTRIM(mcaminho)+'HTIfirma.jpg')
                                ENDIF
                                fecha_tela()
                        ELSEIF mtipo = 4
                                //ATENCAO(mtp_nf)
                                IF mtipo_nota = 'MDFE'
                                        mensagem('Aguarde um momento estar Imprimindo a Nota No. '+mnota_xml)
                                        mretorno := IBR_comando('MDFE.IMPRIMIRDAMDFE('+ALLTRIM(mcaminho)+mnota_xml+')',,120,,,)
                                        WVW_SetMousePos(,10,10)
                                        atencao(mretorno)
                                        mretorno := IBR_comando('MDFE.IMPRIMIRDAMDFEPDF('+ALLTRIM(mcaminho)+mnota_xml+')',,120,,,)
                                        WVW_SetMousePos(,10,10)
                                ELSEIF mtipo_nota = 'CCE '
                                        mensagem('Aguarde um momento estar Imprimindo a CARTA DE CORRECAO No. '+mnota_xml)
                                        mretorno := IBR_comando('NFe.ImprimirEvento('+ALLTRIM(mcaminho)+mnota_xml+')',,120,,,ALLTRIM(mcaminho)+'HTIfirma.jpg')
                                        WVW_SetMousePos(,10,10)
                                        atencao(mretorno)
                                        mretorno := IBR_comando('NFe.ImprimirEventoPDF('+ALLTRIM(mcaminho)+mnota_xml+')',,120,,,ALLTRIM(mcaminho)+'HTIfirma.jpg')
                                        WVW_SetMousePos(,10,10)
                                ELSE
                                        op_tela(01,10,6,54,'IMPRIMINDO O DANFE No.: '+mnota_xml,,'*')
                                        WvW_PBSetFont( NIL, 'times new roman', 25, 10,)
                                        nBotao_imp := wvw_pbCreate(NIL,2,1,4,21,'[I]mprimir',,{||Imprimir(1)},,1,.F.)
                                        nBotao_pre_imp := wvw_pbCreate(NIL,2,23,4,43,'[P]re-Impressao',,{||imprimir(2)},,1,.F.)
                                        mensagem('Tecle: [ENTER] ou [I]mprimir - [P]re-impressao')
                                        WHILE .T.
                                                INKEY(0)
                                                IF LASTKEY() = ASC('I') .OR. LASTKEY() = ASC('i') .OR. ;
                                                   LASTKEY() = ASC('P') .OR. LASTKEY() = ASC('p') .OR. ;
                                                   LASTKEY() = 13 .OR. LASTKEY() = 27
                                                        EXIT
                                                ENDIF
                                        ENDDO
                                        IF LASTKEY() # 27
                                                mensagem('Aguarde um momento estar Imprimindo a Nota No. '+mnota_xml)
                                                WVW_PBDestroy( NIL, nBotao_imp)
                                                WVW_PBDestroy( NIL, nBotao_pre_imp)
                                                fecha_tela()
                                                mensagem('IMPRIMINDO O DANFE No. '+ALLTRIM(mcaminho)+ALLTRIM(SUBSTR(m_demosort[point],10,53)))
                                                IF LASTKEY() = ASC('P') .OR. LASTKEY() = ASC('p')
                                                        //mretorno := IBR_comando('NFE.ImprimirDanfe('+ALLTRIM(mcaminho)+ALLTRIM(SUBSTR(m_demosort[point],10,53))+')',,1,.T.,,)
                                                        mret :=  IBR_comando('NFE.ImprimirDanfe('+ALLTRIM(mcaminho)+ALLTRIM(SUBSTR(m_demosort[point],10,53))+',,,,1,)',,30,.T.)
                                                ELSE
                                                        //mret :=  IBR_comando('NFE.ImprimirDanfe('+ALLTRIM(mcaminho)+ALLTRIM(SUBSTR(m_demosort[point],10,53))+')',,100,.T.,,)
                                                        mret := IBR_comando('NFE.ImprimirDanfe('+ALLTRIM(mcaminho)+ALLTRIM(SUBSTR(m_demosort[point],10,53))+',,1,1,,)',,30,.T.)
                                                        mret := IBR_comando('NFE.ImprimirDanfePDF('+ALLTRIM(mcaminho)+ALLTRIM(SUBSTR(m_demosort[point],10,53))+',,1,1,,)',,30,.T.)
                                                ENDIF
                                                WVW_SetMousePos(,10,10)
                                        ENDIF
                                        //mretorno := IBR_comando('NFE.ImprimirDanfe('+ALLTRIM(mcaminho)+mnota_xml+')',,120,,,ALLTRIM(mcaminho)+'HTIfirma.jpg')
                                        //mretorno := IBR_comando('NFE.ImprimirDanfe('+ALLTRIM(mcaminho)+ALLTRIM(SUBSTR(m_demosort[point],10,53))+',,,,1)',,1,.F.,1,)
                                        WVW_SetMousePos(,10,10)
                                ENDIF
                                fecha_tela()
                        ELSEIF mtipo = 5
                                mmotivo:=SPACE(20)                                
                                op_tela(10,10,11,50,'MOTIVO DO CANCELAMENTO Nota: '+SUBSTR(m_demo[point],2,6))
                                mensagem('Motivo com no <<< minimo 15 caracteres >>>')
                                @ 01,05 GET mmotivo PICT '@!' VALID IF(EMPTY(mmotivo) .OR. LEN(ALLTRIM(mmotivo)) < 15,.F.,.T.)
                                READ
                                IF LEN(mmotivo) <15
                                        atencao('O motivo nao foi aceito estar com menos de 15 caracteres...')
                                        fecha_tela()
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                mopcao := op_simnao('N','Confirma o CANCELAMENTO da nota CHAVE de No. '+SUBSTR(mnota_xml,1,44)+':')
                                IF LASTKEY() = 27 .OR. mopcao = 'N'
                                        fecha_tela()
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                IF mtipo_nota = 'MDFE'
                                        //MDFE.CANCELARMDFE(nChaveMDFE,nDados,[nCNPJ])
                                        mretorno := IBR_comando('MDFE.CANCELARMDFE('+SUBSTR(mnota_xml,1,AT('-',mnota_xml)-1)+','+ALLTRIM(mmotivo)+')',,3)
                                        atencao(mretorno)
                                ELSE
                                        mretorno := IBR_comando('NFE.CANCELARNFE('+SUBSTR(mnota_xml,1,AT('-',mnota_xml)-1)+','+ALLTRIM(mmotivo)+')',,3)
                                        IF 'OK: Rejeicao' $ mretorno
                                                atencao(mretorno)
                                        ELSE    //IF 'xEvento=Cancelamento homologado'
                                                mcons_mov:={}
                                                sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento = "+sr_cdbvalue(mtp_nf+SUBSTR(mnota_xml,29,6))+" AND ent_sai = 'S'",,.t.,@mcons_mov)
                                                sr_getconnection():exec('COMMIT',,.f.)
                                                IF LEN(mcons_mov) = 0
                                                        atencao('Esta nota: '+mtp_nf+SUBSTR(mnota_xml,29,6)+' nao se encontra em nossos arquivos')
                                                        LOOP
                                                ENDIF
                                                mcons_mov:={}
                                                sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento = "+sr_cdbvalue(mtp_nf+SUBSTR(mnota_xml,29,6))+" AND ent_sai = 'S' AND NOT cancel = 'C'",,.t.,@mcons_mov)
                                                sr_getconnection():exec('COMMIT',,.f.)
                                                IF LEN(mcons_mov) > 0
                                                        i:=0
                                                        FOR i = 1 TO LEN(mcons_mov)
                                                                aret:={}
                                                                sr_getconnection():exec("SELECT saldo_fis FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcons_mov[i,11]),,.t.,@aret)
                                                                sr_getconnection():exec('COMMIT',,.f.)
                                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_fis  = "+sr_cdbvalue(aret[1,1] + mcons_mov[i,19])+" WHERE cod_merc = "+sr_cdbvalue(mcons_mov[i,11]),,.f.)
                                                                sr_getconnection():exec("COMMIT",,.f.)
                                                                sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                                        'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                        'processo,ent_sai )'+;
                                                                        ' VALUES ('+;
                                                                        sr_cdbvalue(DATE())+','+; //1
                                                                        sr_cdbvalue(mdata_sis)+','+; //2
                                                                        sr_cdbvalue(TIME())+','+; //3
                                                                        sr_cdbvalue(mcons_mov[i,11])+','+; //4
                                                                        sr_cdbvalue(mcons_mov[i,19])+','+; //5
                                                                        sr_cdbvalue(aret[1,1])+','+; //6
                                                                        sr_cdbvalue(aret[1,1] - mcons_mov[i,19])+','+; //7
                                                                        sr_cdbvalue(cod_operado)+','+; //8
                                                                        sr_cdbvalue('SACNF_E')+','+; //9
                                                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                        sr_cdbvalue('NF-e: '+mtp_nf+SUBSTR(mnota_xml,29,6))+','+; //11
                                                                        sr_cdbvalue('S')+')',,.f.)
                                                        NEXT
                                                ENDIF
                                                sr_getconnection():exec("COMMIT",,.f.)
                                        ENDIF
                                        sr_getconnection():exec("UPDATE sacmovnt SET cancel  = 'C' WHERE documento = "+sr_cdbvalue(mtp_nf+SUBSTR(mnota_xml,29,6))+" AND ent_sai = 'S'",,.f.)
                                        sr_getconnection():exec("UPDATE sactotnt SET cancel  = 'C' WHERE documento = "+sr_cdbvalue(mtp_nf+SUBSTR(mnota_xml,29,6))+" AND ent_sai = 'S'",,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                ENDIF
                                fecha_tela()
                                wvw_lclosewindow()
                        ELSEIF mtipo = 6
                                mcaminho := SPACE(60)
                                op_tela(05,10,07,80,'Caminho do destino do(s) Arquivo(s)')
                                mensagem('Digite o caminho Ex: C:\SIAC')
                                DEVPOS(01,01);DEVOUT('Caminho:')
                                @ 01,COL()+1 GET mcaminho PICT '@!' VALID IF(EMPTY(mcaminho),.F.,.T.)
                                READ
                                IF LASTKEY() = 27
                                        fecha_tela()
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF                                
                                FOR i = 1 TO LEN(m_caminho)
                                        //atencao('COPY '+ALLTRIM(mcaminho)+m_caminho[i]+" "+ALLTRIM(mcaminho))
                                        MYRUN('COPY '+ALLTRIM(mcaminho)+m_caminho[i]+" "+ALLTRIM(mcaminho))
                                NEXT
                                atencao('Foi copiado '+ALLTRIM(TRANSFORM(LEN(m_caminho),'999,999,999'))+' Arquivos para o Caminho: '+ALLTRIM(mcaminho)+' com sucesso...')
                                fecha_tela()
                                wvw_lclosewindow()
                        ELSEIF mtipo = 7
                                //ATENCAO('Lendo a NFE: '+ALLTRIM(mcaminho)+mnota_xml)
                                mretorno := NFE_comando('NFe.LerNFe('+ALLTRIM(mcaminho)+mnota_xml+')',,3)
                                ATENCAO(MRETORNO)
                                IF 'S' = op_simnao('S','Deseja Editar o arquivo:')
                                        IBR_comando('NFe.NFeToTXT('+ALLTRIM(mcaminho)+mnota_xml+','+ALLTRIM(mcaminho)+mnota_xml+SUBSTR(mnota_xml,29,6)+'.txt)',,3)
                                        MYRUN('NOTEPAD '+ALLTRIM(mcaminho)+mnota_xml+SUBSTR(mnota_xml,29,6)+'.txt')
                                ENDIF
                                fecha_tela()
                        ELSEIF mtipo = 8
                                mdocumento := SUBSTR(mnota_xml,29,6)
                                mcaminho :=ALLTRIM(mcaminho)+mnota_xml
                                IF mtipo_nota = 'MDFE'
                                        mretorno := IBR_comando('MDFE.CONSULTARMDFE('+mcaminho+')',,3)
                                        atencao(mretorno)
                                ELSE
                                        mretorno := IBR_comando('NFE.ConsultarNFe('+mcaminho+')',,3)
                                        atencao(mretorno)
                                        IF 'Autorizado o uso da NF-e' $ mretorno
                                                //atencao('Autorizado o uso da NF-e')
                                                IF mtp_nf = 'NFCE'
                                                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = ' ' WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                ELSE
                                                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = ' ' WHERE documento = "+sr_cdbvalue('NF'+mdocumento),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                ENDIF
                                        ENDIF
                                        //NFe.LerNFe(cArqXML)
                                ENDIF
                                fecha_tela()
                        ELSEIF mtipo = 9
                                mcaminho :=ALLTRIM(mcaminho)+mnota_xml
                                op_tela(10,10,11,70,'Enviar EMAIL')
                                DEVPOS(00,00);DEVOUT('Email de Destino:')
                                @ 00,18 GET m_email VALID IF(EMPTY(m_email),.F.,.T.)
                                READ
                                IF LASTKEY() # 27
                                        m_ret := IBR_comando('NFE.ENVIAREMAIL('+m_email+','+mcaminho+',1)',,3)
                                        atencao(m_ret)
                                        fecha_tela()
                                        wvw_lclosewindow()
                                ELSE
                                        fecha_tela()
                                        wvw_lclosewindow()
                                ENDIF
                        ELSEIF mtipo = 11 //CHEKLIST
                                i:=0
                                FOR i = 1 TO LEN(m_demosort)
                                        mcaminho2 := ''
                                        mnota_xml := ALLTRIM(SUBSTR(m_demosort[i],10,73))
                                        mdocumento := SUBSTR(mnota_xml,29,6)
                                        mcaminho2 :=ALLTRIM(mcaminho)+mnota_xml
                                        //atencao(mcaminho2+m_qp+ALLTRIM(mcaminho)+m_caminho[i])
                                        mensagem('Consultando a not fiscal No.: '+mdocumento)
                                        mretorno := IBR_comando('NFE.ConsultarNFe('+mcaminho2+')',,3)
                                        //atencao(mretorno)
                                        IF 'Autorizado o uso da NF-e' $ mretorno
                                                //atencao('Autorizado o uso da NF-e')
                                                IF mtipo_nota = 'NFCE'
                                                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = ' ',conjunta  = '*' WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                        m_movnt := {}
                                                        sr_getconnection():exec("SELECT documento,data_s_e,cod_cli,cliente,uf_cli,cancel,camnfe,modelo,serie FROM sacmovnt WHERE documento ="+sr_cdbvalue('CP'+mdocumento)+" GROUP BY data_s_e,documento,cod_cli,cliente,uf_cli,cancel,camnfe,modelo,serie ORDER BY data_s_e,documento",,.t.,@m_movnt)
                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                        IF LEN(m_movnt) > 0
                                                                IF m_movnt[1,6] = 'C'
                                                                        m_mov := {}
                                                                        sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento ="+sr_cdbvalue('CP'+mdocumento)+" ORDER BY data_s_e,documento",,.t.,@m_mov)
                                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                                        IF LEN(m_mov) > 0
                                                                                f:=0
                                                                                FOR f = 1 TO LEN(m_mov)
                                                                                        m_merc := {}
                                                                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc ="+sr_cdbvalue(m_mov[f,11]),,.t.,@m_merc)
                                                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                                                        sr_begintransaction()
                                                                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(m_merc[1,55] - m_mov[f,19])+" WHERE cod_merc = "+sr_cdbvalue(m_mov[f,11]),,.f.)
                                                                                                sr_committransaction()
                                                                                        sr_endtransaction()
                                                                                        sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                                'processo,ent_sai)'+;
                                                                                                ' VALUES ('+;
                                                                                                sr_cdbvalue(DATE())+','+; //1
                                                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                                                sr_cdbvalue(TIME())+','+; //3
                                                                                                sr_cdbvalue(m_mov[f,11])+','+; //4
                                                                                                sr_cdbvalue(m_mov[f,19])+','+; //5
                                                                                                sr_cdbvalue(m_merc[1,55])+','+; //6
                                                                                                sr_cdbvalue(m_merc[1,55] - m_mov[f,19])+','+; //7
                                                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                                                sr_cdbvalue('SAC_NFE')+','+; //9
                                                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                                sr_cdbvalue('CHEKLIST: CP'+mdocumento)+','+; //11
                                                                                                sr_cdbvalue('S')+')',,.f.)
                                                                                NEXT
                                                                        ENDIF
                                                                ENDIF
                                                        ENDIF

                                                ELSE
                                                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = ' ',conjunta  = '*' WHERE documento = "+sr_cdbvalue('NF'+mdocumento),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)

                                                        m_movnt := {}
                                                        sr_getconnection():exec("SELECT documento,data_s_e,cod_cli,cliente,uf_cli,cancel,camnfe,modelo,serie FROM sacmovnt WHERE documento ="+sr_cdbvalue('NF'+mdocumento)+" GROUP BY data_s_e,documento,cod_cli,cliente,uf_cli,cancel,camnfe,modelo,serie ORDER BY data_s_e,documento",,.t.,@m_movnt)
                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                        IF LEN(m_movnt) > 0
                                                                IF m_movnt[1,6] = 'C'
                                                                        m_mov := {}
                                                                        sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento ="+sr_cdbvalue('NF'+mdocumento)+" ORDER BY data_s_e,documento",,.t.,@m_mov)
                                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                                        IF LEN(m_mov) > 0
                                                                                f:=0
                                                                                FOR f = 1 TO LEN(m_mov)
                                                                                        m_merc := {}
                                                                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc ="+sr_cdbvalue(m_mov[f,11]),,.t.,@m_merc)
                                                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                                                        sr_begintransaction()
                                                                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(m_merc[1,55] - m_mov[f,19])+" WHERE cod_merc = "+sr_cdbvalue(m_mov[f,11]),,.f.)
                                                                                                sr_committransaction()
                                                                                        sr_endtransaction()
                                                                                        sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                                'processo,ent_sai)'+;
                                                                                                ' VALUES ('+;
                                                                                                sr_cdbvalue(DATE())+','+; //1
                                                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                                                sr_cdbvalue(TIME())+','+; //3
                                                                                                sr_cdbvalue(m_mov[f,11])+','+; //4
                                                                                                sr_cdbvalue(m_mov[f,19])+','+; //5
                                                                                                sr_cdbvalue(m_merc[1,55])+','+; //6
                                                                                                sr_cdbvalue(m_merc[1,55] - m_mov[f,19])+','+; //7
                                                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                                                sr_cdbvalue('SAC_NFE')+','+; //9
                                                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                                sr_cdbvalue('CHEKLIST: NF'+mdocumento)+','+; //11
                                                                                                sr_cdbvalue('S')+')',,.f.)
                                                                                NEXT
                                                                        ENDIF
                                                                ENDIF
                                                        ENDIF

                                                ENDIF
                                        ELSE
                                                IF mtipo_nota = 'NFCE'
                                                        //atencao('CP'+mdocumento)
                                                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = 'C',conjunta  = '*' WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                        m_movnt := {}
                                                        sr_getconnection():exec("SELECT documento,data_s_e,cod_cli,cliente,uf_cli,cancel,camnfe,modelo,serie FROM sacmovnt WHERE documento ="+sr_cdbvalue('CP'+mdocumento)+" GROUP BY data_s_e,documento,cod_cli,cliente,uf_cli,cancel,camnfe,modelo,serie ORDER BY data_s_e,documento",,.t.,@m_movnt)
                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                        IF LEN(m_movnt) > 0
                                                                IF m_movnt[1,6] = ' '
                                                                        m_mov := {}
                                                                        sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento ="+sr_cdbvalue('CP'+mdocumento)+" ORDER BY data_s_e,documento",,.t.,@m_mov)
                                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                                        IF LEN(m_mov) > 0
                                                                                f:=0
                                                                                FOR f = 1 TO LEN(m_mov)
                                                                                        m_merc := {}
                                                                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc ="+sr_cdbvalue(m_mov[f,11]),,.t.,@m_merc)
                                                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                                                        sr_begintransaction()
                                                                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(m_merc[1,55] + m_mov[f,19])+" WHERE cod_merc = "+sr_cdbvalue(m_mov[f,11]),,.f.)
                                                                                                sr_committransaction()
                                                                                        sr_endtransaction()
                                                                                        sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                                'processo,ent_sai)'+;
                                                                                                ' VALUES ('+;
                                                                                                sr_cdbvalue(DATE())+','+; //1
                                                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                                                sr_cdbvalue(TIME())+','+; //3
                                                                                                sr_cdbvalue(m_mov[f,11])+','+; //4
                                                                                                sr_cdbvalue(m_mov[f,19])+','+; //5
                                                                                                sr_cdbvalue(m_merc[1,55])+','+; //6
                                                                                                sr_cdbvalue(m_merc[1,55] + m_mov[f,19])+','+; //7
                                                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                                                sr_cdbvalue('SAC_NFE')+','+; //9
                                                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                                sr_cdbvalue('CHEKLIST: CP'+mdocumento)+','+; //11
                                                                                                sr_cdbvalue('E')+')',,.f.)
                                                                                NEXT
                                                                        ENDIF
                                                                ENDIF
                                                        ENDIF
                                                ELSE
                                                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = 'C',conjunta  = '*' WHERE documento = "+sr_cdbvalue('NF'+mdocumento),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                        m_movnt := {}
                                                        sr_getconnection():exec("SELECT documento,data_s_e,cod_cli,cliente,uf_cli,cancel,camnfe,modelo,serie FROM sacmovnt WHERE documento ="+sr_cdbvalue('NF'+mdocumento)+" GROUP BY data_s_e,documento,cod_cli,cliente,uf_cli,cancel,camnfe,modelo,serie ORDER BY data_s_e,documento",,.t.,@m_movnt)
                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                        IF LEN(m_movnt) > 0
                                                                IF m_movnt[1,6] = ' '
                                                                        m_mov := {}
                                                                        sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento ="+sr_cdbvalue('NF'+mdocumento)+" ORDER BY data_s_e,documento",,.t.,@m_mov)
                                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                                        IF LEN(m_mov) > 0
                                                                                f:=0
                                                                                FOR f = 1 TO LEN(m_mov)
                                                                                        m_merc := {}
                                                                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc ="+sr_cdbvalue(m_mov[f,11]),,.t.,@m_merc)
                                                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                                                        sr_begintransaction()
                                                                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(m_merc[1,55] + m_mov[f,19])+" WHERE cod_merc = "+sr_cdbvalue(m_mov[f,11]),,.f.)
                                                                                                sr_committransaction()
                                                                                        sr_endtransaction()
                                                                                        sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                                'processo,ent_sai)'+;
                                                                                                ' VALUES ('+;
                                                                                                sr_cdbvalue(DATE())+','+; //1
                                                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                                                sr_cdbvalue(TIME())+','+; //3
                                                                                                sr_cdbvalue(m_mov[f,11])+','+; //4
                                                                                                sr_cdbvalue(m_mov[f,19])+','+; //5
                                                                                                sr_cdbvalue(m_merc[1,55])+','+; //6
                                                                                                sr_cdbvalue(m_merc[1,55] + m_mov[f,19])+','+; //7
                                                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                                                sr_cdbvalue('SAC_NFE')+','+; //9
                                                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                                sr_cdbvalue('CHEKLIST: NF'+mdocumento)+','+; //11
                                                                                                sr_cdbvalue('E')+')',,.f.)
                                                                                NEXT
                                                                        ENDIF
                                                                ENDIF
                                                        ENDIF

                                                ENDIF
                                        ENDIF
                                        //WHERE EXTRACT(MONTH from Data_s_e) = EXTRACT(MONTH FROM Current_date) AND EXTRACT(year from data_s_e) = EXTRACT(year from Current_date)




                                NEXT
                                wvw_lclosewindow()
                        ELSEIF mtipo = 12
                                //mcaminho :=ALLTRIM(mcaminho)+mnota_xml
                                //mcons_mov:={}
                                mdoc_mdfe := SUBSTR(mnota_xml,29,6)

                                marq_excl := ALLTRIM(mcaminho)+mnota_xml

                                mdocumento := ALLTRIM(mcaminho)+'consmdfe.txt'
                                mdocumento := IBR_comando('MDFe.LerMDFe',{marq_excl},,.T.)
                                IBR_comando('MDFe.SaveToFile',{ALLTRIM(mcaminho)+'mdfe.txt',mdocumento},,.T.)
                                mdocumento := ALLTRIM(mcaminho)+'\mdfe.txt'
                                lin := MEMOLINE(MEMOREAD(mdocumento),110,1,,)
                                linhas := linha := 0
                                linhas := MLCOUNT(MEMOREAD(mdocumento),110)
                                m_entrada := {}
                                mcod_cid := ''
                                FOR linha = 1 TO  linhas
                                        lin := MEMOLINE(MEMOREAD(mdocumento),110,linha,,)
                                        IF 'cMunCarrega' $ ALLTRIM(lin)
                                                mcod_cid := ALLTRIM(SUBSTR(lin,13))
                                                //atencao(ALLTRIM(lin))
                                                EXIT
                                        ENDIF

                                NEXT


                                //atencao("SELECT * FROM sacmdfe WHERE nmdf = "+sr_cdbvalue(mdocumento))
                                //sr_getconnection():exec("SELECT * FROM sacmdfe WHERE nmdf = "+sr_cdbvalue(ALLTRIM(mdocumento)),,.t.,@mcons_mov)
                                /*
                                IF LEN(mcons_mov) = 0
                                        atencao('Esta nota de No.: '+mdocumento+' nao se encontra em nossos arquivos')
                                ENDIF
                                */
                                IF 'S' = op_simnao('S','Confirma o ENCERRAMENTO MDFe:')
                                        m_ret := IBR_comando('MDFE.ENCERRARMDFE',{marq_excl,DTOC(mdata_sis),mcod_cid},,.T.)
                                        atencao(m_ret)
                                        sr_getconnection():exec("UPDATE sacmdfe SET encerrou = '*' WHERE nmdf = "+sr_cdbvalue(mdoc_mdfe),,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                        wvw_lclosewindow()
                                ELSE
                                        wvw_lclosewindow()
                                ENDIF
                        ENDIF
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* f i m *********************************************
* FUNCAO P/nfe_inutilizar
**********************
FUNCTION nfe_inutilizar()
******************
LOCAL m_aux1:={},m_demo:={},mmotivo:=SPACE(20),mdat_ini,mdat_fim,m_caminho:={},mcaminho:='',mcons_nota := {},mtipo:=0,marq_sai := '',;
      m_inutilizar:={}
PRIVATE mchnfe:='',m_email:=SPACE(60),mdocumento:=''
op_tela(01,15,49,90,'ARQUIVOS NFE (XML)',,1)
exibi_prg('SACNF_E/SAC_NFE')
//IF m_indiv[1,37] = 'C:\ACBRMONITORPLUS\'
marq_sai := ALLTRIM(m_indiv[1,37])+"SAINFE.TXT"
//ENDIF
mdat_ini := mdat_fim := CTOD('  /  /  ')
WHILE .T.
        limpa(00,00,50,100)
        DEVPOS(00,01);DEVOUT('Caminho dos XML:')
        //DEVPOS(00,28);DEVOUT('Data Final:')
        @ 01,00 TO 01,100
        setcor(3)
        DEVPOS(02,00);DEVOUT(' N.Nota                  Arquivo XML                             Data')
        setcor(1)
        @ 03,00 TO 03,90

        @ 00,18 GET m_indiv[1,40]
        //@ 00,40 GET mdat_fim VALID IF(mdat_fim < mdat_ini,.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        /*
        IF EMPTY(mdat_ini)
                mdat_ini := CTOD('01/01/94')
                mdat_fim := DATE()
        ENDIF
        */
        m_aux1:={}
        m_demo:={}
        m_caminho:={}
        CLEAR GETS
        m_aux1 := DIRECTORY(ALLTRIM(m_indiv[1,40])+'*-nfe.xml','D')
        IF LEN(m_aux1) > 0
                i := 0
                FOR i = 1 TO LEN(m_aux1)
                        AADD(m_demo,' '+SUBSTR(m_aux1[i,1],29,6)+'  '+m_aux1[i,1]+'  '+DTOC(m_aux1[i,3]))
                        AADD(m_caminho,m_aux1[i,1])
                NEXT
        ELSE
                atencao('Nao existe nenhuma NFE neste Caminho: '+ALLTRIM(m_indiv[1,40]))
                LOOP
        ENDIF
        point := 0
        mensagem('<CTRL + Page Down> p/Ultima Nota - Escolha a Nota e pressione <ENTER>')
        @ 46,00 TO 46,90
        DEVPOS(47,01);DEVOUT('TOTAL DE NOTAS FISCAIS:')
        @ 48,00 TO 48,90
        setcor(3)
        DEVPOS(47,25);DEVOUT(ALLTRIM(TRANSFORM(LEN(m_demo),'999,999,999')))
        setcor(10);point := ACHOICE(4,0,45,79,m_demo,,,point);setcor(1)
        setcor(1)
        DO CASE
                CASE LASTKEY()=27
                        LOOP
                CASE LASTKEY() = 13
                        mensagem('INCICIANDO O ACBR Aguarde um momento....')
                        IF ! IBR_INIT(ALLTRIM(m_indiv[1,43]))
                                atencao('Nao e possivel INICIALIZAR o ACBRMONITORPLUS pelo TCP-IP, verificar se estar instalado...')
                                wvw_lclosewindow()
                                RETURN NIL
                        ENDIF
                        mensagem('ATIVANDO O ACBR Aguarde um momento....')
                        IF ! IBR_OK( IBR_COMANDO( 'NFE.Ativo',,25))
                                wvw_lclosewindow()
                                RETURN NIL
                        ENDIF
                        mensagem('Verificando STATUS DO SERVICO NFe Aguarde um momento....')
                        IF ! IBR_OK(IBR_comando('NFE.STATUSSERVICO',,30))
                                //wvw_lclosewindow();RETURN NIL
                        ENDIF
                        opcao := op_simnao('S','Confirma o PROCESSO DE INUTILIZACAO DAS NF-e e NFC-e:')
                        IF opcao = 'N' .OR. LASTKEY() = 27
                                EXIT
                        ENDIF
                        m_inutilizar:={}
                        op_tela(05,10,07,90,'Inutilizando NFE')
                        FOR i = 1 TO LEN(m_caminho)
                                DEVPOS(01,01);DEVOUT(ALLTRIM(SUBSTR(m_caminho[i],1,AT('-',m_caminho[i])-1)))
                                mcaminho :=ALLTRIM(m_indiv[1,40])+m_caminho[i]
                                DEVPOS(01,01);DEVOUT(mcaminho)
                                //mretorno := IBR_comando('NFE.ConsultarNFe('+mcaminho+')',,3)
                                //IF ! 'Autorizado o uso da NF-e' $ mretorno
                                        mretorno := IBR_comando('NFE.InutilizarNFe('+SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2)+',Error de dados na nota,'+SUBSTR(m_caminho[i],3,2)+','+SUBSTR(m_caminho[i],21,2)+',1,'+SUBSTR(m_caminho[i],29,6)+','+SUBSTR(m_caminho[i],29,6)+')',,3,,1)
                                        IF ! EMPTY(mretorno)
                                        sr_getconnection():exec('INSERT INTO nfe_inutilizada ('+;
                                                'JUSTIFICATIVA,'+;//1
                                                'ANO          ,'+;//2
                                                'MODELO       ,'+;//3
                                                'SERIE        ,'+;//4
                                                'NUMERO       ,'+;//4
                                                'CAMINHO      )'+;
                                                ' VALUES ('+;
                                                sr_cdbvalue('Error de dados na nota' )+','+; //1
                                                sr_cdbvalue(SUBSTR(m_caminho[i],3,2) )+','+; //2
                                                sr_cdbvalue(SUBSTR(m_caminho[i],21,2))+','+; //3
                                                sr_cdbvalue('1'                      )+','+; //4
                                                sr_cdbvalue(SUBSTR(m_caminho[i],29,6))+','+;
                                                sr_cdbvalue(mcaminho)+')',,.f.)
                                                sr_getconnection():exec('COMMIT',,.f.)
                                        ENDIF
                                //ENDIF
                        NEXT
                        wvw_lclosewindow()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* f i m *********************************************
FUNCTION ler_proc(marquivo,mprocura)
************************************
LOCAL mler_lin,mqtd_l:=0,mcont_linhas

//IF FILE(marquivo)
        //atencao(marquivo)
        mler_lin := MEMOLINE(marquivo,110,1,,)
        mcont_linhas := mqtd_l := 0
        mcont_linhas := MLCOUNT(marquivo,110)
        //atencao(strzero(mcont_linhas,5))
        FOR mqtd_l = 1 TO  mcont_linhas
                mler_lin := MEMOLINE(marquivo,110,mqtd_l,,)
                IF mprocura $ ALLTRIM(mler_lin)
                        mler_lin := mler_lin + m_qp+MEMOLINE(marquivo,110,mqtd_l+1,,)
                        RETURN ALLTRIM(mler_lin)
                ENDIF
        NEXT
//ELSE
//        atencao('Este arquivo: '+marquivo+' nao encontrado...')
//        RETURN ''
//ENDIF
RETURN NIL
******************************* f i m *********************************************
FUNCTION Imprimir(ml_op)
************************
IF ml_op = 1
        KEYBOARD 'I'
ELSE
        KEYBOARD 'P'
ENDIF
RETURN NIL
