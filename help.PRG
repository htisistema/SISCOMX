QUANTIDADE DE CONEXAO AO BANCO
******************************
select
t.mon$attachment_id,
t.mon$transaction_id,
a.mon$user,

***************************************************
SELECT
a.mon$remote_address
from mon$transactions t
join mon$attachments a on a.mon$attachment_id = t.mon$attachment_id
GROUP BY a.mon$remote_address
*******************************************************
SELECT
mon$remote_address,
MON$REMOTE_PROCESS
from mon$transactions t


select
  count(MON$ATTACHMENTS.mon$attachment_id) as qt_usuario_conectado
from
  MON$ATTACHMENTS


SELECT a.cod_cli,a.promotor from SACMOV t
join saccli a on a.COD_CLI = t.cod_cli and a.promotor = '002'

USAR UMA DLL EXTERNA
********************
nDll := dllload("Bemafi32.dll")
oRet := DllCall( nDll, 32, "Bematech_FI_DownloadMF", "C:\CriaSoftWare\" + ArquivoDestino )

If oRet != 1
MsgErro()
Endif

DllUnload( nDll )

**************************************************************************************

#define DC_CALL_STD 0x0020� � � // __stdcall
#define DLL_OSAPI DC_CALL_STD
#define STR_LEN 256
#define ACBrLIB "ACBrNFe32.dll"

Function main
� � // Se mandar .f. - imprime o xml
� � // Se mandar .t. - gera o pdf
� � ImprimirPDFNfe( 'C:\ARQXML.XML', .F. )
� � Return nil

FUNCTION ImprimirPDFNfe(cArq, lPdf)�
        Local cTexto � �:= ''
        Local cBufferlen
� �     Local hLib
        hLib � �� �:= DllLoad(ACBrLIB)
� � � � iRet � �� �:= DllCall(hLib, DLL_OSAPI, "NFE_Inicializar", "", "")
        bufferLen:= STR_LEN
        cTexto � �:= Space(bufferLen)
        iRet � �� �:= DllCall(hLib, DLL_OSAPI, "NFE_CarregarXML", hb_StrToUTF8(cArq))
        If lPdf
                iRet � �� �:= DllCall(hLib, DLL_OSAPI, "NFE_ImprimirPDF")
        Else
                iRet� �� �:= DllCall(hLib, DLL_OSAPI,"NFE_Imprimir", hb_StrToUTF8(""), 1, hb_StrToUTF8(""), hb_StrToUTF8(""), hb_StrToUTF8(""), hb_StrToUTF8(''), hb_StrToUTF8(""))� �� �
        EndIf
        iRet � �� �:= DllCall( hLib, DLL_OSAPI,"NFE_Finalizar") � �
        hLib � �� �:= NIL
        RETURN nil


nfe := ACBrNFe():New("", "")
   nfe:ConfigGravarValor("Principal", "LogNivel", "4") // logParanoico
   nfe:ConfigGravarValor("Principal", "LogPath", "C:\WINDOWS\TEMP" )
   nfe:ConfigGravarValor("NFE", "FormaEmissao", "0")
   nfe:ConfigGravarValor("NFE", "SalvarGer", "1")
   nfe:ConfigGravarValor("NFE", "ExibirErroSchema", "1")
   nfe:ConfigGravarValor("NFE", "RetirarAcentos", "1")
   nfe:ConfigGravarValor("NFE", "RetirarEspacos", "1")
   nfe:ConfigGravarValor("NFE", "IdentarXML", "1")

   nfe:ConfigGravarValor("NFE", "ValidarDigest", "0")
   nfe:ConfigGravarValor("NFE", "IdCSC", "000001")
   nfe:ConfigGravarValor("NFE", "CSC", "92052b84-e609-436c-8c27-a3922e509922")
   nfe:ConfigGravarValor("NFE", "ModeloDF", "0") //nfe
   //nfe:ConfigGravarValor("NFE", "ModeloDF", "1") //nfce
   nfe:ConfigGravarValor("NFE", "VersaoDF", "3") //versao 4.00
   nfe:ConfigGravarValor("NFE", "AtualizarXMLCancelado", "1")
   nfe:ConfigGravarValor("NFE", "VersaoQRCode", "2")
   nfe:ConfigGravarValor("NFE", "CamposFatObrigatorios", "1") //adiiconar tag
   nfe:ConfigGravarValor("NFE", "TagNT2018005", "1") //0 nunca 1 producao 2 somente homologacao 3 sempre

   nfe:ConfigGravarValor("NFE", "Ambiente", "0") //0 producao 1 homologa��o
   nfe:ConfigGravarValor("NFE", "SalvarWS", "1")
   nfe:ConfigGravarValor("NFE", "Timeout", "5000")
   nfe:ConfigGravarValor("NFE", "TimeoutPorThread", "0")
   nfe:ConfigGravarValor("NFE", "Visualizar", "1") //sim

   nfe:ConfigGravarValor("NFE", "AjustaAguardaConsultaRet", "1") //sim
   nfe:ConfigGravarValor("NFE", "AguardarConsultaRet", "0")
   nfe:ConfigGravarValor("NFE", "IntervaloTentativas", "1000")
   nfe:ConfigGravarValor("NFE", "Tentativas", "5")
   nfe:ConfigGravarValor("NFE", "SSLType", "0") //LT_all

   nfe:ConfigGravarValor("NFE", "PathSalvar", "C:\WINDOWS\TEMP")

   nfe:ConfigGravarValor("NFE", "PathSchemas", "C:\ACBrMonitorPLUS\Schemas")
   nfe:ConfigGravarValor("NFE", "IniServicos", "C:\ACBrMonitorPLUS\INIS")
   nfe:ConfigGravarValor("NFE", "SalvarArq", "1") //ARQUIVOS DE EVENTOS
   nfe:ConfigGravarValor("NFE", "AdicionarLiteral", "0")
   nfe:ConfigGravarValor("NFE", "SepararPorCNPJ", "0")
   nfe:ConfigGravarValor("NFE", "SepararPorModelo", "0")


   nfe:ConfigGravarValor("NFE", "SepararPorAno", "0")
   nfe:ConfigGravarValor("NFE", "SepararPorMes", "0")
   nfe:ConfigGravarValor("NFE", "SepararPorDia", "0")
   nfe:ConfigGravarValor("NFE", "SalvarEvento", "1")
   nfe:ConfigGravarValor("NFE", "SalvarApenasNFeProcessadas", "1")


   nfe:ConfigGravarValor("NFE", "EmissaoPathNFe", "0") //por data de emiss�o
   nfe:ConfigGravarValor("NFE", "NormatizarMunicipios", "1")
   nfe:ConfigGravarValor("NFE", "PathNFe", "c:\windows\temp")
   nfe:ConfigGravarValor("NFE", "PathInu", "c:\windows\temp")

   nfe:ConfigGravarValor("NFE", "PathEvento", "c:\windows\temp")
   nfe:ConfigGravarValor("NFE", "PathArquivoMunicipios", "C:\ACBrMonitorPLUS\MunIBGE")
   nfe:ConfigGravarValor("NFE", "Download.PathDownload", "c:\windows\temp")
   nfe:ConfigGravarValor("NFE", "Download.SepararPorNome", "0")
   nfe:ConfigGravarValor("NFE", "IdCSRT", "")
   nfe:ConfigGravarValor("NFE", "CSRT", "")

   nfe:ConfigGravarValor("DANFE", "PathPDF", "c:\windows\temp")
   nfe:ConfigGravarValor("DANFE", "UsaSeparadorPathPDF", "0")
   nfe:ConfigGravarValor("DANFE", "Impressora", "")
   nfe:ConfigGravarValor("DANFE", "NomeDocumento", "")
   nfe:ConfigGravarValor("DANFE", "MostraSetup", "1")
   nfe:ConfigGravarValor("DANFE", "MostraPreview", "1")

   nfe:ConfigGravarValor("DANFE", "MostraStatus", "1")
   nfe:ConfigGravarValor("DANFE", "Copias", "")
   nfe:ConfigGravarValor("DANFE", "PathLogo", "c:\windows\temp")


   nfe:ConfigGravarValor("DANFE", "MargemInferior", "0,10")
   nfe:ConfigGravarValor("DANFE", "MargemSuperior", "0,00")
   nfe:ConfigGravarValor("DANFE", "MargemEsquerda", "0,00")
   nfe:ConfigGravarValor("DANFE", "MargemDireita", "0,00")

   nfe:ConfigGravarValor("DANFE", "ExpandeLogoMarca", "0") //0 e expande ou nao


   //nfe:ConfigGravarValor("DANFE", "CasasDecimais.Formato", "0,00")
   //nfe:ConfigGravarValor("DANFE", "CasasDecimais.MaskqCom", "0,00")
   //nfe:ConfigGravarValor("DANFE", "CasasDecimais.MaskvUnCom", "0,00")

   //nfe:ConfigGravarValor("DANFE", "CasasDecimais.qCom", "0,00")
   //nfe:ConfigGravarValor("DANFE", "CasasDecimais.vUnCom", "0,00")
   //nfe:ConfigGravarValor("DANFE", "TipoDANFE", "1")
   //nfe:ConfigGravarValor("DANFE", "ImprimeTotalLiquido", "")


   nfe:ConfigGravarValor("DFe", "ArquivoPFX", "W:\SERV\CERTIFICADO\CLIENTES\ANDERSON\RUBINO\ArquivoPFX.pfx")
   ///nfe:ConfigGravarValor("DFe", "DadosPFX", "")
   ///nfe:ConfigGravarValor("DFe", "NumeroSerie", "")
   nfe:ConfigGravarValor("DFe", "Senha", "XXXPASSWORD DO CERTIFICADOXXX")
   ///nfe:ConfigGravarValor("DFe", "FK", "")
   nfe:ConfigGravarValor("DFe", "VerificarValidade", "1")
   nfe:ConfigGravarValor("DFe", "SSLCryptLib", "1")
   nfe:ConfigGravarValor("DFe", "SSLHttpLib", "3")
   nfe:ConfigGravarValor("DFe", "SSLXmlSignLib", "4")
   nfe:ConfigGravarValor("DFe", "UF", "SP")
   nfe:ConfigGravarValor("DFe", "TimeZone.Modo", "0")
   nfe:ConfigGravarValor("DFe", "TimeZone.Str", "")



***********************************************************************
select cod_cli,razao,limite from saccli  where limite < '1000' order by limite order by limite

update saccli set limite = 1000 where limite = '1'

update saccli SET VLR_ANT = 0 WHERE VLR_ANT IS null

delete from saccli where razao like 'A%'

ALTER table saccli drop EMPRESA     +++ DELETA A COLUNA , N�O VOLTA MAIS ++++

ALTER table saccli ADD EMPRESA varchar(3)
ALTER table saccli ADD EMPRESA DECIMAL(12,2)

select sacped_s.pcod_cli,saccli.razao from saccli,sacped_s

select sum(sacped_s.pvlr_fat*sacped_s.pquantd) from sacped_s where pnum_ped = '071600' //somar

use ("select * from tabela order by xxxx") new via sqlrdd alias test

update prodcasa set cod_m = replace(cod_m,'.000','')

update prodcasa set cod_m = lpad(cod_m,5,'0')




via comando sr_changestruct
olhe o sample chnstruct.prg

********* COPIA UMA TABELA *******************
sr_setactiveconnection( 1)
copy to xxxx connection 2 via sqlrdd
copy to batela.dbf via "DBFCDX"

***********************************************
UTILIZAR O COMANDO GFIX.EXE
****************************
- Verifica o BD
gfix -v -full -user SYSDBA -password masterkey database.gdb

- Recupera o BD:
gfix -mend -full -ignore -user SYSD     BA -password masterkey database.gdb


gFix:
1 - Analisar
comando: gfix -v -full C:\SIAC\SISCOM.GDB -USER SYSDBA -pass masterkey

2 - Preparar BackUp
comando: gfix -mend C:\SIAC\SISCOM.GDB -USER SYSDBA -pass masterkey

gBak:
1 - BackUp
comando: GBAK -backup -V -ignore -garbage -limbo C:\SIAC\SISCOM.GDB C:\SIAC\SISCOM.FBK -USER SYSDBA -pass masterkey

2 - Restore
comando: GBAK  -c -v -z C:\SIAC\SISCOM.FBK C:\SIAC\SISCOM.GDB -USER SYSDBA -pass masterkey



set FIREBIRD_BIN=c:\Programas\Firebird\Firebird_1_5\bin\
set LAFOBIT_PASTA_DADOS=c:\lafobit\dados\
set FICHEIRO_GDK=c:\lafobit\dados\dados%DATE%.gdk
set FICHEIRO_ORG=c:\lafobit\dados\dados.gdb

copy /y %FICHEIRO_ORG% %LAFOBIT_PASTA_DADOS%\COPIA%DATE%.GDB

%FIREBIRD_BIN%gfix -mend -user SYSDBA -password masterkey %FICHEIRO_ORG%

%FIREBIRD_BIN%\gbak -b -v -ig -user SYSDBA -password masterkey
%FICHEIRO_ORG% %FICHEIRO_GDK%

REM PARA RECUPERAR A BD EXECUTAR ISTO
%FIREBIRD_BIN%\gbak -c -R -user SYSDBA -password masterkey
%FICHEIRO_GDK% %FICHEIRO_ORG%


pause
************************************
 COMMANDO GBAK
******************
C:\TEMP> set isc_user=sysdba // define o usu�rio
C:\TEMP> set isc_password=masterkey // define a senha
C:\TEMP> gbak -B -user SYSDBA -password masterkey SeuBanco.gdb SeuBanco.gbk // gera o backup

Para restaurar � s� fazer:

C:\TEMP> gbak -R -user SYSDBA -password masterkey SeuBanco.gbk SeuBanco.gbd

*************************** F I M *************************************
// ROTINA PARA LOG DO USUARIO

FUNCTION dbCommitLog( LOG_TIPO, PROCNAME )
LOCAL ret_line := "chr(13)+chr(10)", errfile := "backup.log"
IF  LOG_TIPO = 'A'
    M->MINHA_INFO  := 'ABERTURA'
ELSEIF LOG_TIPO = 'I'
    M->MINHA_INFO  := 'INCLUSAO'
ELSEIF LOG_TIPO = 'E'
    M->MINHA_INFO  := 'EXCLUSAO'
ELSEIF LOG_TIPO = 'M'
    M->MINHA_INFO  := 'MANUTENCAO'
ENDIF
M->MODULO := PROCNAME
IF !FILE(errfile)
  errhandle = FCREATE(errfile)
  FWRITE(errhandle,"Segue lista de processos detectados."+&ret_line.+&ret_line.)
  FWRITE(errhandle,"Data  Hora  Operador      Processo"+&ret_line.)
  FWRITE(errhandle,replicate("-",80)+&ret_line.+&ret_line.)
ELSE
  errhandle = FOPEN(errfile,1)
  length  = FSEEK(errhandle,0,2)
  FSEEK(errhandle,length)
ENDIF
FWRITE(errhandle,DTOC(DATE())+" "+TIME()+" "+M->OPERADOR+" "+M->MODULO+" "+M->MINHA_INFO+&ret_line.)
FCLOSE(errhandle)
RETURN(.T.)

procedure PafMF_LX_Impressao;

s;

Tentou RETURN IBR_OK( IBR_COMANDO( 'ECF.PafMF_LMFC_Impressao', {CRZini,CRZFim}, ........))?

PafMF_LMFC_Impressao(const DataInicial, DataFinal: TDateTime);
PafMF_LMFC_Espelho(const CRZInicial, CRZFinal: Integer; const PathArquivo: String);
PafMF_LMFC_Espelho(const DataInicial, DataFinal: TDateTime; const PathArquivo: String);
PafMF_LMFC_Cotepe1704(const CRZInicial, CRZFinal: Integer; const PathArquivo: String);
PafMF_LMFC_Cotepe1704(const DataInicial, DataFinal: TDateTime; const PathArquivo: String);

PafMF_LMFS_Impressao(const CRZInicial, CRZFinal: Integer);
PafMF_LMFS_Impressao(const DataInicial, DataFinal: TDateTime);
PafMF_LMFS_Espelho(const CRZInicial, CRZFinal: Integer; const PathArquivo: String);
PafMF_LMFS_Espelho(const DataInicial, DataFinal: TDateTime; const PathArquivo: String);

PafMF_MFD_Espelho(const COOInicial, COOFinal: Integer; const PathArquivo: String);
PafMF_MFD_Espelho(const DataInicial, DataFinal: TDateTime; const PathArquivo: String);
PafMF_MFD_Cotepe1704(const COOInicial, COOFinal: Integer; const PathArquivo: String);
PafMF_MFD_Cotepe1704(const DataInicial, DataFinal: TDateTime; const PathArquivo: String);


// Venda de item no ECF-ACBRMONITOR

VendeItem( Cmd.Params(0), Cmd.Params(1),           { Cod, Descricao }
                      Trim(Cmd.Params(2)),                          { Aliquota }
                      StringToFloat( Cmd.Params(3)),                     { Qtd }
                      StringToFloat( Cmd.Params(4)),                  { P.Unit }
                      StringToFloatDef( Cmd.Params(5), 0),          { Val.Desconto/Acres }
                      Cmd.Params(6),                                      { Un }
                      PadL(Cmd.Params(7),1,'%' ou '$'),               { Tipo Desconto }
                      PadL(Cmd.Params(8),1,'D' ou 'A') );             { Desc / Acresc }

******************************* F I M ****************************88
lssendmail ENVIAR EMAIL
************************
:\Program Files (x86)\LazSolutions\LSSendMail>lssendmail.exe --help
Available parameters:
  --about,           Show information about the project.
  -h, --help,        Show this text.
  --checkopenssl,    Show if have SSL support.
  -debugmode,        Debug mode shows information of MIME without send e-mail, e.g: -debugmode=debug.txt
  -attempt,          Define all attemps to try send mail, e.g: -attempt="3". Default is 3.
  -from,             Set <From> (may be your name).
  -to,               Set <To> destinations, e.g: -to="mail1@host.com;mail2@host.com".
  -cc,               Set <CC> destinations, e.g: -cc="mail1@host.com;mail2@host.com".
  -bcc               Set <BCC> destinations, e.g: -bcc="mail1@host.com;mail2@host.com".
  -subject,          Set <Subject> string.
  -message,          Set <Message> string. You can also encode strings in URL format, e.g: Silvio%20Cl%C3%A9cio = Silvio Cl+�cio.
  -messagefile,      Set <Message> string from file, e.g: -messagefile="message.txt"
  -attached,         Set <Attached>. To send more than one attached, separate by semicolons, e.g: -attached="attached1.txt;attached2.txt".
  -messagetype,      Set message type, e.g: -messagetype=txt for TXT message, or -messagetype=html for HTML message.
  -priority,         Set the priority option, use the following options: unknown, low, normal, high. Unknown is default.
  -confirmreading,   Set confirmation to reading for your e-mail. Use y to True, or n to False.
  -user,             Set SMTP user.
  -password,         Set SMTP password.
  -host,             Set SMTP host.
  -port,             Set SMTP port.
  -ssl,              Set SMTP SSL. Use y to True, or n to False.
  -tls,              Set SMTP TLS. Use y to True, or n to False.
  --version,         Show project version.
**********************************************************************************
        SR_BEGINTRANSACTION()
        TRY



        sr_committransaction()
        CATCH e
        SR_ENDTRANSACTION()
        END
**********************************************************************************

VALTYPE(m_set[1,i]) = 'N'

***********************************************************************************
ACBRMONITOR
************
</linha_simples>    - ------------------...
</linha_dupla>      - ==================...
<e></e>             - Expandido
<n></n>             - Negrito
<s></s>             - Sublinhado
<c></c>             - Condensado
<i></i>             - It�lico
<ad></ad>           - Alinhado a direita
<ce></ce>           - centralizado


<ean8></ean8>       - ean 8
<ean13></ean13>     - ean 13
<std></std>         - standart
<inter></inter>     - interleave
<code11></code11>   - code 11
<code39></code39>   - code 39
<code93></code93>   - code 93
<code128></code128> - code 128
<upca></upca>       - upca
<codabar></codabar> - codabar
<msi></msi>         - msi


pafmf_arquivomf(path) e pafmf_arquivomfd(path)  -> binarios


function criatabela()
  local osql,csql
  oSql := SR_GetConnection()
  cSql :="CREATE TABLE CARTA (sr_recno bigint(15) NOT NULL unique auto_increment, CODE char(3), NAME char(50), sr_deleted char(1) default ' ' NOT NULL );"
  oSql:Exec( csql )


return nil


Error SR_FIREBIRD/0 SQLExecDirect Error
Unable to complete network request to host



telnet -a 192.168.1.11 3050



1.Instala��o.

Instale o Firebird 2.1
Pare o servi�o do Firebird 2.1 no painel de controle e instale o Firebird 2.5;
1.1: Durante o processo de instala��o do Firebird 2.5, o instalador detectar� que j� existe uma vers�o do banco de dados instalada na m�quina, e exibir� uma mensagem perguntando se voc� realmente deseja instalar outra vers�o � clique em N�O. Os arquivos ser�o copiados para o sistema operacional, por�m o Firebird n�o ser� configurado/instalado, esta etapa dever� ser feita manualmente.

1.2: Pelo m�todo padr�o, n�o � poss�vel ter o Firebird 2.1 e 2.5 rodando como servi�o em uma mesma m�quina, pois o servi�o criado pelo instalador de ambas as vers�es tem o mesmo nome.

1.3: A pasta padr�o de instala��o do Firebird � �C:\Arquivos de Programas\Firebird\Firebird_2_5�. Recomendamos que esta pasta seja alterada para �C:\Arquivos de Programas\Firebird_2_5�

2. Ap�s a conclus�o da instala��o do Firebird 2.1 ou 2.5, v� para o prompt do MS-DOS (ex: iniciar, executar, cmd <enter>);

2.1 Estando no prompt do MS-DOS, digite: cd\Arquivos de Programas\Firebird_2_5 <enter>

2.2 Digite edit firebird.conf <enter>. Ser� aberta a tela do editor de texto com o conte�do do arquivo de configura��es do Firebird. Localize a linha
#RemoteServicePort=3050 e remova o #. Depois, altere o n�mero da porta para 3051, ou qualquer outro n�mero de porta que n�o esteja em uso no computador. Salve o documento e saia do editor.

Obs.1: Voc� pode editar o arquivo firebird.conf com o notepad++ ou outro editor de sua prefer�ncia.

Obs.2: Coloque a porta que voc� definiu no arquivo de configura��o do Firebird nas exce��es do Firewall do Windows, pois o mesmo poder� bloque�-la por motivos de seguran�a.

2.3 Digite: cd bin <enter>
2.4 Estando no diret�rio bin do Firebird, devemos instalar o servi�o e depois coloc�-lo em execu��o:

Digite: instsvc i �s �a �g <enter>
Digite: instsvc sta <enter>
O primeiro comando cria o servi�o do Firebird no Windows. O segundo, inicia o servi�o.

Se tudo correu normalmente ap�s a execu��o deste �ltimo comando, ser� exibida uma mensagem informando que o servi�o foi iniciado com sucesso.

Feito isso, as duas vers�es do Firebird encontram-se instaladas e em execu��o.



Run Dir \Clientes.Prg /S /B > Result.Tmp

------------------------------------------------------------------------------------------
"GMAIL" $ Upper(cSMTP)
   curl_easy_setopt( curl, HB_CURLOPT_URL, "smtps://smtp.gmail.com:465" )
//https://www.google.com/settings/security/lesssecureapps (para ativar aplicativo menos seguro)
ELSEIF "YAHOO" $ Upper(cSMTP)
   curl_easy_setopt( curl, HB_CURLOPT_URL, "smtps://smtp.mail.yahoo.com:465" )
ELSEIF "OUTLOOK" $ Upper(cSMTP)
   curl_easy_setopt( curl, HB_CURLOPT_URL, "SMTP.office365.com:587" tls ) //25
ELSEIF "UOL" $ Upper(cSMTP)
   curl_easy_setopt( curl, HB_CURLOPT_URL, "smtps://smtps.uol.com.br:465" ) //587
ENDIF
-------------------------------------------------------------------------------------------

COMO ROTEAR UM COMPUTADOR
*************************
NETSH WLAN SET HOSTEDNETWORK MODE=ALLOW SSID=NOMEDAREDE KEY=SENHADAREDE KEYUSAGE=PERSINSTENT <ENTER>
NETSH WLAN START HOSTEDNETWORK <ENTER>


INSTALACAO DO ACBRMONITOR E ACBRNFEMONITO EM SILENCIO
*****************************************************
/SILENT
/VERYSILENT

//012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789


DIFERENCA ENTRE NFe E NFCe
*****************************
Atrav�s do modelo do documento fiscal, NF-e = 55, NFC-e = 65.

--------------------------------------------------------------------------------------
SEGUNDO LINK PARA ATIVA��O DO WINDOWS 10
https://www.youtube.com/watch?v=eagn-...

COMANDOS PARA ATIVA��O DO WINDOWS 10

cscript slmgr.vbs /ipk <numero de serie abaixo>
cscript slmgr.vbs /skms kms.lotro.cc
cscript slmgr.vbs /ato

SERIAIS PARA CADA VERS�O DO WINDOWS 10

Win 10 Home Single Language ? NTRHT-XTHTG-GBWCG-4MTMP-HH64C
Win 10 Home Single Language ? 7HNRX-D7KGG-3K4RQ-4WPJ4-YTDFH
Win 10 Home Single Language ? BT79Q-G7N6G-PGBYW-4YWX6-6F4BT
Win 10 Home Edition ? TX9XD-98N7V-6WMQ6-BX7FG-H8Q99
Win 10 Home ? TX9XD-98N7V-6WMQ6-BX7FG-H8Q99
Win 10 Home ? YTMG3-N6DKC-DKB77-7M9GH-8HVX7
Win 10 Pro ? VK7JG-NPHTM-C97JM-9MPGT-3V66T
Win 10 Pro ? W269N-WFGWX-YVC9B-4J6C9-T83GX
Win 10 Pro ? NRG8B-VKK3Q-CXVCJ-9G2XF-6Q84J
Win 10 Workstations ? NRG8B-VKK3Q-CXVCJ-9G2XF-6Q84J
Win 10 Pro for Workstations ? NRG8B-VKK3Q-CXVCJ-9G2XF-6Q84J
Win 10 Pro N for Workstations ? 9FNHH-K3HBT-3W4TD-6383H-6XYWF
Win 10 Education ? NW6C2-QMPVW-D7KKK-3GKT6-VCFB2
Win 10 Education N ? 2WH4N-8QGBV-H22JP-CT43Q-MDWWJ
Win 10 Pro Education ? 6TP4R-GNPTD-KYYHQ-7B7DP-J447Y
Win 10 Pro Education N ? YVWGF-BXNMC-HTQYQ-CPQ99-66QFC
Win 10 Enterprise ? NPPR9-FWDCX-D2C8J-H872K-2YT43
Win 10 Enterprise G ? YYVX9-NTFWV-6MDM3-9PT4T-4M68B
Win 10 Enterprise G N ? 44RPN-FTY23-9VTTB-MP9BX-T84FV
Win 10 Enterprise N ? DPH2V-TTNVB-4X9Q3-TJR4H-KHJW4
Win 10 Enterprise S ? FWN7H-PF93Q-4GGP8-M8RF3-MDWWW
Win 10 Enterprise LTSC 2019 ? M7XTQ-FN8P6-TTKYV-9D4CC-J462D
Win 10 Enterprise N LTSC 2019 ? 92NFX-8DJQP-P6BBQ-THF9C-7CG2H
Win 10 Enterprise LTSB 2016 ? DCPHK-NFMTC-H88MJ-PFHPY-QJ4BJ

--------------------------------------------------------------------------

CONTAINING = LIKE

--------------------------------------------------------------------------

Matar uma aplicacao via CMD
***************************
taskkill /f /im ibexpert.exe

------------------------------------------------------------------------------

CALCULAR Quantidades de CPU usar no FIREBIRD
********************************************
select
    cast(power(2,:pqtdcpu) -1 as integer) "ATE_X_CPU"
from rdb$database

-----------------------------------------------------------------------------


no .prg com a funcao main (onde tem os menus)
#include "wvwtools.ch"
global oapp

e dentro da funcao main (onde cria os menus) // recrie os menus usando
a wvwtools

setup()
WITH OBJECT ( oApp := WvW_tApplication():New( CurDrive() + ":
\" + CurDir() ) )
:Setup()
:setstyle( -1 )
:bTitle := "Dinamico"
:CreateMenu()
:beginpopup("&Movimento")

:AddMenuItem( "&Calculo",{||JUROS1()})
:endpopup()

:beginpopup("&Relatorio")

:AddMenuItem( "&Calculo",{||relato()})
:endpopup()
:SetMenu()
:run( ,, .T. )
end


FUNCTION Setup()
//****
wvw_setcodepage(0,255)
SetMode( 30, 88 )
//
WvW_SetPaintRefresh( 100 )
WvW_SetVertCaret( .T. )
WvW_SetAltF4Close( .F. )
WvW_SetMouseMove( .T. )
WvW_SetMainCoord( .F. )
WVW_SetDefLineSpacing( 0 )
WvW_SetMaxBMcache( 20 )
//
WVW_SetLineSpacing( 0, 0 )
WvW_SetCodePage( 0, 255 )
WvW_SetPointer( 0, 1 )
//
Wvw_LoadPen( 1, 0, 1.0, cRGB( "Orange" ) )
Wvw_LoadPen( 2, 0, 1.5, cRGB( "Orange" ) )
Wvw_LoadPen( 3, 0, 2.0, cRGB( "Orange" ) )
Wvw_LoadPen( 4, 0, 2.5, cRGB( "Orange" ) )
Wvw_LoadPen( 5, 0, 3.0, cRGB( "Orange" ) )
WvW_SetPen( 0, 1, RGB(201,201,201) )
//
//
RETURN (.T.)



FUNCTION QuitApp( lDoBreak )
//****
LOCAL nButton
//
nButton:= WvW_MessageBox( NIL, CRLF + " Deseja sair deste programa
agora ? " ;
+ CRLF + CRLF, "Confirma!", MB_YESNO +
MB_ICONQUESTION + MB_SYSTEMMODAL )


IF ( nButton == 6 )
EVAL( yBLOCO_finsis )
QUIT
ENDIF
//
RETURN (.T.)




//****
FUNCTION ShowClue( ... )
//****
LOCAL xMessage
STATIC lPostP, cMessage := ""
//
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
WvW_SBsetText( 1, 0, "* " + cMessage )
lPostP := NIL
//
RETURN (.T.)


request HB_GT_WVW
function gtsys
return nil


ENVIAR MENSAGEM PELO ZAP
https://wa.me/5581993127894?text=ol%C3%A1%20voc%C3%AA%20enviou%20uma%20mensagem%20


MAQUINA VIRTUAL DO WINDOWS
***************************
WIN + R optionalFeatures
opcao = area restrita do windows
WIN SANDBOX

LIMPA O COMPUTADOR
*******************
CMD
DISM /online /cleanup-image /checkhealth

ESCANEAR O COMPUTADOR
*********************
CMD
sfc /scannow



























