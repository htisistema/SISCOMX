/*
 * $Id: errorsys.prg,v 1.11 2008/11/24 10:02:12 mlacecilia Exp $
 *
 * HWGUI - Harbour Win32 GUI library source code:
 * Windows errorsys replacement
 *
 * Copyright 2001 Alexander S.Kresin <alex@belacy.belgorod.su>
 * www - http://kresin.belgorod.su
*/
#include "common.ch"
#include "error.ch"
#include "fileio.ch"
//#include "hwgui.ch"

//STATIC LogInitialPath  //Curdrive()+ ":\" + rtrim(curdir())+ "\erros\"
        //LogInitialPath := ALLTRIM(IF(LEN(m_indiv[1,5])>0,m_indiv[1,5],'C:\'))
PROCEDURE ErrorSys
ErrorBlock( { | oError | DefError( oError ) } )
RETURN
*********************** F I M ***********************************************
STATIC FUNCTION DefError( oError )
**********************************
LOCAL cMessage,cDOSError,cLogFile := DTOS(DATE())+StrTran( TIME(), ":", "_")+".log",n
//PRIVATE LogInitialPath := ALLTRIM(IF(LEN(m_indiv[1,5])>0,m_indiv[1,5],'C:\'))
//LogInitialPath := ALLTRIM(IF(LEN(m_indiv[1,5])>0,m_indiv[1,5],'C:\'))
/*
        IF ! LEN(cod_operado)
                sr_begintransaction()
                        TRY
                                sr_getconnection():exec("COMMIT",,.f.)
                                sr_getconnection():exec("UPDATE insopera SET terminal = '',data_acess = NULL,hora_acess = '' WHERE scod_op = "+sr_cdbvalue(cod_operado),,.f.)
                                sr_committransaction()
                        CATCH E
                                tracelog(valtoprg())
                                sr_COMMITtransaction()
                        END
                sr_endtransaction()
        ENDIF
*/

IF oError:genCode == EG_ZERODIV
        RETURN 0
ENDIF
IF oError:genCode == EG_OPEN .AND. ;
        oError:osCode == 32 .AND. ;
        oError:canDefault
        NetErr( .T. )
        RETURN .F.
ENDIF
IF oError:genCode == EG_APPENDLOCK .AND. ;
        oError:canDefault
        NetErr( .T. )
        RETURN .F.
ENDIF
cMessage := ErrorMessage( oError )
IF ! Empty( oError:osCode )
        cDOSError := "(DOS Error " + LTrim( Str( oError:osCode ) ) + ")"
ENDIF
IF ! Empty( oError:osCode )
        cMessage += " " + cDOSError
ENDIF

n := 2
WHILE ! Empty( ProcName( n ) )
        cMessage += Chr( 13 ) + Chr( 10 ) + "Funcoes: " + ProcFile( n ) + "->" + ProcName( n ) + "(" + AllTrim( Str( ProcLine( n ++ ) ) ) + ")"
ENDDO
//ATENCAO(cMessage)
cMessage += Chr( 13 ) + Chr( 10 )+REPLI('*',120)
cMessage += Chr( 13 ) + Chr( 10 ) + 'Data e Hora........: ' + dtoc( date() ) + " - " + time()
cMessage += Chr( 13 ) + Chr( 10 ) + 'Empresa............: ' + memp_resa
cMessage += Chr( 13 ) + Chr( 10 ) + 'Sistema/Atualizacao: ' + sistema+' - '+mversao
cMessage += Chr( 13 ) + Chr( 10 ) + 'Usuario do Sistema.: ' + cod_operado
cMessage += Chr( 13 ) + Chr( 10 ) + 'Nome do Executavel.: ' + hb_cmdargargv()
cMessage += Chr( 13 ) + Chr( 10 ) + 'Nome do Micro......: ' + netname() + " - Nome Terminal: "+ netname(.t.)
cMessage += Chr( 13 ) + Chr( 10 ) + 'Memoria Disponivel.: ' + alltrim(str( Memory(0) )) + ' - Espaço em Disco....: ' + alltrim(str( DiskSpace() ))
cMessage += Chr( 13 ) + Chr( 10 ) + 'Pasta de Diretorio.: ' + curdir()
cMessage += Chr( 13 ) + Chr( 10 ) + 'Sistema Operacional: ' + os()
cMessage += Chr( 13 ) + Chr( 10 ) + 'Caminho do Banco...: ' + IF(LEN(m_cfg)>0,m_cfg[4],'')
//cMessage += Chr( 13 ) + Chr( 10 ) + 'Versão xHarbour....: ' + hb_version( 1 )

