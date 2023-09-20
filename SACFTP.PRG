//#include "windows.ch"
//#include "guilib.ch"
//#include "hwgui.ch"

***********************
Function Baixa_Automatico
***********************
if Inetestaconectada()=.T.  // verefica a conexão com a internet
   StartThread( @Donwload_Auto(),"1.0")  // tem que compilar em MT, para rodar na surdina
endif
Return

****************************
Function Donwload_Auto(vVersao)
****************************
Private vBaixa:="N"
ftpproto ="ftp://"
ftpserver = "ftp.HTIsistemas.com.br"
ftpuser = "HTIsistema"
ftppass = "HTI5923"
curl:=ftpproto+ftpuser+":"+ftppass+"@"+ftpserver
oUrl:= turl():new(curl)
oCred:= tIPCredentials()
//oFtp:= tipclientftp():NEW(oUrl,,.T.)
oFtp:= tipclient():NEW(oUrl,,.T.)
oFTP:nConnTimeout := 20000
oFTP:bUsePasv     := .T.
IF oFTP:Open()
   oFTP:Cwd("www/pasta/sistema")     // muda o diretorio no FTP
   IF !empty(clista:=oFTP:List())
      oFtp:DownLoadFile("update\versao.txt") // baixa o arquivo versão.txt dentro da pasta update

      HAND=FOPEN("update\versao.txt")
      VERSAODISP=FREADSTR(HAND,4)       // verefica a versão
      FCLOSE(HAND)
      ferase("update\versao.txt")       // apaga o arquivo baixado

      IF VAL(VERSAODISP) > VAL(vVersao)  // verefica se tem versão disponivel
         IF MsgYesNo("Há uma Nova Atualização Disponivel, deseja Atualizar Agora ?")

            cTamanho:=oFTP:fileSize( "sistema.exe" )
            Inicia_Progress("update\sistema.exe",cTamanho,"sistema.exe")  // mostra o progressp na tela

            IF File("update\sistema.exe")
               Private oDlgHabla:=nil
               MsgRun("Aguarde...Fechando conexão com Servidor..." )
               oFTP:CLOSE()  // fechando conexão com o FTP
               HW_Atualiza_Dialogo("Aguarde...Renomeando Arquivos Baixados..." )
               RenameFile(NomeExecutavel(),"sistema2.exe" )
               HW_Atualiza_Dialogo("Aguarde...Copiando Arquivos Baixados para pasta SISTEMA.." )
               __CopyFile("update\sistema.exe",NomeExecutavel(.t.))
               HW_Atualiza_Dialogo("Aguarde...Limpando arquivos Temporarios..." )
               Ferase("update\sistema.exe")
               MsgInfo("O Sistema vai fechar essa sessão para Validar a atualização","Aviso do Sistema")
               WinExec("SISTEMA.EXE 2",.T.)  // 2=Não verefica se já esta aberto o sistema.
               Fim_Run()
               quit
            Endif
         Endif
      ENDIF
   ENDIF
   oFTP:CLOSE()
ENDIF
Return



