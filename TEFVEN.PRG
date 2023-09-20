#include "Fileio.CH"
#include "inkey.ch"
Function PAC00TEF(CNumeroCupom,Cind_tef,nValorCartao)
*---------------------------------------------------------------*
* nCaracteres = Identifica o tamanho de colunas da impressora
* nValorCartao = Identificar o Valor do Cartao
*---------------------------------------------------------------*
Local ok := .T.
Public  CRLF := CHR(13)+CHR(10),Tef_Valor :=0
IF nValorCartao == NIl .OR. nValorCartao = 0
        nValorCartao := 0
        atencao('Valor da Transacao Invalida! ['+Str(nValorCartao,13)+']')
        RETURN(.f.)
ENDIF
M->Tef_Valor  := nValorCartao
M->Doc_CdRede :=  "V"
// Esta variavel ( M->Doc_CDREDE ) tem q existir no Progama de Venda
IF m_indiv[1,41] = 'PAYGOMULT'
        M->Tef_Env:=m_indiv[1,35]
        M->Tef_Ret:=m_indiv[1,36]
ELSEIF m_indiv[1,41] = 'PAYGO'
        IF SUBSTR(UPPER(mgerenciador),1,5) = 'HIPER'
                M->Tef_Env:=m_indiv[1,33]
                M->Tef_Ret:=m_indiv[1,34]
        ELSE
                M->Tef_Env:=m_indiv[1,35]
                M->Tef_Ret:=m_indiv[1,36]
        ENDIF
ELSE
        IF SUBSTR(UPPER(mgerenciador),1,5) = 'HIPER'
                M->Tef_Env:=m_indiv[1,33]
                M->Tef_Ret:=m_indiv[1,34]
        ELSE
                M->Tef_Env:=m_indiv[1,35]
                M->Tef_Ret:=m_indiv[1,36]
        ENDIF
ENDIF
imp_cartao(CNumeroCupom,Cind_tef,nValorCartao)
bloq_teclado('D')
keyboard ""
Clear TypeaHead
RETURN( Ok )

/*

Status:=.T.
bloq_teclado('B')
WHILE .T.
        Ok := imp_comprovante(CNumeroCupom,Cind_tef,nValorCartao)
        //Ok:=imp_cartao(CNumeroCupom,Cind_tef,nValorCartao)
        IF Ok
                Manda_CNF()
                IF !Check_TO("CNF")
                        Manda_NCN()
                        IF ! Check_TO("NCN")
                                atencao("O Gerenciador nao retornou resposta sobre a nao impressao do cupom TEF!")
                        ENDIF
                        bloq_teclado('D')
                        RETURN(.F.)
                ENDIF
                bloq_teclado('D')
                Apaga_IntPos()
                RETURN(.T.)
        ELSE
                Opc:=op_simnao('S',"Impressora nao responde! - Deseja tentar novamente?")
                IF Opc = 'N' .or. LASTKEY() = 27
                        M->Tef_Sair  :=.T.
                        M->Txt_Transa := Space(1)
                        M->Txt_Valor  := Space(1)
                        M->Txt_Rede   := Space(1)
                        IF !Empty(M_Tef_NumTra)
                                M->Txt_Transa := " Transacao No.: "+ M_Tef_NumTra
                        ENDIF
                        IF !Empty(M_Tef_Nomrede)
                                M->Txt_Rede   := " Rede : "+ M_Tef_Nomrede
                        ENDIF
                        IF M->Tef_Valor > 0
                                M->Txt_Valor := " Valor : "+ Transform(M->Tef_Valor,"@E 99,999.99")
                        ENDIF
                        Mostra_Canc(M->Txt_Transa,M->Txt_Valor,M->Txt_REde,"Aguarde....")
                        Manda_NCN()
                        IF !Check_TO("NCN")
                                atencao("O Gerenciador nao retornou resposta sobre a nao impressao do cupom TEF!")
                        ENDIF
                        bloq_teclado('D')
                        Apaga_IntPos()
                        Mostra_Canc(M->Txt_Transa,M->Txt_Valor,M->Txt_REde,"Tecle [Enter] p/ Continuar...")
                        RETURN(.F.)
                ELSE
                        INKEY(.7,20)
                        Status:=.F.
                ENDIF
        ENDIF
ENDDO
bloq_teclado('D')
keyboard ""
Clear TypeaHead
RETURN( Ok )
*/
************************************ F I M ******************************************************
FUNCTION Critica_CRT()
*---------------------*
LOCAL m_intpos:={},ni,mpos:=0,lin,linha,linhas
mensagem('Verificando o retorno do Gerenciador...')
IF ! FILE(ALLTRIM(M->Tef_Ret)+'IntPos.001')
        atencao('Nao foi encontrado este arquivo neste caminho: c:\tef_dial\resp\IntPos.001')
        Retur(.F.)
ENDIF
lin := MEMOLINE(MEMOREAD(ALLTRIM(M->Tef_Ret)+'IntPos.001'),70,1,,)
linhas := linha := 0
linhas := MLCOUNT(MEMOREAD(ALLTRIM(M->Tef_Ret)+'IntPos.001'),70)
m_intpos := {}
FOR linha = 1 TO  linhas
        lin := MEMOLINE(MEMOREAD(ALLTRIM(M->Tef_Ret)+'IntPos.001'),70,linha,,)
        AADD(m_intpos,ALLTRIM(lin))
NEXT
fclose(ALLTRIM(M->Tef_Ret)+'IntPos.001')
IF LEN(m_intpos) = 0
        atencao("O arquivo enviado pelo gerenciador nao possui nenhum campo!")
        Retur(.F.)
ENDIF
IF ASCAN(m_intpos,{|nI| "001-000" == SUBSTR(nI,1,7)}) = 0
        atencao("Campo [001] - Identificao, nao encontrado! Este campo indica o numero da solicitacao que esta sendo feita.")
        Return(.F.)
/*
ELSE
        IF AllTrim(Tef->Conteudo) # AllTrim(M_Tef_Num)
                atencao("O Conteudo do Campo 001 - Identificao‚ diferente do conteudo enviado!")
                Return(.F.)
        ENDIF
*/
ENDIF
mpos := ASCAN(m_intpos,{|nI| "003-000" == SUBSTR(nI,1,7)})
IF mpos = 0
        atencao("Campo [003] - Valor da transacao, nao encontrado!")
        Return(.F.)
ELSE
        //IF Val(Tef->Conteudo) # M->Tef_Valor
        //    Retorna para complementar o pagto
        //    ...
        //ENDIF
        mvalor_trans := ALLTRIM(SUBSTR(m_intpos[mpos],11))
ENDIF
mpos := ASCAN(m_intpos,{|nI| "009-000" == SUBSTR(nI,1,7)})
IF mpos = 0
        atencao("Transacao negada pelo gerenciador ou cancelada pelo o usuario!")
        Return(.F.)
ELSE
        IF AllTrim(SUBSTR(m_intpos[mpos],11)) # "0"
                mpos := ASCAN(m_intpos,{|nI| "030-000" == SUBSTR(nI,1,7)})
                IF mpos > 0
                        atencao(AllTrim(SUBSTR(m_intpos[mpos],11)))
                ELSE
                        atencao("Transacao negada pelo gerenciador ou cancelada pelo o usuario!")
                ENDIF
                Return(.F.)
        ENDIF
ENDIF
mpos := ASCAN(m_intpos,{|nI| "010-000" == SUBSTR(nI,1,7)})
IF mpos = 0
        atencao("Campo [010] - Nome da Rede, nao encontrado! Este campo indica o nome da rede que tratou da transacao!")
        Return(.F.)
ELSE
        M_Tef_Nomrede := ALLTRIM(SUBSTR(m_intpos[mpos],11))
        mnome_rede := UPPER(ALLTRIM(SUBSTR(m_intpos[mpos],11)))
        NomeRede := "AMEX_REDECARD_VISANET_TECBAN_HIPERCARD_ELO_VISAELETRON_CIELO"   // NÆo pode ser alterado
        /*
        npos := At(mnome_rede,NomeRede)
        IF npos = 0
                atencao("O nome da rede: "+mnome_rede+" retornado pelo gerenciador nao esta habilitada para a transacao!")
                Return(.F.)
        ENDIF
        */
ENDIF
mpos := ASCAN(m_intpos,{|nI| "012-000" == SUBSTR(nI,1,7)})
IF mpos = 0
        atencao("Campo [012] - No. da transacao, nao encontrado! Indica o numero de sequencia (NSU - Numero Sequencial Unico)")
        Return(.F.)
