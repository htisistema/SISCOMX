#define K_C                67   //   C
#define K_c                99   //   c
#define K_F                102  //   F
#define K_f                70   //   f
#define K_A                65   //   A
#define K_a                97   //   a
#define K_I                73   //   I
#define K_i                105  //   i

#DEFINE DEF_CSEP " "+CHR(179)+" "             // define o caracter da coluna
#DEFINE FOOT_SEP CHR(196)+CHR(193)+CHR(196)   // define o caracter do horizontal
#DEFINE HEAD_SEP CHR(196)+CHR(194)+CHR(196)   // define o caracter do horizontal

#include "inkey.ch"

**********
FUNC XLS()
**********
indexa()

SET DELETED ON

USE AGENDA ALIAS AGENDA shared VIA 'DBFCDX'
SET INDEX TO AGENDA1

@ 23, 00 SAY PADL( "[Esc]Sa¡da", 80 ) COLOR "R*/W"
@ 23, 01 SAY "[F1]Ordem [F2]Busca  [C]Cadastrar" COLOR "R*/W"
@ 23, 35 SAY "[Del]Excluir" COLOR "R*/W"
@ 23, 52 SAY "[Enter]Editar" COLOR "R*/W"

@ 03,00 CLEAR TO 22,01
@ 03,79 CLEAR TO 22,79

SET CONFIRM OFF
PESQAGE2()
SET CONFIRM ON

CLEAR GETS
CLEAR TYPEAHEAD         // limpa sujeira no teclado
DBCLOSEALL()
return

***************
FUNC PESQAGE2()
***************
FIELD NOME,TELEFONE1,CELULAR,TIPO,TELEFONE2,ENDERECO,BAIRRO,CIDADE,UF,CEP IN AGENDA
LOCAL nButton := 1
LOCAL nOpcao  := 0
LOCAL OTbr  :=TBrowseDB( 03, 01, 22, 80 )
LOCAL OTbc1 :=TbColumnNew("Descricao do Cadastrado",{ || NOME     } )
LOCAL OTbc2 :=TbColumnNew("N§ Telefone",            { || TELEFONE1} )
LOCAL OTbc3 :=TbColumnNew("N§ Celular",             { || CELULAR  } )
LOCAL OTbc4 :=TbColumnNew("TIPO",                   { || TIPO     } )
LOCAL OTbc5 :=TbColumnNew("N§ Telefone",            { || TELEFONE2} )
LOCAL OTbc6 :=TbColumnNew("Endere‡o Completo",      { || ENDERECO } )
LOCAL OTbc7 :=TbColumnNew("Bairro",                 { || BAIRRO   } )
LOCAL OTbc8 :=TbColumnNew("Cidade",                 { || CIDADE   } )
LOCAL OTbc9 :=TbColumnNew("UF",                     { || UF       } )
LOCAL OTbc10:=TbColumnNew("CEP",                    { || CEP      } )

LOCAL nKey
LOCAL lExitRequested
PARA TIPOCAD,LINHA

********************************************************************
*                  1      2       3       4      5       6     7      8     9      10       11      12      13
oTbr:colorspec :="N*/W , W+/BG , W+/B , R+*/W , W*/W+ , RJ/W , W/B , R/N , B+*/W , RW*/W , N+*/W, BG+*/W, RG+*/W"
oTbr:addColumn(oTbc1)
oTbr:addColumn(oTbc2)
oTbr:addColumn(oTbc3)
oTbr:addColumn(oTbc4)
oTbr:addColumn(oTbc5)
oTbr:addColumn(oTbc6)
oTbr:addColumn(oTbc7)
oTbr:addColumn(oTbc8)
oTbr:addColumn(oTbc9)
oTbr:addColumn(oTbc10)

