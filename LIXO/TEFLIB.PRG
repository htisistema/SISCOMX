/***************************************************************************
============================================================================

 Exemplo para a utilização das Funções do TEF, utilizando a LIB
 BEMAFI.LIB

============================================================================
****************************************************************************/
#include "FISCAL.CH"
#include "FILEIO.CH"

FUNCTION teflib
***************
clear
WHILE .T.
   @ 00,00 say "Exemplo basico para a Impressao do TEF - versao 1.0"
   @ 01,01 to 12,27
   @ 23,00 to 23,79
   @ 02,02 prompt " Verifica Gerenciador    "
   @ 03,02 prompt " Abre Cupom Fiscal       "
   @ 04,02 prompt " Vende Item              "
   @ 05,02 prompt " Inicia Fechamento Cupom "
   @ 06,02 prompt " Venda Cartao            "
   @ 07,02 prompt " Confirma Venda          "
   @ 08,02 prompt " Nao Confirma Venda      "
   @ 09,02 prompt " Cancela Venda           "
   @ 10,02 prompt " Administrativo          "
   @ 11,02 prompt " Imprime Relat¢rio       "
   menu to iOpcao

   IF lastkey() = 27
        EXIT
   ENDIF

   DO CASE

      // Verifica Gerenciador
      CASE iOpcao = 1
           iStatus = VerificaGerenciador()
           IF iStatus = 1
              @ 24,02 say "Gerenciador Padr„o se encontra ATIVO !"
              INKEY( 3 )
              @ 24,02 say space( 70 )
           ELSE
              @ 24,02 say "Gerenciador Padr„o se encontra INATIVO !"
              INKEY( 3 )
              @ 24,02 say space( 70 )
           ENDIF

      // Abre Cupom Fiscal
      CASE iOpcao = 2
           sComando := CHR( 27 ) + CHR( 251 ) + "00|" + CHR( 27 )
           fwrite_bema( numero_ecf, @sComando, len( sComando ) )

      // Vende Item
      CASE iOpcao = 3
           sComando := CHR( 27 ) + CHR( 251 ) + "09|0000000000001" + ;
                                                  "|Teste de Venda               " + ;
                                                  "|II" + ;
                                                  "|0001" + ;
                                                  "|00000001" + ;
                                                  "|0000|" + CHR( 27 )
           fwrite_bema( numero_ecf, @sComando, len( sComando ) )

      // Inicia Fechamento do Cupom
      CASE iOpcao = 4
           sComando := CHR( 27 ) + CHR( 251 ) + "32|A|0000|" + CHR( 27 )
           fwrite_bema( numero_ecf, @sComando, len( sComando ) )

      // Venda Cart„o
      CASE iOpcao = 5
           VendaCartao()

      // Confirma Venda
      CASE iOpcao = 6
           ConfirmaVenda()

      // N„o Confirma Venda
      CASE iOpcao = 7
           NaoConfirmaVenda()

      // Cancela Venda
      CASE iOpcao = 8
           CancelaVenda()

      // Cancela Venda
      CASE iOpcao = 9
           ADM()

      // Cancela Venda
      CASE iOpcao = 10
           Relatorio()

   endcase

ENDDO
clear
RETURN


/***************************************************************************
============================================================================

 Fun‡„o: VerificaGerenciador
 Verifica se o Gerenciador Padr„o est  ativo.

============================================================================
****************************************************************************/

