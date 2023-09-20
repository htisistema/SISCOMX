
Static Procedure GRemessaZ 
aFile:=wDirG+"Z"+aN_REM+"."+wExt //NOME DO ARQUIVO 
DbSelectArea("CDES1000") 
DbSeek(kA)                                           //KA É A VARIAVEL ALTERAdo 
Set Device To Print                                          
Set Printer To &aFile.+wExt 
@ PRow(),00 Say "I-CDES1000Z"+aN_REM+DtoC(Date())+Time()+StrZero(Val(wCod),4)+wEmpr+Repl(" ",117)+StrZero(PRow()+1,4) 
While !Eof().And.P_REM==kA 
  ShowWaitProc(.T.) 
  If CDES1000->N_REM==aN_REM //se pertencer a remessa 
     @ PRow()+1,00 Say "M-CDES1000"+CONTA+N_DOC+DtoC(D_EMI)+StrZero(V_DES,18,2)+DtoC(D_VEN)+C_CX+DtoC(D_CX)+; 
                        DtoC(D_PAGO)+StrZero(V_PAGO,18,2)+m_CONTA+OBS+N_REM+kG+kG+OPER+StrZero(PRow()+1,4) 
  EndIf 
  DbSkip(1) 
End 
@ PRow()+1,00 Say "F-CDES1000"+wVersao //fim do arquivo 
 

Static Procedure PRemessaZ 
Private lProcessa:=.F.,xRemessa:=.F. 
Declare aNFiles[ADir(wDirR+"Z*."+wExt)] //achei o arquivo 1 ou mais 
ADir(wDirR+"Z*."+wExt,aNFiles) //classifico em ordem para fazer em ordem 
ASort(aNFiles) 
aFile:=FOpen(wDirR+aNFiles[1]) 
wComando:=FReadStr(aFile,10) //posiciono no primeiro comando 
FSeek(aFile,10,0) 
aNRet:=FreadStr(aFile,8) //nome da remessa 
aNDia:=CtoD(FReadStr(aFile,10)) //dia 
aNTim:=FreadStr(aFile,8) //hora 
FSeek(aFile,36,0) 
aNFil:=FreadStr(aFile,4) //numero filial 
FSeek(aFile,203,0) //posiciono para o segundo comando 
wComando:=FReadStr(aFile,10) //comando 
xRemessa:=VPRetorno(@aNRet,wExt) //gravo a remessa que esta fazendo 
If StrZero(Val(wCod),4)==aNFil.And.xRemessa=.T. //se for da loja certa 
   If wComando=="M-CDES1000" //se o comando é o inicio dos dados do arquivo 
      While .T. 
        ShowWaitProc() //barra de progressao 
        x_CONTA:=FReadStr(aFile,10) //leio e passo para variaveis 
        x_N_DOC:=FReadStr(aFile,10) 
        x_D_EMI:=CtoD(FReadStr(aFile,10)) 
        //CtoD(FReadStr(aFile,2)+"/"+FReadStr(aFile,2)+"/"+FReadStr(aFile,4)) 
        If !CDES1000->(DbSeek(x_CONTA+x_N_DOC+DtoS(x_D_EMI))) //procuro 
           CDES1000->(DbAppend()) //se não acho crio com dados principais 
           CDES1000->CONTA:=x_CONTA 
           CDES1000->N_DOC:=x_N_DOC 
           CDES1000->D_EMI:=x_D_EMI 
           CDES1000->(DbCommitAll()) 
        EndIf 
        While CDES1000->(!RLock()) 
          ShowMessage(,,{"Aguardando libera‡Æo do registro de despesa."},1) 
        End 
        //se achado ou não leio o arquivo e gravo direto dentro do campo dbf 
        CDES1000->V_DES  :=Val(FReadStr(aFile,18)) 
        CDES1000->D_VEN  :=CtoD(FReadStr(aFile,10)) 
        CDES1000->C_CX   :=FReadStr(aFile,02) 
        CDES1000->D_CX   :=CtoD(FReadStr(aFile,10)) 
        CDES1000->D_PAGO :=CtoD(FReadStr(aFile,10)) 
        CDES1000->V_PAGO :=Val(FReadStr(aFile,18)) 
        CDES1000->P_CONTA:=FReadStr(aFile,10) 
        CDES1000->OBS    :=FReadStr(aFile,60) 
        CDES1000->N_REM  :=FReadStr(aFile,07) 
        CDES1000->O_PROC :=FReadStr(aFile,01) 
        CDES1000->P_REM  :=FReadStr(aFile,01) 
        CDES1000->OPER   :=FReadStr(aFile,10) 
        CDES1000->(DbCommitAll()) 
        CDES1000->(DbUnLock()) 
        FSeek(aFile,6,1)  //posicionou //aqui //fim da primeira linha posiciono novamente 
        wComando:=FReadStr(aFile,10) // pego o comando 
        If wComando=="F-CDES1000"  //verifico se for o fim ultima linha 
           lProcessa:=wProcessa:=.T. //saio 
      Exit 
        EndIf 
      End //senão volto ao while e continuo lendo porque é a proxima linha de dados 
   ElseIf wComando=="F-CDES1000" //se for fim 
      lProcessa:=wProcessa:=.T. //saio 
   EndIf 
ElseIf StrZero(Val(wCod),4)#aNFil //se não é desta loja é de outra não processo para não dar lixo 
   ShowMessage(,,{"Arquivo retorno a processar ‚ da",""+wEmpr+"..."},0) 
ElseIf xRemessa=.F. 
   lProcessa:=.F. 
Else //se o aruqivo não andou no comando corretamente o arquivo esta com falha 
   ShowMessage(,,{"Arquivo a Ser Processado","NÆo Est  Correto, Verifique!"},0) 
EndIf 
FClose(aFile) //fecho 
If lProcessa=.T. //se processado corretamente elimino da lista o txt 
   ShowWait(,,"Processamento Conclu¡do Com Sucesso...") 
   GvRetorno(@aNRet,@aNDia,@aNTim) //gravo o retorno com sucesso 
   If File(wDirR+Left(aNFiles[1],8)+"."+pExt) //renomeio 
      FErase(wDirR+Left(aNFiles[1],8)+"."+Left(pExt,2)+"1") //se tiver outro iigual 
      FRename(wDirR+Left(aNFiles[1],8)+"."+pExt,wDirR+Left(aNFiles[1],8)+"."+Left(pExt,2)+"1") 
   EndIf 
   FRename(wDirR+Left(aNFiles[1],8)+"."+wExt,wDirR+Left(aNFiles[1],8)+"."+pExt) //renomeio 
   CloseWindow() 
EndIf 
Return lProcessa //fim do processo 
////////////////// 