oTbC4:COLORBLOCK :={| NOME     | IIF ( TIPO ="CLIENTE",    { 9,2  } ,;
                                 IIF ( TIPO ="FORNECEDOR", { 4,2  } ,;
                                 IIF ( TIPO ="FUNCIONARIO",{ 10,2 } ,;
                                 IIF ( TIPO ="COMPRADOR",  { 13,2 } ,;
                                 IIF ( TIPO ="CREDOR",     { 12,2 } ,;
                                 IIF ( TIPO ="DIVERSOS",   { 11,2 } , { 1,2} ) ) ) ) ) ) }

************ largura das colunas ***********
oTbc1:width:=29
************ Marcara das colunas ***********
oTbc2:picture:="@R (99) 9999-9999"
oTbc3:picture:="@R (99) 9999-9999"
oTbc5:picture:="@R (99) 9999-9999"
************ Linhas das colunas ************
oTbr:COLSEP :=DEF_CSEP  // desenha colunas Verticais
oTbr:HEADSEP:=HEAD_SEP  // desenha colunas Horizontais superior
oTbr:FOOTSEP:=FOOT_SEP  // desenha colunas Horizontais inferior
************ COLUNAS A CONGELAR ************
ColFix := 1              // atraves de variaval colfix
oTbr:freeze := ColFix

**********************************
SELE AGENDA
SET ORDER TO 2

Otbr:gotop()
IExitRequested := .F.
vCONTINUA=" "

