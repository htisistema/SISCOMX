FUNCTION testecmd
*****************
Set Status Off
Set Score Off
Set Talk Off
Set Wrap On

TelaMenuPrincipal = savescreen( 00, 00, 24, 80 )

Clear
exe := .T.
Do While exe
   Set Color To
   Clear
   SetColor("W+/B")
   @ 00,00 Clear To 00,79
   @ 00,01 Say "HTI Sistemas | Teste de Comandos com o BEMAFI.EXE p/ as Impressoras Fiscais"
   SetColor( "N/BG,W+/R,,,,BG/N" )
   @ 02,00 Clear To 12,40
   @ 02,00 To 12,40 Double
   @ 03,01 Prompt " Comandos de INICIALIZA€ÇO             "
   @ 04,01 Prompt " Comandos do CUPOM FISCAL              "
   @ 05,01 Prompt " Comandos de RELATàRIOS FISCAL         "
   @ 06,01 Prompt " Comandos de OPERA€åES NÇO FISCAIS     "
   @ 07,01 Prompt " Comandos de INFORMA€åES DA IMPRESSORA "
   @ 08,01 Prompt " Comando  de AUTENTICA€ÇO              "
   @ 09,01 Prompt " Comandos da GAVETA DE DINHEIRO        "
   @ 10,01 Prompt " Comandos de IMPRESSŽO DE CHEQUES      "
   @ 11,01 Prompt " S A I R                               "
   Menu To Opcao
   Do Case

      // Menu Inicializa‡Æo

      Case Opcao = 1
        Do While .T.
           If LastKey() = 27
              Exit
           Endif
           
           SetColor( "N/BG,W+/R,,,,BG/N" )
           @ 03,19 Clear To 18,65
           @ 03,19 To 18,65 Double
           @ 04,20 Prompt " Alterar o S¡mbolo da Moeda                  "
           @ 05,20 Prompt " Adi‡Æo de Al¡quota Tribut ria               "
           @ 06,20 Prompt " Programar Horario de VerÆo                  "
           @ 07,20 Prompt " Programar Totalizador Nao Sujeito ao ICMS   "
           @ 08,20 Prompt " Programar Truncamento/Arredondamento        "
           @ 09,20 Prompt " Programar Espa‡o entre Linhas (MP-40 FI II) "
           @ 10,20 Prompt " Programar Linhas entre Cupons               "
           @ 11,20 Prompt " Programar Departamento                      "
           @ 12,20 Prompt " Resetar em Caso de Erro                     "
           @ 13,20 Prompt " Nomeia Relatorio Gerencial MFD              "
           @ 14,20 Prompt " Ativa/desativa Venda Item em Uma Linha      "
           @ 15,20 Prompt " Ativa/desativa Alinhamto. da Descricao Item "
           @ 16,20 Prompt " Ativa/desativa Corte do Proximo Cupom       "
           @ 17,20 Prompt " Ativa/desativa Travamento do ON/OFF da ECF  "
           Menu To Opcao_Ini
           TelaMenuInicializacao = SaveScreen( 00, 00, 24, 80 )
           
           Do Case

              // Altera S¡mbolo da Moeda

              Case Opcao_Ini = 1
                   Moeda := Space( 2 )
                   Sombra_Transparente( 04 , 27 , 06 , 49 )
                   SetColor( "W+/GR" )
                   @ 04,27 Clear To 06,49
                   @ 04,27 To 06,49
                   @ 05,28 Say "Informe o S¡mbolo:" Get Moeda Pict "@!"
                   Read
                   if ( alltrim( Moeda ) == "" )
                      RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )
                   
                   Else
                        GeraComando( "01|" + Moeda + "|" )
                        RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )
                   EndIf


              // Adi‡Æo de Al¡quotas

              Case Opcao_Ini = 2         
                   Aliquota := 0
                   ISS := " "
                   Set Color To
                   @ 08,30 Clear To 09,61
                   SetColor( "W+/GR" )
                   @ 05,27 Clear To 08,60
                   @ 05,27 To 08,60
                   @ 06,53 Say "%"
                   @ 06,28 Say "Valor da Al¡quota:" Get Aliquota Pict "99,99"
                   Read
                   @ 07,28 Say "Deseja Vincular ao ISS? (S/N):" Get ISS Pict "@!"
                   Read
                   if ( alltrim( Aliquota ) = "" )
                      RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )
                   EndIf

                   If ISS = "S"
                         GeraComando( "07|" + StrZero(Aliquota,4,0) + "|1|" )
                         RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )
                   Else
                         GeraComando( "07|" + StrZero(Aliquota,4,0) + "|0|" )
                         RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )
                   EndIf

              // Hor rio de VerÆo

              Case Opcao_Ini = 3         
                   GeraComando( "18|" )
                   RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )

              // Totalizador NÆo Sujeito ao ICMS

              Case Opcao_Ini = 4         
                   Indice := Space( 2 )
                   Nome_Tot := Space( 19 )
                   Set Color To
                   @ 08,29 Clear To 11,71
                   SetColor( "W+/GR" )
                   @ 07,27 Clear To 10,70
                   @ 07,27 To 10,70
                   @ 08,28 Say "Öndice da Totalizador:" Get Indice Pict "@"
                   read
                   @ 09,28 Say "Nome do Totalizador..:" Get Nome_Tot Pict "@"
                   Read
                   if ( alltrim( Indice ) == "" )
                      RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )
                   EndIf
                   GeraComando( "40|" + Indice + "|" + Nome_Tot + "|" )
                   RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )

              // Truncamento/Arredondamento

              Case Opcao_Ini = 5         
                   Trunc_Arred := " "
                   Set Color To
                   @ 09,29 Clear To 11,60
                   SetColor( "W+/GR" )
                   @ 08,27 Clear To 10,59
                   @ 08,27 To 10,59
                   @ 09,28 Say "Truncar ou Arredondar? (T/A):" Get Trunc_Arred Pict "@!"
                   Read
                   if ( alltrim( Trunc_Arred ) == "" )
                      RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )
                   EndIf
                   If Trunc_Arred = "A"
                         GeraComando( "39|1|" )
                         RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )
                      Else
                         GeraComando( "39|0|" )
                         RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )
                   EndIf

              // Espa‡o entre Linhas

              Case Opcao_Ini = 6         
                   Esp_Linhas := 0
                   Set Color To
                   @ 10,29 Clear To 12,53
                   SetColor( "W+/GR" )
                   @ 09,27 Clear To 11,52
                   @ 09,27 To 11,52
                   @ 10,28 Say "Quantidade de Linhas:" Get Esp_Linhas Pict "99"
                   Read
                   if ( alltrim( Esp_Linhas ) == "" )
                      RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )
                   EndIf
                   GeraComando( "60|" + StrZero( Esp_Linhas,2,0 ) + "|" )
                   RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )

              // Espa‡o entre Cupons

              Case Opcao_Ini = 7         
                   Linha_Cupom := 0
                   Set Color To
                   @ 11,29 Clear To 13,53
                   SetColor( "W+/GR" )
                   @ 10,27 Clear To 12,52
                   @ 10,27 To 12,52
                   @ 11,28 Say "Quantidade de Linhas:" Get Linha_Cupom Pict "99"
                   Read
                   if ( alltrim( Linha_Cupom ) == "" )
                      RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )
                   EndIf
                   GeraComando( "61|" + StrZero( Linha_Cupom,2,0 ) + "|" )
						 RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )                   

              // Departamentos

              Case Opcao_Ini = 8         
                   Indice_Depart := 0
                   Nome_Depart   := Space( 10 )
                   Set Color To
                   @ 12,28 Clear To 15,64
                   SetColor( "W+/GR" )
                   @ 11,27 Clear To 14,63
                   @ 11,27 To 14,63
                   @ 12,28 Say "Öndice do Departamento:" Get Indice_Depart Pict "99"
                   read
                   @ 13,28 Say "Nome do Departamento..:" Get Nome_Depart Pict "@"
                   Read
                   if ( alltrim( Indice_Depart ) == "" )
                      RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )
                   EndIf
                   GeraComando( "65|" + StrZero( Indice_Depart, 2, 0 ) + "|" + Nome_Depart + "|" )
                   RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )

              // Reset em Caso de ERRO

              Case Opcao_Ini = 9
                   GeraComando( "70|" )
                   RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )

              // Nomeia Relatório Gerencial MFD

              Case Opcao_Ini = 10
                   GeraComando( "82|02|Troca de Operador|" )
                   GeraComando( "82|03|Troca de Turno   |" )
                   GeraComando( "82|04|Fecha Caixa      |" )
                   GeraComando( "82|05|Abre Caixa       |" )
                   RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )
                   
              // Ativa/desativa Venda Item em Uma Linha

              Case Opcao_Ini = 11
              		 GeraComando( "62|60|1|" )
              		 RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )
              		 
              // Ativa/desativa Alinhamto. da Descricao Item		 

              Case Opcao_Ini = 12
              		 GeraComando( "62|59|0|" )
              		 RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )
              		 
              // Ativa/desativa Corte do Proximo Cupom		 

              Case Opcao_Ini = 13
              		 GeraComando( "62|58|" )
              		 RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )
              		 
              // Ativa/desativa Travamento do ON/OFF da ECF		 

              Case Opcao_Ini = 14
              		 GeraComando( "62|57|1|" )
              		 RestScreen( 00, 00, 24, 80, TelaMenuInicializacao )
               
              OtherWise
                  RestScreen( 00, 00, 24, 80, TelaMenuPrincipal )
           EndCase
        EndDo
        RestScreen( 00, 00, 24, 80, TelaMenuPrincipal )
     
     // Menu dos Comandos do Cupom Fiscal

      Case Opcao = 2
        Do While .T.
           If LastKey() = 27
              Exit
           Endif
           
           SetColor( "N/BG,W+/R,,,,BG/N" )
           @ 04,19 Clear To 24,64
           @ 04,19 To 24,64 Double
           @ 05,20 Prompt " Abertura do Cupom Fiscal                   "
           @ 06,20 Prompt " Abertura do Cupom Fiscal MFD               "
           @ 07,20 Prompt " Venda de Item c/ duas Casas Decimais       "
           @ 08,20 Prompt " Venda de Item c/ trˆs Casas Decimais       "
           @ 09,20 Prompt " Acrescimo/Desconto em Item Posterior MFD   "
           @ 10,20 Prompt " Cancelamento do Item Anterior              "
           @ 11,20 Prompt " Cancelamento de um Item Qualquer           "
           @ 12,20 Prompt " Venda de Item c/ Depart. e Unid. de Medida "
           @ 13,20 Prompt " Inicia Fechamento do Cupom Fiscal          "
           @ 14,20 Prompt " Programa/Verifica Forma de Pagamento       "
           @ 15,20 Prompt " Efetua Forma de Pagamento                  "
           @ 16,20 Prompt " Programa a Descri‡Æo das Formas de Pgto.   "
           @ 17,20 Prompt " Termina o Fechamento do Cupom Fiscal       "
           @ 18,20 Prompt " Cancelamento do Cupom Fiscal               "
           @ 19,20 Prompt " Programa‡Æo da Unidade de Medida           "
           @ 20,20 Prompt " Aumentando a Descri‡Æo do Item             "
           @ 21,20 Prompt " Efetua a Forma de Pgto com Parcelamento    "
           @ 22,20 Prompt " Emite Cupom Adicional                      "
           @ 23,20 Prompt " Outros Comandos do Cupons MFD              "
           Menu To Opcao_Cupom
			  TelaMenuCupomFiscal = SaveScreen( 00, 00, 24, 80 )           
			  
           Do Case

              // Abertura do Cupom Fiscal

              Case Opcao_Cupom = 1        
                   CGC_CPF := Space( 29 )
                   Set Color To
                   @ 06,27 Clear To 08,79
                   SetColor( "W+/GR" )
                   @ 05,24 Clear To 07,78
                   @ 05,24 To 07,78
                   @ 06,25 Say "CGC/CPF do Consumidor:" Get CGC_CPF Pict "@!"
                   Read
                   If ( alltrim( CGC_CPF ) = "" )
                      restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )
                   EndIf
                   GeraComando( "00|" + CGC_CPF + "|" )
                   restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )

  				  // Abertura do Cupom Fiscal MFD

              Case Opcao_Cupom = 2
              
                   CGC_CPF   := "1234567890123456789"
                   cNome     := "Fulano de Tal"
                   cEndereco := "Rua Sem Fim, 1000"
                   GeraComando( "00|" + CGC_CPF + "|" + cNome + "|" + cEndereco + "|" )
                   restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )

              // Venda de Item c/ 2 Casas Decimais

              Case Opcao_Cupom = 3        

                   Codigo     := "1234567890123"
                   Descricao  := "Venda com 2 Casas Decimais 12345678901234567890"
                   Aliquota   := "FF"
                   Qtde_Int   := 1
                   Qtde_Frac  := 1
                   Valor      := 1
                   Desc_Perc  := 0
                   Desc_Valor := 0

                   Set Color To
                   @ 06,25 Clear To 16,79
                   SetColor( "W+/GR" )
                   @ 05,24 Clear To 15,78
                   @ 05,24 To 15,78
                   @ 07,25 Say "C¢digo...:" Get Codigo Pict "@"
                   @ 08,25 Say "Descri‡Æo:" Get Descricao Pict "@"
                   @ 09,25 Say "Al¡quota.:" Get Aliquota Pict "@!"
                   Read
                   Resp := "I"
                   @ 10,25 Say "Qtde. Inteira ou Fracion ria? (I/F):" Get Resp Pict "@!"
                   Read
                   If ( lastkey() = 27 )
                   	 exit
                   EndIf
                   
                   // Quantidade Interia e Desconto Percentual

                   If Resp = "I"
                      Resp := " "
                      @ 11,25 Say "Qtde. Inteira:" Get Qtde_Int Pict "9999"
                      @ 12,25 Say "Valor:" Get Valor Pict "@e 999,999.99"
                      Read
                      Opc := "P"
                      @ 13,25 Say "Desconto Percentual ou por Valor? (P/V):" Get Opc Pict "@!" valid(opc$"PV")
                      Read
                      If Opc = "P"
                             Opc := " "
                             @ 14,25 Say "Desc. Percentual:" Get Desc_Perc Pict "@e 99.99"
                             Read
                             Valor     := Valor * 100
                             Valor     := StrZero( Valor, 8, 0 )
                             Desc_Perc := Desc_Perc * 100
                             Desc_Perc := StrZero( Desc_Perc, 4, 0 )
                             GeraComando( "09|" + Codigo + "|" + Descricao + "|" + Aliquota + "|" + StrZero( Qtde_Int, 4, 0 ) + "|" + Valor + "|" + Desc_Perc + "|" )
                             restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )
                         else
                             @ 14,25 Say "Desconto Valor..:" Get Desc_Valor Pict "@e 999,999.99"
                             Read
                             Valor      := Valor * 100
                             Valor      := StrZero( Valor, 8, 0 )
                             Desc_Valor := Desc_Valor * 100
                             Desc_Valor := StrZero( Desc_Valor, 8, 0 )
                             GeraComando( "09|" + Codigo + "|" + Descricao + "|" + Aliquota + "|" + StrZero( Qtde_Int, 4, 0 ) + "|" + Valor + "|" + Desc_Valor + "|" )
                             restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )
                      EndIf
                   EndIf

                   // Quantidade Fracionaria e Desconto Percentual

                   If Resp = "F"
                          Resp := " "
                          @ 11,25 Say "Qtde. Frac...:" Get Qtde_Frac Pict "@e 9,999.999"
                          @ 12,25 Say "Valor:" Get Valor Pict "@e 999,999.99"
                          Read
                          Opc := "P"
                          @ 13,25 Say "Desconto Percentual ou por Valor? (P/V):" Get Opc Pict "@!"
                          Read
                          If Opc = "P"
        descricao := space( 50 )
                                 @ 14,25 Say "Desc. Percentual:" Get Desc_Perc Pict "@e 99.99"
        @ 15,25 say "Descri‡„o do Item:" get descricao pict "@"
                                 Read
                                 Qtde_Frac := Qtde_Frac * 1000
                                 Qtde_Frac := StrZero( Qtde_Frac, 7, 0 )
                                 Valor     := Valor * 100
                                 Valor     := StrZero( Valor, 8, 0 )
                                 Desc_Perc := Desc_Perc * 100
                                 Desc_Perc := StrZero( Desc_Perc, 4, 0 )