ELSE
        IF Val(SUBSTR(m_intpos[mpos],11)) == 0
                atencao("O gerenciador nao retornou a NSU - Numero Sequencial Unico!")
                Return(.F.)
        ENDIF
        M_Tef_NumTra := ALLTRIM(SUBSTR(m_intpos[mpos],11))
        mnum_transacao := ALLTRIM(SUBSTR(m_intpos[mpos],11))
ENDIF
mpos := ASCAN(m_intpos,{|nI| "018-000" == SUBSTR(nI,1,7)})
IF mpos = 0
        mqtd_parc := 1
ELSE
        IF SUBSTR(m_intpos[mpos],11) == " "
                atencao("O Gerenciador nao retornou dados da finalizacao!")
                Return(.F.)
        ENDIF
        mqtd_parc := VAL(ALLTRIM(SUBSTR(m_intpos[mpos],11)))
ENDIF
mpos := ASCAN(m_intpos,{|nI| "027-000" == SUBSTR(nI,1,7)})
IF mpos = 0
        atencao("Campo [027] - Finalizacao, nao encontrado! Este campo contem os dados recebidos do modulo TEF que executou a transacao!")
        Return(.F.)
ELSE
        IF SUBSTR(m_intpos[mpos],11) == " "
                atencao("O Gerenciador nao retornou dados da finalizacao!")
                Return(.F.)
        ENDIF
        M_Tef_Finaliza := ALLTRIM(SUBSTR(m_intpos[mpos],11))
        mfinal_transacao := ALLTRIM(SUBSTR(m_intpos[mpos],11))
ENDIF
mpos := ASCAN(m_intpos,{|nI| "028-000" == SUBSTR(nI,1,7)})
IF mpos = 0
        atencao("Campo [028] - Quantidade de linhas do cupom TEF, nao encontrado!")
        Return(.F.)
ELSE
        IF Val(SUBSTR(m_intpos[mpos],11)) == 0
                atencao("Quantidade de linhas do cupom TEF ‚ zero! Nao haver cupom a ser impresso")
                Return(.F.)
        ENDIF
ENDIF
mpos := ASCAN(m_intpos,{|nI| "030-000" == SUBSTR(nI,1,7)})
IF mpos > 0
        atencao(AllTrim(SUBSTR(m_intpos[mpos],11)))
        //MYRUN('COPY '+ALLTRIM(M->Tef_Ret)+'IntPos.001'+" "+ALLTRIM(M->Tef_Ret)+AllTrim(SUBSTR(m_intpos[mpos],22))+'.001')
ENDIF

IF ! FILE(ALLTRIM(M->Tef_Ret)+'cartao1.001')
        MYRUN('COPY '+ALLTRIM(M->Tef_Ret)+'IntPos.001'+" "+ALLTRIM(M->Tef_Ret)+'cartao1.001')
ELSEIF ! FILE(ALLTRIM(M->Tef_Ret)+'cartao2.001')
        MYRUN('COPY '+ALLTRIM(M->Tef_Ret)+'IntPos.001'+" "+ALLTRIM(M->Tef_Ret)+'cartao2.001')
ELSEIF ! FILE(ALLTRIM(M->Tef_Ret)+'cartao3.001')
        MYRUN('COPY '+ALLTRIM(M->Tef_Ret)+'IntPos.001'+" "+ALLTRIM(M->Tef_Ret)+'cartao3.001')
ELSEIF ! FILE(ALLTRIM(M->Tef_Ret)+'cartao4.001')
        MYRUN('COPY '+ALLTRIM(M->Tef_Ret)+'IntPos.001'+" "+ALLTRIM(M->Tef_Ret)+'cartao4.001')
ELSEIF ! FILE(ALLTRIM(M->Tef_Ret)+'cartao5.001')
        MYRUN('COPY '+ALLTRIM(M->Tef_Ret)+'IntPos.001'+" "+ALLTRIM(M->Tef_Ret)+'cartao5.001')
ELSEIF ! FILE(ALLTRIM(M->Tef_Ret)+'cartao6.001')
        MYRUN('COPY '+ALLTRIM(M->Tef_Ret)+'IntPos.001'+" "+ALLTRIM(M->Tef_Ret)+'cartao6.001')
ELSEIF ! FILE(ALLTRIM(M->Tef_Ret)+'cartao7.001')
        MYRUN('COPY '+ALLTRIM(M->Tef_Ret)+'IntPos.001'+" "+ALLTRIM(M->Tef_Ret)+'cartao7.001')
ELSEIF ! FILE(ALLTRIM(M->Tef_Ret)+'cartao8.001')
        MYRUN('COPY '+ALLTRIM(M->Tef_Ret)+'IntPos.001'+" "+ALLTRIM(M->Tef_Ret)+'cartao8.001')
ELSEIF ! FILE(ALLTRIM(M->Tef_Ret)+'cartao9.001')
        MYRUN('COPY '+ALLTRIM(M->Tef_Ret)+'IntPos.001'+" "+ALLTRIM(M->Tef_Ret)+'cartao9.001')
ELSEIF ! FILE(ALLTRIM(M->Tef_Ret)+'cartao10.001')
        MYRUN('COPY '+ALLTRIM(M->Tef_Ret)+'IntPos.001'+" "+ALLTRIM(M->Tef_Ret)+'cartao10.001')
ENDIF

bloq_teclado('B')
//Ok := imp_comprovante(CNumeroCupom,Cind_tef,nValorCartao)
FOR i = 1 TO 5
        Manda_CNF()
        IF !Check_TO("CNF")
                Manda_NCN()
                IF ! Check_TO("NCN")
                        atencao("O Gerenciador nao retornou resposta sobre a nao impressao do cupom TEF!")
                ENDIF
                i++
                LOOP
        ENDIF
        bloq_teclado('D')
        Apaga_IntPos()
        RETURN(.T.)
NEXT
Return(.T.)
****************************************************************************
Function Check_TO(TipOp)
************************
local ok := .T.
ok := Pega_TextoTef(1)
IF ok
        IF File(M->Tef_Env+"INTPOS.001")
                IF ! MYRUN('DEL '+M->Tef_Env+'INTPOS.001')
                        atencao("Nao foi possivel apagar o arquivo "+M_ArqTef+" - "+TipOp )
                        Ok := .F.
                ENDIF
        ENDIF
ENDIF
RETURN (ok )
*-------------------------------------------------------*
Static FUNCTION Check_Crt()
***************************
LOCAL ok := .T.
IF !Pega_TextoTef(1)
        ok := .F.
ENDIF
IF ok
        IF Ferase(ALLTRIM(M_ArqTef)) == -1
                atencao("Nao foi possivel apagar o arquivo " +M_ArqTef )
                Ok := .F.
        ENDIF
ENDIF
IF Ok
        IF ! Pega_TextoTef(2)
                ok := .F.
        ENDIF
ENDIF
RETURN (ok )
*-------------------------------------------------------*
Function Manda_NCN(mnum_tef,mTef_Nomrede,mTef_NumTran,mTef_Finaliza)
//
//  Gera o arquivo de Nao Confirmacao
//
mensagem('Gera o arquivo de NAO CONFIRMACAO')
M->Tipo:="NCN"
nHandle := Cria_TefTxt()
IF nHandle == -1
        atencao("Nao foi possivel criar o arquivo que confirma a nao  impressao do cupom TEF! Arquivo do tipo NCN")
        RETURN(.F.)
ENDIF
IF !Grava_campo(nHandle, "000-000","NCN",M->Tipo)
        RETURN(.F.)
ENDIF
If !Grava_campo(nHandle, "001-000",M_Tef_Num,M->Tipo)
        Return(.F.)
EndIf
If !Grava_campo(nHandle, "010-000",M_Tef_Nomrede,M->Tipo)
        Return(.F.)
EndIf
If !Grava_campo(nHandle, "012-000",M_Tef_NumTra,M->Tipo)
        Return(.F.)
EndIf
If !Grava_campo(nHandle, "027-000",M_Tef_Finaliza,M->Tipo)
        Return(.F.)
EndIf
IF !Grava_campo(nHandle, "999-999","0",M->Tipo)
        RETURN(.F.)
ENDIF
ok := Fecha_TefTxt(nHandle)
RETURN (ok)
*-------------------------------------------------------*
Function Manda_ATV()
//
// Manda o arquivo para verificacao do Gerenciador
//
M->Tipo:="ATV"
Ferase(M->Tef_Env+"INTPOS.STS")
Ferase(M->Tef_Env+"INTPOS.001")