DO WHILE !IExitRequested
    DO WHILE !oTbr:stabilize()
    ENDDO
    IF !vCONTINUA="S"
       nKey := inkey(0)
    ENDIF

    DO CASE

      CASE vCONTINUA="S"
         CLEAR TYPEAHEAD         // limpa sujeira no teclado
         vNOME=SPACE(30)
         vREG=RECCOUNT()
         vCONTINUA=" "

         SETCOLOR( "N/W,N*/RG,N/W* , , N*/W" )
         @ ROW(),01      GET vNOME      PICT"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
         READ
         SETCOLOR( "N*/W,W+/BG" )

         IF LASTKEY()==27
            IF EMPTY(vNOME)
               TRAVAREG()
               DELE
               LIBERAREG()
               OTBR:refreshall()
               Otbr:gotop()  // no arquivo indexado
               LOOP
            ENDIF
         ENDIF

         TRAVAREG()
         REPL NOME      WITH vNOME
         LIBERAREG()

         IF FOUND()
            ALERT("Descrição de Estoque Já Cadastrada!, favor verificar")
            EXIT
         ENDIF

         OTBR:refreshall()
         Otbr:gotop()  // no arquivo indexado
         GOTO vREG

      CASE nKey == K_ENTER .OR. nKey == K_a .OR. nKey == K_A

         nCOLNUM:=OTBR:COLPOS

         DO CASE

         ENDCASE

         IF TIPO="DIVERSOS"

            DO WHILE .T.

               vNOME=NOME
               vTELEFONE1=TELEFONE1
               vCELULAR=CELULAR
               vTIPO=TIPO
               vTELEFONE2=TELEFONE2
               vENDERECO=ENDERECO
               vBAIRRO=BAIRRO
               vCIDADE=CIDADE
               vCEP=CEP
               vUF=UF

               SET CURSOR ON

               SETCOLOR( "N/W,N*/RG,N/W* , , N*/W" )
               IF nCOLNUM==1
                  @ ROW(),COL() GET vNOME      PICT"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
                  READ
               ENDIF

               IF nCOLNUM==2
                  LINHA=ROW()
                  COLUNA=COL()
                  @ ROW(),COL() GET vTELEFONE1 PICT"@R (99) 9999-9999"
                  READ
               ENDIF

               IF nCOLNUM==3
                  @ ROW(),COL() GET vCELULAR   PICT"@R (99) 9999-9999"
                  READ
               ENDIF

               IF nCOLNUM==4
                  @ ROW(),COL() GET vTIPO PICT"!!!!!!!!!!!"
                  READ
               ENDIF

               IF nCOLNUM==5
                  @ ROW(),COL() GET vTELEFONE2 PICT"@R (99) 9999-9999"
                  READ
               ENDIF

               IF nCOLNUM==6
                  @ ROW(),COL() GET vENDERECO
                  READ
               ENDIF

               IF nCOLNUM==7
                  @ ROW(),COL() GET vBAIRRO
                  READ
               ENDIF

               IF nCOLNUM==8
                  @ ROW(),COL() GET vCIDADE
                  READ
               ENDIF

               IF nCOLNUM==9
                  @ ROW(),COL() GET vUF
                  READ
               ENDIF

               IF nCOLNUM==10
                  @ ROW(),COL() GET vCEP
                  READ
               ENDIF

               SET CONFIRM OFF

               SETCOLOR( "N*/W,W+/BG" )

               IF !LASTKEY() = 27
                  SELE AGENDA
                  TRAVAREG()
                  REPL NOME      WITH vNOME
                  REPL TELEFONE1 WITH vTELEFONE1
                  REPL CELULAR   WITH vCELULAR
                  REPL TIPO      WITH vTIPO
                  REPL TELEFONE2 WITH vTELEFONE2
                  REPL ENDERECO  WITH vENDERECO
                  REPL BAIRRO    WITH vBAIRRO
                  REPL CIDADE    WITH vCIDADE
                  REPL CEP       WITH VCEP
                  REPL UF        WITH vUF
                  LIBERAREG()
               ENDIF
               EXIT
            ENDDO
         ELSE
            ALERT("Nao e permitido a Alteracao por esse processo, Favor entrar no cadastro de origem.")
         ENDIF

         SET ORDER TO 2
         OTBR:refreshall()
      CASE nKey == K_C .OR. nKey == K_c
         SELE AGENDA
         SET ORDER TO 2
         APPE BLAN
         TRAVAREG()
         REPL TIPO    WITH "DIVERSOS"
         LIBERAREG()

         OTBR:refreshall()
         Otbr:gotop()  // no arquivo indexado

         vCONTINUA="S"
         LOOP
      CASE nKey == K_F .OR. nKey == K_f
           TB2Excel(OTBR)  // GERA EXCEL
      CASE nKey == K_DEL
           nOPC := Alert("Deseja Realmente Excluir esse Registro ?",{ "Sim", "Não" })

           IF nOPC = 2
              LOOP
           ENDIF

           TRAVAREG()
           dele
           DBCOMMIT()
           LIBERAREG()

           SET ORDER TO 2
           oTbr:RefreshAll()
           oTbr:ForceStable()

           dbgotop()     // arruma por ordem os dados
           Otbr:gotop()  // no arquivo indexado
           
      CASE nKey == K_F1
         IF INDEXORD()==2
            SET ORDER TO 7
         ELSEIF INDEXORD()==7
            SET ORDER TO 2
         ENDIF
         oTbr:refreshall()

      CASE nKey == K_F2
         chave:= Space(30)
         SETCOLOR( "N*/W,B/W" )
         CLEAR TYPEAHEAD
         @  12, 18 say "Nome.:" get CHAVE pict"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
         READ
         SETCOLOR( "N*/W,W+/B" )
         set softseek on
         seek chave
         set softseek off
         oTbr:refreshall()

      CASE nKey == K_DOWN
           oTbr:down()
      CASE nKey == K_UP
           oTbr:up()
      CASE nKey == K_PGDN
           oTbr:pageDown()
      CASE nKey == K_PGUP
           oTbr:pageUp()
      CASE nKey == K_CTRL_PGUP
           oTbr:goTop()
      CASE nKey == K_CTRL_PGDN
           oTbr:goBottom()
      CASE nKey == K_RIGHT
           oTbr:right()
      CASE nKey == K_LEFT
           oTbr:left()
      CASE nKey == K_HOME
           oTbr:home()
      CASE nKey == K_END
           oTbr:end()
      CASE nKey == K_CTRL_LEFT
           oTbr:panLeft()
      CASE nKey == K_CTRL_RIGHT
           oTbr:panRight()
      CASE nKey == K_CTRL_HOME
           oTbr:panHome()
      CASE nKey == K_CTRL_END
           oTbr:panEnd()
      CASE nKey == K_ESC
           vVOLTAR="S"
           OTBR:refreshall()
           Otbr:gotop()  // no arquivo indexado
           IExitRequested := .T.
    ENDCASE
  ENDDO
