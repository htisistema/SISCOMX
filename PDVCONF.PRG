************************************
* INICIO DO SIAC   : 14/11/1994
* INICIO DO SISCOM : 14/07/2007
***************************************
//#translate getactive() => MyHBGetActive()
#include "wvwtools.ch"
#include "inkey.ch"              // constantes de codigos das teclas
#include "Fileio.ch"             // funcoes de leitura/gravacao de arquivo
#include "set.ch"                // constantes da funcao SETKEY()
#include "wingdi.ch"
#include "winuser.ch"
#include "common.ch"
#include "setcurs.ch"
#include "getexit.ch"
//SQLRDD***********************************
#include "sqlrdd.ch"
#include "firebird.ch"     // Needed if you plan to use native connection to Firebird
#include "msg.ch"
*******************************************
#define COM_CALE
GLOBAL oApp

FUNCTION main(mtc,mecf,mtipo_tela)
**********************************
MEMVAR msist,nivel_acess,getlist
LOCAL mprg := 'SACPDV',;
      men,f,num,mcgc_aux,mserie,mponto,mtip_t:=' ',mtela_term,mmapear,lin,linha,linhas,marq:='',;
      matriz:={},sLinhas := '',i:=0

PUBLIC cor,;
       mversao    := '2013.1',;
       mrelease   := '<<R.121120>>',;
       sistema    := '"SISPDV" Sistema Integrado Automacao Comercial',;
       msit_tip   := 'SISPDV',;
       mpaf_ecf   := 'POL4322011',;
       memp_resa  :='.: HTI Sistemas Ltda :.',;
       mcnpj_HTI    := '11156983000176',;
       mim_HTI      := '4130553       ',;
       mrazao_HTI   := 'J H BELTRAO SERVICOS INFORMATICA LTDA.   ',;
       mrazao_fan   := 'HTI Sistemas Ltda.',;
       mend_HTI     := 'RUA TEN. JOAO CICERO',;
       mnum_HTI     := '415',;
       mcomp_HTI    := 'AP.05',;
       mbairro_HTI  := 'BOA VIAGEM',;
       mcidade_HTI  := 'RECIFE',;
       muf_HTI      := 'PE',;
       mcep_HTI     := '51020190',;
       mfone_HTI    := '3735.3592',;
       mpaf_HTI     := 'SISPDV',;
       mpaf_ver     := '2013.1',;
       mer_paf_ecf  := '0109',;
       mdenominacao := 'COMERCIAL',;
       mchv_priv    := 'MIICWwIBAAKBgQC8zpk+UtFzYY5ClxS5uyWa/xyD39zvB+pdV0J2t2vZ5uFNMlaHpnteep6nfiw7L1J0F2PFjwXXyVPA4RpExvxRhc6+U9zsDiE25VTv2b1IIYZwY5aL+KibYUFXCFXvZHOiX4fbwdsnHRd7IvQKYVny79r+WYBtwutOewzfFPanuQIDAQABAoGAFeaZHAObTBj62XqQ6uJsgEgrVJi5FfkDFIS0rvSjzAjeBYhbRSzojpMGqEMYel0I4XJ9HkNy2A8AahUyaNv0FIXBzNpJPlbEJL565xm1w3KpWE9zlVJRSWYLpqQ5JQqmsWsoUa00Y98YnD3nn+eNascX0L9Dj9+KYJ4RsR52FiECQQDcUFcZ8/zhTaZq08m9p1vION6VZXmDv6XFSbJLSGrakoavT401qjFeSBd2wZ9B+KcnlYokBmkfAohMPntPLf0VAkEA22PHd6rQ3fFIUy7+wZrEZUPFXoceyQKyam3jYP3ZisOJ8kzA25hxFO94d3dB3UO3y6+r3x9kpS41GCp8SHiRFQJAdvZ60ezJk+8V+YE64knIaakrp4gPwXBu1sUgnT4RVMziJS/TlDK+Taan5NxQXpMhz2IUIbfEc5Yuet0SQIMYsQJAY0dm529EL3tViFcW79OylkSx1xH8S2hOBr2NjMGzJQlRrnUvPPBiE+A+OomcI53WWXU4qLKTH/CmFDZ9oWn19QJALFdIPLSW7D/gY5xSKJTcS76nCk8Ugf0pFKmYEes8lw3z1vCTZ9UCTxLlvGcNEHqjSAtheRaj/CxXauWBW+0wWQ==',;
       mchv_public  := 'MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQC8zpk+UtFzYY5ClxS5uyWa/xyD39zvB+pdV0J2t2vZ5uFNMlaHpnteep6nfiw7L1J0F2PFjwXXyVPA4RpExvxRhc6+U9zsDiE25VTv2b1IIYZwY5aL+KibYUFXCFXvZHOiX4fbwdsnHRd7IvQKYVny79r+WYBtwutOewzfFPanuQIDAQAB',;
       mcgc_firm,minsc_firm,;
       mend_firm,mcid_firm,mfone_firm,muf_firm,;
       mens,sis_cidade,;
       tesc,mcaminho:='',mtip_term,;
       mcodempresa  := '001',;
       mmult_emp    :='N',;
       mdata_sis    :=DATE(),;
       email_operado  :=SPACE(60),;
       cod_operado :='999',;
       ntask,;
       tipo_rdd    := 2,;
       mnum_principal := NIL,;
       m_cfg:={},;
       m_set:={},;
       cons_emp:={},;
       ncnn:=0,ncnn1:=0,ncnn2:=0,cConnString,m_line := '',m_qp := CHR(13)+CHR(10),;
       mecf_ligada := 1,;
       msen_ini := '201319949094',;
       mtipo_preco:=' '


       //mchv_priv    := 'E9D4E1CCA464B7E811C7746E43B11943EC2A03667F78AD66F01ABC50AF188FF76C083829B07AA8175E9E1F1B15CF3A39E48957C71A40E15713E9EF345E405CEFDFB5252BE32CB19A76E291C798CC01F64E19C5F25191CF41E666AE4738837E2FB3746123AEDF821578F09496C81634A6D784E4FBB0837C4EEEC3BAEF1B3F94C3',;
       //mchv_public  := 'CC55E628C3C90F93E5C7B550A9075A52CA999A89D6406CBDEA5508CF4112E00B4D0055E2DEA5BDF7E4AAAE4C4BB4C582DC0EBA14232D2444B949A6FF2DD23FD5B4CDBEAE7A8929D6A3774F4CCD737522F073E86F0724EE886EA493114780EDD87C59A173E0494D3F64DFF91AA7CFF6FD7F1D46AE5BDCA4418AF8E0261491F60D',;
