/*
 *
 * Arquivo...: nfwhmail.prg
 * Autor.....: Varios/Desconhecidos
 * Adaptacao.: Jose Carlos da Rocha
 * E-mail....: irochinha@itelefonica.com.br
 * Site......: www.5volution.com
 * Versao....: 1.0, 05/Ago/2006
 * Objetivo..: Oferecer suporte para envio e recebimento de email
 *
 */
#include "fivewin.ch"
#Include "dll.ch"

// CONSTANT Declarations
#define MAPI_ORIG 0
#define MAPI_TO 1
#define MAPI_CC 2
#define MAPI_BCC 3

// FLAG Declarations
#define MAPI_LOGON_UI     1 // &H1
#define MAPI_NEW_SESSION    2 // &H2
#define MAPI_DIALOG      8 // &H8
#define MAPI_UNREAD_ONLY   32 // &H20
#define MAPI_ENVELOPE_ONLY  64 // &H40
#define MAPI_PEEK      128 // &H80
#define MAPI_GUARANTEE_FIFO 256 // &H100
#define MAPI_BODY_AS_FILE  512 // &H200
#define MAPI_AB_NOMODIFY  1024 // &H400
#define MAPI_SUPPRESS_ATTACH 2048 // &H800
#define MAPI_FORCE_DOWNLOAD 4096 // &H1000
#define MAPI_OLE        1 // &H1
#define MAPI_OLE_STATIC    2 // &H2

/*
 *ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿
 *³ ± FUNCAO: Usa o servico MAPI do Windows para interfacear com o Outlook ± ³
 *ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ
 */
function MapiSend( cbody ,;
         cserver ,;
         cto ,;
         cf ,;
         csubject ,;
         cu ,;
         cpw ,;
         cattach )
 aFiles   := {}
 aOrigin   := {}
 aRecipients := {}
 cMsgType  := "L"
 dDate    := date()
 cTime    := Time()
 cConversationID := "ID"
 lReceipt  := .t.
 lInteractive := .f.
 aadd( aOrigin, cu )
 aadd( aRecipients, cto )
 aadd( aFiles, cattach )
 nRetCode := MAPILogon( 0, cServer, cpw, MAPI_LOGON_UI, 1 )
 if nRetCode != -1
   nRetCode := MAPISendMail( cSubject, cBody, "L",;
         DToS( dDate ) + " " + cTime,;
         cConversationID, lReceipt, lInteractive,;
         aOrigin, aRecipients, aFiles )
   //? nRetCode
 else
   Mensagem( "Erro ao inicializar o servico de e-mail" )
 endif
 MAPILogoff()
 return .t.

/*
 *ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿
 *³ ± FUNCAO: Faz uso do PySendMail para enviar emails diretamente pela internet ± ³
 *ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ
 */
function PySendMail( cBody ,;
          cSMTPServer ,;
          cTo ,;
          cFrom ,;
          cSubject ,;
          cUser ,;
          cPassWord ,;
          cAttach )
 oPySendMail:=TOleAuto():New( "Py.SendMail" )
 oPySendMail:SMTPServer := cSMTPServer
 oPySendMail:To    := cTo
 oPySendMail:From   := cFrom
 oPySendMail:User   := cUser
 oPySendMail:Password := cPassWord
 oPySendMail:Subject  := cSubject
 oPySendMail:Body   := cBody
 //oPySendMail:PureText := .t.
 if .not. empty( cAttach )
   oPySendMail:AttachFile( cAttach )
 endif
 //oPySendMail:InsertImage:= ""
 retorno := oPySendMail:Send()
 if upper(retorno) <> "OK"
   Mensagem( "Erro: " + retorno )
   return .f.
 endif
 return .t.

/*
 *ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿
 *³ ± FUNCAO: Faz uso do BLAT para enviar emails diretamente pela internet ± ³
 *ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ
 */
