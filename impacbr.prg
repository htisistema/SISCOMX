#include "fileio.ch"
#include "commands.ch"
#define  ETX CHR(3)
#define  CR  CHR(13)
#define  LF  CHR(10)
#define ENT_TXT  'ENT.TXT'
#define SAI_TXT  'SAI.TXT'
#define TMP_TXT  'ENT.TMP'

Static sENDER   := ''  ,;
SEM_ERRO := .F. ,;
sSECHORA := 0   ,;
sRETHORA := ''  ,;
sSECCOO  := 0   ,;
sNUMCUPOM:= ''  ,;
sSECEST  := 0   ,;
sESTADO  := ''  ,;
sMODELO  := ''

#ifdef __XHARBOUR__
   Static sSOCKET
#ENDIF
************************************************************************
FUNCTION IBR_INIT(ENDERECO)   // Abre a comunica��o com o ACBrmonitor
* ENDERECO -> Diretorio ( quando usando TXT)  Ex: C:\ACBR\ , ou
*             IP:PORTA  (Socket) Ex: 192.168.0.1:3434
************************************************************************
LOCAL P, RET := .T., TFIM, IP, PORTA, RESP

IF ! EMPTY(sENDER)  // J� est� aberto...
        RETURN .t.
ENDIF
SEM_ERRO := .F.
sENDER   := ALLTRIM(ENDERECO)
sMODELO  := ''
IP       := ''
PORTA    := 0
//atencao(IP+' Porta:'+STRZERO(porta,4))
//atencao(endereco)
#ifdef __XHARBOUR__
        IF ! (PATH_DEL $ sENDER)   /// Abrir comunicacao TCP/IP
                P := at(':',sENDER)
                IF P = 0
                        P := LEN(sENDER)+1
                ENDIF
                IP    := SUBSTR(sENDER,1,P-1)
                IF EMPTY(IP)
                        RET := .F.
                ELSE
                        PORTA := VAL(SUBSTR(sENDER,P+1))
                        IF PORTA = 0
                                PORTA := 3434
                        ENDIF
                        inetinit()
                        RET := .F.

                        TFIM := SECONDS() + 5             /// Tenta conectar durante 5 segundos ///
                        WHILE SECONDS() < TFIM .and. ! RET
                                sSOCKET := inetconnect(IP,PORTA)
                                RET     := (ineterrorcode(sSOCKET) = 0)
                                INKEY(0.10,250)
                        ENDDO
                ENDIF

                IF RET
                        InetSetTimeout( sSOCKET, 3000 )   // Timeout de Recep��o 3 seg //
                        RESP := InetRecvEndBlock( sSOCKET, ETX )
                        //atencao(resp)
                        IF PORTA = 3434
                                //IF m_indiv[1,37] = 'C:\ACBRMONITORPLUS\'
                                //        RET  := ('ACBrMonitorPlus' $ RESP )   // Recebeu as boas vindas ?
                                //ELSE
                                        RET  := ('ACBrMonitor' $ RESP )   // Recebeu as boas vindas ?
                                //ENDIF
                        ENDIF
                ELSE
                        atencao('Nao foi possivel abrir o SOCKET...')
                ENDIF
        ENDIF
#ENDIF
IF PATH_DEL $ sENDER   /// Abrir comunicacao TXT
        IF RIGHT(sENDER,1) <> PATH_DEL
                sENDER := sENDER + PATH_DEL
        ENDIF
ENDIF
IF ! RET
        sENDER := ''
ENDIF
RETURN RET
#ifdef __XHARBOUR__
        IF ! PATH_DEL $ sENDER   /// Fechar comunicacao TCP/IP
                IF ! EMPTY(sENDER)
                        inetsendall( sSocket, 'ACBR.bye' )
                ENDIF
                IF sSOCKET <> NIL
                        inetclose(sSOCKET)
                        inetdestroy(sSOCKET)
                        inetcleanup()
                        INKEY(.10,200)
                        sSOCKET := NIL
                ENDIF
        ENDIF
#ENDIF
sENDER  := ''
sMODELO := ''
RETURN .t.
************************************************************************
/*
FUNCTION IBR_ABERTA()   // Retorna .t. se a COM ja est� aberta
************************************************************************
RETURN ! EMPTY(sENDER)
*/
************************************************************************
FUNCTION IBR_OK(RESP)   // Retorna .T. se a String inicia com OK:
************************************************************************
RETURN (SUBSTR(RESP,1,3) == 'OK:')
***********************************************************************
FUNCTION IBR_ABRE_GAVETA()  // Abre Gaveta da Impressora, retorna .t. se abriu
***********************************************************************
IBR_COMANDO( 'GAV.AbreGaveta', , 6 )
RETURN IBR_GAVETA_ABERTA()