//MemoWrit( LogInitialPath + cLogFile, cMessage )
MemoWrit(ALLTRIM(IF(LEN(m_indiv)>0,m_indiv[1,5],IF(LEN(m_indiv)>0,m_indiv[1,5],mdefcam_imp))) + cLogFile, cMessage )
ATENCAO(cMessage)
ErrorPreview( cMessage, cLogFile )
fecha_conexaoDB()
QUIT
RETURN .F.
*********************** F I M ***********************************************
FUNCTION ErrorMessage( oError )
LOCAL cMessage
cMessage := IIf( oError:severity > ES_WARNING, "Error", "Warning" ) + " "
IF ISCHARACTER( oError:subsystem )
        cMessage += oError:subsystem()
ELSE
        cMessage += "???"
ENDIF
IF ISNUMBER( oError:subCode )
        cMessage += "/" + LTrim( Str( oError:subCode ) )
ELSE
        cMessage += "/???"
ENDIF
IF ISCHARACTER( oError:description )
        cMessage += "  " + oError:description
ENDIF
DO CASE
CASE ! Empty( oError:filename )
        cMessage += ": " + oError:filename
CASE ! Empty( oError:operation )
        cMessage += ": " + oError:operation
ENDCASE
RETURN cMessage
*********************** F I M ***********************************************
STATIC FUNCTION ErrorPreview( cMess, cArq )
*******************************************
LOCAL point:=0,lin,linhas,linha,opcao:=' ',msubject:='',;
      mlinha1:=''
PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

mtipo_imp := IF(LEN(m_indiv)>0,m_indiv[1,18],'M')


SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
//op_tela(10,20,50,90,' E R R O   D O   S I S T E M A ',,1)
/*
lin := MEMOLINE(MEMOREAD(ALLTRIM(IF(LEN(m_indiv)>0,m_indiv[1,5],mdefcam_imp))+cArq),120,1,,)
linhas := linha := 0
linhas := MLCOUNT(MEMOREAD(ALLTRIM(IF(LEN(m_indiv)>0,m_indiv[1,5],mdefcam_imp))+cArq),120)
FOR linha = 1 TO  linhas
        lin := MEMOLINE(MEMOREAD(ALLTRIM(IF(LEN(m_indiv)>0,m_indiv[1,5],mdefcam_imp))+cArq),120,linha,,)
        IF linha = 1
                mlinha1 := lin
        ENDIF
        DEVPOS(ROW()+1,00);DEVOUT(ALLTRIM(lin))
NEXT

mensagem('Pressione qualquer tecla para continuar...')
@ 30,00 GET opcao
READ
*/
IF imp_arq('ERROSYS.REL','R')
        imprt(mtipo_imp,'C')
        lin := MEMOLINE(MEMOREAD(ALLTRIM(IF(LEN(m_indiv)>0,m_indiv[1,5],mdefcam_imp))+cArq),120,1,,)
        linhas := linha := 0
        linhas := MLCOUNT(MEMOREAD(ALLTRIM(IF(LEN(m_indiv)>0,m_indiv[1,5],mdefcam_imp))+cArq),120)
        FOR linha = 1 TO  linhas
                lin := MEMOLINE(MEMOREAD(ALLTRIM(IF(LEN(m_indiv)>0,m_indiv[1,5],mdefcam_imp))+cArq),120,linha,,)
                DEVPOS(PROW()+1,00);DEVOUT(ALLTRIM(lin))
        NEXT
        imprt(mtipo_imp,'N')
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('ERROSYS.REL')
ENDIF
msubject :=STRTRAN('Error da Empresa:'+memp_resa+' - Operador: '+cod_operado+' - Data:'+DTOC(DATE())+' as '+TIME(),' ','%20')
//MYRUN('lssendmail.exe -from="erroHTI@HTIsistemas.com.br" -to="erroHTI@HTIsistemas.com.br" -subject='+msubject+'  -messagefile='+ALLTRIM(m_indiv[1,5])+cArq+' -messagetype=txt -attached='+ALLTRIM(m_indiv[1,5])+cArq+' -user="erroHTI@HTIsistemas.com.br" -password="HTI6821" -host="smtp.HTIsistemas.com.br" -port="25" -ssl="n" -tls="n"')
//MYRUN('lssendmail.exe -from="error@htisistemas.com" -to="error@htisistemas.com" -subject='+msubject+'  -messagefile='+ALLTRIM(IF(LEN(m_indiv)>0,m_indiv[1,5],mdefcam_imp))+cArq+' -messagetype=txt -attached='+ALLTRIM(IF(LEN(m_indiv)>0,m_indiv[1,5],mdefcam_imp))+cArq+' -user="error@htisistemas.com" -password="error" -host="mail.htisistemas.com" -port="1025" -ssl="n" -tls="n"')
//wvw_lclosewindow()
RETURN Nil
*********************** F I M ***********************************************