function blat( cbody ,;
       cserver ,;
       cto ,;
       cf ,;
       csubject ,;
       cu ,;
       cpw ,;
       cattach )
  BlatCMD := [ blat.txt] + ;
        [ -server ] + alltrim(cserver) + ;
        [ -to ]   + alltrim(cto) + ;
        [ -f ]    + alltrim(cf) + ;
        [ -mailfrom ] + alltrim(cf) + ;
        [ -subject "] + alltrim(csubject) + ["] + ;
        [ -r ]    + ;
        [ -u ]    + alltrim(cu) + ;
        [ -pw ]   + alltrim(cpw) + ;
        [ -log "email.log" -debug ] + ;
        iif( empty( cAttach ),[],[ -attach "] + alltrim(cattach) + ["])
  cMacro="BLAT.EXE " + BlatCMD
  fErase( "email.log" )
  cBody := FormHtml( cSubject, cBody )
  memowrit( "blat.txt", cbody )
  //memowrit( "blat.bat", cMacro )
  WinExec( cMacro, 0 )
  if file( "blat.log" )
    BlatLOG := memoread( "email.log" )
    if "ERROR" $ Upper(BlatLOG)
      Mensagem( "Erro: arquivo de BLAT.LOG foi criado" )
      return .f.
    endif
  endif
  RETURN .T.

/*
 *ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿
 *³ ± FUNCAO: Faz uso do MAPISEND p enviar email diretamente pela internet ± ³
 *ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ
 */
function MapiSend2( cbody ,;
         cserver ,;
         cto ,;
         cf ,;
         csubject ,;
         cu ,;
         cpw ,;
         cattach )
  MapiCMD := [ -u "] + alltrim(cu) + ["] + ;
        [ -p "] + alltrim(cpw) + ["] + ;
        [ -r "] + alltrim(cto) + ["] + ;
        [ -s "] + alltrim(csubject) + ["] + ;
        [ -m "] + alltrim(cbody) + ["] + ;
        iif( empty( cAttach ),[],[ -f "] + alltrim(cattach) + ["]) + ;
        [ -l email.log ]
  cMacro := "MAPISEND.EXE " + MapiCMD
  memowrit( "mapisend.bat", cMacro )
  errfile := "MapiSend.tmp"
  errhandle := fcreate(errfile) // Cria o arquivo de controle
  errhandle := FOPEN(errfile,1) // Abre travando o arquivo de controle
  fErase( "email.log" )
  WinExec( cMacro, 0 )
  SysWait(2.5)
  fclose(errfile) // Fecha o arquivo de controle
  ferase(errfile) // Elimina o arquivo de controle
  if file( "mapisend.log" )
    MapiLOG := memoread( "email.log" )
    if "ERROR" $ Upper(MapiLOG)
      Mensagem( "Erro: arquivo de MAPISEND.LOG foi criado" )
      return .f.
    endif
  endif
  RETURN .T.

/*
 *ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿
 *³ ± FUNCAO: Faz uso do CONVERTDOC para transformar arquivos .RTF em HTML ± ³
 *ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ
 */
function ConvertDOC( cRTFFile, cHTMLFile )
  CnvtCMD := [ /S ] + alltrim(cRTFFile) + ;
        [ /T ] + alltrim(cHTMLFile) + ;
        [ /F5 /C4 /M2 ]
  cMacro="convertdoc.exe " + CnvtCMD
  WinExec( cMacro, 0 )
  RETURN .T.

/*
 *ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿
 *³ ± FUNCAO: Faz uso do GETMAIL para receber emails diretamente pela internet ± ³
 *ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ
 */
function GetMail( cuser ,;
         cpass ,;
         cserver )
  GetMCMD := " -u " + alltrim(cuser) + ;
        " -pw " + alltrim(cpass) + ;
        " -s " + alltrim(cserver)
  cMacro="GETMAIL.EXE" + GetMCMD
  memowrit( "get.bat", cMacro )
  ? cMacro
  MsgRun( "Recebendo de "+LOWER(cServer)+"..." )
  WinExec( "get.bat", 0 )
  RETURN .T.

/*
 *ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿
 *³ ± FUNCAO: Faz uso do BLAT para enviar emails diretamente pela internet ± ³
 *ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ
 */
Function SendIELink( oIEWnd, cLink, lVisivel, lCapture, lToolBar, lStatusBar, lMenuBar, lQuit )
 local oIE
 Default lVisivel:=.f., lCapture:=.f., lQuit:=.f.,;
     lToolBar:=.f., lStatusBar:=.f., lMenuBar:=.f.
 oIE:=TOleAuto():New( "InternetExplorer.Application" )
 oIE:Visible := lVisivel
 oIE:ToolBar := lToolBar
 oIE:StatusBar := lStatusBar
 oIE:MenuBar := lMenuBar
 oIE:Top   := 060
 oIE:Left   := 005
 oIE:Height  := 600
 oIE:Width  := 800
 oIE:Navigate( cLink )
 if lQuit
   SysWait(.60)
   oIE:Quit()
 endif
 oIE:End()
 if lCapture
   FindIE(oIEWnd)
 endif
 SysRefresh()
 return nil