SetCursor(0)
mensagem("A G U A R D E !")
nHandle := Cria_TefTxt() // Abre o Arquivo IntPos
IF nHandle == -1
        atencao("Nao foi possivel criar o arquivo que faz o pedido de autorizacao para transacoes por meio de cartao! Arquivo do tipo CRT")
        RETURN(.F.)
ENDIF
/*
sArqR        := fcreate( ALLTRIM(M->Tef_Env)+"INTPOS.TMP" )
//sPathOrigem  := ALLTRIM(m_indiv[1,6])+ "INTPOS.001"
IF sarqr == -1
        IF Ferase(M->Tef_Env+"INTPOS.TMP") == -1
                atencao("Nao foi possivel apagar o arquivo "+M_ArqTef+" - "+TipOp )
                Ok := .F.
        ENDIF
ENDIF        
*/
sLinhas := "000-000 = ATV"        + CHR( 13 ) + CHR( 10 ) + ;
           "001-000 = 0000000001" + CHR( 13 ) + CHR( 10 ) + ;
           "999-999 = 0"
fwrite( nHandle, @sLinhas, len( sLinhas ) )
ok := Fecha_TefTxt(nHandle)  // Fecha o Arquivo IntPos
RETURN (ok)
*-------------------------------------------------------*
// Manda arquivo para venda de cartao

Static Function Manda_CRT()
***************************
Local ok := .T.
Priv GetList := {}
M->Tipo:="CRT"
nHandle := Cria_TefTxt() // Abre o Arquivo IntPos
IF nHandle == -1
        atencao("Nao foi possivel criar o arquivo que faz o pedido de autorizacao para transacoes por meio de cartao! Arquivo do tipo CRT")
        RETURN(.F.)
ENDIF
IF !Grava_campo(nHandle, "000-000","CRT",M->Tipo)
        RETURN(.F.)
ENDIF
IF !Grava_campo(nHandle, "001-000",m_cfg[70],M->Tipo)
        RETURN(.F.)
ENDIF
IF !Grava_campo(nHandle, "003-000",Alltrim(Str(M->Tef_Valor*100,12)),M->Tipo)
        RETURN(.F.)
ENDIF
IF !Grava_campo(nHandle, "999-999","0",M->Tipo)
        RETURN(.F.)
ENDIF
ok := Fecha_TefTxt(nHandle)  // Fecha o Arquivo IntPos
RETURN (ok)
************************************ F I M **********************************************
Static Function Manda_CHQ()
***************************
//
// Manda o arquivo de Autorizacao
//
Local ok := .T.
Priv GetList := {}
M->Tipo:="CHQ"
nHandle := Cria_TefTxt()
IF nHandle == -1
        atencao("Nao foi possivel criar o arquivo que faz o pedido de autorizacao para transacoes por meio de cartao! Arquivo do tipo CRT")
        RETURN(.F.)
ENDIF
IF !Grava_campo(nHandle, "000-000","CHQ",M->Tipo)
        RETURN(.F.)
ENDIF
IF !Grava_campo(nHandle, "001-000",m_cfg[70],M->Tipo)
        RETURN(.F.)
ENDIF
IF !Grava_campo(nHandle, "999-999","0",M->Tipo)
        RETURN(.F.)
ENDIF
ok := Fecha_TefTxt(nHandle)
RETURN (ok)
*---------------------------------------------------------*
Function Cria_TEFTXT
********************
mensagem('Criando o Arquivo: '+M->Tef_Env+"IntPos.TMP")
IF File(ALLTRIM(M->Tef_Env)+'IntPos.TMP')
        MYRUN('DEL '+ALLTRIM(M->Tef_Env)+'IntPos.TMP')
ENDIF
ArqTef := M->Tef_Env+"IntPos.TMP"
nHandle := FCreate(ArqTef,FC_NORMAL)
IF nHandle == -1
        atencao("Erro na Criacao do TEF - ATV")
        RETURN(nHandle)
ENDIF
RETURN (nhandle)
*---------------------------------------------------------*
Function pega_TextoTef(TIPO)
****************************
Local Ok:=.F.
IF Tipo == Nil
        Tipo := 1
ENDIF
IF Tipo = 1
        M_ArqTef := AllTrim(M->Tef_Ret)+"intpos.sts"
ELSE
        M_ArqTef := AllTrim(M->Tef_Ret)+"intpos.001"
ENDIF
Conta := 0
Tempoxx := 7
WHILE .T.
        IF Tipo == 1
                INKEY(1,20)
                IF !File(M_ArqTef)
                        Ok := .F.
                ELSE
                        Ok := .T.
                ENDIF
                EXIT
        ELSE
                IF File(M_ArqTef)
                        Ok := .T.
                        EXIT
                ENDIF
                mensagem("Aguarde... Esperando resposta do Gerenciador.!")
        ENDIF
        INKEY(3,20)
        Conta++
ENDDO
RETURN(Ok)
*--------------------------------------------------------------------------*
Function Veri_Transacao(Tempo,mcam)
***********************************
Local Ok := .t.
IF Tempo == Nil
        Tempo := 1
ENDIF
mensagem('Verifica se ha transacao pendente')
IF Ok
        M->Tef_Ret := m_indiv[1,34]
        M->Tef_env := m_indiv[1,33]
        M_ArqTef:=ALLTRIM(M->Tef_Ret) + "Intpos.001"
        IF File(M_ArqTef)
                PnConf(Tempo)
        ENDIF
        M->Tef_env := m_indiv[1,35]
        M->Tef_Ret := m_indiv[1,36]
        M_ArqTef:=ALLTRIM(M->Tef_Ret) + "Intpos.001"
        IF File(M_ArqTef)
                PnConf(Tempo)
        ENDIF
        IF mcam # NIL
                IF m_indiv[1,41] = 'PAYGOMULT'
                        If mtp_cartao = 'P'
                                M->Tef_Env:=AllTrim(m_indiv[1,35])
                                M->Tef_Ret:=AllTrim(m_indiv[1,36])
                        ElseIf mtp_cartao = 'H'
                                M->Tef_Env:=AllTrim(m_indiv[1,33])
                                M->Tef_Ret:=AllTrim(m_indiv[1,34])
                        EndIf
                ELSEIF m_indiv[1,41] = 'PAYGO'
                        If mtp_cartao = 'P'
                                M->Tef_Env:=AllTrim(m_indiv[1,35])
                                M->Tef_Ret:=AllTrim(m_indiv[1,36])
                        ElseIf mtp_cartao = 'H'
                                M->Tef_Env:=AllTrim(m_indiv[1,33])
                                M->Tef_Ret:=AllTrim(m_indiv[1,34])
                        EndIf
                ELSE
                        If mtp_cartao = 'P'
                                M->Tef_Env:=AllTrim(m_indiv[1,35])
                                M->Tef_Ret:=AllTrim(m_indiv[1,36])
                        ElseIf mtp_cartao = 'H'
                                //atencao('hiper')
                                M->Tef_Env:=AllTrim(m_indiv[1,33])
                                M->Tef_Ret:=AllTrim(m_indiv[1,34])
                        EndIf
                ENDIF           
        ENDIF
        Apaga_IntPos()
ENDIF

imp_cartao()
mensagem('Escolha sua Opcao..')

RETURN(ok)
*************************************  F I M *************************************
Function Atv_OK()
*****************
Local Ok := .T.
mensagem('Verificando se o Gerenciador estar ATIVO..')
WHILE .T.
        IF ! Manda_ATV()
                ok := .f.
                EXIT
        ENDIF
        IF !Check_TO("ATV")
                atencao("Erro ao tentar comunicacao com o gerenciador!  O Gerenciador TEF nao esta ativo.")
                Apaga_IntPos()
                ok := .f.
        ENDIF
        EXIT
ENDDO
RETURN(ok)
*************************** f i m ***************************************
// Gera o arquivo para Confirmacao
**********************************
Function Manda_CNF()
*********************
LOCAL arqtef,nhandle
mensagem('Gera o arquivo para Confirmacao')
ArqTef := ALLTRIM(M->Tef_Env)+'IntPos.TMP'
nHandle := FCreate(ArqTef)
If nHandle == -1
        atencao("Nao foi possivel criar o arquivo que confirma a impressao do cupom TEF! Arquivo do tipo CNF.")
        Return(.F.)
EndIf
If !Grava_campo(nHandle, "000-000","CNF","CNF")
        Return(.F.)
EndIf
If !Grava_campo(nHandle, "001-000",M_Tef_Num,"CNF")
        Return(.F.)
EndIf
If !Grava_campo(nHandle, "010-000",M_Tef_Nomrede,"CNF")
        Return(.F.)
