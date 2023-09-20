#define eFTPSERVER1 'www.sygecom.com.br'   // ENDEREÇO SERVIDOR 01 DO FTP
#define eFTPPORTA 21              // PORTA DO FTP PARA BAIXAR ATUALIZAÇÕES DO SISTEMA
#define eFTPUSER  'usuario'          // USUARIO DO FTP PARA BAIXAR ATUALIZAÇÕES DO SISTEMA
#define eFTPPASS  'senha'           // SENHA DO FTP PARA BAIXAR ATUALIZAÇÕES DO SISTEMA

FUNC MAIN()
LOCAL aDir0 := directory('SISTEMA.EXE')
LOCAL nTAMANHO:=aDir0[1,2]
LOCAL oSAY1

@ 245,423 SAY oSAY1 CAPTION " " SIZE 100,22; // tela em Hwgui...desconsiderar se não usar
FONT HFont():Add( '',0,-12,400,,,)

UPLOAD_ARQ( "/atualiza/nomesistema/bin", nTAMANHO, 'SISTEMA.EXE', oSAY, 1 )

RETURN NIL

********************************************************************
STATIC FUNCTION UPLOAD_ARQ( FTPDIR, cTamanho, farq, oSAY1, nSERVER )
********************************************************************
Local cUrl, oUrl, oFTP, cFTPSERVER:=''

IF nSERVER=1
 cFTPSERVER:=eFTPSERVER1
 cUrl := "ftp://" + eFTPUSER + ":" + eFTPPASS + "@" + cFTPSERVER
ELSE
 cFTPSERVER:=eFTPSERVER2
 cUrl := "ftp://" + eFTPUSER2 + ":" + eFTPPASS + "@" + cFTPSERVER
ENDIF

oUrl       := tUrl():New( cUrl )
oFTP       := tIPClientFtp():New( oUrl, .F. )
oFTP:nConnTimeout := 20000
oFTP:bUsePasv  := .T.
IF nSERVER=1
 oFTP:nDefaultPort := eFTPPORTA //PORTA DO FTP
 oFTP:oUrl:cUserID := eFTPUSER
ELSE
 oFTP:nDefaultPort := eFTPPORTA2 //PORTA DO FTP
 oFTP:oUrl:cUserID := eFTPUSER2
ENDIF
oFTP:oUrl:cServer := cFTPSERVER
oFTP:oUrl:cPassword := eFTPPASS

IF oFTP:Open( cUrl )
 IF !oFTP:Cwd(ftpdir) // se não achar o diretorio ele cria
   oFTP:MKD(ftpdir)  // muda o diretorio
 ENDIF
 oFTP:Cwd(ftpdir)  // muda o diretorio
 oFTP:reset()

 oFtp:exGauge := { | done | oSAY1:SETTEXT("Enviando Arquivo: "+ farq + STR((done/cTamanho)*100,4)+" %") }
 oFtp:UploadFile( farq )
 oFtp:UploadFile( ARQ_VERSAO() )

 Millisec(1000)

 oFTP:Close() // fehca a conexão do FTP
ELSE
 RETURN .F.
ENDIF
RETURN .T.