/*
 *ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿
 *³ ± FUNCAO: ±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±± ³
 *ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ
 */
Function SendSMSClaro( cDestDDD, cDestTEL, cMensagem, cOrigem, cOrigDDD, cOrigTEL, cLetras )
 local hE, cVar1, cVar2, cVar3, cVar4, cVar5, cLink
 cVar1 := "http://www2.claro.com.br/torpedoweb/popup_senderJava.asp?\ "
 cVar2 := "ddd_para="+alltrim(cDestDDD)
 cVar3 := "&telefone_para="+alltrim(cDestTEL)
 cVar4 := "&nome_de="+LigaString(alltrim(cOrigem))
 cVar5 := "&ddd_de="+alltrim(cOrigDDD)
 cVar6 := "&\ telefone_de="+alltrim(cOrigTEL)
 cVar7 := "&msg="+LigaString(alltrim(cMensagem))
 cVar8 := "&caract="+strzero(cLetras,3)
 cLink := cVar1+cVar2+cVar3+cVar4+cVar5+cVar6+cVar7+cVar8
 hE := CreateOleObject("InternetExplorer.Application")
 OLESetProperty(hE,"Visible", .T.)
 OLESetProperty(hE,"ToolBar", .T.)
 OLESetProperty(hE,"StatusBar", .T.)
 OLESetProperty(hE,"MenuBar", .T.)
 OLEInvoke(hE,"Navigate",cLink)
 SysRefresh()
 return nil

Function LigaString( cFrase )
 do while (AT( " ", cFrase ) > 0)
   cFrase := StrTran( cFrase, " ", "+" )
 enddo
 return cFrase

/*
 *ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿
 *³ ± FUNCAO: Tentar fazer envio de SMS usando o MS SMS Sender e um celular± ³
 *ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ
 */
function MSSMSSend( cTelefone , cMensagem )
  SmsCMD := [ /p:] + cTelefone + ;
       [ -m:] + cMensagem + ;
       [ /l ]
  cMacro="smssend " + SmsCMD
  MsgRun( "Enviando SMS..." )
  memowrit( "sms.bat", cMacro )
  WinExec( "sms.bat", 7 )
  if file( "sms.log" )
    MapiLOG := memoread( "sms.log" )
    if "ERROR" $ Upper(MapiLOG)
      MsgStop( MapiLOG )
    endif
    fErase( "sms.log" )
  endif
  RETURN .T.

/*
 *ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿
 *³ ± FUNCAO: ±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±± ³
 *ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ
 */
function CheckPop3( oMsgMail, cPOP3Host, cSender, cReplyTo, cMsg, cUser, cPass, bDone, cSMTPHost )
 LOCAL oTSmtp, oPop, Value:=0
 DEFAULT cSMTPHost := 'smtp.itelefonica.com.br' ,;
     cPOP3Host := 'pop3.itelefonica.com.br' ,;
     cSender := 'irochinha@itelefonica.com.br',;
     cReplyTo := 'konectiva@konectiva.com.br',;
     cMsg   := 'teste com fivewin'    ,;
     cUser  := 'irochinha'        ,;
     cPass  := '200196'          ,;
     bDone  := .t.
 if IsInternet( "www.ig.com.br" ) // InternetSt(@value,0)
   WsaStartUp()
   cIp := GETHOSTBYNAME( cPOP3Host )
   WsaCleanUp()
   oTSmtp := TSmtp():New( cIP )
   oTSmtp := TSmtp():New( cIP )
   oPop := TPOP3():New( cIP, Nil, cUser, cPass )
   oPop:bConnecting := {|| MsgRun( "Conectando a " + cPOP3Host + " (" + oPop:cIPServer + ") e esperando resposta..." ) }
   oPop:bConnected := {|| MsgRun( "Checando por mensagens de email..." ) }
   oPop:bDone   := {|| ReadEmails( oPop, oMsgMail, cPOP3Host ) }
   oPop:lDelMsgs  := .f.
   //oPop:oSocket:lDebug := .T.   // uncomment to create log file
   //oPop:oSocket:cLogFile := "pop3.log"
   oPop:GetMail( .T. )        // just check if we have mail waiting...
   oWnd:oMsgBar:InsItem( oMsgMail, 2 )
   //msgstop( 'teste' ) // oMsgMail )
   oTSmtp:end()
 endif
 Return Nil