FUNCTION VerificaGerenciador
LOCAL iVezes := 0,sarq,spathorigem,slinhas
sArq        := fcreate( "INTPOS.001" )
sPathOrigem := "C:\" + curdir() + "\INTPOS.001"
WHILE .T.
        IF file( "C:\TEF_DIAL\RESP\ATIVO.001" )
                RETURN 1
                EXIT
        ELSE
                iVezes += 1
                sLinhas := "000-000 = ATV"        + CHR( 13 ) + CHR( 10 ) + ;
                           "001-000 = 0000000001" + CHR( 13 ) + CHR( 10 ) + ;
                           "999-999 = 0"
                fwrite( sArq, @sLinhas, len( sLinhas ) )
                MYRUN('COPY '+sPathOrigem+' '+"C:\TEF_DIAL\REQ\INTPOS.001" )
                //__copyfile( sPathOrigem, "C:\TEF_DIAL\REQ\INTPOS.001" )
                INKEY( 3 )
                IF file( "C:\TEF_DIAL\RESP\INTPOS.STS" )
                        RETURN 1 ; EXIT
                ELSE
                        IF iVezes = 7
                                RETURN 0
                                EXIT
                        ENDIF
                ENDIF
                loop
        ENDIF
ENDDO
RETURN NIL


/***************************************************************************
============================================================================

 Fun‡„o: VendaCartao
 Ativa o Gerenciador Padr„o, gerando o arquivo INTPOS.001, efetuando a
 transa‡„o.

============================================================================
****************************************************************************/

FUNCTION VendaCartao

LOCAL sarq,spathorigem,scomando,sNCupom,sDados,sRetorno,iconta,ssubtotal,ssubtotal2,;
      slinhas,itamarq,sdadostef,campo009:='0',mcampo030:='0',mcampo028:='0'

MEMVAR mn_cupom

delete file( "C:\TEF_DIAL\RESP\INTPOS.001" )

sArq        := fcreate( "INTPOS.001" )
sPathOrigem := "C:\" + curdir() + "\INTPOS.001"


//////////////////////////////////////
// Recebendo o N£mero do Cupom Fiscal
//////////////////////////////////////

sNCupom := IBR_NUM_CUPOM()
mn_cupom:= IBR_NUM_CUPOM()


////////////////////////////////////////
// Recebendo o Subtotal do Cupom Fiscal
////////////////////////////////////////

sSubtotal2 := IBR_SUBTOTAL()
sSubtotal  := IBR_SUBTOTAL()


////////////////////////////////
// Prepara o arquivo INTPOS.001
////////////////////////////////

sLinhas     := "000-000 = CRT"          + CHR( 13 ) + CHR( 10 ) + ;
               "001-000 = 0000000001"   + CHR( 13 ) + CHR( 10 ) + ;
               "002-000 = " + sNCupom   + CHR( 13 ) + CHR( 10 ) + ;
               "003-000 = " + sSubtotal + CHR( 13 ) + CHR( 10 ) + ;
               "004-000 ="              + CHR( 13 ) + CHR( 10 ) + ;
               "999-999 = 0"            + CHR( 13 ) + CHR( 10 )
fwrite( sArq, @sLinhas, len( sLinhas ) )
MYRUN('COPY '+sPathOrigem+' '+"C:\TEF_DIAL\REQ\INTPOS.001" )
//__copyfile( sPathOrigem, "C:\TEF_DIAL\REQ\INTPOS.001" )
*INKEY( 4 )


//////////////////////////////////////////////////////////////////
// Recebendo o arquivo INTPOS.001 com as informacoes da Transacao
//////////////////////////////////////////////////////////////////

