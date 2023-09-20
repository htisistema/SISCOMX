/*-----------------------------------------------------------------------------
	    Pseudo-Funcoes usadas para a Impressora com Firmware Mecaf
-----------------------------------------------------------------------------*/

//
//----------------------------------------------------- Modo Cheque/Validacao
//

#translate ECFModoCheqValid( <cTipo>, <cLoad> ) ;
	   => IFcmd( "01" + <cTipo> + <cLoad> )

#translate ECFCheque( <l1>, <c1>, <l2>, <c2>, <l3>, <c3>, <l4>, <l5>, <c5>, ;
		      <l6>, <l7>, <c8>, <nValor>, <cFavorecido>, <cCidade>, ;
		      <nSetDigAno>, <dData>, <cComent1>, <cComent2> ) ;
	   => IFcmd( "02" + ;
		     CHR(<l1>) + CHR(<c1>) + CHR(<l2>) + CHR(<c2>) + ;
		     CHR(<l3>) + CHR(<c3>) + CHR(<l4>) + CHR(<l5>) + ;
		     CHR(<c5>) + CHR(<l6>) + CHR(<l7>) + CHR(<c8>) + ;
		     STRTRAN( STRZERO( <nValor>, 15, 2 ), ".", "" ) + ;
		     PADR( <cFavorecido>, 80 ) + PADR( <cCidade>, 20 ) + ;
		     STRZERO( <nSetDigAno>, 1 ) + ;
		     STRZERO( DAY( <dData> ), 2 ) + ;
		     STRZERO( MONTH( <dData> ), 2 ) + ;
		     RIGHT( STRZERO( YEAR( <dData> ) ), 2 ) + ;
		     PADR( <cComent1>, 80 ) + PADR( <cComent2>, 80 ) )

#translate ECFValidacao( <cLinha1>, <cLinha2> ) ;
	   => IFcmd( "03" + PADR( <cLinha1>, 5 ) + ;
		     IIF( <cLinha2> == "", "", PADR( <cLinha2>, 40 ) ) )

#translate ECFCancModoCheqValid () ;
	   => IFcmd( "04" )

//
//--------------------------------------------------------- Operacoes Fiscais
//

#translate ECFTotalizaParcial () ;
	   => IFcmd( "05" )

#translate ECFTotaliza ( <cOper>, <cTipoOper>, <nValorOper>, <cLegendaOper> ) ;
	   => IFcmd( "06" + <cOper> + <cTipoOper> + ;
		     STRTRAN( STRZERO( <nValorOper>, IIF( <cTipoOper> == "&", 16, 5 ), 2 ) , ".", "" ) + ;
		     IIF( <cLegendaOper> == "", "", "#" + PADR( <cLegendaOper>, 14 ) ) )

#translate ECFPagto( <nRegNFiscal>, <nValorPagto>, <cParm> ) ;
	   => IFcmd ( "07" + STRZERO( <nRegNFiscal>, 2 ) + ;
		     STRTRAN( STRZERO( <nValorPagto>, 16, 2 ) , ".", "" ) + ;
		     <cParm> )

#translate ECFFecharCF( <cMensagem> ) ;
	   => IFcmd( "08S" + STRZERO( LEN( <cMensagem> ), 3 ) + <cMensagem> )

#translate ECFDescontoItem ( <cTipoDesconto>, <nDesconto>, <cLegendaDesc> ) ;
	   => IFcmd ( "09" + <cTipoDesconto> + ;
		     STRTRAN( STRZERO( <nDesconto>, IIF( <cTipoDesconto> == "&", 16, 5 ), 2 ), ".", "" ) + ;
		     IIF( <cLegendaDesc> == "", "", "#" + PADR( <cLegendaDesc>, 14 ) ) )

#translate ECFAbrirCF () ;
	   => IFcmd( "10" )

#translate ECFVendaItem( <nQtd>,<nPreco>,<cTrib>,<cTipoDesconto>,<nDesconto>,<cUnidade>,<cCodProduto>,<cTipoDescricao>,<cDescricao>,<cLegendaDesc>,<lEm1Linha> ) ;
	   => IFcmd( "11" + IIF( <nQtd> == 1 .AND. <lEm1Linha>, "-", "" ) + ;
		     STRTRAN( STRZERO( <nQtd>  , 7, 3 ), ".", "" ) + ;
		     STRTRAN( STRZERO( <nPreco>,12, 2 ), ".", "" ) + ;
		     <cTrib> + <cTipoDesconto> + ;
		     STRTRAN( STRZERO( <nDesconto>, IIF( <cTipoDesconto> == "&", 16, 5 ), 2 ), ".", "" ) + ;
		     <cUnidade> + PADR( <cCodProduto>, 13 ) + <cTipoDescricao>	+ ;
		     PADR( <cDescricao>, ;
			   IIF( <cTipoDescricao> == "0", 20  , IIF( <cTipoDescricao> == "1", 38  , ;
			   IIF( <cTipoDescricao> == "2", 38*2, IIF( <cTipoDescricao> == "3", 38*3, ;
			   IIF( <cTipoDescricao> == "4", 38*4, 38*5 ) ) ) ) ) ) + ;
		     IIF( <cLegendaDesc> == "", "", "#" + PADR( <cLegendaDesc>, 14 ) ) )

