Function downloads()
********************
public cserver,cuser,cpassword,c := 1

cserver := space(60)
cuser := cserver
cpassword := cuser
@ c,0 say "GustavoAle - File Transfer Protocol (FTP)"
comander()
Return
*********************************** F I M *******************************
Function Comander()
********************
local com,arq,pas

com := space(77)
arq := space (71)
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
        return
endif
RETURN
*********************************** F I M *******************************
FUNCTION DFTP( cCarpeta , cpasta)
*********************************
LOCAL aFiles
LOCAL cUrl
LOCAL cStr
LOCAL lRetorno  := .T.
LOCAL oUrl
LOCAL oFTP
LOCAL cFile     := ""

cUrl      := "ftp://" + cUser + ":" + cPassword + "@" + cServer + "/" + cPasta

// Leemos ficheros a enviar
aFiles := { { cCarpeta, 1, 2, 3 } }
//     aFiles := Directory( cCarpeta )

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
                        IF !oFtp:DownloadFile( cFile[ 1 ] )
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
                ELSEIF hb_InetErrorCode( oFTP:SocketCon ) == 0
                        cStr += Chr( 13 ) + Chr( 10 ) + "Respuesta del servidor:" + " " + oFTP:cReply
                ELSE
                        cStr += Chr( 13 ) + Chr( 10 ) + "Error en la conexión:" + " " + hb_InetErrorDesc( oFTP:SocketCon )
                ENDIF
                ? cStr
                lRetorno := .F.
        ENDIF
ENDIF
RETURN lRetorno
*********************************** F I M *******************************
FUNCTION UFTP( cCarpeta , cpasta)
*********************************
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
                        atencao("arquivo : " + cFile[ 1 ])
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
                ELSEIF hb_InetErrorCode( oFTP:SocketCon ) == 0
                        cStr += Chr( 13 ) + Chr( 10 ) + "Respuesta del servidor:" + " " + oFTP:cReply
                ELSE
                        cStr += Chr( 13 ) + Chr( 10 ) + "Error en la conexión:" + " " + hb_InetErrorDesc( oFTP:SocketCon )
                ENDIF
                ? cStr
                lRetorno := .F.
        ENDIF
ENDIF
RETURN lRetorno