EndIf
If !Grava_campo(nHandle, "012-000",M_Tef_NumTra,"CNF")
        Return(.F.)
EndIf
If !Grava_campo(nHandle, "027-000",M_Tef_Finaliza,"CNF")
        Return(.F.)
EndIf
If !Grava_campo(nHandle, "999-999","0","CNF")
        Return(.F.)
EndIf
ok := Fecha_TefTxt(nHandle)
Return (ok)
*---------------------------------------------------------*
FUNCTION Fecha_TEFTXT(nHandle)
******************************
LOCAL lFecha_OK
lFecha_OK := FClose(nhandle)
inkey(.8,20)
If !lFecha_OK
        If fError() # 0
                atencao("Erro na Criacao do Arquivo: "+StrZero(ferror(),2))
                Return(.F.)
        EndIf
EndIf
nvezes := 7
WHILE .T.
        IF File(ALLTRIM(M->Tef_Env)+'IntPos.001')
                MYRUN('DEL '+ALLTRIM(M->Tef_Env)+'IntPos.001')
        ENDIF
        nret := MYRUN('COPY '+ALLTRIM(M->Tef_Env)+'IntPos.tmp '+ALLTRIM(M->Tef_Env)+'IntPos.001')
        INKEY(.7,20)
        IF ! nRet
                IF Nvezes = 0
                        atencao("Nao foi possivel renomear o arquivo IntPos.tmp para o arquivo original IntPos.001")
                        MYRUN('DEL '+ALLTRIM(M->Tef_Env)+'IntPos.tmp')
                        RETURN(.F.)
                ELSE
                        nvezes --
                        loop
                ENDIF
        ENDIF
        FClose(ALLTRIM(M->Tef_Env)+'IntPos.tmp')
        WHILE File(ALLTRIM(M->Tef_Env)+'IntPos.tmp')
                MYRUN('DEL '+ALLTRIM(M->Tef_Env)+'IntPos.tmp')
        ENDDO
        EXIT
ENDDO
Return (.T.)
*--------------------------------------------------------*
Function Grava_Campo(nfilehandle,cCampo,cConteudo,Tipo)
Local CRLFG := CHR(13)+CHR(10)
nBytes := FWrite(nFileHandle,cCampo+" = "+cConteudo+CRLFG)
if nBytes = 0
        atencao("Erro na gravacao do conteudo do arquivo do Tipo " + Tipo + "!")
        Return(.F.)
EndIf
Return(.T.)

#include "Fileio.CH"
#include "inkey.ch"
*********************************** f i m ***************************************
Function trata_tef(CNumeroCupom,Cind_tef,nValorCartao)
*-------------------------------------------------------------*
* nCaracteres = Identifica o tamanho de colunas da impressora
* nValorCartao = Identificar o Valor do Cartao
*-------------------------------------------------------------*
Local ok := .T.
Public  CRLF := CHR(13)+CHR(10),Tef_Valor :=0,M_Tef_Num,M_ArqTef,M_Tef_Nomrede,M_Tef_NumTra,M_Tef_Finaliza

M_Tef_Num      := '001'
M_ArqTef       := Space(10)
M_Tef_Nomrede	:= Space(08)
M_Tef_NumTra	:= Space(12)
M_Tef_Finaliza := Space(30)
IF nValorCartao == NIl .OR. nValorCartao = 0
        nValorCartao := 0
        atencao('Valor da Transacao Invalida! ['+Str(nValorCartao,13)+']')
        RETURN(.f.)
ENDIF
M->Tef_Valor  := nValorCartao
M->Doc_CdRede :=  "V"
// Esta variavel ( M->Doc_CDREDE ) tem q existir no Progama de Venda
//ATENCAO(SUBSTR(UPPER(mgerenciador),1,5))
*/
IF m_indiv[1,41] = 'PAYGOMULT'
        M->Tef_Env:=m_indiv[1,35]
        M->Tef_Ret:=m_indiv[1,36]
ELSEIF m_indiv[1,41] = 'PAYGO'
        IF SUBSTR(UPPER(mgerenciador),1,5) = 'HIPER'
                M->Tef_Env:=m_indiv[1,33]
                M->Tef_Ret:=m_indiv[1,34]
        ELSE
                M->Tef_Env:=m_indiv[1,35]
                M->Tef_Ret:=m_indiv[1,36]
        ENDIF
ELSE
        IF SUBSTR(UPPER(mgerenciador),1,5) = 'HIPER'
                M->Tef_Env := m_indiv[1,33]
                M->Tef_Ret := m_indiv[1,34]
                //ATENCAO(SUBSTR(UPPER(mgerenciador),1,5)+'-'+M->Tef_Env+'-'+M->Tef_Ret)
        ELSE
                M->Tef_Env:=m_indiv[1,35]
                M->Tef_Ret:=m_indiv[1,36]
        ENDIF
ENDIF
IF !Atv_OK()
        RETURN(.f.)
ENDIF
Manda_CRT()
IF Check_CRT()
        IF Critica_CRT()
                RETURN .T.
                Status:=.T.
        ELSE
                IF Ferase(M_ArqTef) == -1
                        atencao("Nao foi possivel apagar o arquivo " + M_ArqTef )
                ENDIF
                Ok := .F.
        ENDIF
ELSE
        atencao('Nao OK')
ENDIF
keyboard ""
Clear TypeaHead
RETURN( Ok )
#include "fileio.ch"
#include "inkey.ch"
#include "commands.ch"
* ========================================================================================
FUNCTION PADM(opc)
****************
Local Ok:=.T.,Limite
PUBLIC mtp_cartao
mtp_cartao := opc
Crlf      := CHR(13)+CHR(10)
M_Tef_Num     :=""
M->Tef_Via     :=0
M->Tef_Die     :=""
M->Tef_Dir     :=""
M->Tef_Dse     :=""
M->Tef_Dsr     :=""
M->Tef_Uti     :=""
M_ArqTef      :=""
M_Tef_Finaliza:=""
M_Tef_NumTra  :=""
M_Tef_Nomrede :=""
M->Dat_Tef     :=Ctod("")
M->Tef_Valor   :=0

WHILE .T.
        IF m_indiv[1,41] = 'PAYGOMULT'
                If mtp_cartao = 'P'
                        M->Tef_Env:=AllTrim(m_indiv[1,35])
                        M->Tef_Ret:=AllTrim(m_indiv[1,36])
                ElseIf mtp_cartao = 'H'
                        M->Tef_Env:=AllTrim(m_indiv[1,33])
                        M->Tef_Ret:=AllTrim(m_indiv[1,34])
                EndIf
        ELSEIF m_indiv[1,41] = 'PAYGO'
                If mtp_cartao = 'P'
                        M->Tef_Env:=AllTrim(m_indiv[1,35])
                        M->Tef_Ret:=AllTrim(m_indiv[1,36])
                ElseIf mtp_cartao = 'H'
                        M->Tef_Env:=AllTrim(m_indiv[1,33])
                        M->Tef_Ret:=AllTrim(m_indiv[1,34])
                EndIf
        ELSE
                If mtp_cartao = 'P'
                        M->Tef_Env:=AllTrim(m_indiv[1,35])
                        M->Tef_Ret:=AllTrim(m_indiv[1,36])
                ElseIf mtp_cartao = 'H'
                        atencao('hiper')
                        M->Tef_Env:=AllTrim(m_indiv[1,33])
                        M->Tef_Ret:=AllTrim(m_indiv[1,34])
                EndIf
        ENDIF

        Veri_Transacao(,1)

/*
        If M->Dat_Tef # Date()
                M_Tef_Num:="     1"
        EndIf

        If M->Tef_Via <= 0
                If Alert("Falta conafigurar o n£mero de vias para o cupom TEF",{"Configurar","Sair"}) = 1
                        Config_Tef()
                Endif
                Loop
        EndIf

        If Empty(M->Tef_Die) .or.;
                Empty(M->Tef_Dir)
                Alert("Falta configurar o diretorio de envio ou resposta do TEF DIAL!",{"OK"})
                Loop
        EndIf

        If Empty(M->Tef_Dse) .or.;
                Empty(M->Tef_Dsr)
                Alert("Falta configurar o diretorio de envio ou resposta do TEF DISC!",{"OK"})
                Loop
        EndIf
        //
        // Verifica qual impressora est  sendo utilizada
        //

        If M->Emp_ImpFis == "MP20FI"
                Limite := 48
        Elseif M->Emp_ImpFis == "Y8000"
                Limite := 42
        Else
                Limite := 48
        EndIf
*/
        If !Atv_Ok()
                Return
        EndIf

        Exit

Enddo

