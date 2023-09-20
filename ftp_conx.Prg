Function downloads_ftp()
************************
public cserver,cuser,cpassword,c := 1

cserver := 'htisistemas.com'
cuser := 'htisistemas.com'
cpassword := 'hti682110'
op_tela(01,01,50,100,,,1)
comander()
Return

Function Comander()
*******************
local com,arq,pas
com := space(77)
arq := 'leia-me.txt'
pas := space(73)

c := c + 1
@ c,0 say "ftp:  " get com
read
c := c + 1
if lower(com) = "logar"
        @ c,0 say "servidor: " get cserver
        c = c + 1
        @  c,0 say "usuario:  " get cuser
        c := c + 1
        @c,0 say "senha:    " get cpassword
        read
        cserver := alltrim(cserver)
        cuser := alltrim(cuser)
        cpassword := alltrim(cpassword)
        comander()
endif
com := alltrim(com)
if lower(substr(com,0,6))="baixar"
        c := c + 1
        @c,0 say "Arquivo: " get arq
        c := c + 1
        @c,0 say "Pasta: " get pas
        read
        dftp( lower(alltrim(arq)),lower(alltrim(pas)) )
        comander()
endif

if lower(substr(com,0,6))="enviar"
        uftp(lower(substr(alltrim(com),7)) )
        comander()
endif

if lower(com)="sair"
        cuser := space(60)
        cserver := cuser
        cpassword := cuser
        comander()
endif
if lower(com)="fechar"
        fecha_tela()
        return
endif


FUNCTION DFTP( cCarpeta , cpasta)
*********************************
LOCAL aFiles
LOCAL cUrl
LOCAL cStr
LOCAL lRetorno  := .T.
LOCAL oUrl
LOCAL oFTP
LOCAL cFile     := ""


/*
Local cLogin := 'htisistmas.com'
Local cSenha := 'hti682110'
Local cServidor := "ftp.htisistemas.com"  // seu servidor

curl := "ftp://"+cLogin+":"+cSenha+"@"+cServidor

oFTP := TIpClientFtp():new( curl, .F. )
*/





cUrl      := ALLTRIM("ftp://" + ALLTRIM(cUser) + ":" + ALLTRIM(cPassword) + "@" + ALLTRIM(cServer)+ "/" + ALLTRIM(cPasta))
//cUrl      := ALLTRIM("ftp." + ALLTRIM(cUser) + ":" + ALLTRIM(cPassword) + "@" + ALLTRIM(cServer)+ "/" + ALLTRIM(cPasta))
//cUrl      := 'ftp://htisistemas.com:hti682110@htisistemas.com/public/downloads'
//cUrl      := "ftp.htisistemas.com:hti682110@htisistemas.com"
//atencao(cUrl)
// Leemos ficheros a enviar
aFiles := { { cCarpeta, 1, 2, 3 } }
//aFiles := cCarpeta
//aFiles := Directory( cCarpeta )
atencao( sr_ShowVector( aFiles ))

IF Len( aFiles ) > 0
        mensagem('Conectando com o servidor...')
        oUrl              := tUrl():New( cUrl )
        //atencao('ok')
        oFTP              := tIPClientFtp():New( oUrl, .T. )
        //oFTP              := tIPClientFtp():New( cUrl, .F.)
        oFTP:nConnTimeout := 20000
        oFTP:bUsePasv     := .T.

        // Comprobamos si el usuario contiene una @ para forzar el userid
        mensagem('Verificando se o usuario tem acesso...')
        IF At( "@", cUser ) > 0
                oFTP:oUrl:cServer   := cServer
                oFTP:oUrl:cUserID   := cUser
                oFTP:oUrl:cPassword := cPassword
        ENDIF

        IF oFTP:Open( cUrl )
                mensagem('Fazendo DOWNLOADS no arquivo:'+cFile[ 1 ])
                FOR each cFile IN afiles
                        IF !oFtp:DownloadFile( cFile[ 1 ] )
                                lRetorno := .F.
                                EXIT
                        ELSE
                                lRetorno := .t.
                        ENDIF
                NEXT
                oFTP:Close()
        ELSE
                cStr := "Nao se pode conectar com o servidor FTP" + " " + oURL:cServer
                IF oFTP:SocketCon == NIL
                        cStr += Chr( 13 ) + Chr( 10 ) + "Conexao nao inicializada"
                ELSEIF InetErrorCode( oFTP:SocketCon ) == 0
                        cStr += Chr( 13 ) + Chr( 10 ) + "Resposta do servidor:" + " " + oFTP:cReply
                ELSE
                        cStr += Chr( 13 ) + Chr( 10 ) + "Error na conexao:" + " " + InetErrorDesc( oFTP:SocketCon )
                ENDIF
                atencao(cStr)
                lRetorno := .F.
        ENDIF
