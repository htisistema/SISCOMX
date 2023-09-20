FUNCTION Donwload_Auto(cFile)
*****************************
LOCAL ftpproto :="ftp://",;
   ftpserver:= "ftp.HTIsistemas.com.br:21",;
   ftpuser := "HTIsistema",;
   ftppass := "HTI5923",;
   cURL  :=ftpproto+ftpuser+":"+ftppass+"@"+ftpserver,;
        oUrl, oCred, oFtp

//Default(@cFile,"saccfg.ini")
//IF Internet() //Testa se tem internet disponivel.
        SR_BEGINTRANSACTION()
        TRY

        oURL :=turl():new(cURL)
        oCred:=TIPCredentials()
        oFTP :=TIPclientFTP():NEW(oUrl,,.T.)
        oFTP:nDefaultPort:=21
        oFTP:nConnTimeout:=2000
        oFTP:BusePasv  :=.T.
        IF oFTP:Open()
        atencao(cURL)
                oFTP:Cwd("/web/downloads/")  // muda o diretorio no FTP
                aLista:=oFTP:listFiles("*.*")
                //IF AScan( aLista, {|a| Upper(a[1]) == "saccfg.ini" } ) > 0        //.AND. AScan( aLista, {|a| Upper(a[1]) == "ASAPREV.NEW" } ) > 0
                        oFTP:DownLoadFile("/web/downloads/saccfg.ini") // baixa o arquivo renomeando.
                        //oFTP:DownLoadFile(DirBase()+"DOWNLOAD\ASAPREV.NEW","ASAPREV.NEW") // baixa o arquivo renomeando.
                        //oFtp:mget("*.*",".\download"+HB_PS())      // Baixar múltiplos arquivos
                        //oFtp:dele("ASAPREV.EXE")
                        //oFtp:dele("ASAPREV.NEW")
                //ENDIF
                oFTP:Close()
        ENDIF
        SR_ENDTRANSACTION()
        CATCH e
        END
//ENDIF
RETURN Nil