function ReadEmails( oInMail, oMsgMail, cPOP3Host )
 local n,oWndINet
 if Len( oInMail:aMsgs ) > 0
   MsgInfo( "Total emails: " + Str( Len( oInMail:aMsgs ) ) )
   //for n = 1 to Len( oInMail:aMsgs )
   //  memowrit( "pop3"+strzero(n,3)+".msg", oInMail:aMsgs[ n ] )
   //next
   Mensagem("Existem "+alltrim(Str( Len( oInMail:aMsgs ) ))+" novas mensagens em sua caixa de email." )
   user_emails := Len( oInMail:aMsgs )
   //oMsgItemMail:cToolTip := "Existem "+alltrim(Str( Len( oInMail:aMsgs ) ))+" novas mensagens em sua caixa de email."
   //oDSKlbx3:Refresh()
 else
   //oMsgItemMail:cToolTip := "Nenhuma mensagem em " + cPOP3Host
   oWnd:SetMsg( "Nenhuma mensagem em " + cPOP3Host )
 endif
 return nil

function CheckEmails( oInMail )
 contator := ADIR( "*.msg" )
 if Contator != 0
   declare txt_nomes[ contator ]
   adir( "*.msg", txt_nomes )
   for Contator := 1 TO len( txt_nomes )
     SaveEmails( oInMail )
     ferase( txt_nomes[contador] )
   next
 endif
 SysRefresh()
 return .t.

function SaveEmails( oInMail )
 local n
 if !file( "EMAIL.DBF" )
   ESTRU_DBF := { ;
         { "DATA"  , "D", 8, 0 } , ;
         { "HORA"  , "C", 8, 0 } , ;
         { "PARA"  , "C", 30, 0 } , ;
         { "DESTINO" , "C", 30, 0 } , ;
         { "DE"   , "C", 30, 0 } , ;
         { "ORIGEM" , "C", 30, 0 } , ;
         { "ANEXO" , "C", 20, 0 } , ;
         { "ASSUNTO" , "C", 30, 0 } , ;
         { "MENSAGEM", "M", 10, 0 } , ;
         { "STATUS" , "C", 20, 0 } }
   dbCreate( "EMAIL", ESTRU_DBF )
 else
   use EMAIL new shared
 endif
 for n = 1 to Len( oInMail:aMsgs )
   oWnd:SetMsg( "Lendo "+str(n,2)+" de "+str(Len( oInMail:aMsgs )) )
   sele email
   append blank
   email->assunto := strtran( 'Subject:','',;
                 substr( oInMail:aMsgs[ n ], ;
                     at('Subject: ',oInMail:aMsgs[ n ]) ) )
   email->de   := strtran( 'From:','',;
                 substr( oInMail:aMsgs[ n ], ;
                     at('From: ' ,oInMail:aMsgs[ n ]) ) )
   email->para  := strtran( 'To:','',;
                 substr( oInMail:aMsgs[ n ], ;
                     at('To: '  ,oInMail:aMsgs[ n ]) ) )
   email->mensagem := oInMail:aMsgs[ n ]
   commit
 next
 return nil

/*
 *ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿
 *³ ± FUNCAO: ±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±± ³
 *ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ
 */
function SendMail2( cSMTPHost, cSender, aReplyTo, cMsg, cSubject, cUser, cPass, bDone )
 LOCAL oOutMail, cIp
 DEFAULT cSMTPHost := 'smtp.itelefonica.com.br'           ,;
     cSender := 'irochinha@itelefonica.com.br'        ,;
     aReplyTo := { 'konectiva@konectiva.com.br' }   ,;
     cMsg   := 'teste com fivewin'         ,;
     cSubject := 'Teste de envio de mensagem via TSmtp',;
     aAttach := { "c:\autoexec.bat", "c:\config.sys" },;
     cUser  := 'irochinha'             ,;
     cPass  := '200196'               ,;
     bDone  := .t.
 WsaStartUp()
 cIp := GETHOSTBYNAME( cSMTPHost )
 WsaCleanUp()
 oOutMail = TSmtp():New( cIp )    // mail server IP
 oOutMail:bConnecting = { || oWnd:SetMsg( "Conectando a "+cSender+"..." ) }
 oOutMail:bConnected = { || oWnd:SetMsg( "Conectado" ) }
 oOutMail:bDone   = { || oWnd:SetMsg( "Mensagem enviada com sucesso" ) }
 oOutMail:SendMail( cSender ,; // From
           aReplyTo,; // To
           cMsg  ,; // Msg Text
           cSubject,; // Subject
           aAttach ) // attached files
 return nil