/*
If ! Abre_Com_Imp()
   Return
Endif
*/
If ! Fecha_RGeren()
        Return
EndIf

Manda_ADM()

If Check_ADM()
        If Critica_ADM()
                While .T.
                        Ok:=imp_comprovante(Limite)
                        //Ok:=imp_cartao(Limite)
                        If Ok
                                Manda_CNF()
                                If !Check_TO("CNF")
                                        Manda_NCN()
                                        If !Check_TO("NCN")
                                                atencao("O Gerenciador nao retornou resposta sobre a nao impressao do cupom TEF!")
                                        Endif
                                        Ok:=.F.
                                        Exit
                                EndIf
                                If File(M->Tef_Ret+"INTPOS.001")
                                        If Ferase(M->Tef_Ret+"IntPos.001") == -1
                                                atencao("Nao foi possivel apagar o arquivo Intpos.001")
                                        Endif
                                EndIf
                                //Num_Tef()
                                Ok:=.T.
                                Exit
                        Else
                                Opc:=op_simnao('S',"Impressora nao responde! Deseja tentar novamente?")
                                If Opc = 2 .or. Opc = 0
                                        m->Txt_Transa := Space(1)
                                        M->Txt_Valor  := Space(1)
                                        M->Txt_Rede   := Space(1)
                                        If !Empty(M_Tef_NumTra)
                                                M->Txt_Transa := " Transacao N§ "+ M_Tef_NumTra
                                        Endif
                                        If !Empty(M_Tef_Nomrede)
                                                M->Txt_Rede   := " Rede : "+ M_Tef_Nomrede
                                        Endif
                                        If M->Tef_Valor > 0
                                                M->Txt_Valor := " Valor : "+ Transform(M->Tef_Valor,"@E 99,999.99")
                                        Endif
                                        Mostra_Canc(M->Txt_Transa,M->Txt_Valor,M->Txt_REde,"Aguarde....")
                                        Manda_NCN()
                                        If !Check_TO("NCN")
                                                atencao("O Gerenciador nao retornou resposta sobre a nao impressao do cupom TEF!")
                                        Endif
                                        If File(M->Tef_Ret+"INTPOS.001")
                                                If Ferase(M->Tef_Ret+"IntPos.001") == -1
                                                        atencao("Nao foi possivel apagar o arquivo Intpos.001")
                                                endif
                                        EndIf
                                        Apaga_IntPos()
                                        Mostra_Canc(M->Txt_Transa,M->Txt_Valor,M->Txt_REde,"Tecle [Enter] p/ Continuar...")
                                        Return(.F.)
                                Else
                                        INKEY(4,20)
                                EndIf
                        EndIf
                EndDo
        Else
                If File(M->Tef_Ret+"INTPOS.001")
                        If Ferase(M->Tef_Ret+"IntPos.001") == -1
                                Alert("Nao foi possivel apagar o arquivo Intpos.001")
                        Endif
                EndIf
                Ok:=.F.
        EndIf
Else
        Ok:=.F.
EndIf
Apaga_IntPos()
mensagem('Escolha a opcao que deseja')
Return(Ok)
* ========================================================================================
Static Function Manda_ADM()
***************************
mensagem('Mandando solicitacao ADM para Gerenciador...')
ArqTef :=M->Tef_Env+"IntPos.TMP"
nHandle := FCreate(ArqTef,FC_NORMAL)
If nHandle == -1
   atencao("Erro na Criacao do TEF - ADM",{"Ok"})
   Return(.F.)
Endif
If !Grava_campo(nHandle, "000-000","ADM")      ; Return(.f.) ; Endif
If !Grava_campo(nHandle, "001-000",M_Tef_Num) ; Return(.f.) ; Endif
If !Grava_campo(nHandle, "999-999","0")        ; Return(.f.) ; Endif
Ok := Fecha_TefTxt(nHandle)
Return (Ok)
* ========================================================================================
Static Function Check_ADM()
***************************
local ok := .T.
mensagem('Checando retorno do Gerenciador [ADM]')
If !Pega_TextoTef(1)
        ok := .F.
Endif
If ok
        If Ferase(M_ArqTef) == -1
                atencao("Nao foi possivel apagar o arquivo " = M_ArqTef)
                Ok := .F.
        endif
Endif
If Ok
        If !Pega_TextoTef(2)
                Ok := .F.
        Endif
Endif
Return (ok )
*--------------------------------------------------------------*
Static Function Critica_ADM()
*****************************
LOCAL m_intpos:={},ni,mpos:=0,lin,linha,linhas
IF ! FILE(ALLTRIM(M->Tef_Ret)+'IntPos.001')
        atencao('Nao foi encontrado este arquivo neste caminho: '+ALLTRIM(M->Tef_Ret)+'IntPos.001')
        IF ! FILE(ALLTRIM(M->Tef_Ret)+'cartao1.001')
                MYRUN('COPY '+ALLTRIM(M->Tef_Ret)+'IntPos.001'+" "+ALLTRIM(M->Tef_Ret)+'cartao1.001')
        ELSEIF ! FILE(ALLTRIM(M->Tef_Ret)+'cartao2.001')
                MYRUN('COPY '+ALLTRIM(M->Tef_Ret)+'IntPos.001'+" "+ALLTRIM(M->Tef_Ret)+'cartao2.001')
        ELSEIF ! FILE(ALLTRIM(M->Tef_Ret)+'cartao3.001')
                MYRUN('COPY '+ALLTRIM(M->Tef_Ret)+'IntPos.001'+" "+ALLTRIM(M->Tef_Ret)+'cartao3.001')
        ENDIF
ENDIF
lin := MEMOLINE(MEMOREAD(ALLTRIM(M->Tef_Ret)+'IntPos.001'),70,1,,)
linhas := linha := 0
linhas := MLCOUNT(MEMOREAD(ALLTRIM(M->Tef_Ret)+'IntPos.001'),70)
m_intpos := {}
FOR linha = 1 TO  linhas
        lin := MEMOLINE(MEMOREAD(ALLTRIM(M->Tef_Ret)+'IntPos.001'),70,linha,,)
        AADD(m_intpos,ALLTRIM(lin))
NEXT
fclose(ALLTRIM(M->Tef_Ret)+'IntPos.001')
IF LEN(m_intpos) = 0
        atencao("O arquivo enviado pelo gerenciador n„o possui nenhum campo!")
        Retur(.F.)
ENDIF
mpos := ASCAN(m_intpos,{|nI| "001-000" == SUBSTR(nI,1,7)})
IF mpos = 0
        atencao("Campo Nao Encontrado! [001]")
        Return(.F.)
Else
        If AllTrim(SUBSTR(m_intpos[mpos],11)) # AllTrim(M_Tef_Num)
                atencao("O Conteudo do Campo [001] ‚ Diferente do Conteudo Enviado!")
                Return(.F.)
        EndIf
EndIf
mpos := ASCAN(m_intpos,{|nI| "009-000" == SUBSTR(nI,1,7)})
IF mpos = 0
        atencao("Campo Nao Encontrado! [009]")
        Return(.f.)
Else
        If AllTrim((SUBSTR(m_intpos[mpos],11))) # "0"
                mpos := ASCAN(m_intpos,{|nI| "030-000" == SUBSTR(nI,1,7)})
                IF mpos > 0
                        atencao(AllTrim(SUBSTR(m_intpos[mpos],11)))
                Else
                        atencao("A transacao nao foi aceita pelo gerenciador ou foi cancelada pelo usuario!")
                EndIf
                Return(.f.)
        endif
Endif
mpos := ASCAN(m_intpos,{|nI| "010-000" == SUBSTR(nI,1,7)})
IF mpos = 0
        atencao("Campo Nao Encontrado! [010]")
        Return(.f.)
Else
        NomeRede := "AMEX_REDECARD_VISANET_TECBAN_HIPERCARD_ELO_VISAELETRON_CIELO"
        M_Tef_Nomrede := UPPER(Alltrim( SUBSTR(m_intpos[mpos],11)))
        /*
        npos := At(M_Tef_Nomrede,NomeRede)
        If npos = 0
                atencao("Rede: "+mnome_rede+" Nao Habilitada p/ Transacao!")
                Return(.F.)
        Endif
        */
Endif
mpos := ASCAN(m_intpos,{|nI| "012-000" == SUBSTR(nI,1,7)})
IF mpos > 0
        M_Tef_NumTra:=AllTrim(SUBSTR(m_intpos[mpos],11))
ELSE
        M_Tef_NumTra := ''
