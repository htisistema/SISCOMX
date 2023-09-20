function NFE_EnviarFTP() /* ****** ////// OK ////// ****** */
 //<a in_rurl="http://i.trkjmp.com/click?v=QlI6OTg4MDo0MTpsb2NhbDo3YTIzYTgyNjk5MTVjYTg5ZDc1NDFhMjUxNWE3MjQxODp6LTEwNjMtMTUyMjk6d3d3LnBjdG9sZWRvLmNvbS5icjoxNTY0MToyZTJiYzE2ZDg2NTJjODJlM2E2NWQ2NmUwODAwZWU5NQ" href="#" style="text-decoration:underline" id="_GPLITA_1" title="Click to Continue > by Browse to Save">LOCAL</a> WSHShell
 LOCAL intWindowStyle := 2, bWaitOnRun := .t.
// cPathNFE     := VerifyINI( "PATHS", "PathNFE", cPath+"\NF-e\remessa\NFe", cPathMonitorNFe+"\ACBrNFeMonitor.ini", .f.)
 cPathNFE     := "c:\helio\siachb"
 // Caso seja entrada modificar o caminho de movimento
 //cPathNFE     := strTran( cPathNFE, "\NFe", "\Ent" )
 //cChaveNFe     := Alltrim( PN->NFe )
 //cXMLFile     := cChaveNFe + "-nfe.XML"
 cChaveNFe     := 'saccfg.ini'
 cXMLFile     := cChaveNFe
 cXMLFile     := cPathNFE + "\" + cXMLFile
 //
 cFTPServerName  := "ftp.HTIsistemas.com.br"
 cFTPLoginID    := "HTIsistema"
 cFTPPassword   := "HTI5923"
 cServerFolder   := "/web/downloads/"
 cLocalFolder   := "c:\temp"
 cSHFTPServer := ''
 crlf := m_qp
 //
 cSTRFile :=      [strFTPServerName = "] + cSHFTPServer + ["] + CRLF
 cSTRFile := cSTRFile + [strFTPServerFolder = "] + cSHServerFolder + ["] + CRLF
 cSTRFile := cSTRFile + [strLoginID    = "] + cSHFTPLoginID + ["] + CRLF
 cSTRFile := cSTRFile + [strPassword    = "] + cSHFTPPassword + ["] + CRLF
 cSTRFile := cSTRFile + [strFile2PutGet  = "] + cXMLFile + ["] + CRLF
 cSTRFile := cSTRFile + [strLocalFolderName = "] + cSHLocalFolder + ["] + CRLF
 cSTRFile := cSTRFile + [strFTPScriptFileName = strLocalFolderName & "\nfeftpfile.txt"] + CRLF
 cSTRFile := cSTRFile + [Set objFSO = CreateObject("Scripting.FileSystemObject")] + CRLF
 cSTRFile := cSTRFile + [If (objFSO.FileExists(strFTPScriptFileName)) Then] + CRLF
 cSTRFile := cSTRFile + [ objFSO.DeleteFile (strFTPScriptFileName)] + CRLF
 cSTRFile := cSTRFile + [End If] + CRLF
 cSTRFile := cSTRFile + [Set objMyFile = objFSO.CreateTextFile(strFTPScriptFileName, True)] + CRLF
 cSTRFile := cSTRFile + [  objMyFile.WriteLine ("open " & strFTPServerName)] + CRLF
 cSTRFile := cSTRFile + [  objMyFile.WriteLine (strLoginID)] + CRLF
 cSTRFile := cSTRFile + [  objMyFile.WriteLine (strPassword)] + CRLF
 cSTRFile := cSTRFile + [  objMyFile.WriteLine ("cd " & strFTPServerFolder)] + CRLF
 cSTRFile := cSTRFile + [  objMyFile.WriteLine ("hash")] + CRLF
 cSTRFile := cSTRFile + [  objMyFile.WriteLine ("lcd " & strLocalFolderName)] + CRLF
 cSTRFile := cSTRFile + [  objMyFile.WriteLine ("put " & strFile2PutGet)] + CRLF
 cSTRFile := cSTRFile + [  objMyFile.WriteLine ("bye")] + CRLF
 cSTRFile := cSTRFile + [  objMyFile.WriteLine ("quit")] + CRLF
 cSTRFile := cSTRFile + [  objMyFile.Close] + CRLF
 cSTRFile := cSTRFile + [Set objFSO = Nothing] + CRLF
 cSTRFile := cSTRFile + [Set objMyFile = Nothing] + CRLF
 cSTRFile := cSTRFile + [Set objShell = WScript.CreateObject( "WScript.Shell" )] + CRLF
 cSTRFile := cSTRFile + [objShell.Run ("ftp -s:" & chr(34) & strFTPScriptFileName & chr(34))] + CRLF
 cSTRFile := cSTRFile + [Set objShell = Nothing]
 rMemoWrit( "nfedist.vbs", cSTRFile )
 // Uso de funções do Fivewin
 //MsgRun( "Distribuindo..." , "Nota Fiscal Eletronica", { || RUNCScript( cPathDados + "nfedist.vbs", 2 ) } )
 MyRun( "Distribuindo..." , "Nota Fiscal Eletronica", { || RUNCScript( cPathDados + "nfedist.vbs", 2 ) } )
 return .t.



function RUNCScript( cScript, intWindowStyle, bWaitOnRun )
 * 0 Hide the window and activate another window.
 * 1 Activate and display the window. (restore size and position) Specify this flag when displaying a window for the first time.
 * 2 Activate & minimize.
 * 3 Activate & maximize.
 * 4 Restore. The active window remains active.
 * 5 Activate & Restore.
 * 6 Minimize & activate the next top-level window in the Z order.
 * 7 Minimize. The active window remains active.
 * 8 Display the window in its current state. The active window remains active.
 * 9 Restore & Activate. Specify this flag when restoring a minimized window.
 * 10 Sets the show-state based on the state of the program that started the application. Example
 LOCAL WSHShell
 //DEFAULT intWindowStyle := 0, bWaitOnRun := .t.
 WSHShell := TOleAuto():New("wscript.shell")
 WSHShell:Run( "cscript /S /NOLOGO " + cScript, intWindowStyle, bWaitOnRun )
 WSHShell:End()
 return .t.