ENDIF
RETURN lRetorno

FUNCTION UFTP( cCarpeta , cpasta)

LOCAL aFiles
LOCAL cUrl
LOCAL cStr
LOCAL lRetorno  := .T.
LOCAL oUrl
LOCAL oFTP
LOCAL cFile     := ""

cUrl := "ftp://" + cUser + ":" + cPassword + "@" + cServer

// Leemos ficheros a enviar
aFiles := Directory( cCarpeta )

IF Len( aFiles ) > 0

        oUrl              := tUrl():New( cUrl )
        oFTP              := tIPClientFtp():New( oUrl, .T. )
        oFTP:nConnTimeout := 20000
        oFTP:bUsePasv     := .T.

   // Comprobamos si el usuario contiene una @ para forzar el userid
        IF At( "@", cUser ) > 0
                oFTP:oUrl:cServer   := cServer
                oFTP:oUrl:cUserID   := cUser
                oFTP:oUrl:cPassword := cPassword
        ENDIF

        IF oFTP:Open( cUrl )
                FOR each cFile IN afiles
                        ? "arquivo : " + cFile[ 1 ]
                        IF !oFtp:UploadFile( cFile[ 1 ] )
                                lRetorno := .F.
                                EXIT
                        ELSE
                                lRetorno := .t.
                        ENDIF

                NEXT
                oFTP:Close()
        ELSE
                cStr := "No se ha podido conectar con el servidor FTP" + " " + oURL:cServer
                IF oFTP:SocketCon == NIL
                        cStr += Chr( 13 ) + Chr( 10 ) + "Conexión no inicializada"
                ELSEIF InetErrorCode( oFTP:SocketCon ) == 0
                        cStr += Chr( 13 ) + Chr( 10 ) + "Respuesta del servidor:" + " " + oFTP:cReply
                ELSE
                        cStr += Chr( 13 ) + Chr( 10 ) + "Error en la conexión:" + " " + InetErrorDesc( oFTP:SocketCon )
                ENDIF
                ? cStr
                lRetorno := .F.
        ENDIF
ENDIF
RETURN lRetorno



//
// Exemplo para download de arquivo especifico de um ftp
// Manoel Angeiras, 2013
//

#include "directry.ch"

function ftp_main()
***************

cServer   := "HTIsistemas.com.br"
cUser     := "HTIsistema"
cPassword := "HTI5923"
cUrl      := "ftp://" + cUser + ":" + cPassword + "@" + cServer
oUrl      := tUrl():New( cUrl )
cFile     := "saccfg.ini"

Alert("Vai tentar conectar com FTP...")
if empty( oUrl )
        Alert("Erro na comunicacao com o servidor FTP: "+ cUrl)
        quit
endif

oFtp              := tIPClientFTP():New(oUrl,,.T.)
oFtp:nConnTimeout := 20000

Alert("Inicializando FTP...")
if empty( oFtp ) .or. valtype( oFtp ) == "U" .or. oFtp == NIL
        Alert("Erro na inicializacao do FTP")
        quit
endif

Alert("Tentar abrir para download de arquivo...")
if oFtp:open()
        if !oFtp:cwd("versoes") // vai para diretorio com a nova versao
                Alert("Erro na mudanca de diretorio do FTP")
                quit
        endif

        if !oFtp:downloadFile( "pasta_local" + cFile, cFile )
                Alert("Erro no download " + cFile )
                oFtp:Close()
                quit
        endif
        oFtp:Close()
