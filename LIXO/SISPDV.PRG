* INICIO DO SIAC..: 14/11/1994
* INICIO DO SISCOM: 14/07/2007
******************************
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
//SQLRDD***************
#include "sqlrdd.ch"
//#include "pgs.ch"          // Needed if you plan to use native connection to Postgres
//#include "mysql.ch"        // MySQL
//#include "oracle.ch"       // Oracle
#include "firebird.ch"       // Firebird
#include "msg.ch"
***********************
#define COM_CALE
GLOBAL oApp

FUNCTION main(mtc,mecf,mtipo_tela)
**********************************
MEMVAR msist,nivel_acess,getlist
LOCAL mprg := 'SISCOM',men,f,num,mcgc_aux,mserie,mponto,mtip_t:=' ',mtela_term,mmapear,lin,linha,linhas,marq:='',;
      matriz:={},op:=' ',d:=0,m_aux:={},xcop,cons_lib,mcnpj_txt

PUBLIC mversao     := 'v19.04.08',;
       msit_tip    := 'SISCOM',;
       sistema     := '.: SISCOM :. Sistema Automacao Comercial',;
       memp_resa    :='.: HTI Sistemas Ltda :.',;
       mcnpj_HTI    := '11156983000176',;
       mim_HTI      := '4130553       ',;
       mrazao_HTI   := 'J H BELTRAO SERVICOS DE INFORMATICA LTDA. - ME',;
       mend_HTI     := 'Praca Francelino Araujo',;
       mnum_HTI     := '68',;
       mcomp_HTI    := '',;
       mbairro_HTI  := 'Centro',;
       mcidade_HTI  := 'Tacaimbo',;
       muf_HTI      := 'PE',;
       mcep_HTI     := '55140000',;
       mfone_HTI    := '3755.1072',;
       mfone1_HTI   := '         ',;
       m_md5        := '7d539b303a4e568e4877cda1e4feadf9',;
       mcgc_firm,minsc_firm,;
       mend_firm,mcid_firm,mfone_firm,muf_firm,;
       mens,sis_cidade,;
       mcaminho:='',mtip_term,;
       mcodempresa  := '001',;
       mmult_emp    :='N',;
       mdata_sis    :=DATE(),;
       cod_operado  :='   ',;
       email_operado  :=SPACE(60),;
       ntask,;
       mnum_principal := NIL,;
       m_cfg:={},;
       m_set := {},;
       cons_emp:={},;
       ncnn:=0,ncnn1:=0,ncnn2:=0,m_line:='ON',m_qp := CHR(13)+CHR(10),;
       cam_dba:={},;
       mn_sac0,;
       mnome_arq:='',;
       mtipo_preco:=' ',;
       sENDER   := '',;
       m_indiv:={},;
       mdefcam_imp:=Curdrive()+ ":\" + rtrim(curdir())+ "\",;
       m_color := WVW_GetPalette()

       //mchv_priv    := 'E9D4E1CCA464B7E811C7746E43B11943EC2A03667F78AD66F01ABC50AF188FF76C083829B07AA8175E9E1F1B15CF3A39E48957C71A40E15713E9EF345E405CEFDFB5252BE32CB19A76E291C798CC01F64E19C5F25191CF41E666AE4738837E2FB3746123AEDF821578F09496C81634A6D784E4FBB0837C4EEEC3BAEF1B3F94C3',;
       //mchv_public  := 'CC55E628C3C90F93E5C7B550A9075A52CA999A89D6406CBDEA5508CF4112E00B4D0055E2DEA5BDF7E4AAAE4C4BB4C582DC0EBA14232D2444B949A6FF2DD23FD5B4CDBEAE7A8929D6A3774F4CCD737522F073E86F0724EE886EA493114780EDD87C59A173E0494D3F64DFF91AA7CFF6FD7F1D46AE5BDCA4418AF8E0261491F60D',;
       //mpaf_ecf     := 'POL4322011',;
       //mpaf_ver     := '2013.1',;



//mtc := 'pinpad'

// **************************
// NA MESMA LINHA DAR SCROLL
// *** '@S30@!' ******
// *************************************
// VERIFICAR DATA DE ALGUM ARQUIVO
// mdt := directory('siscom.exe') [1][3]
// *************************************

//FUNCAO PARA FICAR CHECANDO AULGUMA FUNCAO
/*
nTask := HB_BACKGROUNDADD( {|| DisplayTime()},12000) // tempo em milisegundos
SET BACKGROUND TASKS ON
atencao(hdserial('C:'))
*/

//IF mtc = '?'
//        CLS
//        atencao('SIAC :[S]=SIAC - [V]=VENDA - [C]=CAIXA - [M]=SIACVEND - [F]=FISCAL - [O]=SIACOPER - [R]eindexar',0)
//        RETURN NIL
//ENDIF
//atencao(strzero( RGB(240,249,144), 8 ))
// IMPRIMIR ARQUIVO .TXT
//PrintFileRaw(GetDefaultPrinter(),"REC_HTI.REL","teste de impressao")
/*
if dllcall("USER32.DLL",32,"FindWindow", ,"siscom") > 0
	   atencao("Programa Calculadora aberto.")
endif

Hb_Run( "net config server /autodisconnect:-1" ) // NAO DESCONECTAR DO SERVIDOR
*/
//REQUEST SR_ODBC            // Needed if you plan to connect with ODBC
//REQUEST SR_MYSQL           // Needed if you plan to use native connection to MySQL
//REQUEST SR_ORACLE          // Needed if you plan to use native connection to Oracle
//REQUEST SR_PGS             // Needed if you plan to use native connection to Postgres

//atencao(hdserial('C:'))

// IMPRIMIR FIGURAS EM RELATORIOS
// DEVPOS(00,03);DEVOUT('"HTItop.jpg"')

REQUEST SQLRDD             // SQLRDD should be linked in
REQUEST SR_FIREBIRD        // Needed if you plan to use native connection to Firebird
REQUEST DBFCDX
REQUEST DBFFPT
*************************************************************************************
REQUEST HB_CODEPAGE_PT850
REQUEST HB_NOSTARTUPWINDOW
//REQUEST HB_CODEPAGE_PTISO
REQUEST HB_LANG_ES
REQUEST HB_CODEPAGE_ES
REQUEST HB_CODEPAGE_ESMWIN
REQUEST HB_CODEPAGE_ESWIN
//WITH OBJECT ( oWindow := WvW_tWindow():New( 4, 1, 22, 82, "Equipo", "WINDOW" ) )
//WITH OBJECT ( oApp := WvW_tWindow():New( 4, 1, 22, 82, "Equipo", "WINDOW" ) )