/*





//#include "windows.ch"
//#include "guilib.ch"
//#include "hwgui.ch"

******************
Function Baixa_Arq
******************
Baixa_Arq2("1.0")

IF File("update\sistema.exe")
   Private oDlgHabla:=nil
   MsgRun("Aguarde...Renomeando Arquivos Baixados..." )
   RenameFile(NomeExecutavel(),"sistema2.exe" )
   HW_Atualiza_Dialogo("Aguarde...Copiando Arquivos Baixados para pasta SISTEMA.." )
   __CopyFile("update\sistema.exe",NomeExecutavel(.t.))
   HW_Atualiza_Dialogo("Aguarde...Limpando arquivos Temporarios..." )
   Ferase("update\sistema.exe")
   MsgInfo("O Sistema vai fechar essa sessão para Validar a atualização","Aviso do Sistema")
   HW_Atualiza_Dialogo("Aguarde...Limpando arquivos Temporarios..." )
   WinExec("sistema.exe 2",.T.)
   Fim_Run()
   quit
ELSE
   IF !FILE("update\Not_Update.txt")
      MsgInfo("Parabéns ! Você Já esta utilizando a versão mais recente do [ SISTEMA ] e portanto não há atualizações disponível.","Aviso do Sistema")
      FERASE("update\Not_Update.txt")
   ELSE
      FERASE("update\Not_Update.txt")
   ENDIF
Endif
Return NIL

***************************
Function Baixa_Arq2(vVERSAO)
***************************
SET DATE BRITISH
SET EPOCH TO 2000
Private oDlgHabla:=nil
MsgRun("Aguarde Vereficando conexão com a Internet..." )

IF Inetestaconectada()=.T.
   Fim_Run()
   IF !FILE("res\buscar.bmp")
      Donwload_File("www/pasta/sistema","buscar.bmp","res\buscar.bmp")
   Endif
   IF !FILE("res\sygecom.bmp")
      Donwload_File("www/pasta/sistema","sygecom.bmp","res\sygecom.bmp")
   Endif
   Donwload_File("www/pasta/sistema","sistema.exe","update\sistema.EXE")
else
   Fim_Run()
   MsgInfo("Não foi possível estabelecer uma conexão com o Servidor,Favor vereficar sua Intenet ou tente mais tarde.","Aviso do Sistema")
Endif
Return
**********************************************
Function Donwload_File(ftpdir,ftpfile,fdestino)
**********************************************
Private oDlgHabla:=nil
MsgRun("Aguarde Procurando Atualizações...")
Private vBaixa:="N"
ftpproto ="ftp://"
ftpserver = "ftp.servidor.com.br"
ftpuser = "usuario"
ftppass = "senha"
curl:=ftpproto+ftpuser+":"+ftppass+"@"+ftpserver
oUrl:= turl():new(curl)
oCred:= tIPCredentials()
oFtp:= tipclient():NEW(oUrl,,.T.)
oFTP:nConnTimeout := 20000
oFTP:bUsePasv     := .T.
IF oFTP:Open()
   oFTP:Cwd(ftpdir)     // muda o diretorio
   IF !empty(clista:=oFTP:List())
      IF ftpfile="sistema.exe"
         ferase("update\versao.txt")
         oFtp:DownLoadFile("update\versao.txt")
         oFTP:reset()
         oFtp:DownLoadFile("update\versao.txt")

         HAND=FOPEN("update\versao.txt")
         VERSAODISP=FREADSTR(HAND,4) // Le os 4 primeiros bytes do aquivo baixado
         FCLOSE(HAND)
         ferase("update\versao.txt")

         IF VAL(VERSAODISP) > VAL(vCOMPILA)
            vBaixa="S"
         ENDIF
      else
         vBaixa="S"
      endif
      IF vBaixa="S"
         Fim_Run()
         IF MsgYesNo("Há uma Nova Atualização Disponivel, deseja Atualizar Agora ?")

            cTamanho:=oFTP:fileSize( ftpfile )
            Inicia_Progress(fdestino,cTamanho,ftpfile)
         ELSE
            arq="update\Not_Update.txt"
            if !file(arq)
               arqh=fcreate(arq,0)
               fclose(arqh)
            endif
            rele arq, arqh
         Endif
      ENDIF
   ENDIF
   oFTP:CLOSE()
Else
   MsgInfo("Não foi possivel se conectar ao servidor, Favor tente mais tarde.","Aviso do Sistema")
ENDIF
Fim_Run()
Return
//#include "windows.ch"
//#include "guilib.ch"
//#include "hwgui.ch"

******************
Function Baixa_Arq
******************
Baixa_Arq2("1.0")

IF File("update\sistema.exe")
   Private oDlgHabla:=nil
   MsgRun("Aguarde...Renomeando Arquivos Baixados..." )
   RenameFile(NomeExecutavel(),"sistema2.exe" )
   HW_Atualiza_Dialogo("Aguarde...Copiando Arquivos Baixados para pasta SISTEMA.." )
   __CopyFile("update\sistema.exe",NomeExecutavel(.t.))
   HW_Atualiza_Dialogo("Aguarde...Limpando arquivos Temporarios..." )
   Ferase("update\sistema.exe")
   MsgInfo("O Sistema vai fechar essa sessão para Validar a atualização","Aviso do Sistema")
   HW_Atualiza_Dialogo("Aguarde...Limpando arquivos Temporarios..." )
   WinExec("sistema.exe 2",.T.)
   Fim_Run()
   quit
ELSE
   IF !FILE("update\Not_Update.txt")
      MsgInfo("Parabéns ! Você Já esta utilizando a versão mais recente do [ SISTEMA ] e portanto não há atualizações disponível.","Aviso do Sistema")
      FERASE("update\Not_Update.txt")
   ELSE
      FERASE("update\Not_Update.txt")
   ENDIF
Endif
Return NIL

***************************
Function Baixa_Arq2(vVERSAO)
***************************
SET DATE BRITISH
SET EPOCH TO 2000
Private oDlgHabla:=nil
MsgRun("Aguarde Vereficando conexão com a Internet..." )

IF Inetestaconectada()=.T.
   Fim_Run()
   IF !FILE("res\buscar.bmp")
      Donwload_File("www/pasta/sistema","buscar.bmp","res\buscar.bmp")
   Endif
   IF !FILE("res\sygecom.bmp")
      Donwload_File("www/pasta/sistema","sygecom.bmp","res\sygecom.bmp")
   Endif
   Donwload_File("www/pasta/sistema","sistema.exe","update\sistema.EXE")
else
   Fim_Run()
   MsgInfo("Não foi possível estabelecer uma conexão com o Servidor,Favor vereficar sua Intenet ou tente mais tarde.","Aviso do Sistema")
Endif
Return
**********************************************
Function Donwload_File(ftpdir,ftpfile,fdestino)
**********************************************
Private oDlgHabla:=nil
MsgRun("Aguarde Procurando Atualizações...")
Private vBaixa:="N"
ftpproto ="ftp://"
ftpserver = "ftp.servidor.com.br"
ftpuser = "usuario"
ftppass = "senha"
curl:=ftpproto+ftpuser+":"+ftppass+"@"+ftpserver
oUrl:= turl():new(curl)
oCred:= tIPCredentials()
oFtp:= tipclient():NEW(oUrl,,.T.)
oFTP:nConnTimeout := 20000
oFTP:bUsePasv     := .T.
IF oFTP:Open()
   oFTP:Cwd(ftpdir)     // muda o diretorio
   IF !empty(clista:=oFTP:List())
      IF ftpfile="sistema.exe"
         ferase("update\versao.txt")
         oFtp:DownLoadFile("update\versao.txt")
         oFTP:reset()
         oFtp:DownLoadFile("update\versao.txt")

         HAND=FOPEN("update\versao.txt")
         VERSAODISP=FREADSTR(HAND,4) // Le os 4 primeiros bytes do aquivo baixado
         FCLOSE(HAND)
         ferase("update\versao.txt")

         IF VAL(VERSAODISP) > VAL(vCOMPILA)
            vBaixa="S"
         ENDIF
      else
         vBaixa="S"
      endif
      IF vBaixa="S"
         Fim_Run()
         IF MsgYesNo("Há uma Nova Atualização Disponivel, deseja Atualizar Agora ?")

            cTamanho:=oFTP:fileSize( ftpfile )
            Inicia_Progress(fdestino,cTamanho,ftpfile)
         ELSE
            arq="update\Not_Update.txt"
            if !file(arq)
               arqh=fcreate(arq,0)
               fclose(arqh)
            endif
            rele arq, arqh
         Endif
      ENDIF
   ENDIF
   oFTP:CLOSE()
Else
   MsgInfo("Não foi possivel se conectar ao servidor, Favor tente mais tarde.","Aviso do Sistema")
ENDIF
Fim_Run()
Return






*************************************************
Function Inicia_Progress(fdestino,wTotal,ftpfile)
*************************************************
Private oDlgHabla:=nil
MsgRun("Conectando, Aguarde...")
oFtp:exGauge := { | done, size| ShowGauge(done, size, wTotal, ftpfile ) }
oFtp:DownLoadFile(fdestino)
Fim_Run()

**************************************************
Function ShowGauge( nSent, nSize, wTotal, ftpfile )
**************************************************
GTprocessmessages()
HW_Atualiza_Dialogo(ftpfile+" "+ STR(nSent)+" Byts de: " + str(wTotal)+ " Byts "+str((nSent/wTotal)*100) +" %" )
Return

FUNCTION MsgRun( cMsg,cTime )
   Local vModal,vMsg:=[Aguarde em processamento....],vMsg2:=[]
   Local oFonte:= oFonte:= HFont():Add( "Arial"     , 0 ,-15,500,255 )
   PRIVATE oTimHabla
   if cMsg#nil
      vMsg:=cMsg
   endif

   INIT DIALOG oDlgHabla ;
   SIZE 485, 80  ;
   STYLE DS_CENTER + WS_VISIBLE ;
   ON INIT { || IniDlgHabla(cTime) } ;
   ON EXIT { || Hw_FimDialogoTemporal(cTime) }

   @ 0, 20  SAY vMsg SIZE 465, 20 STYLE SS_CENTER FONT oFonte

   if ctime=nil
      vModal:=.t.
   endif
   oDlgHabla:Activate(vModal)
Return .T.

static FUNCTION IniDlgHabla(cTime)
oDlgHabla:Center()
if cTime#nil
   SET TIMER oTimHabla OF oDlgHabla ID 9006 VALUE cTime ACTION {|| CierraDialogo() }
endif
Return .T.

FUNCTION Hw_FimDialogoTemporal(cTime)
if cTime#nil
   if oDlgHabla#nil
      oDlgHabla:close()
      oDlgHabla:=nil
   endif
endif
Return .T.

Function Fim_Run()
IF oDlgHabla#NIL
   oDlgHabla:CLOSE()
ENDIF

FUNCTION CierraDialogo()
   EndDialog()
RETURN .T.

FUNCTION HW_Atualiza_Dialogo(vMensagem)
GTprocessmessages()
oDlgHabla:ACONTROLS[1]:SETTEXT(vMensagem)
RETURN NIL

**************************************
Function inetestaconectada( cAddress )
**************************************
LOCAL aHosts
LOCAL cName
InetInit()
IF cAddress == NIL
   cAddress := "www.google.com.br"
ENDIF
aHosts := InetGetHosts( cAddress )
IF aHosts == NIL .or. len(aHosts)=0
   InetCleanup()
   RETURN .f.
endif
InetCleanup()
RETURN .t.
*/