RETURN NIL

Function LiberaREG( CLIENTES )
DbUnlock()
Return(.T.)
Return(Nil)

********************************
* Travando REGISTRO
Function TravaReg( Tempo )
Local   nTempo := 0
TEMPO :=0
While .T.
   IF TEMPO # 0
      While nTempo < TEMPO
        If DbRlock()          // bloqueia registro
           Return(.T.)
        Else
           Loop
        EndIf
      EndDo
   Else
      While .T. && Eternamente
        If Rlock()
           Return(.T.)
        Else
           Loop
        EndIf
      EndDo
   EndIf
   Return(.F.)
   Exit
EndDo
Return(Nil)

*************
Func indexa()
*************
use AGENDA  alias AGENDA excl new VIA 'DBFCDX'
if !neterr()
   pack
   DELETE FILE AGENDA1.CDX
   index on CODIGO      TAG 1 to AGENDA1
   index on NOME        TAG 2 to AGENDA1
   index on TELEFONE1   TAG 3 to AGENDA1
   index on TELEFONE2   TAG 4 to AGENDA1
   index on CELULAR     TAG 5 to AGENDA1
   index on CIDADE      TAG 6 to AGENDA1
   index on TIPO        TAG 7 to AGENDA1
   index on TIPO+NOME   TAG 8 to AGENDA1
   use
endif
DBCLOSEALL()
RETURN

*********************
Function TB2Excel(oTB)  // gera excel para console a partir do tbrowse
*********************
local oExcel
local oSheet
local i,linha

oexcel := CreateObject( "Excel.Application" )
//oExcel := CreateObject( "Excel.Application" )
oExcel:WorkBooks:Add()
oSheet = oExcel:ActiveSheet

for i := 1 TO oTB:ColCount
   oCol := oTB:GetColumn(i)
   cCell := oCol:Heading
   oSheet:Cells( 1, i ):Value = cCell
next
Eval (oTB:goTopBlock) // start from the top
linha=2
do while .t.
   for i := 1 TO oTB:ColCount
      oCol := oTB:GetColumn(i)
      uColData := Eval(oCol:Block) // column data (of yet unknown type)
      do case
      case ValType(uColData) == "C" // characters
         if ! Empty(oCol:picture)
            cCell := Transform (alltrim(uColData), oCol:picture)
         else
            cCell := alltrim(uColData)
         endif
         cCell="'"+cCell
      case ValType(uColData) == "N" // numbers
         cCell := uColData
      case ValType(uColData) == "L" // logicals
         cCell := if (uColData, "Sim", "Näo")
      case ValType(uColData) == "D" // dates
         cCell := uColData
      otherwise
         cCell := "error"
      endcase
      oSheet:Cells( linha, i ):Value = cCell
   next

   nTemp := Eval (oTB:SkipBlock, 1)
   if nTemp != 1
      exit
   endif
   linha++
enddo
Eval (oTB:goTopBlock)

oSheet:Rows( "1:1" ):Font:bold:=.t.
oSheet:Columns:AutoFit()

oExcel:Visible := .t.

return NIL

************************ F I M ************************************

//----------------------------------------------------------
// XLS.PRG
//
// Rutinas para escribir un archivo Excel 2.0 de
// forma nativa
//
// Basada en la implementacion de Mark O'Brien
// Microsoft Corporation
//
// Version Clipper :
// Yamil Bracho (brachoy@pdvsa.com)
// Nov,1999
// Caracas, Venezuela
//----------------------------------------------------------

