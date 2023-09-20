
/*
*******************************************
* EMISSAO DE RECIBOS PAGAMENTOS DA HTI
*******************************************

FUNCTION sacinrec()
*******************

LOCAL tela,lci,cci,lba,cba,opcao,mdocumento,mquantd,mvalor,;
      mobs1,mobs2,mobs3,mobs4,mobs5,mobs6,mdata1,mdata2

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcod_vend:=0,mtip_term:='O'

lci := 16
cci := 10
lba := 19
cba := 70
opcao := ' '
tela := SAVESCREEN(00,00,24,79)
************************************
CLOSE ALL
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('sacnoped','noped');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
//
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
************************************
mquantd := mvalor := 0
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mdata1 := mdata2 := CTOD('  /  /  ')
        mcod_vend := 0
        botao(lci,cci,lba,cba)
        DEVPOS(lci+1,cci+1);DEVOUT('Digite as Datas Inicial:            a')
        DEVPOS(lci+2,cci+1);DEVOUT('Codigo do Operador.....:')
        @ lci+1,cci+26 GET mdata1 VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+1,cci+40 GET mdata2 VALID IF(mdata2<mdata1,.F.,.T.)
        @ lci+2,cci+26 GET mcod_vend PICT '999' VALID ven(mcod_vend,lci+2,cci+30)
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela)
                RETURN NIL
        ENDIF
        opcao := op_simnao('S','Confirma o processamento [S/n]:')
        IF opcao = 'N'
                LOOP
        ENDIF
        **************
        SELE('dupr');ORDSETFOCUS(4)
        GO TOP
        **************
        dupr->(DBSEEK(DTOS(mdata1),.T.))
        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        IF ! imp_arq('PARC_INSE.REL','R')
                LOOP
        ENDIF
        WHILE dupr->venc <= mdata2 .AND. ! EOF()
                IF (! EMPTY(datpag) .OR. ! EMPTY(dupr->pago));
                   .OR. (! EMPTY(mcod_vend) .AND. dupr->vendedor <> STRZERO(mcod_vend,3))
                        SKIP
                        LOOP
                ENDIF
                mdocumento := SUBSTR(DTOC(dupr->venc),4)
                mobs1:=  'manutencao do sistema SISCOM (sistema integrado de automacao comercial.) do mes '+mdocumento
                mobs2 := mobs3 := mobs4 := mobs5 := ;
                mobs6 := '                                                 '
                mquantd := mvalor := i := 0
                FOR i = 1 TO 2
                        IF dupr->valor < 300
                                mvalor := 300
                                mdesc := 300 - dupr->valor
                        ELSE
                                mvalor := dupr->valor
                                mdesc := 0
                        ENDIF
                        HTI_b(dupr->fornec,dupr->cliente,DTOC(dupr->venc),;
                                DTOC(mdata_sis),mdocumento,DTOC(mdata_sis),;
                                mvalor,mobs1,mobs2,mobs3,mobs4,mobs5,mobs6,mdesc)
                NEXT
                EJECT
                SKIP
        ENDDO
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        CLEAR GETS
        RESTSCREEN(00,00,24,79,tela)
        RETURN NIL
ENDDO

*/
#include "fileio.ch"
#include "commands.ch"

#define  ETX CHR(3)
#define  CR  CHR(13)
#define  LF  CHR(10)

#define ENT_TXT  'ENTNFE.TXT'
#define SAI_TXT  'SAINFE.TXT'
#define TMP_TXT  'ENTNFE.TMP'

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
*********************************************
* IMPRIMI NOTA FISCAL ELETRONICA
********************************************
FUNCTION sacnf_e(m_nota,via,texto)
*********************
LOCAL mprg:='SACNF_E',;
      lci,cci,lba,cba,micm,mdoc,maux,;
      mdoc_aux,mcli_nota,mend_nota,mbai_nota,;
      mop_nota:='N',mcod_uax,mcont_prod:=0,mpeso:=0,mpeso_liq:=0,mdocumento,;
      cComm,aret,mcons_cid:={},mobs1,mobs2,mobs3,mobs4,mobs5,mobs6,mobs7,mobs8,;
      mobs9,mobs10,mobs11,mobs12,mobs13,mobs14,mobs15,mobs16,mobs17,mobs18,mobs19,mobs20,mcons_cli:={},;
      m_retorno:={},lin,linhas,linha,h:=0,mretorno:=' ',mchnfe:='',mcons_prod:={},mc_merc,mc_obs,m_obs,mpt,;
      mvlr_icmsub:=0,mbase_icmsub:=0,mpr_fat:=0

MEMVAR mcod_cli,mmodelo,mcod_nat1,msittrib
PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mpag:=0,marq_sai:=''

mensagem('INCICIANDO O NFe Aguarde um momento....')
//IBR_INIT('C:\ACBrNFeMonitor\')
IF ! EMPTY(m_indiv[1,43])
        //atencao(ALLTRIM(m_indiv[1,42]))
        NFE_INIT(ALLTRIM(m_indiv[1,43]))