WHILE .T.
        IF file( "C:\TEF_DIAL\RESP\INTPOS.001" ) .and. freadstr( file( "C:\TEF_DIAL\RESP\INTPOS.001" ) ) <> "0"
                sArq    := fopen( "C:\TEF_DIAL\RESP\INTPOS.001" )
                iTamArq := fseek( sArq, 0, 2 )
                fclose( sArq )

                sArq        := fopen( "C:\TEF_DIAL\RESP\INTPOS.001" )
                sRetorno    := " "
                sDadosTEF   := sDados      := ""
                FOR iConta := 1 to iTamArq
                        sRetorno := " "
                        fread( sArq, @sRetorno, 1 )
                        IF asc( sRetorno ) = 10
                                IF left( sDados, 3 ) = "029"
                                        sDados := stuff( sDados, 1, 10, "" )
                                        sDados := strtran( sDados, '"', "" )
                                        sDadosTEF += sDados + CHR( 10 )
                                ENDIF
                                IF left( sDados, 3 ) = "009"
                                        mcampo009 := substr( sDados, 11, 6 )
                                ENDIF
                                IF left( sDados, 3 ) = "030"
                                        mcampo030 := substr( sDados, 11, 30 )
                                ENDIF
                                IF left( sDados, 3 ) = "028"
                                        mcampo028 := substr( sDados, 11, 30 )
                                ENDIF
                                sDados := sRetorno := ""
                        ENDIF
                        sDados += sRetorno
                NEXT
                IF ! EMPTY(mcampo009) .AND. VAL(mcampo028) = 0
                        delete file( "C:\TEF_DIAL\RESP\INTPOS.001" )
                        atencao(mcampo030)
                        RETURN .F.
                ENDIF
                IF VAL(mcampo009) = 0 .AND. VAL(mcampo028) = 0
                        atencao(mcampo030)
                ENDIF
                IF VAL(mcampo009) = 0 .AND. VAL(mcampo028) > 0
                        atencao(mcampo030)
                ENDIF
                fclose( sArq )

                mensagem("Imprimindo o TEF...")
      
/*
                //////////////////////////////////////////////////
                // Programa a Forma de Pagamento "Cartao credito"
                //////////////////////////////////////////////////

                sComando := CHR( 27 ) + CHR( 251 ) + "71|Cartao credito  |" + CHR( 27 )
                fwrite_bema( numero_ecf, @sComando, len( sComando ) )
                *     INKEY( 1 )

                sRetorno := " "
                sDados   := ""
                FOR iCOnta := 1 to 5
                        fread_bema( numero_ecf, @sRetorno, 1 )
                        sDados += sRetorno
                NEXT

                sIndiceForma := right( sDados, 2 )


                ////////////////////////////////////////////////
                // Efetua a Forma de Pagamento "Cartao credito"
                ////////////////////////////////////////////////

                IBR_PAGTO( m_valor,mind_pg)

                sComando := CHR( 27 ) + CHR( 251 ) + "72|" + sIndiceForma + ;
                                                        "|" + sSubtotal2 + "|" + CHR( 27 )
                fwrite_bema( numero_ecf, @sComando, len( sComando ) )
                *     INKEY( 1 )


                ////////////////////////////////////////
                // Termina o Fechamento do Cupom Fiscal
                ////////////////////////////////////////

                sComando := CHR( 27 ) + CHR( 251 ) + '34|<<'+mcli+'>> - Oper.:'+cod_operado+'/ P.:'+STRZERO(mnum_ped,6)+' - '+m_set[1,25]+m_set[1,26] + CHR( 27 )
                fwrite_bema( numero_ecf, @sComando, len( sComando ) )
                *     INKEY( 1 )

*/
                /////////////////////////////////////////////////////////////////
                // Abre Comprovante N„o Fiscal Vinculado para a impress„o do TEF
                /////////////////////////////////////////////////////////////////

                sComando := CHR( 27 ) + CHR( 251 ) + "66|Cartao credito  |" + CHR( 27 )
                fwrite_bema( numero_ecf, @sComando, len( sComando ) )
                *     INKEY( 3 )
                //////////////////////////
                // Imprime o texto do TEF
                //////////////////////////

                iInicio := 1
                WHILE iInicio < len( sDadosTEF )
                        sDadosTEF1 := substr( sDadosTEF, iInicio, 48 )
                        sComando := CHR( 27 ) + CHR( 251 ) + "67|" + sDadosTEF1 + "|" + CHR( 27 )
                        fwrite_bema( numero_ecf, @sComando, len( sComando ) )
                *         INKEY( 1 )
                        iInicio := iInicio + 48
                ENDDO

                //////////////////////////////
                // Fecha o Comprovante do TEF
                //////////////////////////////

                sComando := CHR( 27 ) + CHR( 251 ) + "21|" + CHR( 27 )
                fwrite_bema( numero_ecf, @sComando, len( sComando ) )

                @ 24,02 say space( 78 )

                EXIT
        ELSE
                loop
        ENDIF