WITH OBJECT ( oApp := WvW_tApplication():New( CurDrive() + ":\" + CurDir() ) )
        :cImagePath := CurDrive()+ ":\" + Curdir()      //+'\HTILOGO.JPG'
        :Setup()
        :SetTitle( sistema+' - '+mversao )
        :lDevelopment := .T.
END
setcor(4)
limpa(00,00,50,120)
setcor(1)
//oApp :Setup()
*/
WvW_SetGet( "RDD"         ,"DBFCDX")
WvW_SetGet( "CODEPAGE"    ,255)
WvW_SetGet( "WIN_ROWS"    ,50)
WvW_SetGet( "WIN_COLS"    ,88)
wvw_SetVertCaret(.F.)
wvw_setmaincoord(.F.)
wvw_enableshortcuts(0,.T.)
wvw_setdeflinespacing(1.5)
//WVW_SetCodePage(,250)
//WVW_SetDefLSPACECOLOR(m_color[15])
//hb_setcodepage("PT850")
//wvw_SetFont(,'Ms Sans Serif' , 16, 8, FW_MEDIUM, DEFAULT_QUALITY )
//wvw_cbsetfont(, 'Fontes Pequenas', 8, 6 )
//wvw_pbsetfont(, 'Ms Sans Serif', 9, 4 )
wvw_SetPaintRefresh(0)
IF FILE("hti.ico")
        wvw_seticon( , "hti.ico" )
ELSE
        wvw_seticon( , "HTI.ico" )
ENDIF
SET EVENTMASK TO 159
SET CONS OFF
SET WRAP ON
SET DATE BRITI
SET DELE ON
SET EPOCH TO 1950
mdata_sis := DATE()
//ATENCAO(SUBSTR(m_cfg[4],1,AT(':',m_cfg[4])-1))
//fecha_tela()
i:=1
SETMODE(50,120)
IF ! FILE('saccfg.ini')
        mArq        := fcreate("saccfg.ini" )
        sLinhas := '001 C Estacao               ='+NETNAME()                    +m_qp+ ;
                   '002 C Tipo de Terminal      =S'                             +m_qp+ ;
                   '003 C md5                   = '                             +m_qp+ ;
                   '004 C Caminho Banco Dados   =localhost:C:\SIAC\SISCOM.GDB'  +m_qp+ ;
                   '005 C Versao do Sistema     ='+mversao                      +m_qp+ ;
                   '006 C Tipo de Tela          ='                              +m_qp+ ;
                   '007 C Codigo da Empresa     ='
        fwrite( mArq, @sLinhas, len( sLinhas ) )
        FCLOSE(mArq)
        lin := MEMOLINE(MEMOREAD('saccfg.ini'),110,1,,)
        linhas := linha := 0
        linhas := MLCOUNT(MEMOREAD('saccfg.ini'),110)
        m_cfg := {}
        FOR linha = 1 TO  linhas
                lin := MEMOLINE(MEMOREAD('saccfg.ini'),110,linha,,)
                IF SUBSTR(lin,5,1) = 'C'
                        AADD(m_cfg,ALLTRIM(SUBSTR(lin,30)))
                ELSE
                        AADD(m_cfg,VAL(SUBSTR(lin,30)))
                ENDIF
        NEXT
        fclose('saccfg.ini')
        saccfg('1')
ENDIF
lin := MEMOLINE(MEMOREAD('saccfg.ini'),110,1,,)
linhas := linha := 0
linhas := MLCOUNT(MEMOREAD('saccfg.ini'),110)
m_cfg := {}
FOR linha = 1 TO  linhas
        lin := MEMOLINE(MEMOREAD('saccfg.ini'),110,linha,,)
        IF SUBSTR(lin,5,1) = 'C'
                AADD(m_cfg,ALLTRIM(SUBSTR(lin,30)))
        ELSE
                AADD(m_cfg,VAL(ALLTRIM(SUBSTR(lin,30))))
        ENDIF
NEXT
fclose('saccfg.ini')
IF LEN(m_cfg) < 7
        mArq        := FCREATE('saccfg.ini')
        sLinhas     := '001 C Estacao               ='+m_cfg[1]+m_qp
        sLinhas     := sLinhas + '002 C Tipo de Terminal      ='+m_cfg[2]+m_qp
        sLinhas     := sLinhas + '003 C md5                   =7d539b303a4e568e4877cda1e4feadf9'+m_qp
        sLinhas     := sLinhas + '004 C Caminho Banco Dados   ='+m_cfg[4]+m_qp
        sLinhas     := sLinhas + '005 C Versao do Sistema     ='+mversao+m_qp
        sLinhas     := sLinhas + '006 C Tipo de Tela          ='+m_qp
        sLinhas     := sLinhas + '007 C Codigo da Empresa     ='
        FWRITE( mArq, @sLinhas, LEN( sLinhas ) )
        FCLOSE(mArq)
        lin := MEMOLINE(MEMOREAD('saccfg.ini'),110,1,,)
        linhas := linha := 0
        linhas := MLCOUNT(MEMOREAD('saccfg.ini'),110)
        m_cfg := {}
        FOR linha = 1 TO  linhas
                lin := MEMOLINE(MEMOREAD('saccfg.ini'),110,linha,,)
                IF SUBSTR(lin,5,1) = 'C'
                        AADD(m_cfg,ALLTRIM(SUBSTR(lin,30)))
                ELSE
                        AADD(m_cfg,VAL(ALLTRIM(SUBSTR(lin,30))))
                ENDIF
        NEXT
ENDIF

IF EMPTY(m_cfg[6])
        //WVW_SetFont(,'Ms Sans Serif',12,,FW_BOLD, PROOF_QUALITY )  // 800X600
        WVW_SetFont(,'lucida console',12,,FW_BOLD)  // 800X600
        //WVW_SetFont(,'lucida console',12,,FW_BOLD, PROOF_QUALITY )  // 800X600
        //WVW_SetFont(,'lucida console',12, 11,FW_BOLD, PROOF_QUALITY )  // 800X600
ELSE
        WVW_SetFont(,'lucida console',12, 7,FW_BOLD, PROOF_QUALITY )  // 800X600
ENDIF

//op_tela(10,10,40,100,memp_resa+SPACE(20)+'.: SISCOM '+mversao+' :.'+SPACE(20)+'Data:'+DTOC(mdata_sis)+' - '+ver_dia(mdata_sis))
//op_tela(00,00,50,120,memp_resa+SPACE(20)+'.: SISCOM '+mversao+' :.'+SPACE(20)+'Data:'+DTOC(mdata_sis)+' - '+ver_dia(mdata_sis))
//mnum_principal := 0
//mnum_principal := wvw_nopenwindow('',00,00,50,120)
//wvw_noclose()
wvw_maximize(1)
WVW_CenterWindow(,.T.,.T.)
ncnn := 0
//mcor := SETCOLOR('b/w+,B/w,,,GR+/B')
//MYRUN ("openssl genrsa -out chave.pem 1024") // GERA CHAVE PRIVADA
//MYRUN("openssl.exe rsa -in chave.pem -modulus -out modulo.txt")   // GERA MODULO DA CHAVE PRIVADA
//atencao(GetIp())
//MYRUN("Dir c:\*.XML /S /B /OD > Result.Tmp")
//ATENCAO(criptografia('HELIO Beltr?o JR.','C')+' - '+criptografia(criptografia('HELIO Beltr?o JR.','C'),'D'))
/*
IF ! FILE('saccfg.ini')
        mArq        := fcreate("saccfg.ini" )
        sLinhas := '001 C Estacao               ='+NETNAME()                    +m_qp+ ;
                   '002 C Tipo de Terminal      =S'                             +m_qp+ ;
                   '003 C md5                   = '                             +m_qp+ ;
                   '004 C Caminho Banco Dados   =localhost:C:\SIAC\SISCOM.GDB'  +m_qp+ ;
                   '005 C Versao do Sistema     ='+mversao                      +m_qp+ ;
                   '006 C                       ='
        fwrite( mArq, @sLinhas, len( sLinhas ) )
        FCLOSE(mArq)
        lin := MEMOLINE(MEMOREAD('saccfg.ini'),110,1,,)
        linhas := linha := 0
        linhas := MLCOUNT(MEMOREAD('saccfg.ini'),110)
        m_cfg := {}
        FOR linha = 1 TO  linhas
                lin := MEMOLINE(MEMOREAD('saccfg.ini'),110,linha,,)
                IF SUBSTR(lin,5,1) = 'C'
                        AADD(m_cfg,ALLTRIM(SUBSTR(lin,30)))
                ELSE
                        AADD(m_cfg,VAL(SUBSTR(lin,30)))
                ENDIF
        NEXT
        fclose('saccfg.ini')
        saccfg('1')
ENDIF
lin := MEMOLINE(MEMOREAD('saccfg.ini'),110,1,,)
linhas := linha := 0
linhas := MLCOUNT(MEMOREAD('saccfg.ini'),110)
m_cfg := {}
FOR linha = 1 TO  linhas
        lin := MEMOLINE(MEMOREAD('saccfg.ini'),110,linha,,)
        IF SUBSTR(lin,5,1) = 'C'
                AADD(m_cfg,ALLTRIM(SUBSTR(lin,30)))
        ELSE
                AADD(m_cfg,VAL(ALLTRIM(SUBSTR(lin,30))))
        ENDIF
NEXT
fclose('saccfg.ini')
*/
IF LEN(m_cfg) = 0
        atencao('Favor verificar o arquivo SACCFG.INI ou entrar em contato com a HTI Sistemas...' )
        RETURN NIL
ENDIF
IF ! FILE('SACBKP.INI')
	sacbkp('1')
ENDIF
IF mtc = 'REMOTO'
        IF FILE('AA_v3.exe')
                MYRUN2('AA_v3.exe')
        ELSEIF FILE('show.exe')
                MYRUN2('show.exe')
        ELSE
                atencao('Nao foi possivel encontrar o programa especifico, favor entrar em contato com a HTI Sistemas (81)'+mfone_HTI+' ou baixa o aplicativo pelo site: www.htisistemas.com')
        ENDIF
        QUIT
ENDIF
IF mtc = 'BACKUP'
	WVW_SetMousePos(,00,00)
	op_tela(10,05,24,120,'PROCESSO DE BACKUP',,1)
	setcor(1)
	limpa(00,00,30,200)
	m_bkp := {}
	lin := MEMOLINE(MEMOREAD('SACBKP.INI'),210,1,,)
	linhas := linha := 0
	linhas := MLCOUNT(MEMOREAD('SACBKP.INI'),210)
	FOR linha = 1 TO  linhas
	        lin := MEMOLINE(MEMOREAD('SACBKP.INI'),210,linha,,)
	        IF SUBSTR(lin,5,1) = 'C'
	                AADD(m_bkp,ALLTRIM(SUBSTR(lin,30))+' ')
	        ELSE
	                AADD(m_bkp,VAL(SUBSTR(lin,30)))
	        ENDIF
	NEXT
	fclose('sacbkp.ini')
	IF LEN(m_bkp) > 0
		**** ROTINA PARA BACKUP *****************
		IF EMPTY(m_bkp[1]) .OR. EMPTY(m_bkp[2]) .OR. EMPTY(m_bkp[3]) .OR. EMPTY(m_bkp[4]) .OR. EMPTY(m_bkp[5]) 
			atencao('O BACKUP nao estar configurado...')
                        QUIT
		ENDIF
		mnome_arq := ALLTRIM(m_bkp[2])+IF(m_bkp[1]='1','.ARJ','.RAR')
                WHILE SR_PhFile((mnome_arq))
                        IF ferase(mnome_arq) = -1
                                IF 'N' = op_simnao('S',' Nao foi possivel apagar o arquivo: '+mnome_arq+' Deseja continuar tentando:')
                                        atencao('Nao foi feito o BACKUP....')
                                	QUIT
                                ENDIF
                        ENDIF
                ENDDO
		xcop := IF(m_bkp[1]='1','ARJ','RAR')+' A '+mnome_arq+' '+m_bkp[3]
		DEVPOS(00,01);DEVOUT('Aguarde um momento compactanto os Arquivo(s): '+m_bkp[2])
		setcor(31)
		DEVPOS(ROW()+1,01);DEVOUT('COMANDO: '+xcop)
		setcor(1)
                //atencao('Aguarde o final do Compactacao.....')
                MYRUN(xcop)
		xcop := 'COPY '+mnome_arq+' '+ALLTRIM(m_bkp[4])+SUBSTR(DTOC(DATE()),1,2)+SUBSTR(DTOC(DATE()),4,2)+SUBSTR(DTOC(DATE()),7,2)+IF(m_bkp[1]='1','.ARJ','.RAR')
		DEVPOS(ROW()+1,01);DEVOUT('Aguarde um momento COPIANDO o Arquivo para: '+m_bkp[4])
		setcor(31)
		DEVPOS(ROW()+1,01);DEVOUT('COMANDO: '+xcop)
		setcor(1)
		MYRUN(xcop)
		IF m_bkp[5] > 0
			m_aux := DIRECTORY(ALLTRIM(m_bkp[4])+'*'+IF(m_bkp[1]='1','.ARJ','.RAR'),'D')
			d := 0
			FOR d = 1 TO LEN(m_aux)
				IF (DATE() - m_bkp[5]) > CTOD(SUBSTR(m_aux[d,1],1,2)+'/'+SUBSTR(m_aux[d,1],3,2)+'/'+SUBSTR(m_aux[d,1],5,2))
					xcop := 'DEL '+ALLTRIM(m_bkp[4])+m_aux[d,1]
					MYRUN(xcop)
				ENDIF
			NEXT
		ENDIF
		IF ! EMPTY(m_bkp[6])
			xcop := 'COPY '+mnome_arq+' '+ALLTRIM(m_bkp[6])+SUBSTR(DTOC(DATE()),1,2)+SUBSTR(DTOC(DATE()),4,2)+SUBSTR(DTOC(DATE()),7,2)+IF(m_bkp[1]='1','.ARJ','.RAR')
			DEVPOS(ROW()+1,01);DEVOUT('Aguarde um momento COPIANDO o Arquivo para: '+m_bkp[6]+SPACE(30))
			setcor(31)
			DEVPOS(ROW()+1,01);DEVOUT('COMANDO: '+xcop)
			setcor(1)
			MYRUN(xcop)
			IF m_bkp[7] > 0
				m_aux := DIRECTORY(ALLTRIM(m_bkp[6])+'*'+IF(m_bkp[1]='1','.ARJ','.RAR'),'D')
				d := 0
				FOR d = 1 TO LEN(m_aux)
					IF DATE() - m_bkp[7] > CTOD(SUBSTR(m_aux[d,1],1,2)+'/'+SUBSTR(m_aux[d,1],3,2)+'/'+SUBSTR(m_aux[d,1],5,2))
						xcop := 'DEL '+ALLTRIM(m_bkp[6])+m_aux[d,1]
						MYRUN(xcop)
					ENDIF
				NEXT
			ENDIF
		ENDIF
		IF ! EMPTY(m_bkp[8])
			xcop := 'COPY '+mnome_arq+' '+ALLTRIM(m_bkp[8])+SUBSTR(DTOC(DATE()),1,2)+SUBSTR(DTOC(DATE()),4,2)+SUBSTR(DTOC(DATE()),7,2)+IF(m_bkp[1]='1','.ARJ','.RAR')
			DEVPOS(ROW()+1,01);DEVOUT('Aguarde um momento COPIANDO o Arquivo para: '+m_bkp[8]+SPACE(30))
			setcor(31)
			DEVPOS(ROW()+1,01);DEVOUT('COMANDO: '+xcop)
			setcor(1)
			MYRUN(xcop)
			IF m_bkp[9] > 0
				m_aux := DIRECTORY(ALLTRIM(m_bkp[8])+'*'+IF(m_bkp[1]='1','.ARJ','.RAR'),'D')
				d := 0
				FOR d = 1 TO LEN(m_aux)
					IF DATE() - m_bkp[9] > CTOD(SUBSTR(m_aux[d,1],1,2)+'/'+SUBSTR(m_aux[d,1],3,2)+'/'+SUBSTR(m_aux[d,1],5,2))
						xcop := 'DEL '+ALLTRIM(m_bkp[8])+m_aux[d,1]
						MYRUN(xcop)
					ENDIF
				NEXT
			ENDIF
		ENDIF
		IF ! EMPTY(m_bkp[10])
			xcop := 'COPY '+mnome_arq+' '+ALLTRIM(m_bkp[10])+SUBSTR(DTOC(DATE()),1,2)+SUBSTR(DTOC(DATE()),4,2)+SUBSTR(DTOC(DATE()),7,2)+IF(m_bkp[1]='1','.ARJ','.RAR')
			DEVPOS(ROW()+1,01);DEVOUT('Aguarde um momento COPIANDO o Arquivo para: '+m_bkp[10]+SPACE(30))
			setcor(31)
			DEVPOS(ROW()+1,01);DEVOUT('COMANDO: '+xcop)
			setcor(1)
			MYRUN(xcop)
			IF m_bkp[11] > 0
				m_aux := DIRECTORY(ALLTRIM(m_bkp[10])+'*'+IF(m_bkp[1]='1','.ARJ','.RAR'),'D')
				d := 0
				FOR d = 1 TO LEN(m_aux)
					IF DATE() - m_bkp[11] > CTOD(SUBSTR(m_aux[d,1],1,2)+'/'+SUBSTR(m_aux[d,1],3,2)+'/'+SUBSTR(m_aux[d,1],5,2))
						xcop := 'DEL '+ALLTRIM(m_bkp[10])+m_aux[d,1]
						MYRUN(xcop)
					ENDIF
				NEXT
			ENDIF
		ENDIF
		IF ! EMPTY(m_bkp[12])
			xcop := 'COPY '+mnome_arq+' '+ALLTRIM(m_bkp[12])+SUBSTR(DTOC(DATE()),1,2)+SUBSTR(DTOC(DATE()),4,2)+SUBSTR(DTOC(DATE()),7,2)+IF(m_bkp[1]='1','.ARJ','.RAR')
			DEVPOS(ROW()+1,01);DEVOUT('Aguarde um momento COPIANDO o Arquivo para: '+m_bkp[12]+SPACE(30))
			setcor(31)
			DEVPOS(ROW()+1,01);DEVOUT('COMANDO: '+xcop)
			setcor(1)
			MYRUN(xcop)
			IF m_bkp[13] > 0
				m_aux := DIRECTORY(ALLTRIM(m_bkp[12])+'*'+IF(m_bkp[1]='1','.ARJ','.RAR'),'D')
				d := 0
				FOR d = 1 TO LEN(m_aux)
					IF DATE() - m_bkp[13] > CTOD(SUBSTR(m_aux[d,1],1,2)+'/'+SUBSTR(m_aux[d,1],3,2)+'/'+SUBSTR(m_aux[d,1],5,2))
						xcop := 'DEL '+ALLTRIM(m_bkp[12])+m_aux[d,1]
						MYRUN(xcop)
					ENDIF
				NEXT
			ENDIF
		ENDIF
		IF ! EMPTY(m_bkp[14])
			xcop := 'COPY '+mnome_arq+' '+ALLTRIM(m_bkp[14])+SUBSTR(DTOC(DATE()),1,2)+SUBSTR(DTOC(DATE()),4,2)+SUBSTR(DTOC(DATE()),7,2)+IF(m_bkp[1]='1','.ARJ','.RAR')
			DEVPOS(ROW()+1,01);DEVOUT('Aguarde um momento COPIANDO o Arquivo para: '+m_bkp[14]+SPACE(30))
			setcor(31)
			DEVPOS(ROW()+1,01);DEVOUT('COMANDO: '+xcop)
			setcor(1)
			MYRUN(xcop)
			IF m_bkp[15] > 0
				m_aux := DIRECTORY(ALLTRIM(m_bkp[14])+'*'+IF(m_bkp[1]='1','.ARJ','.RAR'),'D')
				d := 0
				FOR d = 1 TO LEN(m_aux)
					IF DATE() - m_bkp[15] > CTOD(SUBSTR(m_aux[d,1],1,2)+'/'+SUBSTR(m_aux[d,1],3,2)+'/'+SUBSTR(m_aux[d,1],5,2))
						xcop := 'DEL '+ALLTRIM(m_bkp[14])+m_aux[d,1]
						MYRUN(xcop)
					ENDIF
				NEXT
			ENDIF
		ENDIF
		***************************************
		DEVPOS(ROW()+1,01);DEVOUT('F I N A L   D O   B A C K U P ...')
		WVW_SetMouseMove(,.T.)
		INKEY(5)
	ELSE
		atencao('O BACKUP nao estar configurado...')
	ENDIF	        	
	QUIT
ENDIF
op_tela(10,10,13,100,'TENTANDO CONEXAO COM O BANCO DE DADOS')
DEVPOS(00,01);DEVOUT('Tentando CONEXAO com o 1o. BANCO DE DADOS')
DEVPOS(01,01);DEVOUT('Caminho: ['+ALLTRIM(m_cfg[4])+'], Aguarde um Momento......')
IF m_cfg[2] = 'S' .AND. ! File('siscom.gdb')
//atencao('16384')
        IF SQL_SUCCESS = FBCreateDB( 'SISCOM.GDB','SYSDBA','masterkey',300, 'ISO8859_1')
                atencao('Banco Criado com SUCESSO')
                m_line := 'ON'
                RDDSETDEFAULT('SQLRDD')
                SR_SetMultiLang( .t. )
                SR_SetBaseLang( LANG_PT_BR )
                nCnn := SR_AddConnection(CONNECT_FIREBIRD,'FIREBIRD='+ALLTRIM(m_cfg[4])+';uid=SYSDBA;pwd=masterkey;charset=ISO8859_1')
                If nCnn < 0
                        atencao("Nao foi possivel conectar ao BANCO DE DADOS. Verificar o Caminho do Banco de Dados no SACCFG.INI ["+ALLTRIM(m_cfg[4])+"] ou se o FIREBIRD estar Instalado, Caso nao tenha sucesso contactar com o Administrador da REDE")
                        Quit
                EndIf
                sacsql()
        ENDIF
ENDIF
RDDSETDEFAULT('SQLRDD')
SR_SetMultiLang( .t. )
SR_SetBaseLang( LANG_PT_BR )
********** CONECTANDO AO FIREBIRD *************************************************
IF LEN(m_cfg) > 10
        DEVPOS(00,01);DEVOUT('Tentando CONEXAO com o 1o. BANCO DE DADOS')
        DEVPOS(01,01);DEVOUT('Caminho: ['+ALLTRIM(m_cfg[84])+'], Aguarde um Momento......')
        nCnn := SR_AddConnection(CONNECT_FIREBIRD,'FIREBIRD='+ALLTRIM(m_cfg[84])+';uid=SYSDBA;pwd=masterkey;charset=ISO8859_1')
        If nCnn < 0
                atencao("Nao foi possivel conectar ao BANCO DE DADOS. Verificar o Caminho do Banco de Dados no SACCFG.INI ["+ALLTRIM(m_cfg[84])+"] ou se o FIREBIRD estar Instalado, Caso nao tenha sucesso contactar com o Administrador da REDE")
                Quit
        EndIf
        IF m_cfg[2] = 'S'
                m_set:={}
                sr_getconnection():exec("SELECT * FROM sacsetup",,.t.,@m_set)
                //
                aStruct := set->(DBSTRUCT())
                set->(DBCLOSEAREA())
                DBCLOSEALL()

                //atencao(aStruct[1,1]+' - '+aStruct[1,2]+' - '+STR(aStruct[1,3],2))

                SET DEVI TO PRINT;SET PRINT ON
                SET PRINT TO ('sacsetup.ini')
                DEVPOS(PROW(),00);DEVOUT('ESTRUTURA DO ARQUIVO SACSETUP')
                i:=0
                FOR i = 1 TO LEN(aStruct)
                        DEVPOS(PROW()+1,00);DEVOUT(STRZERO(i,3)+'> '+aStruct[i,1]+' - '+aStruct[i,2]+' - '+STR(aStruct[i,3],2))
                        IF aStruct[i,2]='D'
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(' = '+DTOC(m_set[1,i]))
                        ELSEIF aStruct[i,2]='N'
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(' = '+TRANSFORM(m_set[1,i],'999,999,999.99'))
                        ELSE
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(' = '+m_set[1,i])
                        ENDIF
                NEXT
                SET PRINT TO;SET PRINT OFF;SET DEVI TO SCREEN
                FCLOSE('sacsetup.ini')
                atencao('Favor apagar a tabela SACSETUP...')
                /*
                mensagem('Tentando apagar a tabela SACSETUP....')
                WHILE .T.
                        IF SR_DropTable('sacsetup')
                                atencao('A tabela SACSETUP foi apagada com sucesso...')
                                mensagem('')
                                EXIT
                        ENDIF
                ENDDO
                */
                sacsql()
        ENDIF
        m_indiv:={}
        sr_getconnection():exec("SELECT * FROM sacindiv WHERE terminal = "+sr_cdbvalue(SUBSTR(m_cfg[81],1,20)),,.t.,@m_indiv)
        IF LEN(m_indiv) = 0
                mcampo_ped :='terminal  ,';//1
                +'md5       ,';//2
                +'cam_geral ,';//3
                +'cam_pocket,';//4
                +'cam_dosprt,';//5
                +'cam_cfg   ,';//6
                +'prt_ped1  ,';//7
                +'prt_ped2  ,';//8
                +'form_ped  ,';//9
                +'tp_impped ,';//10
                +'qtd_cop_pd,';//11
                +'prt_orc1  ,';//12
                +'prt_orc2  ,';//13
                +'form_orc  ,';//14
                +'qtd_cop_or,';//15
                +'qtd_lin_av,';//16
                +'prt_rel   ,';//17
                +'tp_imprel ,';//18
                +'nfe_n_c   ,';//19
                +'prt_dup   ,';//20
                +'tp_impdup ,';//21
                +'qtd_cp_dup,';//22
                +'prt_nf    ,';//23
                +'prt_bole  ,';//24
                +'tp_impbol ,';//25
                +'autocaixa ,';//26
                +'form_os   ,';//27
                +'cam_ft_cli,';//28
                +'cam_ft_pro,';//29
                +'cam_ft_ani,';//30
                +'cam_ft_usu,';//31
                +'cam_ft_rac,';//32
                +'hiper_req ,';//33
                +'hiper_resp,';//34
                +'dial_req  ,';//35
                +'dial_resp ,';//36
                +'cam_acbr  ,';//37
                +'cam_reme  ,';//38
                +'cam_boleto,';//39
                +'cam_nfe   ,';//40
                +'gerenciado,';//41
                +'ip_acbr   ,';//42
                +'ip_acbrnfe' //43
                cComm  := 'INSERT INTO sacindiv ('+mcampo_ped+',sr_deleted) VALUES ('
                cComm  := ccomm + sr_cdbvalue(SUBSTR(NETNAME(),1,20))+','+; //1
                sr_cdbvalue(m_cfg[3])+','+;//2
                sr_cdbvalue(m_cfg[5])+','+;//3
                sr_cdbvalue(m_cfg[6])+','+;//4
                sr_cdbvalue(m_cfg[12])+','+;//5
                sr_cdbvalue(m_cfg[11])+','+;//6
                sr_cdbvalue(m_cfg[20])+','+;//7
                sr_cdbvalue(m_cfg[21])+','+;//8
                sr_cdbvalue(m_cfg[24])+','+;//9
                sr_cdbvalue(m_cfg[28])+','+;//10
                sr_cdbvalue(m_cfg[30])+','+;//11
                sr_cdbvalue(m_cfg[22])+','+;//12
                sr_cdbvalue(m_cfg[23])+','+;//13
                sr_cdbvalue(m_cfg[25])+','+;//14
                sr_cdbvalue(m_cfg[31])+','+;//15
                sr_cdbvalue(m_cfg[29])+','+;//16
                sr_cdbvalue(m_cfg[32])+','+;//17
                sr_cdbvalue(m_cfg[34])+','+;//18
                sr_cdbvalue(m_cfg[93])+','+;//19
                sr_cdbvalue(m_cfg[35])+','+;//20
                sr_cdbvalue(m_cfg[36])+','+;//21
                sr_cdbvalue(m_cfg[39])+','+;//22
                sr_cdbvalue(m_cfg[40])+','+;//23
                sr_cdbvalue(m_cfg[41])+','+;//24
                sr_cdbvalue(m_cfg[42])+','+;//25
                sr_cdbvalue(m_cfg[47])+','+;//26
                sr_cdbvalue(m_cfg[57])+','+;//27
                sr_cdbvalue(m_cfg[60])+','+;//28
                sr_cdbvalue(m_cfg[61])+','+;//29
                sr_cdbvalue(m_cfg[62])+','+;//30
                sr_cdbvalue(m_cfg[63])+','+;//31
                sr_cdbvalue(m_cfg[64])+','+;//32
                sr_cdbvalue(m_cfg[68])+','+;//33
                sr_cdbvalue(m_cfg[69])+','+;//34
                sr_cdbvalue(m_cfg[73])+','+;//35
                sr_cdbvalue(m_cfg[74])+','+;//36
                sr_cdbvalue(m_cfg[76])+','+;//37
                sr_cdbvalue(m_cfg[77])+','+;//38
                sr_cdbvalue(m_cfg[78])+','+;//39
                sr_cdbvalue(m_cfg[96])+','+;//40
                sr_cdbvalue(m_cfg[87])+','+;//41
                sr_cdbvalue(m_cfg[90])+','+;//42
                sr_cdbvalue(m_cfg[91])+','+;//43
                sr_cdbvalue(' ')+')'
                sr_getconnection():exec(ccomm,,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                IF m_cfg[2] = 'S'
                        //sr_getconnection():exec('INSERT INTO sacsetup (SR_DELETED) VALUES ('+sr_cdbvalue(' ')+')',,.f.)
                        mcampo_ped := +'ver         ,';//1
                        +'pis         ,';//2
                        +'confis      ,';//3
                        +'imposto     ,';//4
                        +'varejo      ,';//5
                        +'fatura      ,';//6
                        +'vlr_ent     ,';//7
                        +'SEF         ,';//8
                        +'ped_obs     ,';//9
                        +'ven_cli     ,';//10
                        +'pagina      ,';//11
                        +'percent     ,';//12
                        +'PEDIMPCX    ,';//13
                        +'nfe_ean     ,';//14
                        +'nota        ,';//15
                        +'saldonf     ,';//16
                        +'cli_fecha   ,';//17
                        +'nomenf      ,';//18
                        +'uf          ,';//19
                        +'icm         ,';//20
                        +'tp_comi     ,';//21
                        +'cabecalho   ,';//22
                        +'cab_ped     ,';//23
                        +'cab_orc     ,';//24
                        +'rodap1      ,';//25
                        +'rodap2      ,';//26
                        +'rodap3      ,';//27
                        +'rodap4      ,';//28
                        +'acord1      ,';//29
                        +'acord2      ,';//30
                        +'acord3      ,';//31
                        +'acord4      ,';//32
                        +'desc_max    ,';//33
                        +'item_max    ,';//34
                        +'desc_apr    ,';//35
                        +'desc_ped    ,';//36
                        +'usa_carro   ,';//37
                        +'blo_vend    ,';//38
                        +'dado_cli    ,';//39
                        +'nome_fan    ,';//40
                        +'consulta    ,';//41
                        +'uti_os      ,';//42
                        +'desc_pdv    ,';//43
                        +'tp_mascara  ,';//44
                        +'duplicata   ,';//45
                        +'przantped   ,';//46
                        +'dup_imp     ,';//47
                        +'RECBXDUP    ,';//48
                        +'intervalo   ,';//49
                        +'multa_dup   ,';//50
                        +'juros_dup   ,';//51
                        +'roda_dup1   ,';//52
                        +'roda_dup2   ,';//53
                        +'ceden_bol   ,';//54
                        +'local_bol   ,';//55
                        +'mens_bol1   ,';//56
                        +'mens_bol2   ,';//57
                        +'mens_bol3   ,';//58
                        +'mens_bol4   ,';//59
                        +'mens_bol5   ,';//60
                        +'fecha_cx    ,';//61
                        +'carnes      ,';//62
                        +'despesa     ,';//63
                        +'via_desp    ,';//64
                        +'vales       ,';//65
                        +'via_vales   ,';//66
                        +'deposito    ,';//67
                        +'via_dep     ,';//68
                        +'UTI_TELE    ,';//69
                        +'NFE_R_P     ,';//70+'obs_os1     ,';//29+'obs_os2     ,';//30+'obs_os3     ,';//31+'obs_os4     ,';//32+'obs_os5     ,';//33+'ped_email   ,';//34+'cx_email    ,';//35
                        +'rec_parc    ,';//71
                        +'tp_lucro    ,';//72
                        +'senha_pd    ,';//73
                        +'nome_ven    ,';//74
                        +'sysdatlm    ,';//75
                        +'receber     ,';//76
                        +'cli_def     ,';//77
                        +'qtdchcli    ,';//78
                        +'caixa       ,';//79
                        +'embalag     ,';//80
                        +'loc_emb     ,';//81
                        +'port_emb    ,';//82
                        +'tipfrmemb   ,';//83
                        +'NFE_P_H     ,';//84
                        +'seculo      ,';//85
                        +'situacao    ,';//86
                        +'desc_cax    ,';//87
                        +'nfe_modo    ,';//88
                        +'unidade     ,';//89
                        +'masc_num    ,';//90
                        +'masc_numt   ,';//91
                        +'masc_qtd    ,';//92
                        +'cli_ped     ,';//93
                        +'rotina      ,';//94
                        +'usa_dolar   ,';//95+'aredonda    ,';//18
                        +'dupl_prod   ,';//96
                        +'ecf         ,';//97
                        +'dia_venc    ,';//98
                        +'saldo_meno  ,';//99
                        +'inf_ven     ,';//100
                        +'PergImpPed  ,';//101
                        +'impslddev   ,';//102
                        +'aut_ped     ,';//103
                        +'altcodpr    ,';//104
                        +'desc_com    ,';//105
                        +'tole_com    ,';//106
                        +'info_com    ,';//107
                        +'d_comtele   ,';//108
                        +'bloqnnf     ,';//109
                        +'desc_dupr   ,';//110
                        +'cli_cx      ,';//111
                        +'nao_exp     ,';//112
                        +'sim_exp     ,';//113
                        +'prz_rec     ,';//114
                        +'serie       ,';//115
                        +'codemp      ,';//116
                        +'desc_prod   ,';//117+'simp_nac    ,';//41
                        +'md5_ini     ,';//118
                        +'insc        ,';//119
                        +'razao       ,';//120
                        +'fantasia    ,';//121
                        +'nome_cab    ,';//122
                        +'end_firma   ,';//123
                        +'bairro      ,';//124
                        +'cidade      ,';//125
                        +'cep         ,';//126
                        +'fone        ,';//127
                        +'email       ,';//128
                        +'dataini     ,';//129
                        +'logradouro  ,';//130
                        +'cont_numer  ,';//131
                        +'cont_compl  ,';//132
                        +'cont_bairr  ,';//133
                        +'cont_cep    ,';//134
                        +'contato     ,';//135
                        +'cont_tel    ,';//136
                        +'cont_cpf    ,';//137
                        +'imp_cod     ,';//138
                        +'prodepe     ,';//139
                        +'aut_dup     ,';//140
                        +'lib_pd_or   ,';//141
                        +'tip_ecf     ,';//142
                        +'INF_REPR    ,';//143
                        +'qtdmaxpr    ,';//144
                        +'vlrmaxpr    ,';//145
                        +'com_sem     ,';//146
                        +'insc_mun    ,';//147
                        +'cnae        ,';//148
                        +'tipo_cli    ,';//149
                        +'balanca     ,';//150
                        +'numero      ,';//151
                        +'complemento ,';//152
                        +'qtd_ped_exp ,';//153
                        +'qtd_item_exp,';//154
                        +'qtd_peso_exp'  //155
                        cComm  := 'INSERT INTO sacsetup ('+mcampo_ped+',sr_deleted) VALUES ('
                        cComm  := ccomm + sr_cdbvalue(m_set[1,1])+','+;//1
                        sr_cdbvalue(m_set[1,2])+','+; //2
                        sr_cdbvalue(m_set[1,3])+','+; //3
                        sr_cdbvalue(m_set[1,4])+','+; //4
                        sr_cdbvalue(m_set[1,5])+','+; //5
                        sr_cdbvalue(m_set[1,6])+','+; //6
                        sr_cdbvalue(m_set[1,7])+','+; //7
                        sr_cdbvalue(m_cfg[56])+','+;  //8
                        sr_cdbvalue(m_set[1,9])+','+; //9
                        sr_cdbvalue(m_set[1,10])+','+;//10
                        sr_cdbvalue(m_set[1,11])+','+;//11
                        sr_cdbvalue(m_set[1,12])+','+;//12
                        sr_cdbvalue(m_cfg[66])  +','+;//13
                        sr_cdbvalue(m_set[1,14])+','+;//14
                        sr_cdbvalue(m_set[1,15])+','+;//15
                        sr_cdbvalue(m_set[1,16])+','+;//16
                        sr_cdbvalue(m_cfg[46])  +','+;//17
                        sr_cdbvalue(m_set[1,18])+','+;//18
                        sr_cdbvalue(m_set[1,19])+','+;//19
                        sr_cdbvalue(m_set[1,20])+','+;//20
                        sr_cdbvalue(m_set[1,21])+','+;//21
                        sr_cdbvalue(m_set[1,22])+','+;//22
                        sr_cdbvalue(m_set[1,23])+','+;//23
                        sr_cdbvalue(m_set[1,24])+','+;//24
                        sr_cdbvalue(m_set[1,25])+','+;//25
                        sr_cdbvalue(m_set[1,26])+','+;//26
                        sr_cdbvalue(m_set[1,27])+','+;//27
                        sr_cdbvalue(m_set[1,28])+','+;//28
                        sr_cdbvalue(m_set[1,29])+','+;//29
                        sr_cdbvalue(m_set[1,30])+','+;//30
                        sr_cdbvalue(m_set[1,31])+','+;//31
                        sr_cdbvalue(m_set[1,32])+','+;//32
                        sr_cdbvalue(m_set[1,33])+','+;//33
                        sr_cdbvalue(m_set[1,34])+','+;//34
                        sr_cdbvalue(m_set[1,35])+','+;//35
                        sr_cdbvalue(m_set[1,36])+','+;//36
                        sr_cdbvalue(m_set[1,37])+','+;//37
                        sr_cdbvalue(m_set[1,38])+','+;//38
                        sr_cdbvalue(m_set[1,39])+','+;//39
                        sr_cdbvalue(m_set[1,40])+','+;//40
                        sr_cdbvalue(m_set[1,41])+','+;//41
                        sr_cdbvalue(m_cfg[16])+','  +;//42
                        sr_cdbvalue(m_cfg[19])+','  +;//43
                        sr_cdbvalue(m_cfg[26])+','  +;//44
                        sr_cdbvalue(m_set[1,45])+','+;//45
                        sr_cdbvalue(m_cfg[48])+','  +;//46
                        sr_cdbvalue(m_set[1,47])+','+;//47
                        sr_cdbvalue(m_cfg[50])+','  +;//48
                        sr_cdbvalue(m_set[1,49])+','+;//49
                        sr_cdbvalue(m_set[1,50])+','+;//50
                        sr_cdbvalue(m_set[1,51])+','+;//51
                        sr_cdbvalue(m_set[1,52])+','+;//52
                        sr_cdbvalue(m_set[1,53])+','+;//53
                        sr_cdbvalue(m_set[1,54])+','+;//54
                        sr_cdbvalue(m_set[1,55])+','+;//55
                        sr_cdbvalue(m_set[1,56])+','+;//56
                        sr_cdbvalue(m_set[1,57])+','+;//57
                        sr_cdbvalue(m_set[1,58])+','+;//58
                        sr_cdbvalue(m_set[1,59])+','+;//59
                        sr_cdbvalue(m_set[1,60])+','+;//60
                        sr_cdbvalue(m_set[1,61])+','+;//61
                        sr_cdbvalue(m_set[1,62])+','+;//62
                        sr_cdbvalue(m_set[1,63])+','+;//63
                        sr_cdbvalue(m_set[1,64])+','+;//64
                        sr_cdbvalue(m_set[1,65])+','+;//65
                        sr_cdbvalue(m_set[1,66])+','+;//66
                        sr_cdbvalue(m_set[1,67])+','+;//67
                        sr_cdbvalue(m_set[1,68])+','+;//68
                        sr_cdbvalue(m_cfg[51])+','  +;//69
                        sr_cdbvalue(m_cfg[93])+','  +;//70
                        sr_cdbvalue(SUBSTR(m_cfg[8],1,1))+','   +;//71
                        sr_cdbvalue(m_set[1,79])+','+;//72
                        sr_cdbvalue(m_set[1,80])+','+;//73
                        sr_cdbvalue(m_set[1,81])+','+;//74
                        sr_cdbvalue(m_set[1,82])+','+;//75
                        sr_cdbvalue(m_set[1,83])+','+;//76
                        sr_cdbvalue(m_set[1,84])+','+;//77
                        sr_cdbvalue(m_set[1,85])+','+;//78
                        sr_cdbvalue(m_set[1,86])+','+;//79
                        sr_cdbvalue(m_set[1,87])+','+;//80
                        sr_cdbvalue(m_set[1,88])+','+;//81
                        sr_cdbvalue(m_cfg[94])+','  +;//82
                        sr_cdbvalue(m_set[1,90])+','+;//83
                        sr_cdbvalue(m_cfg[95])+','  +;//84
                        sr_cdbvalue(m_set[1,92])+','+;//85
                        sr_cdbvalue(m_set[1,93])+','+;//86
                        sr_cdbvalue(m_cfg[49])+','  +;//87
                        sr_cdbvalue('1')+','        +;//88
                        sr_cdbvalue(m_set[1,96])+','+;//89
                        sr_cdbvalue(m_set[1,97])+','+;//90
                        sr_cdbvalue(m_set[1,98])+','+;//91
                        sr_cdbvalue(m_set[1,99])+','+;//92
                        sr_cdbvalue(m_set[1,100])+','+;//93
                        sr_cdbvalue(m_set[1,101])+','+;//94
                        sr_cdbvalue(m_set[1,102])+','+;//95+
                        sr_cdbvalue(m_set[1,104])+','+;//96
                        sr_cdbvalue(m_set[1,105])+','+;//97
                        sr_cdbvalue(m_set[1,106])+','+;//98
                        sr_cdbvalue(m_set[1,107])+','+;//99
                        sr_cdbvalue(m_set[1,108])+','+;//100
                        sr_cdbvalue(m_set[1,109])+','+;//101
                        sr_cdbvalue(m_set[1,110])+','+;//102
                        sr_cdbvalue(m_set[1,111])+','+;//103
                        sr_cdbvalue(m_set[1,112])+','+;//104
                        sr_cdbvalue(m_set[1,113])+','+;//105
                        sr_cdbvalue(m_set[1,114])+','+;//106
                        sr_cdbvalue(m_set[1,115])+','+;//107
                        sr_cdbvalue(m_set[1,116])+','+;//108
                        sr_cdbvalue(m_set[1,117])+','+;//109
                        sr_cdbvalue(m_set[1,118])+','+;//110
                        sr_cdbvalue(m_set[1,119])+','+;//111
                        sr_cdbvalue(m_set[1,120])+','+;//112
                        sr_cdbvalue(m_set[1,121])+','+;//113
                        sr_cdbvalue(m_set[1,122])+','+;//114
                        sr_cdbvalue(m_set[1,123])+','+;//115
                        sr_cdbvalue(m_set[1,124])+','+;//116
                        sr_cdbvalue(m_set[1,125])+','+;//117
                        sr_cdbvalue(m_set[1,127])+','+;//118
                        sr_cdbvalue(m_set[1,128])+','+;//119
                        sr_cdbvalue(m_set[1,129])+','+;//120
                        sr_cdbvalue(m_set[1,130])+','+;//121
                        sr_cdbvalue(m_set[1,131])+','+;//122
                        sr_cdbvalue(m_set[1,132])+','+;//123
                        sr_cdbvalue(m_set[1,133])+','+;//124
                        sr_cdbvalue(m_set[1,134])+','+;//125
                        sr_cdbvalue(m_set[1,135])+','+;//126
                        sr_cdbvalue(m_set[1,136])+','+;//127
                        sr_cdbvalue(m_set[1,137])+','+;//128
                        sr_cdbvalue(m_set[1,138])+','+;//129
                        sr_cdbvalue(m_set[1,139])+','+;//130
                        sr_cdbvalue(m_set[1,140])+','+;//131
                        sr_cdbvalue(m_set[1,141])+','+;//132
                        sr_cdbvalue(m_set[1,142])+','+;//133
                        sr_cdbvalue(m_set[1,143])+','+;//134
                        sr_cdbvalue(m_set[1,144])+','+;//135
                        sr_cdbvalue(m_set[1,145])+','+;//136
                        sr_cdbvalue(m_set[1,146])+','+;//137
                        sr_cdbvalue(m_cfg[27])+','   +;//138
                        sr_cdbvalue(m_set[1,148])+','+;//139
                        sr_cdbvalue(m_cfg[37])+','   +;//140
                        sr_cdbvalue(m_set[1,150])+','+;//141
                        sr_cdbvalue(m_set[1,151])+','+;//142
                        sr_cdbvalue(m_cfg[58])+','   +;//143
                        sr_cdbvalue(m_cfg[53])+','   +;//144
                        sr_cdbvalue(m_cfg[54])+','   +;//145
                        sr_cdbvalue(m_set[1,155])+','+;//146
                        sr_cdbvalue(m_set[1,156])+','+;//147
                        sr_cdbvalue(m_set[1,157])+','+;//148
                        sr_cdbvalue(m_set[1,158])+','+;//149
                        sr_cdbvalue(m_set[1,159])+','+;//150
                        sr_cdbvalue(m_set[1,160])+','+;//151
                        sr_cdbvalue(m_set[1,161])+','+;//152
                        sr_cdbvalue(m_set[1,162])+','+;//153
                        sr_cdbvalue(m_set[1,163])+','+;//154
                        sr_cdbvalue(m_set[1,164])+','+;//155
                        sr_cdbvalue(' ')+')'
                        sr_getconnection():exec(ccomm,,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                ENDIF
        ENDIF
        FCLOSE('saccfg.ini')
        mArq        := FCREATE('saccfg.ini')
        sLinhas     := '001 C Estacao               ='+ALLTRIM(SUBSTR(NETNAME(),1,20))+m_qp
        sLinhas     := sLinhas + '002 C Tipo de Terminal      ='+m_cfg[2]+m_qp
        sLinhas     := sLinhas + '003 C md5                   ='+m_cfg[3]+m_qp
        sLinhas     := sLinhas + '004 C Caminho Banco Dados   ='+m_cfg[84]+m_qp
        sLinhas     := sLinhas + '005 C Versao do Sistema     ='+m_cfg[100]+m_qp
        sLinhas     := sLinhas + '006 C Tipo de Tela          ='           +m_qp
        sLinhas     := sLinhas + '007 C Codigo da Empresa     ='
        FWRITE( mArq, @sLinhas, LEN( sLinhas ) )
        FCLOSE(mArq)
        lin := MEMOLINE(MEMOREAD('saccfg.ini'),110,1,,)
        linhas := linha := 0
        linhas := MLCOUNT(MEMOREAD('saccfg.ini'),110)
        m_cfg := {}
        FOR linha = 1 TO linhas
                lin := MEMOLINE(MEMOREAD('saccfg.ini'),110,linha,,)
                IF SUBSTR(lin,5,1) = 'C'
                        AADD(m_cfg,ALLTRIM(SUBSTR(lin,30)))
                ELSE
                        AADD(m_cfg,VAL(ALLTRIM(SUBSTR(lin,30))))
                ENDIF
        NEXT
        fclose('saccfg.ini')
        sac_dbf()
        QUIT
ELSE
        IF mtc <> NIL .AND. SUBSTR(mtc,1,3) = 'GDB'
                nCnn := SR_AddConnection(CONNECT_FIREBIRD,'FIREBIRD='+ALLTRIM(SUBSTR(ALLTRIM(m_cfg[4]),1,LEN(ALLTRIM(m_cfg[4]))-10)+SUBSTR(mtc,4))+';uid=SYSDBA;pwd=masterkey;charset=ISO8859_1')
                If nCnn < 0
                        atencao("Nao foi possivel conectar ao BANCO DE DADOS. Verificar o Caminho do Banco de Dados no SACCFG.INI ["+ALLTRIM(m_cfg[4])+"] ou se o FIREBIRD estar Instalado, Caso nao tenha sucesso contactar com o Administrador da REDE")
                        Quit
                EndIf
        ELSE
                nCnn := SR_AddConnection(CONNECT_FIREBIRD,'FIREBIRD='+ALLTRIM(m_cfg[4])+';uid=SYSDBA;pwd=masterkey;charset=ISO8859_1')
                If nCnn < 0
                        atencao("Nao foi possivel conectar ao BANCO DE DADOS. Verificar o Caminho do Banco de Dados no SACCFG.INI ["+ALLTRIM(m_cfg[4])+"] ou se o FIREBIRD estar Instalado, Caso nao tenha sucesso contactar com o Administrador da REDE")
                        Quit
                EndIf
                IF ! SR_EXISTTABLE('CAM_DBA')
                        sacsql()
                ENDIF
                cam_dba:={}
                sr_getconnection():exec("SELECT * FROM cam_dba",,.t.,@cam_dba)
                IF LEN(cam_dba) > 0
                        IF ! EMPTY(cam_dba[1,1])
                                nCnn1 := SR_AddConnection(CONNECT_FIREBIRD,'FIREBIRD='+ALLTRIM(cam_dba[1,1])+';uid=SYSDBA;pwd=masterkey;charset=ISO8859_1')
                                If nCnn1 < 0
                                        atencao("Nao foi possivel conectar ao 2o. BANCO DE DADOS. Verificar o Caminho do Banco de Dados no SACCFG.INI ["+ALLTRIM(m_cfg[4])+"] ou se o FIREBIRD estar Instalado, Caso nao tenha sucesso contactar com o Administrador da REDE")
                                EndIf
                        ENDIF
                        IF LEN(cam_dba) > 1
                                IF ! EMPTY(cam_dba[2,1])
                                        nCnn2 := SR_AddConnection(CONNECT_FIREBIRD,'FIREBIRD='+ALLTRIM(cam_dba[2,1])+';uid=SYSDBA;pwd=masterkey;charset=ISO8859_1')
                                        If nCnn2 < 0
                                                atencao("Nao foi possivel conectar ao 2o. BANCO DE DADOS. Verificar o Caminho do Banco de Dados no SACCFG.INI ["+ALLTRIM(m_cfg[4])+"] ou se o FIREBIRD estar Instalado, Caso nao tenha sucesso contactar com o Administrador da REDE")
                                        EndIf
                                ENDIF
                        ENDIF

                ENDIF
        ENDIF
ENDIF
SR_SetActiveConnection(nCnn)
//ATENCAO('OK')
m_line := 'ON'
*************************************************************************************
//ver_ncm('10011010','1.102')
//atencao(curdrive()+':\')
//blat()
//  MAPEAR UNIDADE E IMPRESSORAS
//NETCANCEL("H:")
//NETREDIR("H:", "\\10.1.1.126\SIAC")

//op_tela(00,00,30,100)
/*
cls
lOK1 := lOk2 := .F.
nid1 := wvw_cxcreate(,10,01,10,20,"Teste 1",,{|| Testa1() },, .F. )
nid2 := wvw_cxcreate(,12,01,12,20,"Texte 2",,{|| Testa2() },, .F. )
WVW_CXEnable( , nid1, .T. )
WVW_CXEnable( , nid2, .T. )
inkey(0)
inkey(0)
fecha_tela()
/*
op_tela(00,00,30,100)
T:=0
WHILE .T.
        botao(00,00,10,90)
        WVW_DrawLabel(,3,58,'No.Pedido: 000000',,,VERMELHO,BRANCO, 'Arial Black',35,20,,,,,)
        @ 30,00 SAY 'T: '  GET T PICT '99999'
        READ
        IF LASTKEY() = 27
                QUIT
        ENDIF  
ENDDO
wvw_lclosewindow()
*/
//pinpad(,'teste','mensagens')

wvw_lclosewindow()
IF mtc = 'SETUP'
        dbf_sql(mecf,mtipo_tela)
ELSEIF mtc = '5923'
        CLOSE ALL
        dbf2sql()
ENDIF
mensagem('Verificando o Arquivo -> MENUFOTO.DBF')
IF ! FILE('MENUFOTO.DBF')
        matriz:={ }
        AADD(matriz,{'smenu','C',40,0})
        AADD(matriz,{'snome','C',40,0})
        DBCREATE('menufoto',matriz,'DBFCDX')
ENDIF
mensagem('Verificando o Arquivo -> SACCPRES.DBF')
MYRUN('DEL saccpres.dbf')
IF ! FILE('SACCPRES.DBF')
        matriz:={ }
        AADD(matriz,{'codmerc','C',5,0})
        AADD(matriz,{'descricao','C',40,0})
        AADD(matriz,{'quantd','N',14,3})
        AADD(matriz,{'preco','N',14,3})
        AADD(matriz,{'num_ped','C',6,0})
        AADD(matriz,{'prioridade','C',1,0})
        DBCREATE('SACCPRES',matriz,'DBFCDX')
	USE 'saccpres' ALIAS 'cpres' EXCLUSIVE NEW VIA 'DBFCDX'
	INDEX ON cpres->descricao TAG descr TO ('saccpres')
ENDIF
mensagem('Verificando o Arquivo -> SACCGRU.DBF')
IF ! FILE('SACCGRU.DBF')
        matriz:={ }
        AADD(matriz,{'gru_sub','C',5,0})
        AADD(matriz,{'merc','C',40,0})
        AADD(matriz,{'data_cad','D',8,0})
        DBCREATE('SACCGRU',matriz,'DBFCDX')
	USE 'saccgru' ALIAS 'cgru' EXCLUSIVE NEW VIA 'DBFCDX'
	INDEX ON cgru->gru_sub TAG grusub TO ('saccgru')
	INDEX ON cgru->merc TAG merca TO ('saccgru')
ENDIF
IF ! FILE('COMPRAS.DBF')
        matriz:={ }
        AADD(matriz,{'cod_merc','C',5,0})
        AADD(matriz,{'merc','C',40,0})
        AADD(matriz,{'cod_barr','C',14,0})
        AADD(matriz,{'est_min','N',15,3})
        AADD(matriz,{'dat_ent','D',8,0})
        AADD(matriz,{'pr_unit','N',15,3})
        AADD(matriz,{'cust_merc','N',15,3})
        AADD(matriz,{'saldo','N',15,3})
        AADD(matriz,{'quantd1','N',15,3})
        AADD(matriz,{'quantd2','N',15,3})
        AADD(matriz,{'quantd3','N',15,3})
        AADD(matriz,{'quantd4','N',15,3})
        AADD(matriz,{'vlr1','N',15,3})
        AADD(matriz,{'vlr2','N',15,3})
        AADD(matriz,{'vlr3','N',15,3})
        AADD(matriz,{'vlr4','N',15,3})
        AADD(matriz,{'tot_qtd','N',15,3})
        AADD(matriz,{'media','N',15,3})
        AADD(matriz,{'disp','C',1,0})
        AADD(matriz,{'med_cust','N',15,3})
        AADD(matriz,{'unidade','C',3,0})
        AADD(matriz,{'ref','C',13,0})
        AADD(matriz,{'grupo_sub','C',5,0})
        AADD(matriz,{'codfab','C',4,0})
        AADD(matriz,{'fab','C',40,0})
        AADD(matriz,{'mes1','C',5,0})
        AADD(matriz,{'mes2','C',5,0})
        AADD(matriz,{'mes3','C',5,0})
        AADD(matriz,{'mes4','C',5,0})
        AADD(matriz,{'qtd_mes','N',1,0})
        AADD(matriz,{'dias_sug','N',5,0})
        AADD(matriz,{'peso','N',8,3})
        AADD(matriz,{'isento','C',1,0})
        AADD(matriz,{'real_dol','C',1,0})
        AADD(matriz,{'ipi','N',14,6})
        AADD(matriz,{'quantd','N',15,3})
        AADD(matriz,{'preco','N',15,3})
        DBCREATE('compras',matriz,'DBFCDX')
	USE 'compras' ALIAS 'comp' EXCLUSIVE NEW VIA 'DBFCDX'
        INDEX ON comp->cod_merc TAG comp_cod TO ('compras')
        INDEX ON comp->merc TAG comp_mer TO ('compras')
ENDIF
IF ! FILE('SACLOG.DBF')
        matriz:={}
        AADD(matriz,{'data_sis','D',8,0})
        AADD(matriz,{'data','D',8,0})
        AADD(matriz,{'hora','C',8,0})
        AADD(matriz,{'tipo','C',10,0})
        AADD(matriz,{'aut_oper','C',3,0})
        AADD(matriz,{'cod_oper','C',3,0})
        AADD(matriz,{'cod_vend','C',3,0})
        AADD(matriz,{'cod_cli','C',5,0})
        AADD(matriz,{'cod_forn','C',4,0})
        AADD(matriz,{'cod_prod','C',5,0})
        AADD(matriz,{'documento','C',10,0})
        AADD(matriz,{'quantd1','N',14,3})
        AADD(matriz,{'quantd2','N',14,3})
        AADD(matriz,{'valor1','N',14,3})
        AADD(matriz,{'valor2','N',14,3})
        AADD(matriz,{'venc1','D',8,0})
        AADD(matriz,{'venc2','D',8,0})
        AADD(matriz,{'modulo','C',20,0})
        AADD(matriz,{'descri','C',60,0})
        AADD(matriz,{'cod_aut','C',17,0})
        AADD(matriz,{'terminal','C',15,0})
        DBCREATE('saclog',matriz,'DBFCDX')
ENDIF
MYRUN('MD '+curdrive()+':\SIACCFG')
arq_bat()
IF mtc = 'indexar'
        CLOSE ALL
        saccdx('*',mecf)
        wvw_lclosewindow()
        fecha_conexaoDB()
        QUIT
ENDIF
IF mtc = 'arquivo'
        CLOSE ALL
        sac_dbf(mtc)
        wvw_lclosewindow()
        fecha_conexaoDB()
        QUIT
ENDIF
//atencao(m_cfg[2])
IF m_cfg[2] = 'S'
        //IF ! FILE("instsvc.exe")
        //        atencao('Favor entrar em contato com a HTI Sistemas para que possa copia este arquivo do FIREBIRD: instsvc.exe')
        //ENDIF
        //MYRUN ("instsvc i ?s ?a ?g")
        //MYRUN ("instsvc sta")
	MYRUN('MD '+CURDRIVE()+':\'+CURDIR()+'\CLIENTE')
	MYRUN('MD '+CURDRIVE()+':\'+CURDIR()+'\PRODUTO')
	MYRUN('MD '+CURDRIVE()+':\'+CURDIR()+'\USUARIO')
	MYRUN('MD '+CURDRIVE()+':\'+CURDIR()+'\NFE')
        sacsql()
        IF ! saccdx()
                atencao('Existe algum problema com os indices procure o suporte')
                CLOSE ALL
                QUIT
        ENDIF
        DBCLOSEALL()
        sac_dbf()
ENDIF
/*
m_indiv:={}
sr_getconnection():exec("SELECT cod_cli,razao FROM saccli" ,,.t.,@m_indiv)
FOR i = 1 to len(m_indiv)
                sr_getconnection():exec("update sacDUPR set cliente ="+sr_cdbvalue(m_indiv[i,2])+" where FORNEC = "+sr_cdbvalue(m_indiv[i,1]) ,,.F.)
NEXT
        sr_getconnection():exec("COMMIT",,.f.)
QUIT
*/

m_indiv:={}
sr_getconnection():exec("SELECT * FROM sacindiv WHERE terminal = "+sr_cdbvalue(m_cfg[1]),,.t.,@m_indiv)
IF LEN(m_indiv) = 0
                mcampo_ped :='terminal  ,';//1
                +'md5       ,';//2
                +'cam_geral ,';//3
                +'cam_pocket,';//4
                +'cam_dosprt,';//5
                +'cam_cfg   ,';//6
                +'prt_ped1  ,';//7
                +'prt_ped2  ,';//8
                +'form_ped  ,';//9
                +'tp_impped ,';//10
                +'qtd_cop_pd,';//11
                +'prt_orc1  ,';//12
                +'prt_orc2  ,';//13
                +'form_orc  ,';//14
                +'qtd_cop_or,';//15
                +'qtd_lin_av,';//16
                +'prt_rel   ,';//17
                +'tp_imprel ,';//18
                +'nfe_n_c   ,';//19
                +'prt_dup   ,';//20
                +'tp_impdup ,';//21
                +'qtd_cp_dup,';//22
                +'prt_nf    ,';//23
                +'prt_bole  ,';//24
                +'tp_impbol ,';//25
                +'autocaixa ,';//26
                +'form_os   ,';//27
                +'cam_ft_cli,';//28
                +'cam_ft_pro,';//29
                +'cam_ft_ani,';//30
                +'cam_ft_usu,';//31
                +'cam_ft_rac,';//32
                +'hiper_req ,';//33
                +'hiper_resp,';//34
                +'dial_req  ,';//35
                +'dial_resp ,';//36
                +'cam_acbr  ,';//37
                +'cam_reme  ,';//38
                +'cam_boleto,';//39
                +'cam_nfe   ,';//40
                +'gerenciado,';//41
                +'ip_acbr   ,';//42
                +'ip_acbrnfe' //43
                cComm  := 'INSERT INTO sacindiv ('+mcampo_ped+',sr_deleted) VALUES ('
                m_indiv:={}
                sr_getconnection():exec("SELECT * FROM sacindiv",,.t.,@m_indiv)
                IF LEN(m_indiv) > 0
                        cComm  := ccomm + sr_cdbvalue(SUBSTR(m_cfg[1],1,20))+','+; //1
                        sr_cdbvalue(m_indiv[1,2])+','+;//2
                        sr_cdbvalue(m_indiv[1,3])+','+;//3
                        sr_cdbvalue(m_indiv[1,4])+','+;//4
                        sr_cdbvalue(m_indiv[1,5])+','+;//5
                        sr_cdbvalue(m_indiv[1,6])+','+;//6
                        sr_cdbvalue(m_indiv[1,7])+','+;//7
                        sr_cdbvalue(m_indiv[1,8])+','+;//8
                        sr_cdbvalue(m_indiv[1,9])+','+;//9
                        sr_cdbvalue(m_indiv[1,10])+','+;//10
                        sr_cdbvalue(m_indiv[1,11])+','+;//11
                        sr_cdbvalue(m_indiv[1,12])+','+;//12
                        sr_cdbvalue(m_indiv[1,13])+','+;//13
                        sr_cdbvalue(m_indiv[1,14])+','+;//14
                        sr_cdbvalue(m_indiv[1,15])+','+;//15
                        sr_cdbvalue(m_indiv[1,16])+','+;//16
                        sr_cdbvalue(m_indiv[1,17])+','+;//17
                        sr_cdbvalue(m_indiv[1,18])+','+;//18
                        sr_cdbvalue(m_indiv[1,19])+','+;//19
                        sr_cdbvalue(m_indiv[1,20])+','+;//20
                        sr_cdbvalue(m_indiv[1,21])+','+;//21
                        sr_cdbvalue(m_indiv[1,22])+','+;//22
                        sr_cdbvalue(m_indiv[1,23])+','+;//23
                        sr_cdbvalue(m_indiv[1,24])+','+;//24
                        sr_cdbvalue(m_indiv[1,25])+','+;//25
                        sr_cdbvalue(m_indiv[1,26])+','+;//26
                        sr_cdbvalue(m_indiv[1,27])+','+;//27
                        sr_cdbvalue(m_indiv[1,28])+','+;//28
                        sr_cdbvalue(m_indiv[1,29])+','+;//29
                        sr_cdbvalue(m_indiv[1,30])+','+;//30
                        sr_cdbvalue(m_indiv[1,31])+','+;//31
                        sr_cdbvalue(m_indiv[1,32])+','+;//32
                        sr_cdbvalue(m_indiv[1,33])+','+;//33
                        sr_cdbvalue(m_indiv[1,34])+','+;//34
                        sr_cdbvalue(m_indiv[1,35])+','+;//35
                        sr_cdbvalue(m_indiv[1,36])+','+;//36
                        sr_cdbvalue(m_indiv[1,37])+','+;//37
                        sr_cdbvalue(m_indiv[1,38])+','+;//38
                        sr_cdbvalue(m_indiv[1,39])+','+;//39
                        sr_cdbvalue(m_indiv[1,40])+','+;//40
                        sr_cdbvalue(m_indiv[1,41])+','+;//41
                        sr_cdbvalue(m_indiv[1,42])+','+;//42
                        sr_cdbvalue(m_indiv[1,43])+','+;//43
                        sr_cdbvalue(' ')+')'
                ELSE
                        cComm  := ccomm + sr_cdbvalue(SUBSTR(m_cfg[1],1,20))+','+; //1
                        sr_cdbvalue('')+','+;//2
                        sr_cdbvalue('C:\SIACCFG\')+','+;//3
                        sr_cdbvalue('')+','+;//4
                        sr_cdbvalue('C:\SIACCFG\')+','+;//5
                        sr_cdbvalue('C:\SIACCFG\')+','+;//6
                        sr_cdbvalue('LPT1')+','+;//7
                        sr_cdbvalue('')+','+;//8
                        sr_cdbvalue('B')+','+;//9
                        sr_cdbvalue('J')+','+;//10
                        sr_cdbvalue(1)+','+;//11
                        sr_cdbvalue('LPT1')+','+;//12
                        sr_cdbvalue('')+','+;//13
                        sr_cdbvalue('B')+','+;//14
                        sr_cdbvalue(1)+','+;//15
                        sr_cdbvalue(12)+','+;//16
                        sr_cdbvalue('LPT1')+','+;//17
                        sr_cdbvalue('J')+','+;//18
                        sr_cdbvalue('')+','+;//19
                        sr_cdbvalue('LPT1')+','+;//20
                        sr_cdbvalue('J')+','+;//21
                        sr_cdbvalue(1)+','+;//22
                        sr_cdbvalue('LPT1')+','+;//23
                        sr_cdbvalue('LPT1')+','+;//24
                        sr_cdbvalue('J')+','+;//25
                        sr_cdbvalue('N')+','+;//26
                        sr_cdbvalue('B')+','+;//27
                        sr_cdbvalue('')+','+;//28
                        sr_cdbvalue('')+','+;//29
                        sr_cdbvalue('')+','+;//30
                        sr_cdbvalue('')+','+;//31
                        sr_cdbvalue('')+','+;//32
                        sr_cdbvalue('C:\HIPERTEF\HIPERLINK\REQ\')+','+;//33
                        sr_cdbvalue('C:\HIPERTEF\HIPERLINK\RESP\')+','+;//34
                        sr_cdbvalue('C:\TEF_DIAL\REQ\')+','+;//35
                        sr_cdbvalue('C:\TEF_DIAL\RESP\')+','+;//36
                        sr_cdbvalue('C:\ACBRMONITORPLUS\')+','+;//37
                        sr_cdbvalue('')+','+;//38
                        sr_cdbvalue('')+','+;//39
                        sr_cdbvalue('')+','+;//40
                        sr_cdbvalue('PADRAO')+','+;//41
                        sr_cdbvalue('localhost:3434')+','+;//42
                        sr_cdbvalue('')+','+;//43
                        sr_cdbvalue(' ')+')'
                ENDIF
                sr_getconnection():exec(ccomm,,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                m_indiv:={}
                sr_getconnection():exec("SELECT * FROM sacindiv WHERE terminal = "+sr_cdbvalue(m_cfg[1]),,.t.,@m_indiv)
ENDIF
m_set:={}
sr_getconnection():exec("SELECT * FROM sacsetup",,.t.,@m_set)
IF LEN(m_set) = 0
        atencao('EMPRESA SEM NUMERO DE SERIE')
        senha('*')
        sr_getconnection():exec('INSERT INTO sacsetup (ver,sr_deleted) VALUES ('+ sr_cdbvalue(m_cfg[5])+','+sr_cdbvalue(" ")+')',,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        m_set:={}
        sr_getconnection():exec("SELECT * FROM sacsetup",,.t.,@m_set)
        IF ! incl_firma('*')       // PRG HTIFUN
                SET CURSOR ON
                DBUNLOCK()
                SETCOLOR('W/N,X')
                DBCOMMITALL()
                DBCLOSEALL()
                CLEAR MEMORY
                INKEY(2)
                wvw_lclosewindow()
                fecha_conexaoDB()
                QUIT
        ENDIF
ENDIF
IF ! VAL(m_set[1,123]) > 0
        m_set[1,123] := IF(! EMPTY(m_set[1,123]),DCRIPTO(SUBSTR(m_set[1,123],1,14))+DCRIPTO(SUBSTR(m_set[1,123],15,6)),m_set[1,123])
ENDIF
//atencao(m_set[1,123])
m_ver := CTOD(SUBSTR(mversao,7,2)+'/'+SUBSTR(mversao,4,2)+'/20'+STRZERO(VAL(SUBSTR(mversao,2,1)),2))
m_verset := CTOD(SUBSTR(m_set[1,1],7,2)+'/'+SUBSTR(m_set[1,1],4,2)+'/20'+STRZERO(VAL(SUBSTR(m_set[1,1],2,1)),2))
// CONTA USUARIOS
//nuser:=contausuariofirebird(nomedobanco)
//
//IF EMPTY(ALLTRIM(m_set[1,126])) .AND. m_cfg[2] = 'S'
//        sr_getconnection():exec("UPDATE sacsetup SET chv_public = " + sr_cdbvalue(mchv_public) + " WHERE sr_recno = 1 ",,.f.)
//ENDIF
/*
IF EMPTY(ALLTRIM(m_set[1,165]))
        SR_BEGINTRANSACTION()
                sr_getconnection():exec("UPDATE sacsetup SET "+;
                                        "host_email  = "+sr_cdbvalue("mail.htisistemas.com")+;
                                        ",porta_email = "+sr_cdbvalue("1025")+;
                                        ",login_email = "+sr_cdbvalue("suporte@htisistemas.com")+;
                                        ",senha_email = "+sr_cdbvalue("suporte")+;
                                        ",from_email  = "+sr_cdbvalue("suporte@htisistemas.com"),,.f.)
                sr_committransaction()
        SR_ENDTRANSACTION()
ENDIF
*/
IF m_verset > m_ver
        atencao('A versao deste Computador nao estar atualizada, favor entrar em contato com o Administrador de Rede para ver qual o problema que o sistema nao estar copiando a versao mais atual...')
ENDIF


/*
IF mtc = 'pocket'
        sacpalm1()
        fecha_conexaoDB()
        RETURN NIL
ENDIF
*/

//Critica_CRT()
tesc := CHR(27)
memp_resa := SPACE(30)
//ATENCAO(ALLTRIM(m_indiv[1,3])+'hticabe.jpg')
IF FILE(ALLTRIM(m_indiv[1,3])+'hticabe.jpg')
        MYRUN('COPY '+ALLTRIM(m_indiv[1,3])+'hticabe.jpg')
ENDIF
//ANVISA()
WHILE .T.
        //m_set[1,180] := DCRIPTO(ALLTRIM(m_set[1,180]))
        //atencao(m_set[1,180])
        mdata_sis := DATE()
        mtip_term := m_cfg[2]
        IF VAL(m_set[1,180]) = 0 .AND. ! EMPTY(m_set[1,180])
                sr_getconnection():exec("UPDATE sacsetup SET cod_acess = "+sr_cdbvalue(DCRIPTO(m_set[1,180])),,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ENDIF
        IF autorizacao(IF(EMPTY(m_set[1,123]),'',SUBSTR(m_set[1,123],15,6)))
                num := 80
                IF m_cfg[7] = '001' .OR. EMPTY(m_cfg[7])
                        mcodempresa := '001'
                        mcgc_aux := m_set[1,123]
                        mcgc_firm := SUBSTR(mcgc_aux,1,2)+'.'+SUBSTR(mcgc_aux,3,3)+'.'+SUBSTR(mcgc_aux,6,3)+'/'+SUBSTR(mcgc_aux,9,4)+'-'+SUBSTR(mcgc_aux,13,2)
                        minsc_firm := m_set[1,128]
                        mend_firm := RTRIM(m_set[1,132])+', '+RTRIM(m_set[1,160])+IF(! EMPTY(m_set[1,161]),' - '+RTRIM(m_set[1,161]),'')
                        mcid_firm := RTRIM(m_set[1,134])+'-'+m_set[1,19]
                        mfone_firm := RTRIM(m_set[1,136])
                        sis_cidade := RTRIM(m_set[1,134])
                        IF m_set[1,131] = 'F'
                                memp_resa := RTRIM(m_set[1,130])
                        ELSE
                                memp_resa := RTRIM(m_set[1,129])
                        ENDIF
                        // TESTE ERRORSYS
                        //memp_resa := RTRIM(m_set[1,229])
                ELSE
                        cons_emp := {}
                        sr_getconnection():exec("SELECT * FROM sacemp WHERE codemp = "+sr_cdbvalue(m_cfg[7]),,.t.,@cons_emp)
                        IF EMPTY(cons_emp)
                                atencao('Verificar o arquivo SACCFG.INI para ver na linha 06 o codigo da empresa...')
                                wvw_lclosewindow()
                                fecha_conexaoDB()
                                RETURN NIL
                        ENDIF
                        mcodempresa := m_cfg[7]
                        mcgc_aux := m_set[1,123]
                        mcgc_firm := cons_emp[1,6]
                        minsc_firm := cons_emp[1,5]
                        mend_firm := cons_emp[1,10]
                        mcid_firm := RTRIM(cons_emp[1,12])+'-'+cons_emp[1,14]
                        mfone_firm := RTRIM(cons_emp[1,15])
                        sis_cidade := RTRIM(cons_emp[1,12])
                        IF cons_emp[1,9] = 'F'
                                memp_resa := RTRIM(cons_emp[1,8])
                        ELSE
                                memp_resa := RTRIM(cons_emp[1,7])
                        ENDIF
                ENDIF
                */
                Wvw_SetTitle( ,memp_resa+SPACE(20)+'.: SISCOM '+mversao+' :.            .: HTI Sistemas - (81)'+mfone_HTI+' :.')
                ************
                inicializa()
                ************
                // VERIFICA ARQUIVO DE LIBERACAO
                ********************************
                m_set1:={}
                mcnpj_txt := tira_pontos(mcgc_firm)+'*.TXT'
                lin := MEMOLINE(MEMOREAD(mcnpj_txt),110,1,,)
                linhas := linha := 0
                linhas := MLCOUNT(MEMOREAD(mcnpj_txt),110)
                FOR linha = 1 TO linhas
                        lin := MEMOLINE(MEMOREAD(mcnpj_txt),110,linha,,)
                        AADD(m_set1,ALLTRIM(lin))
                NEXT
                mcnpj_txt := tira_pontos(mcgc_firm)+'.TXT'
                IF FILE(mcnpj_txt)
                        lin := MEMOLINE(MEMOREAD(mcnpj_txt),110,1,,)
                        linhas := linha := 0
                        linhas := MLCOUNT(MEMOREAD(mcnpj_txt),110)
                        FOR linha = 1 TO linhas
                                lin := MEMOLINE(MEMOREAD(mcnpj_txt),110,linha,,)
                                AADD(m_set1,ALLTRIM(lin))
                        NEXT
                        //atencao(criptografia(m_set1[2],'D'))
                        SR_BEGINTRANSACTION()
                                sr_getconnection():exec("UPDATE sacsetup SET sysdatlm = "+sr_cdbvalue(criptografia(m_set1[2],'D')),,.f.)
                                sr_committransaction()
                        SR_ENDTRANSACTION()
                        MYRUN('DEL '+mcnpj_txt)
                ENDIF
                setcor(1)
                muf_firm := m_set[1,19]
                cons_emp:={}
                sr_getconnection():exec("SELECT COUNT(*) FROM sacemp",,.t.,@cons_emp)
                IF cons_emp[1,1] > 1;mmult_emp:='S';ENDIF
                SISPINPAD(mtc)
                EXIT
        ELSEIF EMPTY(m_set[1,123])
                atencao('EMPRESA SEM NUMERO DE SERIE')
                senha('*')
                IF ! incl_firma('*')       // PRG HTIFUN
                        SET CURSOR ON
                        DBUNLOCK()
                        SETCOLOR('W/N,X')
                        DBCOMMITALL()
                        DBCLOSEALL()
                        CLEAR MEMORY
                        INKEY(2)
*                       DeAtivaScrnSave()       // DESATIVA A PROTECAO TELA
                ENDIF
                wvw_lclosewindow()
                fecha_conexaoDB()
                QUIT
        ELSE
                atencao('Numero de serie nao esta correto, procure a HTI Sistemas')
                SR_BEGINTRANSACTION()
                        sr_getconnection():exec("UPDATE sacsetup SET serie = "+sr_cdbvalue(''),,.f.)
                        sr_committransaction()
                SR_ENDTRANSACTION()
                fecha_conexaoDB()
                QUIT
                //senha()
                //LOOP
        ENDIF
ENDDO
CLOSE ALL
wvw_lclosewindow()
fecha_conexaoDB()
RETURN NIL
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
************************** f i m ***************************
FUNCTION DisplayTime
********************
  //if <alguma condi??o>
    HB_BACKGROUNDACTIVE( nTask, .F. )  // desativar o timer
    //atencao('ok')
    //<esperar>       '
    HB_BACKGROUNDACTIVE( nTask, .T. )  // reativar o timer
  //endif
return .t.
*/

FUNCTION TESTA1()
if lOK1
Alert("Voce desmarcou o checkbox")
else
Alert("Voce marcou o checkbox")
endif
lOK1 := !lOK1
RETURN NIL

FUNCTION TESTA2()
if lOK2
Alert("Voce desmarcou o checkbox")
else
Alert("Voce marcou o checkbox")
endif
lOK2 := !lOK2
RETURN NIL
*/
************************ f i m *********************
