/*****************************************
Autor: Eric Magaldi
Analista programador de sistemas
São Paulo - SP - Brasil
http://xBaseSuporte.freeforums.org
*****************************************/
/*
Poste sua versao desta rotina, Duvidas ou sugestoes.

Uso:
? CepWeb(01310000)   // Numero ou
? CepWeb("01310000") // String
*/

function main( cCep )
local aCepWeb

scroll()

if EMPTY(cCep)
   ? 'Informe o numero do CEP para pesquisa na internet'
   
elseif LEN((aCepWeb:=CepWeb( cCep ))) > 0

   if aCepWeb[1] # 1
      ? 'Cep nao encontrado'
      
   else
      ? 'Cep Pesquisado.:', aCepWeb[2]
      ? 'Tipo Logradouro:', aCepWeb[3]
      ? 'Logradouro.....:', aCepWeb[4]
      ? 'Bairro.........:', aCepWeb[5]
      ? 'Cidade.........:', aCepWeb[6]
      ? 'UF.............:', aCepWeb[7]
      
   endif
   
else
   ? 'Internet ou Site indisponivel'
   
endif

return nil

*************************** F I M **********************************

//*****************************************************************************
//#21/05/08# - eric - 19:23 => 
//*****************************************************************************
function CepWeb( uCEP ) // --> asResult
static asResult[0]
local oHttp
local cHTML

uCEP:=STRZERO( if(ValType(uCEP) = 'N', uCEP, VAL(uCEP) ), 8)

if VAL(uCEP) = 0
   ASIZE( asResult, 0 )
   
else
   // Otimizacao - Se repetir a ultima pesquisa, nao precisara conectar no site
   if LEN(asResult) = 0 .or. ! asResult[2] == uCEP
      oHttp:=TIpClientHttp():new( 'http://republicavirtual.com.br/web_cep.php?cep=' + uCEP )
      ASIZE( asResult, 0 )

      if oHttp:open()
         cHTML:=oHttp:readAll()
         oHttp:close()
         
         if StringBetween( cHTML, '<resultado>', '</resultado>' ) = '1' // Sucesso
            AADD( asResult, 1 )
            AADD( asResult, uCEP )
            AADD( asResult, StringBetween( cHTML, '<tipo_logradouro>', '</tipo_logradouro>' ) )
            AADD( asResult, StringBetween( cHTML, '<logradouro>', '</logradouro>' ) )
            AADD( asResult, StringBetween( cHTML, '<bairro>', '</bairro>' ) )
            AADD( asResult, StringBetween( cHTML, '<cidade>', '</cidade>' ) )
            AADD( asResult, StringBetween( cHTML, '<uf>', '</uf>' ) )
            
         else   
            AADD( asResult, 0 )   // Resultado: Cep nao encontrado
            AADD( asResult, '' )  // Numro cep pesquisado
            AADD( asResult, '' )  // Tipo Logradouro
            AADD( asResult, '' )  // Logradouro
            AADD( asResult, '' )  // Bairro
            AADD( asResult, '' )  // Cidade
            AADD( asResult, '' )  // UF
            
         endif
         
      endif
      
   endif
   
endif      
return asResult

//*****************************************************************************
//#21/05/08# - eric - 19:23 => Refinar esta rotina com lCase  
//*****************************************************************************
function StringBetween( cAllString, cBegin, cEnd, lCase ) // --> cValue
local nBegin,nEnd
local cValue

//TypeL lCase
cValue:=''
if (nBegin:=AT( cBegin, cAllString)) > 0 .and. (nEnd:=AT( cEnd, cAllString)) >= nBegin+LEN(cBegin)
   cValue:=SUBSTR( LEFT( cAllString, nEnd-1 ), nBegin+LEN(cBegin) )
   
endif
return cValue