// **************************
// NA MESMA LINHA DAR SCROLL
// *** '@S30!' ******
// ***********************************
// VERIFICAR DATA DE ALGUM ARQUIVO
// mdt := directory('siac.exe') [1][3]
// ***********************************

//nTask := HB_BACKGROUNDADD( {|| DisplayTime()},2000) // tempo em milisegundos
//SET BACKGROUND TASKS ON
//atencao(hdserial('C:'))
//IF mtc = '?'
//        CLS
//        atencao('SIAC :[S]=SIAC - [V]=VENDA - [C]=CAIXA - [M]=SIACVEND - [F]=FISCAL - [O]=SIACOPER - [R]eindexar',0)
//        RETURN NIL
//ENDIF
//atencao(strzero( RGB(240,249,144), 8 ))

//SQLRDD***********************************
//REQUEST SR_ODBC            // Needed if you plan to connect with ODBC
//REQUEST SR_PGS             // Needed if you plan to use native connection to Postgres
//REQUEST SR_MYSQL           // Needed if you plan to use native connection to MySQL
//REQUEST SR_ORACLE          // Needed if you plan to use native connection to Oracle

REQUEST SQLRDD             // SQLRDD should be linked in
REQUEST SR_FIREBIRD        // Needed if you plan to use native connection to Firebird
REQUEST DBFCDX
REQUEST DBFFPT
*************************************************************************************
REQUEST HB_CODEPAGE_PTISO
REQUEST HB_LANG_ES
REQUEST HB_CODEPAGE_ES
REQUEST HB_CODEPAGE_ESMWIN
REQUEST HB_CODEPAGE_ESWIN
//SETCOLOR('W/1,B/w,,,GR/B')
//SETCOLOR('W/1,g/w,,,GR+/B')
WITH OBJECT ( oApp := WvW_tApplication():New( CurDrive() + ":\" + CurDir() ) )
        :cImagePath := 'C:\HELIO\SIACHB\HTILOGO.JPG'
        :Setup()
        :SetTitle( "SISPDV " + mversao+' - '+mrelease )
        :SetIcon( "winflag.ico" )
        //:SetIcon( "HTI.ico" )
        :lDevelopment := .T.
END

//SetMode(50,120)
//WVW_SetFont(,'terminal',20,,5)  // 1024X768
//WVW_SetFont(,"lucida console",13, 7,, PROOF_QUALITY )  // 800X600

WvW_SetGet( "RDD"         ,"DBFCDX")
WvW_SetGet( "CODEPAGE"    ,255)
WvW_SetGet( "WIN_ROWS"    ,28)
WvW_SetGet( "WIN_COLS"    ,88)
wvw_SetVertCaret(.F.)
wvw_setmaincoord(.F.)
//WVW_SetDefLineSpacing(-30)
//WVW_SetDefLSPACECOLOR(10)
SET EVENTMASK TO 159
SET CONS OFF
SET WRAP ON
SET DATE BRITI
SET DELE ON
SET EPOCH TO 1950
SET KEY -3 TO menu_fiscal()       // F2 MENU FISCAL
mdata_sis := DATE()
IF ! FILE('SACCFG.INI')
        saccfg('1')
ENDIF

//mmode := hb_md5file('SACCFG.INI')      MD5
//atencao(mmode)

lin := MEMOLINE(MEMOREAD('SACCFG.INI'),110,1,,)
linhas := linha := 0
linhas := MLCOUNT(MEMOREAD('SACCFG.INI'),110)
m_cfg := {}
FOR linha = 1 TO  linhas
        lin := MEMOLINE(MEMOREAD('SACCFG.INI'),110,linha,,)
        IF SUBSTR(lin,5,1) = 'C'
                AADD(m_cfg,ALLTRIM(SUBSTR(lin,30)))
        ELSE
                AADD(m_cfg,VAL(SUBSTR(lin,30)))
        ENDIF
NEXT
fclose('saccfg.ini')
IF LEN(m_cfg) = 0
        atencao('Favor verificar o arquivo SACCFG.INI ou entrar em contato com a HTI Sistemas...' )
        RETURN NIL
ENDIF
mmd5 := MEMOLINE(MEMOREAD('HTImd5.ini'),110,1,,)
m_indiv[1,5] := mmd5

i := 1
SETMODE(50,120)
WVW_SetFont(,'lucida console',12, 7,FW_HEAVY, PROOF_QUALITY )  // 800X600
op_tela(00,00,50,120,memp_resa+SPACE(5)+msit_tip+'-'+mversao+' - '+mrelease+IF(m_line = 'OFF','  *** OFF LINE ***','')+SPACE(5)+'FRENTE DE LOJA - Data:'+DTOC(mdata_sis)+' - '+ver_dia(mdata_sis) )
wvw_noclose()
wvw_maximize(0)
WVW_CenterWindow(,.T.,.T.)

ncnn := 0
tipo_rdd := 2
op_tela(10,15,12,85,'A T E N C A O ')
DEVPOS(01,01);DEVOUT('Tentando CONEXAO com o BANCO DE DADOS, Aguarde um Momento......')
nCnn := SR_AddConnection(CONNECT_FIREBIRD,'FIREBIRD='+ALLTRIM(m_cfg[4])+';uid=SYSDBA;pwd=masterkey;charset=ISO8859_1')
IF nCnn = 0
        SR_SetActiveConnection(nCnn)
ENDIF
RDDSETDEFAULT('SQLRDD')
SR_SetMultiLang( .t. )
SR_SetBaseLang( LANG_PT_BR )
********** CONECTANDO AO FIREBIRD *************************************************
IF ! FILE('SACCAIXA.DBF')
        matriz:={ }
        AADD(matriz,{'empresa','C',3,0})
        AADD(matriz,{'tipo','C',2,0})
        AADD(matriz,{'data','D',8,0})
        AADD(matriz,{'nota','C',8,0})
        AADD(matriz,{'num_dup','C',12,0})
        AADD(matriz,{'num_ban','C',3,0})
        AADD(matriz,{'cod_ct','C',3,0})
        AADD(matriz,{'documento','C',12,0})
        AADD(matriz,{'venci','D',8,0})
        AADD(matriz,{'valor','N',10,2})
        AADD(matriz,{'tipo_comp','C',2,0})
        AADD(matriz,{'coddesp','C',3,0})
        AADD(matriz,{'descri1','C',40,0})
        AADD(matriz,{'descri2','C',40,0})
        AADD(matriz,{'cod_vend','C',3,0})
        AADD(matriz,{'cod_cli','C',5,0})
        AADD(matriz,{'cod_opera','C',3,0})
        AADD(matriz,{'sangria','C',1,0})
        AADD(matriz,{'op_pg','C',3,0})
        AADD(matriz,{'pg','C',1,0})
        AADD(matriz,{'hora','C',8,0})
        AADD(matriz,{'autoriz','C',3,0})
        AADD(matriz,{'valor_com','N',10,2})
        AADD(matriz,{'comissao','N',12,6})
        AADD(matriz,{'tp_desp','C',1,0})
        AADD(matriz,{'num_pdv','C',4,0})
        AADD(matriz,{'num_cup','C',6,0})
        AADD(matriz,{'fechado','C',2,0})
        AADD(matriz,{'tp_mov','C',1,0})
        AADD(matriz,{'termina','C',10,0})
        AADD(matriz,{'c_s','C',1,0})
        AADD(matriz,{'obs','C',40,0})
        DBCREATE('saccaixa',matriz,'DBFCDX')
ENDIF
IF ! FILE('SACDUPR.DBF')
        matriz:={ }
        AADD(matriz,{'empresa','C',3,0})
        AADD(matriz,{'tipo','C',2,0})
        AADD(matriz,{'numero','C',3,0})
        AADD(matriz,{'duplicata','C',12,0})
        AADD(matriz,{'valor_dup','N',10,2})
        AADD(matriz,{'tip_cli','C',1,0})
        AADD(matriz,{'fornec','C',5,0})
        AADD(matriz,{'cliente','C',40,0})
        AADD(matriz,{'c_cpfcnpj','C',14,0})
        AADD(matriz,{'emissao','D',8,0})
        AADD(matriz,{'venc','D',8,0})
        AADD(matriz,{'venc1','D',8,0})
        AADD(matriz,{'datpag','D',8,0})
        AADD(matriz,{'dattra','D',8,0})
        AADD(matriz,{'datope','D',8,0})
        AADD(matriz,{'banco','C',1,0})
        AADD(matriz,{'agencia','C',8,0})
        AADD(matriz,{'c_c','C',13,0})
        AADD(matriz,{'valor','N',10,2})
        AADD(matriz,{'vlpago','N',10,2})
        AADD(matriz,{'vl_ipi','N',10,2})
        AADD(matriz,{'desconto','N',10,2})
        AADD(matriz,{'juros','N',10,2})
        AADD(matriz,{'juros_d','N',10,2})
        AADD(matriz,{'pago','C',1,0})
        AADD(matriz,{'tip_pg','C',2,0})
        AADD(matriz,{'mov_cx','C',1,0})
        AADD(matriz,{'conta','C',1,0})
        AADD(matriz,{'cheque','C',8,0})
        AADD(matriz,{'vendedor','C',3,0})
        AADD(matriz,{'num_ped','C',6,0})
        AADD(matriz,{'comissao','N',12,6})
        AADD(matriz,{'comissao1','N',12,6})    // 01/08/2006
        AADD(matriz,{'vlr_tab','N',12,2})      // 01/08/2006
        AADD(matriz,{'operador','C',3,0})
        AADD(matriz,{'alt_oper','C',3,0})
        AADD(matriz,{'doc_tran','C',14,0})
        AADD(matriz,{'dat_tran','D',8,0})     //12.06.2002
        AADD(matriz,{'cod_forn','C',4,0})     //27.05.2002
        AADD(matriz,{'forn_desp','C',40,0})   //11.07.2003
        AADD(matriz,{'baix_parc','D',8,0})    //27.05.2002
        AADD(matriz,{'oper_parc','C',3,0})    //11.07.2003
        AADD(matriz,{'data_fund','D',8,0})     //09.05.2005
        AADD(matriz,{'motivo','C',30,0})       //09.05.2005
        AADD(matriz,{'cod_incl','C',3,0})      //09.05.2005
        AADD(matriz,{'obs','C',60,0})
        AADD(matriz,{'obs1','C',60,0})
        AADD(matriz,{'corrente','C',35,0})
        AADD(matriz,{'cpfcnpj','C',14,0})
        AADD(matriz,{'datcobra','D',8,0})
        AADD(matriz,{'datprev','D',8,0})
        AADD(matriz,{'datproc','D',8,0})        //03.06.2002
        AADD(matriz,{'opeproc','C',3,0})        //03.06.2002
        AADD(matriz,{'ope_venda','C',3,0})        //31.07.2006
        AADD(matriz,{'ope_comi','N',12,6})        //31.07.2006
        AADD(matriz,{'pg_comi','D',8,0})        //31.07.2006
        AADD(matriz,{'ope_pgcom','C',3,0})        //31.07.2006
        AADD(matriz,{'lin1','C',60,0})
        AADD(matriz,{'lin2','C',60,0})
        AADD(matriz,{'lin3','C',60,0})
        AADD(matriz,{'lin4','C',60,0})
        AADD(matriz,{'lin5','C',60,0})
        AADD(matriz,{'hora_bx','C',8,0})
        AADD(matriz,{'com_sem','C',1,0})
        DBCREATE('SACDUPR',matriz,'DBFCDX')
ENDIF
IF ! FILE('SACMOV.DBF')
        matriz:={ }
        AADD(matriz,{'empresa','C',3,0})
        AADD(matriz,{'tipo_nota','C',1,0})
        AADD(matriz,{'documento','C',10,0})
        AADD(matriz,{'conjunta','C',8,0})
        AADD(matriz,{'serie','C',4,0})
        AADD(matriz,{'modelo','C',2,0})
        AADD(matriz,{'num_ecf','C',10,0})
        AADD(matriz,{'num_ped','C',6,0})
        AADD(matriz,{'emissao','D',8,0})
        AADD(matriz,{'gru_sub','C',5,0})
        AADD(matriz,{'codigo','C',5,0})
        AADD(matriz,{'produto','C',40,0})
        AADD(matriz,{'especie','C',4,0})
        AADD(matriz,{'cod_fab','C',4,0})
        AADD(matriz,{'fabrica','C',40,0})
        AADD(matriz,{'unidade','C',3,0})
        AADD(matriz,{'data_s_e','D',8,0})
        AADD(matriz,{'ent_sai','C',1,0})
        AADD(matriz,{'quantd','N',12,3})
        AADD(matriz,{'pr_venda','N',10,4})
        AADD(matriz,{'vl_vend','N',10,4})
        AADD(matriz,{'vl_fatura','N',10,4})
        AADD(matriz,{'pr_unit','N',10,4})
        AADD(matriz,{'cust_mer','N',10,4})
        AADD(matriz,{'vl_merc','N',10,4})
        AADD(matriz,{'cod_vend','C',3,0})
        AADD(matriz,{'cod_oper','C',3,0})
        AADD(matriz,{'comissao','N',6,2})
        AADD(matriz,{'montador','C',3,0})
        AADD(matriz,{'montador1','C',3,0})
        AADD(matriz,{'cod_cli','C',5,0})
        AADD(matriz,{'cliente','C',40,0})
        AADD(matriz,{'cid_cli','C',20,0})
        AADD(matriz,{'uf_cli','C',2,0})
        AADD(matriz,{'insc_cli','C',14,0})
        AADD(matriz,{'cgc_cli','C',14,0})
        AADD(matriz,{'cpf_cli','C',14,0})
        AADD(matriz,{'icm','N',10,2})
        AADD(matriz,{'icm_f','N',10,5})
        AADD(matriz,{'icm_sub','N',10,5})
        AADD(matriz,{'vlr_icmsub','N',12,5})
        AADD(matriz,{'base_icmsu','N',12,5})
        AADD(matriz,{'desc_icm','N',12,5})
        AADD(matriz,{'dia1','C',2,0})
        AADD(matriz,{'dia2','C',2,0})
        AADD(matriz,{'dia3','C',2,0})
        AADD(matriz,{'frete','N',10,2})
        AADD(matriz,{'encargo_f','N',10,2})
        AADD(matriz,{'disp_asse','N',10,2})
        AADD(matriz,{'desc1','N',10,2})
        AADD(matriz,{'desc2','N',10,2})
        AADD(matriz,{'desc3','N',10,2})
        AADD(matriz,{'ipi_aliq','N',10,2})
        AADD(matriz,{'ipi','N',10,2})
        AADD(matriz,{'peso','N',8,3})
        AADD(matriz,{'peso_liq','N',8,3})
        AADD(matriz,{'alimento','C',1,0})
        AADD(matriz,{'bebida','N',6,2})
        AADD(matriz,{'tipo','C',2,0})
        AADD(matriz,{'isento','C',1,0})
        AADD(matriz,{'sittrib','C',3,0})
        AADD(matriz,{'tp_venda','C',2,0})
        AADD(matriz,{'cond_vezes','C',3,0})
        AADD(matriz,{'cond_intev','C',2,0})
        AADD(matriz,{'cod_nat','C',5,0})
        AADD(matriz,{'chassis','C',20,0})
        AADD(matriz,{'descri1','C',60,0})
        AADD(matriz,{'descri2','C',60,0})
        AADD(matriz,{'descri3','C',60,0})
        AADD(matriz,{'descri4','C',60,0})
        AADD(matriz,{'descri5','C',60,0})
        AADD(matriz,{'cancel','C',1,0})
        AADD(matriz,{'obs1','C',60,0})
        AADD(matriz,{'obs2','C',60,0})
        AADD(matriz,{'obs3','C',60,0})
        AADD(matriz,{'obs4','C',60,0})
        AADD(matriz,{'obs5','C',60,0})
        AADD(matriz,{'obs6','C',60,0})
        AADD(matriz,{'cod_nota','C',1,0})
        AADD(matriz,{'vlr_icm','N',15,2})
        AADD(matriz,{'base_icm','N',15,2})
        AADD(matriz,{'nomr_ele','C',1,0})
        AADD(matriz,{'convidado','C',30,0})
        AADD(matriz,{'hora_mov','C',8,0})
        DBCREATE('SACMOV',matriz,'DBFCDX')
ENDIF
IF ! FILE('SACMOVNT.DBF')
        matriz:={ }
        AADD(matriz,{'empresa','C',3,0})
        AADD(matriz,{'tipo_nota','C',1,0})
        AADD(matriz,{'documento','C',10,0})
        AADD(matriz,{'conjunta','C',8,0})
        AADD(matriz,{'serie','C',4,0})
        AADD(matriz,{'modelo','C',2,0})
        AADD(matriz,{'num_ecf','C',10,0})
        AADD(matriz,{'num_ped','C',6,0})
        AADD(matriz,{'emissao','D',8,0})
        AADD(matriz,{'gru_sub','C',5,0})
        AADD(matriz,{'codigo','C',5,0})
        AADD(matriz,{'produto','C',40,0})
        AADD(matriz,{'especie','C',4,0})
        AADD(matriz,{'cod_fab','C',4,0})
        AADD(matriz,{'fabrica','C',40,0})
        AADD(matriz,{'unidade','C',3,0})
        AADD(matriz,{'data_s_e','D',8,0})
        AADD(matriz,{'ent_sai','C',1,0})
        AADD(matriz,{'quantd','N',12,3})
        AADD(matriz,{'pr_venda','N',10,4})
        AADD(matriz,{'vl_vend','N',10,4})
        AADD(matriz,{'vl_fatura','N',10,4})
        AADD(matriz,{'pr_unit','N',10,4})
        AADD(matriz,{'cust_mer','N',10,4})
        AADD(matriz,{'vl_merc','N',10,4})
        AADD(matriz,{'cod_vend','C',3,0})
        AADD(matriz,{'cod_oper','C',3,0})
        AADD(matriz,{'comissao','N',6,2})
        AADD(matriz,{'montador','C',3,0})
        AADD(matriz,{'montador1','C',3,0})
        AADD(matriz,{'cod_cli','C',5,0})
        AADD(matriz,{'cliente','C',40,0})
        AADD(matriz,{'cid_cli','C',20,0})
        AADD(matriz,{'uf_cli','C',2,0})
        AADD(matriz,{'insc_cli','C',14,0})
        AADD(matriz,{'cgc_cli','C',14,0})
        AADD(matriz,{'cpf_cli','C',14,0})
        AADD(matriz,{'icm','N',10,2})
        AADD(matriz,{'icm_f','N',10,5})
        AADD(matriz,{'icm_sub','N',10,5})
        AADD(matriz,{'vlr_icmsub','N',12,5})
        AADD(matriz,{'base_icmsu','N',12,5})
        AADD(matriz,{'desc_icm','N',12,5})
        AADD(matriz,{'dia1','C',2,0})
        AADD(matriz,{'dia2','C',2,0})
        AADD(matriz,{'dia3','C',2,0})
        AADD(matriz,{'frete','N',10,2})
        AADD(matriz,{'encargo_f','N',10,2})
        AADD(matriz,{'disp_asse','N',10,2})
        AADD(matriz,{'desc1','N',10,2})
        AADD(matriz,{'desc2','N',10,2})
        AADD(matriz,{'desc3','N',10,2})
        AADD(matriz,{'ipi_aliq','N',10,2})
        AADD(matriz,{'ipi','N',10,2})
        AADD(matriz,{'peso','N',8,3})
        AADD(matriz,{'peso_liq','N',8,3})
        AADD(matriz,{'alimento','C',1,0})
        AADD(matriz,{'bebida','N',6,2})
        AADD(matriz,{'tipo','C',2,0})
        AADD(matriz,{'isento','C',1,0})
        AADD(matriz,{'sittrib','C',3,0})
        AADD(matriz,{'tp_venda','C',2,0})
        AADD(matriz,{'cond_vezes','C',3,0})
        AADD(matriz,{'cond_intev','C',2,0})
        AADD(matriz,{'cod_nat','C',5,0})
        AADD(matriz,{'chassis','C',20,0})
        AADD(matriz,{'descri1','C',60,0})
        AADD(matriz,{'descri2','C',60,0})
        AADD(matriz,{'descri3','C',60,0})
        AADD(matriz,{'descri4','C',60,0})
        AADD(matriz,{'descri5','C',60,0})
        AADD(matriz,{'cancel','C',1,0})
        AADD(matriz,{'obs1','C',60,0})
        AADD(matriz,{'obs2','C',60,0})
        AADD(matriz,{'obs3','C',60,0})
        AADD(matriz,{'obs4','C',60,0})
        AADD(matriz,{'obs5','C',60,0})
        AADD(matriz,{'obs6','C',60,0})
        AADD(matriz,{'cod_nota','C',1,0})
        AADD(matriz,{'vlr_icm','N',15,2})
        AADD(matriz,{'base_icm','N',15,2})
        AADD(matriz,{'nomr_ele','C',1,0})
        AADD(matriz,{'hora_mov','C',8,0})
        DBCREATE('SACMOVNT',matriz,'DBFCDX')
ENDIF
/*
IF ! FILE('ESTOQUE.DBF')
        matriz:={}
        AADD(matriz,{'data','D',8,0})
        AADD(matriz,{'hora','C',8,0})
        AADD(matriz,{'cod_barr','C',14,0})
        AADD(matriz,{'gru_sub','C',5,0})
        AADD(matriz,{'cod_merc','C',5,0,,,,,,1,})
        AADD(matriz,{'merc','C',40,0})
        AADD(matriz,{'unidade','C',3,0})
        AADD(matriz,{'pr_venda','N',12,4})
        AADD(matriz,{'saldo','N',12,3})
        AADD(matriz,{'CHV_CRIPT','C',256,0})
        DBCREATE('ESTOQUE',matriz,'DBFCDX')
ENDIF
IF ! FILE('PRODUTO.DBF')
        matriz:={}
        AADD(matriz,{'COD_BARR','C',14,0})
        AADD(matriz,{'GRU_SUB','C',5,0})
        AADD(matriz,{'COD_MERC','C',5,0,,,,,,1,})
        AADD(matriz,{'MERC','C',40,0})
        AADD(matriz,{'UNIDADE','C',3,0})
        AADD(matriz,{'PR_VENDA','N',14,2})
        AADD(matriz,{'SALDO','N',13,3})
        AADD(matriz,{'IAT','C',1,0})
        AADD(matriz,{'IPPT','C',1,0})
        AADD(matriz,{'CST','C',4,0})
        AADD(matriz,{'ISENTO','C',1,0})
        AADD(matriz,{'NCM','C',8,0})
        AADD(matriz,{'CHV_CRIPT','C',256,0})
        DBCREATE('PRODUTO',matriz,'DBFCDX')
ENDIF
*/
IF ! FILE('R1.DBF')
        matriz:={}
        AADD(matriz,{'NUMERO_FAB  ','C',20,0})
        AADD(matriz,{'MF_ADICIONAL','C',1,0})
        AADD(matriz,{'TIPO_ECF    ','C',7,0})
        AADD(matriz,{'MARCA_ECF   ','C',20,0})
        AADD(matriz,{'MODELO_ECF  ','C',20,0})
        AADD(matriz,{'VERSAO_SB   ','C',10,0})
        AADD(matriz,{'DATA_INSTSB ','C',8,0})
        AADD(matriz,{'HORA_INSTSB ','C',8,0})
        AADD(matriz,{'NUM_SEQ_ECF ','C',3,0})
        AADD(matriz,{'CNPJ_USU','C',14,0})
        AADD(matriz,{'INSC_USU','C',14,0})
        AADD(matriz,{'CNPJ_DESENV','C',14,0})
        AADD(matriz,{'INSC_MUNDESEN','C',14,0})
        AADD(matriz,{'DENOMI_DESEN','C',40,0})
        AADD(matriz,{'NOME_PAF','C',40,0})
        AADD(matriz,{'VERSAO_PAF','C',10,0})
        AADD(matriz,{'COD_MD5_PAF','C',32,0})
        AADD(matriz,{'DATA_INI','C',8,0})
        AADD(matriz,{'DATA_FINAL','C',8,0})
        AADD(matriz,{'VERSAO_ER_PAF','C',4,0})
        AADD(matriz,{'CHV_CRIPT','C',256,0})
        AADD(matriz,{'INSC_ESTDESEN','C',14,0})
        DBCREATE('R1',matriz,'DBFCDX')
ENDIF
IF ! FILE('R2.DBF')
        matriz:={}
        AADD(matriz,{'NUMERO_FAB'  ,'C',20,0})
        AADD(matriz,{'MF_ADICIONAL','C',1,0})
        AADD(matriz,{'MODELO_ECF'  ,'C',20,0})
        AADD(matriz,{'NUMERO_USU'  ,'C',2,0})
        AADD(matriz,{'CRZ'         ,'C',6,0})
        AADD(matriz,{'COO'         ,'C',6,0})
        AADD(matriz,{'CRO'         ,'C',6,0})
        AADD(matriz,{'DATA_EMI'    ,'C',8,0})
        AADD(matriz,{'HORA_EMI'    ,'C',8,0})
        AADD(matriz,{'VENDA_BRUTA' ,'C',14,0})
        AADD(matriz,{'PARAMETRO'   ,'C',1,0})
        AADD(matriz,{'COO_INI'     ,'C',6,0})
        AADD(matriz,{'COO_FIM'     ,'C',6,0})
        AADD(matriz,{'DATA_MOV'    ,'D',8,0})
        AADD(matriz,{'CHV_CRIPT'   ,'C',256,0})
        DBCREATE('R2',matriz,'DBFCDX')
ENDIF
IF ! FILE('R3.DBF')
        matriz:={}
        AADD(matriz,{'NUMERO_FAB'   ,'C',20,0})
        AADD(matriz,{'MF_ADICIONAL' ,'C',1,0})
        AADD(matriz,{'MODELO_ECF'   ,'C',20,0})
        AADD(matriz,{'NUMERO_USU'   ,'C',2,0})
        AADD(matriz,{'CRZ'          ,'C',6,0})
        AADD(matriz,{'TOTAL_PARCIAL','C',7,0})
        AADD(matriz,{'VALOR_ACU'    ,'C',13,0})
        AADD(matriz,{'DATA_MOV'    ,'D',8,0})
        AADD(matriz,{'CHV_CRIPT'    ,'C',256,0})
        DBCREATE('R3',matriz,'DBFCDX')
ENDIF
IF ! FILE('R4.DBF')
        matriz:={}
        AADD(matriz,{'NUMERO_FAB        ','C',20,0})
        AADD(matriz,{'MF_ADICIONAL      ','C',1,0})
        AADD(matriz,{'MODELO_ECF        ','C',20,0})
        AADD(matriz,{'NUMERO_USU        ','C',2,0})
        AADD(matriz,{'CCF_CVC_CBP       ','C',6,0})
        AADD(matriz,{'COO               ','C',6,0})
        AADD(matriz,{'DATA_INI          ','C',8,0})
        AADD(matriz,{'SUB_TOTAL         ','C',14,0})
        AADD(matriz,{'DESCONT           ','C',13,0})
        AADD(matriz,{'IND_DESCONT       ','C',1,0})
        AADD(matriz,{'ACRES_SUB         ','C',13,0})
        AADD(matriz,{'IND_ACRESC        ','C',1,0})
        AADD(matriz,{'VLR_LIQ           ','C',14,0})
        AADD(matriz,{'IND_CANCEL        ','C',1,0})
        AADD(matriz,{'CANCEL_ACRESC     ','C',13,0})
        AADD(matriz,{'ORD_DESC_ACRE     ','C',1,0})
        AADD(matriz,{'NOME_CLIENTE      ','C',40,0})
        AADD(matriz,{'CNPJ_CPF          ','C',14,0})
        AADD(matriz,{'DATA_MOV          ','D',8,0})
        AADD(matriz,{'CHV_CRIPT         ','C',256,0})
        DBCREATE('R4',matriz,'DBFCDX')
ENDIF
IF ! FILE('R5.DBF')
        matriz:={}
        AADD(matriz,{'NUMERO_FAB   ','C',20,0})
        AADD(matriz,{'MF_ADICIONAL ','C',1,0})
        AADD(matriz,{'MODELO_ECF   ','C',20,0})
        AADD(matriz,{'NUMERO_USU   ','C',2,0})
        AADD(matriz,{'COO          ','C',6,0})
        AADD(matriz,{'CCF_CVC_CBP  ','C',6,0})
        AADD(matriz,{'NUM_ITEM     ','C',3,0})
        AADD(matriz,{'COD_PROD     ','C',14,0})
        AADD(matriz,{'DESCRICAO    ','C',100,0})
        AADD(matriz,{'QUANTIDADE   ','C',7,0})
        AADD(matriz,{'UNIDADE      ','C',3,0})
        AADD(matriz,{'VLR_UNIT     ','C',8,0})
        AADD(matriz,{'DESCON_ITEM  ','C',8,0})
        AADD(matriz,{'ACRESC_ITEM  ','C',8,0})
        AADD(matriz,{'VLR_LIQ      ','C',14,0})
        AADD(matriz,{'TOTAL_PARCIAL','C',7,0})
        AADD(matriz,{'IND_CANCEL   ','C',1,0})
        AADD(matriz,{'QUANT_CANCEL ','C',7,0})
        AADD(matriz,{'VLR_CANCEL   ','C',13,0})
        AADD(matriz,{'CANCEL_ACRES ','C',13,0})
        AADD(matriz,{'IAT          ','C',1,0})
        AADD(matriz,{'IPPT         ','C',1,0})
        AADD(matriz,{'CASASDECQTD','C',1,0})
        AADD(matriz,{'CASASDECUNI','C',1,0})
        AADD(matriz,{'DATA_MOV'    ,'D',8,0})
        AADD(matriz,{'CHV_CRIPT    ','C',256,0})
        DBCREATE('R5',matriz,'DBFCDX')
ENDIF
IF ! FILE('R6.DBF')
        matriz:={}
        AADD(matriz,{'NUMERO_FAB  ','C',20,0})
        AADD(matriz,{'MF_ADICIONAL','C',1,0})
        AADD(matriz,{'MODELO_ECF  ','C',20,0})
        AADD(matriz,{'NUMERO_USU  ','C',2,0})
        AADD(matriz,{'COO         ','C',6,0})
        AADD(matriz,{'GNF         ','C',6,0})
        AADD(matriz,{'GRG         ','C',6,0})
        AADD(matriz,{'CDC         ','C',4,0})
        AADD(matriz,{'DENOMICAO   ','C',2,0})
        AADD(matriz,{'DATA_FINAL  ','C',8,0})
        AADD(matriz,{'HORA_FINAL  ','C',8,0})
        AADD(matriz,{'DATA_MOV    ','D',8,0})
        AADD(matriz,{'CHV_CRIPT   ','C',256,0})
        DBCREATE('R6',matriz,'DBFCDX')
ENDIF
IF ! FILE('R7.DBF')
        matriz:={}
        AADD(matriz,{'NUMERO_FAB  ','C',20,0})
        AADD(matriz,{'MF_ADICIONAL','C',1,0})
        AADD(matriz,{'MODELO_ECF  ','C',20,0})
        AADD(matriz,{'NUMERO_USU  ','C',2,0})
        AADD(matriz,{'COO         ','C',6,0})
        AADD(matriz,{'CCF         ','C',6,0})
        AADD(matriz,{'GNF         ','C',6,0})
        AADD(matriz,{'MEIO_PAG    ','C',15,0})
        AADD(matriz,{'VLR_PAGO    ','C',13,0})
        AADD(matriz,{'IND_ESTORNO ','C',1,0})
        AADD(matriz,{'VLR_ESTORNO ','C',13,0})
        AADD(matriz,{'DATA_MOV    ','D',8,0})
        AADD(matriz,{'CHV_CRIPT   ','C',256,0})
        DBCREATE('R7',matriz,'DBFCDX')
ENDIF
SR_SetActiveConnection(nCnn)
setcor(1)
sacconf_ecf()
fecha_conexaoDB()
QUIT
************************** f i m ***************************
FUNCTION ShowClue( ... )
************************
LOCAL xMessage
STATIC lPostP, cMessage := ""
IF ( lPostP = NIL )
        cMessage := ""
ENDIF
FOR EACH xMessage IN HB_aParams()
        lIsArray := .F.
        SWITCH ValType( xMessage )
        CASE "C"
        CASE "M"
                EXIT
        CASE "N"
                xMessage := LTrim( Str( xMessage ) )
                EXIT
        CASE "D"
                xMessage := DToC( xMessage )
                EXIT
        CASE "L"
                xMessage := IF( xMessage, ".T.", ".F." )
                EXIT
        CASE "O"
                xMessage := xMessage:className + " Object"
                EXIT
        CASE "B"
                xMessage := "{||...}"
                EXIT
        CASE "A"
                lPostP := lIsArray := .T.
                EXIT
                DEFAULT
                xMessage := "NIL"
        END
        cMessage += ( "/" + xMessage )
NEXT
WvW_SBsetText( 1, 0, "* " +  cMessage )
lPostP := NIL
RETURN (.T.)

//****
/*
function DisplayTime
  //if <alguma condi??o>
    HB_BACKGROUNDACTIVE( nTask, .F. )  // desativar o timer
    atencao('ok')
    //<esperar>       '
    HB_BACKGROUNDACTIVE( nTask, .T. )  // reativar o timer
  //endif
return .t.
*/