*       read
        comando := chr( 27 ) + chr( 251 ) + "62|52|" + alltrim( descricao ) + "|" + chr( 27 )
        *
        gravaarq( Comando )
        !BEMAFI.EXE
        MostraStatus()
                                 GeraComando( "09|" + Codigo + "|" + Descricao + "|" + Aliquota + "|" + Qtde_Frac + "|" + Valor + "|" + Desc_Perc + "|" )
                                 restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )
                              else
                                  @ 14,25 Say "Desconto Valor..:" Get Desc_Valor Pict "@e 999,999.99"
                                  Read
                                  Qtde_Frac  := Qtde_Frac * 1000
                                  Qtde_Frac  := StrZero( Qtde_Frac, 7, 0 )
                                  Valor      := Valor * 100
                                  Valor      := StrZero( Valor, 8, 0 )
                                  Desc_Valor := Desc_Valor * 100
                                  Desc_Valor := StrZero( Desc_Valor, 8, 0 )
        descricao := space( 50 )
        @ 20,05 say "Descri‡„o do Item:" get descricao pict "@"
        read
        comando := chr( 27 ) + chr( 251 ) + "62|52|" + alltrim( descricao ) + "|" + chr( 27 )
        *
        gravaarq( Comando )
        !BEMAFI.EXE
        MostraStatus()
                                  GeraComando( "09|" + Codigo + "|" + Descricao + "|" + Aliquota + "|" + Qtde_Frac + "|" + Valor + "|" + Desc_Valor + "|" )
                                  restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )
                          EndIf
                   EndIf

              // Venda de Item c/ 3 Casas Decimais

              Case Opcao_Cupom = 4

                   Qopc3()
                   restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )

              // Acrescimo/Desconto em Item Posterior MFD

              Case Opcao_Cupom = 5
                  
                   GeraComando( "93|A|001|1000|" )
                   restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )

              // Cancelamento do Item Anterior

              Case Opcao_Cupom = 6

                   GeraComando( "13|" )
                   restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )

              // Cancelamento de um Item qualquer

              Case Opcao_Cupom = 7

                   Set Color To
                   @ 11,26 Clear To 13,54
                   SetColor( "W+/GR" )
                   @ 10,25 Clear To 12,53
                   @ 10,25 To 12,53
                   Item_Cancel := 0
                   @ 11,26 Say "Item a ser cancelado:" Get Item_Cancel pict "9999"
                   Read
                   If ( alltrim( Item_Cancel ) = "" )
                   	 restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )
                   EndIf
                   Item_Cancel := StrZero( Item_Cancel, 4, 0 )
                   GeraComando( "31|" + Item_Cancel + "|" )
                   restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )

              // Venda de Item com Departamento e Unidade de Medida.

              Case Opcao_Cupom = 8

                   aliquota   := "FF"
                   valor_unit := 9
                   qtd_frac   := 1
                   desc_valor := 0
                   acre_valor := 0
                   depart     := "01"
                   unidade    := "KG"
                   codigo     := "1234567890123456"
                   descricao  := "Venda de Produto com Departamento"

                   set color to
                   @ 12,26 clear to 22,80
                   setcolor( "W+/GR" )
                   @ 11,25 clear to 21,79
                   @ 11,25 to 21,79
                   @ 12,26 say "Öndice da Al¡quota:" get aliquota pict "@!"
                   @ 13,26 say "Valor Unit rio....:" get valor_unit pict "@e 999,999.999"
                   @ 14,26 say "Quantidade........:" get qtd_frac pict "@e 9,999.999"
                   @ 15,26 say "Desconto - Valor..:" get desc_valor pict "@e 99,999,999.99"
                   @ 16,26 say "Acr‚scimo - Valor.:" get acre_valor pict "@e 99,999,999.99"
                   @ 17,26 say "Departamento......:" get depart pict "@"
                   @ 18,26 say "Unidade de Medida.:" get unidade pict "@"
                   @ 19,26 say "C¢digo............:" get codigo pict "@"
                   @ 20,26 say "Descri‡Æo.........:" get descricao pict "@"
                   read
                   If ( LastKey() == 27 )
                      Exit
                   EndIf

                   valor_unit = valor_unit * 1000
                   valor_unit = strzero( valor_unit, 9, 0 )

                   qtd_frac = qtd_frac * 1000
                   qtd_frac = strzero( qtd_frac, 7, 0 )

                   desc_valor = desc_valor * 100
                   desc_valor = strzero( desc_valor, 10, 0 )

                   acre_valor = acre_valor * 100
                   acre_valor = strzero( acre_valor, 10, 0 )

                   GeraComando( "63|" + aliquota + "|";
                           + valor_unit + "|" + qtd_frac + "|" + desc_valor + "|";
                           + acre_valor + "|" +  depart + "|00000000000000000000|";
                           + unidade + "|" + codigo + "|" + descricao + "|" )
						 restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )                           

              // Inicia Fechamento do Cupom Fiscal

              Case Opcao_Cupom = 9

                   set color to
                   @ 13,26 clear to 17,60
                   setcolor( "W+/GR" )
                   @ 12,25 clear to 16,59
                   @ 12,25 to 16,59
                   ad := pv := " "
                   @ 13,26 say "<A>cr‚scimo ou <D>esconto ?:" get ad pict "@!"
                   @ 14,26 say "<P>ercentual ou por <V>alor ?:" get pv pict "@!"
                   read
                   If ( LastKey() == 27 )
                      Exit
                   EndIf
                   if pv = "P"
                         v_perc := 0
                         @ 15,26 say "Percentual:" get v_perc pict "@e 99.99"
                         read
                         If ( LastKey() == 27 )
                            Exit
                         EndIf
                         v_perc := v_perc * 100
                         v_perc := strzero( v_perc, 4, 0 )
                         GeraComando( "32|" + ad + "|" + v_perc + "|" )
                         restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )
                      else
                         valor := 0
                         @ 15,26 say "Valor:" get valor pict "@e 999,999,999,999.99"
                         read
                         If ( LastKey() == 27 )
                            Exit
                         EndIf
                         valor := valor * 100
                         valor := strzero( valor, 14, 0 )
                         GeraComando( "32|" + lower( ad ) + "|" + valor + "|" )
                         restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )
                   endif

              // Programa / Verifica Forma de Pagamento

              Case Opcao_Cupom = 10
                  set color to
                  @ 14,26 clear to 17,67
                  setcolor( "W+/GR" )
                  @ 13,25 clear to 16,64
                  @ 13,25 to 16,64
                  forma := space( 16 )
                  @ 14,26 say "Forma de Pagamento.:" get forma pict "@"
                  read
                  If ( LastKey() == 27 )
                     Exit
                  EndIf
                  *forma := upper( substr( forma, 1, 1 ) ) + lower( substr( forma, 2, 15 ) )
                  GeraComando( "71|" + forma + "|" )
                  restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )
              
              // Efetua Forma de Pagamento

              Case Opcao_Cupom = 11

                  set color to
                  @ 15,26 clear to 21,66
                  setcolor( "W+/GR" )
                  @ 14,25 clear to 20,65
                  @ 14,25 to 20,65
                  i_forma    := 0
                  valor_pago := 0
                  @ 15,26 say "Indice da Forma....:" get i_forma pict "99"
                  @ 16,26 say "Valor Pago.........:" get valor_pago pict "@e 999,999,999,999.99"
                  read
                  resp := " "
                  @ 17,26 say "Usar parƒmetro opcional? (S/N):" get resp pict "@!" valid( resp$"SN")
                  read
                  If ( LastKey() == 27 )
                      Exit
                  EndIf
                  
                  if resp = "S"
                        par1 := par2 := space( 38 )
                        @ 18,26 get par1 pict "@"
                        @ 19,26 get par2 pict "@"
                        read
                        If ( LastKey() == 27 )
                           Exit
                        EndIf
                        i_forma    := strzero( i_forma, 2, 0 )
                        valor_pago := valor_pago * 100
                        valor_pago := strzero( valor_pago, 14, 0 )
                        opcional   := alltrim( par1 ) + alltrim( par2 )
                        GeraComando( "72|" + i_forma + "|" + valor_pago + "|" + opcional + "|" )
                        restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )
                     else
                        i_forma    := strzero( i_forma, 2, 0 )
                        valor_pago := valor_pago * 100
                        valor_pago := strzero( valor_pago, 14, 0 )
                        GeraComando( "72|" + i_forma + "|" + valor_pago + "|" )
                        restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )
                  endif

              // Programa a Descricao das Formas de Pagamento

              Case Opcao_Cupom = 12

                   Qopc_11()
                   restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )

              // Termina o Fechamento do Cupom Fiscal

              Case Opcao_Cupom = 13

                  set color to
                  @ 17,26 clear to 24,76
                  setcolor( "W+/GR" )
                  @ 16,25 clear to 23,75
                  @ 16,25 to 23,75
                  msg1 := msg2 := msg3 := msg4 := msg5 := space( 48 )
                  @ 17,26 say "Entre com a Mensagem Promocional."
                  @ 18,26 get msg1 pict "@"
                  @ 19,26 get msg2 pict "@"
                  @ 20,26 get msg3 pict "@"
                  @ 21,26 get msg4 pict "@"
                  @ 22,26 get msg5 pict "@"
                  read
                  If ( LastKey() == 27 )
                       Exit
                  EndIf
                  mensagem := alltrim( msg1 + msg2 + msg3 + msg4 + msg5 )
                  GeraComando( "34|" + mensagem + "|" )
                  restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )

              // Cancela Cupom Fiscal

              Case Opcao_Cupom = 14

                  GeraComando( "14|")
                  restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )

              // Programa a Unidade de Medida

              Case Opcao_Cupom = 15

                  set color to
                  @ 19,26 clear to 21,49
                  set color to w+/gr
                  @ 18,25 clear to 20,48
                  @ 18,25 to 20,48
                  unidade := space( 02 )
                  @ 19,26 say "Unidade de Medida:" get unidade pict "@"
                  read
                  If ( LastKey() == 27 )
                     Exit
                  EndIf
                  GeraComando( "62|51|" + unidade + "|" )
                  restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )

              // Aumenta a Descricao do Item

              Case Opcao_Cupom = 16

                   Qopc_15()
                   restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )
                   
              // Efetua a Forma de Pagamento com Parcelamento

              Case Opcao_Cupom = 17

						PGTO_Parcelamento()	
						restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )

              // Emite Cupom Adicional

              Case Opcao_Cupom = 18
              
	              	CupomAdicional()
	              	restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )

              // Menu Outros Comandos do Cupom MFD

              Case Opcao_Cupom = 19
              
	              	OutrosComandosCupomMFD()
	              	restscreen( 00, 00, 24, 80, TelaMenuCupomFiscal )
                  
           EndCase
         EndDo
      // Menu dos Comandos dos Relatorios Fiscais

      Case Opcao = 3

           Relatorios()

      Case Opcao = 4

           Oper_Nao_Fiscal()

      Case Opcao = 5

           Infor_Impressora()

      Case Opcao = 6

           Autentica()

      Case Opcao = 7

           Gaveta()
           
      Case Opcao = 8
           Cheque()

      Case Opcao = 9
                  RestScreen( 00, 00, 24, 80, TelaMenuPrincipal )
           Exit
   EndCase