// Label Header
#define TXT_ELEMS 12
#define TXT_OPCO1 1
#define TXT_OPCO2 2
#define TXT_LEN1 3
#define TXT_LEN2 4
#define TXT_ROW1 5
#define TXT_ROW2 6
#define TXT_COL1 7
#define TXT_COL2 8
#define TXT_RGBAT1 9
#define TXT_RGBAT2 10
#define TXT_RGBAT3 11
#define TXT_LEN 12

//----------------------------------------------------------
// Proposito :
// Abre el archivo xls y escribe marcador inicial
// Parametros:
// cFile - Nombre del Archivo
// Retorna :
// nHandle - Handle del archivo Excel
//----------------------------------------------------------
function xlsOpen( cFile )
local nHandle
local cBof := Chr( 9 ) + Chr( 0 ) + Chr( 4 ) + Chr( 0 ) + ;
Chr( 2 ) + Chr( 0 ) + Chr( 10 ) + Chr( 0 )
nHandle := fCreate( cFile )
fWrite( nHandle, cBof, Len( cBof ))
return nHandle

function docOpen( cFile )
local nHandle
local cBof := Chr(208 ) + Chr(207 ) + Chr( 17 ) + Chr(224 ) + ;
Chr(161 ) + Chr(177 ) + Chr( 26 ) + Chr( 0 )
nHandle := fCreate( cFile )
fWrite( nHandle, cBof, Len( cBof ))
return nHandle

//----------------------------------------------------------
// Proposito :
// Cierra el archivo xls y escribe marcador final
// Parametros:
// Nada
// Retorna :
// nil
//----------------------------------------------------------
function xlsClose( nHandle )
local cEof := Chr( 10 ) + Chr( 0 ) + Chr( 0 ) + Chr( 0 )
fWrite( nHandle, cEof, Len( cEof ))
fClose( nHandle )
return nil

function docClose( nHandle )
local cEof := Chr( 10 ) + Chr( 0 ) + Chr( 0 ) + Chr( 0 )
fWrite( nHandle, cEof, Len( cEof ))
fClose( nHandle )
return nil

//----------------------------------------------------------
// Proposito :
// Escribe un string en la celda (nRow, nCol)
// nRow, nCol Comienzan en 1
// Parametros:
// nHandle - Handle del archivo xls
// nRow - Fila
// nCol - Columna
// cString - String a escribir
// Retorna :
// nil
//----------------------------------------------------------
function xlsWrite( nHandle, nRow, nCol, cString )
local anHeader
local nLen
local nI

//---------------------------------------------------
// Arreglo para almacenar el marcador de registro
// etiqueta
//---------------------------------------------------
anHeader := Array( TXT_ELEMS )
anHeader[ TXT_OPCO1 ] := 4
anHeader[ TXT_OPCO2 ] := 0
anHeader[ TXT_LEN1 ] := 10
anHeader[ TXT_LEN2 ] := 0
anHeader[ TXT_ROW2 ] := 0
anHeader[ TXT_COL2 ] := 0
anHeader[ TXT_RGBAT1 ] := 0
anHeader[ TXT_RGBAT2 ] := 0
anHeader[ TXT_RGBAT3 ] := 0
anHeader[ TXT_LEN ] := 2

nLen := Len( cString )

//------------------------------
// Longitud del texto a escribir
//------------------------------
anHeader[ TXT_LEN ] := nLen

//----------------------
// Longitud del registro
//----------------------
anHeader[ TXT_LEN1 ] := 8 + nLen

//---------------------------------------------
// En le formato BIFF se comienza desde cero y
// no desde 1 como estamos pasando los datos
//---------------------------------------------
nI := nRow - 1
anHeader[ TXT_ROW1 ] := nI - (Int( nI / 256 ) * 256 )
anHeader[ TXT_ROW2 ] := Int( nI / 256 )
anHeader[ TXT_COL1 ] := nCol - 1