ENDDO
RETURN .T.



/***************************************************************************
============================================================================

 Fun‡„o: ConfirmaVenda
 Envia o arquivo INTPOS.001 com os dados para a confirma‡„o da venda

============================================================================
****************************************************************************/

FUNCTION ConfirmaVenda

  //////////////////////////////////////////////////////////////////
  // Recebendo o arquivo INTPOS.001 com as informa‡”es da Transa‡„o
  //////////////////////////////////////////////////////////////////

WHILE .T.
     mensagem("Confirmando a Venda...")

     sArqR        := fcreate( "INTPOS.001" )
     sPathOrigem  := "C:\" + curdir() + "\INTPOS.001"

     IF file( "C:\TEF_DIAL\RESP\INTPOS.001" ) .and. freadstr( file( "C:\TEF_DIAL\RESP\INTPOS.001" ) ) <> "0"
                sArq    := fopen( "C:\TEF_DIAL\RESP\INTPOS.001" )
                iTamArq := fseek( sArq, 0, 2 )
                fclose( sArq )

                sArq     := fopen( "C:\TEF_DIAL\RESP\INTPOS.001" )
                sDados   := ""
                FOR iConta := 1 to iTamArq
                        sRetorno := " "
                        fread( sArq, @sRetorno, 1 )
                        IF asc( sRetorno ) = 10
                                IF left( sDados, 3 ) = "002"
                                        sNCupom := substr( sDados, 11, 6 )
                                ENDIF
                                IF left( sDados, 3 ) = "010"
                                        sRede := substr( sDados, 11, 4 )
                                ENDIF
                                IF left( sDados, 3 ) = "009"
                                        mcampo009 := substr( sDados, 11, 6 )
                                ENDIF
                                IF left( sDados, 3 ) = "030"
                                        mcampo030 := substr( sDados, 11, 30 )
                                ENDIF
                                IF left( sDados, 3 ) = "028"
                                        mcampo028 := substr( sDados, 11, 30 )
                                ENDIF
                                IF left( sDados, 3 ) = "012"
                                        sNSU := substr( sDados, 11, 6 )
                                ENDIF
                                sDados := sRetorno := ""
                        ENDIF
                        sDados += sRetorno
                NEXT
/*
                IF ! EMPTY(mcampo009) .AND. VAL(mcampo028) = 0
                        delete file( "C:\TEF_DIAL\RESP\INTPOS.001" )
                        atencao(mcampo030+' [  OK  ]',0)
                        RETURN .F.
                ENDIF
                IF VAL(mcampo009) = 0 .AND. VAL(mcampo028) = 0
                        delete file( "C:\TEF_DIAL\RESP\INTPOS.001" )
                        atencao(mcampo030+' [  OK  ]',0)
                ENDIF
                IF VAL(mcampo009) = 0 .AND. VAL(mcampo028) > 0
                        delete file( "C:\TEF_DIAL\RESP\INTPOS.001" )
                        atencao(mcampo030,5)
                ENDIF
*/
                fclose( sArq )

                sLinhas := "000-000 = CNF"        + CHR( 13 ) + CHR( 10 ) + ;
                        "001-000 = 0000000001" + CHR( 13 ) + CHR( 10 ) + ;
                        "002-000 = " + sNCupom + CHR( 13 ) + CHR( 10 ) + ;
                        "010-000 = " + sRede   + CHR( 13 ) + CHR( 10 ) + ;
                        "012-000 = " + sNSU    + CHR( 13 ) + CHR( 10 ) + ;
                        "027-000 = " + sNSU    + CHR( 13 ) + CHR( 10 ) + ;
                        "999-999 = 0"
                fwrite( sArqR, @sLinhas, len( sLinhas ) )
                __copyfile( sPathOrigem, "C:\TEF_DIAL\REQ\INTPOS.001" )