else
        Alert("Erro para abrir FTP")
        quit
endif
Alert("Download OK")
RETURN


FUNCTION TESTE_FTP
******************
LOCAL oFtp, cRoot
LOCAL cUSBStick:= "ftp://HTIsistema:HTI5923@ftp.HTIsistemas.com.br"

oFtp:= TIpClientFtp():new( cUSBStick )
//oFtp:exGauge:= (@FtpProgress())
IF .NOT. oFtp:open()
        atencao("Erro de Conexão FTP! Verifique sua internet!!!"+(oFtp:lastErrorMessage()))
        return
endif
// baixar arquivo cliente
do while .t.
        oFtp:downloadFile("/web/downloads/saccfg.ini")
        wretorno:= oFtp:cReply
        if valtype(wretorno) == "U" // a net caiu e retornou indefinido o conteúdo de wretorno
                delete file &varqcliZIP
                atencao("Impossibilidade de continuar, conexão falhou!!!")
                exit
        endif
        if substr(wretorno,1,3) == "226" // baixou corretamente
                oFtp:dele("/web/downloads/saccfg.ini")
                exit
        elseif substr(wretorno,1,3) == "550" // arquivo não existe
                exit
        else
                atencao("Erro->"+wretorno)
                exit
        endif
enddo
oFtp:close()


/*
#include "hbgtinfo.ch"

REQUEST HB_LANG_PT
REQUEST HB_CODEPAGE_PT850
REQUEST HB_GT_WVT_DEFAULT

Function tela_full()
 Local nModo := 0

 HB_LANGSELECT('PT')
 HB_SETCODEPAGE('PT850') // em portugues

 HB_GtInfo( HB_GTI_FONTNAME, "Lucida Console" ) // fonte
 HB_GtInfo( HB_GTI_WINTITLE, "Teste de Modo de Tela" ) // titulo da tela

 Do While LastKey() != 27

 SetColor( "GR+/N" )

 @ 10, 25 Say "0 = Modo Janela WideScreen"
 @ 11, 25 Say "1 = Modo Janela Pequena"
 @ 12, 25 Say "2 = Tela Cheia (Full Screen)"

 @ 14, 25 Say "Escolha o Modo:" GET nModo Pict "9" Valid nModo <= 2
 Read

 SetColor( "G+/N" )

 Do Case

 Case nModo = 0 // Modo Janela WideScreen
  HB_GtInfo( HB_GTI_MAXIMIZED, .F. )
  HB_GtInfo( HB_GTI_ISFULLSCREEN, .F. )
  HB_GtInfo( HB_GTI_MAXIMIZED, .T. )
  @ 16, 25 Say Space( 50 )
  @ 16, 25 Say "0 = Vocˆ est em Modo Janela WideScreen"

 Case nModo = 1 // Modo Janela Pequena
  HB_GtInfo( HB_GTI_MAXIMIZED, .F. )
  HB_GtInfo( HB_GTI_ISFULLSCREEN, .F. )
  HB_GtInfo( HB_GTI_FONTSIZE, 26 )
  HB_GtInfo( HB_GTI_FONTWIDTH, 12 )
  /*
   Neste caso, e em caso de alternancia, precisa
   duplicar para restaurar a tela
  */
/*
  HB_GtInfo( HB_GTI_FONTSIZE, 26 )
  HB_GtInfo( HB_GTI_FONTWIDTH, 12 )
  @ 16, 25 Say Space( 50 )
  @ 16, 25 Say "1 = Vocˆ est em Modo Janela Pequena"

 Case nModo = 2 // Tela Cheia (Full Screen)
  HB_GtInfo( HB_GTI_MAXIMIZED, .F. )
  HB_GtInfo( HB_GTI_ISFULLSCREEN, .F. )
  HB_GtInfo( HB_GTI_ISFULLSCREEN, .T. )
  @ 16, 25 Say Space( 50 )
  @ 16, 25 Say "2 = Vocˆ est em Tela Cheia (Full Screen)"

 End Case

 EndDo

Return Nil
*/