#translate ECFCancItem ( <nItem> ) ;
	   => IFcmd( "12" + STRZERO( <nItem>, 3 ) )

#translate ECFCancCupom () ;
	   => IFcmd( "14" )

#translate ECFLeituraX ( <lRelGer> ) ;
	   => IFcmd( "15" + IIF( <lRelGer>, "1", "0" ) )

#translate ECFReducaoZ ( <lRelGer> ) ;
	   => IFcmd( "16" + IIF( <lRelGer>, "1", "0" ) )

#translate ECFImprimeMemoDatas ( <dDatai>, <dDataf> ) ;
	   => IFcmd( "17" + ;
		     STRZERO( DAY( <dDatai> ), 2 ) + STRZERO( MONTH( <dDatai> ), 2 ) + RIGHT( STRZERO( YEAR( <dDatai> ) ), 2 ) + ;
		     STRZERO( DAY( <dDataf> ), 2 ) + STRZERO( MONTH( <dDataf> ), 2 ) + RIGHT( STRZERO( YEAR( <dDataf> ) ), 2 ) )

#translate ECFImprimeMemoReducoes ( <nReducaoi>, <nReducaof> ) ;
	   => IFcmd( "18" + STRZERO( <nReducaoi>, 4 ) + STRZERO( <nReducaof>, 4 ) )

//
//----------------------------------------------------- Operacoes Nao-Fiscais
//

#translate ECFAbrirCNFV () ;
	   => IFcmd( "20" )

#translate ECFFecharCNF () ;
	   => IFcmd( "21" )

#translate ECFAbrirCNF () ;
	   => IFcmd( "22" )

#translate ECFOperaRegNaoVinculado ( <nReg>, <nValor>, <cTipoOper>, <cTipoAcrDesc>, <nValorAcrDesc>, <cLegAcrDesc> ) ;
	   => IFcmd( "23" + STRZERO( <nReg>, 2 ) + ;
		     STRTRAN( STRZERO( <nValor>, 16, 2 ), ".", "" ) + ;
		     <cTipoOper> + <cTipoAcrDesc> + ;
		     STRTRAN( STRZERO( <nValorAcrDesc>, IIF( <cTipoAcrDesc> == "&", 16, 5 ), 2 ), ".", "" ) + ;
		     IIF( <cLegAcrDesc> == "", "", "#" + PADR( <cLegAcrDesc>, 14 ) ) )

#translate ECFCancCNF () ;
	   => IFcmd( "25" )

#translate ECFLinhaNF ( <cTipo>, <cLinha> ) ;
	   => IFcmd( "26" + <cTipo> + PADR( <cLinha>, IIF( <cTipo> == "0", 40, 20 ) ) )

#translate ECFProgLegenda ( <nReg>, <cLegenda> ) ;
	   => IFcmd( "29" + STRZERO( <nReg>, 2 ) + PADR( <cLegenda>, 16 ) )

//
//------------------------------------------------------------------ Diversos
//

#translate ECFAbrirGaveta( <nTipo>, <TON>, <TOFF> ) ;
	   => IFcmd( "24" + STRZERO( <nTipo>, 1 ) + CHR( <TON> ) + CHR( <TOFF> ) )

#translate ECFHorarioVerao ( <lEntra> ) ;
	   => IFcmd( "27" + IIF( <lEntra>, "+", "-" ) )

#translate ECFImprimeTotalizadores( <nReg> ) ;
	   => IFcmd( "28" + STRZERO( <nReg>, 2 ) )

#translate ECFTabelaAliquotas () ;
	   => IFcmd( "30" )

#translate ECFTotalizadoresContadores () ;
	   => IFcmd( "31" )

#translate ECFStatus () ;
	   => IFcmd( "32" )

#translate ECFDataHora () ;
	   => IFcmd( "33" )

#translate ECFParametros ( <Par> ) ;
	   => IFcmd( "34" + IIF( <Par> == "", "", "M"+STRZERO( VAL(<Par>), 2 ) ) )

#translate ECFLinhaAdicional ( <cLegenda> ) ;
	   => IFcmd( "35" + PADR( <cLegenda>, 40 ) )

