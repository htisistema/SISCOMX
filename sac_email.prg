function blat( cbody ,cserver ,cto ,cf ,csubject ,cu ,cpw ,cattach, lHtml )
***************************************************************************
/* BLAT.EXE blat.txt
*     -server mail.fabricapet.com.br
*     -to irochinha@itelefonica.com.br
*     -f contato@empresa.com.br
*     -subject "**** confirmacao de pedido ****"
*     -u usuario@empresa.com.br
*     -pw pass123
*     -log "<SPAN class=posthilit>email</SPAN>.log"
*     -debug
*     -attach "EC030017.RTF"

-body "08892-SADIA S.A. (39)"
-f usuario@bol.com.br
-to destino1@qq.com.br,destino2@qqq.com.br
-attach F:\JAF_NFE\35110706206061000196550000000000801137733672-nfe.xml
-attach F:\JAF_NFE\35110706206061000196550000000000801137733672.pdf
-subject "SISTEMA JAF ENVIO XML E PDF"
-debug
-log erro.txt
-server smtps.bol.com.br
-u usuario@bol.com.br
-pw suaSenha
-mailfrom usuario@bol.com.br


Prezado(a) Jose Helio Beltrao,

Segue informações sobre seu veículo que encontra-se em manutenção.

Para visualizar ou imprimir seu Orçamento, clique aqui.
Atenção: Mensagem automática gerada pelo sistema, por favor não responda. Para esclarecer suas dúvidas, por favor entre em contato com nosso departamento técnico, através do telefone: 41 3247-5700 ou pelo e-mail: ancaynet@gmail.com
Att,
CANDEIAS REGULAGEM ELETRONICA
Fone 81-3478-0888
E-mail: antonioporpino@hotmail.com

*/

BlatCMD := 'BLAT.EXE'+' -install smtp.HTIsistemas.com.br suporte@HTIsistemas.com.br'+m_qp
/*
cMacro := "BLAT.EXE " + BlatCMD
rMemoWrit( "blat.bat", cMacro )
WinExec( cMacro, 0 )
*/
/*
mensagem('emissao de email...')
cbody := '00001 - CLIENTE TESTE'
cserver := 'email.HTIsistemas.com.br'
cto := 'helio@HTIsistemas.com.br'
cf  := 'suporte@HTIsistemas.com.br'
csubject := 'teste de email'
cu := 'suporte@HTIsistemas.com.br'
cpw := 'supoorte'
CL_Email := 'suporte@HTIsistemas.com.br'
*/
//lHtml := .t.
//cattach := 'c:\helio\siachb\siscom.prg'
//CL_Email := 'suporte@HTIsistemas.com.br'

//BlatCMD := BlatCMD +'BLAT.EXE'+ [ blat.txt] + ;
BlatCMD := BlatCMD +'BLAT.EXE'+ ;
        [ -body "]    + alltrim(cbody) + ["] + ;
        [ -t "]   + alltrim(cto) + ["] + ;
        [ -server "] + alltrim(cserver) + ["] + ;
        [ -f "] + alltrim(cf) + ["] + ;
        [ -s "] + alltrim(csubject) + ["] + ; //;-r ]    + [ -replyto "] + alltrim(CL_Email) + ["] + [ -returnpath "] + alltrim(CL_Email) + ["] +;
        [ -u "]    + alltrim(lower(cu)) + ["] + ;
        [ -pw "]   + alltrim(lower(cpw)) + ["] + ;  //[ -log '<SPAN class="posthilit">email</SPAN>.log' -debug ]  + iif( lHtml, [ -html ], [] )
        [ -log "email.log"]
if ! empty( cAttach )
        if ValType( cAttach ) == "A"
                For nEle := 1 To Len( cAttach )
                        BlatCMD := BlatCMD + [ -attach "] + alltrim(cAttach[ nEle ]) + ["]
                Next
        else
                BlatCMD := BlatCMD + [ -attach "] + alltrim(cAttach) + ["]
        endif
endif
/*
if lHtml
        cBody := FormHtml( cSubject, cBody )
endif
*/

BlatCMD := BlatCMD + m_qp + 'pause'


//rMemoWrit( "blat.txt", cbody + "Enviado via BLAT.EXE" )
rMemoWrit( "blat.bat", BlatCMD )
fErase( 'email.log' )
//
//cMacro := "BLAT.EXE " + BlatCMD
*/
cMacro := BlatCMD

rMemoWrit( "blat.bat", cMacro )

WinExec( cMacro, 7 )
//xhbrun(cMacro)
//myrun2("blat.bat")

INKEY(.10,20)

if file( 'email.log' )
        BlatLOG := memoread( 'email.log' )
        if "ERROR" $ Upper(BlatLOG)
                atencao( BlatLOG )
                return .f.
        endif
        if "535" $ Upper(BlatLOG)
                atencao("Erro: Authentication Failed" + m_qp + m_qp + "Senha/Login de autenticacao com erro.")
                return .f.
        endif
endif
atencao('EMAIL foi enviado com sucesso...')
RETURN .T.
************************************ f i m ******************************************
Function rMemoWrit( _aquivo_, _conteudo_ )
*******************************************
nHandle := fCreate( _aquivo_ )
fWrite( nHandle, _conteudo_, LEN( _conteudo_ ) )
fClose( nHandle )
RETURN .T.
************************************ f i m ******************************************
Function WinExec( oque, num )
*******************************************
__Run( oque,num )
RETURN .T.
************************************ f i m ******************************************
Function FormHtml( cSubject, cBody )
*******************************************
Local cOpen
cOpen := '<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/1999/REC-html401-19991224/loose.dtd">' + m_qp
cClose := m_qp + 'Nossa empresa envia <SPAN class=posthilit>email</SPAN> somente para pessoas e empresas cadastradas em nosso sistema.' + m_qp + ;
             'Caso tenha duvidas favor entrar em contato com nossa central de atendimento ao cliente.'
cHTML := ;
'<html>' + m_qp + ;
'<head>' + m_qp + ;
' <meta http-equiv="Content-Type"' + m_qp + ;
'    content="text/html; charset=iso-8859-1">' + m_qp + ;
'</head>' + m_qp + ;
'<body>' + m_qp + ;
'<pre>' + m_qp + ;
cBody  + m_qp + ;
'</pre>' + m_qp + ;
'</body>' + m_qp + ;
'</html>'
Return cOpen + cHTML + cClose