/*
 *ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿
 *³ ± FUNCAO: ±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±± ³
 *ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ
 */
Function SendMail( cSMTPHost, cSender, cTo, cReplyTo, cSubject, cMsg, ;
         lReceipt, lAuth, cUser, cPass, lPop3, cPOP3Host, cAttach, cSilent )
 LOCAL oInit
 DEFAULT cSMTPHost := 'smtp.itelefonica.com.br'  ,;
     cPOP3Host := 'pop3.itelefonica.com.br'  ,;
     cTo   := 'jscrocha@terra.com.br'   ,;
     cSender := 'irochinha@itelefonica.com.br',;
     cReplyTo := 'jscrocha@terra.com.br'   ,;
     cAttach := 'c:\autoexec.bat'      ,;
     lReceipt := .t.             ,;
     lAuth  := .t.             ,;
     lPop3  := .t.             ,;
     cSilent := 'S'             ,;
     cSubject := '** teste com fivewin **'  ,;
     cMsg   := 'teste com fivewin'     ,;
     cUser  := 'irochinha'         ,;
     cPass  := '200196'
 if IsInternet( "www.ig.com.br" ) // InternetSt(@value,0)
   oInit := TSmtp():New( cSMTPHost )
   oMail := TSmtp():New( cSMTPHost, , lAuth, cUser, cPass )
   //oMail:cReplyTo    := cReplyTo
   oMail:nGMT      := 8 // 8 = Pacific Standard Time (GMT -08:00) - Adjust this to your own Time Zone!
   oMail:nDelay     := 1
   *oMail:lTxtAsAttach  := .F.    // uncomment to force txt, log and htm files as inline as opposed to attachement
   oMail:oSocket:lDebug := .T.    // uncomment to create log file
   oMail:oSocket:cLogFile := "smtp.log"
   if cSilent = 'N'
    MsgRun( "Conectando a " + cSMTPHost + " (" + oMail:cIPServer + ") a aguardando resposta..." )
    MsgRun( "Conectado e enviando email e anexos..." )
   endif
   oMail:SendMail( cSender, ;              // from/de
           { cTo }, ;              // to/para (arreglo) - I use cSender here also because it's an "autotest". Actually you would type a different address here
           cMsg,;        // Body/Mensaje
           cSubject,;      // Subject/Asunto
           { cAttach }, ;    // Array of filenames to attach/Arreglo de nombres de archivos a agregar
           { }, ;        // aCC
           { cSender }, ;    // aBCC
           lReceipt, ;      // Return Receipt/acuse de recibo
           cMsg )        // msg in HTML format/mensaje en HTML
   oInit:end()
 ELSE
   Mensagem( "Desconectado da internet. Mensagem nao pode ser enviada." )
 ENDIF
 Return Nil
/*function EmailDeliver( cPOP3Host, cSender, cTo, cMsg, cAttach, ;
               cReplyTo, cUser, cPass, cSMTPHost )
 LOCAL oTSmtp, oPop, Value:=0
 DEFAULT cSMTPHost := 'smtp.itelefonica.com.br'  ,;
     cPOP3Host := 'pop3.itelefonica.com.br'  ,;
     cSender := 'irochinha@itelefonica.com.br',;
     cTo   := 'irochinha@itelefonica.com.br',;
     cReplyTo := 'konectiva@konectiva.com.br' ,;
     cMsg   := 'teste com Fivewin/Harbour' ,;
     cAttach := "mail.prg"          ,;
     cUser  := 'irochinha'         ,;
     cPass  := '200196'
 oTSmtp     := tSendMail():New()
 oTSmtp:csmtp  := cSMTPHost
 oTSmtp:cfrom  := cSender
 oTSmtp:cto   := cTo
 oTSmtp:ccc   := ''
 oTSmtp:csubject := "Teste com Harbour TSndMail()"
 oTSmtp:cmsgbody := cMsg
 oTSmtp:cbinfile := cAttach
 oTSmtp:ngmt   := +7
 oTSmtp:cpriority := 3
 oTSmtp:ccomment := "This is a Test of Harbour TSndMail()"
 oTSmtp:send()
 RETURN oTSmtp:nError()*/