EndDo
Set Color To
Clear
Return

////////////////
Function QOpc3()
////////////////
         Save Screen To Tela_Venda

         Codigo     := "1234567890123"
         Descricao  := "Venda com 3 Casas Decimais   "
         Aliquota   := "FF"
         Qtde_Int   := 1
         Qtde_Frac  := 1
         Valor      := 1
         Desc_Perc  := 0
         Desc_Valor := 0

         Set Color To
         @ 06,25 Clear To 16,79
         SetColor( "W+/GR" )
         @ 05,24 Clear To 15,78
         @ 05,24 To 15,78
         @ 07,25 Say "C¢digo...:" Get Codigo Pict "@"
         @ 08,25 Say "Descri‡Æo:" Get Descricao Pict "@"
         @ 09,25 Say "Al¡quota.:" Get Aliquota Pict "@!"
         Read
         Resp := "I"
         @ 10,25 Say "Qtde. Inteira ou Fracion ria? (I/F):" Get Resp Pict "@!"
         Read

         // Quantidade Interia e Desconto Percentual

         If Resp = "I"
            Resp := " "
            @ 11,25 Say "Qtde. Inteira:" Get Qtde_Int Pict "9999"
            @ 12,25 Say "Valor:" Get Valor Pict "@e 99,999.999"
            Read
            Opc := "P"
            @ 13,25 Say "Desconto Percentual ou por Valor? (P/V):" Get Opc Pict "@!" valid(opc$"PV")
            Read
            If Opc = "P"
                   Opc := " "
                   @ 14,25 Say "Desc. Percentual:" Get Desc_Perc Pict "@e 99.99"
                   Read
                   Valor     := Valor * 1000
                   Valor     := StrZero( Valor, 8, 0 )
                   Desc_Perc := Desc_Perc * 100
                   Desc_Perc := StrZero( Desc_Perc, 4, 0 )
                   Comando := Chr( 27 ) + Chr( 251 ) + "56|" + Codigo + "|" + Descricao + "|" + Aliquota + "|" + StrZero( Qtde_Int, 4, 0 ) + "|" + Valor + "|" + Desc_Perc + "|" + Chr( 27 )
                   *
                   gravaarq( Comando )
                   !BEMAFI.EXE
                   MostraStatus()
                   * Delete File( "BEMAFI.CMD" )
                   Restore Screen From Tela_Venda
               else
                   @ 14,25 Say "Desconto Valor..:" Get Desc_Valor Pict "@e 999,999.99"
                   Read
                   Valor      := Valor * 1000
                   Valor      := StrZero( Valor, 8, 0 )
                   Desc_Valor := Desc_Valor * 100
                   Desc_Valor := StrZero( Desc_Valor, 8, 0 )
                   Comando := Chr( 27 ) + Chr( 251 ) + "56|" + Codigo + "|" + Descricao + "|" + Aliquota + "|" + StrZero( Qtde_Int, 4, 0 ) + "|" + Valor + "|" + Desc_Valor + "|" + Chr( 27 )
                   *
                   gravaarq( Comando )
                   !BEMAFI.EXE
                   MostraStatus()
                   * Delete File( "BEMAFI.CMD" )
                   Restore Screen From Tela_Venda
            EndIf
         EndIf

         // Quantidade Fracionaria e Desconto Percentual

         If Resp = "F"
                Resp := " "
                @ 11,25 Say "Qtde. Frac...:" Get Qtde_Frac Pict "@e 9,999.999"
                @ 12,25 Say "Valor:" Get Valor Pict "@e 99,999.999"
                Read
                Opc := "P"
                @ 13,25 Say "Desconto Percentual ou por Valor? (P/V):" Get Opc Pict "@!"
                Read
                If Opc = "P"
                       @ 14,25 Say "Desc. Percentual:" Get Desc_Perc Pict "@e 99.99"
                       Read
                       Qtde_Frac := Qtde_Frac * 1000
                       Qtde_Frac := StrZero( Qtde_Frac, 7, 0 )
                       Valor     := Valor * 1000
                       Valor     := StrZero( Valor, 8, 0 )
                       Desc_Perc := Desc_Perc * 100
                       Desc_Perc := StrZero( Desc_Perc, 4, 0 )
                       Comando := Chr( 27 ) + Chr( 251 ) + "56|" + Codigo + "|" + Descricao + "|" + Aliquota + "|" + Qtde_Frac + "|" + Valor + "|" + Desc_Perc + "|" + Chr( 27 )
                       *
                       gravaarq( Comando )
                       !BEMAFI.EXE
                       MostraStatus()
                       * Delete File( "BEMAFI.CMD" )
                       Restore Screen From Tela_Venda
                    else
                        @ 14,25 Say "Desconto Valor..:" Get Desc_Valor Pict "@e 999,999.99"
                        Read
                        Qtde_Frac  := Qtde_Frac * 1000
                        Qtde_Frac  := StrZero( Qtde_Frac, 7, 0 )
                        Valor      := Valor * 1000
                        Valor      := StrZero( Valor, 8, 0 )
                        Desc_Valor := Desc_Valor * 100
                        Desc_Valor := StrZero( Desc_Valor, 8, 0 )
                        Comando := Chr( 27 ) + Chr( 251 ) + "56|" + Codigo + "|" + Descricao + "|" + Aliquota + "|" + Qtde_Frac + "|" + Valor + "|" + Desc_Valor + "|" + Chr( 27 )
                        *
                        gravaarq( Comando )
                        !BEMAFI.EXE
                        MostraStatus()
                        * Delete File( "BEMAFI.CMD" )
                        Restore Screen From Tela_Venda
                EndIf
         EndIf
