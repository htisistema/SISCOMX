       

        function NGrande( nNGrande1, nNGrande2, nNGrande3, nNGrande4, cNGrande5 )

        // nNGrande1 -> N�mero que dever� ser apresentado em tamanho grande
        // nNGrande2 -> Linha Inicial para apresenta��o
        // nNGrande3 -> Coluna Inicial para apresenta��o
        // nNGrande4 -> Coluna Final para apresenta��o
        // cNGrande5 -> M�scara para apresenta��o

        cNGrande6 := transform( nNGrande1, cNGrande5 )

        nNGrande7 := 1
        nNGrande8 := len( cNGrande6 )

        cNGrandeA := ""    //  Estas vari�veis conter�o
        cNGrandeB := ""    //  os caracteres que formar�o
        cNGrandeC := ""    //  os n�mero em tamanho

        do while nNGrande7 <= nNGrande8
                cNGrande9 := substr( cNGrande6, nNGrande7, 1 )
                do case
                        case cNGrande9 == "0"
                        cNGrandeA += "��� "
                        cNGrandeB += "� � "
                        cNGrandeC += "��� "
                case cNGrande9 == "1"
                        cNGrandeA += "��  "
                        cNGrandeB += " �  "
                        cNGrandeC += "��� "
                case cNGrande9 == "2"
                        cNGrandeA += "��� "
                        cNGrandeB += "��� "
                        cNGrandeC += "��� "
                case cNGrande9 == "3"
                        cNGrandeA += "��� "
                        cNGrandeB += " �� "
                        cNGrandeC += "��� "
                case cNGrande9 == "4"
                        cNGrandeA += "� � "
                        cNGrandeB += "��� "
                        cNGrandeC += "  � "
                case cNGrande9 == "5"
                        cNGrandeA += "��� "
                        cNGrandeB += "��� "
                        cNGrandeC += "��� "
                case cNGrande9 == "6"
                        cNGrandeA += "��� "
                        cNGrandeB += "��� "
                        cNGrandeC += "��� "
                case cNGrande9 == "7"
                        cNGrandeA += "��� "
                        cNGrandeB += "  � "
                        cNGrandeC += "  � "
                case cNGrande9 == "8"
                        cNGrandeA += "��� "
                        cNGrandeB += "��� "
                        cNGrandeC += "��� "
                case cNGrande9 == "9"
                        cNGrandeA += "��� "
                        cNGrandeB += "��� "
                        cNGrandeC += "��� "
                case cNGrande9 == "."
                        cNGrandeA += " "
                        cNGrandeB += " "
                        cNGrandeC += "."
                case cNGrande9 == ","
                        cNGrandeA += " "
                        cNGrandeB += " "
                        cNGrandeC += ","
                endcase
                nNGrande7++
        enddo
        nNGrandTam := ( nNGrande4 - nNGrande3 + 1 )
        if len( cNGrandeA ) < nNGrandTam
                cNGrandeA := space( nNGrandTam - len( cNGrandeA ) ) + cNGrandeA
                cNGrandeB := space( nNGrandTam - len( cNGrandeB ) ) + cNGrandeB
                cNGrandeC := space( nNGrandTam - len( cNGrandeC ) ) + cNGrandeC
        endif
        @ nNGrande2,nNGrande3 clear to nNGrande2+3,nNGrande4
        @ nNGrande2  , nNGrande3 say substr( cNGrandeA, 1, nNGrandTam )
        @ nNGrande2+1, nNGrande3 say substr( cNGrandeB, 1, nNGrandTam )
        @ nNGrande2+2, nNGrande3 say substr( cNGrandeC, 1, nNGrandTam )
        return( nil )