ELSE
        NFE_INIT("C:\ACBRNFEMONITOR\")
ENDIF

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
op_tela(02,05,32,85,' INFORMACOES ADICIONAIS DA NOTA FISCAL ELETRONICA')
marq_sai := "C:\ACBrNFeMonitor\SAINFE.TXT"
WHILE .T.
        mcons_cli := {}
        cComm := "SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli)
        sr_getconnection():exec(ccomm,,.t.,@mcons_cli)
        IF LEN(mcons_cli) = 0
                atencao('Nao foi encontrado o Cliente !!!!')
        ENDIF

        mcons_cid := {}
        cComm := "SELECT * FROM saccid WHERE cidade = "+sr_cdbvalue(RTRIM(m_set[1,134]))+" AND uf = "+sr_cdbvalue(RTRIM(m_set[1,19]))
        sr_getconnection():exec(ccomm,,.t.,@mcons_cid)
        IF LEN(mcons_cid) = 0 .OR. EMPTY(mcons_cid[1,1])
                atencao('Nao e Possivel a emissao desta nota pois o codigo da cidade da EMPRESA nao estar cadastrado !!!!')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mcons_cid := {}
        cComm := "SELECT * FROM saccid WHERE (cidade = "+sr_cdbvalue(RTRIM(mcons_cli[1,24]))+"OR cidade IS NULL) AND uf = "+sr_cdbvalue(RTRIM(mcons_cli[1,25]))
        sr_getconnection():exec(ccomm,,.t.,@mcons_cid)
        IF LEN(mcons_cid) = 0 .OR. EMPTY(mcons_cid[1,1])
                atencao('Nao e Possivel a emissao desta nota pois o codigo da cidade do CLIENTE nao estar cadastrado !!!!')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        mobs1:=mobs2:=mobs3:=mobs4:=mobs5:=mobs6:=mobs7:=mobs8:=mobs9:=mobs10 :=SPACE(50)
        mobs11:=mobs12:=mobs13:=mobs14:=mobs15:=mobs16:=mobs17:=mobs18:=mobs19:=mobs20 :=SPACE(50)
        mretorno := mchnfe := ''
        mvlr_icmsub := mbase_icmsub := 0
        SET CENTURY ON
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'M'
****************************************************
        //mtot_quantd := mensagem2('Quantidade de item:',mtot_quantd,'999,999.99',,'N')
        DEVPOS(00,01);DEVOUT('Quantidade Item:')
        DEVPOS(00,30);DEVOUT('Peso Bruto:')
        DEVPOS(00,54);DEVOUT('Peso Liquido:')
        botao(02,01,21,69,,' OBSERVACAO NOTA','*')
        botao(22,01,31,69,,' Duplicatas ')
        DEVPOS(23,11);DEVOUT('Qt.Vezes:')
        DEVPOS(23,25);DEVOUT('Intervalos:    -   -   -   -   -')
        DEVPOS(24,11);DEVOUT('No.Dup.:')
        DEVPOS(24,33);DEVOUT('Venc.:')
        DEVPOS(24,52);DEVOUT('Vlr.:')
        DEVPOS(25,11);DEVOUT('No.Dup.:')
        DEVPOS(25,33);DEVOUT('Venc.:')
        DEVPOS(25,52);DEVOUT('Vlr.:')
        DEVPOS(26,11);DEVOUT('No.Dup.:')
        DEVPOS(26,33);DEVOUT('Venc.:')
        DEVPOS(26,52);DEVOUT('Vlr.:')
        DEVPOS(27,11);DEVOUT('No.Dup.:')
        DEVPOS(27,33);DEVOUT('Venc.:')
        DEVPOS(27,52);DEVOUT('Vlr.:')
        DEVPOS(28,11);DEVOUT('No.Dup.:')
        DEVPOS(28,33);DEVOUT('Venc.:')
        DEVPOS(28,52);DEVOUT('Vlr.:')
        DEVPOS(29,11);DEVOUT('No.Dup.:')
        DEVPOS(29,33);DEVOUT('Venc.:')
        DEVPOS(29,52);DEVOUT('Vlr.:')
        DEVPOS(30,11);DEVOUT('Valor do IPI:'+TRANSFORM(mtot_ipi,'999,999.99'))
        //nfe_comando('NFE.Ativo',,3)

        IF ! IBR_OK(nfe_comando('NFE.STATUSSERVICO',,3))
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
	IF mtipo_nota = 'N'
	        mtot_quantd := LEN(m_nota)
        	mtot_icm := mtot_icmf:=mtot_peso:=mtot_liq:=mbase_icm:=i := 0
        	FOR i = 1 TO LEN(m_nota)
			mtot_liq := mtot_liq + (m_nota[i,18] * m_nota[i,5])
	                mtot_peso := mtot_peso + (m_nota[i,9] * m_nota[i,5])
        	NEXT
        ENDIF
        @ 00,18 GET mtot_quantd PICT '999,999.99'
        @ 00,42 GET mtot_peso PICT '99,999.999'
        @ 00,68 GET mtot_liq PICT '99,999.999'
        READ
	IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
	ENDIF
        mpis:=mconfis:=micms_desc:=0
        IF ver_serie() = '141235'
                IF (mcod_nat = '6.109' .OR. mcod_nat = '6.110') .AND. mtipo_nota = 'N'
                        i := 0
                        FOR i = 1 TO LEN(m_nota)
                                IF mcod_fat = '02'
                                        mpis :=iat(mpis + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*.0165,2)
                                        mconfis :=iat(mconfis + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*.076,2)
                                        micms_desc :=iat(micms_desc+((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*.12,2)
        *                               mtot_desc :=iat(mtot_desc + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*.12,2)
                                ELSE
                                        mpis :=iat(mpis + (m_nota[i,7] * m_nota[i,5])*.0165,2)
                                        mconfis :=iat(mconfis + (m_nota[i,7] * m_nota[i,5])*.076,2)
                                        micms_desc :=iat(micms_desc+(m_nota[i,7] * m_nota[i,5])*.12,2)
        *                               mtot_desc :=iat(mtot_desc + (m_nota[i,7] * m_nota[i,5])*.12,2)
                                ENDIF
                        NEXT
        *               mobs1 := 'OBS.: INSC. SUFRAMA             (R$:'+ALLTRIM(TRANSFORM(mtot_desc,'999,999.99'))+') " DESCONTO REFERENTE'
                        mobs1 := 'OBS.: INSC. SUFRAMA             (R$:'+ALLTRIM(TRANSFORM(mpis+mconfis+micms_desc,'999,999.99'))+') " DESCONTO REFERENTE'
                        mobs2 := '      ICMS DE ACORDO COM PARAGRAFO 4o. ART.690 DO DECRETO 14.876/91 "'
                        mobs3 := '      IPI ISENTO CONF.ART.59 INCISO III DO DECRETO 2637/98'
                        mobs4 := SPACE(55)
                ELSEIF mtipo_nota = 'C'
                        mpis :=iat(mtot_nota*.0165,2)
                        mconfis :=iat(mtot_nota*.076,2)
                        micms_desc :=iat(mtot_nota*.12,2)
                        mobs1 := 'OBS.: INSC. SUFRAMA             (R$:'+ALLTRIM(TRANSFORM(mpis+mconfis+micms_desc,'999,999.99'))+') " DESCONTO REFERENTE'
                        mobs2 := '      ICMS DE ACORDO COM PARAGRAFO 4o. ART.690 DO DECRETO 14.876/91 "'
                        mobs3 := '      IPI ISENTO CONF.ART.59 INCISO III DO DECRETO 2637/98'
                        mobs4 := SPACE(55)
                ENDIF
        ENDIF
        i := 0
        m_obs := {}
        FOR i = 1 TO LEN(m_nota)
                mc_merc := {}
                cComm := "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_nota[i,21])
                sr_getconnection():exec(ccomm,,.t.,@mc_merc)
                IF LEN(mc_merc) > 0
                        IF ! EMPTY(mc_merc[1,66])
                                mpt := ASCAN(m_obs,mc_merc[1,66])
                                IF mpt > 0
                                        LOOP
                                ENDIF
                                AADD(m_obs,mc_merc[1,66])
                                mc_obs := {}
                                cComm := "SELECT * FROM sacobs WHERE cod_obs = "+sr_cdbvalue(mc_merc[1,66])
                                sr_getconnection():exec(ccomm,,.t.,@mc_obs)
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

        //opcao := op_simnao('N','Deseja descrever alguma OBSERVACAO na nota '+texto+':')
        //IF opcao = 'S'
                @ 03,1 GET mobs1 PICT '@!'
                @ 04,1 GET mobs2 PICT '@!'
                @ 05,1 GET mobs3 PICT '@!'
                @ 06,1 GET mobs4 PICT '@!'
                @ 07,1 GET mobs5 PICT '@!'
                @ 08,1 GET mobs6 PICT '@!'
                @ 08,1 GET mobs7 PICT '@!'
                @ 09,1 GET mobs8 PICT '@!'
                @ 10,1 GET mobs9 PICT '@!'
                @ 11,1 GET mobs10 PICT '@!'
                @ 12,1 GET mobs11 PICT '@!'
                @ 13,1 GET mobs12 PICT '@!'
                @ 14,1 GET mobs13 PICT '@!'
                @ 15,1 GET mobs14 PICT '@!'
                @ 16,1 GET mobs15 PICT '@!'
                @ 17,1 GET mobs16 PICT '@!'
                @ 18,1 GET mobs17 PICT '@!'
                @ 19,1 GET mobs18 PICT '@!'
                @ 20,1 GET mobs19 PICT '@!'
                @ 21,1 GET mobs20 PICT '@!'
                READ
                opcao := op_simnao('S','Confirma as observacoes:')
                IF opcao = 'N'
	                wvw_lclosewindow()
        	        RETURN NIL
                ENDIF
        //ENDIF
/*
        mcons_cid := {}
        cComm := "SELECT * FROM saccid WHERE cidade = "+sr_cdbvalue(RTRIM(m_set[1,134]))
        ccomm := ccomm +" AND uf = "+sr_cdbvalue(RTRIM(m_set[1,19]))
        sr_getconnection():exec(ccomm,,.t.,@mcons_cid)
        IF LEN(mcons_cid) = 0 .OR. EMPTY(mcons_cid[1,1])
                atencao('Nao e Possivel a emissao desta nota pois o codigo da cidade nao estar cadastrado !!!!')
                RETURN NIL
        ENDIF
*/
	aret:={}
        //sr_starttrace()
        lExit := .T.
	while lExit
                sr_begintransaction()
                try
                IF msai_ent = 'S'
                       sr_getconnection():exec( "select numero from  sacnota where sr_recno = 1 for update with lock",,.t.,@aret)
                       if len(aRet)  == 0
                       	        sr_getconnection():exec("insert into sacnota (numero,sr_deleted,sr_recno)   values (" + sr_cdbvalue(strzero(1,6) ) + ",' ',1)",,.f.)
                               	mdocumento = STRZERO(1,6)
        	       else
                                mdocumento = STRZERO(VAL(aret[1,1])+1,6)
                                mnum = strzero(VAL(aret[1,1])+1,6)
                       	        sr_getconnection():exec("update sacnota set numero = " + sr_cdbvalue(mnum) + " where sr_recno = 1 ",,.f.)
        	       endif
                ELSE
                       sr_getconnection():exec( "select numeroe from  sacnotae where sr_recno = 1 for update with lock",,.t.,@aret)
               	        if len(aRet)  == 0
                                sr_getconnection():exec("insert into sacnotae (numeroe,sr_deleted,sr_recno)   values (" + sr_cdbvalue(strzero(1,6) ) + ",' ',1)",,.f.)
	                       mdocumento = STRZERO(1,6)
                       else
                                mdocumento = STRZERO(VAL(aret[1,1])+1,6)
                               	mnum = strzero(VAL(aret[1,1])+1,6)
                                sr_getconnection():exec("update sacnotae set numeroe = " + sr_cdbvalue(mnum) + " where sr_recno = 1 ",,.f.)
                       endif
	       ENDIF
                sr_committransaction()
                lExit:=.F.
        	catch e
                tracelog(valtoprg())
                sr_COMMITtransaction()
	end
        sr_endtransaction()
        end
        mprg := ALLTRIM(STR(VAL(mdocumento)))
        atencao('Foi Gerada a Nota Fiscal No.: '+mdocumento)
        IF m_set[1,117] = 'S'
                IF mtp_vend = 'AP'
                        WHILE .T.
                                mnum_dup1 := mnum_dup2 := mnum_dup3 := ;
                                mnum_dup4 := mnum_dup5 := SPACE(8)
                                mvenci1 := mvenci2 := mvenci3 := ;
                                mvenci4 := mvenci5 := mvenci := CTOD('  /  /  ')
                                mvlr_dup := mvlr_dup1 := mvlr_dup2 := mvlr_dup3 := ;
                                mvlr_dup4 := mvlr_dup5 := 0
                                mnum_dup := STRZERO(mnum_ped,6)
                                @ 23,21 GET mcond_vezes PICT '@@R 9-99' VALID IF((VAL(SUBSTR(mcond_vezes,1,1))) + (VAL(SUBSTR(mcond_vezes,2,2))) > 7,.F.,.T.)
                                @ 23,37 GET mintev PICT '999' VALID IF(EMPTY(mintev),.F.,.T.)
                                @ 23,41 GET mintev1 PICT '999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 2 VALID IF(EMPTY(mintev1),.F.,.T.)
                                @ 23,45 GET mintev2 PICT '999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 3 VALID IF(EMPTY(mintev2),.F.,.T.)
                                @ 23,49 GET mintev3 PICT '999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 4 VALID IF(EMPTY(mintev3),.F.,.T.)
                                @ 23,53 GET mintev4 PICT '999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 5 VALID IF(EMPTY(mintev4),.F.,.T.)
                                @ 23,57 GET mintev5 PICT '999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) = 6 VALID IF(EMPTY(mintev5),.F.,.T.)
                                READ

                                IF EMPTY(mnum_ped) .OR. mnum_ped = 0 .OR. ver_serie() = '141235' .OR. ver_serie() = '141376'
                                        mnum_dup := mdocumento
                                ENDIF
                                IF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 1
                                        mnum_dup := mnum_dup+'-01/01'
                                        mvenci := mdata + mintev
                                        IF ver_serie() = '141225' .OR. ver_serie() = '141254'
                                                mvlr_dup := mtot_nota+mfrete+mencargo+mseguro+mtot_ipi+mvlr_icmsub+mdif_icms+micm_sub
                                        ELSE
                                                mvlr_dup := mtot_nota+mfrete+mencargo+mseguro+mtot_ipi+mvlr_icmsub+mdif_icms+micm_sub - mdesc_icm
                                        ENDIF
                                ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 2
                                        mnum_dup1 := mnum_dup+'-02/02'
                                        mnum_dup := mnum_dup+'-01/02'
                                        mvenci := mdata + mintev
                                        mvenci1 := mdata + mintev1
                                        IF ver_serie() = '141265'
						mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+ mtot_ipi + mfrete + micm_sub-mdesc_icm) /2)
        	                                mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms + mtot_ipi + mfrete+micm_sub-mdesc_icm) /2
					ELSE
						mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /2) + mtot_ipi + mfrete
        	                                mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /2
					ENDIF
                                        msobra := mvlr_dup
                                ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 3
                                        mnum_dup1 := mnum_dup+'-02/03'
                                        mnum_dup2 := mnum_dup+'-03/03'
                                        mnum_dup := mnum_dup+'-01/03'
                                        mvenci := mdata + mintev
                                        mvenci1 := mdata + mintev1
                                        mvenci2 := mdata + mintev2
                                        IF ver_serie() = '141265'
	                                        mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms + mtot_ipi + mfrete+micm_sub-mdesc_icm) /3)
        	                                mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms + mtot_ipi + mfrete+micm_sub-mdesc_icm) /3
                	                        mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms + mtot_ipi + mfrete+micm_sub-mdesc_icm) /3
                        		ELSE
	                                        mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /3) + mtot_ipi + mfrete
        	                                mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /3
                	                        mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /3
                        		ENDIF
			        ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 4
                                        mnum_dup1 := mnum_dup+'-02/04'
                                        mnum_dup2 := mnum_dup+'-03/04'
                                        mnum_dup3 := mnum_dup+'-04/04'
                                        mnum_dup := mnum_dup+'-01/04'
                                        mvenci := mdata + mintev
                                        mvenci1 := mdata + mintev1
                                        mvenci2 := mdata + mintev2
                                        mvenci3 := mdata + mintev3
                                        IF ver_serie() = '141265'
	                                        mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms + mtot_ipi + mfrete+micm_sub-mdesc_icm) /4)
        	                                mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms + mtot_ipi + mfrete+micm_sub-mdesc_icm) /4
                	                        mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms + mtot_ipi + mfrete+micm_sub-mdesc_icm) /4
                        	                mvlr_dup3 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms + mtot_ipi + mfrete+micm_sub-mdesc_icm) /4
					ELSE
	                                        mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /4) + mtot_ipi + mfrete
        	                                mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /4
                	                        mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /4
                        	                mvlr_dup3 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /4
					ENDIF
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
                                        IF ver_serie() = '141265'
	                                        mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms + mtot_ipi + mfrete+micm_sub-mdesc_icm) /5)
        	                                mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms + mtot_ipi + mfrete+micm_sub-mdesc_icm) /5
                	                        mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms + mtot_ipi + mfrete+micm_sub-mdesc_icm) /5
                        	                mvlr_dup3 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms + mtot_ipi + mfrete+micm_sub-mdesc_icm) /5
                                	        mvlr_dup4 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms + mtot_ipi + mfrete+micm_sub-mdesc_icm) /5
                                	ELSE
	                                        mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /5) + mtot_ipi + mfrete
        	                                mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /5
                	                        mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /5
                        	                mvlr_dup3 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /5
                                	        mvlr_dup4 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /5
                                	ENDIF
                                ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 6
                                        mnum_dup1 := mnum_dup+'-02/06'
                                        mnum_dup2 := mnum_dup+'-03/06'
                                        mnum_dup3 := mnum_dup+'-04/06'
                                        mnum_dup4 := mnum_dup+'-05/06'
                                        mnum_dup5 := mnum_dup+'-06/06'
                                        mnum_dup := mnum_dup+'-01/06'
                                        mvenci := mdata + mintev
                                        mvenci1 := mdata + mintev1
                                        mvenci2 := mdata + mintev2
                                        mvenci3 := mdata + mintev3
                                        mvenci4 := mdata + mintev4
                                        mvenci5 := mdata + mintev5
                                        IF ver_serie() = '141265'
	                                        mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms + mtot_ipi + mfrete+micm_sub-mdesc_icm) /6)
        	                                mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms + mtot_ipi + mfrete+micm_sub-mdesc_icm) /6
                	                        mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms + mtot_ipi + mfrete+micm_sub-mdesc_icm) /6
                        	                mvlr_dup3 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms + mtot_ipi + mfrete+micm_sub-mdesc_icm) /6
                                	        mvlr_dup4 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms + mtot_ipi + mfrete+micm_sub-mdesc_icm) /6
                                        	mvlr_dup5 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms + mtot_ipi + mfrete+micm_sub-mdesc_icm) /6
					ELSE
	                                        mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /6) + mtot_ipi + mfrete
        	                                mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /6
                	                        mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /6
                        	                mvlr_dup3 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /6
                                	        mvlr_dup4 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /6
                                        	mvlr_dup5 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /6
					ENDIF
                                ENDIF
                                msobra := 0
                                msobra := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub+mtot_ipi-mdesc_icm)  - (iat(mvlr_dup,2) + iat(mvlr_dup1,2) +iat(mvlr_dup2,2) +iat(mvlr_dup3,2) +iat(mvlr_dup4,2) + iat(mvlr_dup5,2))
                                mvlr_dup := mvlr_dup + msobra

                                @ 24,20 GET mnum_dup PICT '@!'
                                @ 24,40 GET mvenci
                                @ 24,58 GET mvlr_dup PICT '999,999.99'
                                @ 25,20 GET mnum_dup1 PICT '@!'
                                @ 25,40 GET mvenci1
                                @ 25,58 GET mvlr_dup1 PICT '999,999.99'
                                @ 26,20 GET mnum_dup2 PICT '@!'
                                @ 26,40 GET mvenci2
                                @ 26,58 GET mvlr_dup2 PICT '999,999.99'
                                @ 27,20 GET mnum_dup3 PICT '@!'
                                @ 27,40 GET mvenci3
                                @ 27,58 GET mvlr_dup3 PICT '999,999.99'
                                @ 28,20 GET mnum_dup4 PICT '@!'
                                @ 28,40 GET mvenci4
                                @ 28,58 GET mvlr_dup4 PICT '999,999.99'
                                @ 29,20 GET mnum_dup5 PICT '@!'
                                @ 29,40 GET mvenci5
                                @ 29,58 GET mvlr_dup5 PICT '999,999.99'
                                READ
                                mopcao := op_simnao('S','Confirma as Duplicatas:')
                                IF mopcao = 'N'
                                        mnum_dup1 := mnum_dup2 := mnum_dup3 := ;
                                        mnum_dup4 := mnum_dup5 := SPACE(6)
                                        mvenci1 := mvenci2 := ;
                                        mvenci3 := mvenci4 := ;
                                        mvenci5 := CTOD('  /  /  ')
                                        mvlr_dup1 := mvlr_dup2 := mvlr_dup3 := ;
                                        mvlr_dup4 := mvlr_dup5 := 0
                                        LOOP
                                ELSE
                                        //mtot_nota := mtot_ipi := 0
                                        EXIT
                                ENDIF
                        ENDDO
                ENDIF
        ENDIF
        wvw_lclosewindow()
        i := mbase_aux := mpr_fat := 0
        FOR i = 1 TO LEN(m_nota)
                IF mcod_fat = '02' .OR. mcod_fat = '  '
	                mpr_fat := m_nota[i,12]
	       	ELSE
	                mpr_fat := m_nota[i,7]
	       	ENDIF

                f++
                aret:={}
                cComm  := "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_nota[i,21])
                sr_getconnection():exec(ccomm,,.t.,@aret)
                IF msai_ent = 'S'
                        ccomm :="UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(aret[1,55] - m_nota[i,5])
                        ccomm := ccomm +",icm = "+sr_cdbvalue(aret[1,60] - iat((m_nota[i,20]/100) * (mpr_fat * m_nota[i,5]),2))
                        IF EMPTY(cli->insc)
                                IF mcod_fat = '02' .OR. mcod_fat = '  '
                                        mbase_aux := iat((m_nota[i,12] * m_nota[i,5])+((m_nota[i,12] * m_nota[i,5]) * (m_nota[i,24]/100)),2)
                                ELSE
                                        mbase_aux := iat((m_nota[i,7] * m_nota[i,5])+((m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)),2)
                                ENDIF
                        ELSE
                                IF mcod_fat = '02' .OR. mcod_fat = '  '
                                        mbase_aux := iat(m_nota[i,12] * m_nota[i,5],2)
                                ELSE
                                        mbase_aux := iat(m_nota[i,7] * m_nota[i,5],2)
                                ENDIF
                        ENDIF
                ELSEIF msai_ent = 'E'
                        ccomm :="UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(aret[1,55] + m_nota[i,5])
                        ccomm := ccomm +",saldo_mer = "+sr_cdbvalue(aret[1,56] + m_nota[i,5])
                        ccomm := ccomm +",icm = "+sr_cdbvalue(aret[1,60] + iat((m_nota[i,20]/100) * (mpr_fat * m_nota[i,5]),2))
                        IF EMPTY(cli->insc)
                                IF mcod_fat = '02' .OR. mcod_fat = '  '
                                        mbase_aux := iat((m_nota[i,12] * m_nota[i,5])+((m_nota[i,12] * m_nota[i,5]) * (m_nota[i,24]/100)),2)
                                ELSE
                                        mbase_aux := iat((m_nota[i,7] * m_nota[i,5])+((m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)),2)
                                ENDIF
                        ELSE
                                IF mcod_fat = '02' .OR. mcod_fat = '  '
                                        mbase_aux := iat(m_nota[i,12] * m_nota[i,5],2)
                                ELSE
                                        mbase_aux := iat(m_nota[i,7] * m_nota[i,5],2)
                                ENDIF
                        ENDIF

                ENDIF
                ccomm := ccomm +",data_atu = "+sr_cdbvalue(mdata_sis)
                ccomm := ccomm + " WHERE cod_merc = "+sr_cdbvalue(m_nota[i,21])
                sr_getconnection():exec(ccomm,,.f.)
                sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                        'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                        'processo,ent_sai,SR_DELETED )'+;
                                        ' VALUES ('+;
                                        sr_cdbvalue(DATE())+','+; //1
                                        sr_cdbvalue(mdata_sis)+','+; //2
                                        sr_cdbvalue(TIME())+','+; //3
                                        sr_cdbvalue(m_nota[i,21])+','+; //4
                                        sr_cdbvalue(m_nota[i,5])+','+; //5
                                        sr_cdbvalue(aret[1,56])+','+; //6
                                        sr_cdbvalue(aret[1,56] + m_nota[i,5])+','+; //7
                                        sr_cdbvalue(cod_operado)+','+; //8
                                        sr_cdbvalue('SACNFMAF')+','+; //9
                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                        sr_cdbvalue('EMISSAO NOTA ENTRADA : '+mdocumento)+','+; //11
                                        sr_cdbvalue('E')+','+; //11
                                        sr_cdbvalue(' ')+')',,.f.)


                *************
                SELE('movnt')
                *************
                IF ADIREG()
                        movnt->empresa := mcodempresa
                        movnt-> modelo  := mmodelo
                        movnt-> num_ped := STRZERO(mnum_ped,6)
                        movnt-> tipo_nota := mtipo_nota
                        movnt-> documento := 'NF'+mdocumento
                        movnt-> serie     := mserie_not
                        movnt-> codigo := m_nota[i,21]
                        movnt-> produto := m_nota[i,2]
                        movnt-> cod_fab := m_nota[i,3]
                        movnt-> fabrica := m_nota[i,4]
                        movnt-> unidade := m_nota[i,8]
                        movnt-> data_s_e := mdata
                        IF msai_ent = 'S'
                                movnt-> ent_sai := 'S'
                        ELSEIF msai_ent = 'E'
                                movnt-> ent_sai := 'E'
                        ENDIF
                        movnt-> quantd := m_nota[i,5]
                        movnt-> pr_venda := m_nota[i,6]
                        movnt-> vl_vend := m_nota[i,7]          // - (m_nota[i,7]*(m_nota[i,11]/100))
                        movnt-> cod_vend := STRZERO(mcod_vend,3)
                        movnt-> cod_cli := mcod_cli
                        movnt-> cliente := mcliente
                        movnt-> uf_cli := muf_cli
                        movnt-> cgc_cli := mcons_cli[1,32]
                        movnt-> cpf_cli := mcons_cli[1,34]
                        movnt-> insc_cli := mcons_cli[1,33]
                        movnt-> icm := m_nota[i,20]
                        movnt-> ipi_aliq := m_nota[i,24]
                        IF mcod_fat = '02' .OR. mcod_fat = '  '
                                movnt-> ipi := ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]) * (m_nota[i,24]/100)
                                movnt-> vl_fatura := m_nota[i,12]
                                IF mtipo_nota = 'N'
                                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * mbase_aux,2)
                                        mtot_icmf := mtot_icmf + iat(m_nota[i,13] * ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]),2)
                                        //mtot_ipi  := mtot_ipi + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]) * (m_nota[i,24]/100)

                                        movnt-> desc1    := ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*.12
                                        IF  m_nota[i,20] > 0
                                                mbase_icm = mbase_icm + mbase_aux
	                                        IF m_nota[i,25] = 'S'
        	                                        mbase_icm = mbase_icm + iat((((mpr_fat * m_nota[i,5])*m_nota[i,34])),2)
                	                                mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (((mpr_fat * m_nota[i,5])*m_nota[i,34])),2)

                        	                        movnt-> vlr_icm := iat((m_nota[i,20]/100) * (((mpr_fat * m_nota[i,5])*m_nota[i,34])),2)
                                	                movnt-> base_icm := iat((((mpr_fat * m_nota[i,5])*m_nota[i,34])),2)
                                        	ELSE
	                                                mbase_icm = mbase_icm + iat((mpr_fat * m_nota[i,5]),2)
        	                                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (mpr_fat*m_nota[i,5]),2)

                	                                movnt-> vlr_icm := iat((m_nota[i,20]/100) * (mpr_fat*m_nota[i,5]),2)
                        	                        movnt-> base_icm := iat((mpr_fat * m_nota[i,5]),2)
                                	        ENDIF
                                        ELSE
	                                        movnt-> vlr_icm  := iat((m_nota[i,20]/100) * mbase_aux,2)
        	                        	movnt-> base_icm := iat(mbase_aux,2)
					ENDIF
                                ENDIF
                                IF ! EMPTY(m_nota[i,22])                                                    // 2.35
                                        mbase_icmsub := mbase_icmsub + (((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                        mvlr_icmsub := mvlr_icmsub + (((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * ((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])

                                        movnt->base_icmsu := (((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                        movnt->vlr_icmsub := (((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * ((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])
                                ENDIF
                        ELSE
                                movnt-> ipi := (m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)
                                movnt-> vl_fatura := m_nota[i,7]
                                IF mtipo_nota = 'N'
                                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * mbase_aux,2)
                                        mtot_icmf := mtot_icmf + iat(m_nota[i,13] * (m_nota[i,7] * m_nota[i,5]),2)
                                        IF m_nota[i,20] > 0
                                                mbase_icm = mbase_icm + mbase_aux
                                        ENDIF

                                        movnt-> vlr_icm := iat((m_nota[i,20]/100) * mbase_aux,2)
                                	movnt-> base_icm := iat(mbase_aux,2)
                                        //mtot_ipi  := mtot_ipi + (m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)
                                        movnt-> desc1 := (m_nota[i,7] * m_nota[i,5])*.12
                                ENDIF
                                IF ! EMPTY(m_nota[i,22])                                                    // 2.35
                                        mbase_icmsub := mbase_icmsub + ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                        mvlr_icmsub := mvlr_icmsub + ((m_nota[i,7]  * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * ((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])

                                        movnt->base_icmsu := ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                        movnt->vlr_icmsub := ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * ((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])
                                ENDIF
                        ENDIF
                        movnt-> icm_f := m_nota[i,13]
                        movnt-> icm_sub := m_nota[i,22]
                        movnt-> pr_unit := m_nota[i,12]
                        movnt-> cust_mer := m_nota[i,33]
                        movnt-> frete := mfrete
                        movnt-> encargo_f := mencargo
                        movnt-> disp_asse := mseguro
                        movnt-> tipo := '03'
                        movnt-> isento := m_nota[i,14]
                        movnt-> sittrib:= m_nota[i,35]
                        movnt-> desc1 := m_nota[i,11]
                        movnt-> peso := m_nota[i,9]
                        movnt-> peso_liq := m_nota[i,18]
                        movnt-> alimento := m_nota[i,10]
                        movnt-> bebida := m_nota[i,17]
                        movnt-> tp_venda := mtp_vend
                        movnt-> cond_vezes := mcond_vezes
                        movnt-> cond_intev := STRZERO(mintev,3)
                        movnt-> cod_nat := mcod_nat
                        movnt-> conjunta := mdocumento
                        movnt-> obs1 := mobs1
                        movnt-> obs2 := mobs2
                        movnt-> obs3 := mobs3
                        movnt-> obs4 := mobs4
                        movnt-> obs5 := mobs5
                        movnt-> obs6 := mobs6
                        movnt-> cod_nota := mcod_nota
                        DBUNLOCK()
                ENDIF
        NEXT
        DBCOMMITALL()
        sr_getconnection():exec('COMMIT',,.f.)
        mdoc_aux := mdocumento
        mbase_icm := mbase_icm + mfrete
        mtot_icm := mtot_icm + (mfrete * (m_set[1,20]/100))
        mtot_icm := iat(mtot_icm,2)
        IF mcredito = 'S'
                ****************
                SELE('icm')
                GO TOP
                ****************
                IF BLOQREG()
                        icm-> documento := mdocumento
                        icm-> data := mdata
                        IF msai_ent = 'S'
                                icm-> deb_cred := icm->deb_cred - mtot_icm
                        ELSE
                                icm-> deb_cred := icm->deb_cred + mtot_icm
                        ENDIF
                        DBUNLOCK()
                ENDIF
                DBCOMMITALL()
        ENDIF
        *************
        SELE('totnt')
        *************
        IF ADIREG()
                totnt->empresa  := mcodempresa
                totnt-> modelo  := mmodelo
                totnt-> cod_nota := mcod_nota
                totnt-> tipo_nota := mtipo_nota
                totnt-> num_ped := STRZERO(mnum_ped,6)
                totnt-> documento := 'NF'+mdocumento
                totnt-> serie     := mserie_not
                //totnt-> auxiliar := maux
                totnt-> emissao := mdata
                IF msai_ent = 'S'
                        totnt-> ent_sai := 'S'
                ELSEIF msai_ent = 'E'
                        totnt-> ent_sai := 'E'
                ENDIF
                totnt-> cod_cli := mcod_cli
                totnt-> cliente := mcliente
                totnt-> uf_cli := muf_cli
                totnt-> cid_cli := mcid_cli
                totnt-> insc_cli := mcons_cli[1,33]
                totnt-> cgc_cli := mcons_cli[1,32]
                totnt-> cpf_cli := mcons_cli[1,34]
                totnt-> cod_vend := STRZERO(mcod_vend,3)
                totnt-> vl_base := mbase_icm
                totnt-> vl_icm  := mtot_icm
                totnt-> vl_icmsu:= mtot_icmf
                IF mtipo_nota = 'C'
                        totnt-> vl_base     := cbase_icm
                        totnt-> vl_icm      := ctot_icm
                        totnt-> vl_icmsu    := ctot_icmf
                        totnt-> vl_nota     := ctot_nota
                        totnt-> vlr_icmsub  := ctot_icmf
                        totnt-> base_icmsu  := cbase_icmf
                        totnt-> ipi         := ctot_ipi
                        totnt-> peso        := ctot_peso
                        totnt-> peso_liq    := ctot_liq
                        totnt-> vl_prod     := mtot_prod
                        totnt-> vl_nota     := mtot_nota
                ELSE
                        totnt-> vl_base := mbase_icm
                        totnt-> vl_icm  := mtot_icm
                        totnt-> vl_icmsu:= mtot_icmf
                        totnt-> vlr_icmsub := mvlr_icmsub
                        totnt-> base_icmsu := mbase_icmsub
                        totnt-> ipi     := mtot_ipi
	                totnt-> peso := mtot_peso
        	        totnt-> peso_liq := mtot_liq
	                IF mtipo_nota = 'N'
        	                totnt-> vl_prod := mtot_nota
                                totnt-> vl_nota := (mtot_nota + mtot_ipi + mvlr_icmsub)       //- (mpis+mconfis+micms_desc)
                	ELSE
	                        totnt-> vl_prod := mtot_prod
        	                totnt-> vl_nota := (mtot_nota + mtot_ipi + mvlr_icmsub)       //- (mpis+mconfis+micms_desc)
                        ENDIF
                ENDIF
                totnt-> frete := mfrete
                totnt-> encargo_f := mencargo
                totnt-> disp_asse := mseguro
                totnt-> cod_nat := mcod_nat
                totnt-> obs1 := mobs1
                totnt-> obs2 := mobs2
                totnt-> obs3 := mobs3
                totnt-> obs4 := mobs4
                totnt-> obs5 := mobs5
                totnt-> obs6 := mobs6
                DBUNLOCK()
        ENDIF
        DBCOMMITALL()

        SET DEVI TO PRINT;SET PRINT ON
        SET PRINT TO ('C:\ACBrNFeMonitor\ENTNFE.TXT')
        DEVPOS(PROW(),0);DEVOUT('NFE.CriarNFe("[Identificacao]')
        DEVPOS(PROW()+1,0);DEVOUT('NaturezaOperacao='+ALLTRIM(mnatureza))
        DEVPOS(PROW()+1,0);DEVOUT('Modelo='+ALLTRIM(mmodelo))
        DEVPOS(PROW()+1,0);DEVOUT('Serie='+ALLTRIM(STRZERO(VAL(mserie_not),2)))
        DEVPOS(PROW()+1,0);DEVOUT('Codigo='+ALLTRIM(mdocumento))
        DEVPOS(PROW()+1,0);DEVOUT('Numero='+ALLTRIM(mdocumento))
        DEVPOS(PROW()+1,0);DEVOUT('Serie='+ALLTRIM(STR(VAL(mserie_not))))
        DEVPOS(PROW()+1,0);DEVOUT('Emissao='+DTOC(mdata))
        DEVPOS(PROW()+1,0);DEVOUT('Saida='+DTOC(mdata))
        IF msai_ent = 'S'
                DEVPOS(PROW()+1,0);DEVOUT('Tipo=1')
        ELSE
                DEVPOS(PROW()+1,0);DEVOUT('Tipo=0')
        ENDIF
        IF mtp_vend = 'AP'
                DEVPOS(PROW()+1,0);DEVOUT('FormaPag=1')
        ELSE
                DEVPOS(PROW()+1,0);DEVOUT('FormaPag=0')
        ENDIF
        DEVPOS(PROW()+1,0);DEVOUT('[Emitente]')
        DEVPOS(PROW()+1,0);DEVOUT('CNPJ='+SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2))
        DEVPOS(PROW()+1,0);DEVOUT('IE='+ALLTRIM(m_set[1,128]))
        DEVPOS(PROW()+1,0);DEVOUT('Razao='+ALLTRIM(m_set[1,129]))
        DEVPOS(PROW()+1,0);DEVOUT('Fantasia='+ALLTRIM(m_set[1,130]))
        DEVPOS(PROW()+1,0);DEVOUT('Fone='+ALLTRIM(m_set[1,136]))
        DEVPOS(PROW()+1,0);DEVOUT('CEP='+ALLTRIM(m_set[1,135]))
        DEVPOS(PROW()+1,0);DEVOUT('Logradouro='+ALLTRIM(m_set[1,132]))
        DEVPOS(PROW()+1,0);DEVOUT('Numero='+ALLTRIM(m_set[1,160]))
        DEVPOS(PROW()+1,0);DEVOUT('Complemento='+ALLTRIM(m_set[1,161]))
        DEVPOS(PROW()+1,0);DEVOUT('Bairro='+ALLTRIM(m_set[1,133]))
        DEVPOS(PROW()+1,0);DEVOUT('CidadeCod='+ALLTRIM(mcons_cid[1,1]))
        DEVPOS(PROW()+1,0);DEVOUT('Cidade='+ALLTRIM(m_set[1,134]))
        DEVPOS(PROW()+1,0);DEVOUT('UF='+ALLTRIM(m_set[1,19]))
        DEVPOS(PROW()+1,0);DEVOUT('[Destinatario]')
        IF ! EMPTY(mcons_cli[1,32])
                DEVPOS(PROW()+1,0);DEVOUT('CNPJ='+ALLTRIM(mcons_cli[1,32]))
        ELSE
                DEVPOS(PROW()+1,0);DEVOUT('CNPJ='+ALLTRIM(mcons_cli[1,34]))
        ENDIF
        DEVPOS(PROW()+1,0);DEVOUT('IE='+ALLTRIM(mcons_cli[1,33]))
        //DEVPOS(PROW()+1,0);DEVOUT('ISUF=   ')
        DEVPOS(PROW()+1,0);DEVOUT('NomeRazao='+mcons_cli[1,2]+' - '+ALLTRIM(mcons_cli[1,3]))
        DEVPOS(PROW()+1,0);DEVOUT('Fone='+ALLTRIM(mcons_cli[1,29]))
        DEVPOS(PROW()+1,0);DEVOUT('CEP='+ALLTRIM(mcons_cli[1,26]))
        DEVPOS(PROW()+1,0);DEVOUT('Logradouro='+ALLTRIM(mcons_cli[1,21]))
        DEVPOS(PROW()+1,0);DEVOUT('Numero='+RTRIM(mcons_cli[1,136]))
        DEVPOS(PROW()+1,0);DEVOUT('Complemento='+ALLTRIM(mcons_cli[1,137]))
        DEVPOS(PROW()+1,0);DEVOUT('Bairro='+ALLTRIM(mcons_cli[1,22]))
        DEVPOS(PROW()+1,0);DEVOUT('CidadeCod='+ALLTRIM(mcons_cid[1,1]))
        DEVPOS(PROW()+1,0);DEVOUT('Cidade='+ALLTRIM(mcons_cli[1,24]))
        DEVPOS(PROW()+1,0);DEVOUT('UF='+mcons_cli[1,25])
        //mtot_liq := mtot_peso := 
	mbase_icm := i := 0
        //mtot_liq := mtot_peso := i := mbase_icm := 0
        FOR i = 1 TO LEN(m_nota)
                mcons_prod := {}
                cComm := "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(ALLTRIM(m_nota[i,21]))
                sr_getconnection():exec(ccomm,,.t.,@mcons_prod)
                IF LEN(mcons_prod) = 0
                        LOOP
                ENDIF
                DEVPOS(PROW()+1,0);DEVOUT('[Produto'+STRZERO(i,3)+']')
                DEVPOS(PROW()+1,0);DEVOUT('CFOP='+STRTRAN(mcod_nat,'.',''))
                DEVPOS(PROW()+1,0);DEVOUT('Codigo='+ALLTRIM(m_nota[i,21]))
                IF ! EMPTY(mcons_prod[1,99])
                        DEVPOS(PROW()+1,0);DEVOUT('Descricao='+ALLTRIM(mcons_prod[1,99]))
                ELSE
                        DEVPOS(PROW()+1,0);DEVOUT('Descricao='+ALLTRIM(m_nota[i,2]))
                ENDIF
                DEVPOS(PROW()+1,0);DEVOUT('NCM='+ALLTRIM(mcons_prod[1,70]))
                DEVPOS(PROW()+1,0);DEVOUT('Unidade='+ALLTRIM(m_nota[i,8]))
                DEVPOS(PROW()+1,0);DEVOUT('Quantidade='+ALLTRIM(TRANSFORM(m_nota[i,5],'999999.99')))
                DEVPOS(PROW()+1,0);DEVOUT('ValorUnitario='+ALLTRIM(TRANSFORM(m_nota[i,7],'999999.99')))
                DEVPOS(PROW()+1,0);DEVOUT('ValorTotal='+ALLTRIM(TRANSFORM(m_nota[i,7]*m_nota[i,5],'999999.99')))
                DEVPOS(PROW()+1,0);DEVOUT('[ICMS'+STRZERO(i,3)+']')
                DEVPOS(PROW()+1,0);DEVOUT('CST='+STRZERO(VAL(m_nota[i,35]),3))
                IF m_nota[i,25] = 'S' //DESCONTO DE ICMS
                        IF ! EMPTY(m_nota[i,20])
                                IF EMPTY(cli->insc)
	                                IF mcod_fat = '02' .OR. mcod_fat = '  '
			                        mbase_icm := mbase_icm + iat(((m_nota[i,12] * m_nota[i,5])*m_nota[i,34])+((m_nota[i,12] * m_nota[i,5]) * (m_nota[i,24]/100)),2)
                	                ELSE
                        	                mbase_icm := mbase_icm + iat(((m_nota[i,7] * m_nota[i,5])*m_nota[i,34])+((m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)),2)
                                	ENDIF
                                ELSE
                                        mbase_icm = mbase_icm + ((m_nota[i,7] * m_nota[i,5])*m_nota[i,34])
                                        //mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (((m_nota[i,7] * m_nota[i,5])*m_nota[i,34])),2)
                                ENDIF
                        ENDIF
                        IF m_nota[i,20] > 0
                                DEVPOS(PROW()+1,0);DEVOUT('ValorBase='+ALLTRIM(TRANSFORM(iat(((m_nota[i,7] * m_nota[i,5])*m_nota[i,34]),2),'999999.99')))
                        ELSE
                                DEVPOS(PROW()+1,0);DEVOUT('ValorBase='+ALLTRIM(TRANSFORM(0,'999999.99')))
                        ENDIF
                        DEVPOS(PROW()+1,0);DEVOUT('Aliquota='+ALLTRIM(TRANSFORM(m_nota[i,20],'999')))
                        DEVPOS(PROW()+1,0);DEVOUT('Valor='+ALLTRIM(TRANSFORM(iat((m_nota[i,20]/100) * (((m_nota[i,7] * m_nota[i,5])*m_nota[i,34])),2),'999999.99')))
                        DEVPOS(PROW()+1,0);DEVOUT('PercentualReducao='+ALLTRIM(TRANSFORM(m_nota[i,34],'999999.99')))
                ELSE
                        IF m_nota[i,20] > 0
                                DEVPOS(PROW()+1,0);DEVOUT('ValorBase='+ALLTRIM(TRANSFORM(iat((m_nota[i,7] * m_nota[i,5]),2),'999999.99')))
                        ELSE
                                DEVPOS(PROW()+1,0);DEVOUT('ValorBase='+ALLTRIM(TRANSFORM(0,'999999.99')))
                        ENDIF
                        DEVPOS(PROW()+1,0);DEVOUT('Aliquota='+ALLTRIM(TRANSFORM(m_nota[i,20],'999')))
                        DEVPOS(PROW()+1,0);DEVOUT('Valor='+ALLTRIM(TRANSFORM(iat((m_nota[i,20]/100) * (m_nota[i,7]*m_nota[i,5]),2),'999999.99')))
                        IF ! EMPTY(m_nota[i,20])
                                IF EMPTY(cli->insc)
	                                IF mcod_fat = '02' .OR. mcod_fat = '  '
        	                                mbase_icm := mbase_icm + iat((m_nota[i,12] * m_nota[i,5])+((m_nota[i,12] * m_nota[i,5]) * (m_nota[i,24]/100)),2)
                	                        //mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (m_nota[i,12] * m_nota[i,5])+((m_nota[i,12] * m_nota[i,5]) * (m_nota[i,24]/100)),2)
                        	        ELSE
                                	        mbase_icm := mbase_icm + iat((m_nota[i,7] * m_nota[i,5])+((m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)),2)
                                         //mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5])+((m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)),2)
	                                ENDIF
                                ELSE
                                        mbase_icm = mbase_icm + (m_nota[i,7] * m_nota[i,5])
                                        //mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (m_nota[i,7]*m_nota[i,5]),2)
                                ENDIF
                                //mbase_icm = mbase_icm + (m_nota[i,7] * m_nota[i,5])
                        ENDIF
                        //mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (m_nota[i,7]*m_nota[i,5]),2)
                ENDIF
                IF ! EMPTY(m_nota[i,24])
                        DEVPOS(PROW()+1,0);DEVOUT('[IPI'+STRZERO(i,3)+']')
                        DEVPOS(PROW()+1,0);DEVOUT('CST='+STRZERO(VAL(m_nota[i,35]),3))
                        DEVPOS(PROW()+1,0);DEVOUT('ValorBase='+ALLTRIM(TRANSFORM(iat((m_nota[i,7] * m_nota[i,5]),2),'999999.99')))
                        DEVPOS(PROW()+1,0);DEVOUT('Aliquota='+ALLTRIM(TRANSFORM(m_nota[i,24],'999999.99')))
                        DEVPOS(PROW()+1,0);DEVOUT('Valor='+ALLTRIM(TRANSFORM((m_nota[i,7]*m_nota[i,5])*(m_nota[i,24]/100),'999999.99')))
                ENDIF
        NEXT
        IF mtipo_nota = 'N'
                mtot_nota := mtot_nota  - (mpis+mconfis+micms_desc)
        ENDIF
        DEVPOS(PROW()+1,0);DEVOUT('[Total]')
        IF mtipo_nota = 'C'
                DEVPOS(PROW()+1,0);DEVOUT('BaseICMS='+ALLTRIM(TRANSFORM(cbase_icm,'999999.99')))
                DEVPOS(PROW()+1,0);DEVOUT('ValorICMS='+ALLTRIM(TRANSFORM(ctot_icm,'999999.99')))
                DEVPOS(PROW()+1,0);DEVOUT('ValorProduto='+ALLTRIM(TRANSFORM(ctot_prod,'999999.99')))
                DEVPOS(PROW()+1,0);DEVOUT('BaseICMSSubstituicao='+ALLTRIM(TRANSFORM(cbase_icmf,'999999.99')))
                DEVPOS(PROW()+1,0);DEVOUT('ValorICMSSubstituicao='+ALLTRIM(TRANSFORM(ctot_icmf,'999999.99')))
                DEVPOS(PROW()+1,0);DEVOUT('ValorFrete='+ALLTRIM(TRANSFORM(mfrete,'999999.99')))
                DEVPOS(PROW()+1,0);DEVOUT('ValorSeguro='+ALLTRIM(TRANSFORM(mseguro,'999999.99')))
                DEVPOS(PROW()+1,0);DEVOUT('ValorIPI='+ALLTRIM(TRANSFORM(ctot_ipi,'999999.99')))
                DEVPOS(PROW()+1,0);DEVOUT('ValorOutrasDespesas='+ALLTRIM(TRANSFORM(mencargo,'999999.99')))
                DEVPOS(PROW()+1,0);DEVOUT('ValorNota='+ALLTRIM(TRANSFORM(ctot_nota,'999999.99')))
        ELSE
                DEVPOS(PROW()+1,0);DEVOUT('BaseICMS='+ALLTRIM(TRANSFORM(mbase_icm,'999999.99')))
                DEVPOS(PROW()+1,0);DEVOUT('ValorICMS='+ALLTRIM(TRANSFORM(mtot_icm,'999999.99')))
                DEVPOS(PROW()+1,0);DEVOUT('ValorProduto='+ALLTRIM(TRANSFORM(mtot_nota,'999999.99')))
                DEVPOS(PROW()+1,0);DEVOUT('BaseICMSSubstituicao='+ALLTRIM(TRANSFORM(mbase_icmsub,'999999.99')))
                DEVPOS(PROW()+1,0);DEVOUT('ValorICMSSubstituicao='+ALLTRIM(TRANSFORM(mvlr_icmsub,'999999.99')))
                DEVPOS(PROW()+1,0);DEVOUT('ValorFrete='+ALLTRIM(TRANSFORM(mfrete,'999999.99')))
                DEVPOS(PROW()+1,0);DEVOUT('ValorSeguro='+ALLTRIM(TRANSFORM(mseguro,'999999.99')))
                DEVPOS(PROW()+1,0);DEVOUT('ValorIPI='+ALLTRIM(TRANSFORM(mtot_ipi,'999999.99')))
                DEVPOS(PROW()+1,0);DEVOUT('ValorOutrasDespesas='+ALLTRIM(TRANSFORM(mencargo,'999999.99')))
                DEVPOS(PROW()+1,0);DEVOUT('ValorNota='+ALLTRIM(TRANSFORM(mtot_nota + mtot_icmf + mfrete + mseguro + mencargo + mtot_ipi + mvlr_icmsub,'999999.99')))
        ENDIF
        mcons_cid := {}
        cComm := "SELECT * FROM saccid WHERE (cidade = "+sr_cdbvalue(RTRIM(mcons_cli[1,24]))+" OR cidade IS NULL) AND uf = "+sr_cdbvalue(RTRIM(mcons_cli[1,25]))
        sr_getconnection():exec(ccomm,,.t.,@mcons_cid)
        IF LEN(mcons_cid) > 0 .AND. ! EMPTY(mcons_cid[1,1])
                DEVPOS(PROW()+1,0);DEVOUT('[Transportador]')
                DEVPOS(PROW()+1,0);DEVOUT('FretePorConta='+ALLTRIM(mfrete_trans))
                DEVPOS(PROW()+1,0);DEVOUT('CnpjCpf='+ALLTRIM(mcgc_trans))
                DEVPOS(PROW()+1,0);DEVOUT('NomeRazao='+ALLTRIM(mnome_trans))
                DEVPOS(PROW()+1,0);DEVOUT('IE='+ALLTRIM(minsc_trans))
                DEVPOS(PROW()+1,0);DEVOUT('Endereco='+ALLTRIM(mend_trans))
                DEVPOS(PROW()+1,0);DEVOUT('Cidade='+ALLTRIM(mmun_trans))
                DEVPOS(PROW()+1,0);DEVOUT('UF='+ALLTRIM(muf_trans))
                DEVPOS(PROW()+1,0);DEVOUT('CidadeCod=')
                DEVPOS(PROW()+1,0);DEVOUT('Placa='+ALLTRIM(mplaca_trans))
                DEVPOS(PROW()+1,0);DEVOUT('UFPlaca='+ALLTRIM(mpluf_trans))
        ENDIF
        DEVPOS(PROW()+1,0);DEVOUT('[Volume001]')
        DEVPOS(PROW()+1,0);DEVOUT('Quantidade='+ALLTRIM(TRANSFORM(mtot_quantd,'999999')))
        DEVPOS(PROW()+1,0);DEVOUT('Especie='+ALLTRIM(mesp_trans))
        DEVPOS(PROW()+1,0);DEVOUT('Marca='+ALLTRIM(mmarca_trans))
        DEVPOS(PROW()+1,0);DEVOUT('Numeracao='+ALLTRIM(mnum_trans))
        DEVPOS(PROW()+1,0);DEVOUT('PesoLiquido='+ALLTRIM(TRANSFORM(mtot_liq,'999999.99')))
        DEVPOS(PROW()+1,0);DEVOUT('PesoBruto='+ALLTRIM(TRANSFORM(mtot_peso,'999999.99')))
        IF ! EMPTY(mnum_dup) .AND. ! EMPTY(mvenci)
                DEVPOS(PROW()+1,0);DEVOUT('[Duplicata001]')
                DEVPOS(PROW()+1,0);DEVOUT('Numero='+ALLTRIM(mnum_dup))
                DEVPOS(PROW()+1,0);DEVOUT('DataVencimento='+DTOC(mvenci))
                DEVPOS(PROW()+1,0);DEVOUT('Valor='+ALLTRIM(TRANSFORM(mvlr_dup,'999999.99')))
        ENDIF
        IF ! EMPTY(mnum_dup1) .AND. ! EMPTY(mvenci1)
                DEVPOS(PROW()+1,0);DEVOUT('[Duplicata002]')
                DEVPOS(PROW()+1,0);DEVOUT('Numero='+ALLTRIM(mnum_dup1))
                DEVPOS(PROW()+1,0);DEVOUT('DataVencimento='+DTOC(mvenci1))
                DEVPOS(PROW()+1,0);DEVOUT('Valor='+ALLTRIM(TRANSFORM(mvlr_dup1,'999999.99')))
        ENDIF
        IF ! EMPTY(mnum_dup2) .AND. ! EMPTY(mvenci2)
                DEVPOS(PROW()+1,0);DEVOUT('[Duplicata003]')
                DEVPOS(PROW()+1,0);DEVOUT('Numero='+ALLTRIM(mnum_dup2))
                DEVPOS(PROW()+1,0);DEVOUT('DataVencimento='+DTOC(mvenci2))
                DEVPOS(PROW()+1,0);DEVOUT('Valor='+ALLTRIM(TRANSFORM(mvlr_dup2,'999999.99')))
        ENDIF
        IF ! EMPTY(mnum_dup3) .AND. ! EMPTY(mvenci3)
                DEVPOS(PROW()+1,0);DEVOUT('[Duplicata004]')
                DEVPOS(PROW()+1,0);DEVOUT('Numero='+ALLTRIM(mnum_dup3))
                DEVPOS(PROW()+1,0);DEVOUT('DataVencimento='+DTOC(mvenci3))
                DEVPOS(PROW()+1,0);DEVOUT('Valor='+ALLTRIM(TRANSFORM(mvlr_dup3,'999999.99')))
        ENDIF
        IF ! EMPTY(mnum_dup4) .AND. ! EMPTY(mvenci4)
                DEVPOS(PROW()+1,0);DEVOUT('[Duplicata005]')
                DEVPOS(PROW()+1,0);DEVOUT('Numero='+ALLTRIM(mnum_dup4))
                DEVPOS(PROW()+1,0);DEVOUT('DataVencimento='+DTOC(mvenci4))
                DEVPOS(PROW()+1,0);DEVOUT('Valor='+ALLTRIM(TRANSFORM(mvlr_dup4,'999999.99')))
        ENDIF
        IF ! EMPTY(mnum_dup5) .AND. ! EMPTY(mvenci5)
                DEVPOS(PROW()+1,0);DEVOUT('[Duplicata006]')
                DEVPOS(PROW()+1,0);DEVOUT('Numero='+ALLTRIM(mnum_dup5))
                DEVPOS(PROW()+1,0);DEVOUT('DataVencimento='+DTOC(mvenci5))
                DEVPOS(PROW()+1,0);DEVOUT('Valor='+ALLTRIM(TRANSFORM(mvlr_dup5,'999999.99')))
        ENDIF
        DEVPOS(PROW()+1,0);DEVOUT('[DadosAdicionais]')
        DEVPOS(PROW()+1,0);DEVOUT('Complemento=Op.:'+cod_operado+' '+IF(! EMPTY(mnum_ped),' - NP:'+STRZERO(mnum_ped,6)+' - ','')+mobs1+mobs2+mobs3+mobs4+mobs5+mobs6+mobs7+mobs8+mobs9+mobs10+mobs11+mobs12+mobs13+mobs14+mobs15+mobs16+mobs17+mobs18+mobs19+mobs20)
        IF ver_serie() = '141235'
                DEVPOS(PROW(),PCOL()+1);DEVOUT('A-39162000 - B-39252000')
                IF (mcod_nat = '6.109' .OR. mcod_nat = '6.110')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('******** DESCONTOS ********** |')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('VALOR DO ICMS....: '+TRANSFORM(micms_desc,'999,999.99')+' |')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('VALOR DO PIS.....: '+TRANSFORM(mpis,'999,999.99')+' |')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('VALOR DO CONFIS..: '+TRANSFORM(mconfis,'999,999.99')+' |')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('                   ---------- |')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('TOTAL DESCONTOS..: '+TRANSFORM(mpis+mconfis+micms_desc,'999,999.99')+' |')
                ENDIF

        ENDIF
        DEVPOS(PROW(),PCOL());DEVOUT('")')
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        mensagem('CRIANDO a Nota No. '+mdocumento)
        WHILE .T.
                IF FILE(marq_sai)
                        lin := MEMOLINE(MEMOREAD(marq_sai),110,1,,)
                        linhas := linha := 0
                        linhas := MLCOUNT(MEMOREAD(marq_sai),110)
                        FOR linha = 1 TO  linhas
                                lin := MEMOLINE(MEMOREAD(marq_sai),110,linha,,)
                                AADD(m_retorno,ALLTRIM(lin))
                        NEXT
                        IF LEN(m_retorno) > 0
                                IF SUBSTR(m_retorno[1],1,2) = 'OK'
                                        mretorno :=ALLTRIM(SUBSTR(m_retorno[1],20))
                                        //mretorno :=ALLTRIM(m_retorno[1])
                                        atencao('Messagem: '+m_retorno[1])
                                        MYRUN('DEL C:\ACBrNFeMonitor\SAINFE.TXT')
                                        EXIT
                                ELSE
                                        op_tela(10,05,20,95,'M E N S S A G E M')
                                        setcor(3)
                                        h:=0
                                        FOR h = 1 TO LEN(m_retorno)
                                                DEVPOS(h,00);DEVOUT(m_retorno[h])
                                        NEXT
                                        setcor(1)
                                        mensagem('Pressione qualquer tecla para continuar...')
                                        INKEY(0)
                                        wvw_lclosewindow()
                                        EXIT
                                ENDIF
                        ENDIF
                        MYRUN('DEL C:\ACBrNFeMonitor\SAINFE.TXT')
                        EXIT
                ENDIF
        ENDDO

        mensagem('ASSINANDO a Nota No. '+mretorno)
        IF nfe_comando('NFE.AssinarNFe('+mretorno+')',,3) = ' '
                RETURN NIL
        ENDIF

        mensagem('VALIDANDO a Nota No. '+mretorno)
        IF nfe_comando('NFE.ValidarNFe('+mretorno+')',,3) = ' '
                RETURN NIL
        ENDIF

        mensagem('ENVIANDO a Nota No. '+mretorno)
/*
        IF nfe_comando('NFE.EnviarNFe('+mretorno+',1,1,1)',,3) = ' '
                RETURN NIL
        ENDIF
*/

        SET DEVI TO PRINT;SET PRINT ON
        SET PRINT TO ('C:\ACBrNFeMonitor\ENTNFE.TXT')
        DEVPOS(PROW(),0);DEVOUT('NFE.EnviarNFe('+mretorno+',1,1,1)')
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        WHILE .T.
                IF FILE(marq_sai)
                        lin := MEMOLINE(MEMOREAD(marq_sai),110,1,,)
                        linhas := linha := 0
                        linhas := MLCOUNT(MEMOREAD(marq_sai),110)
                        FOR linha = 1 TO  linhas
                                lin := MEMOLINE(MEMOREAD(marq_sai),110,linha,,)
                                AADD(m_retorno,ALLTRIM(lin))
                        NEXT
                        IF LEN(m_retorno) > 0
                                IF SUBSTR(m_retorno[1],1,2) = 'OK'
                                        h:=0
                                        FOR h = 1 TO LEN(m_retorno)
                                                IF SUBSTR(UPPER(m_retorno[h]),1,5) = 'CHNFE'
                                                        mchnfe := ALLTRIM(SUBSTR(UPPER(m_retorno[h]),7))
                                                        EXIT
                                                ENDIF
                                        NEXT
                                        atencao('Messagem: CHAVE DA NFE: '+mchnfe)
                                        MYRUN('DEL C:\ACBrNFeMonitor\SAINFE.TXT')
                                        EXIT
                                ELSE
                                        op_tela(10,05,20,95,'M E N S S A G E M')
                                        setcor(3)
                                        h:=0
                                        FOR h = 1 TO LEN(m_retorno)
                                                DEVPOS(h,00);DEVOUT(m_retorno[h])
                                        NEXT
                                        setcor(1)
                                        mensagem('Pressione qualquer tecla para continuar...')
                                        INKEY(0)
                                        wvw_lclosewindow()
                                        EXIT
                                ENDIF
                        ENDIF
                        MYRUN('DEL C:\ACBrNFeMonitor\SAINFE.TXT')
                        EXIT
                ENDIF
        ENDDO
        IF ! EMPTY(mchnfe)
                ccomm := "UPDATE sactotnt SET chnfe = " + sr_cdbvalue(mchnfe)+",camnfe = "+ sr_cdbvalue(mretorno)+" WHERE documento = " + sr_cdbvalue('NF'+mdocumento)
                ccomm := ccomm + " AND serie = " + sr_cdbvalue(mserie_not)
                ccomm := ccomm + " AND emissao = " + sr_cdbvalue(mdata)
                ccomm := ccomm + " AND cod_cli = " + sr_cdbvalue(mcod_cli)
                IF msai_ent = 'S'
                        ccomm := ccomm + " AND ent_sai = 'S'"
                ELSEIF msai_ent = 'E'
                        ccomm := ccomm + " AND ent_sai = 'E'"
                ENDIF
                sr_getconnection():exec(ccomm,,.f.)
                sr_getconnection():exec('COMMIT',,.f.)
        ENDIF
        ASIZE(m_nota,0)
        CLEAR GETS
        SET CENTURY OFF
        RETURN NIL
ENDDO
RETURN NIL
*********************** F I M **********************************
************************************************
* VERIFICAR RETORNO DO MONITOR AcbrNFeMonitor
************************************************
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
                        MYRUN('DEL C:\ACBrNFeMonitor\SAINFE.TXT')
                ENDDO
                RETURN .T.
        ELSE
                op_tela(10,05,20,95,'M E N S S A G E M')
                setcor(3)
                h:=0
                FOR h = 1 TO LEN(m_retorno)
                        DEVPOS(h,00);DEVOUT(m_retorno[h])
                NEXT
                setcor(1)
                mensagem('Pressione qualquer tecla para continuar...')
                INKEY(0)
                wvw_lclosewindow()
        ENDIF
ENDIF
WHILE FILE(marq_sai)
        MYRUN('DEL C:\ACBrNFeMonitor\SAINFE.TXT')
ENDDO
RETURN .F.
************************************************************************
FUNCTION NFE_INIT(ENDERECO)   // Abre a comunica??o com o ACBrNFeMonitor
* ENDERECO -> Diretorio ( quando usando TXT)  Ex: C:\ACBR\ , ou
*             IP:PORTA  (Socket) Ex: 192.168.0.1:3436
************************************************************************
LOCAL P, RET := .T., TFIM, IP, PORTA, RESP

IF ! EMPTY(sENDER)  // J? est? aberto...
        RETURN .t.
ENDIF

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
//atencao(ip+'-'+STRZERO(porta,4))
                                RET     := (ineterrorcode(sSOCKET) = 0)
                                INKEY(0.10,250)
                        ENDDO
                ENDIF

                IF RET
                        InetSetTimeout( sSOCKET, 3000 )   // Timeout de Recep??o 3 seg //
                        RESP := InetRecvEndBlock( sSOCKET, ETX )
                        RET  := ('ACBrNFeMonitor' $ RESP )   // Recebeu as boas vindas ?
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
LOCAL RET_IMP, REQ, RESP, TEMPOR, TINI, TFIM, BLOCO, BYTES, I, TIPO_PARAM

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

CMD := CMD + CR+LF
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
                // Renomeando arquivo TEMPORARIO para REQUISICAO //
                IF EMPTY(RET_IMP)
                        IF frename(TEMPOR, REQ) = -1
                                RET_IMP := 'ERRO: Nao foi possivel renomear ('+TEMPOR+') para ('+REQ+') '+;
                                ferror()
                        ENDIF
                ENDIF
                // Espera ACBrNFeMonitor apagar o arquivo de Requisicao em ate 7 segundos
                // Isso significa que ele LEU o arquivo de Requisicao
                TFIM := SECONDS() + 7
                WHILE EMPTY(RET_IMP) .and. (SECONDS() <= TFIM) .and. file(REQ)
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
Static FUNCTION Grava_NFE( WARQ, WTXT )
LOCAL HANDLE, RET := .T.

HANDLE := FCREATE(WARQ, FC_NORMAL )
IF HANDLE > 0
        FWRITE(HANDLE, WTXT + CHR(13) + CHR(10) )
        RET := (FERROR() = 0)

        FCLOSE(HANDLE)
ENDIF

RETURN RET
****************************************************************************