#translate ECFLeMemoDatas ( <dDatai>, <dDataf> ) ;
	   => IFcmd( "36" + ;
		     STRZERO( DAY( <dDatai> ), 2 ) + STRZERO( MONTH( <dDatai> ), 2 ) + RIGHT( STRZERO( YEAR( <dDatai> ) ), 2 ) + ;
		     STRZERO( DAY( <dDataf> ), 2 ) + STRZERO( MONTH( <dDataf> ), 2 ) + RIGHT( STRZERO( YEAR( <dDataf> ) ), 2 ) )

#translate ECFLeMemoReducoes ( <nReducaoi>, <nReducaof> ) ;
	   => IFcmd( "37" + STRZERO( <nReducaoi>, 4 ) + STRZERO( <nReducaof>, 4 ) )

#translate ECFAjustaHora ( <cDir>, <nMin>, <nSeg> ) ;
	   => IFcmd( "38" + <cDir> + STRZERO( <nMin>, 2 ) + STRZERO( <nSeg>, 2 ) )

#translate ECFIDECF () ;
	   => IFcmd( "39" )

//
//------------------------------------------------------- Intervencao Tecnica
//

#translate ECFProgDataHora( <cHora>, <dData> ) ;
	   => IFcmd( "40" + STRTRAN( <cHora>, ":", "" ) + ;
		     STRZERO( DAY  ( <dData> ), 2 )    + ;
		     STRZERO( MONTH( <dData> ), 2 )    + ;
		     RIGHT( STRZERO( YEAR ( <dData> ) ), 2 ) )

#translate ECFProgCGCIE( <cCGC>, <cIE>, <cIM> ) ;
	   => IFcmd( "41" + PADR( <cCGC>, 16 ) + PADR( <cIE>, 14 ) + ;
		     IIF( ALLTRIM(<cIM>) == "", "", PADR( <cIM>, 15 ) ) )

#translate ECFZeraParciais() ;
	   => IFcmd( "42" )

#translate ECFRecompoeNOVRAM () ;
	   => IFcmd( "43" )

#translate ECFProgNSerie( <nSerie>, <cModelo> ) ;
	   => IFcmd( "45" + STRZERO( <nSerie>, 10 ) + PADR( <cModelo>, 25 ) )

#translate ECFProgAliquota( <nTrib>, <nValor> ) ;
	   => IFcmd( "46" + STRZERO( <nTrib>, 2 ) + ;
		     STRTRAN( STRZERO( <nValor>, 5, 2 ), ".", "" ) )

#translate ECFProgSimbolo( <nPar1>, <nPar2>, <nPar3>, <nPar4>, <nPar5>, <nPar6>, <nPar7>, <nPar8>, <nPar9>, <nPar10>, <nHabilita> ) ;
	   => IFcmd( "47" + ;
		     CHR( <nPar1>  ) + ;
		     CHR( <nPar2>  ) + ;
		     CHR( <nPar3>  ) + ;
		     CHR( <nPar4>  ) + ;
		     CHR( <nPar5>  ) + ;
		     CHR( <nPar6>  ) + ;
		     CHR( <nPar7>  ) + ;
		     CHR( <nPar8>  ) + ;
		     CHR( <nPar9>  ) + ;
		     CHR( <nPar10> ) + ;
		     IIF( <nHabilita> == 1, CHR(1), CHR(0) ) )

#translate ECFProgEstab( <cRazao>, <nSequenc> ) ;
	   => IFcmd( "48" + PADR( <cRazao>, 200 ) + STRZERO( <nSequenc>, 6 ) )

/*
#translate ECFProgMoeda( <cSingular>, <cPlural> ) ;
	   => IFcmd( "49" + PADR( <cSingular>, 30 ) + PADR( <cPlural>, 30 ) )
*/
#translate ECFProgMoeda( <cSingular>, <cPlural> ) ;
	   => IFcmd( "49" + "S" + ;
		     STRZERO( LEN( ALLTRIM( <cSingular> ) ), 3 ) + ;
		     ALLTRIM( <cSingular> ) + "S" + ;
		     STRZERO( LEN( ALLTRIM( <cPlural> ) ), 3 ) + ;
		     ALLTRIM( <cPlural> ) )

#translate ECFProgArredondamento( <nArredonda> ) ;
	   => IFcmd( "50" + IIF( <nArredonda> == 1, "1", "0" ) )

//
//---------------------------------------------------------- Testes de Status
//

#translate ECFReducaoZPendente () ;
	   => SUBSTR( Hex2Bin( SUBSTR( IFcmd("32"), 6, 2 ) ), 3, 1 ) == "1"

#translate ECFCupomAberto () ;
	   => SUBSTR( Hex2Bin( SUBSTR( IFcmd("32"), 6, 2 ) ), 8, 1 ) == "1"

//-- Fim