/* *************************************************************************
   @ 2.5,25.5 LISTBOX oLbx FIELDS ;
       aHBitmaps[ iif( DELETED(),3,1) ],;
         DTOC( EMAIL->DATA ), EMAIL->HORA, EMAIL->PARA, EMAIL->DESTINO, EMAIL->DE, EMAIL->ORIGEM, EMAIL->ANEXO, EMAIL->ASSUNTO, EMAIL->MENSAGEM, EMAIL->STATUS  ;
      ON LEFT DBLCLICK (CADASTRA( oLbx, "MOSTRA" ),oLbx:GoTop(), oLbx:Refresh()) ;
      HEADERS "ok",;
         "DATA", "HORA", "PARA", "DESTINO", "DE", "ORIGEM", "ANEXO", "ASSUNTO", "MENSAGEM", "STATUS"  ;
      FIELDSIZES 16,;
           FieldTam( "DATA" ),;
           FieldTam( "HORA" ),;
           FieldTam( "PARA" ),;
           FieldTam( "DESTINO" ),;
           FieldTam( "DE" ),;
           FieldTam( "ORIGEM" ),;
           FieldTam( "ANEXO" ),;
           FieldTam( "ASSUNTO" ),;
           FieldTam( "MENSAGEM" ),;
           FieldTam( "STATUS" ) ;
      ALIAS "EMAIL" ;
      FONT oFnt ;
      OF oWnd2
************************************************************************* */

/*
 *ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿
 *³ ± FUNCAO: ±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±± ³
 *ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ
 */
function _SendMail( cHost, cSender, cReplyTo, cSubject, cMsg, lReceipt, lAuth, cUser, cPass, lPop3, cPOP3Host )
 LOCAL oInit
 oInit := TSmtp():New( cHost )
 oMail := TSmtp():New( cHost, , lAuth, cUser, cPass ) // [jlalin], IBTC
 oMail:cReplyTo    := cReplyTo
 oMail:nGMT      := 8 // 8 = Pacific Standard Time (GMT -08:00) - Adjust this to your own Time Zone!
 oMail:nDelay     := 1
 *oMail:lTxtAsAttach  := .F.    // uncomment to force txt, log and htm files as inline as opposed to attachement
 oMail:oSocket:lDebug := .T.    // uncomment to create log file
 oMail:oSocket:cLogFile := "smtp.log"
 oMail:bConnecting   := {|| oWnd:SetMsg( "Conectando a " + cHost + " (" + oMail:cIPServer + ") a aguardando resposta..." ) }
 oMail:bConnected   := {|| oWnd:SetMsg( "Conectado e enviando email e anexos..." ) }
 oMail:SendMail( ;
   'jscrocha@terra.com.br', ;      // from/de
   { 'jscrocha@terra.com.br' }, ;    // to/para (arreglo) - I use cSender here also because it's an "autotest". Actually you would type a different address here
   cMsg,;        // Body/Mensaje
   cSubject,;      // Subject/Asunto
   { "smtptest.prg" }, ; // Array of filenames to attach/Arreglo de nombres de archivos a agregar
   { }, ;        // aCC
   { cSender }, ;    // aBCC
   lReceipt, ;      // Return Receipt/acuse de recibo
   cMsg )        // msg in HTML format/mensaje en HTML
 oInit:end()
 Return .T.

Function FormHtml( cSubject, cBody )
 Local cOpen := "", cClose := ""
 cHTML := ;
   '<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN"' + CRLF + ;
   '           "http://www.w3.org/TR/1999/REC-html401-19991224/loose.dtd">' + CRLF + ;
   '<html>' + CRLF + ;
   '<head>' + CRLF + ;
   ' <title>' + cSubject + '</title>' + CRLF + ;
   ' <meta http-equiv="Content-Type"' + CRLF + ;
   '    content="text/html; charset=iso-8859-1">' + CRLF + ;
   '</head>' + CRLF + ;
   '<body>' + CRLF + ;
   cBody + CRLF + ;
   '</body>' + CRLF + ;
   '</html>'
 Return cOpen + cHTML + cClose