*               INKEY( 4 )

                delete file( "C:\TEF_DIAL\RESP\INTPOS.001" )

                EXIT
        ENDIF
ENDDO
RETURN .T.


/***************************************************************************
============================================================================

 Fun‡„o: NaoConfirmaVenda
 Efetua a N„o Confirma‡„o da Venda TEF

============================================================================
****************************************************************************/

FUNCTION NaoConfirmaVenda

  
  //////////////////////////////////////////////////////////////////
  // Recebendo o arquivo INTPOS.001 com as informa‡”es da Transa‡„o
  //////////////////////////////////////////////////////////////////
  
  WHILE .T.

     @ 24,02 say "N„o Confirma a Venda..."

     sArqR        := fcreate( "INTPOS.001" )
     sPathOrigem  := "C:\" + curdir() + "\INTPOS.001"

     IF file( "C:\TEF_DIAL\RESP\INTPOS.001" ) .and. freadstr( file( "C:\TEF_DIAL\RESP\INTPOS.001" ) ) <> "0"
        sArq    := fopen( "C:\TEF_DIAL\RESP\INTPOS.001" )
        iTamArq := fseek( sArq, 0, 2 )
        fclose( sArq )

        sArq     := fopen( "C:\TEF_DIAL\RESP\INTPOS.001" )
        sDados   := ""
        FOR iConta := 1 to iTamArq
            sRetorno := " "
            fread( sArq, @sRetorno, 1 )
            IF asc( sRetorno ) = 10
               IF left( sDados, 3 ) = "002"
                  sNCupom := substr( sDados, 11, 6 )
               ENDIF
               IF left( sDados, 3 ) = "010"
                  sRede := substr( sDados, 11, 4 )
               ENDIF
               IF left( sDados, 3 ) = "012"
                  sNSU := substr( sDados, 11, 6 )
               ENDIF
               sDados := sRetorno := ""
            ENDIF
            sDados += sRetorno
        NEXT
        fclose( sArq )

        sLinhas := "000-000 = NCN"        + CHR( 13 ) + CHR( 10 ) + ;
                   "001-000 = 0000000001" + CHR( 13 ) + CHR( 10 ) + ;
                   "002-000 = " + sNCupom + CHR( 13 ) + CHR( 10 ) + ;
                   "010-000 = " + sRede   + CHR( 13 ) + CHR( 10 ) + ;
                   "012-000 = " + sNSU    + CHR( 13 ) + CHR( 10 ) + ;
                   "027-000 = " + sNSU    + CHR( 13 ) + CHR( 10 ) + ;
                   "999-999 = 0"
        fwrite( sArqR, @sLinhas, len( sLinhas ) )
        __copyfile( sPathOrigem, "C:\TEF_DIAL\REQ\INTPOS.001" )
        INKEY( 4 )

        delete file( "C:\TEF_DIAL\RESP\INTPOS.001" )
        @ 24,02 say space( 78 )

        EXIT
     ENDIF
  ENDDO
RETURN


/***************************************************************************
============================================================================

 Fun‡„o: CancelaVenda
 Cancela a Venda TEF, ap¢s a confirma‡„o

============================================================================
****************************************************************************/

