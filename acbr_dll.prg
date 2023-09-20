/////////////////////////////////////////////////////////////////////////////
//
// ACBR - Funcoes Compativeis com ACBrECFDLL.DLL
//
//         Autor: Jose Carlos da Rocha
//          Data: 24/03/2009
//         Email: irochinha@itelefonica.com.br
//           MSN: fivolution@hotmail.com
//     Linguagem: xBase / Fivewin
//   Plataformas: DOS, Windows
// Requerimentos: Harbour/xHarbour
//
/////////////////////////////////////////////////////////////////////////////
#include "fivewin.ch"
#include "dll.ch"

#define ACBrDLL "ACBrECFDLL.dll"

function main()

   public hDLL := LoadLibrary( ACBrDLL )

   if hDLL > 0

      if DefineModelo( "Bematech", "COM6", 3 )

         nRetorno := AbreCupom()
         if nRetorno > 0
            ? "Cupom nao pode ser aberto."
         endif

         cTipoQtde      := "I"
         nCasasDecimais := "2"
         cCodigo        := "123456"
         cDescricao     := "PRODUTO TESTE"
         cAliquotaICMS  := "II"
         nQtdes         := 1
         nValorUnitario := 2.50
         nValorDesconto := 0
         cUnidade       := "UN"
         cTipoDesconto  := "%"

         nRetorno := VendeItem( cCodigo, cDescricao, cAliquotaICMS, nQtdes, nValorUnitario ) //, nValorDesconto, cUnidade, cTipoDesconto )
         if nRetorno > 0
            MsgRun( "Cancelando cupom. Erro ("+str(nRetorno)+")" )
            CancelaCupom()
         endif
         nRetorno := VendeItem( cCodigo, cDescricao, cAliquotaICMS, nQtdes, nValorUnitario*2 ) //, nValorDesconto, cUnidade, cTipoDesconto )
         if nRetorno > 0
            MsgRun( "Cancelando cupom. Erro ("+str(nRetorno)+")" )
            CancelaCupom()
         endif
         nRetorno := VendeItem( cCodigo, cDescricao, cAliquotaICMS, nQtdes*3, nValorUnitario, 10, "LT", "%" )
         if nRetorno > 0
            MsgRun( "Cancelando cupom. Erro ("+str(nRetorno)+")" )
            CancelaCupom()
         endif

         *  Desconto := StrToFloatDef(InputBox('SubTotal','Digite o Desconto/Acréscimo:', '' ),0);
         *  Obs      := InputBox('SubTotal','Digite a Observação:', '' );
         *  Retorno := SubtotalizaCupom( Desconto, Obs ) ;
         nRetorno := SubTotalizaCupom( 0, "" )
         if nRetorno > 0
            MsgRun( "SubTotalizaCupom. Erro ("+str(nRetorno)+")" )
         endif

         *  CodForma := InputBox('Pagamento','Digite o código da forma:', '' );
         *  Valor    := StrToFloatDef(InputBox('Pagamento','Digite o Valor:', '' ),0);
         *  Obs      := InputBox('Pagamento','Digite a Observação:', '' );
         *  Retorno := EfetuaPagamento( CodForma, Valor, Obs ) ;
         nRetorno := EfetuaPagamento( "01", 100, "DEVE VOLTAR TROCO DE 1,25" )
         if nRetorno > 0
            MsgRun( "EfetuaPagamento. Erro ("+str(nRetorno)+")" )
         endif

         *  Obs := InputBox('Fechamento','Digite a Observação Final:', '' );
         *  Retorno := FechaCupom( Obs ) ;
         nRetorno := FechaCupom( "5Volution Fenix|http://www.5volution.com" )
         if nRetorno > 0
            MsgRun( "FechaCupom. Erro ("+str(nRetorno)+")" )
         endif

         if MsgYesNo( "Deseja cancelar este cupom?" )
            nRetorno := CancelaCupom()
         endif

         * nRetorno := ReducaoZ( date() )

         if MsgYesNo( "Deseja imprimir Leitura X?" )
            nRetorno := LeituraX()
         endif

         if MsgYesNo( "Deseja visualizar log?" )
            WinExec( "NOTEPAD LOG.TXT" )
         endif

         *  Item := StrToInt(InputBox('Cancela Item','Digite a Número do Item:', '' ));
         *  nRetorno := CancelaItemVendido( Item )

      else
         MsgStop('Não foi possível ativar o ECF')
      endif

      FreeLibrary( hDLL )
   else
      MsgInfo( "ACBrECFDLL.dll nao foi carregada." )
   endif

return nil

DLL32 FUNCTION DefineModelo( cModeloStr AS STRING, cPorta AS STRING, nTimeout AS _INT ) AS BOOL PASCAL FROM "DefineModelo" LIB ACBrDLL
DLL32 FUNCTION IdentificaConsumidor( cCPF_CNPJ AS STRING, cNome AS STRING, cEndereco AS STRING ) AS _INT PASCAL FROM "IdentificaConsumidor" LIB ACBrDLL
DLL32 FUNCTION AbreCupom( cCPF_CNPJ AS STRING, cNome AS STRING, cEndereco AS STRING ) AS _INT PASCAL FROM "AbreCupom" LIB ACBrDLL
DLL32 FUNCTION VendeItem( cCodigo AS STRING, ;
                          cDescricao AS STRING, ;
                          cAliquotaICMS AS STRING, ;
                          nQtd AS _DOUBLE, ;
                          nValorUnitario AS _DOUBLE, ;
                          nDescontoPorc AS _DOUBLE, ;
                          cUnidade AS STRING, ;
                          cTipoDescontoAcrescimo AS STRING ) AS _INT PASCAL FROM "VendeItem" LIB ACBrDLL
DLL32 FUNCTION FechaCupom( cObservacao AS STRING ) AS _INT PASCAL FROM "FechaCupom" LIB ACBrDLL
DLL32 FUNCTION SubtotalizaCupom( DescontoAcrescimo AS _DOUBLE, MensagemRodape AS STRING ) AS _INT PASCAL FROM "SubtotalizaCupom" LIB ACBrDLL
DLL32 FUNCTION EfetuaPagamento( cCodFormaPagto AS STRING, ;
                                nValor AS _DOUBLE, ;
                                cObservacao AS STRING, ;
                                lImprimeVinculado AS BOOL ) AS _INT PASCAL FROM "EfetuaPagamento" LIB ACBrDLL
DLL32 FUNCTION LeituraX() AS _INT PASCAL FROM "LeituraX" LIB ACBrDLL
DLL32 FUNCTION ReducaoZ( DataHora AS DATE ) AS _INT PASCAL FROM "ReducaoZ" LIB ACBrDLL
DLL32 FUNCTION CancelaCupom() AS _INT PASCAL FROM "CancelaCupom" LIB ACBrDLL
DLL32 FUNCTION CancelaItemVendido( NumItem AS _INT ) AS _INT PASCAL FROM "CancelaItemVendido" LIB ACBrDLL