**************************************************************************
DLL32 FUNCTION MAPILogon( UIParam AS _INT, ;
             sUser AS STRING, ;
             Password AS STRING, ;
             Flags AS _INT, ;
             Reserved AS _INT, ;
             Session AS _INT ) AS LONG PASCAL;
 FROM "MAPILogonN" LIB "Mapi32.dll"

DLL32 FUNCTION MAPISendDocuments( UIParam AS _INT, ;
             DelimStr AS STRING, ;
             FilePaths AS STRING, ;
             FileNames AS STRING, ;
             Reserved AS _INT ) AS LONG PASCAL;
 FROM "MAPISendDocuments" LIB "Mapi32.dll"

DLL32 FUNCTION RTF2HTML( source AS STRING, ;
            destination AS STRING, ;
            options AS _INT, ;
            bgcolor AS STRING, ;
            title AS STRING, ;
            dpi AS _INT ) AS LONG PASCAL;
 FROM "EXRTF2WEB" LIB "IRun.dll"

/*
Declare Function MAPILogoN Lib "MAPI.DLL" (ByVal UIParam&, ByVal sUser$, ByVal Password$, ByVal Flags&, ByVal Reserved&, Session&) As Long
Declare Function MAPILogoff Lib "MAPI.DLL" (ByVal Session&, ByVal UIParam&, ByVal Flags&, ByVal Reserved&) As Long

Declare Function MAPIFindNext Lib "MAPI.DLL" Alias "BMAPIFindNext" (ByVal Session&, ByVal UIParam&, MsgType$, SeedMsgID$, ByVal Flag&, ByVal Reserved&, MsgId$) As Long

Declare Function BMAPIReadMail Lib "MAPI.DLL" (lMsg&, nRecipients&, nFiles&, ByVal Session&, ByVal UIParam&, MessageID$, ByVal Flag&, ByVal Reserved&) As Long
Declare Function BMAPIGetReadMail Lib "MAPI.DLL" (ByVal lMsg&, Message As MAPIMessage, Recip As mapirecip, File As mapifile, Originator As mapirecip) As Long

Declare Function MAPISendDocuments Lib "MAPI.DLL" (ByVal UIParam&, ByVal DelimStr$, ByVal FilePaths$, ByVal FileNames$, ByVal Reserved&) As Long

Declare Function MAPISaveMail Lib "MAPI.DLL" Alias "BMAPISaveMail" (ByVal Session&, ByVal UIParam&, Message As MAPIMessage, Recipient As mapirecip, File As mapifile, ByVal Flags&, ByVal Reserved&, MsgId$) As Long
Declare Function mapideletemail Lib "MAPI.DLL" (ByVal Session&, ByVal UIParam&, ByVal MsgId$, ByVal Flags&, ByVal Reserved&) As Long

Declare Function MAPISendMail Lib "MAPI.DLL" Alias "BMAPISendMail" (ByVal Session&, ByVal UIParam&, Message As MAPIMessage, Recipient As mapirecip, File As mapifile, ByVal Flags&, ByVal Reserved&) As Long

Declare Function BMAPIAddress Lib "MAPI.DLL" (lInfo&, ByVal Session&, ByVal UIParam&, Caption$, ByVal nEditFields&, Label$, nRecipients&, Recip As mapirecip, ByVal Flags&, ByVal Reserved&) As Long
Declare Function BMAPIGetAddress Lib "MAPI.DLL" (ByVal lInfo&, ByVal nRecipients&, Recipients As mapirecip) As Long

Declare Function MapiDetails Lib "MAPI.DLL" Alias "BMAPIDetails" (ByVal Session&, ByVal UIParam&, Recipient As mapirecip, ByVal Flags&, ByVal Reserved&) As Long
Declare Function MapiResolveName Lib "MAPI.DLL" Alias "BMAPIResolveName" (ByVal Session&, ByVal UIParam&, ByVal UserName$, ByVal Flags&, ByVal Reserved&, Recipient As mapirecip) As Long
*/
