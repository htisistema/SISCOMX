//#include "Fivewin.ch"
#include "EasyTEF.ch"

function demo()

  Public ActiveX, EasyTEF, NumeroCupom, nTotalAPagar, cMsg

        IF ! ini_ecf()
                atencao('Nao pode continuar pois estar ocorrendo algum problema....')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF


  ActiveX:= __GetEasyTEF() // Inicia a conexao com a DLL
  
  IBR_OK( IBR_COMANDO( 'ProgramaFormaPagamento',{ "Cartao" } , 40 )) // Adiciona forma de pagamento
  IBR_ABRE_CUPOM()                                                   // Abre cupom ECF
  NumeroCupom := IBR_NUM_CUPOM()                                     // Retorna ao numero do cupom ECF

  // Adiciona item a ECF       
  IBR_ITEM(1 ,'Leite'           , 'II', 1, "1,50", 0, 'UN')   	 
  
  // Manda subtotalizar e retorna ao valor subtotal
  nTotalAPagar := IBR_SUBTOTAL()
  
  // Tratar cupom fiscal   
  ActiveX:EasyTEF:tratarCupomFiscal( tmeSubTotalizarCupom, { "" } )
  
  // Numero de cartões no pagamento
  ActiveX:EasyTEF:numeroDeCartoes         :=  2    
  ActiveX:EasyTEF:imprimirComprovante     := False

  For i = 1 to ActiveX:EasyTEF:NumeroDeCartoes
      ActiveX:EasyTEF:pagarNoCartao( nTotalApagar , 0, NumeroCupom, i==1 , i==ActiveX:EasyTEF:NumeroDeCartoes )
      if .not. ActiveX:EasyTEF:transacaoAprovada()
         atencao("Transação não foi aprovada !")

         // Aborte o pagamento aki...
      else   
         atencao("Transação Aprovada !!!!")
      endif
  Next i

  ActiveX:EasyTEF:tratarCupomFiscal( tmeEfetuarFormaPagamento, { "02", nTotalApagar } )

  // Mensagem rodape do cumpom fiscal.  
  cMsg :=  "Obrigado Volte Sempre !!!" 
  ActiveX:EasyTEF:tratarCupomFiscal( tmeTerminarFechamentoCupom, { cMsg } )

  ActiveX:EasyTEF:imprimirCupomECF(ActiveX:EasyTEF:imagemCupomTEF, .t., .t.)

  // Termina conexão com o ACBRMonitor 
  IBR_END()   
 
return                                          