Endif
mpos := ASCAN(m_intpos,{|nI| "027-000" == SUBSTR(nI,1,7)})
IF mpos > 0
        If Empty(SUBSTR(m_intpos[mpos],11))
                atencao("Nao Retornou Dados da Finalizacao!")
                Return(.F.)
        Endif
        M_Tef_Finaliza:=AllTrim(SUBSTR(m_intpos[mpos],11))
Endif
mpos := ASCAN(m_intpos,{|nI| "028-000" == SUBSTR(nI,1,7)})
IF mpos = 0
        atencao("Campo Nao Encontrado! [028]")
        Return(.F.)
Else
        If Val(SUBSTR(m_intpos[mpos],11)) = 0
                mpos := ASCAN(m_intpos,{|nI| "030-000" == SUBSTR(nI,1,7)})
                IF mpos > 0
                        atencao(AllTrim(SUBSTR(m_intpos[mpos],11)))
                Else
                        atencao("Quantidade de Linhas do Comprovante ‚ Zero! Nao Havera Cupom a ser Impresso.")
                EndIf
                Return(.F.)
        EndIf
Endif
mpos := ASCAN(m_intpos,{|nI| "030-000" == SUBSTR(nI,1,7)})
IF mpos > 0
        mensagem(AllTrim(SUBSTR(m_intpos[mpos],11)))
Else
        mensagem("Aguarde o final da Impressao...")
EndIf
Return(.t.)
* ========================================================================================
Function Mostra_Canc(cTransacao,cValor,cRede,cRodape)
*****************************************************
* Mostra Cancelamento
m->texto := 'Cancelamento da Transacao'+m_qp+m_qp+crede+m_qp+m_qp+cTransacao+m_qp+m_qp+cValor+m_qp+m_qp+m_qp+crodape
atencao(m->texto)
REturn
* ========================================================================================
Function bloq_teclado(mbloq)
*****************************************************
IF mbloq = 'B'
        IBR_OK( IBR_COMANDO('ACBr.BlockInput',{.T.} , 20 ) )
ELSE
        IBR_OK( IBR_COMANDO('ACBr.BlockInput',{.F.} , 20 ) )
ENDIF
REturn
***************************  F I M  **********************************
* IMPPRIMI COMPROVANTE DO TEF
*****************************
FUNCTION imp_comprovante(ccoo,cCodFormaPagto,nValor,mtexto_aux)
************************
Local Imprime_Ok := .T.,ncarac,lin,linha,linhas,c,m_intpos,clinha,texto_tef:='',texto_tef1:='',mvia:=1
nCarac := 48 // Padrao Bematech
IF ! FILE(ALLTRIM(m_indiv[1,36])+'intpos.001')
        atencao('Nao foi encontrado este arquivo neste caminho: '+ALLTRIM(m_indiv[1,36])+'intpos.001')
ENDIF
lin := MEMOLINE(MEMOREAD(ALLTRIM( M->Tef_Ret)+'intpos.001'),nCarac,1,,)
linhas := linha := 0
linhas := MLCOUNT(MEMOREAD(ALLTRIM( M->Tef_Ret)+'intpos.001'),nCarac)
m_intpos := {}
FOR linha = 1 TO  linhas
        lin := MEMOLINE(MEMOREAD(ALLTRIM( M->Tef_Ret)+'intpos.001'),nCarac,linha,,)
        AADD(m_intpos,ALLTRIM(lin))
NEXT
fclose(ALLTRIM( M->Tef_Ret)+'intpos.001')
IF LEN(m_intpos) = 0
        atencao("O arquivo enviado pelo gerenciador nao possui nenhum campo!")
        Retur(.F.)
ENDIF
mensagem('Imprimindo o comprovante, Aguarde...')
mpos := ASCAN(m_intpos,{|nI| "029-001" == SUBSTR(nI,1,7)})
IF mpos > 0
        IF ccoo # NIL
                Texto_Tef += ' ' + m_qp
                Texto_Tef += '                    1a. Via' + m_qp
                Texto_Tef += 'COO do documento vinculado:              '+ccoo + m_qp
                Texto_Tef += 'Valor da compra R$                   '+TRANSFORM(nValor,'999,999.99') + m_qp
                Texto_Tef += 'Valor do pagamento R$                '+TRANSFORM(nValor,'999,999.99') + m_qp
                Texto_Tef += ' ' + m_qp
                Texto_Tef += ' ' + m_qp
                //Texto_Tef += 'Número de Parcelas        :'+TRANSFORM(nValor,'999,999.99')
        ENDIF
        c := 0
        FOR c = 1 TO LEN(m_intpos)
                IF SUBSTR(m_intpos[c],1,3) # '029'
                        LOOP
                ENDIF
                cLinha    := STRTRAN(SUBSTR(RTRIM(m_intpos[c]),12) + m_qp,'"',' ')
                Texto_Tef += cLinha
        NEXT
ENDIF
texto_tef1 := ''
IF LEN(texto_tef) > 500
        texto_tef1 := Substr(Texto_Tef,501,LEN(texto_tef)-500)+m_qp+m_qp+m_qp
        texto_tef := Substr(Texto_Tef,1,499)+m_qp+m_qp+m_qp
ENDIF
mvia := 1
IF nvalor # NIL
        mvia := 2
ELSE
        mvia := 1
ENDIF

mhora := TIME()
mhora := STRTRAN(mhora,':','')+SPACE(8-LEN(STRTRAN(mhora,':','')))
NCupom := num_cupom()

IBR_OK( IBR_COMANDO( 'ECF.AbreRelatorioGerencial' ),5)
co := 0
FOR co = 1 TO mvia
        IBR_OK( IBR_COMANDO('ECF.LinhaRelatorioGerencial',{Texto_Tef},5 ))
        IF ! EMPTY(texto_tef1)
                IBR_OK( IBR_COMANDO('ECF.LinhaRelatorioGerencial',{Texto_Tef1},5 ))
        ENDIF
        IF co = 1
                IBR_OK( IBR_COMANDO('ECF.LinhaRelatorioGerencial',{m_qp+m_qp+m_qp},5 ))
                IBR_OK( IBR_COMANDO( 'ECF.CortaPapel' ),5)
        ENDIF
Next
IBR_FIM_REL()
Operacoes = Space(7)
Operacoes := SUBSTR(IBR_COMANDO( 'ECF.NumGNF' ),5,6)
sRel = space(7)
sRel := SUBSTR(IBR_COMANDO( 'ECF.NumGRG' ),5,6)

SET CENTURY ON
mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
        m_MFAdicional+; //2
        m_ModeloImp+; //3
        STRZERO(VAL(m_numerocaixa),2)+; //4
        NCupom+SPACE(6-LEN(NCupom))+; //5
        Operacoes+SPACE(6-LEN(operacoes))+; //6
        sRel+SPACE(6-LEN(sRel))+; //7
        STRZERO(0,4)+; //8
        'RG'+; //9
        SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)+SPACE(8-LEN(SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)))+; //10
        mhora //11


sr_getconnection():exec('INSERT INTO r6 ('+;
        'NUMERO_FAB  ,'+; //1
        'MF_ADICIONAL,'+; //2
        'MODELO_ECF  ,'+; //3
        'NUMERO_USU  ,'+; //4
        'COO         ,'+; //5
        'GNF         ,'+; //6
        'GRG         ,'+; //7
        'CDC         ,'+; //8
        'DENOMICAO   ,'+; //9
        'DATA_FINAL  ,'+; //10
        'HORA_FINAL  ,'+; //11
        'DATA_MOV    ,'+; //12
        'CHV_CRIPT   ,'+; //13
        'SR_DELETED )'+;
        ' VALUES ('+;
        sr_cdbvalue(m_numeroSerie)+','+; //1
        sr_cdbvalue(m_MFAdicional)+','+; //2
        sr_cdbvalue(m_ModeloImp)+','+; //3
        sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
        sr_cdbvalue(NCupom)+','+; //5
        sr_cdbvalue(Operacoes)+','+; //6
        sr_cdbvalue(sRel)+','+; //7
        sr_cdbvalue(STRZERO(0,4))+','+; //8
        sr_cdbvalue('RG')+','+; //9
        sr_cdbvalue(SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2))+','+; //10
        sr_cdbvalue(mhora)+','+; //11
        sr_cdbvalue(mdata_sis)+','+; //12
        sr_cdbvalue(CRIPTO(mlinha,1) )+','+; //26
        sr_cdbvalue(' ')+')',,.f.)

SET CENTURY OFF

mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
        m_MFAdicional+; //2
        m_ModeloImp+; //3
        STRZERO(VAL(m_numerocaixa),2)+; //4
        NCupom+SPACE(6-LEN(NCupom))+; //5
        STRZERO(0,6)+; //6
        Operacoes+SPACE(6-LEN(Operacoes))+; //7
        SPACE(15)+; //8
        STRZERO(0,13)+; //9
        'N'+; //10
        STRZERO(0,13) //11

sr_getconnection():exec('INSERT INTO r7 ('+;
        'NUMERO_FAB  ,'+; //1
        'MF_ADICIONAL,'+; //2
        'MODELO_ECF  ,'+; //3
        'NUMERO_USU  ,'+; //4
        'COO         ,'+; //5
        'CCF         ,'+; //6
        'GNF         ,'+; //7
        'MEIO_PAG    ,'+; //8
        'VLR_PAGO    ,'+; //9
        'IND_ESTORNO ,'+; //10
        'VLR_ESTORNO ,'+; //11
        'DATA_MOV    ,'+; //12
        'CHV_CRIPT   ,'+; //13
        'SR_DELETED )'+;
        ' VALUES ('+;
        sr_cdbvalue(m_numeroSerie)+','+; //1
        sr_cdbvalue(m_MFAdicional)+','+; //2
        sr_cdbvalue(m_ModeloImp)+','+; //3
        sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
        sr_cdbvalue(NCupom)+','+; //5
        sr_cdbvalue(STRZERO(0,6))+','+; //6
        sr_cdbvalue(Operacoes)+','+; //7
        sr_cdbvalue(SPACE(15))+','+; //8
        sr_cdbvalue(STRZERO(0,13))+','+; //9
        sr_cdbvalue('N')+','+; //10
        sr_cdbvalue(STRZERO(0,13))+','+; //11
        sr_cdbvalue(mdata_sis)+','+; //12
        sr_cdbvalue(CRIPTO(mlinha,1) )+','+; //26
        sr_cdbvalue(' ')+')',,.f.)

Apaga_IntPos()
Return(.T.)
*-------------------------------*
Function Apaga_IntPos(mtp_gerenc)
*********************************
WHILE .T.
        IF File(ALLTRIM( M->Tef_Ret)+'intpos.001')
                IF Ferase(ALLTRIM(m_indiv[1,36])+'intpos.001') == -1
                        IF op_simnao('S',"Nao foi possivel apagar o arquivo IntPos.001 deseja Tentar Novamente") = 'S'
                                Loop
                        ENDIF
                ENDIF
        ENDIF
        IF File(ALLTRIM( M->Tef_Ret)+'intpos.STS')
                IF Ferase(ALLTRIM(m_indiv[1,36])+'intpos.STS') == -1
                        IF op_simnao('S',"Nao foi possivel apagar o arquivo IntPos.STS deseja Tentar Novamente") = 'S'
                                Loop
                        ENDIF
                ENDIF
        ENDIF
        //MYRUN('DEL '+ALLTRIM(M->Tef_Ret)+'cartao*.001')
        EXIT
ENDDO
RETURN
************************************ F I M ******************************************************
FUNCTION PNConf(Tempo)
**********************
//
// Verifica pendencias nao confirmadas
//
//atencao("Existe uma Transacao que nao foi concluida!")
IF ! FILE(ALLTRIM(M->Tef_Ret)+'IntPos.001')
        atencao("Arquivo IntPos.001 nao existe no diretorio indicado")
        Return(.F.)
ENDIF
lin := MEMOLINE(MEMOREAD(ALLTRIM(M->Tef_Ret)+'IntPos.001'),70,1,,)
linhas := linha := 0
linhas := MLCOUNT(MEMOREAD(ALLTRIM(M->Tef_Ret)+'IntPos.001'),70)
m_intpos := {}
FOR linha = 1 TO  linhas
        lin := MEMOLINE(MEMOREAD(ALLTRIM(M->Tef_Ret)+'IntPos.001'),70,linha,,)
        AADD(m_intpos,ALLTRIM(lin))
NEXT
fclose(ALLTRIM(M->Tef_Ret)+'IntPos.001')
IF LEN(m_intpos) = 0
        atencao("O arquivo enviado pelo gerenciador n„o possui nenhum campo!")
        Retur(.F.)
ENDIF
Crlf:= CHR(13)+CHR(10)
mpos := ASCAN(m_intpos,{|nI| "001-000" == SUBSTR(nI,1,7)})
IF mpos > 0
        M_Tef_Num     :=ALLTRIM(SUBSTR(m_intpos[mpos],11))
ELSE
        M_Tef_Num     :=''
ENDIF
mpos := ASCAN(m_intpos,{|nI| "003-000" == SUBSTR(nI,1,7)})
IF mpos > 0
        M->Tef_Valor   :=Val(ALLTRIM(SUBSTR(m_intpos[mpos],11)))/100
ELSE
        M->Tef_Valor   :=0
ENDIF
mpos := ASCAN(m_intpos,{|nI| "010-000" == SUBSTR(nI,1,7)})
IF mpos > 0
        M_Tef_Nomrede :=Upper(ALLTRIM(SUBSTR(m_intpos[mpos],11)))
ELSE
        M_Tef_Nomrede :=''
ENDIF
mpos := ASCAN(m_intpos,{|nI| "012-000" == SUBSTR(nI,1,7)})
IF mpos > 0
        M_Tef_NumTra  :=ALLTRIM(SUBSTR(m_intpos[mpos],11))
ELSE
        M_Tef_NumTra  := ''
ENDIF
mpos := ASCAN(m_intpos,{|nI| "027-000" == SUBSTR(nI,1,7)})
IF mpos > 0
        M_Tef_Finaliza  :=ALLTRIM(SUBSTR(m_intpos[mpos],11))
ELSE
        M_Tef_Finaliza  :=''
ENDIF
/*
If M_Tef_Nomrede = "VISANET"  .or. M_Tef_Nomrede = "REDECARD" .or. M_Tef_Nomrede = "AMEX"
        m_indiv[1,35]:=AllTrim(m_indiv[1,35])
        m_indiv[1,36]:=AllTrim(m_indiv[1,36])
EndIf
*/
M->Txt_Transa := Space(1)
M->Txt_Valor  := Space(1)
M->Txt_Rede   := Space(1)

If !Empty(M_Tef_NumTra)
        M->Txt_Transa := " Transacao No: "+ M_Tef_NumTra
Endif
If !Empty(M_Tef_Nomrede)
        M->Txt_Rede   := " Rede........: "+ M_Tef_Nomrede
Endif
If M->Tef_Valor > 0
        M->Txt_Valor :=  " Valor.......: "+ Transform(M->Tef_Valor,"@E 99,999.99")
Endif
Mostra_Canc(M->Txt_Transa,M->Txt_Valor,M->Txt_REde,"Aguarde....")
If ! Manda_Atv()
        Return(.F.)
EndIf
If !Check_TO("ATV")
        If File(M->Tef_Env+"INTPOS.001")
                If Ferase(M->Tef_Env+"INTPOS.001") == -1
                        atencao("Nao foi possivel apagar o arquivo IntPos.001")
                Endif
        EndIf
        Return
EndIf
Manda_NCN(M_Tef_Num,M_Tef_Nomrede,M_Tef_NumTra,M_Tef_Finaliza)
If ! Check_TO("NCN")
        atencao("O Gerenciador nao retornoru resposta sobre a nao  impressao do cupom TEF!")
Endif
Mostra_Canc(M->Txt_Transa,M->Txt_Valor,M->Txt_REde,"Tecle [Enter] p/ Continuar...")
Return
************************************ F I M ******************************************************
* IMPPRIMI COMPROVANTE DO TEF
*****************************
FUNCTION imp_cartao(ccoo,cCodFormaPagto,nValor,mtexto_aux)
**********************************************************
Local Imprime_Ok := .T.,lin,linha,linhas,c,m_intpos,clinha,texto_tef:='',texto_tef1:='',mvia:=1,;
      nCarac := 48,i:=0,m_aux1:={},mvlr_cupom:=0,mvlr_cartao:=0
mvlr_cupom := sub_total()
m_aux1 := DIRECTORY(ALLTRIM( M->Tef_Ret)+'cartao*.001','D')
//IF LEN(m_aux1) = 0
//        atencao('Nao foi encontrado este arquivo neste caminho: '+ALLTRIM( M->Tef_Ret)+'cartao*.001')
//ENDIF
//atencao( sr_ShowVector( m_aux1[1,1] ))
//atencao( sr_ShowVector( m_aux1 ))