Return
//////////////////
Function Qopc_11()
//////////////////

        set color to
        @ 16,26 clear to 24,60
        setcolor( "W+/GR" )
        @ 15,25 clear to 23,59
        @ 15,25 to 23,59
        forma1 := forma2 := forma3 := space( 16 )
        forma4 := forma5 := space( 16 )
        @ 16,26 say "Entre com 5 Formas de Pagamento."
        @ 18,26 say "Forma 1:" get forma1 pict "@"
        @ 19,26 say "Forma 2:" get forma2 pict "@"
        @ 20,26 say "Forma 3:" get forma3 pict "@"
        @ 21,26 say "Forma 4:" get forma4 pict "@"
        @ 22,26 say "Forma 5:" get forma5 pict "@"
        read
        forma1  := upper( subs( forma1, 1, 1 ) ) + lower( subs( forma1, 2, 15 ) )
        forma2  := upper( subs( forma2, 1, 1 ) ) + lower( subs( forma2, 2, 15 ) )
        forma3  := upper( subs( forma3, 1, 1 ) ) + lower( subs( forma3, 2, 15 ) )
        forma4  := upper( subs( forma4, 1, 1 ) ) + lower( subs( forma4, 2, 15 ) )
        forma5  := upper( subs( forma5, 1, 1 ) ) + lower( subs( forma5, 2, 15 ) )
        comando := chr( 27 ) + chr( 251 ) + "73|" + forma1 + "|";
                 + forma2 + "|" + forma3 + "|" + forma4 + "|";
                 + forma5 + "|" + chr( 27 )
        *
        gravaarq( Comando )
        !BEMAFI.EXE
        MostraStatus()
        * Delete File( "BEMAFI.CMD" )

Return

Functio Qopc_15()

        set color to
        @ 20,05 clear to 22,76
        set color to w+/gr
        @ 19,04 clear to 21,75
        @ 19,04 to 21,75
        descricao := space( 50 )
        @ 20,05 say "Descri‡„o do Item:" get descricao pict "@"
        read
        comando := chr( 27 ) + chr( 251 ) + "62|52|" + alltrim( descricao ) + "|" + chr( 27 )
        *
        gravaarq( Comando )
        !BEMAFI.EXE
        MostraStatus()
        * Delete File( "BEMAFI.CMD" )

return

Function Relatorios()
LOCAL mtela
mtela := SAVESCREEN(00,00,24,79)
While .T.
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,mtela)
                Exit
        Endif

   botao(05,19,11,62)
   @ 06,20 Prompt " Leitura X                                "
   @ 07,20 Prompt " Redu‡„o Z                                "
   @ 08,20 Prompt " Leitura da Mem¢ria Fiscal Via Arquivo    "
   @ 09,20 Prompt " Leitura da Mem¢ria Fiscal Via Impressora "
   @ 10,20 Prompt " Leitura X pela Serial                    "
   Menu To Opcao_Relat
   do case
      case opcao_relat = 1

           // Leitura X

           comando := chr( 27 ) + chr( 251 ) + "06|" + chr( 27 )
           *
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
           * Delete File( "BEMAFI.CMD" )

     case opcao_relat = 2

           // Reducao Z

           botao(07,14,14,69,,' A T E N € Ž O !!! ')
           @ 10,15 say "Caso a impressora n„o esteja em MODO TREINAMENTO, a"
           @ 11,15 say "Redu‡„o Z, impossibilitar  vendas ap¢s a sua execu‡„o."
           resp := " "
           @ 13,15 say "Confirma mesmo assim? (S/N):" get resp pict "@!" valid( resp$"SN" )
           read
           if resp = "S"
                   comando := chr( 27 ) + chr( 251 ) + "05|" + chr( 27 )
                   *
                   gravaarq( Comando )
                   !BEMAFI.EXE
                   MostraStatus()
                   * Delete File( "BEMAFI.CMD" )
              else
                   return
           endif

      case opcao_relat = 3

           // Leitura da Memoria Fiscal via Arquivo

           botao(09,28,12,42)
           @ 10,29 prompt " Por Data    "
           @ 11,29 prompt " Por Redu‡„o "
           menu to opcao
           do case

              case opcao = 1

                   // Leitura Mem. Fiscal via Arquivo Por Data    

                   data_inicial := data_final := space( 08 )
                   botao(11,33,14,57)
                   @ 11,33 to 14,57
                   @ 12,34 say "Data Inicial:" get data_inicial pict "99/99/99"
                   @ 13,34 say "Data Final..:" get data_final   pict "99/99/99"
                   read
                   if ( LastKey() = 27 )
                       exit
                   Endif
                   mensagem("Recebendo dados da Impressora. Arguarde...")
                   data_inicial := substr( data_inicial, 1, 2 )+substr( data_inicial, 4, 2 )+substr( data_inicial, 7, 2 )
                   data_final   := substr( data_final, 1, 2 )+substr( data_final, 4, 2 )+substr( data_final, 7, 2 )
                   Comando      := Chr( 27 )+Chr( 251 )+"08|"+data_inicial+"|"+data_final+"|R|"+Chr( 27 )
                   gravaarq( Comando )
                   !BEMAFI.EXE
                   MostraStatus()

              case opcao = 2
                   
                   // Leitura Mem. Fiscal Via Arquivo Por Reducao    

                   Reducao_inicial := Reducao_final := space( 4 )
                   botao(11,33,14,56)
                   @ 12,34 say "Redu‡„o Inicial:" get Reducao_inicial pict "9999"
                   @ 13,34 say "Redu‡„o Final..:" get Reducao_final   pict "9999"
                   read
                   if ( LastKey() = 27 )
                       exit
                   Endif
                   mensagem("Recebendo dados da Impressora. Arguarde...")
                   Comando      := Chr( 27 )+Chr( 251 )+"08|"+Reducao_inicial+"|"+Reducao_final+"|R|"+Chr( 27 )
                   gravaarq( Comando )
                   !BEMAFI.EXE
                   MostraStatus()
           endcase
      
      case opcao_relat = 4
           // Leitura da Memoria Fiscal Via Impressora por Data
           
           botao(09,28,12,42)
           @ 10,29 prompt " Por Data    "
           @ 11,29 prompt " Por Redu‡„o "
           menu to opcao
           do case

              case opcao = 1
                   
                   data_inicial := data_final := space( 08 )
                   botao(11,33,14,57)
                   @ 12,34 say "Data Inicial:" get data_inicial pict "99/99/99"
                   @ 13,34 say "Data Final..:" get data_final   pict "99/99/99"
                   read
                   if ( LastKey() = 27 )
                       exit
                   Endif
                   data_inicial := substr( data_inicial, 1, 2 )+substr( data_inicial, 4, 2 )+substr( data_inicial, 7, 2 )
                   data_final   := substr( data_final, 1, 2 )+substr( data_final, 4, 2 )+substr( data_final, 7, 2 )
                   Comando      := Chr( 27 )+Chr( 251 )+"08|"+data_inicial+"|"+data_final+"|I|"+Chr( 27 )
                   *
                   gravaarq( Comando )
                   !BEMAFI.EXE
                   MostraStatus()
                   * Delete File( "BEMAFI.CMD" )

              case opcao = 2
                   
                   Reducao_inicial := Reducao_final := space( 4 )
                   botao(11,33,14,56)
                   @ 12,34 say "Redu‡„o Inicial:" get Reducao_inicial pict "9999"
                   @ 13,34 say "Redu‡„o Final..:" get Reducao_final   pict "9999"
                   read
                   if ( LastKey() = 27 )
                       exit
                   Endif
                   mensagem("Recebendo dados da Impressora. Arguarde...")
                   Comando      := Chr( 27 )+Chr( 251 )+"08|"+Reducao_inicial+"|"+Reducao_final+"|I|"+Chr( 27 )
                   gravaarq( Comando )
                   !BEMAFI.EXE
                   MostraStatus()
           endcase

      case opcao_relat = 5

           // Leitua X pela Serial

           mensagem("Aguarde... o arquivo est  sendo criado.")
           Comando := Chr( 27 ) + Chr( 251 ) + "69|" + Chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

   endcase
      RestScreen( 00, 00, 24, 79, mTela )