***********************************************************************
FUNCTION IBR_GAVETA_ABERTA()  // Retorna .t. se Gaveta est� aberta
***********************************************************************
RETURN (upper(SUBSTR(IBR_COMANDO( 'GAV.GavetaAberta' ),5,5)) = 'TRUE')

***********************************************************************
FUNCTION IBR_COMANDO(CMD,VET_PARAM,ESPERA,TENTA,MMENS)
* Funcao de uso interno para enviar os comandos para a impressora e
* registrar os erros retornados pela mesma. Exibe os erros se existirem
************************************************************************
LOCAL RET_IMP, REQ, RESP, TEMPOR, TINI:=0, TFIM, BLOCO, BYTES, I, TIPO_PARAM
IF EMPTY(sENDER)
        IF ! SEM_ERRO
                atencao('ACBrMonitor nao foi inicializado.')
        ENDIF
        RETURN ''
ENDIF
DEFAULT VET_PARAM   to {} ,;
ESPERA      to 0  ,;
TENTA       to .t.
///// Codificando CMD de acordo com o protocolo /////
RET_IMP  := ''
//atencao(cmd)
IF ! EMPTY(m_indiv[1,43])
        IF ! ('.' $ LEFT(CMD,7))   // Informou o Objeto no Inicio ?
                CMD := 'NFE.'+CMD       // Se nao informou assume ECF.
        ENDIF
ENDIF
//ATENCAO(CMD)
IF LEN(VET_PARAM) > 0
         CMD := CMD + '('
        FOR i = 1 TO LEN(VET_PARAM)
                TIPO_PARAM := VALtype(VET_PARAM[I])

                IF TIPO_PARAM = 'C'
                // Converte aspas para simples para aspas duplas, para o ACBrMonitor
                        CMD := CMD + '"'+ STRTRAN( RTrim(VET_PARAM[I]), '"', '""' ) + '"'

                ELSEIF TIPO_PARAM = 'N'
                        CMD := CMD + STRTRAN(ALLTRIM(Str(VET_PARAM[I])),',','.')

                ELSEIF TIPO_PARAM = 'D'
                        CMD := CMD + dtoc( VET_PARAM[I] )

                ELSEIF TIPO_PARAM = 'L'
                        CMD := CMD + iif( VET_PARAM[I],'TRUE','FALSE')

                ENDIF

                CMD := CMD + ', '
        next
        CMD := SUBSTR(CMD,1,LEN(CMD)-2) + ')'
ENDIF

CMD := CMD + CR+LF+'.'+CR+LF
//atencao(cmd)
IF ! SEM_ERRO
        ESPERA := max(ESPERA,5)
ELSE
        TENTA := .F.