FUNCTION CancelaVenda
  iValor    := 0
  sNCupom   := space( 06 )
  sBandeira := space( 06 )
  sDOC      := space( 06 )
  sData     := "02052002"
  sHora     := "143100"
  @ 01,39 to 08,69
  @ 02,40 say "N£mero do Cupom:" get sNCupom    pict "@!"
  @ 03,40 say "Valor do Cupom.:" get iValor     pict "999999999999"
  @ 04,40 say "Bandeira.......:" get sBandeira  pict "@!"
  @ 05,40 say "N§ do DOC......:" get sDOC       pict "@!"
  @ 06,40 say "Data...........:" get sData      pict "@!"
  @ 07,40 say "Hora...........:" get sHora      pict "@!"
  read
  IF lastkey() = 27
     @ 01,39 clear to 08,79
     RETURN
  ENDIF

  @ 01,39 clear to 08,79
  @ 24,02 say "Cancelando a Venda..."

  sArqR        := fcreate( "INTPOS.001" )
  sPathOrigem  := "C:\" + curdir() + "\INTPOS.001"


  sLinhas := "000-000 = CNC"                              + CHR( 13 ) + CHR( 10 ) + ;
             "001-000 = 0000000001"                       + CHR( 13 ) + CHR( 10 ) + ;
             "002-000 = " + sNCupom                       + CHR( 13 ) + CHR( 10 ) + ;
             "003-000 = " + strzero( iValor, 12, 0 )      + CHR( 13 ) + CHR( 10 ) + ;
             "010-000 = " + alltrim( sBandeira )          + CHR( 13 ) + CHR( 10 ) + ;
             "012-000 = " + sDOC                          + CHR( 13 ) + CHR( 10 ) + ;
             "022-000 = " + sHora                         + CHR( 13 ) + CHR( 10 ) + ;
             "023-000 = " + sData                         + CHR( 13 ) + CHR( 10 ) + ;
             "999-999 = 0"
  fwrite( sArqR, @sLinhas, len( sLinhas ) )
  __copyfile( sPathOrigem, "C:\TEF_DIAL\REQ\INTPOS.001" )
  INKEY( 4 )


  //////////////////////////////////////////////////////////////////
  // Recebendo o arquivo INTPOS.001 com as informa‡”es da Transa‡„o
  //////////////////////////////////////////////////////////////////
  
  WHILE .T.
     IF file( "C:\TEF_DIAL\RESP\INTPOS.001" ) .and. freadstr( file( "C:\TEF_DIAL\RESP\INTPOS.001" ) ) <> "0"
        sArq    := fopen( "C:\TEF_DIAL\RESP\INTPOS.001" )
        iTamArq := fseek( sArq, 0, 2 )
        fclose( sArq )

        sArq        := fopen( "C:\TEF_DIAL\RESP\INTPOS.001" )
        sRetorno    := " "
        sDadosTEF   := ""
        sDados      := ""
        FOR iConta := 1 to iTamArq
            sRetorno := " "
            fread( sArq, @sRetorno, 1 )
            IF asc( sRetorno ) = 10
               IF left( sDados, 3 ) = "029"
                  sDados := stuff( sDados, 1, 10, "" )
                  sDados := strtran( sDados, '"', "" )
                  sDadosTEF += sDados + CHR( 10 )
               ENDIF
               sDados := sRetorno := ""
            ENDIF
            sDados += sRetorno
        NEXT
        fclose( sArq )

        @ 24,02 say "Imprimindo o Cancelamento da Venda..."


	/////////////////////////////////////////////////////////////////
        // Abre Comprovante N„o Fiscal Vinculado para a impress„o do TEF
        /////////////////////////////////////////////////////////////////

        sComando := CHR( 27 ) + CHR( 251 ) + "20|" + CHR( 27 )
        fwrite_bema( numero_ecf, @sComando, len( sComando ) )
        INKEY( 10 )


        //////////////////////////
        // Imprime o texto do TEF
        //////////////////////////
        
        iInicio := 1
        WHILE iInicio < len( sDadosTEF )
            sDadosTEF1 := substr( sDadosTEF, iInicio, 48 )
            sComando := CHR( 27 ) + CHR( 251 ) + "20|" + sDadosTEF1 + "|" + CHR( 27 )
            fwrite_bema( numero_ecf, @sComando, len( sComando ) )
            INKEY( 1 )
            iInicio := iInicio + 48
        ENDDO


	//////////////////////////////
        // Fecha o Comprovante do TEF
        //////////////////////////////
        
        sComando := CHR( 27 ) + CHR( 251 ) + "21|" + CHR( 27 )
        fwrite_bema( numero_ecf, @sComando, len( sComando ) )

        @ 24,02 say space( 78 )

        EXIT
     ELSE
        loop
     ENDIF
  ENDDO

  delete file( "C:\TEF_DIAL\RESP\INTPOS.001" )
  @ 24,02 say space( 78 )