m_intpos := {}
i:=0
FOR i = 1 TO LEN(m_aux1)
        mensagem('Imprimindo o Cartao: '+ALLTRIM(m_aux1[i,1]))
        Texto_Tef := Texto_Tef1 := ''
        lin := MEMOLINE(MEMOREAD(ALLTRIM( M->Tef_Ret)+ALLTRIM(m_aux1[i,1])),nCarac,1,,)
        linhas := linha := 0
        linhas := MLCOUNT(MEMOREAD(ALLTRIM(ALLTRIM( M->Tef_Ret)+m_aux1[i,1])),nCarac)
        m_intpos := {}
        FOR linha = 1 TO  linhas
                lin := MEMOLINE(MEMOREAD(ALLTRIM(ALLTRIM( M->Tef_Ret)+m_aux1[i,1])),nCarac,linha,,)
                AADD(m_intpos,ALLTRIM(lin))
        NEXT
        fclose(ALLTRIM(m_aux1[i,1]))
        IF LEN(m_intpos) = 0
                atencao("O arquivo enviado pelo gerenciador nao possui nenhum campo!")
                Retur(.F.)
        ENDIF
        mpos := ASCAN(m_intpos,{|nI| "029-001" == SUBSTR(nI,1,7)})
        mvlr_cartao := VAL(STRTRAN(SUBSTR(m_intpos[ASCAN(m_intpos,{|nI| "029-013" == SUBSTR(nI,1,7)})],30),'"',''))
        //atencao(SUBSTR(m_intpos[ASCAN(m_intpos,{|nI| "029-013" == SUBSTR(nI,1,7)})],30))
        IF mpos > 0
                IF ccoo # NIL
                        Texto_Tef += ' ' + m_qp
                        Texto_Tef += '                    1a. Via' + m_qp
                        Texto_Tef += 'COO do documento vinculado:              '+ccoo + m_qp
                        Texto_Tef += 'Valor da compra R$                   '+TRANSFORM(mvlr_cupom,'999,999.99') + m_qp
                        Texto_Tef += 'Valor do pagamento R$                '+TRANSFORM(mvlr_cartao,'999,999.99') + m_qp
                        Texto_Tef += ' ' + m_qp
                        Texto_Tef += ' ' + m_qp
                        //Texto_Tef += 'Número de Parcelas        :'+TRANSFORM(nValor,'999,999.99')
                ENDIF
                c := 0
                FOR c = 1 TO LEN(m_intpos)
                        IF SUBSTR(m_intpos[c],1,3) # '029'
                                LOOP
                        ENDIF
                        cLinha    := STRTRAN(SUBSTR(RTRIM(m_intpos[c]),12) + m_qp,'"',' ')
                        Texto_Tef += cLinha
                NEXT
        ENDIF
        texto_tef1 := ''
        IF LEN(texto_tef) > 500
                texto_tef1 := Substr(Texto_Tef,501,LEN(texto_tef)-500)+m_qp+m_qp+m_qp
                texto_tef := Substr(Texto_Tef,1,499)+m_qp+m_qp+m_qp
        ENDIF
        mvia := 2
        //IF nvalor # NIL
        //        mvia := 2
        //ELSE
        //        mvia := 1
        //ENDIF

        mhora := TIME()
        mhora := STRTRAN(mhora,':','')+SPACE(8-LEN(STRTRAN(mhora,':','')))
        NCupom := num_cupom()

        IBR_OK( IBR_COMANDO( 'ECF.AbreRelatorioGerencial' ),5)
        co := 0
        FOR co = 1 TO mvia
                IBR_OK( IBR_COMANDO('ECF.LinhaRelatorioGerencial',{Texto_Tef},5 ))
                IF ! EMPTY(texto_tef1)
                        IBR_OK( IBR_COMANDO('ECF.LinhaRelatorioGerencial',{Texto_Tef1},5 ))
                ENDIF
                IF co = 1
                        IBR_OK( IBR_COMANDO('ECF.LinhaRelatorioGerencial',{m_qp+m_qp+m_qp},5 ))
                        IBR_OK( IBR_COMANDO( 'ECF.CortaPapel' ),5)
                ENDIF
        Next
        IBR_FIM_REL()
        Operacoes = Space(7)
        Operacoes := SUBSTR(IBR_COMANDO( 'ECF.NumGNF' ),5,6)
        sRel = space(7)
        sRel := SUBSTR(IBR_COMANDO( 'ECF.NumGRG' ),5,6)

        SET CENTURY ON
        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
                m_MFAdicional+; //2
                m_ModeloImp+; //3
                STRZERO(VAL(m_numerocaixa),2)+; //4
                NCupom+SPACE(6-LEN(NCupom))+; //5
                Operacoes+SPACE(6-LEN(operacoes))+; //6
                sRel+SPACE(6-LEN(sRel))+; //7
                STRZERO(0,4)+; //8
                'RG'+; //9
                SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)+SPACE(8-LEN(SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2)))+; //10
                mhora //11


        sr_getconnection():exec('INSERT INTO r6 ('+;
                'NUMERO_FAB  ,'+; //1
                'MF_ADICIONAL,'+; //2
                'MODELO_ECF  ,'+; //3
                'NUMERO_USU  ,'+; //4
                'COO         ,'+; //5
                'GNF         ,'+; //6
                'GRG         ,'+; //7
                'CDC         ,'+; //8
                'DENOMICAO   ,'+; //9
                'DATA_FINAL  ,'+; //10
                'HORA_FINAL  ,'+; //11
                'DATA_MOV    ,'+; //12
                'CHV_CRIPT   ,'+; //13
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(m_numeroSerie)+','+; //1
                sr_cdbvalue(m_MFAdicional)+','+; //2
                sr_cdbvalue(m_ModeloImp)+','+; //3
                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                sr_cdbvalue(NCupom)+','+; //5
                sr_cdbvalue(Operacoes)+','+; //6
                sr_cdbvalue(sRel)+','+; //7
                sr_cdbvalue(STRZERO(0,4))+','+; //8
                sr_cdbvalue('RG')+','+; //9
                sr_cdbvalue(SUBSTR(DTOC(mdata_sis),7,4)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),1,2))+','+; //10
                sr_cdbvalue(mhora)+','+; //11
                sr_cdbvalue(mdata_sis)+','+; //12
                sr_cdbvalue(CRIPTO(mlinha,1) )+','+; //26
                sr_cdbvalue(' ')+')',,.f.)

        SET CENTURY OFF

        mlinha := m_numeroSerie+SPACE(20-LEN(m_numeroSerie))+; //1
                m_MFAdicional+; //2
                m_ModeloImp+; //3
                STRZERO(VAL(m_numerocaixa),2)+; //4
                NCupom+SPACE(6-LEN(NCupom))+; //5
                STRZERO(0,6)+; //6
                Operacoes+SPACE(6-LEN(Operacoes))+; //7
                SPACE(15)+; //8
                STRZERO(0,13)+; //9
                'N'+; //10
                STRZERO(0,13) //11
        sr_getconnection():exec('INSERT INTO r7 ('+;
                'NUMERO_FAB  ,'+; //1
                'MF_ADICIONAL,'+; //2
                'MODELO_ECF  ,'+; //3
                'NUMERO_USU  ,'+; //4
                'COO         ,'+; //5
                'CCF         ,'+; //6
                'GNF         ,'+; //7
                'MEIO_PAG    ,'+; //8
                'VLR_PAGO    ,'+; //9
                'IND_ESTORNO ,'+; //10
                'VLR_ESTORNO ,'+; //11
                'DATA_MOV    ,'+; //12
                'CHV_CRIPT   ,'+; //13
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(m_numeroSerie)+','+; //1
                sr_cdbvalue(m_MFAdicional)+','+; //2
                sr_cdbvalue(m_ModeloImp)+','+; //3
                sr_cdbvalue(STRZERO(VAL(m_numerocaixa),2))+','+; //4
                sr_cdbvalue(NCupom)+','+; //5
                sr_cdbvalue(STRZERO(0,6))+','+; //6
                sr_cdbvalue(Operacoes)+','+; //7
                sr_cdbvalue(SPACE(15))+','+; //8
                sr_cdbvalue(STRZERO(0,13))+','+; //9
                sr_cdbvalue('N')+','+; //10
                sr_cdbvalue(STRZERO(0,13))+','+; //11
                sr_cdbvalue(mdata_sis)+','+; //12
                sr_cdbvalue(CRIPTO(mlinha,1) )+','+; //26
                sr_cdbvalue(' ')+')',,.f.)

        MYRUN('DEL '+ALLTRIM( M->Tef_Ret)+ALLTRIM(m_aux1[i,1]))

NEXT
Apaga_IntPos()
Return(.T.)
        
*-------------------------------------------------------*