ENDIF
IF PATH_DEL $ sENDER               /// E' TXT ? ///
        //atencao(sENDER + 'ENTNFE.TXT')
        REQ    := sENDER + 'ENTNFE.TXT'
        RESP   := sENDER + SAI_TXT
        TEMPOR := sENDER + TMP_TXT
        //////// Transmitindo o comando /////////
        TFIM := SECONDS() + 3    // Tenta apagar a Resposta anterior em ate 3 segundos
        WHILE file( RESP )
                IF ferase( RESP ) = -1
                        IF (SECONDS() > TFIM)
                                //RET_IMP := 'ERRO: Nao foi possivel apagar o arquivo: ('+RESP+') '+ferror()
                                RET_IMP := 'ERRO: Nao foi possivel apagar o arquivo de RESPOSTA'
                                //ErrorOsMessage(ferror())
                        ELSE
                                INKEY(.10,20)
                        ENDIF
                ENDIF
        ENDDO
        WHILE EMPTY(RET_IMP)
                TFIM := SECONDS() + 3    // Tenta apagar a Requisicao anterior em ate 3 segundos
                WHILE file( REQ )
                        IF ferase( REQ ) = -1
                                IF (SECONDS() > TFIM)
                                        //RET_IMP := 'ERRO: Nao foi possivel apagar o arquivo de REQUISICAO: ('+REQ+') '+ferror()
                                        RET_IMP := 'ERRO: Nao foi possivel apagar o arquivo de REQUISICAO'
                                ELSE
                                        INKEY(.10,20)
                                ENDIF
                        ENDIF
                ENDDO
                // Criando arquivo TEMPORARIO com a requisicao //
                IF EMPTY(RET_IMP)
                        IF ! Grava_ARQ(TEMPOR, CMD)
                                //RET_IMP := 'ERRO: Nao foi possivel criar o arquivo: ('+TEMPOR+') '+ferror()
                                RET_IMP := 'ERRO: Nao foi possivel criar o arquivo TEMPORARIO'
                        ENDIF
                ENDIF
                // Renomeando arquivo TEMPORARIO para REQUISICAO //
                IF EMPTY(RET_IMP)
                        IF frename(TEMPOR, REQ) = -1
                                //RET_IMP := 'ERRO: Nao foi possivel renomear ('+TEMPOR+') para ('+REQ+') '+;
                                RET_IMP := 'ERRO: Nao foi possivel renomear o (ARQUIVO TEMPORARIO)  para (REQUISICAO) ' //+ferror()
                        ENDIF
                ENDIF
                // Espera ACBrMonitor apagar o arquivo de Requisicao em ate 7 segundos
                // Isso significa que ele LEU o arquivo de Requisicao
                TFIM := SECONDS() + 7
                WHILE EMPTY(RET_IMP) .and. (SECONDS() <= TFIM) .and. file(REQ)
                        INKEY(.10,20)
                ENDDO
                IF file(REQ)
                        IF ! TENTA
                                RET_IMP := 'ERRO: ACBrMonitor nao esta ativo'
                        ELSE
                                IF op_simnao('S','O ACBrMonitor nao esta� ativo Deseja tentar novamente:') = 'N'
                                        RET_IMP := 'ERRO: ACBrMonitor nao esta ativo'
                                ELSE
                                        RET_IMP := ''
                                        IF ! file(REQ)  // ACBrMonitor "acordou" enquanto perguntava
                                                exit
                                        ENDIF
                                ENDIF
                        ENDIF
                ELSE
                        exit
                ENDIF
        ENDDO
        //////// Lendo a resposta ////////
        TINI   := SECONDS()
        WHILE EMPTY(RET_IMP)
                IF file(RESP)
                        RET_IMP := ALLTRIM(memoread( RESP ))
                ENDIF
                IF EMPTY(RET_IMP)
                        IF SECONDS() > (TINI + 5)
                                mensagem('Aguardando resposta do ACBrMonitor:  '+; // '('+ProcName(2)+') '+;
                                Trim(str(TINI + ESPERA - SECONDS(),2)))
                        ENDIF
                        IF SECONDS() > (TINI + ESPERA)
                                IF ! TENTA
                                        RET_IMP := 'ERRO: Sem resposta do ACBrMonitor em '+ALLTRIM(str(ESPERA))+;
                                                ' segundos (TimeOut)'
                                ELSE
                                        IF op_simnao('S','O ACBrMonitor nao esta respondendo Deseja tentar novamente ?') <> 'S'
                                                RET_IMP := 'ERRO: Sem resposta do ACBrMonitor em '+ALLTRIM(str(ESPERA))+;
                                                        ' segundos (TimeOut)'
                                        ELSE
                                                RET_IMP := ''
                                                TINI := SECONDS()
                                        ENDIF
                                ENDIF
                        ENDIF
                        INKEY(.10,20)
                ENDIF
        ENDDO
        //   ferase( STRTRAN(RESP,'.TXT','.OLD') )
        //   frename( RESP, STRTRAN(RESP,'.TXT','.OLD') )
        ferase( RESP )
        #IFDEF __XHARBOUR__

        ELSE                                       //// TCP / IP (apenas xHarbour ) ///
                //////// Transmitindo o comando /////////
                InetSetTimeout( sSOCKET, 3000 )   // Timeout de Envio 3 seg //
                IF inetsendall( sSocket, CMD ) <= 0
                        RET_IMP := 'ERRO: Nao foi possivel transmitir dados para o ACBrMonitor|'+;
                                '('+AllTrim(Str(InetErrorCode( sSOCKET )))+') '+;
                                InetErrorDesc( sSOCKET ) + ETX
                ENDIF
                //////// Lendo a resposta ////////
                InetSetTimeout( sSOCKET, 500 )
                TINI   := SECONDS()
                WHILE (RIGHT(RET_IMP,1) <> ETX)
                        BLOCO := SPACE(64)
                        BYTES   := inetrecv(sSOCKET, @BLOCO, 64)
                        RET_IMP += LEFT(BLOCO,BYTES)
                        IF SECONDS() > (TINI + 5)
                                mensagem('Aguardando resposta do ACBrMonitor:  '+; // '('+ProcName(2)+') '+;
                                Trim(str(TINI + ESPERA - SECONDS(),2)))
                        ENDIF
                        IF SECONDS() > (TINI + ESPERA)
                                IF ! TENTA
                                        RET_IMP := 'ERRO: Sem resposta do ACBrMonitor em '+ALLTRIM(str(ESPERA))+;
                                        ' segundos (TimeOut)' + ETX
                                ELSE
                                        IF op_simnao('S','O ACBrMonitor nao esta respondendo, Deseja tentar novamente ?') <> 'S'
                                                RET_IMP := 'ERRO: Sem resposta do ACBrMonitor em '+ALLTRIM(str(ESPERA))+;
                                                        ' segundos (TimeOut)' + ETX
                                        ELSE
                                                TINI := SECONDS()
                                        ENDIF
                                ENDIF
                        ENDIF
                ENDDO
        #ENDIF