RETURN


/***************************************************************************
============================================================================

 Fun‡„o: ADM
 Abre a tela Administrativa da Bandeira

============================================================================
****************************************************************************/

FUNCTION ADM

  sArqR        := fcreate( "INTPOS.001" )
  sPathOrigem  := "C:\" + curdir() + "\INTPOS.001"

  sLinhas := "000-000 = ADM"        + CHR( 13 ) + CHR( 10 ) + ;
             "001-000 = 0000000001" + CHR( 13 ) + CHR( 10 ) + ;
             "999-999 = 0"
  fwrite( sArqR, @sLinhas, len( sLinhas ) )
  __copyfile( sPathOrigem, "C:\TEF_DIAL\REQ\INTPOS.001" )

RETURN


/***************************************************************************
============================================================================

 Fun‡„o: Relatorio
 Imprime o Relat¢rio, solicitado pela fun‡„o ADM

============================================================================
****************************************************************************/

FUNCTION Relatorio

// Recebendo o arquivo INTPOS.001 com as informa‡”es da Transa‡„o
WHILE .T.
     	IF file( "C:\TEF_DIAL\RESP\INTPOS.001" ) .and. freadstr( file( "C:\TEF_DIAL\RESP\INTPOS.001" ) ) <> "0"
	        sArq    := fopen( "C:\TEF_DIAL\RESP\INTPOS.001" )
        	iTamArq := fseek( sArq, 0, 2 )
	        fclose( sArq )

        	sArq        := fopen( "C:\TEF_DIAL\RESP\INTPOS.001" )
	        sRetorno    := " "
        	sDadosTEF   := ""
	        sDados      := ""
		FOR iConta := 1 to iTamArq
	            	sRetorno := " "
	        	fread( sArq, @sRetorno, 1 )
			IF asc( sRetorno ) = 10
	        		IF left( sDados, 3 ) = "029"
                	  		sDados := stuff( sDados, 1, 10, "" )
 			             	sDados := strtran( sDados, '"', "" )
			             	sDadosTEF += sDados + CHR( 10 )
               			ENDIF
               			sDados := sRetorno := ""
	            	ENDIF
        	    	sDados += sRetorno
	        NEXT
        	fclose( sArq )

        	@ 24,02 say "Imprimindo o Relat¢rio Administrativo..."

        	// Abre Comprovante N„o Fiscal Vinculado para a impress„o do TEF
        	sComando := CHR( 27 ) + CHR( 251 ) + "20|" + CHR( 27 )
	        fwrite_bema( numero_ecf, @sComando, len( sComando ) )
	        INKEY( 10 )

		//////////////////////////
        	// Imprime o texto do TEF
        	//////////////////////////
        
        	iInicio := 1
        	WHILE iInicio < len( sDadosTEF )
            		sDadosTEF1 := substr( sDadosTEF, iInicio, 48 )
            		sComando := CHR( 27 ) + CHR( 251 ) + "20|" + sDadosTEF1 + "|" + CHR( 27 )
            		fwrite_bema( numero_ecf, @sComando, len( sComando ) )
            		INKEY( 1 )
		      	iInicio := iInicio + 48
        	ENDDO

		//////////////////////////////
        	// Fecha o Comprovante do TEF
        	//////////////////////////////

        	sComando := CHR( 27 ) + CHR( 251 ) + "21|" + CHR( 27 )
        	fwrite_bema( numero_ecf, @sComando, len( sComando ) )

        	@ 24,02 say space( 78 )

        	EXIT
     	ELSE
        	loop
     	ENDIF
ENDDO
delete file( "C:\TEF_DIAL\RESP\INTPOS.001" )
@ 24,02 say space( 78 )
RETURN