EndDo
return

// Menu de Operacoes nao fiscais

Function Oper_Nao_Fiscal()

Do While .T.
   If LastKey() = 27
      Exit
   Endif
   
   SetColor( "N/BG,W+/R,,,,BG/N" )
   @ 05,19 Clear To 24,64
   @ 05,19 To 24,64 Double
   @ 06,20 Prompt " Emite Relat¢rio Gerencial                  "
   @ 07,20 Prompt " Fecha Relat¢rio Gerencial                  "
   @ 08,20 Prompt " Emite Comprovante N„o Fiscal N„o Vinculado "
   @ 09,20 Prompt " Abre Comprovante N„o Fiscal Vinculado      "
   @ 10,20 prompt " Usa Comprovante N„o Fiscal Vinculado       "
   @ 11,20 prompt " Fecha Comprovante N„o Fiscal Vinculado     "
   @ 12,20 prompt " Abre Relatorio Gerencial MFD               "
   @ 13,20 prompt " Segunda Via Comprovante de Cred/Debito MFD "
   @ 14,20 prompt " Abre Comprovante Nao Fiscal MFD            "
   @ 15,20 prompt " Reimpressao do Comprovante de Cred/Debito  "
   @ 16,20 prompt " Cancelamento do Comprovante Nao Fiscal MFD "
   @ 17,20 prompt " Efetua Recebimento Nao Fiscal MFD          "
   @ 18,20 prompt " SubTotaliza Comprovante Nao Fiscal MFD     "
   @ 19,20 prompt " Acre/Desc em SubTotal de Comp. Nao Fiscal  "
   @ 20,20 prompt " Canc. Acre/Desc em SubTotal de CNF         "
   @ 21,20 prompt " Totaliza Comprovante Nao Fiscal            "
   @ 22,20 prompt " Inicia Fechamento Comprovante Nao Fiscal   "
   @ 23,20 prompt " Estorno de Comprovante de Credito e Debito "
   TelaMenuNaoFiscal = SaveScreen( 00, 00, 25, 80 )
   Menu To Opcao_Nao_Fiscal
   do case
      case opcao_nao_fiscal = 1

           // Emite Relatorio Gerencial

           texto1 := texto2 := texto3 := texto4 := texto5  := space( 50 )
           texto6 := texto7 := texto8 := texto9 := texto10 := space( 50 )

           set color to
           set color to w+/gr
           @ 08,25 clear to 19,77
           @ 08,25 to 19,77
           @ 08,28 say " Entre com o texto "
           @ 09,26 get texto1 pict "@"
           @ 10,26 get texto2 pict "@"
           @ 11,26 get texto3 pict "@"
           @ 12,26 get texto4 pict "@"
           @ 13,26 get texto5 pict "@"
           @ 14,26 get texto6 pict "@"
           @ 15,26 get texto7 pict "@"
           @ 16,26 get texto8 pict "@"
           @ 17,26 get texto9 pict "@"
           @ 18,26 get texto10 pict "@"
           read

           texto_todo := texto1 + texto2 + texto3 + texto4 + texto5;
                       + texto6 + texto7 + texto8 + texto9 + texto10
           GeraComando( "20|" + texto_todo + "|" + chr( 13 ) + chr( 10 ) )
           restscreen( 00, 00, 24, 80, TelaMenuNaoFiscal )

      case opcao_nao_fiscal = 2

           // Fecha Relatorio Gerencial

           GeraComando( "21|")
           restscreen( 00, 00, 24, 80, TelaMenuNaoFiscal )

      case opcao_nao_fiscal = 3

           // Emite Comprovante Nao Fiscal Nao Vinculado

           set color to
           set color to w+/gr
           @ 09,25 clear to 14,75
           @ 09,25 to 14,75
           tp    := space( 02 )
           valor := 0
           forma := space( 16 )
           @ 10,26 say "Öndice do Totalizador Parcial:" get tp pict "@!"
           @ 11,26 say "Valor recebindo..............:" get valor pict "@e 999,999,999,999.99"
           read
           resp := " "
           @ 12,26 say "Usar forma de Pagamento? (S/N):" get resp pict "@!" valid(resp$"SN")
           read
           if resp = "S"
                  @ 13,26 say "Forma de Pgto.........:" get forma pict "@"
                  read
                  valor := valor * 100
                  valor := strzero( valor, 14, 0 )
                  forma := upper( left( forma, 1 ) ) + lower( subs( forma, 2, 15 ) )
                  GeraComando( "25|" + tp + "|" + valor + "|" + forma + "|" )
                  restscreen( 00, 00, 24, 80, TelaMenuNaoFiscal )
              else
                  valor := valor * 100
                  valor := strzero( valor, 14, 0 )
                  GeraComando( "25|" + tp + "|" + valor + "|" )
                  restscreen( 00, 00, 24, 80, TelaMenuNaoFiscal )
           endif

      case opcao_nao_fiscal = 4

           // Abre Comprovante Nao Fiscal Vinculado

           set color to
           @ 11,26 clear to 13,77
           set color to w+/gr
           @ 10,25 clear to 12,76
           @ 10,25 to 12,76
           forma_pgto := space( 16 )
           @ 11,26 say "Descri‡„o da Forma de Pagamento:" get forma_pgto pict "@"
           read
           forma_pgto := upper( left( forma_pgto, 1 ) ) + lower( subs( forma_pgto, 2, 15 ) )
           GeraComando( "66|" + forma_pgto + "|" )
           restscreen( 00, 00, 24, 80, TelaMenuNaoFiscal )

      case opcao_nao_fiscal = 5

           // Usa Comprovante Nao Fiscal Vinculado

           texto1 := texto2 := texto3 := texto4 := texto5  := space( 48 )
           texto6 := texto7 := texto8 := texto9 := texto10 := space( 48 )

           set color to
           set color to w+/gr
           @ 11,25 clear to 22,75
           @ 11,25 to 22,75
           @ 11,28 say " Entre com o texto "
           @ 12,26 get texto1 pict "@"
           @ 13,26 get texto2 pict "@"
           @ 14,26 get texto3 pict "@"
           @ 15,26 get texto4 pict "@"
           @ 16,26 get texto5 pict "@"
           @ 17,26 get texto6 pict "@"
           @ 18,26 get texto7 pict "@"
           @ 19,26 get texto8 pict "@"
           @ 20,26 get texto9 pict "@"
           @ 21,26 get texto10 pict "@"
           read
           
           
           
           cGuilhotina := chr( 27 ) + chr( 105 ) + chr( 27 )
           
           texto_todo := texto1 + texto2 + texto3 + texto4 + texto5;
                       + texto6 + texto7 + texto8 + texto9 + texto10
                       
           //GeraComando( "67|" + texto_todo + "|" + chr( 13 ) + chr( 10 ) )
           GeraComando( "67|" + texto_todo + "|" + "\" + cGuilhotina + "\" ) //+ chr( 13 ) + chr( 10 ) )
           //GeraComando( "105|" )
           restscreen( 00, 00, 24, 80, TelaMenuNaoFiscal )

      case opcao_nao_fiscal = 6

           // Fecha Relatorio Gerencial

           GeraComando( "21|" )
           restscreen( 00, 00, 24, 80, TelaMenuNaoFiscal )
           
       // Abre Relatorio Gerencial MFD    
       
      case opcao_nao_fiscal = 7

           GeraComando( "83|02|" )
           restscreen( 00, 00, 24, 80, TelaMenuNaoFiscal )
           
	    // Segunda Via Comprovante de Cred/Debito MFD           
	    
      case opcao_nao_fiscal = 8

           GeraComando( "91|" )
           restscreen( 00, 00, 24, 80, TelaMenuNaoFiscal )
       
	    // Abre Comprovante Nao Fiscal MFD
	    
      case opcao_nao_fiscal = 9

           GeraComando( "77|12345678901234567890123456789|123456789012345678901234567890|";
                        + "12345678901234567890123456789012345678901234567890123456789012345678901234567890|" )
           restscreen( 00, 00, 24, 80, TelaMenuNaoFiscal )

      // Reimpressao do Comprovante de Cred/Debito
      
      case opcao_nao_fiscal = 10

           GeraComando( "92|" )
           restscreen( 00, 00, 24, 80, TelaMenuNaoFiscal )
       
      // Cancelamento do Comprovante Nao Fiscal MFD
      
      case opcao_nao_fiscal = 11

           GeraComando( "81|12345678901234567890123456789|123456789012345678901234567890|";
                        + "12345678901234567890123456789012345678901234567890123456789012345678901234567890|" )
           restscreen( 00, 00, 24, 80, TelaMenuNaoFiscal )

      // Efetua Recebimento Não Fiscal MFD
      
      case opcao_nao_fiscal = 12

           GeraComando( "78|01|00000000001000|" )
           restscreen( 00, 00, 24, 80, TelaMenuNaoFiscal )
           
      // SubTotaliza Comprovante Nao Fiscal MFD
      
      case opcao_nao_fiscal = 13

           GeraComando( "107|" )
           restscreen( 00, 00, 24, 80, TelaMenuNaoFiscal )

      // Acre/Desc em SubTotal de Comp. Nao Fiscal
      
      case opcao_nao_fiscal = 14

           GeraComando( "108|A|1000|" )
           restscreen( 00, 00, 24, 80, TelaMenuNaoFiscal )

      // Canc. Acre/Desc em SubTotal de CNF
      
      case opcao_nao_fiscal = 15

           GeraComando( "109|A|" )
           restscreen( 00, 00, 24, 80, TelaMenuNaoFiscal )

      // Totaliza Comprovante Nao Fiscal
      
      case opcao_nao_fiscal = 16

           GeraComando( "110|" )
           restscreen( 00, 00, 24, 80, TelaMenuNaoFiscal )

      // Inicia Fechamento Comprovante Nao Fiscal
      
      case opcao_nao_fiscal = 17

           GeraComando( "79|A|1000|" )
           restscreen( 00, 00, 24, 80, TelaMenuNaoFiscal )
          
      // Estorno de Comprovante de Credito e Debito
      
      case opcao_nao_fiscal = 18

           GeraComando( "102|12345678901234567890123456789|123456789012345678901234567890|";
                        + "12345678901234567890123456789012345678901234567890123456789012345678901234567890|" )
           restscreen( 00, 00, 24, 80, TelaMenuNaoFiscal )
          
   endcase
EndDo
return

Function Infor_Impressora()
Do While .T.
   If LastKey() = 27
      Exit
   Endif

   SetColor( "N/BG,W+/R,,,,BG/N" )
   @ 07,19 Clear To 19,58
   @ 07,19 To 19,58 Double
   @ 08,20 Prompt " Leitura do Estado da Impressora      "
   @ 09,20 Prompt " Leitura das Al¡quotas                "
   @ 10,20 Prompt " Leitura dos Totalizadores Parciais   "
   @ 11,20 Prompt " Leitura do Subtotal                  "
   @ 12,20 Prompt " Leitura do N£mero do Cupom           "
   @ 13,20 Prompt " Leitura do Estado do Papel           "
   @ 14,20 Prompt " Leitura dos Dados da éltima Redu‡„o  "
   @ 15,20 Prompt " Retorno de Vari veis (35|00 … 35|17) "
   @ 16,20 Prompt " Retorno de Vari veis (35|18 … 35|34) "
   @ 17,20 Prompt " Informacoes MFD                      "
   @ 18,20 Prompt " Informacoes MFD (continuacao)        "
   Tela = SaveScreen( 00, 00, 25, 80 )
   Menu To Opcao_Retorno
   do case

      case opcao_retorno = 1

           // Leitura do Estado da Impressora

           Comando := Chr(27) + Chr(251) + "19|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 2

           // Leitura das Aliquotas

           comando := chr( 27 ) + chr( 251 ) + "26|" + chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 3

           // Leitura dos Totalizadores Parciais

           comando := chr( 27 ) + chr( 251 ) + "27|" + chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 4

           // Leitura dos Subtotal
           
           comando := chr( 27 ) + chr( 251 ) + "29|" + chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 5

           // Leitura do numero do Cupom

           comando := chr( 27 ) + chr( 251 ) + "30|" + chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 6

           // Leitura do estado do Papel na condicao de "Pouco Papel"

           comando := chr( 27 ) + chr( 251 ) + "62|54|" + chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 7

           // Leitura dos Dados da ultima Reducao Z

           comando := chr( 27 ) + chr( 251 ) + "62|55|" + chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
      
      case opcao_retorno = 8

           // Retorno de Variaveis (Comando 35)
           RetVar1()

      case opcao_retorno = 9

           // Continuacao do Retorno de Variaveis (Comando 35)
           RetVar2()

      case opcao_retorno = 10

           // Informacoes MFD
           InfoMFD()

      case opcao_retorno = 11

           // Informacoes MFD
           InfoMFD2()

   endcase
   RestScreen( 00, 00, 25, 80, Tela )
EndDo
return

Function RetVar1()

Do While .T. 
   If LastKey() = 27
       Exit
   Endif
   
   SetColor( "N/BG,W+/R,,,,BG/N" )
   @ 03,19 Clear To 22,61
   @ 03,19 To 22,61 Double
   @ 04,20 Prompt " N£mero de S‚rie                         "
   @ 05,20 Prompt " Vers„o do Firmware                      "
   @ 06,20 Prompt " CGC/IE                                  "
   @ 07,20 Prompt " Grande Total                            "
   @ 08,20 Prompt " Cancelamentos                           "
   @ 09,20 Prompt " Descontos                               "
   @ 10,20 Prompt " Contador Sequencial                     "
   @ 11,20 Prompt " N£mero de Opera‡”es n„o Fiscais         "
   @ 12,20 Prompt " N£mero de Cupons Cancelados             "
   @ 13,20 Prompt " N£mero de Redu‡”es                      "
   @ 14,20 Prompt " N£mero de Interven‡”es T‚cnicas         "
   @ 15,20 Prompt " N£mero de Substitui‡”es de Propriet rio "
   @ 16,20 Prompt " N£mero do Ultimo Item Vendido           "
   @ 17,20 Prompt " Clichˆ do Propriet rio                  "
   @ 18,20 Prompt " N£mero do Caixa                         "
   @ 19,20 Prompt " N£mero da Loja                          "
   @ 20,20 Prompt " Moeda                                   "
   @ 21,20 Prompt " Flags Fiscais                           "
   
   Tela = SaveScreen( 00,00,25,80 )
   Menu To Opcao_Retorno
   do case

      case opcao_retorno = 1

           // Numero de Serie                

           Comando := Chr(27) + Chr(251) + "35|00|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
     
      case opcao_retorno = 2

           // Versao do Firmware             

           Comando := Chr(27) + Chr(251) + "35|01|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
      
      case opcao_retorno = 3

           // CGC/IE                         

           Comando := Chr(27) + Chr(251) + "35|02|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
      
      case opcao_retorno = 4

           // Grande Total     

           Comando := Chr(27) + Chr(251) + "35|03|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 5

           // Cancelamentos                  

           Comando := Chr(27) + Chr(251) + "35|04|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 6

           // Descontos                      

           Comando := Chr(27) + Chr(251) + "35|05|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 7

           // Contador Sequencial  

           comando := chr( 27 ) + chr( 251 ) + "35|06|" + chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 8

           // Numero de Operacoes Fiscais          

           comando := chr( 27 ) + chr( 251 ) + "35|07|" + chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 9

           // Cupons Cancelados   
           
           comando := chr( 27 ) + chr( 251 ) + "35|08|" + chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 10

           // Numero de Reducoes         

           comando := chr( 27 ) + chr( 251 ) + "35|09|" + chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 11

           // Intervencoes Tecnicas                                    

           comando := chr( 27 ) + chr( 251 ) + "35|10|" + chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 12

           // Substituicoes de Proprietario          

           comando := chr( 27 ) + chr( 251 ) + "35|11|" + chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
      
      case opcao_retorno = 13

           // Ultimo Item Vendido              

           comando := chr(27) + chr(251) + "35|12|" + chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 14

           // Cliche do Proprietario         

           Comando := Chr(27) + Chr(251) + "35|13|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
     
      case opcao_retorno = 15

           // Numero do Caixa                

           Comando := Chr(27) + Chr(251) + "35|14|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
      
      case opcao_retorno = 16

           // Numero da Loja                 

           Comando := Chr(27) + Chr(251) + "35|15|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
      
      case opcao_retorno = 17

           // Moeda            

           Comando := Chr(27) + Chr(251) + "35|16|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 18

           // Flags Fiscais                  

           Comando := Chr(27) + Chr(251) + "35|17|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      endcase
   RestScreen( 00,00,25,80, Tela )
EndDo
return

Function RetVar2()

Do While .T. 
   If LastKey() = 27
       Exit
   Endif

   SetColor( "N/BG,W+/R,,,,BG/N" )
   @ 03,19 Clear To 22,62
   @ 03,19 To 22,62 Double
   @ 04,20 Prompt " Minutos Ligada                           "
   @ 05,20 Prompt " Minutos Imprimindo                       "
   @ 06,20 Prompt " Flag de Interven‡„o T‚cnica              "
   @ 07,20 Prompt " Flag de Eprom Conectada                  "
   @ 08,20 Prompt " Valor Pago no Ultimo Cupom               "
   @ 09,20 Prompt " Data e Hora Atual                        "
   @ 10,20 Prompt " Contadores dos Tot. n„o Sujeitos ao ICMS "
   @ 11,20 Prompt " Descri‡„o dos Tot. n„o Sujeitos ao ICMS  "
   @ 12,20 Prompt " Data da Ultima Redu‡„o                   " 
   @ 13,20 Prompt " Data do Movimento                        "
   @ 14,20 Prompt " Flag de Truncamento                      "
   @ 15,20 Prompt " Flags de Vincula‡„o ao ISS               "
   @ 16,20 Prompt " Totalizador de Acr‚scimos                "
   @ 17,20 Prompt " Contador de Bilhete de Passagem          "
   @ 18,20 Prompt " Formas de Pagamento                      "
   @ 19,20 Prompt " Recebimentos (CNF n„o Vinculado)         "
   @ 20,20 Prompt " Departamentos                            "
   @ 21,20 Prompt " Tipo de Impressora                       "
   
   Tela = SaveScreen( 00, 00, 25, 80 )                                                          
   Menu To Opcao_Retorno
   do case

      case opcao_retorno = 1

           // Minutos Ligada                 

           Comando := Chr(27) + Chr(251) + "35|18|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
      
      case opcao_retorno = 2

           // Minutos Imprimindo             

           Comando := Chr(27) + Chr(251) + "35|19|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
      
      case opcao_retorno = 3

           // Flag de Intervencao Tecnica  

           Comando := Chr(27) + Chr(251) + "35|20|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
      
      case opcao_retorno = 4

           // Flag de Eprom Conectada

           Comando := Chr(27) + Chr(251) + "35|21|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 5

           // Valor Pago no Ultimo Cupom    

           Comando := Chr(27) + Chr(251) + "35|22|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 6

           // Data e Hora Atual             

           Comando := Chr(27) + Chr(251) + "35|23|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 7

           // Contadores dos Totalizadores nao Sujeitos ICMS

           comando := chr( 27 ) + chr( 251 ) + "35|24|" + chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 8

           // Descricao dos Tot. nao Sujeitos ICMS 

           comando := chr( 27 ) + chr( 251 ) + "35|25|" + chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 9

           // Data da Ultima Reducao
           
           comando := chr( 27 ) + chr( 251 ) + "35|26|" + chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 10

           // Data do Movimento          

           comando := chr( 27 ) + chr( 251 ) + "35|27|" + chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 11

           // Flag de Truncamento                                      

           comando := chr( 27 ) + chr( 251 ) + "35|28|" + chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 12

           // Flags de Vinculacao                    

           comando := chr( 27 ) + chr( 251 ) + "35|29|" + chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
      
      case opcao_retorno = 13

           // Totalizador de Acrescimos        

           comando := chr(27) + chr(251) + "35|30|" + chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 14

           // Contador de Bilhete de Passagem

           Comando := Chr(27) + Chr(251) + "35|31|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
     
      case opcao_retorno = 15

           // Formas de Pagto                

           Comando := Chr(27) + Chr(251) + "35|32|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
      
      case opcao_retorno = 16

           // Recebimentos (CNF nao Vinculado)

           Comando := Chr(27) + Chr(251) + "35|33|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
      
      case opcao_retorno = 17

           // Departamentos    

           Comando := Chr(27) + Chr(251) + "35|34|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 18

           // Tipo da Impressora             

           Comando := Chr(27) + Chr(251) + "35|253|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      endcase
   RestScreen( 00, 00, 25, 80, Tela )
EndDo
return

Function InfoMFD()

Do While .T. 
   If LastKey() = 27
       Exit
   Endif

   SetColor( "N/BG,W+/R,,,,BG/N" )
   @ 03,19 Clear To 22,63
   @ 03,19 To 22,63 Double
   @ 04,20 Prompt " Totalizadores Parciais                    "
   @ 05,20 Prompt " Numero de Serie                           "
   @ 06,20 Prompt " Versao do Firmware                        "
   @ 07,20 Prompt " CNPJ                                      "
   @ 08,20 Prompt " Inscricao Estadual                        "
   @ 09,20 Prompt " Inscricao Municiapal                      "
   @ 10,20 Prompt " Tempo Operacional                         "
   @ 11,20 Prompt " Minutos Emitindo Documentos Fiscais       "
   @ 12,20 Prompt " Contadores dos Tot. Nao Sujeitos ao ICMS  "
   @ 13,20 Prompt " Descricao dos Tot. Nao Sujeitos ao ICMS   " 
   @ 14,20 Prompt " Formas de Pagamento                       "
   @ 15,20 Prompt " Totalizadores Nao Sujeitos ao ICMS        "
   @ 16,20 Prompt " Relatorios Gerenciais                     "
   @ 17,20 Prompt " Contador Operacoes Nao Fiscais Canceladas "
   @ 18,20 Prompt " Contador Relatorios Gerenciais            "
   @ 19,20 Prompt " Contador Cupom Fiscal                     "
   @ 20,20 Prompt " Contador Fita Detalhe                     "
   @ 21,20 Prompt " Numero de Serie da MFD                    "
   
   Tela = SaveScreen( 00, 00, 25, 80 )                                                          
   Menu To Opcao_Retorno
   do case

      case opcao_retorno = 1 
           GeraComando("87|") // Totalizadores Parciais    
      
      case opcao_retorno = 2 
           GeraComando("35|40|") // Numero de Serie    
      
      case opcao_retorno = 3 
           GeraComando("35|41|") // Versao Firmware    

      case opcao_retorno = 4 
           GeraComando("35|42|") // CNPJ

      case opcao_retorno = 5 
           GeraComando("35|43|") // Inscricao Estadual 
      
      case opcao_retorno = 6 
           GeraComando("35|44|") // Inscricao Municipal

      case opcao_retorno = 7 
           GeraComando("35|45|") // Tempo Operacional  

      case opcao_retorno = 8
           GeraComando("35|46|") // Minutos Emitindo Documentos Fiscais

      case opcao_retorno = 9
           GeraComando("35|47|") // Contadores dos Tot. Nao Sujeitos ao ICMS

      case opcao_retorno = 10
           GeraComando("35|48|") // Descricao dos Tot. Nao Sujeitos ao ICMS

      case opcao_retorno = 11
           GeraComando("35|49|") // Formas de Pagamento

      case opcao_retorno = 12
           GeraComando("35|50|") // Totalizadores Nao Sujeitos ao ICMS
      
      case opcao_retorno = 13
           GeraComando("35|51|") // Relatorios Gerenciais

      case opcao_retorno = 14
           GeraComando("35|53|") // Contador Operacoes Nao Fiscais Canceladas
     
      case opcao_retorno = 15 
           GeraComando("35|54|") // Contador Relatorios Gerenciais
      
      case opcao_retorno = 16
           GeraComando("35|55|") // Contador Cupom Fiscal
      
      case opcao_retorno = 17
           GeraComando("35|56|") // Contador Fita Detalhe
      
      case opcao_retorno = 18 
           GeraComando("35|58|") // Numero de Serie da MFD

      endcase
   RestScreen( 00, 00, 25, 80, Tela )
EndDo
return


Function InfoMFD2()

Do While .T. 
   If LastKey() = 27
       Exit
   Endif

   SetColor( "N/BG,W+/R,,,,BG/N" )
   @ 03,19 Clear To 20,68
   @ 03,19 To 20,68 Double
   @ 04,20 Prompt " Contador Comprov Credito e Debito              "
   @ 05,20 Prompt " Contador Comprov Credito e Debito Nao Emitidos "
   @ 06,20 Prompt " Numero de Reducoes Restantes                   "
   @ 07,20 Prompt " Marca, Modelo e Tipo                           "
   @ 08,20 Prompt " Percentual da MFD Livre                        "
   @ 09,20 Prompt " Tamanho Total da MFD em Bytes                  "
   @ 10,20 Prompt " Tamanho da MFD Livre em Bytes                  "
   @ 11,20 Prompt " Data e Hora Ultimo Doc Armazenado na MFD       "
   @ 12,20 Prompt " Status do Comprovante Nao Fiscal               " 
   @ 13,20 Prompt " Subtotal do Comprovante Nao Fiscal             "
   @ 14,20 Prompt " Data do Movimento da Ultima Reduzao Z          "
   @ 15,20 Prompt " Grande Total da Ultima Reducao Z               "
   @ 16,20 Prompt " UF do Proprietario                             "
   @ 17,20 Prompt " Tempo Restante Para Emissao do Comprovante     "
   @ 18,20 Prompt " COO inicial e Final                            "
   @ 19,20 Prompt " Dados Reducao Z                                "
   
   Tela = SaveScreen( 00, 00, 25, 80 )                                                          
   Menu To Opcao_Retorno
   do case

      case opcao_retorno = 1 
           GeraComando("35|52|") // Contador Comprov Credito e Debito
      
      case opcao_retorno = 2 
           GeraComando("35|57|") // Contador Comprov Credito e Debito Nao Emitidos
      
      case opcao_retorno = 3 
           GeraComando("35|59|") // Numero de Reducoes Restantes

      case opcao_retorno = 4 
           GeraComando("35|60|") // Marca, Modelo e Tipo

      case opcao_retorno = 5 
           GeraComando("35|61|") // Percentual da MFD Livre
      
      case opcao_retorno = 6 
           GeraComando("35|62|") // Tamanho Total da MFD em Bytes

      case opcao_retorno = 7 
           GeraComando("35|63|") // Tamanho da MFD Livre em Bytes

      case opcao_retorno = 8
           GeraComando("35|64|") // Data e Hora Ultimo Doc Armazenado na MFD

      case opcao_retorno = 9
           GeraComando("35|65|") // Status do Comprovante Nao Fiscal

      case opcao_retorno = 10
           GeraComando("35|66|") // Subtotal do Comprovante Nao Fiscal

      case opcao_retorno = 11
           GeraComando("35|67|") // Data do Movimento da Ultima Reducao Z
      
      case opcao_retorno = 12
           GeraComando("35|68|") // Grande Total da Ultima Reducao Z
      
      case opcao_retorno = 13
           GeraComando("35|70|") // UF do Proprietario

      case opcao_retorno = 14
           GeraComando("35|71|") // Tempo Restante para Emissao do Comprovante
     
      case opcao_retorno = 15
           GeraComando("35|72|") // COO inicial e Final
      
      case opcao_retorno = 16
           GeraComando("88|") // Dados Reducao Z

      endcase
   RestScreen( 00, 00, 25, 80, Tela )
EndDo
return

Function Autentica()
Do While .T.
   If LastKey() = 27
      Exit
   Endif

   SetColor( "N/BG,W+/R,,,,BG/N" )
   @ 08,19 Clear To 11,57
   @ 08,19 To 11,57 Double
   @ 09,20 Prompt " Autentica‡„o de Documentos          "
   @ 10,20 Prompt " Programa Caracter para Autentica‡„o "
   Tela = SaveScreen( 00, 00, 25, 80 )
   Menu To Opcao_Retorno
   do case

      case opcao_retorno = 1

           // Autenticacao                   

           Comando := Chr(27) + Chr(251) + "16|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 2

           // Programa Caracter para Autenticacao

           comando := chr( 27 ) + chr( 251 ) + "64|255|017|049|081|159|000|255|017|049|081|159|000|255|129|129|129|255|000|" + chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      endcase
   RestScreen( 00, 00, 25, 80, Tela )
EndDo
return


Function Gaveta()

Do While .T. 
   If LastKey() = 27
       Exit
   Endif

   SetColor( "N/BG,W+/R,,,,BG/N" )
   @ 10,19 Clear To 13,49
   @ 10,19 To 13,49 Double
   @ 11,20 Prompt " Acionamento da Gaveta       "
   @ 12,20 Prompt " Leitura do Estado da Gaveta "
   
   Tela = SaveScreen( 00, 00, 25, 80 )                                                          
   Menu To Opcao_Retorno
   do case

      case opcao_retorno = 1

           // Acionamento da Gaveta         

           Comando := Chr(27) + Chr(251) + "22|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
      
      case opcao_retorno = 2

           // Leitura do Estado da Gaveta   

           Comando := Chr(27) + Chr(251) + "23|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
      
      endcase
   RestScreen( 00, 00, 25, 80, Tela )
EndDo
return

Function Cheque()

Do While .T. 
   If LastKey() = 27
       Exit
   Endif

   SetColor( "N/BG,W+/R,,,,BG/N" )
   @ 10,19 Clear To 13,54
   @ 10,19 To 18,54 Double
   @ 11,20 Prompt " Programa‡„o da Moeda no Singular "
   @ 12,20 Prompt " Programa‡„o da Moeda no Plural   "
   @ 13,20 Prompt " Impress„o de Cheque              "
   @ 14,20 Prompt " Impress„o de Cheque MFD          "
   @ 15,20 Prompt " Status do Cheque                 "
   @ 16,20 Prompt " Cancela Impress„o do Cheque      "
   @ 17,20 Prompt " Leitura do Cheque                "
   
   Tela = SaveScreen( 00, 00, 25, 80 )
   Menu To Opcao_Retorno
   do case

      case opcao_retorno = 1

           // Programacao da moeda no singular
           MoedaSingular := Space( 19 )
           Set Color To
           @ 11,25 Clear To 13,62
           SetColor( "W+/GR" )
           @ 11,22 Clear To 13,61
           @ 11,22 To 13,61
           @ 12,23 Say "Moeda no Singular:" Get MoedaSingular pict "@!"
           Read
           Comando := Chr( 27 ) + Chr( 251 ) + "58|" + MoedaSingular + "|" + Chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
      
      case opcao_retorno = 2

           // Programacao da moeda no plural
           MoedaPlural := Space( 19 )
           Set Color To
           @ 12,25 Clear To 14,60
           SetColor( "W+/GR" )
           @ 12,22 Clear To 14,59
           @ 12,22 To 14,59
           @ 13,23 Say "Moeda no Plural:" Get MoedaPlural pict "@!"
           Read
           Comando := Chr( 27 ) + Chr( 251 ) + "59|" + MoedaPlural + "|" + Chr( 27 )
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
      
      case opcao_retorno = 3

           // Impressao do cheque              

           Banco := "001"
           Valor := 100
           Favor := "Bematech                                     "
           Cidad := "Curitiba                   "
           Data  := "21/12/2004"
           Set Color To
           @ 13,23 Clear To 19,80
           SetColor( "W+/GR" )
           @ 13,20 Clear To 19,79
           @ 13,20 To 19,79
           @ 14,21 Say "Banco.....:" Get Banco pict "@!"
           @ 15,21 Say "Valor.....:" Get Valor Pict "@e 999,999.99"
           @ 16,21 Say "Favorecido:" Get Favor pict "@!"
           @ 17,21 Say "Cidade....:" Get Cidad pict "@!"
           @ 18,21 Say "Data......:" Get Data  pict "99/99/9999"
           Read
           if LastKey() == 27
                exit
           Endif
           Valor   := Valor * 100
           Valor   := StrZero( Valor, 14, 0 )
           Data    := substr( Data, 1, 2 ) + "|" + substr( Data, 4, 2 ) + "|" + substr( Data, 7, 4 )
           Comando := Chr(27) + Chr(251) + "57|" + Banco + "|" + Valor + "|" + Favor + "|" + Cidad + "|" + Data + "|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
      
      case opcao_retorno = 4

           // Impressao do cheque na MFD       

           Banco := "001"
           Valor := 100
           Favor := "Bematech                                     "
           Cidad := "Curitiba                   "
           Data  := "21/12/2004"
           Msg   := "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM"
           Set Color To
           @ 13,23 Clear To 21,80
           SetColor( "W+/GR" )
           @ 13,20 Clear To 21,79
           @ 13,20 To 21,79
           @ 14,21 Say "Banco.....:" Get Banco pict "@!"
           @ 15,21 Say "Valor.....:" Get Valor Pict "@e 999,999.99"
           @ 16,21 Say "Favorecido:" Get Favor pict "@!"
           @ 17,21 Say "Cidade....:" Get Cidad pict "@!"
           @ 18,21 Say "Data......:" Get Data  pict "99/99/9999"
           @ 19,21 Say "Mensagem  :" Get Msg   pict "@!"
           Resp := "V"
           @ 20,21 Say "Imprimir mensagem na Frente ou Verso? (F/V):" Get Resp Pict "@!"
           Read
           if LastKey() == 27
                exit
           Endif
           Valor   := Valor * 100
           Valor   := StrZero( Valor, 14, 0 )
           Data    := substr( Data, 1, 2 ) + "|" + substr( Data, 4, 2 ) + "|" + substr( Data, 7, 4 )
           if Resp = "V"
           	Comando := Chr(27) + Chr(251) + "94|1|0|" + Banco + "|" + Valor + "|" + Favor + "|" + Cidad + "|" + Data + "|" + Msg + "|" + Chr(27)
           else
           	Comando := Chr(27) + Chr(251) + "94|0|0|" + Banco + "|" + Valor + "|" + Favor + "|" + Cidad + "|" + Data + "|" + Msg + "|" + Chr(27)
           endif
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 5

           // Status do cheque                 

           Comando := Chr(27) + Chr(251) + "62|48|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()
      
      case opcao_retorno = 6

           // Cancela impressao do cheque      

           Comando := Chr(27) + Chr(251) + "62|49|" + Chr(27)
           gravaarq( Comando )
           !BEMAFI.EXE
           MostraStatus()

      case opcao_retorno = 7
           GeraComando("76|") // Leitura do cheque


      endcase
   RestScreen( 00, 00, 25, 80, Tela )
EndDo


return

/////////
Function Sombra_Transparente
////////////////////////////

Parameters nTopo, nEsquerda, nBase, nDireita

RestScreen( ( nTopo + 1 ) , ( nDireita + 1 ) , nBase , ( nDireita + 1 ) , ;
            Transform( SaveScreen( ( nTopo + 1 ) , ( nDireita + 1 ) , nBase , ( nDireita + 1 ) ) , ;
            Replicate( "X",( nBase - nTopo + 1 ) * 2 ) ) )

If nBase < 24

   RestScreen( ( nBase + 1 ) , ( nEsquerda + 1 ) , ( nBase + 1 ) , ( nDireita + 1 ) , ;
             Transform( SaveScreen( ( nBase + 1) , ( nEsquerda + 1 ) ,( nBase + 1 ) , ( nDireita + 1 ) ) , ;
             Replicate( "X" , ( nDireita - nEsquerda + 2 ) ) ) )
EndIf

//////
Return
//////

/////////////////////
Function gravaarq
/////////////////////
Parameters Comando

Delete File( "BEMAFI.CMD" )
Delete File( "STATUS.TXT" )
Delete File( "RETORNO.TXT" )

iArquivo := FCreate( "BEMAFI.CMD" )

FWrite( iArquivo, @Comando, Len( Comando ) )
FClose( iArquivo )
//////
Return
//////

/////////////////////
Function MostraStatus
/////////////////////
Do While .T.
	//TelaAnterior := savescreen( 00, 00, 24, 80 )
   If .Not. File( "STATUS.TXT" )
      Loop
   Else
      iArqStatus    := FOpen( "STATUS.TXT" )
      iTamArqStatus := FSeek( iArqStatus, 0, 2 )
      FClose( iArqStatus )
      iArqStatus    := FOpen( "STATUS.TXT" )
      sRetorno := " "
      sDadosStatus := ""
      For x := 1 to iTamArqStatus
          FRead( iArqStatus, @sRetorno, 1 )
          sDadosStatus = sDadosStatus + sRetorno
      Next
      botao(06,04,08,54,,' Conteudo do Arquivo STATUS.TXT ')
      @ 07,05 Say sDadosStatus
      
      if File ("RETORNO.TXT")
          iArqRetorno   := FOpen( "RETORNO.TXT" )
          iTamArqRetorno := FSeek( iArqRetorno, 0, 2 )
          FClose( iArqRetorno )
          iArqRetorno   := FOpen( "RETORNO.TXT" )
          sRetorno := " "
          sDadosRetorno := ""
          
          For x := 1 to iTamArqRetorno
              FRead( iArqRetorno, @sRetorno, 1 )
              sDadosRetorno = sDadosRetorno + sRetorno
          Next
          botao(09,05,11,54,,"Conteudo do Arquivo RETORNO.TXT")
          @ 12,05 Say sDadosRetorno
          FClose( iArqRetorno )
      ENDIF
      Inkey(3)
      Exit
   EndIf
EndDo
//restscreen( 00, 00, 24, 80, TelaAnterior )
FClose( iArqStatus )
//////
Return
//////

function CupomAdicional
                  comando := chr( 27 ) + chr( 251 ) + "85|" + chr( 27 )
                  *
                  gravaarq( Comando )
                  !BEMAFI.EXE
                  MostraStatus()
                  * Delete File( "BEMAFI.CMD" )
return
function PGTO_Parcelamento
                  comando := chr( 27 ) + chr( 251 ) + "90|02|0000000001000|02|TESTE|" + chr( 27 )
                  *
                  gravaarq( Comando )
                  !BEMAFI.EXE
                  MostraStatus()
                  * Delete File( "BEMAFI.CMD" )
return                  


Function GeraComando
Parameters Comando

gravaarq( chr( 27 ) + chr( 251 ) + Comando + chr( 27 ) )
!BEMAFI.EXE
*MostraStatus()

Return

function OutrosComandosCupomMFD
	Do While .T. 
	   If LastKey() = 27
         return 
	   Endif

   	SetColor( "N/BG,W+/R,,,,BG/N" )
   	@ 10,24 Clear To 16,73
   	@ 10,24 To 16,73 Double
   	@ 11,25 Prompt " Cancelamento de Acrescimo/Desconto em Item     "
   	@ 12,25 Prompt " Inicia Fechamento Cupom sem Forma Pagamento    "
   	@ 13,25 Prompt " Acrescimo/Desconto em Subtotal                 "
   	@ 14,25 Prompt " Cancelamento de Acrescimo/Desconto em Subtotal "
   	@ 15,25 Prompt " Totaliza o Cupom Fiscal                        "
   	Menu To Opcao_Retorno
   	TelaCupomMFD = savescreen( 00, 00, 24, 80 )
   	do case

   	   case opcao_retorno = 1

   	        // Cancelamento de Acrescimo/Desconto em Item
   	        GeraComando( "114|A|001|" )
   	        restscreen( 00, 00, 24, 80, TelaCupomMFD )
   	   
   	   case opcao_retorno = 2
	
   	        // Inicia Fechamento Cupom sem Forma Pagamento
   	        GeraComando( "103|" )
   	        restscreen( 00, 00, 24, 80, TelaCupomMFD )
   	   
   	   case opcao_retorno = 3
	
   	        // Acrescimo/Desconto em Subtotal
   	        GeraComando( "104|A|1000|" )
   	        restscreen( 00, 00, 24, 80, TelaCupomMFD )
   	   
   	   case opcao_retorno = 4
	
   	        // Cancelamento de Acrescimo/Desconto em Subtotal
   	        GeraComando( "105|A|" )	
   	        restscreen( 00, 00, 24, 80, TelaCupomMFD )
   	   
   	   case opcao_retorno = 5
	
   	        // Totaliza o Cupom Fiscal
   	        GeraComando( "106|" )
   	        restscreen( 00, 00, 24, 80, TelaCupomMFD )
	
   	   endcase
	EndDo	
return RestScreen( 00, 00, 24, 80, TelaCupomMFD )