ENDIF
//IF SUBSTR(RET_IMP,1,3) <> 'OK:' .or. SUBSTR(RET_IMP,1,5) == 'ERRO:'
   //   ALERTA('RETORNO INVALIDO INIFIM|'+RET_IMP+'|'+ ALLTRIM(memoread( RESP )) )
//ENDIF
WHILE RIGHT(RET_IMP,1) $ CR+LF+ETX   // Remove sinalizadores do final
        RET_IMP := LEFT(RET_IMP,LEN(RET_IMP)-1)
ENDDO
IF ! SEM_ERRO
        MSG_ERRO := ''
        IF SUBSTR(RET_IMP,1,5) == 'ERRO:'
                MSG_ERRO := 'Erro ACBrMonitor:'+;  //  'Rotina ('+ProcName(2)+')|'+;
                STRTRAN(STRTRAN(SUBSTR(RET_IMP,7),CR,''),LF,'|')
                //STRTRAN(STRTRAN( MUDA_ACENTOS(SUBSTR(RET_IMP,7)),CR,''),LF,'|')
        ENDIF
        IF ! EMPTY(MSG_ERRO)
                IF mmens = NIL
                        atencao(MSG_ERRO)
                ENDIF
                RET_IMP := ''
        ENDIF
ENDIF
//IF SUBSTR(RET_IMP,1,3) <> 'OK:' .or. SUBSTR(RET_IMP,1,5) == 'ERRO:'
   //   ALERTA('RETORNO INVALIDO FIM|'+RET_IMP+'|'+ ALLTRIM(memoread( RESP )) )
//ENDIF
RETURN RET_IMP
************************************************************************
Static FUNCTION Grava_ARQ( WARQ, WTXT )
LOCAL HANDLE, RET := .T.
HANDLE := FCREATE(WARQ, FC_NORMAL )
IF HANDLE > 0
        FWRITE(HANDLE, WTXT + CHR(13) + CHR(10) )
        RET := (FERROR() = 0)
        FCLOSE(HANDLE)
ENDIF
//atencao(WTXT + CHR(13) + CHR(10))
RETURN RET
************************************************************************
FUNCTION inicia_acbr(nfe)
********************
mensagem('INCICIANDO O ACBR Aguarde um momento....')
IF ! IBR_INIT(ALLTRIM(m_indiv[1,43]))
        atencao('Nao e possivel INICIALIZAR o ACBRMONITORPLUS pelo TCP-IP, verificar se estar instalado...')
        RETURN .F.
ENDIF
mensagem('ATIVANDO O ACBR Aguarde um momento....')
IF ! IBR_OK( IBR_COMANDO( 'NFE.Ativo',,25))
        RETURN .F.
ENDIF
IF nfe # NIL
        mensagem('Verificando STATUS DO SERVICO NFe Aguarde um momento....')
        IF m_set[1,95] = '1' .OR. EMPTY(m_set[1,95])
                IF ! IBR_OK(IBR_comando('NFE.STATUSSERVICO',,30))
                        RETURN .F.
                ENDIF
        ENDIF
ENDIF
mensagem('                                                        ')
RETURN .T.