//-------------------
// Escribe encabezado
//-------------------
Aeval( anHeader, { | v | fWrite( nHandle, Chr( v ), 1 )})

//-----------------------------------------------------
// Escribe la data
//-----------------------------------------------------
for nI:=1 to nLen
fWrite( nHandle, SubStr( cString, nI, 1 ), 1 )
next nI
return nil

//----------------------------------------------------------
// Proposito :
// Escribe un string en la celda (nRow, nCol)
// nRow, nCol Comienzan en 1
// Parametros:
// nHandle - Handle del archivo xls
// nRow - Fila
// nCol - Columna
// cString - String a escribir
// Retorna :
// nil
//----------------------------------------------------------
function TB2Xls (oTB, cXlsFile, cTitle)

local xXls, i, oCol, nTemp
local uColData, cAlign, cCell

// argument checking
if ValType(oTB) != "O"
return .f.
endif
if Empty(cXlsFile)
cXlsFile := "TB2Xls.xls"
else
cXlsFile := cXlsFile+".xls"
endif

// creating new Xls (.HTM) file
xXls := xlsOpen( cXlsFile )

// output column headers
for i := 1 TO oTB:ColCount
oCol := oTB:GetColumn(i)
cCell := oCol:Heading

xlsWrite( xXls, 1, i, cCell )
next

// here comes the main loop which generate the table body
Eval (oTB:goTopBlock) // start from the top

cLin := 2
do while .t.

for i := 1 TO oTB:ColCount
oCol := oTB:GetColumn(i)
uColData := Eval(oCol:Block) // column data (of yet unknown type)
do case
case ValType(uColData) == "C" // characters
if Empty(uColData)
cCell := "" // if empty, display non-breaking space (&nbsp)
// to prevent displaying "hole" in table
else
cCell := uColData
endif
//cAlign := "" // text fields are left aligned
case ValType(uColData) == "N" // numbers
if ! Empty(oCol:picture)
cCell := Transform (uColData, oCol:picture) // display numbers according to column picture
else
cCell := Str(uColData)
endif
if Empty(cCell)
cCell := 0 // non-breaking space
endif
//cAlign := ""
case ValType(uColData) == "L" // logicals
cCell := if (uColData, "Sim", "Nao")
//cAlign := "" // NOTE: if you prefer T/F style, change above line to
// cCell := if (uColData, "T", "F")
case ValType(uColData) == "D" // dates
if Empty(uColData) // empty dates
cCell := ""
else
cCell := DToC(uColData)
endif
//cAlign := ""
otherwise
cCell := "error"
//cAlign := ""
end case
xlsWrite( xXls, cLin, i, cCell )
next

nTemp := Eval (oTB:SkipBlock, 1)
if nTemp != 1 // it's the end, so we are getting out
exit
endif

cLin++
end do // main loop

Eval (oTB:goTopBlock) // set TBrowse back to top

// writing Xls tail
xlsClose( xXls )

return .t.

/*
*
* Exemplo de criacao de .XLS
*
*
*/

function xlsTeste
LOCAL adata:={}
cComm  := "SELECT cod_cli,razao,limite FROM saccli ORDER BY cod_cli"
sr_getconnection():exec(ccomm,,.t.,@adata)

nXls := xlsOpen( "c:\siaccfg\teste.xls" )
xlsWrite( nXls, 1, 1, "Pais" )
xlsWrite( nXls, 1, 2, "Capital" )
xlsWrite( nXls, 1, 3, "Populacao" )
f := 2
for i:=1 to Len( aData )
xlsWrite( nXls, f, 1, aData[ i , 1 ] )
xlsWrite( nXls, f, 2, aData[ i , 2 ] )
xlsWrite( nXls, f, 3, Ltrim( Str( aData[ i , 3 ] )))
f++
next i
xlsClose( nXls )
return

