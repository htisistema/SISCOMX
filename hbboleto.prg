
//#include "common.ch"
#define CRLF CHR(13)+CHR(10)
#xtranslate Default( <x>, <y> ) => IIF( <x> == NIL, <y>, <x> )

// Esse programa lê um arquivo .ini de configurações de boletos e gera os boletos a partir dele.
// Gostaria de ter feito com xml, ao invés de ini, mas não conhecia nenhuma classe pronta p/ xml ... e fiz com ini mesmo.
// Se alguém quiser/puder mudar p/ xml, fique à vontade!
// Marcelo Sturm - 01/08/2007

/* -------------------------------------------------------------------------- */

FUNCTION hboleto( cFileName )

   LOCAL oIni, oRetIni, oBol
   LOCAL cDir, cDirRemessa, lPrint, lPreview, lPromptPrint, cBol, nI := 0

   SET DATE BRIT

   // CriaIni(cFileName)  // Descomentando esta linha, um arquivo de exemplo é gerado.

   oIni = TIniFile():New(Default(cFilename, 'bol.ini'))
   oBol := oBoleto(oIni:ReadString("CAB", "Banco"))
//IF STRZERO(VAL(q_ban[1,3]),3) = '104'
//   oBol:Modelo      := "BOL_SIGCB" // Modelo SIGCB, Padrao da Caixa BOL_SIGCB104.htm, ( oBol:Modelo:="" -> Padrao bol.htm )
//ELSE
   oBol:Modelo      := "" // Modelo SIGCB, Padrao da Caixa BOL_SIGCB104.htm, ( oBol:Modelo:="" -> Padrao bol.htm )
//ENDIF
   oBol:lBoleto     := oIni:ReadBool("CAB", "lBoleto", .T.)
   oBol:lRemessa    := oIni:ReadBool("CAB", "lRemessa",.F.)
   oBol:lAnsi       := oIni:ReadBool("CAB", "lAnsi", .F.)
   lPrint           := oIni:ReadBool("CAB", "lPrint", .F.)
   lPreview         := oIni:ReadBool("CAB", "lPreview", .F.)
   lPromptPrint     := oIni:ReadBool("CAB", "lPromptPrint", .F.)
   oBol:nBolsPag    := oIni:ReadNumber("CAB", "nBolsPag", 2)
   oBol:cImageLnk   := oIni:ReadString("CAB", "cImageLnk")
   oBol:cCDPF       := oIni:ReadString("CAB", "CODCedente")    // Cod. Cedente / Cod. Empresa no Banco
   oBol:Cedente     := oIni:ReadString("CAB", "Cedente")
   oBol:CedenteCNPJ := oIni:ReadString("CAB", "CedenteCNPJ")
   oBol:cNumCC      := oIni:ReadString("CAB", "cNumCC")
   oBol:cDvCC       := oIni:ReadString("CAB", "cDVCC")         // DV Conta
   oBol:cNumAgencia := oIni:ReadString("CAB", "cNumAgencia")
   oBol:cDVAgencia  := oIni:ReadString("CAB", "cDVAgencia")         // Digito Agencia
   oBol:cCarteira   := oIni:ReadString("CAB", "cCarteira")
   oBol:EspecieTit  := oIni:ReadString("CAB", "EspecieTit")
   oBol:cTipoCob    := oIni:ReadString("CAB", "cTipoCob")
   oBol:nMora       := oIni:ReadNumber("CAB", "nMora", 0)
   oBol:nMulta      := oIni:ReadNumber("CAB", "nMulta", 0)
   oBol:nDiasProt   := oIni:ReadNumber("CAB", "nDiasProt", 0)
   cDir             := oIni:ReadString("CAB", "cDir")
   cDirRemessa      := oIni:ReadString("CAB", "cDirRemessa")
   oBol:Open("boleto") //, cDir, cDirRemessa, cDir)  // Cria html - Sempre colocar após a definição completa do Cedente, pois
                                                     // isso influencia na criação do Arquivo Remessa.

   DO WHILE .T.
      cBol := "BOL" + LTRIM(STR(++nI))
      IF EMPTY(oIni:ReadNumber(cBol, "nValor", 0))
         EXIT
      ENDIF
      oBol:Sacado       := oIni:ReadString(cBol, "Sacado")
      oBol:Endereco     := oIni:ReadString(cBol, "Endereco")
      oBol:Bairro       := oIni:ReadString(cBol, "Bairro")
      oBol:Cidade       := oIni:ReadString(cBol, "Cidade")
      oBol:Estado       := oIni:ReadString(cBol, "Estado")
      oBol:CEP          := oIni:ReadString(cBol, "CEP")
      oBol:CNPJ         := oIni:ReadString(cBol, "CNPJ")
      oBol:Instrucoes   := oIni:ReadString(cBol, "Instrucoes", "")
      oBol:cNumDoc      := oIni:ReadString(cBol, "cNumDoc", "")          // seu numero do documento
      oBol:cNossoNumero := oIni:ReadString(cBol, "cNossoNumero", "")     // numero do banco
      oBol:nValor       := oIni:ReadNumber(cBol, "nValor", 0)            // valor do boleto
      oBol:DtEmis       := oIni:ReadDate(cBol, "DtEmis", DATE())
      oBol:DtVenc       := oIni:ReadDate(cBol, "DtVenc", DATE())
      oBol:Execute() // monta html
   ENDDO

   oBol:Close()
   IF lPrint
      oBol:Print(lPreview, lPromptPrint) // Imprime o boleto */
   ENDIF

   IF oBol:lRemessa .AND. !EMPTY(oBol:oRem:NomeRem)
      oRetIni = TIniFile():New(Default(cFilename, 'bol.ini') + '.ret')
      oRetIni:WriteString("RET", "NomeRem", oBol:oRem:NomeRem)
      oRetIni:WriteString("RET", "Destino", oBol:oRem:Destino)
      oRetIni:WriteString("RET", "cNumSequencial", oBol:oRem:cNumSequencial)
      oRetIni:WriteNumber("RET", "nTitLote", oBol:oRem:nTitLote)
      oRetIni:UpdateFile()
   ENDIF

RETURN NIL

/* -------------------------------------------------------------------------- */

STATIC FUNCTION CriaIni( cFileName )

   LOCAL oIni

   oIni = TIniFile():New(Default(cFilename, 'bol.ini'))
   oIni:WriteString("CAB", "Banco", "409")
   oIni:WriteString("CAB", "cImageLnk", "")
   oIni:WriteBool("CAB", "lBoleto", .T.)
   oIni:WriteBool("CAB", "lRemessa", .T.)
   oIni:WriteBool("CAB", "lAnsi", .T.)
   oIni:WriteBool("CAB", "lPrint", .T.)
   oIni:WriteBool("CAB", "lPreview", .T.)
   oIni:WriteBool("CAB", "lPromptPrint", .T.)
   oIni:WriteNumber("CAB", "nBolsPag", 2)
   oIni:WriteString("CAB", "Cedente", "Teste de Cedente")
   oIni:WriteString("CAB", "CedenteCNPJ", "11111111111180")
   oIni:WriteString("CAB", "cNumCC", "100778-3")
   oIni:WriteString("CAB", "cNumAgencia", "1748-5")
   oIni:WriteString("CAB", "cCarteira", "1")
   oIni:WriteString("CAB", "EspecieTit", "DM")
   oIni:WriteString("CAB", "cTipoCob", "5")
   oIni:WriteNumber("CAB", "nMora", 0)
   oIni:WriteNumber("CAB", "nMulta", 0)
   oIni:WriteNumber("CAB", "nDiasProt", 0)
   oIni:WriteString("CAB", "cDir", "")
   oIni:WriteString("CAB", "cDirRemessa", "")

   oIni:WriteString("BOL1", "Sacado", "Sacado")
   oIni:WriteString("BOL1", "Endereco", "Endereço")
   oIni:WriteString("BOL1", "Bairro", "Bairro")
   oIni:WriteString("BOL1", "Cidade", "Cidade")
   oIni:WriteString("BOL1", "Estado", "Estado")
   oIni:WriteString("BOL1", "CEP", "20000000")
   oIni:WriteString("BOL1", "CNPJ", "0000000")
   oIni:WriteString("BOL1", "Instrucoes", "Observação")
   oIni:WriteString("BOL1", "cNumDoc", "001396")              // seu numero do documento
   oIni:WriteString("BOL1", "cNossoNumero", "7410114733")     // numero do banco
   oIni:WriteNumber("BOL1", "nValor", 1051.32)                // valor do boleto
   oIni:WriteDate("BOL1", "DtVenc", CTOD("26/09/2006"))

   oIni:WriteString("BOL2", "Sacado", "Cedente 2  - áéíóúàãõâêôüçÁÉÍÓÚÀÃÕÂÊÔÜÇªº°§")
   oIni:WriteString("BOL2", "Endereco", "Endereço")
   oIni:WriteString("BOL2", "Bairro", "Bairro")
   oIni:WriteString("BOL2", "Cidade", "Cidade")
   oIni:WriteString("BOL2", "Estado", "Estado")
   oIni:WriteString("BOL2", "CEP", "20000000")
   oIni:WriteString("BOL2", "CNPJ", "0000000")
   oIni:WriteString("BOL2", "cNumDoc", "001397")              // seu numero do documento
   oIni:WriteString("BOL2", "cNossoNumero", "5682521917")     // numero do banco
   oIni:WriteNumber("BOL2", "nValor", 193.68)                 // valor do boleto
   oIni:WriteDate("BOL2", "DtVenc", CTOD("19/07/2006"))

RETURN oIni:UpdateFile()



#include "harbourboleto.ch"

*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*+
*+    Function AcentoHTML()
*+
*+    Called from ( oboleto.prg  )   1 - function acentohtml()
*+
*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*+
FUNCTION AcentoHTML(cStr,lAnsi,lTudo)

   DEFAULT lAnsi TO .F.,lTudo TO .T.

   IF __ANSI $ cStr
      cStr  := STRTRAN(cStr,__ANSI,"")
      lAnsi := .T.
   ENDIF

/*
   IF lAnsi
      cStr := AnsiToHtml( cStr )
   ELSE
      cStr := OemToHtml( cStr )
   ENDIF
*/
   IF !lTudo
      cStr := STRTRAN(cStr,"&amp;","&")
      cStr := STRTRAN(cStr,"&lt;" ,"<")
      cStr := STRTRAN(cStr,"&gt;" ,">")
   ENDIF

RETURN cStr


*+ EOF: ACENTO.PRG

#include "hbclass.ch"
#include "common.ch"

#command DEFAULT <param> := <val> [, <paramn> := <valn> ];
=> ;
         <param> := IIF(<param> = NIL, <val>, <param> ) ;
         [; <paramn> := IIF(<paramn> = NIL, <valn>, <paramn> ) ]

#DEFINE OLECMDID_PRINT 6
#DEFINE OLECMDEXECOPT_PROMPTUSER 1
#DEFINE LECMDEXECOPT_DONTPROMPTUSER 2

#DEFINE OLECMDF_SUPPORTED 1
#DEFINE OLECMDF_ENABLED 2

#DEFINE READYSTATE_COMPLETE 4
#DEFINE MAX_TIME 30

#define HKEY_LOCAL_MACHINE  0
#define HKEY_CLASSES_ROOT   1
#define HKEY_CURRENT_USER   2
#define HKEY_CURRENT_CONFIG 3
#define HKEY_LOCAL_MACHINE  4
#define HKEY_USERS          5

#define VERSION             "1.0.01"
/*
STATIC IEHeader
STATIC IEFooter
STATIC IEMarginBottom
STATIC IEMarginLeft
STATIC IEMarginRight
STATIC IEMarginTop
STATIC IEKey  := "Software\Microsoft\Internet Explorer\PageSetup"

STATIC WB
STATIC PR

STATIC HP
*/
//--------------------------------------------------------------------------------------------//
FUNCTION PrintHTML(cURL,cPrinter,lPrevIew,lPromptPrint,lPrintHtml,cHeader,cFooter)

   DEFAULT lPrintHtml   := .T.
   DEFAULT lPreview     := .F.
   DEFAULT lPromptPrint := .F.
   DEFAULT cPrinter     := GetDefaultPrinter()
   DEFAULT cFooter      := ""
   DEFAULT cHeader      := ""

   IF (HP==NIL)
      HP := HTMLPRINT():NEW()
   ENDIF

   HP:PrintUrl     := cURL
   HP:lPreview     := lPreview
   HP:lPromptPrint := lPromptPrint
   HP:lPrintHtml   := lPrintHtml
   HP:PrinterName  := cPrinter
   HP:Footer       := cFooter
   HP:Header       := cHeader

   HP:Print()
   HP:Close()

RETURN .T.
//--------------------------------------------------------------------------------------------//

CLASS HTMLPRINT

   DATA PrinterName
   DATA Orientation            //TO DO  to implement
   DATA Copies                 //TO DO  to implement
   DATA Key  PROTECTED         //TO DO  to implement
   DATA Header
   DATA Footer
   DATA BackGround             //TO DO  to implement
   DATA MarginButtom
   DATA MarginLeft
   DATA MarginTop
   DATA MarginRight
   DATA MarginMeasure          //TO DO  to implement
   DATA PaperSize              //TO DO  to implement
   DATA PrintUrl

   DATA lPreview
   DATA lPromptPrint
   DATA lPrintHtml

   DATA PrintDefault INIT GetDefaultPrinter() PROTECTED

   METHOD New() CONSTRUCTOR
   METHOD Print()
   METHOD savePrintSetup() PROTECTED
   METHOD restorePrintSetup() PROTECTED
   METHOD changePrintSetup PROTECTED
   METHOD Close()

ENDCLASS

//--------------------------------------------------------------------------------------------//

METHOD New() CLASS HTMLPRINT

   StartObjectWs()
   StartObjectPr()

   ::savePrintSetup()

RETURN Self

//--------------------------------------------------------------------------------------------//
METHOD Print() CLASS HTMLPRINT

   LOCAL lnStarted        && Seconds started for the document
   LOCAL lnWaiting   := 0 && Seconds waiting for the document to load

   DEFAULT ::PrinterName  := ::PrintDefault
   DEFAULT ::Orientation  := 2
   DEFAULT ::Copies       := 1
   DEFAULT ::Footer       := ""
   DEFAULT ::Header       := ""
   DEFAULT ::MarginButtom  := IEMarginBottom
   DEFAULT ::MarginLeft    := IEMarginLeft
   DEFAULT ::MarginTop     := IEMarginTop
   DEFAULT ::MarginRight   := IEMarginRight
   DEFAULT ::MarginMeasure := 1
   DEFAULT ::PaperSize     := 9

   DEFAULT ::lPreview     := .F.
   DEFAULT ::lPromptPrint := .F.
   DEFAULT ::lPrintHtml   := .T.

   lnStarted := SECONDS()

   IF ::PrintUrl != NIL

      // Configura impressora  seta impressora como padrão
      IF ::lPrintHtml
         TRY
            IF ::PrintDefault <> ::PrinterName
//               PR:AddWindowsPrinterConnection(::PrinterName)
               PR:SetDefaultPrinter(::PrinterName)
            ENDIF
         CATCH
            RETURN Throw(ErrorNew( "HTMLPrint", 0, 0, ProcName(),"Não foi possivel mapear impressora !"))
         END
      ENDIF

      ::changePrintSetup()

      WB:Visible    := ::lPreview
      WB:Navigate(::PrintUrl)

      WHILE WB:Readystate <> READYSTATE_COMPLETE .OR. lnWaiting >= MAX_TIME
         lnWaiting = Seconds() - lnStarted
      ENDDO

      WHILE WB:QueryStatusWB(OLECMDID_PRINT) != (OLECMDF_SUPPORTED + OLECMDF_ENABLED)
      ENDDO

      // Imprime ou Não
      IF ::lPrintHtml
        WB:ExecWB(OLECMDID_PRINT, If(::lPromptPrint, OLECMDEXECOPT_PROMPTUSER, LECMDEXECOPT_DONTPROMPTUSER) )
      ENDIF

   ELSE
      RETURN .F.
   ENDIF

RETURN .T.

//--------------------------------------------------------------------------------------------//
METHOD savePrintSetup() CLASS HTMLPRINT

   // Salva o que está definido como padrão
   IEFooter       := getRegistry( HKEY_CURRENT_USER , IEKey, "footer")
   IEHeader       := getRegistry( HKEY_CURRENT_USER , IEKey, "header")
   IEMarginBottom := getRegistry( HKEY_CURRENT_USER , IEKey, "margin_bottom")
   IEMarginLeft   := getRegistry( HKEY_CURRENT_USER , IEKey , "margin_left")
   IEMarginRight  := getRegistry( HKEY_CURRENT_USER , IEKey , "margin_right")
   IEMarginTop    := getRegistry( HKEY_CURRENT_USER , IEKey, "margin_top")

RETURN NIL

//--------------------------------------------------------------------------------------------//
METHOD changePrintSetup() CLASS HTMLPRINT

   SetRegistry(HKEY_CURRENT_USER , IEKey , "footer",::Footer)
   SetRegistry(HKEY_CURRENT_USER , IEKey , "header",::Header)
   SetRegistry(HKEY_CURRENT_USER , IEKey , "margin_bottom",::MarginButtom)
   SetRegistry(HKEY_CURRENT_USER , IEKey , "margin_left",::MarginLeft)
   SetRegistry(HKEY_CURRENT_USER , IEKey , "margin_right",::MarginRight)
   SetRegistry(HKEY_CURRENT_USER , IEKey , "margin_top",::MarginTop)

RETURN .T.

//--------------------------------------------------------------------------------------------//
METHOD restorePrintSetup() CLASS HTMLPRINT

   IF ( Empty(IEFooter) .Or. IEFooter == NIL )
      IEFooter := "&u&b&d"
   ENDIF

   IF ( Empty(IEHeader) .Or. IEFooter == NIL )
      IEHeader := "&w&bPage &p of &P"
   ENDIF

   SetRegistry(HKEY_CURRENT_USER , IEKey , "footer",IEFooter)
   SetRegistry(HKEY_CURRENT_USER , IEKey , "header",IEHeader)
   SetRegistry(HKEY_CURRENT_USER , IEKey , "margin_bottom",IEMarginBottom)
   SetRegistry(HKEY_CURRENT_USER , IEKey , "margin_left",IEMarginLeft)
   SetRegistry(HKEY_CURRENT_USER , IEKey , "margin_right",IEMarginRight)
   SetRegistry(HKEY_CURRENT_USER , IEKey , "margin_top",IEMarginTop)

RETURN .T.

//--------------------------------------------------------------------------------------------//
METHOD close() CLASS HTMLPRINT

   // Restaura impressora se for o caso.
   PR:SetDefaultPrinter(::PrintDefault)
   ::restorePrintSetup()

   WB := NIL
   PR := NIL
   HP := NIL

RETURN NIL

//--------------------------------------------------------------------------------------------//
STATIC FUNCTION startObjectWS()

   TRY
      WB    := GetActiveObject( "InternetExplorer.Application" )
   CATCH
      TRY
         WB := CreateObject( "InternetExplorer.Application" )
      CATCH
         RETURN Throw(ErrorNew( "HTMLPrint", 0, 0, ProcName(),"ERROR! IExplorer not avialable. [" + Ole2TxtError()+ "]" ))
      END
   END

RETURN .T.

//--------------------------------------------------------------------------------------------//
STATIC FUNCTION startObjectPR()

   TRY
     PR := GetActiveObject("WScript.Network")
   CATCH
     TRY
       PR := CreateObject("WScript.Network")
     CATCH
       RETURN Throw(ErrorNew( "HTMLPrint", 0, 0, ProcName(),"ERROR! Printer network not avialable. [" + Ole2TxtError() + "]"))
     END
   END

RETURN .T.

/*
EOF
*/

//---------------------------------------------------------------------------//
/*
FUNCTION TWEB()

   StartObjectWs()

   PUBLICVAR("OIE")

   OIE := getWB()

RETURN OIE
*/
//---------------------------------------------------------------------------//
FUNCTION getHP()
RETURN HP

//---------------------------------------------------------------------------//
FUNCTION getWB
RETURN WB

//--------------------------------------------------------------------------//
FUNCTION HtmlPrintVersion()
RETURN VERSION


//
// $Id: inifiles.prg,v 1.1 2007/08/02 00:51:33 masturm Exp $
//
#define CRLF (Chr(13) + Chr(10))

function TIniFile()
   static oClass

   if oClass == nil
      oClass := HBClass():New( 'TINIFILE' ) // starts a new class definition

      oClass:AddData( 'FileName' )           // define this class objects datas
      oClass:AddData( 'Contents' )

      oClass:AddMethod( 'New',  @New() )  // define this class objects methods
      oClass:AddMethod( 'ReadString', @ReadString() )
      oClass:AddMethod( 'WriteString', @WriteString() )
      oClass:AddMethod( 'ReadNumber', @ReadNumber() )
      oClass:AddMethod( 'WriteNumber', @WriteNumber() )
      oClass:AddMethod( 'ReadDate', @ReadDate() )
      oClass:AddMethod( 'WriteDate', @WriteDate() )
      oClass:AddMethod( 'ReadBool', @ReadBool() )
      oClass:AddMethod( 'WriteBool', @WriteBool() )
      oClass:AddMethod( 'ReadSection', @ReadSection() )
      oClass:AddMethod( 'ReadSections', @ReadSections() )
      oClass:AddMethod( 'DeleteKey', @DeleteKey() )
      oClass:AddMethod( 'EraseSection', @EraseSection() )
      oClass:AddMethod( 'UpdateFile', @UpdateFile() )

      oClass:Create()                     // builds this class
   endif
return oClass:Instance()                  // builds an object of this class

static function New(cFileName)
   local Self := QSelf()
   local Done, hFile, cFile, cLine, cIdent, nPos
   local CurrArray

   if empty(cFileName)
      // raise an error?
      outerr('No filename passed to TIniFile():New()')
      return nil

   else
      ::FileName := cFilename
      ::Contents := {}
      CurrArray := ::Contents

      if File(cFileName)
         hFile := fopen(cFilename, 0)

      else
         hFile := fcreate(cFilename)
      endif

      cLine := ''
      Done := .f.
      while !Done
         cFile := space(256)
         Done := (fread(hFile, @cFile, 256) <= 0)

         cFile := strtran(cFile, chr(10), '') // so we can just search for CHR(13)

         // prepend last read
         cFile := cLine + cFile
         while !empty(cFile)
            if (nPos := at(chr(13), cFile)) > 0
               cLine := left(cFile, nPos - 1)
               cFile := substr(cFile, nPos + 1)

               if !empty(cLine)
                  if Left(cLine, 1) == '[' // new section
                     if (nPos := At(']', cLine)) > 1
                        cLine := substr(cLine, 2, nPos - 2);

                     else
                        cLine := substr(cLine, 2)
                     endif

                     AAdd(::Contents, { cLine, { /* this will be CurrArray */ } } )
                     CurrArray := ::Contents[Len(::Contents)][2]

                  elseif Left(cLine, 1) == ';' // preserve comments
                     AAdd( CurrArray, { NIL, cLine } )

                  else
                     if (nPos := At('=', cLine)) > 0
                        cIdent := Left(cLine, nPos - 1)
                        cLine := SubStr(cLine, nPos + 1)

                        AAdd( CurrArray, { cIdent, cLine } )

                     else
                        AAdd( CurrArray, { cLine, '' } )
                     endif
                  endif
                  cLine := '' // to stop prepend later on
               endif

            else
               cLine := cFile
               cFile := ''
            endif
         end
      end

      fclose(hFile)
   endif
return Self

static function ReadString(cSection, cIdent, cDefault)
   local Self := QSelf()
   local cResult := cDefault
   local i, j, cFind

   if Empty(cSection)
      cFind := lower(cIdent)
      j := AScan( ::Contents, {|x| valtype(x[1]) == 'C' .and. lower(x[1]) == cFind .and. ValType(x[2]) == 'C'} )

      if j > 0
          cResult := ::Contents[j][2]
      endif

   else
      cFind := lower(cSection)
      i := AScan( ::Contents, {|x| valtype(x[1]) == 'C' .and. lower(x[1]) == cFind} )

      if i > 0
         cFind := lower(cIdent)
         j := AScan( ::Contents[i][2], {|x| valtype(x[1]) == 'C' .and. lower(x[1]) == cFind} )

         if j > 0
            cResult := ::Contents[i][2][j][2]
         endif
      endif
   endif
return cResult

static procedure WriteString(cSection, cIdent, cString)
   local Self := QSelf()
   local i, j, cFind

   if Empty(cIdent)
      outerr('Must specify an identifier')

   elseif Empty(cSection)
      cFind := lower(cIdent)
      j := AScan( ::Contents, {|x| valtype(x[1]) == 'C' .and. lower(x[1]) == cFind .and. ValType(x[2]) == 'C'} )

      if j > 0
         ::Contents[j][2] := cString

      else
         AAdd(::Contents, nil)
         AIns(::Contents, 1)
         ::Contents[1] := {cIdent, cString}
      endif

   else
      cFind := lower(cSection)
      if (i := AScan( ::Contents, {|x| valtype(x[1]) == 'C' .and. lower(x[1]) == cFind .and. ValType(x[2]) == 'A'})) > 0
         cFind := lower(cIdent)
         j := AScan( ::Contents[i][2], {|x| valtype(x[1]) == 'C' .and. lower(x[1]) == cFind} )

         if j > 0
            ::Contents[i][2][j][2] := cString

         else
            AAdd( ::Contents[i][2], {cIdent, cString} )
         endif

      else
         AAdd( ::Contents, {cSection, {{cIdent, cString}}} )
      endif
   endif
return

static function ReadNumber(cSection, cIdent, nDefault)
   local Self := QSelf()
return Val( ::ReadString(cSection, cIdent, str(nDefault)) )

static procedure WriteNumber(cSection, cIdent, nNumber)
   local Self := QSelf()

   ::WriteString( cSection, cIdent, alltrim(str(nNumber)) )
return

static function ReadDate(cSection, cIdent, dDefault)
   local Self := QSelf()
return SToD( ::ReadString(cSection, cIdent, DToS(dDefault)) )

static procedure WriteDate(cSection, cIdent, dDate)
   local Self := QSelf()

   ::WriteString( cSection, cIdent, DToS(dDate) )
return

static function ReadBool(cSection, cIdent, lDefault)
   local Self := QSelf()
   local cDefault := Iif( lDefault, '.t.', '.f.' )

return ::ReadString(cSection, cIdent, cDefault) == '.t.'

static procedure WriteBool(cSection, cIdent, lBool)
   local Self := QSelf()

   ::WriteString( cSection, cIdent, Iif(lBool, '.t.', '.f.') )
return

static procedure DeleteKey(cSection, cIdent)
   local Self := QSelf()
   local i, j

   cSection := lower(cSection)
   i := AScan( ::Contents, {|x| valtype(x[1]) == 'C' .and. lower(x[1]) == cSection} )

   if i > 0
      cIdent := lower(cIdent)
      j := AScan( ::Contents[i][2], {|x| valtype(x[1]) == 'C' .and. lower(x[1]) == cIdent} )

      ADel( ::Contents[i][2], j )
      ASize( ::Contents[i][2], Len(::Contents[i][2]) - 1 )
   endif
return

static procedure EraseSection(cSection)
   local Self := QSelf()
   local i

   if Empty(cSection)
      while (i := AScan( ::Contents, {|x| valtype(x[1]) == 'C' .and. ValType(x[2]) == 'C'})) > 0
         ADel( ::Contents, i )
         ASize( ::Contents, len(::Contents) - 1 )
      end

   else
      cSection := lower(cSection)
      if (i := AScan( ::Contents, {|x| valtype(x[1]) == 'C' .and. lower(x[1]) == cSection .and. ValType(x[2]) == 'A'})) > 0
         ADel( ::Contents, i )
         ASize( ::Contents, Len(::Contents) - 1 )
      endif
   endif
return

static function ReadSection(cSection)
   local Self := QSelf()
   local i, j, aSection := {}

   if Empty(cSection)
      for i := 1 to len(::Contents)
         if valtype(::Contents[i][1]) == 'C' .and. valtype(::Contents[i][2]) == 'C'
            aadd(aSection, ::Contents[i][1])
         endif
      next

   else
      cSection := lower(cSection)
      if (i := AScan( ::Contents, {|x| valtype(x[1]) == 'C' .and. x[1] == cSection .and. ValType(x[2]) == 'A'})) > 0

         for j := 1 to Len(::Contents[i][2])

            if ::Contents[i][2][j][1] <> NIL
               AAdd(aSection, ::Contents[i][2][j][1])
            endif
         next
      endif
   endif
return aSection

static function ReadSections()
   local Self := QSelf()
   local i, aSections := {}

   for i := 1 to Len(::Contents)

      if ValType(::Contents[i][2]) == 'A'
         AAdd(aSections, ::Contents[i][1])
      endif
   next
return aSections

static procedure UpdateFile()
   local Self := QSelf()
   local i, j, hFile

   hFile := fcreate(::Filename)

   for i := 1 to Len(::Contents)
      if ::Contents[i][1] == NIL
         fwrite(hFile, ::Contents[i][2] + Chr(13) + Chr(10))

      elseif ValType(::Contents[i][2]) == 'A'
         fwrite(hFile, '[' + ::Contents[i][1] + ']' + Chr(13) + Chr(10))
         for j := 1 to Len(::Contents[i][2])

            if ::Contents[i][2][j][1] == NIL
               fwrite(hFile, ::Contents[i][2][j][2] + Chr(13) + Chr(10))

            else
               fwrite(hFile, ::Contents[i][2][j][1] + '=' + ::Contents[i][2][j][2] + Chr(13) + Chr(10))
            endif
         next
         fwrite(hFile, Chr(13) + Chr(10))

      elseif ValType(::Contents[i][2]) == 'C'
         fwrite(hFile, ::Contents[i][1] + '=' + ::Contents[i][2] + Chr(13) + Chr(10))

      endif
   next
   fclose(hFile)
return



#include "harbourboleto.ch"
#include "hbclass.ch"

//#Translate StoD(<p>) => CTOD(RIGHT(<p>, 2) + "/" + SUBSTR(<p>, 5, 2) + "/" + LEFT(<p>, 4))

#DEFINE dDataBase CTOD("07/10/1997")

CLASS oBoleto

//   DATA cNumCli         INIT ""  // Numero do cliente no Cód. Barras - 409-Unibanco Cob. Especial (6 posiçoes + DV)
//   DATA cNumRefCli      INIT ""  // Numero de Referência Cliente     - 409-Unibanco Cob. Especial (15 posicoes)
   DATA Modelo    INIT ""
   DATA AuxModelo INIT ""          // Se Necessario, Auxiliar no Controle de Modelo do Boleto
   DATA Bolhtm    INIT ""
   DATA Destino   INIT ""
   DATA nHandle   INIT 0 PROTECTED // link - Arquivo do boleto (FCREATE)
   DATA NomeHtm   INIT ""
   DATA HtmEdit   INIT GETENV("ProgramFiles") // o Win 98 nao tem esta variavel !!!
   DATA cImageLnk INIT ""          // Funcao ::merge troca a variavel pelo diretorio no bol.htm
   DATA lPreview  INIT .T.
   DATA lAnsi     INIT .T.
   DATA lBoleto   INIT .T.
   DATA lRemessa  INIT .T.
   DATA oRem      INIT ""

   DATA cLocalPgto  INIT ""
   DATA Cedente     INIT ""
   DATA CedenteCNPJ INIT ""

   DATA Avalista        INIT ""
   DATA cAvalCodBco     INIT ""
   DATA cAvalNumAgencia INIT ""
   DATA cAvalNumCC      INIT ""
   DATA cAvalDvAgencia  INIT ""
   DATA cAvalDvCC       INIT ""

   DATA SACADO      INIT ""
   DATA ENDERECO    INIT ""
   DATA COMPLEMENTO INIT ""
   DATA BAIRRO      INIT ""
   DATA CIDADE      INIT ""
   DATA ESTADO      INIT ""
   DATA ENDERECO1   INIT "" READONLY
   DATA ENDERECO2   INIT "" READONLY
   DATA CEP         INIT ""

   DATA CNPJ         INIT ""
   DATA cCNPJ        INIT "" READONLY
   DATA cCPF         INIT "" READONLY
   DATA TpCarteira   INIT "" READONLY
   DATA EspecieTit   INIT "01"
   DATA cTipoCob     INIT ""
   DATA ACEITE       INIT "N"
   DATA INSTRUCOES   INIT ""
   DATA INSTRUCOES2  INIT ""
   DATA DtVenc       INIT CTOD("")
   DATA DtEmis       INIT DATE()
   DATA cCodBco      INIT ""
   DATA cDvBco       INIT ""         // Digito Verificador - Banco
   DATA cNomeBco     INIT ""
   DATA cNumAgencia  INIT ""
   DATA cDvAgencia   INIT ""         // Digito Verificador - Agencia
   DATA cNumCC       INIT ""
   DATA cDvCC        INIT ""         // Digito Verificador - Conta Corrente
   DATA cDvAgCC      INIT ""         // Digito Verificador - Agência/Conta Corrente
   DATA cCarteira    INIT "6"
   DATA cNossoNumero INIT ""
   DATA cNumDoc      INIT ""
   DATA cTipoMoeda   INIT "9"
   DATA cCDPF        INIT "0"        // Codigo Convenio/Prefixo utilizado por alguns Bancos para identificar o Cliente BB,Unibanco,Bradesco
   DATA cDvCDPF      INIT ""         // Digito Verificador do CDPF, usado pela Caixa //*FJF* - 28/09/09
   DATA cDGNN        INIT ""
   DATA nDiasProt    INIT 0          // Numero de dias p/ protesto
   DATA nValor       INIT 0
   DATA nMulta       INIT 0          // % Multa - em caso de atraso. No boleto, é mostrado como Valor
   DATA nMora        INIT 0          // % Mora diária a ser cobrado por dia de atraso
   DATA nDescDia     INIT 0          // % Desconto Diário (pagamento antes do vencimento)
   DATA nValMulta    INIT 0 READONLY // Valor - Multa - em caso de atraso. No boleto, é mostrado como Valor
   DATA nValMora     INIT 0 READONLY // Valor - Mora diária a ser cobrado por dia de atraso
   DATA nValDescDia  INIT 0 READONLY // Valor - Desconto Diário (pagamento antes do vencimento)

   DATA nBoletos     INIT 0 READONLY // Numero de Boletos Impressos
   DATA nBolsPag     INIT 1          // Numero de Boletos por Pagina

   METHOD New(cBco,cLocalPg) CONSTRUCTOR

   METHOD OPEN(cArq,cPasta,cArqRem,cPastaRem,nNumRemessa,CNAB400)

   METHOD CLOSE()

   METHOD ERASE()

   METHOD Merge(cCampo,cConteudo,lTudo)

   METHOD Execute()

   METHOD Remessa(lAdd,cArqRem,cPastaRem,nNumRemessa,CNAB400)

   METHOD PRINT(lPreview,lPromptPrint,cPrinter)

   METHOD EJECT()

   METHOD isRegistrada()

   METHOD SetNomeRem(cArq)

ENDCLASS

   /* -------------------------------------------------------------------------- */

METHOD new(cBco,cLocalPg) CLASS oBoleto

   LOCAL lFem := .F.
   DEFAULT cBco TO "237"

#ifndef __PLATFORM__Linux
   IF EMPTY(::HtmEdit)
      ::HtmEdit := "C:\Arquivos de programas"               // se algum cliente tiver Windows em ingles ...
   ENDIF
   ::HtmEdit += "\Internet Explorer\iexplore.exe"
#endif

   DO CASE
      CASE cBco == "001"
         ::cDvBco   := "9"
         ::cNomeBco := "Banco do Brasil"
           DEFAULT cLocalPg TO "Pagável em Qualquer Banco Até o Vencimento"
      CASE cBco == "008"
         ::cDvBco   := "6"
         ::cNomeBco := "Santander Meridional"
      CASE cBco == "033"
         ::cDvBco   := "7"
         ::cNomeBco := "Santander Banespa"
      CASE cBco == "104"
         ::cDvBco   := "0"
         ::cNomeBco := "Caixa"
         //::lRemessa := .F. // Implementado 30/10/09 ( Padrao SIGCB Caixa ), by SysTux (Toninho Silva), systux@yahoo.com.br, 30/10/09
         lFem := .T.
         //DEFAULT cLocalPg TO "PREFERENCIALMENTE NAS CASAS LOTÉRICAS E AGÊNCIAS DA CAIXA"
         DEFAULT cLocalPg TO "CASAS LOTÉRICAS, AGÊNCIAS DA CAIXA E REDE BANCÁRIA, APÓS VENC. SOMENTE NA CAIXA"
      CASE cBco == "237"
         ::cDvBco   := "2"
         ::cNomeBco := "Bradesco"
      CASE cBco == "244"
         ::cDvBco   := "5"
         ::cNomeBco := "Cidade"
         ::lRemessa := .F.              // falta implementar no oRemessa
      CASE cBco == "341"
         ::cDvBco   := "7"
         ::cNomeBco := "Itaú"+__ANSI
      CASE cBco == "353"
         ::cDvBco   := "0"
         ::cNomeBco := "Santander"
      CASE cBco == "356"
         ::cDvBco   := "5"
         ::cNomeBco := "Real"
      CASE cBco == "399"
         ::cDvBco   := "9"
         ::cNomeBco := "HSBC"
      CASE cBco == "409"
         ::cDvBco   := "0"
         ::cNomeBco := "Unibanco"
      CASE cBco == "422"
         ::cDvBco     := "7"
         ::cNomeBco   := "Safra"
         ::EspecieTit := "DS"
      CASE cBco == "739"
         ::cDvBco   := "7"
         ::cNomeBco := "Banco BGN"
   ENDCASE

   DEFAULT cLocalPg TO "Até o vencimento, pagável em qualquer banco. Após o vencimento, em qualquer"+;
           " agência d"+IIF(lFem,"a","o")+" "+::cNomeBco+;
           IIF(cBco == "237"," ou Banco Postal","")+"."+__ANSI

   ::cLocalPgto := cLocalPg
   ::cCodBco    := cBco

RETURN Self

/* -------------------------------------------------------------------------- */

METHOD OPEN(cArq,cPasta,cArqRem,cPastaRem,nNumRemessa,CNAB400) CLASS oBoleto

   LOCAL nAux

   DEFAULT cArq TO "BOL"+SUBSTR(TIME(),4,2)+SUBSTR(TIME(),7,2),;
                                    cPasta TO LEFT(hb_cmdargargv(),RAT(HB_OSpathseparator(),hb_cmdargargv())),;
                                    cPastaRem TO cPasta,;
                                    CNAB400 TO .T.

   IF EMPTY(::Destino)
      cPasta := ALLTRIM(cPasta)
      IF RIGHT(cPasta,1) != HB_OSpathseparator()
         cPasta += HB_OSpathseparator()
      ENDIF
      ::Destino := cPasta+"boleto"+HB_OSpathseparator()
   ENDIF
   IF EMPTY(::NomeHtm)
      ::NomeHtm := cArq
   ENDIF
   IF !("htm" $ LOWER(RIGHT(::NomeHtm,4)))
      ::NomeHtm += ".htm"
   ENDIF

   //IF EMPTY(::cDvBco) .OR. !FILE(::Destino + "logo" + ::cCodBco + ".gif")

   IF EMPTY(::cDvBco)                   // Isto e suficiente. No meu caso, os gifs estao hospedados na web.
      ::lBoleto := .F.
   ENDIF

   nAux := AT("-",::cNumCC)
   IF nAux > 0 .AND. EMPTY(::cDVCC)
      ::cDVCC  := TRIM(SUBSTR(::cNumCC,nAux+1))             // Digito da conta
      ::cNumCC := LEFT(::cNumCC,nAux - 1)                   // Numero da conta
   ENDIF
   nAux := AT("-",::cNumAgencia)
   IF nAux > 0 .AND. EMPTY(::cDVAgencia)
      ::cDVAgencia  := TRIM(SUBSTR(::cNumAgencia,nAux+1))   // Digito da Agencia
      ::cNumAgencia := LEFT(::cNumAgencia,nAux - 1)         // Numero da Agencia
   ENDIF

   IF !EMPTY(::cAvalCodBco)
      nAux := AT("-",::cAvalNumCC)
      IF nAux > 0 .AND. EMPTY(::cAvalDVCC)
         ::cAvalDVCC  := TRIM(SUBSTR(::cAvalNumCC,nAux+1))  // Digito da conta
         ::cAvalNumCC := LEFT(::cAvalNumCC,nAux - 1)        // Numero da conta
      ENDIF
      nAux := AT("-",::cAvalNumAgencia)
      IF nAux > 0 .AND. EMPTY(::cAvalDVAgencia)
         ::cAvalDVAgencia  := TRIM(SUBSTR(::cAvalNumAgencia,nAux+1))            // Digito da Agencia
         ::cAvalNumAgencia := LEFT(::cAvalNumAgencia,nAux - 1)                  // Numero da Agencia
      ENDIF
   ENDIF

   nAux := AT("-",::cCDPF)              //*FJF* - 28/09/09
   IF nAux > 0 .AND. EMPTY(::cDvCDPF)   //*FJF* - 28/09/09
      ::cDvCDPF := TRIM(SUBSTR(::cCDPF,nAux+1))             // Digito do CDPF
      ::cCDPF   := LEFT(::cCDPF,nAux - 1)                   // CDPF
   ENDIF

   IF ::lBoleto

      ::AuxModelo := ::Modelo

      IF EMPTY(::Modelo)

         IF FILE(::Destino+"bol"+::cCodBco+".htm")
            ::Modelo := MEMOREAD(::Destino+"bol"+::cCodBco+".htm")
         ELSEIF FILE(::Destino+"boleto"+::cCodBco+".htm")   // isto ‚ para manter a compatibilidade
            ::Modelo := MEMOREAD(::Destino+"boleto"+::cCodBco+".htm")           // com a primeira versao
         ELSE
            ::Modelo := MEMOREAD(::Destino+"bol"+".htm")
         ENDIF

      ELSE

         IF FILE(LOWER(::Destino+::Modelo+::cCodBco+".htm"))
            ::Modelo := MEMOREAD(LOWER(::Destino+::Modelo+::cCodBco+".htm"))
         ELSE
            ::Modelo := "Modelo do Boleto < "+LOWER(::Modelo)+" > Nao Encontrado!"
         ENDIF

      ENDIF

      IF !IsDirectory(::Destino)
         MAKEDIR(ALLTRIM(::Destino))
      ENDIF

      ::nHandle := FCREATE(::Destino+::Nomehtm)

      FWRITE(Self:nHandle,'<html>')
      FWRITE(Self:nHandle,'<head>')
      FWRITE(Self:nHandle,'<meta http-equiv=Content-Type content="text/html; charset=iso-8859-1">')
      FWRITE(Self:nHandle,'<title>Boleto</title>')
      FWRITE(Self:nHandle,'<style>')
      FWRITE(Self:nHandle,'DIV {COLOR: #000000; FONT-FAMILY: Arial; LINE-HEIGHT: 1; MARGIN: 0px}')
      FWRITE(Self:nHandle,'DIV.Tamanho4 {FONT-SIZE: 4pt}')  // acrecentei estes estilos devido ao
      FWRITE(Self:nHandle,'DIV.Tamanho6 {FONT-SIZE: 6pt}')  // novo modelo de boleto
      FWRITE(Self:nHandle,'DIV.Tamanho7 {FONT-SIZE: 7pt; LINE-HEIGHT: 8pt}')
      FWRITE(Self:nHandle,'DIV.Tamanho8 {FONT-SIZE: 8pt; LINE-HEIGHT: 9pt}')
      FWRITE(Self:nHandle,'DIV.Tamanho9 {FONT-SIZE: 9pt}')
      FWRITE(Self:nHandle,'DIV.Tamanho10 {FONT-SIZE: 10pt}')
      FWRITE(Self:nHandle,'DIV.Tamanho11 {FONT-SIZE: 11pt}')
      FWRITE(Self:nHandle,'.Section1 {page:Section1;}')
      FWRITE(Self:nHandle,'body {margin-left: 25px;}')
      FWRITE(Self:nHandle,'.pagebreak {page-break-before:always}')
      //      FWRITE(Self:nHandle, [td {border: 1px solid #666666;}] )
      FWRITE(Self:nHandle,'td {border: 1px solid #000000;}')
      FWRITE(Self:nHandle,'</style>')

      FWRITE(Self:nHandle,'<script language="JavaScript1.2" type="text/JavaScript1.2">'+CRLF)
      FWRITE(Self:nHandle,'<!--'+CRLF)
      FWRITE(Self:nHandle,'/* This will Automatically Maximize The Browser Window*/'+CRLF)
      FWRITE(Self:nHandle,'window.resizeTo(800,screen.availHeight);'+CRLF)
      FWRITE(Self:nHandle,'window.moveTo((screen.availWidth-800)/2,0);'+CRLF)
      FWRITE(Self:nHandle,'self.opener = self;'+CRLF)
      FWRITE(Self:nHandle,'// -->'+CRLF)
      FWRITE(Self:nHandle,'</script>'+CRLF)

      FWRITE(Self:nHandle,'</head>'+CRLF)

      // * Abrir Box de Impressao **

      //Ativar "window.close();" no firefox
      //Na barra de enderecos do firefox, digite: about:config
      //Localize a chave "dom.allow_scripts_to_close_windows", clicar sobre a chave e alterar o valor de <false> para <true>.
      //Feche o firefox e pronto!,
      //by SysTux (Toninho Silva), systux@yahoo.com.br, 30/10/09

      //Fechar Navegador Apos Impressao//
      //FWRITE(Self:nHandle, [<body bgcolor="#FFFFFF" class="Normal" lang=PT-BR onload=" self.print(); window.open('','_parent',''); self.close()">] + CRLF)
      ////

      //FWRITE(Self:nHandle, '<body bgcolor="#FFFFFF" class="Normal" lang=PT-BR >' + CRLF)
      // * xx **
      //Nao Fechar Navegador
      //FWRITE(Self:nHandle, '<body bgcolor="#FFFFFF" class="Normal" lang=PT-BR onload=">' + CRLF)

      //FWRITE(Self:nHandle, '</head>' )
      //      FWRITE(Self:nHandle, [<body bgcolor="#FFFFFF" class="Normal" lang=PT-BR onload=" self.print(); window.open('','_parent',''); self.close()">] )
      FWRITE(Self:nHandle,'<body bgcolor="#FFFFFF" class="Normal" lang=PT-BR'+CRLF)
      FWRITE(Self:nHandle,' onload="')
      FWRITE(Self:nHandle,"alert('Para obter o resultado desejado na impressão do boleto bancário,")
      FWRITE(Self:nHandle," será recomendado imprimir em folha de papel A4 ou Carta\ncom gramatura do papel no mínimo 50g g/m2 (recomendável 75 g/m2) ")
      FWRITE(Self:nHandle," e redefinir as margens de impressão em seu navegador.\nPara isso, siga as instruções\n*  Margens (esquerda, direita, superior e")
      FWRITE(Self:nHandle," inferior): 0mm;\n* Apague todo o texto que aparece nos campos Cabeçalho (Header) e Rodapé (Footer).')")
      //FWRITE(Self:nHandle, [; window.open('','_parent',''); self.print(); self.close()">]+CRLF )
      FWRITE(Self:nHandle,'">'+CRLF)
   ENDIF

   ::Remessa(.F.,cArqRem,cPastaRem,nNumRemessa,CNAB400)

RETURN Self

/* -------------------------------------------------------------------------- */

METHOD CLOSE() CLASS oBoleto

   IF ::lBoleto
      FWRITE(Self:nHandle,"</body></html>")
      FCLOSE(Self:nHandle)
   ENDIF
   IF ::lRemessa
      ::oRem:Close()
   ENDIF

RETURN Self

/* -------------------------------------------------------------------------- */

METHOD Merge(cCampo,cConteudo,lTudo) CLASS oBoleto

   IF EMPTY(cConteudo)
      cConteudo := " "
   ENDIF
   IF ::lBoleto
      cConteudo   := AcentoHtml(ALLTRIM(cConteudo),::lAnsi,lTudo)
      cConteudo   := STRTRAN(cConteudo,CRLF,"<BR>")
      Self:Bolhtm := STRTRAN(Self:Bolhtm,"{"+cCampo+"}",cConteudo)
   ENDIF

RETURN Self

/* -------------------------------------------------------------------------- */

METHOD Execute() CLASS oBoleto

   LOCAL cNsNm
   LOCAL cFatorVenc
   LOCAL cDGCB
   LOCAL cCodBar
   LOCAL nX
   LOCAL nY
   LOCAL cC1RN
   LOCAL cC2RN
   LOCAL cC3RN
   LOCAL cC4RN
   LOCAL cC5RN
   LOCAL cRNCB
   LOCAL cInstr
   LOCAL cCpoLivre   := ""
   LOCAL cAgCC
   LOCAL cCarteira
   LOCAL cNumAgencia
   LOCAL cCVT        := ""
   LOCAL cDataHSBC

   IF ::lBoleto
      IF ::nBoletos > 0
         ::Eject()  // se chegou aqui entao ja teve um boleto
      ENDIF
      ::nBoletos ++
   ENDIF
   ::Bolhtm      := ::Modelo
   ::cNumAgencia := STRZERO(VAL(::cNumAgencia),4)
   //::cNossoNumero:= str(val(::cNossoNumero),,,.t.)

   IF ::nMulta > 0 .OR. ::nMora > 0
      cInstr := "Após vencimento, cobrar "
      IF ::nMulta > 0
         ::nValMulta := iat(::nValor * ::nMulta / 100,2)
         cInstr      += "multa de R$ <B>"+LTRIM(TRANSFORM(::nValMulta,"@E 999,999.99"))+"</B>"
         IF ::nMora > 0
            cInstr += " + "
         ENDIF
      ENDIF
      IF ::nMora > 0
         ::nValMora := iat(::nValor * ::nMora / 100,2)
         cInstr     += " mora de R$ <B>"+LTRIM(TRANSFORM(::nValMora,"@E 999,999.99"))+"</B> por dia de atraso"
      ENDIF
   ENDIF
   IF ::nDescDia > 0
      ::nValDescDia := iat(::nValor * ::nDescDia / 100,2)
   ENDIF
   IF !EMPTY(cInstr) .AND. RIGHT(cInstr,1) != "."
      cInstr += "."
   ENDIF
   IF ::nDiasProt > 0
      cInstr += CRLF+"Sujeito a protesto <B>"+LTRIM(STR(::nDiasProt))+"</B> dia"+IF(::nDiasProt > 1,"s","")+IF(::nDiasProt > 1," úteis"," útil")+;
                                                       " após o vencimento."+__ANSI

      IF ::cCodBco == "104"
         cInstr += CRLF+"Não receber após a data agendada para protesto."
         cInstr += CRLF+"Após vencimento, pagar somente nas agências da CAIXA."
      ENDIF

      cInstr += __ANSI

   ENDIF

   ::INSTRUCOES2 := cInstr
   ::ENDERECO1   := TRIM(::ENDERECO+IIF(EMPTY(::COMPLEMENTO),"",","+::COMPLEMENTO))
   ::ENDERECO2   := TRIM(::BAIRRO)+TRIM(IIF(EMPTY(::CIDADE) .OR. EMPTY(::BAIRRO),""," - ")+::CIDADE)+;
                                 TRIM(IIF(EMPTY(::ESTADO),""," - "+::ESTADO))

   cCarteira   := ::cCarteira
   cNumAgencia := ::cNumAgencia
   cAgcc       := ::cNumAgencia+IIF(EMPTY(::cDvAgencia),"","-"+::cDvAgencia)+"/"+::cNumCC+"-"+::cDvCC

   DO CASE
      CASE ::cCodBco == "001" // Brasil
         IF LEFT( cCarteira, 2) LIKE "(16|18)" // SEM REGISTRO, Carteira com 17 Posicoes Livres Anexo 5 do manual
                                               // alteracao feita pelo Toninho Silva ( SysTux ) <toninho.sp@gmail.com>

            ::cCDPF := STRZERO( VAL( ::cCDPF ), 6 )
            ::cNossoNumero := ::cCDPF + STRZERO( VAL( ::cNossoNumero ), 11 )

            cNsNm := ::cNossoNumero // 17 Posicoes Livres, Sem DV
            cCpoLivre := ::cCDPF + ::cNossoNumero + "21" // (21) Para indicacao do NN com 17 Posicoes Livres

            /* antigamente estava assim
            ::cCDPF        := STRZERO(VAL(::cCDPF),8)
            ::cNossoNumero := STRZERO(VAL(::cNossoNumero),11)
            ::cDGNN        := DC_Mod11(::cCodBco,9,.F.,::cNossoNumero)
            cNsNm          := ::cNossoNumero+"-"+::cDGNN
            cCpoLivre      := ::cNossoNumero+::cNumAgencia+::cCDPF+LEFT(cCarteira,2)
            */
         ELSE
            ::cCDPF        := STRZERO(VAL(::cCDPF),6)
            cCarteira      := STRZERO(VAL(cCarteira),2)
            ::cNumCC       := STRZERO(VAL(::cNumCC),8)
            ::cNossoNumero := STRZERO(VAL(::cNossoNumero),5)
            ::cDGNN        := DC_Mod11(::cCodBco,9,.F.,::cCDPF+::cNossoNumero)
            cNsNm          := TRANSFORM(::cCDPF+::cNossoNumero,"@R 99.999.999.999")+"-"+::cDGNN
            cCpoLivre      := ::cCDPF+::cNossoNumero+cNumAgencia+::cNumCC+cCarteira
         ENDIF
      CASE ::cCodBco LIKE "(008|033|353)"                   //Santander Banespa
         ::cCDPF        := STRZERO(VAL(::cCDPF),7)          // CODIGO FORNECIDO PELO BANCO *** COM DIGITO ***
         ::cNossoNumero := STRZERO(VAL(::cNossoNumero),12)
         ::cDGNN        := DC_Mod11(::cCodBco,9,.F.,::cNossoNumero)
         cNsNm          := ::cNossoNumero+" "+::cDGNN
         cCpoLivre      := "9"+::cCDPF+::cNossoNumero+::cDGNN+"0102"

      CASE ::cCodBco == "104"           // Caixa

         IF ::AuxModelo == "BOL_SIGCB"  // Modelo SIGCB, Padrao da Caixa

            // * Cedente e DV, OK Testado **
            ::cDvCDPF := DC_Mod11(::cCodBco,9,.F.,::cCDPF)
            // * xx **

            // * NossoNumero e DV, OK Testado **
            //cAux_NN := "14"+::cNossoNumero                  // 14 = Modalidade Nosso Numero P/ Cobranca Registrada
            cAux_NN := STRZERO(VAL(::cNossoNumero),11)                  // 14 = Modalidade Nosso Numero P/ Cobranca Registrada
            ::cDGNN := DC_Mod11(::cCodBco,9,.F.,cAux_NN)
            cNsNm   := cAux_NN+::cDGNN
            // * xx **

            cAgcc := ::cNumAgencia+"/"+::cCDPF+"-"+::cDvCDPF

            // * Campo Livre e DV, OK Testado **
            Aux_Livre := ::cCDPF+::cDvCDPF+;
                    SUBSTR(::cNossoNumero,1,3)+"1"+;        // Constante1, (1) Registrada, (2) Sem Registro
                    SUBSTR(::cNossoNumero,4,3)+"4"+;        // Constante2, (4) Emissao Cedente
                    SUBSTR(::cNossoNumero,7,9)
            DG_Livre  := DC_Mod11(::cCodBco,9,.F.,Aux_Livre)
            cCpoLivre := Aux_Livre+DG_Livre
            // * xx *

         ELSE       // Outros

            ::cDvCDPF := DC_Mod11(::cCodBco,9,.F.,::cCDPF)
            ::cNossoNumero := STRZERO(VAL(::cNossoNumero),10)
            cNumAgencia    := STRZERO(VAL(cNumAgencia),04)
            ::cCDPF        := STRZERO(VAL(::cCDPF),06)      // CODIGO FORNECIDO PELO BANCO
            ::cDGNN        := DC_Mod11(::cCodBco,9,.F.,::cNossoNumero)
            cAgcc          := cNumAgencia+"/"+::cCDPF+"-"+::cDvCDPF   //*FJF* - 28/09/09
            cNsNm          := ::cNossoNumero+"-"+::cDGNN    //*FJF* - 28/09/09
            //cNsNm         := TRANSFORM(::cNossoNumero, "@R 9.999.999.999") + "-" + ::cDGNN  //*FJF* - 28/09/09
            Aux_Livre := ::cCDPF+::cDvCDPF+;
                    SUBSTR(::cNossoNumero,1,3)+"1"+;        // Constante1, (1) Registrada, (2) Sem Registro
                    SUBSTR(::cNossoNumero,4,3)+"4"+;        // Constante2, (4) Emissao Cedente
                    SUBSTR(::cNossoNumero,7,9)
            DG_Livre  := DC_Mod11(::cCodBco,9,.F.,Aux_Livre)
            cCpoLivre := Aux_Livre+DG_Livre


            //cCpoLivre := ::cNossoNumero+cNumAgencia+::cCDPF
            DO CASE
               CASE VAL(::cCarteira) == 11
                  cCarteira := "CS"
               CASE VAL(::cCarteira) == 12
                  cCarteira := "CR"
               CASE VAL(::cCarteira) == 14
                  cCarteira := "SR"
               OTHERWISE
                  cCarteira := ::cCarteira
            ENDCASE

         ENDIF

      CASE ::cCodBco == "237"           // Bradesco
         cCarteira   := STRZERO(VAL(cCarteira),3)           // coloquei aqui
         cNumAgencia := STRZERO(VAL(cNumAgencia),4)         // para nao dar 'confusao'
         ::cNumCC    := STRZERO(VAL(::cNumCC),7)
         cAgcc       := ::cNumAgencia+IIF(EMPTY(::cDvAgencia),"","-"+::cDvAgencia)+"/"+::cNumCC+"-"+::cDvCC
         IF ::lBoleto
            IF LEN(::cNossoNumero) < 8
               ::cNossoNumero := cNumAgencia+STRZERO(VAL(::cNossoNumero),7)
            ELSE
               ::cNossoNumero := STRZERO(VAL(::cNossoNumero),11)
            ENDIF
            ::cDGNN := DC_Mod11(::cCodBco,7,.F.,cCarteira+::cNossoNumero)
            //cNsNm     := cCarteira + "/" + cNumAgencia + "/" + ::cNossoNumero + "-" + ::cDGNN
            cNsNm     := cCarteira+"/"+TRANS(::cNossoNumero,"@R 9999/9999999")+"-"+::cDGNN
            cCpoLivre := cNumAgencia+SUBSTR(cCarteira,2,2)+::cNossoNumero+::cNumCC+"0"
         ENDIF

      CASE ::cCodBco LIKE "(341|739)"   // Itaú ou BGN
         cCarteira      := STRZERO(VAL(cCarteira),3)
         ::cNumCC       := STRZERO(VAL(::cNumCC),5)
         ::cNossoNumero := STRZERO(VAL(::cNossoNumero),8)
         IF cCarteira $ "147/"
            ::TpCarteira := "E"
         ELSEIF cCarteira $ "166/"
            ::TpCarteira := "F"
         ELSEIF cCarteira $ "150/"
            ::TpCarteira := "U"
         ELSE
            ::TpCarteira := "I"
         ENDIF
         ::cDGNN   := DC_Mod10(::cCodBco,cNumAgencia+::cNumCC+cCarteira+::cNossoNumero)
         cNsNm     := cCarteira+"/"+::cNossoNumero+"-"+::cDGNN
         cCpoLivre := cCarteira+::cNossoNumero+::cDGNN+cNumAgencia+::cNumCC+::cDvCC+"000"

      CASE ::cCodBco LIKE "(356|275)"   // Real ABN 356 275
         cNumAgencia := STRZERO(VAL(cNumAgencia),4)
         cCarteira   := STRZERO(VAL(cCarteira),2)
         ::cNumCC    := STRZERO(VAL(::cNumCC),7)
         IF EMPTY(::cTipoCob)
            ::cTipoCob := "1"           // Cobranca 1-Simples 5-Escritural
         ENDIF
         IF cCarteira == "20"           // Com Registro
            ::cNossoNumero := STRZERO(VAL(::cNossoNumero),7)
         ELSE       // Sem Registro
            ::cNossoNumero := STRZERO(VAL(::cNossoNumero),13)
         ENDIF
         ::cDGNN := DC_Mod10(::cCodBco,STRZERO(VAL(::cNossoNumero),13)+cNumAgencia+::cNumCC)
         //cNsNm     := cNumAgencia + "/" + ::cNossoNumero + "-" + ::cDGNN
         cNsNm     := ::cNossoNumero    // + "-" + ::cDGNN
         cCpoLivre := cNumAgencia+::cNumCC+::cDGNN+STRZERO(VAL(::cNossoNumero),13)

      CASE ::cCodBco $ "399"            // HSBC
         cDataHSBC := STRZERO(::DtVenc - STOD(STR(YEAR(::DtVenc),4)+"0101"),3)+;
                                      RIGHT(STR(YEAR(::DtVenc),4),1)
         ::cCDPF := STRZERO(VAL(::cCDPF),7)
         cAgcc   := ::cNumAgencia+IF(EMPTY(::cDvAgencia),"","-"+::cDvAgencia)+"/"+::cNumCC+"-"+::cDvCC
         IF cCarteira == "00"           // Com Registro
            ::cNossoNumero := STRZERO(VAL(::cNossoNumero),10)
            ::cDGNN        := DC_Mod11(::cCodBco,7,.T.,::cNossoNumero)
            cNsNm          := ::cNossoNumero+"-"+::cDGNN
            cCpoLivre      := ::cNossoNumero+::cDGNN+STRZERO(VAL(::cNumAgencia),4)+::cNumCC+::cDvCC+"00"+"1"
         ELSE       // Sem Registro
            ::cNossoNumero := cNsNm := STRZERO(VAL(::cNossoNumero),13)
            cCpoLivre      := ::cCDPF+::cNossoNumero+cDataHSBC+"2"
         ENDIF

      CASE ::cCodBco $ "409"  // Unibanco
         cNumAgencia   := STRZERO(VAL(cNumAgencia), 4)
         ::cNumCC      := STRZERO(VAL(::cNumCC), 7)
         ::cNumDoc     := STRZERO(VAL(::cNumDoc), 6)
         cAgcc         := ::cNumAgencia + IIF(EMPTY(::cDvAgencia), "", "-" + ::cDvAgencia) + "/" + ::cNumCC + "-" + ::cDvCC

         // cCVT => Código Transação CVT (409-Unibanco)
         IF TRIM(cCarteira) like "(1|4)"
            ::cNossoNumero:= STRZERO(VAL(::cNossoNumero), 10)
            ::cDGNN       := DC_Mod11(::cCodBco, 9, .F., ::cNossoNumero, .T.)
            cNsNm         := "1/" + ::cNossoNumero + ::cDGNN + "/" + DC_Mod11(::cCodBco, 9, .F., "1" + ::cNossoNumero + ::cDGNN, .T.)
            cCVT      := "Cód. Transação CVT: 5539-5" + __ANSI  // cCVT == "5539-5" => "04"
            cCarteira := "DIRETA"
            //cCpoLivre := "04" + HB_DTOC(::DtVenc,"yymmdd") + cNumAgencia + ::cDvAgencia + STRTRAN(SUBSTR(cNsNm, 3), "/", "")
            cCpoLivre := "04" + SUBSTR(DTOS(::DtVenc), 3, 2) + SUBSTR(DTOS(::DtVenc), 5, 1) // 1o. GRUPO
            cCpoLivre += SUBSTR(DTOS(::DtVenc), 6, 3) + cNumAgencia + ::cDvAgencia + STRTRAN(SUBSTR(cNsNm, 3), "/", "") // 2o. e 3o. GRUPO
         ELSE // 3
            ::cCDPF       := STRZERO(VAL(::cCDPF), 7)
            ::cNossoNumero:= STRZERO(VAL(::cNossoNumero),14)
            ::cDGNN       := DC_Mod11(::cCodBco, 9, .F., ::cNossoNumero, .T.)
            cNsNm     := ::cNossoNumero + "-" + ::cDGNN
            cCVT      := "Cód. Transação CVT: 7744-5" + __ANSI // cCVT == "7744-5" => "5"
            cCarteira := "ESPECIAL"
            cCpoLivre := "5" + ::cCDPF + "00" + ::cNossoNumero + ::cDGNN
         ENDIF

      CASE ::cCodBco == "422"           // Safra
         cCarteira      := STRZERO(VAL(cCarteira),2)
         ::cNumCC       := STRZERO(VAL(::cNumCC),8)
         ::cNossoNumero := STRZERO(VAL(::cNossoNumero),17)
         ::cCDPF        := STRZERO(VAL(::cCDPF),6)
         ::cDGNN        := DC_Mod11(::cCodBco,9,.F.,::cNossoNumero)
         cAgcc          := "0"+::cNumAgencia+"/"+::cNumCC+"-"+::cDvCC
         IF VAL(cCarteira) == 6
            ::cNumDoc := STRZERO(VAL(::cNossoNumero),11)
            cNsNm     := "EXPRESS"
            cCpoLivre := "7"+::cCDPF+::cNossoNumero+"4"
         ELSE
            cNsNm     := "0"+cNumAgencia+"/"+::cNossoNumero+"-"+::cDGNN
            cCpoLivre := "70"+cNumAgencia+::cNumCC+::cDvCC+::cNossoNumero+::cDGNN+"1"
            //            2        4            8           1          8              1       1
         ENDIF
   ENDCASE

   ::Merge("LOGOBANCO","logo"+::cCodBco)
   ::Merge("IMAGELNK",::cImageLnk)
   ::Merge("BANCO",::cCodBco+"-"+::cDvBco)
   ::Merge("LOCALPGTO",::cLocalPgto)
   ::Merge("CEDENTE",::Cedente)
   ::Merge("AVALISTA",::AVALISTA)
   ::Merge("SACADO",::SACADO)
   ::Merge("ENDERECO1",::ENDERECO1)
   ::Merge("ENDERECO2",::ENDERECO2)
   ::Merge("CEP",TRANS(::CEP,"@R 99.999-999"))
   ::Merge("INSTRUCOES",::INSTRUCOES2,.F.)
   ::Merge("TEXTO",::INSTRUCOES)

   ::Merge("VALOR",TRANS(::nValor,"@E 99,999,999.99"))
   ::Merge("NMORA",TRANS(::nMora,"@E 999,999.99"))
   ::Merge("CVT",cCVT)
   ::Merge("AGCC",cAgCC)
   ::Merge("NUMDOC",::cNumDoc)
   ::Merge("CARTEIRA",cCarteira)
   ::Merge("ESPECIETIT",::EspecieTit)
   ::Merge("ACEITE",::Aceite)

   IF VAL(SUBSTR(::CNPJ,10,4)) == 0
      ::cCNPJ := ""
      ::cCPF  := SUBSTR(::CNPJ,1,9)+SUBSTR(::CNPJ,14)
      ::Merge("CNPJ",TRANS(::cCPF,"@R 999.999.999-99"))
   ELSE
      ::cCNPJ := STRZERO(VAL(::CNPJ),14)                    // SUBSTR(::CNPJ, 2)
      ::cCPF  := ""
      ::Merge("CNPJ",TRANS(::cCNPJ,"@R 99.999.999/9999-99"))
   ENDIF

   cFatorVenc := STRZERO(::DtVenc - dDataBase,4)

   // Monta Código de Barras (p/ Banco)
   //ATENCAO(cCpoLivre)
   cDGCB   := DC_Mod11(::cCodBco,9,.T.,::cCodBco+::cTipoMoeda+cFatorVenc+STRZERO(::nValor * 100,10)+cCpoLivre)
   cCodBar := ::cCodBco+::cTipoMoeda+cDGCB+cFatorVenc+STRZERO(::nValor * 100,10)+cCpoLivre
   //ATENCAO(cCodBar)
   //           3           1            1       4                       10                   25

   nY := 0
   FOR nX := 1 TO LEN(cCodBar) STEP 2
      ::Merge(STRZERO(nY ++,2),SUBSTR(cCodBar,nX,2))
   NEXT

   // Monta Representacao Numerica do Codigo de Barras

   // * Campo1 **
   cC1RN := ::cCodBco+::cTipoMoeda+LEFT(cCpoLivre,5)
   cC1RN := cC1RN+DC_Mod10(::cCodBco,cC1RN)

   // * Campo2 **
   cC2RN := SUBSTR(cCpoLivre,6,10)
   cC2RN += DC_Mod10(::cCodBco,cC2RN)

   // * Campo3 **
   cC3RN := SUBSTR(cCpoLivre,16,10)
   cC3RN += DC_Mod10(::cCodBco,cC3RN)

   // * Campo4 **
   cC4RN := cDGCB

   // * Campo5 **
   cC5RN := cFatorVenc+STRZERO(::nValor * 100,10)

   // * Linha Digitavel **
   cRNCB := LEFT(cC1RN,5)+"."+SUBSTR(cC1RN,6)+" "+LEFT(cC2RN,5)+"."+;
                      SUBSTR(cC2RN,6)+" "+LEFT(cC3RN,5)+"."+SUBSTR(cC3RN,6)+" "+cC4RN+" "+cC5RN
   ::Merge("LINDIG",cRNCB)
   // * xx **

   IF ::cCodBco == "104" .AND. ::AuxModelo == "BOL_SIGCB"   // Modelo SIGCB, Padrao da Caixa
/*
      ::Merge("DTVENC",HB_DTOC(::DtVenc,"DD/MM/YY"))
      ::Merge("DATA",HB_DTOC(::DtEmis,"DD/MM/YY"))
      ::Merge("DATAPROC",HB_DTOC(::DtEmis,"DD/MM/YY"))      // Nao sei se aqui deveria ser DATE().
*/
      ::Merge("DTVENC",DTOC(::DtVenc))
      ::Merge("DATA",DTOC(::DtEmis))
      ::Merge("DATAPROC",DTOC(::DtEmis))      // Nao sei se aqui deveria ser DATE().
      ::Merge("NNUMERO",TRAN(cNsNm,"@R 99999999999999999-9"))

   ELSE             // Outros Modelos
/*
      ::Merge("DTVENC",HB_DTOC(::DtVenc,"DD/MM/YYYY"))
      ::Merge("DATA",HB_DTOC(::DtEmis,"DD/MM/YYYY"))
      ::Merge("DATAPROC",HB_DTOC(::DtEmis,"DD/MM/YYYY"))    // Nao sei se aqui deveria ser DATE().
*/
      ::Merge("DTVENC",DTOC(::DtVenc))
      ::Merge("DATA",DTOC(::DtEmis))
      ::Merge("DATAPROC",DTOC(::DtEmis))    // Nao sei se aqui deveria ser DATE().
      ::Merge("NNUMERO",cNsNm)

   ENDIF

   IF ::lBoleto
      FWRITE(Self:nHandle,Self:Bolhtm)
   ENDIF
   ::Remessa(.T.)

RETURN Self

/* -------------------------------------------------------------------------- */

METHOD Remessa(lAdd,cArqRem,cPastaRem,nNumRemessa,CNAB400) CLASS oBoleto

   LOCAL cCodBco
   LOCAL cNumAgencia
   LOCAL cNumCC
   LOCAL cDvAgencia
   LOCAL cDvCC
   IF ::lRemessa
      // Gatilho para Avalista, melhorar depois...
      IF !EMPTY(::cAvalCodBco)
         cCodBco       := ::cCodBco
         cNumAgencia   := ::cNumAgencia
         cNumCC        := ::cNumCC
         cDvAgencia    := ::cDvAgencia
         cDvCC         := ::cDvCC
         ::cCodBco     := ::cAvalCodBco
         ::cNumAgencia := ::cAvalNumAgencia
         ::cNumCC      := ::cAvalNumCC
         ::cDvAgencia  := ::cAvalDvAgencia
         ::cDvCC       := ::cAvalDvCC
      ENDIF
      IF lAdd
         ::oRem:add(Self)
      ELSE
         ::oRem         := oRemessa(IF(EMPTY(::cAvalCodBco),::cCodBco,::cAvalCodBco),nNumRemessa)
         ::oRem:CNAB400 := CNAB400
         ::oRem:Open(Self,cArqRem,cPastaRem)
      ENDIF
      IF !EMPTY(::cAvalCodBco)
         ::cCodBco     := cCodBco
         ::cNumAgencia := cNumAgencia
         ::cNumCC      := cNumCC
         ::cDvAgencia  := cDvAgencia
         ::cDvCC       := cDvCC
      ENDIF
   ENDIF

RETURN Self

/* -------------------------------------------------------------------------- */

METHOD PRINT(lPreview,lPromptPrint,cPrinter) CLASS oBoleto

   DEFAULT lPreview TO ::lPreview,;
           lPromptPrint TO .T.,;
           cPrinter TO ""

#ifdef __PLATFORM__Windows
   DEFAULT cPrinter TO GetDefaultPrinter()
#Endif

   IF ::lBoleto .AND. ::nBoletos > 0

      //#IFNDEF __PLATFORM__Linux
      //    LOCAL oIE := CREATEOBJECT( "InternetExplorer.Application" )
      //    oIE:Visible = .T.
      //    oIE:Navigate( ::Destino+"\"+ ::Nomehtm + " ")
      //#ENDIF

#IFNDEF __PLATFORM__Linux  // esta maravilha e de autoria de Laverson Espindola
      // PrintHTML nao funciona no Win98 :-(
      // e apresenta problemas de travamento em algumas maquinas , Spy?
      //IF Os_IsWinNT()
      //   PrintHTML(::Destino + ::Nomehtm, cPrinter, lPreview, lPromptPrint, !lPreview )
      //ELSE
      IF lPreview
         ShellExecute(::Nomehtm,"open",NIL,::Destino,1)
      ELSE
          xhbrun('c:\windows\system32\RUNDLL32.EXE c:\windows\system32\MSHTML.DLL,PrintHTML "'+::Destino+'"',.T.,.f.)
         //ShellExecute(::Nomehtm,"print",NIL,::Destino,1)
      ENDIF
      //ENDIF
#ELSE

      //xhbrun(["]+ hb_oemtoansi(::HtmEdit) +["] + ::Destino + ::Nomehtm + " ", .T., .F.)

      // * Linux Modo Console, by SysTux (Toninho Silva), systux@yahoo.com.br, 30/10/09 **
      HB_OpenProcess('/usr/bin/firefox '+::Destino+::Nomehtm,,,,.t.)
      // * xx **

#ENDIF

   ENDIF

RETURN Self

/* -------------------------------------------------------------------------- */
METHOD ERASE() CLASS oBoleto

      ::Close()
      IF ::lBoleto
         FERASE(::Destino+::Nomehtm)
      ENDIF

RETURN Self

/* -------------------------------------------------------------------------- */

METHOD EJECT() CLASS oBoleto

   IF MOD(::nBoletos,::nBolsPag) == 0
      FWRITE(Self:nHandle,[<div class="pagebreak">&nbsp;</div>])
   ELSE
      // uma boa opcao e esta
      // apesar de ser uma linha 'simples' nao obrigamos que a imagem esteja junto do html
      // assim da pra mandar so o html para o cliente pagador e os gifs ficam na web

      FWRITE(Self:nHandle,[<TD style="border:none" align=right vAlign=top><hr size="1" noshade></TD>])

      /*
      FWRITE(Self:nHandle, [<TD style="border:none" align=right vAlign=top> <font size=1 face=Arial>] +;
                           [<img src="cortar.gif" width="100%" height="21">Corte aqui</font></TD>]) */
   ENDIF

RETURN Self

/* -------------------------------------------------------------------------- */

METHOD isRegistrada() CLASS oBoleto

   // cobran‡a Registrada e a cobran‡a que precissa ser informada ao banco para
   // que em caso de nao pagamento o banco possa enviar para protesto
   // ja cobran‡a sem registro nao tem esta necessidade basta gerar o Boleto
   // nesta modalidade de cobran‡a nao existe a op‡ao de protesto

   LOCAL lRet
   IF (lRet := ::lRemessa)
      DO CASE
         CASE ::cCodBco == "001"
         CASE ::cCodBco LIKE "(008|033|353)"
            lRet := (VAL(::cCarteira) <> 102)
         CASE ::cCodBco == "104"
         CASE ::cCodBco == "237"
            lRet := (VAL(::cCarteira) == 9)
         CASE ::cCodBco == "341"
         CASE ::cCodBco == "356"
            lRet := (VAL(::cCarteira) == 20)
         CASE ::cCodBco == "422"
      ENDCASE
   ENDIF

RETURN lRet

/* -------------------------------------------------------------------------- */

METHOD SetNomeRem(cArq,cPasta) CLASS oBoleto

   DEFAULT cPasta TO ""

   ::oRem:Destino := cPasta
   ::oRem:NomeRem := cArq

RETURN Self

/* -------------------------------------------------------------------------- */
// Retorna Dígito de Controle Módulo 10                                       //

*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*+
*+    Function DC_Mod10()
*+
*+    Called from ( oboleto.prg  )   5 - function acentohtml()
*+
*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*+
FUNCTION DC_Mod10(cCodBco,mNMOG)

   LOCAL mVLDG
   LOCAL mSMMD
   LOCAL mCTDG
   LOCAL mRSDV
   LOCAL mDCMD
   mSMMD := 0
   FOR mCTDG := 1 TO LEN(mNMOG)
      mVLDG := VAL(SUBSTR(mNMOG,LEN(mNMOG) - mCTDG+1,1)) * IF(MOD(mCTDG,2) == 0,1,2)
      mSMMD += mVLDG - IF(mVLDG > 9,9,0)
   NEXT
   mRSDV := MOD(mSMMD,10)
   mDCMD := IF(mRSDV == 0,"0",STR(10 - mRSDV,1))

RETURN mDCMD

/* -------------------------------------------------------------------------- */
// Retorna Dígito de Controle Módulo Especial                                 //

*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*+
*+    Function DC_ModEsp()
*+
*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*+
FUNCTION DC_ModEsp(cCodBco,mNMOG)

   LOCAL mVLDG
   LOCAL mSMMD
   LOCAL mCTDG
   LOCAL mSQMP
   LOCAL mRSDV
   LOCAL mDCMD := 0

   IF cCodBco == "033"                  // Banespa
      mSMMD := 0
      mSQMP := 3
      FOR mCTDG := 1 TO LEN(mNMOG)
         mVLDG := VAL(SUBSTR(mNMOG,LEN(mNMOG) - mCTDG+1,1)) * (mSQMP)
         mSMMD += mVLDG - (INT(mVLDG / 10) * 10)
         mSQMP := IF(mSQMP == 3,7,IF(mSQMP == 7,9,IF(mSQMP == 9,1,3)))
      NEXT
      mRSDV := mSMMD - (INT(mSMMD / 10) * 10)
      mDCMD := IF(mRSDV == 0,0,10 - mRSDV)
   ENDIF

RETURN STR(mDCMD,1)

*+ EOF: OBOLETO.PRG


*+--------------------------------------------------------------------
*+
*+    Source Module => C:\MarioData\CVS\mario\harbourboleto\source\OREMESSA.PRG
*+
*+    Reformatted by Click! 2.03 on Jan-15-2010 at 10:35 am
*+
*+--------------------------------------------------------------------

/*
 * $Id: oRemessa.prg,v 1.59 2010/04/06 19:27:11 marioargon Exp $
*/
/*
 * Copyright 2006 Mario Simoes Filho mario@argoninformatica.com.br for original oRemessa.prg
 * Copyright 2006 Marcelo Sturm <marcelo.sturm@gmail.com> for modifications in the original project
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307 USA (or visit the web site http://www.gnu.org/).
 *
 * As a special exception, the Harbour Project gives permission for
 * additional uses of the text contained in its release of Harbour.
 *
 * The exception is that, if you link the Harbour libraries with other
 * files to produce an executable, this does not by itself cause the
 * resulting executable to be covered by the GNU General Public License.
 * Your use of that executable is in no way restricted on account of
 * linking the Harbour library code into it.
 *
 * This exception does not however inVALidate any other reasons why
 * the executable file might be covered by the GNU General Public License.
 *
 * This exception applies only to the code released by the Harbour
 * Project under the name Harbour.  If you copy code from other
 * Harbour Project or Free Software Foundation releases into a copy of
 * Harbour, as the General Public License permits, the exception does
 * not apply to the code that you add in this way.  To avoid misleading
 * anyone as to the status of such modified files, you must delete
 * this exception notice from them.
 *
 * If you write modifications of your own for Harbour, it is your choice
 * whether to permit this exception to apply to your modifications.
 * If you do not wish that, delete this exception notice.
 *
 */

#include "harbourboleto.ch"
#include "fileio.ch"
#include "hbclass.ch"

//#define RetiraAcento BRASIND

CLASS oRemessa

   DATA cLine INIT "" PROTECTED
   DATA nSeqReg INIT 0 PROTECTED        // Sequencial do Registro
   DATA cFillTrailer INIT " " PROTECTED // Caracter para preencher a ultima linha do arquivo

   DATA Destino INIT ""
   DATA nHandle INIT 0 PROTECTED        // link - Arquivo Remessa (FCREATE)
   DATA NomeRem INIT ""                 // Nome do Arquivo Remessa

   DATA nTitLote INIT 0 READONLY        // Numero de Titulos (Boletos) do Lote
   DATA cNumSequencial INIT "" READONLY // Numero Sequencial do Arquivo Remessa
   DATA NumRemessa INIT 0               // Numero sequencial do arquivo de remessa, utilizado pelo BRADESCO

   DATA cCodBco INIT "" READONLY
   DATA cNomeBco INIT "" READONLY
   DATA cData INIT "" READONLY          // Data da geracao do arquivo no Formato DDMMAA
   DATA cDtVenc INIT "" READONLY        // Data de vencimento no Formato DDMMAA
   DATA CNAB400 INIT .T.                // .T. = CNAB400 ou .F. = CNAB240(Febraban)

   DATA nQtdSimples INIT 0 READONLY     // Numero de Titulos - Cobrança Simples
   DATA nVlrSimples INIT 0 READONLY     // Valor Total - Cobrança Simples
   DATA nQtdVinculada INIT 0 READONLY   // Numero de Titulos - Cobrança Vinculada
   DATA nVlrVinculada INIT 0 READONLY   // Valor Total - Cobrança Vinculada
   DATA nQtdCaucionada INIT 0 READONLY  // Numero de Titulos - Cobrança Caucionada
   DATA nVlrCaucionada INIT 0 READONLY  // Valor Total - Cobrança Caucionada
   DATA nQtdDescontada INIT 0 READONLY  // Numero de Titulos - Cobrança Descontada
   DATA nVlrDescontada INIT 0 READONLY  // Valor Total - Cobrança Descontada

   DATA OCORRENCIA INIT "01"
   DATA INSTRUCAO1 INIT "00"
   DATA INSTRUCAO2 INIT "00"
   DATA DTDESC INIT ""
   DATA MENSAGEM INIT ""
   DATA cPasta INIT ""                  // Diretorio onde sera criado o Arquivo Remessa

   METHOD New(cBco,nNumRemessa) CONSTRUCTOR

   METHOD OPEN(oBol,cArq,cPasta)

   METHOD Add(oBol)

   METHOD CLOSE()

   METHOD Line()

ENDCLASS

   /* -------------------------------------------------------------------------- */

METHOD new(cBco,nNumRemessa) CLASS oRemessa

   DEFAULT cBco TO "237"
   DEFAULT nNumRemessa TO 1
   ::cCodBco := cBco
   DO CASE
      CASE cBco $ "001"
         ::cNomeBco := "BANCO DO BRASIL"
      CASE cBco == "008"
         ::cNomeBco := "Santander"
         ::CNAB400  := .f.
      CASE cBco == "033"
         ::cNomeBco := "Santander"
         ::CNAB400  := .f.
      CASE cBco == "104"
         ::cNomeBco := "CAIXA ECONOMICA FEDERAL"
         ::CNAB400  := .f.
      CASE cBco $ "237"
         ::cNomeBco := "BRADESCO"
      CASE cBco $ "341"
         ::cNomeBco     := "BANCO ITAU S.A."
         ::cFillTrailer := "0"
      CASE cBco == "353"
         ::cNomeBco := "Santander"
         ::CNAB400  := .f.
      CASE cBco $ "356"
         ::cNomeBco := "BANCO REAL"
      CASE cBco $ "399"
         ::cNomeBco := "HSBC"
      CASE cBco $ "409"
         ::cNomeBco := "UNIBANCO"
      CASE cBco $ "422"
         ::cNomeBco := "SAFRA"
      CASE cBco $ "739"
         ::cNomeBco     := "BANCO BGN"
         ::cFillTrailer := "0"

   ENDCASE

   //::cNomeBco := PAD(::cNomeBco, 15)
   ::NumRemessa := nNumRemessa

RETURN Self

/* -------------------------------------------------------------------------- */

METHOD OPEN(oBol,cArq,cPasta) CLASS oRemessa

   LOCAL nI := 1

   ::cData := STRZERO(DAY(oBol:DtEmis),2)+STRZERO(MONTH(oBol:DtEmis),2)+RIGHT(STR(YEAR(oBol:DtEmis)),2)
   DEFAULT cArq TO "cb"+::cData,cPasta TO LEFT(hb_cmdargargv(),RAT(HB_OSpathseparator(),hb_cmdargargv()))

   IF EMPTY(::Destino)
      cPasta := ALLTRIM(cPasta)
      IF RIGHT(cPasta,1) != HB_OSpathseparator()
         cPasta += HB_OSpathseparator()
      ENDIF

      IF !IsDirectory(cPASTA)           // Acrescentei para criar a pasta de geracao arq remessa definida em cPastaRem
         MAKEDIR(ALLTRIM(cPASTA))       // Open( cArq, cPasta, cArqRem, cPastaRem, nNumRemessa ) de oBoleto  25/09/2006
      ENDIF

      ::Destino := cPasta
   ENDIF

   IF !EMPTY(::NomeRem)                 // Nunca vai entrar aqui. So entraria se voltassemos ::oRem := oRemessa(::cCodBco) p/ oBoleto:new()
      FERASE(::Destino+::NomeRem)
      ::nHandle := FCREATE(::Destino+::NomeRem,FC_NORMAL)
   ELSE
      IF !FILE(::Destino+cArq+".rem")
         ::nHandle := FCREATE(::Destino+cArq+".rem",FC_NORMAL)
      ELSE
         WHILE FILE(::Destino+cArq+STRZERO(nI,2)+".rem")
            nI ++
         END
         ::nHandle        := FCREATE(::Destino+cArq+STRZERO(nI,2)+".rem")
         ::cNumSequencial := STRZERO(nI,2)
         cArq             += ::cNumSequencial
      ENDIF
      IF ::nHandle > 0
         ::NomeRem := cArq+".rem"
      ENDIF
   ENDIF
   ::cLine := ""

   IF ::nHandle < 0                     // Header

   ELSEIF ::CNAB400

      ::cLine += "0"
      ::cLine += "1"
      ::cLine += "REMESSA"
      ::cLine += "01"
      ::cLine += PAD("COBRANCA",15)

      DO CASE
         CASE ::cCodBco $ "001"         // Banco do Brasil
            ::cLine += PAD(oBol:cNumAgencia,4,"0")
            ::cLine += oBol:cDvAgencia
            ::cLine += PAD(oBol:cNumCC,8,"0")
            ::cLine += oBol:cDvCC
            ::cLine += STRZERO(0,6)
            ::cLine += PAD(oBol:Cedente,30)
            ::cLine += ::cCodBco
            ::cLine += PAD(::cNomeBco,15)
            ::cLine += ::cData
            ::cLine += STRZERO(::NumRemessa,7)
            ::cLine += SPACE(22)
            ::cLine += STRZERO(VAL(oBol:cCDPF),7)           // No. do convencio com o banco
            ::cLine += SPACE(258)

         CASE ::cCodBco $ "237"         // Bradesco
            ::cLine += STRZERO(VAL(oBol:cCDPF),20)
            ::cLine += PAD(oBol:Cedente,30)
            ::cLine += ::cCodBco
            ::cLine += PAD(::cNomeBco,15)
            ::cLine += ::cData
            ::cLine += SPACE(8)
            ::cLine += "MX"
            ::cLine += STRZERO(::NumRemessa,7)
            ::cLine += SPACE(277)

         CASE ::cCodBco $ "341/739"     // Itaú ou BGN
            ::cLine += PAD(oBol:cNumAgencia,4)
            ::cLine += "00"
            ::cLine += PAD(oBol:cNumCC,5)
            ::cLine += PAD(oBol:cDVCC,1)
            ::cLine += SPACE(8)
            ::cLine += PAD(oBol:Cedente,30)
            ::cLine += ::cCodBco
            ::cLine += ::cNomeBco
            ::cLine += ::cData
            ::cLine += SPACE(294)

         CASE ::cCodBco $ "356"         // Real
            ::cLine += "0"
            ::cLine += PAD(oBol:cNumAgencia,4)
            ::cLine += "0"
            ::cLine += PAD(oBol:cNumCC,7)
            ::cLine += SPACE(7)
            ::cLine += PAD(oBol:Cedente,30)
            ::cLine += ::cCodBco
            ::cLine += PAD(::cNomeBco,15)
            ::cLine += ::cData
            ::cLine += "01600BPI"
            ::cLine += SPACE(286)

         CASE ::cCodBco $ "399"         // HSBC
            ::cLine += "0"
            ::cLine += PAD(oBol:cNumAgencia,4)
            ::cLine += "55"
            ::cLine += PAD(oBol:cNumAgencia,4)
            ::cLine += PAD(oBol:cNumCC+oBol:cDvCC,7)
            ::cLine += SPACE(2)
            ::cLine += PAD(oBol:Cedente,30)
            ::cLine += ::cCodBco
            ::cLine += PAD(::cNomeBco,15)
            ::cLine += ::cData
            ::cLine += "01600BPI"
            ::cLine += SPACE(2)
            ::cLine += "LANCV08"
            ::cLine += SPACE(277)

         CASE ::cCodBco $ "409"         // Unibanco
            //::cLine += SPACE(7)
            ::cLine += PAD(oBol:cNumAgencia,4)
            ::cLine += PADL(VAL(oBol:cNumCC),6,"0")
            ::cLine += PAD(oBol:cDVCC,1)                    //37
            ::cLine += STRZERO(0,9)
            ::cLine += PAD(oBol:Cedente,30)                 //66
            ::cLine += ::cCodBco
            ::cLine += PAD(::cNomeBco,8)                    //84
            ::cLine += SPACE(7)
            ::cLine += ::cData
            ::cLine += "01600"
            ::cLine += "BPI"            //107
            ::cLine += STRZERO(0,286)

         CASE ::cCodBco $ "422"         // Safra - 25/09/2006
            //::cLine += "0"
            //::cLine += "1"
            //::cLine += "REMESSA"
            //::cLine += "01"
            //::cLine += "COBRANCA"
            //::cLine += SPACE(07)

            ::cLine += PAD(oBol:cCDPF,14)                   // Usando cCDPF como CODEMPRE 14/09

            ::cLine += SPACE(06)
            ::cLine += PAD(oBol:Cedente,30)
            ::cLine += ::cCodBco
            ::cLine += PAD(::cNomeBco,11)
            ::cLine += SPACE(04)
            ::cLine += ::cData
            ::cLine += SPACE(291)
            ::cLine += "   "

      ENDCASE

      ::Line()

   ELSE             // FEBRABAN

      ::cData := STRZERO(DAY(oBol:DtEmis),2)+STRZERO(MONTH(oBol:DtEmis),2)+RIGHT(STR(YEAR(oBol:DtEmis)),4)

      IF ::cCodBco == "104"             // Caixa CNAB240 SIGCB, by SysTux (Toninho Silva), systux@yahoo.com.br, 30/10/09

         // Header Arquivo

         ::cLine += ::cCodBco           // 01.0 Codigo do Banco
         ::cLine += "0000"              // 02.0 Lote de Servico
         ::cLine += "0"                 // 03.0 Tipo de Registro
         ::cLine += SPACE(9)            // 04.0 Uso Exclusivo FEBRABAN
         ::cLine += "2"                 // 05.0 Tipo de Inscricao 0-Isento, 1-CPF, 2-CNPJ, 3-PIS, 9-Outros
         ::cLine += PADL(STR(VAL(oBol:CedenteCNPJ),,,.t.),14,"0")               // 06.0 Numero da Inscricao
         ::cLine += REPLICATE("0",20)   // 07.0 Uso Exclusivo da Caixa
         ::cLine += PADL(oBol:cNumAgencia,5,"0")            // 08.0 Numero Agencia 5 Digitos
         ::cLine += PAD(oBol:cDvAgencia,1)                  // 09.0 Dv Agencia
         ::cLine += oBol:cCDPF          // 10.0 Cod. Cedente / Cod Convenio no Banco
         ::cLine += REPLICATE("0",7)    // 11.0 Uso Exclusivo da Caixa
         ::cLine += "0"                 // 12.0 Uso Exclusivo da Caixa
         ::cLine += PAD(oBol:Cedente,30)                    // 13.0 Nome da Empresa
         ::cLine += PAD(::cNomeBco,30)  // 14.0 Nome do Banco
         ::cLine += SPACE(10)           // 15.0 Uso Exclusivo FEBRABAN
         ::cLine += "1"                 // 16.0 1 = Remessa(Cliente->Banco),  2 = Retorn(Banco->Cliente)
         ::cLine += ::cData             // 17.0 Data da Geracao do Arquivo
         ::cLine += PAD(STRTRAN(TIME(),":",""),6)           // 18.0 Hora da Geracao do Arquivo
         ::cLine += STRZERO(::NumRemessa,6)                 // 19.0 Numero Sequencial do Arquivo
         ::cLine += "050"               // 20.0 Numero da Versao do Layout do Arquivo
         ::cLine += REPLICATE("0",5)    // 21.0 Densidade
         ::cLine += SPACE(20)           // 22.0 Uso Reservado do Banco
         ::cLine += PAD("REMESSA-PRODUCAO",20)              // 23.0 Uso Reservado da Empresa
         ::cLine += SPACE(04)           // 24.0 Versao Aplicativo Caixa
         ::cLine += SPACE(25)           // 25.0 Uso Exclusivo FEBRABAN
         ::Line()

         // Header Lote
         ::cLine += ::cCodBco           // 01.1 Codigo do Banco
         ::cLine += "0001"              // 02.1 Lote de Servico
         ::cLine += "1"                 // 03.1 Tipo de Registro
         ::cLine += "R"                 // 04.1 Tipo de Operacao, (R)emessa, Re(T)orno
         ::cLine += "01"                // 05.1 Tipo de Servico, 01 Cobranca
         ::cLine += "00"                // 06.1 Uso Exclusivo FEBRABAN
         ::cLine += "030"               // 07.1 Numero da Versao do Layout do Lote
         ::cLine += SPACE(1)            // 08.1 Uso Exclusivo FEBRABAN
         ::cLine += "2"                 // 09.1 Tipo de Inscricao 0-Isento, 1-Cpf, 2-Cnpj, 3-Pis, 9-Outros
         ::cLine += PADL(oBol:CedenteCNPJ,15,"0")           // 10.1 Numero Inscricao da Empresa
         ::cLine += oBol:cCDPF          // 11.1 Cod. Cedente / Cod Convenio no Banco
         ::cLine += REPLICATE("0",14)   // 12.1 Uso Exclusivo da Caixa
         ::cLine += "0"+PADL(oBol:cNumAgencia,4,"0")        // 13.1 Numero Agencia 5 Digitos
         ::cLine += PAD(oBol:cDvAgencia,1)                  // 14.1 Dv Agencia
         ::cLine += oBol:cCDPF          // 15.1 Cod. Cedente / Cod Convenio no Banco
         ::cLine += REPLICATE("0",7)    // 16.1 Somente Cod. Mod. Bloqueto Personalizado / Autorizado Pela Caixa
         ::cLine += "0"                 // 17.1 Uso Exclusivo da Caixa
         ::cLine += PAD(oBol:Cedente,30)                    // 18.1 Nome da Empresa
         ::cLine += PAD(oBol:Instrucoes,40)                 // 19.1 Mensagem 1
         ::cLine += PAD(oBol:Instrucoes2,40)                // 20.1 Mensagem 2
         ::cLine += STRZERO(::NumRemessa,8)                 // 21.1 Numero da Remessa
         ::cLine += ::cData             // 22.1 Data da Geracao do Arquivo
         ::cLine += REPLICATE("0",8)    // 23.1 Data do Credito
         ::cLine += SPACE(33)           // 24.1 Uso Exclusivo FEBRABAN
         ::Line()

      ELSE          // Outros Bancos, Padrao CNAB240

         // Header Arquivo
         ::cLine += ::cCodBco           // codigo do banco
         ::cLine += "0000"              // lote de servico
         ::cLine += "0"                 // tipo de registro
         ::cLine += SPACE(9)            // use exclusivo FEBRABAN
         ::cLine += "2"                 // tipo de inscricao 0-isento 1-cpf 2-cnpj 3-pis 9-outros
         ::cLine += PADL(STR(VAL(oBol:CedenteCNPJ),,,.t.),14,"0")               // numero da inscricao
         ::cLine += STRZERO(VAL(oBol:cCDPF),20)             // convenio
         ::cLine += PADL(oBol:cNumAgencia,5,"0")            // agencia
         ::cLine += PAD(oBol:cDvAgencia,1)                  // digito da agencia
         ::cLine += PADL(oBol:cNumCC,12,"0")                // numero da conta corrente
         ::cLine += PAD(oBol:cDvCC,1)   // digito da conta corrente
         ::cLine += PAD(oBol:cDvAgCC,1)                     // digito da agencia conta
         ::cLine += PAD(oBol:Cedente,30)                    // nome da Empresa
         ::cLine += PAD(::cNomeBco,30)  // nome do banco
         ::cLine += SPACE(10)           // uso exclusivo FEBRABAN
         ::cLine += "1"                 // remessa 1 - remessa 2 - retorno
         ::cLine += ::cData             // Data da geracao do arquivo
         ::cLine += PAD(STRTRAN(TIME(),":",""),6)           // Hora da geracao
         ::cLine += STRZERO(::NumRemessa,6)                 // numero sequencial do arquivo
         ::cLine += "040"               // Numero da Versão do Layout do arquivo
         ::cLine += '01600'             // densidade
         ::cLine += SPACE(20)           // para uso reservado do banco
         ::cLine += SPACE(20)           // para uso reservado da empresa
         ::cLine += SPACE(14)           // uso exclusivo FEBRABAN
         ::cLine += '000'               //
         ::cLine += SPACE(12)           // uso exclusivo FEBRABAN
         ::Line()

         // Header Lote
         ::cLine += ::cCodBco           // codigo do banco
         ::cLine += "0001"              // lote de servico
         ::cLine += "1"                 // tipo de registro
         ::cLine += "R"                 // tipo de operacao, R - remessa T - retorno
         ::cLine += "01"                // tipo de servico 01 - cobranca
         ::cLine += SPACE(2)            // uso exclusivo FEBRABAN
         ::cLine += "040"               // Numero da Versão do Layout do arquivo
         ::cLine += SPACE(1)            // uso exclusivo FEBRABAN
         ::cLine += "2"                 // tipo de inscricao 0-isento 1-cpf 2-cnpj 3-pis 9-outros
         ::cLine += PADL(oBol:CedenteCNPJ,15,"0")           // numero da inscricao
         ::cLine += STRZERO(VAL(oBol:cCDPF),20)             // convenio
         ::cLine += PADL(oBol:cNumAgencia,5,"0")            // agencia
         ::cLine += PAD(oBol:cDvAgencia,1,0)                // digito da agencia
         ::cLine += PADL(oBol:cNumCC,12,"0")                // numero da conta corrente
         ::cLine += PAD(oBol:cDvCC,1)   // digito da conta corrente
         ::cLine += PAD(oBol:cDvAgCC,1)                     // digito da agencia conta
         ::cLine += PAD(oBol:Cedente,30)                    // nome da Empresa

         ::cLine += PAD(oBol:Instrucoes,40)                 // mensagem 1
         ::cLine += PAD(oBol:Instrucoes2,40)                // mensagem 2
         ::cLine += STRZERO(::NumRemessa,8)                 // numero da remessa
         ::cLine += ::cData             // Data da geracao do arquivo
         ::cLine += "00000000"          // data do credito
         ::cLine += SPACE(33)           // uso exclusivo FEBRABAN
         ::Line()

      ENDIF

   ENDIF

RETURN ::nHandle

/* -------------------------------------------------------------------------- */

METHOD Add(oBol) CLASS oRemessa

   LOCAL cMsg
   LOCAL cCart

   ::nTitLote ++
   IF ::CNAB400
      ::cDtVenc := STRZERO(DAY(oBol:DtVenc),2)+STRZERO(MONTH(oBol:DtVenc),2)+RIGHT(STR(YEAR(oBol:DtVenc)),2)
      DO CASE
         CASE ::cCodBco $ "001"         // Banco do Brasil
            ::cLine += "7"
            ::cLine += "02"
            ::cLine += PADL(oBol:CedenteCNPJ,14,"0")
            ::cLine += PADL(oBol:cNumAgencia,4,"0")
            ::cLine += oBol:cDvAgencia
            ::cLine += PADL(oBol:cNumCC,8,"0")
            ::cLine += PADL(oBol:cDVCC,1)
            ::cLine += STRZERO(VAL(oBol:cCDPF),7)           // No. do convencio com o banco
            ::cLine += PADL(oBol:cNumDoc,25)
            ::cLine += PADL(oBol:cNossoNumero,17,"0")
            ::cLine += "00"
            ::cLine += "00"
            ::cLine += SPACE(3)
            ::cLine += SPACE(1)         // Indicativo de Sacador
            IF LEFT(oBol:cCarteira,2) $ "31/51"
               ::cLine += "SD "
            ELSEIF LEFT(oBol:cCarteira,2) $ "12"
               ::cLine += "AIU"
            ELSE
               ::cLine += "AI."
            ENDIF
            ::cLine += PADL(SUBSTR(oBol:cCarteira,3),3,"0")                     // Variacao da Carteira
            ::cLine += "0"
            ::cLine += REPLICATE("0",6)
            ::cLine += SPACE(5)         // Display Tipo de Cobranca
            ::cLine += "11"             // Cobranca Simples
            ::cLine += "01"             // Comando

            ::cLine += PAD(oBol:cNumDoc,10)
            ::cLine += ::cDtVenc
            ::cLine += STRZERO(oBol:nValor * 100,13)
            ::cLine += ::cCodBco
            ::cLine += PADL("",5,"0")   // Agencia-DV de Cobrança
            ::cLine += PAD(oBol:EspecieTit,2)               // Nota 10
            ::cLine += "N"
            ::cLine += ::cData
            ::cLine += PADL(::INSTRUCAO1,2)
            ::cLine += PADL(::INSTRUCAO2,2)
            ::cLine += STRZERO(oBol:nValMora * 100,13)

            ::cLine += PAD(::DTDESC,6," ")
            ::cLine += STRZERO(0,13)    // Valor de Desconto
            ::cLine += STRZERO(0,13)    // Valor do IOF
            ::cLine += STRZERO(0,13)    // Valor do Abatimento

            IF EMPTY(oBol:cCPF)
               ::cLine += "02"
               ::cLine += PADL(oBol:cCNPJ,14,"0")
            ELSE
               ::cLine += "01"
               ::cLine += PADL(oBol:cCPF,14,"0")
            ENDIF
            ::cLine += PAD(oBol:SACADO,37)+SPACE(3)
            ::cLine += PAD(oBol:Endereco1,37)
            ::cLine += SPACE(15)
            ::cLine += PAD(oBol:CEP,8)
            ::cLine += PAD(oBol:Cidade,15)
            ::cLine += PAD(oBol:Estado,2)

            ::cLine += SPACE(40)        //PAD(oBol:Avalista, 30)
            ::cLine += STRZERO(oBol:nDiasProt,2)            // Prazo de Protesto
            ::cLine += " "

         CASE ::cCodBco $ "237"         // Bradesco

            ::cLine += "1"
            ::cLine += REPLICATE('0',19)
            ::cLine += "0"+STRZERO(VAL(oBol:cCarteira),3)+PADL(oBol:cNumAgencia,5,"0")
            ::cLine += PADL(oBol:cNumCC,7,"0")+STR(VAL(oBol:cDvCC),1)
            ::cLine += PADL(oBol:cNumDoc,25)
            ::cLine += "000"            // banco debito automatico
            ::cLine += "00000"          //zeros
            IF VAL(oBol:cNossoNumero) # 0
               ::cLine += PADL(oBol:cNossoNumero,11,"0")+oBol:cDGNN
            ELSE
               ::cLine += REPLICATE("0",12)
            ENDIF
            ::cLine += STRZERO(0,10)
            //IF VAL(oBol:cCarteira) == 9
               ::cLine += "1"
            //ELSE
            //   ::cLine += "2"
            //ENDIF
            ::cLine += " "
            ::cLine += SPACE(10)        //espaco
            ::cLine += SPACE(4)
            ::cLine += "01"             // REMESSA
            ::cLine += PADL(oBol:cNumDoc,10)
            ::cLine += ::cDtVenc
            ::cLine += STRZERO(oBol:nValor * 100,13)
            ::cLine += "000"
            ::cLine += "00000"
            ::cLine += PAD(oBol:EspecieTit,2)               // especie titulo
            ::cLine += "N"
            ::cLine += ::cData
            ::cLine += PADL(::INSTRUCAO1,2)
            ::cLine += PADL(::INSTRUCAO2,2)
            ::cLine += STRZERO(oBol:nValMora * 100,13)
            ::cLine += PAD(::DTDESC,6," ")                  // dtdesc
            ::cLine += STRZERO(0,13)    // Valor de Desconto
            ::cLine += STRZERO(0,13)    // Valor do IOF
            ::cLine += STRZERO(0,13)    // Valor do Abatimento
            IF EMPTY(oBol:cCPF)
               ::cLine += "02"          //::nHandle, "02"
               ::cLine += PADL(oBol:cCNPJ,14,"0")
            ELSE
               ::cLine += "01"          //::nHandle, "01"
               ::cLine += PADL(oBol:cCPF,14,"0")
            ENDIF
            ::cLine += PAD(oBol:SACADO,40)
            ::cLine += PAD(oBol:Endereco1,40)
            ::cLine += SPACE(12)
            ::cLine += PAD(oBol:CEP,8)

            cMsg    := STRTRAN(oBol:INSTRUCOES,CRLF," ")
            cMsg    := STRTRAN(cMsg,"<BR>"," ")
            ::cLine += PAD(cMsg,60)
            cMsg    := SUBSTR(cMsg,61)

            WHILE !EMPTY(cMsg)
               ::Line()
               ::cLine += "2"           // registro de mensagem
               ::cLine += PAD(cMsg,320," ")
               ::cLine += space(6)
               ::cLine += STRZERO(0,13)    // Valor de Desconto
               ::cLine += space(6)
               ::cLine += STRZERO(0,13)    // Valor de Desconto
               ::cLine += SPACE(7)
               ::cLine += STRZERO(VAL(oBol:cCarteira),3)
               ::cLine += PADL(oBol:cNumAgencia,05,"0")
               ::cLine += PADL(oBol:cNumCC,7,"0")+STR(VAL(oBol:cDvCC),1)
               IF VAL(oBol:cNossoNumero) # 0
                  ::cLine += PADL(oBol:cNumAgencia,4,"0")+;
                                                  PADL(oBol:cNossoNumero,7,"0")+oBol:cDGNN
               ELSE
                  ::cLine += REPLICATE("0",12)
               ENDIF
               cMsg := SUBSTR(cMsg,321)
            END

         CASE ::cCodBco $ "341/739"     // Itau ou BGN
            ::cLine += "1"
            ::cLine += "02"
            ::cLine += PADL(oBol:CedenteCNPJ,14,"0")
            ::cLine += PADL(oBol:cNumAgencia,4,"0")

            ::cLine += "00"
            ::cLine += PADL(oBol:cNumCC,5,"0")
            ::cLine += PADL(oBol:cDVCC,1)
            ::cLine += SPACE(4)
            ::cLine += PADL("",4," ")   // "0" COD.INSTRUCAO - NOTA 27
            ::cLine += PADL(oBol:cNumDoc,25)
            ::cLine += PADL(oBol:cNossoNumero,08,"0")
            ::cLine += PADL("",13,"0")  // QTD. MOEDA VARIAVEL - NOTA 4
            ::cLine += PADL(oBol:cCarteira,3,"0")           // NOTA 5
            ::cLine += SPACE(21)        // USO DO BANCO
            ::cLine += PADL(oBol:TpCarteira,1,"0")          // NOTA 5
            ::cLine += PADL(::OCORRENCIA,2)                 // Codigo da Ocorrência - NOTA 6

            ::cLine += PAD(oBol:cNumDoc,10)
            ::cLine += ::cDtVenc
            ::cLine += STRZERO(oBol:nValor * 100,13)
            ::cLine += ::cCodBco
            ::cLine += PADL("",5,"0")   // Agencia de Cobrança - NOTA 9
            ::cLine += PAD(oBol:EspecieTit,2)               // Nota 10
            ::cLine += "N"
            ::cLine += ::cData
            ::cLine += PADL(::INSTRUCAO1,2)
            ::cLine += PADL(::INSTRUCAO2,2)
            ::cLine += STRZERO(oBol:nValMora * 100,13)

            ::cLine += PAD(::DTDESC,6," ")

            ::cLine += STRZERO(0,13)    // Valor de Desconto
            ::cLine += STRZERO(0,13)    // Valor do IOF
            ::cLine += STRZERO(0,13)    // Valor do Abatimento

            IF EMPTY(oBol:cCPF)
               ::cLine += "02"
               ::cLine += PADL(oBol:cCNPJ,14,"0")
            ELSE
               ::cLine += "01"
               ::cLine += PADL(oBol:cCPF,14,"0")
            ENDIF
            ::cLine += PAD(oBol:SACADO,40)
            ::cLine += PAD(oBol:Endereco1,40)
            ::cLine += PAD(oBol:Bairro,12)
            ::cLine += PAD(oBol:CEP,8)
            ::cLine += PAD(oBol:Cidade,15)
            ::cLine += PAD(oBol:Estado,2)

            ::cLine += SPACE(30)        //PAD(oBol:Avalista, 30)
            ::cLine += SPACE(04)
            ::cLine += ::cDtVenc        // Data de Mora
            ::cLine += STRZERO(oBol:nDiasProt,2)            // Prazo de Protesto
            ::cLine += " "

         CASE ::cCodBco $ "356"         // Real
            ::cLine += "1"
            ::cLine += "02"
            ::cLine += PADL(oBol:CedenteCNPJ,14,"0")
            ::cLine += "0"
            ::cLine += PADL(oBol:cNumAgencia,4,"0")
            ::cLine += "0"

            ::cLine += PADL(oBol:cNumCC,7,"0")
            ::cLine += SPACE(7)
            ::cLine += PADL("",25," ")  // Campo Especial - Uso Livre do Cedente
            ::cLine += "00"
            ::cLine += PADL(oBol:cNossoNumero,07,"0")
            ::cLine += "0"              // Incidencia de Multa 0-Valor do Titulo 1-Valor Corrigido
            ::cLine += "00"             // (n) Dias apos o Vencimento para Multa
            ::cLine += "0"              // Multa por 0-Valor 1-Taxa
            ::cLine += STRZERO(oBol:nValMulta * 100,13)
            ::cLine += SPACE(7)
            ::cLine += PADL(0,09,"0")   // Numero do Contrato - Cobranca Real ou Caucionada
            ::cLine += SPACE(3)
            ::cLine += PAD(oBol:cTipoCob,1)                 // Cobranca 1-Simples 5-Escritural
            ::cLine += "01"             // Ocorrencia - Entrada

            ::cLine += PAD(oBol:cNumDoc,10)
            ::cLine += ::cDtVenc
            ::cLine += STRZERO(oBol:nValor * 100,13)
            ::cLine += ::cCodBco
            ::cLine += STRZERO(0,5)     // Agencia Cobradora
            ::cLine += PAD(oBol:EspecieTit,2)
            ::cLine += "N"
            ::cLine += ::cData
            ::cLine += STRZERO(oBol:nDiasProt,2)            // Prazo de Protesto
            ::cLine += SPACE(2)
            ::cLine += "0"              // Multa por 0-Valor 1-Taxa
            ::cLine += STRZERO(oBol:nValMora * 100,12)
            ::cLine += PAD(::DTDESC,6," ")
            ::cLine += STRZERO(0,13)    // Valor de Desconto
            ::cLine += STRZERO(0,13)    // Valor do IOC
            ::cLine += STRZERO(0,13)    // Valor do Abatimento

            IF EMPTY(oBol:cCPF)
               ::cLine += "02"
               ::cLine += PADL(oBol:cCNPJ,14,"0")
            ELSE
               ::cLine += "01"
               ::cLine += PADL(LEFT(oBol:cCPF,9),9,"0")
               ::cLine += "000"
               ::cLine += PADL(RIGHT(oBol:cCPF,2),2,"0")
            ENDIF
            ::cLine += PAD(oBol:SACADO,40)
            ::cLine += PAD(oBol:Endereco1,40)
            ::cLine += PAD(oBol:Bairro,12)
            ::cLine += PAD(oBol:CEP,8)
            ::cLine += PAD(oBol:Cidade,15)
            ::cLine += PAD(oBol:Estado,2)
            ::cLine += SPACE(40)        //PAD(oBol:Avalista, 40)
            ::cLine += "0"              // 0-Reais 1-Moeda
            ::cLine += "07"             // 07-Real

            ::nVlrSimples += oBol:nValor

         CASE ::cCodBco $ "399"         // HSBC
            ::cLine += "1"
            ::cLine += "02"
            ::cLine += PADL(oBol:CedenteCNPJ,14,"0")
            ::cLine += "0"
            ::cLine += PADL(oBol:cNumAgencia,4,"0")
            ::cLine += "55"
            ::cLine += PADL(oBol:cNumAgencia,4,"0")
            ::cLine += PAD(oBol:cNumCC+oBol:cDvCC,7)
            ::cLine += SPACE(2)
            ::cLine += PADL("",25," ")  // Campo Especial - Uso Livre do Cedente
            ::cLine += PADL(oBol:cNossoNumero+oBol:cDGNN,11,"0")
            ::cLine += PAD(::DTDESC,6,"0")
            ::cLine += STRZERO(0,11)    // Valor de Desconto
            ::cLine += PAD(::DTDESC,6,"0")
            ::cLine += STRZERO(0,11)    // Valor de Desconto
            ::cLine += PAD(oBol:cTipoCob,1)                 // Cobranca 1-Simples 5-Escritural
            ::cLine += "01"             // Ocorrencia - Remessa-Entrada
            ::cLine += PAD(oBol:cNumDoc,10)
            ::cLine += ::cDtVenc

            ::cLine += STRZERO(oBol:nValor * 100,13)
            ::cLine += ::cCodBco
            ::cLine += PADL(0,05,"0")   // Agência...
            ::cLine += PAD(oBol:EspecieTit,2)
            ::cLine += "N"
            ::cLine += ::cData
            ::cLine += "00"             // 1ª INSTRUÇÃO
            ::cLine += "00"             // 2ª INSTRUÇÃO
            ::cLine += STRZERO(oBol:nValMora * 100,13)
            ::cLine += PAD(::DTDESC,6," ")
            ::cLine += STRZERO(0,13)    // Valor de Desconto
            ::cLine += STRZERO(0,13)    // Valor do IOF
            ::cLine += STRZERO(0,13)    // Valor do Abatimento
            IF EMPTY(oBol:cCPF)
               ::cLine += "02"
               ::cLine += PADL(oBol:cCNPJ,14,"0")
            ELSE
               ::cLine += "01"
               ::cLine += PADL(LEFT(oBol:cCPF,9),9,"0")
               ::cLine += "000"
               ::cLine += PADL(RIGHT(oBol:cCPF,2),2,"0")
            ENDIF
            ::cLine += PAD(oBol:SACADO,40)
            ::cLine += PAD(oBol:Endereco1,38)
            ::cLine += "  "
            ::cLine += PAD(oBol:Bairro,12)
            ::cLine += PAD(oBol:CEP,8)
            ::cLine += PAD(oBol:Cidade,15)
            ::cLine += PAD(oBol:Estado,2)
            ::cLine += SPACE(39)        //PAD(oBol:Avalista, 39)
            ::cLine += " "              // Tipo de Bloqueto
            ::cLine += "  "             // Prazo de Protesto
            ::cLine += "9"              //

         CASE ::cCodBco $ "409"         // Unibanco
            ::cLine += "1"
            ::cLine += "02"
            ::cLine += PADL(oBol:CedenteCNPJ,14,"0")
            ::cLine += PADL(oBol:cNumAgencia,4,"0")

            ::cLine += PADL(VAL(oBol:cNumCC),6,"0")
            ::cLine += oBol:cDVCC
            ::cLine += STRZERO(0,9)
            ::cLine += PADL(oBol:cNumDoc,25,"0")
            ::cLine += PADL(oBol:cNossoNumero,10,"0")
            ::cLine += oBol:cDGNN
            ::cLine += PADL(::MENSAGEM,30)
            ::cLine += PADL("",4)
            ::cLine += PADL(oBol:cCarteira,1)
            ::cLine += PADL(::OCORRENCIA,2)

            ::cLine += PAD(oBol:cNumDoc,10)
            ::cLine += ::cDtVenc
            ::cLine += STRZERO(oBol:nValor * 100,13)
            ::cLine += ::cCodBco
            ::cLine += PADL("",5,"0")   // Agencia de Cobrança - NOTA 9
            ::cLine += PAD(oBol:EspecieTit,2)               // Nota 10
            ::cLine += "N"
            ::cLine += ::cData
            ::cLine += PADL(::INSTRUCAO1,2)
            ::cLine += PADL(::INSTRUCAO2,2)
            ::cLine += STRZERO(oBol:nValMora * 100,13)

            ::cLine += PAD(TRIM(::DTDESC),6,"0")

            ::cLine += STRZERO(0,13)    // Valor de Desconto
            ::cLine += STRZERO(0,13)    // Valor do IOF
            ::cLine += STRZERO(0,13)    // Valor do Abatimento

            IF EMPTY(oBol:cCPF)
               ::cLine += "02"
               ::cLine += PADL(oBol:cCNPJ,14,"0")
            ELSE
               ::cLine += "01"
               ::cLine += PADL(oBol:cCPF,14,"0")
            ENDIF
            ::cLine += PAD(oBol:SACADO,40)
            ::cLine += PAD(oBol:Endereco1,40)
            ::cLine += PAD(oBol:Bairro,12)
            ::cLine += PAD(oBol:CEP,8)
            ::cLine += PAD(oBol:Cidade,15)
            ::cLine += PAD(oBol:Estado,2)
            ::cLine += SPACE(30)        //PAD(oBol:Avalista, 30)
            ::cLine += STRZERO(0,10)
            ::cLine += IF(::INSTRUCAO1+::INSTRUCAO2 == "0000","00",STRZERO(oBol:nDiasProt,2))       // Prazo de Protesto
            ::cLine += "0"

         CASE ::cCodBco $ "422"         // Carteira Vinculada e Simples, o que muda e oBOL:cCDPF fornecido pelo bco 25/09/2006
            ::cLine += "1"
            ::cLine += "02"
            ::cLine += PADL(oBol:CedenteCNPJ,14,"0")

            ::cLine += PAD(oBol:cCDPF,14)

            ::cLine += SPACE(06)
            ::cLine += SPACE(25)

            ::cLine += "000000000"      // NUMERO TITULO DO BANCO USO BANCO QDO GERAR BOLETO PELO BCO POR ZEROS 25/09/2006

            ::cLine += SPACE(30)
            ::cLine += "0"
            ::cLine += "00"             // COD MOEDA REAL
            ::cLine += " "
            ::cLine += "00"             // NUMERO DE DIAS PARA PROTESTO
            ::cLine += "2"              // COD CARTEIRA = 2 VINCULADA
            ::cLine += "01"             // COD OCORRENCIA 01=REMESSA DE TITULOS
            ::cLine += PADL(oBol:cNumDoc,10,"0")
            ::cLine += ::cDtVenc        // Data de VECTO
            ::cLine += STRZERO(oBol:nValor * 100,13)
            ::cLine += "422"
            ::cLine += "00000"
            ::cLine += "01"             // DUPLICATA
            ::cLine += "N"
            ::cLine += ::cData

            ::cLine += "01"             // TABELA SAFRA 6.1.5 (25/09/2006)
            ::cLine += PADL(::INSTRUCAO2,2)

            ::cLine += STRZERO((oBol:nValor * oBol:nMora),13)

            ::cLine += PAD(::DTDESC,6,"0")                  // dtdesc COLOCAR ZERO SE NAO HOUVER DESCONTOS (25/09/2006)
            ::cLine += STRZERO(0,13)    // Valor de Desconto
            ::cLine += STRZERO(0,13)    // Valor do IOF
            ::cLine += STRZERO(0,13)    // Valor do Abatimento

            IF EMPTY(oBol:cCPF)
               ::cLine += "02"
               ::cLine += PADL(oBol:cCNPJ,14,"0")
            ELSE
               ::cLine += "01"
               ::cLine += PADL(oBol:cCPF,14,"0")
            ENDIF
            ::cLine += PAD(oBol:SACADO,40)
            ::cLine += PAD(oBol:Endereco1,40)
            ::cLine += PAD(oBol:Bairro,10)
            ::cLine += "  "

            ::cLine += PAD(oBol:CEP,8)
            ::cLine += PAD(oBol:Cidade,15)
            ::cLine += PAD(oBol:Estado,2)
            ::cLine += SPACE(30)
            ::cLine += SPACE(07)
            ::cLine += "422"
            ::cLine += "   "

      ENDCASE

   ELSE             // FEBRABAN

      ::cDtVenc := STRZERO(DAY(oBol:DtVenc),2)+STRZERO(MONTH(oBol:DtVenc),2)+RIGHT(STR(YEAR(oBol:DtVenc)),4)

      cCart := "01"

      IF ::cCodBco == "104"             // Caixa CNAB240 SIGCB, by SysTux (Toninho Silva), systux@yahoo.com.br, 30/10/09

         IF oBol:cCarteira = '1'        // Cobranca Simples
            ::nQtdSimples ++
            ::nVlrSimples += oBol:nValor
            cCart         := "1"
         ENDIF

      ELSE

         IF oBol:cCarteira = '11'       // cobranca simples
            ::nQtdSimples ++
            ::nVlrSimples += oBol:nValor
         ELSEIF oBol:cCarteira = '31'   // cobranca vinculada
            ::nQtdVinculada ++
            ::nVlrVinculada += oBol:nValor
            cCart           := "02"
         ELSEIF oBol:cCarteira = '71'   // cobranca caucionada
            ::nQtdCaucionada ++
            ::nVlrCaucionada += oBol:nValor
            cCart            := "03"
         ELSEIF oBol:cCarteira = '51'   // cobranca descontada
            ::nQtdDescontada ++
            ::nVlrDescontada += oBol:nValor
            cCart            := "04"
         ENDIF

      ENDIF

      IF ::cCodBco == "104"             // Caixa CNAB240 SIGCB, by SysTux (Toninho Silva), systux@yahoo.com.br, 30/10/09

         // Registro Detalhe Segmento P

         ::cLine += ::cCodBco           // 01.3P Codigo do Banco
         ::cLine += "0001"              // 02.3P Lote de Servico
         ::cLine += "3"                 // 03.3P Tipo de Registro
         ::cLine += STRZERO(++ ::nSeqReg,5)                 // 04.3P Numero Sequencia no Lote
         ::cLine += "P"                 // 05.3P Segmento P
         ::cLine += " "                 // 06.3P Exclusivo FEBRABAN
         ::cLine += "01"                // 07.3P Codigo do Movimento 01 - Entrada de Titulos
         ::cLine += PADL(oBol:cNumAgencia,5,"0")            // 08.3P Agencia
         ::cLine += PADL(oBol:cDvAgencia,1,"0")             // 09.3P Dv Agencia
         ::cLine += oBol:cCDPF          // 10.3P Cod. Cedente / Cod Convenio no Banco
         ::cLine += REPLICATE("0",11)   // 11.3P Exclusivo Caixa
         ::cLine += "14"                // 12.3P 14 = Modalidade Nosso Numero P/ Cobranca Registrada
         ::cLine += PADL(oBol:cNossoNumero,15,"0")          // 13.3P Nosso Numero
         ::cLine += oBol:cCarteira      // 14.3P Cod. Carteira, 1 Simples
         ::cLine += "1"                 // 15.3P Forma de Cadastramento do Titulo, 1 Cobranca Registrada, 2 Cobranca Sem Registro
         ::cLine += "2"                 // 16.3P Tipo de Documento, 1 Tradicional, 2 Escritural
         ::cLine += "2"                 // 17.3P Identificacao da Emissao do Bloqueto, 1 Banco Emite, 2 Cliente Emite
         ::cLine += "0"                 // 18.3P Identificacao da Entrega do Bloqueto, 0 Postagem Pelo Cedente, 1 Sacado Via Correios, 2 Cedente Via Agencia Caixa
         ::cLine += PAD(oBol:cNumDoc,11,"0")                // 19.3P Numero de Documento Cobranca, Seu N§
         ::cLine += SPACE(4)            // 20.3P Exclusivo Caixa
         ::cLine += ::cDtVenc           // 21.3P Data Vencimento Titulo
         ::cLine += STRZERO(oBol:nValor * 100,15)           // 22.3P Valor do Titulo
         ::cLine += REPLICATE("0",5)    // 23.3P Agencia Encarregada da Cobranca
         ::cLine += "0"                 // 24.3P Dv Agencia
         ::cLine += "02"                // 25.3P Especie do Titulo, 02 = DM (Duplicata Mercantil)
         ::cLine += "N"                 // 26.3P Identificao de Titulo, (A) = Aceite, (N) = Nao Aceite // Obs (A)ceite so tem funcionalidade quando o banco imprime e entrega os boletos
         ::cLine += ::cData             // 27.3P Data Emissao do Titulo

         // 28.3P Codigo do Juros de Mora, 1 Valor Por Dia, 2 Taxa Mensal, 3 Isento, 4 Acata Cadastro Caixa
         // 29.3P Data Juros de Mora, Vencimento
         IF oBol:nValMora == 0
            ::cLine += "3"
            ::cLine += "00000000"
         ELSE
            ::cLine += "1"
            ::cLine += ::cDtVenc
         ENDIF

         ::cLine += STRZERO(oBol:nValMora * 100,15)         // 30.3P Valor dos Juros de Mora Por Dia
         ::cLine += "0"                 // 31.3P Codigo do Desconto, 0 Sem Desconto
         ::cLine += "00000000"          // 32.3P Data do Desconto
         ::cLine += STRZERO(0,15)       // 33.3P Valor do Desconto
         ::cLine += STRZERO(0,15)       // 34.3P Valor do IOF
         ::cLine += STRZERO(0,15)       // 35.3P Valor do Abatimento
         ::cLine += PAD(oBol: cNumDoc,25)                   // 36.3P Identificacao do Titulo na Empresa

         // Codigo Para Protesto, 1 Protestar, 3 Nao Protestar, 9 Cancelamento Protesto Automatico
         IF oBol:nDiasProt > 0
            ::cLine += "1"              // 37.3P Codigo do Protesto
            ::cLine += STRZERO(oBol:nDiasProt,2)            // 38.3P Protestar em (nDiasProt) Dias Uteis
            ::cLine += "2"              // 39.3P Codigo Para Baixa Devolucao, 1 Baixar e Devolver,  2 Nao Baixar e Nao Devolver / Obs (1) Somente Quando nao Protestar
            ::cLine += "000"            // 40.3P Numero de Dias Para Baixa Devolucao, de 005 a 120 Dias Corridos / (000) Somente Quando Nao Baixar e Nao  Devolver
         ELSE
            ::cLine += "3"
            ::cLine += "00"
            ::cLine += "1"              // 39.3P Codigo Para Baixa Devolucao, 1 Baixar e Devolver,  2 Nao Baixar e Nao Devolver / Obs (1) Somente Quando nao Protestar
            ::cLine += "090"            // 40.3P Numero de Dias Para Baixa Devolucao, de 005 a 120 Dias Corridos / (000) Somente Quando Nao Baixar e Nao  Devolver
         ENDIF

         ::cLine += "09"                // 41.3P Codigo da Moeda 09 R$
         ::cLine += REPLICATE("0",10)   // 42.3P Exclusivo Caixa
         ::cLine += " "                 // 43.3P Exclusivo FEBRABAN
         ::Line()

         // Registro Detalhe Segmento Q

         ::cLine += ::cCodBco           // 01.3Q Codigo do Banco
         ::cLine += "0001"              // 02.3Q Lote de Servico
         ::cLine += "3"                 // 03.3Q Tipo de Registro
         ::cLine += STRZERO(++ ::nSeqReg,5)                 // 04.3Q Numero Sequencial do Registro Lote
         ::cLine += "Q"                 // 05.3Q Segmento Q
         ::cLine += " "                 // 06.3Q Exclusivo FEBRABAN
         ::cLine += "01"                // 07.3Q Codigo do Movimento 01 - Entrada de Titulos

         // 08.3Q Tipo de Inscricao, 1 CPF, 2 CNPJ
         IF LEN(oBol:CNPJ) < 14
            ::cLine += "1"
         ELSE
            ::cLine += "2"
         ENDIF

         ::cLine += PADL(oBol:CNPJ,15,"0")                  // 09.3Q Numero de Inscricao, CPF / CNPJ
         ::cLine += PAD(oBol:SACADO,40)                     // 10.3Q Nome Sacado
         ::cLine += PAD(oBol:Endereco1,40)                  // 11.3Q Endereco
         ::cLine += PAD(oBol:Bairro,15)                     // 12.3Q Bairro
         ::cLine += PAD(Bol:CEP,8)      // 13.3Q/14.3Q CEP(5)+Sufixo(3)
         ::cLine += PAD(oBol:Cidade,15)                     // 15.3Q Cidade
         ::cLine += PAD(oBol:Estado,2)  // 16.3Q UF
         ::cLine += "0"                 // 17.3Q Tipo de Inscricao Avalista
         ::cLine += REPLICATE("0",15)   // 18.3Q Numero de Inscricao Avalista
         ::cLine += SPACE(40)           // 19.3Q Nome do Avalista
         ::cLine += SPACE(03)           // 20.3Q Banco Correspondente
         ::cLine += SPACE(20)           // 21.3Q Nosso Numero no Banco Correspondente
         ::cLine += SPACE(08)           // 22.3Q Exclusivo FEBRABAN

      ELSE          // Outros Bancos, Padrao CNAB240

         // Registro detalhe Segmento P
         ::cLine += ::cCodBco           // codigo do banco
         ::cLine += "0001"              // lote de servico
         ::cLine += "3"                 // tipo de registro
         ::cLine += STRZERO(++ ::nSeqReg,5)                 // numero sequencia no lote
         ::cLine += "P"                 // segmento
         ::cLine += SPACE(1)            // uso exclusivo FEBRABAN
         ::cLine += "01"                // codigo do movimento 01 - entrada de titulos
         ::cLine += PADL(oBol:cNumAgencia,5,"0")            // agencia
         ::cLine += PADL(oBol:cDvAgencia,1,"0")             // digito da agencia
         ::cLine += PADL(oBol:cNumCC,12,"0")                // numero da conta corrente
         ::cLine += SPACE(2)            //
         ::cLine += PADL(oBol:cCarteira,2,"0")              // carteira
         ::cLine += "00000"             //
         ::cLine += PADL(oBol:cNossoNumero,13,"0")          // nosso numero

         ::cLine += "000"               //
         ::cLine += "2"                 // emissao do bloqueto 1 - banco emite
         ::cLine += " "                 //
         ::cLine += PAD(oBol:cNumDoc,15)                    // documento
         ::cLine += ::cDtVenc           // vencimento
         ::cLine += STRZERO(oBol:nValor * 100,15)           // valor do titulo
         ::cLine += "00000"             //
         ::cLine += " "                 //
         ::cLine += "04"                //
         ::cLine += PAD(oBol:Aceite,1)  // aceite do titulo
         ::cLine += ::cData             // emissao
         IF oBol:nValMora == 0
            ::cLine += "3"              // codigo do juros de mora 3 - isento
            ::cLine += "00000000"       // vencimento
         ELSE
            ::cLine += "1"              // codigo do juros de mora 1 - valor por dia
            ::cLine += ::cDtVenc        // vencimento
         ENDIF
         ::cLine += STRZERO(oBol:nValMora * 100,15)         // valor dos juros por dia

         ::cLine += "0"                 // codigo do desconto
         ::cLine += "00000000"          // Data do desconto
         ::cLine += STRZERO(0,15)       // Valor de Desconto
         ::cLine += STRZERO(0,15)       // Valor do IOF
         ::cLine += STRZERO(0,15)       // Valor do Abatimento
         ::cLine += PAD(oBol:cNumDoc,25)                    // identificacao do titulo na empresa
         IF oBol:nDiasProt > 0
            ::cLine += "2"              // codigo do protesto protestar dias uteis
            ::cLine += STRZERO(oBol:nDiasProt,2)            // protestar em (nDiasProt) dias
         ELSE
            ::cLine += "3"
            ::cLine += "00"
         ENDIF
         ::cLine += "0"                 //
         ::cLine += "   "               //
         ::cLine += "09"                // moeda
         ::cLine += "0000000000"        // numero do contrato da operacao de credito
         ::cLine += SPACE(1)            // use exclusivo FEBRABAN
         ::Line()   // imprime

         // Registro detalhe segmento Q
         ::cLine += ::cCodBco           // codigo do banco
         ::cLine += "0001"              // lote de servico
         ::cLine += "3"                 // tipo de registro
         ::cLine += STRZERO(++ ::nSeqReg,5)                 // numero sequencia no lote
         ::cLine += "Q"                 // segmento
         ::cLine += SPACE(1)            // uso exclusivo FEBRABAN
         ::cLine += "01"                // codigo do movimento 01 - entrada de titulos
         IF EMPTY(oBol:cCPF)
            ::cLine += "2"
         ELSE
            ::cLine += "1"
         ENDIF
         ::cLine += PADL(oBol:CNPJ,15,"0")
         ::cLine += PAD(oBol:SACADO,40)                     // nome do sacado
         ::cLine += PAD(oBol:Endereco1,40)                  // endereco
         ::cLine += PAD(oBol:Bairro,15)                     // bairro
         ::cLine += PAD(oBol:CEP,8)     // cep
         ::cLine += PAD(oBol:Cidade,15)                     // cidade
         ::cLine += PAD(oBol:Estado,2)  // UF
         ::cLine += "0"                 // tipo de inscricao avalista
         ::cLine += "000000000000000"   // tipo da inscricao
         ::cLine += SPACE(40)           // nome do avalista
         ::cLine += "000"               // banco correspondente
         ::cLine += SPACE(20)           // nome do banco correspondente
         ::cLine += SPACE(8)            // uso exclusivo FEBRABAN

      ENDIF

   ENDIF

   ::Line()

RETURN Self

/* -------------------------------------------------------------------------- */

METHOD CLOSE() CLASS oRemessa

   IF ::nTitLote < 1
      FCLOSE(::nHandle)
      FERASE(::Destino+::NomeRem)
      IF !FILE(::Destino+::NomeRem)
         ::NomeRem := ""
      ENDIF
   ELSE
      IF ::CNAB400
         IF ::cCodBco $ "356"           // Real
            ::cLine += "9"+STRZERO((::nTitLote),6)+STRZERO(::nVlrSimples * 100,13)+;
                                    REPLICATE(::cFillTrailer,374)
         ELSE
            ::cLine += "9"+REPLICATE(::cFillTrailer,393)    // conforme os manuais devem ser 'brancos'

         ENDIF

      ELSE

         IF ::cCodBco == "104"          // Caixa CNAB240 SIGCB, by SysTux (Toninho Silva), systux@yahoo.com.br, 30/10/09

            // Trailer de Lote
            ::cLine += ::cCodBco        // 01.5 Codigo do Banco
            ::cLine += "0001"           // 02.5 Lote de Servico
            ::cLine += "5"              // 03.5 Tipo de Registro
            ::cLine += SPACE(9)         // 04.5 Exclusivo FEBRABAN
            ::cLine += STRZERO((::nSeqReg+2),6)             // 05.5 Quantidade de Registros no Lote
            ::cLine += STRZERO(::nQtdSimples,6)             // 06.5 Qtde de Titulos - Cobranca Simples
            ::cLine += STRZERO(::nVlrSimples * 100,17)      // 07.5 Valor Total - Cobranca Simples
            ::cLine += STRZERO(::nQtdCaucionada,6)          // 08.5 Qtde de Titulos - Cobranca Caucionada
            ::cLine += STRZERO(::nVlrCaucionada * 100,17)   // 09.5 Valor Total - Cobranca Caucionada
            ::cLine += STRZERO(::nQtdDescontada,6)          // 10.5 Qtde de Titulos - Cobranca Descontada
            ::cLine += STRZERO(::nVlrDescontada * 100,17)   // 11.5 Valor Total - Cobranca Descontada
            ::cLine += SPACE(31)        // 12.5 Exclusivo FEBRABAN
            ::cLine += SPACE(117)       // 13.5 Exclusivo FEBRABAN
            ::Line()

            // Trailer de Arquivo
            ::cLine += ::cCodBco        // 01.9 Codigo do Banco
            ::cLine += "9999"           // 02.9 Lote de Servico
            ::cLine += "9"              // 03.9 Tipo de Registro
            ::cLine += SPACE(9)         // 04.9 Exclusivo FEBRABAN
            ::cLine += "000001"         // 05.9 Quantidade de Lotes do Arquivo
            ::cLine += STRZERO((::nSeqReg+4),6)             // 06.9 Quantidade de Registros do Arquivo
            ::cLine += SPACE(6)         // 07.9 Exclusivo FEBRABAN
            ::cLine += SPACE(205)       // 08.9 Exclusivo FEBRABAN

         ELSE       // Outros Bancos, Padrao CNAB240

            // Trailer Lote
            ::cLine += ::cCodBco        // codigo do banco
            ::cLine += "0001"           // lote de servico
            ::cLine += "5"              // tipo de registro
            ::cLine += SPACE(9)         // use exclusivo FEBRABAN
            ::cLine += STRZERO((::nSeqReg+2),6)             // quantidade de registros no lote
            ::cLine += REPLICATE("0",92)                    // use exclusivo Banco
            //::cLine += STRZERO(::nQtdSimples, 6)             // Número de Titulos - Cobrança Simples
            //::cLine += STRZERO(::nVlrSimples * 100, 17)      // Valor Total - Cobrança Simples
            //::cLine += STRZERO(::nQtdVinculada, 6)           // Número de Titulos - Cobrança Vinculada
            //::cLine += STRZERO(::nVlrVinculada * 100, 17)    // Valor Total - Cobrança Vinculada
            //::cLine += STRZERO(::nQtdCaucionada, 6)          // Número de Titulos - Cobrança Caucionada
            //::cLine += STRZERO(::nVlrCaucionada * 100, 17)   // Valor Total - Cobrança Caucionada
            //::cLine += STRZERO(::nQtdDescontada, 6)          // Número de Titulos - Cobrança Descontada
            //::cLine += STRZERO(::nVlrDescontada * 100, 17)   // Valor Total - Cobrança Descontada
            ::cLine += "00000000"       // numero do aviso de lancamento
            ::cLine += SPACE(117)       // uso exclusivo FEBRABAN
            ::Line()

            // Trailer Arquivo
            ::cLine += ::cCodBco        // codigo do banco
            ::cLine += "9999"           // lote de servico
            ::cLine += "9"              // tipo de registro
            ::cLine += SPACE(9)         // use exclusivo FEBRABAN
            ::cLine += "000001"         // Quantidade de lotes do arquivo
            ::cLine += STRZERO((::nSeqReg+4),6)             // Quantidade de registros do arquivo
            ::cLine += "000000"         // Quantidade de contas p/conc (lotes) especifico para conciliacao bancaria
            ::cLine += SPACE(205)       // uso exclusivo FEBRABAN

         ENDIF

      ENDIF

      ::Line()
      FCLOSE(::nHandle)

   ENDIF

RETURN Self

/* -------------------------------------------------------------------------- */

METHOD Line() CLASS oRemessa

   ::cLine := UPPER(::cLine)
   IF ::CNAB400
      ::cLine += STRZERO(++ ::nSeqReg,6)
      FWRITE(::nHandle,::cLine+CRLF)
      IF LEN(::cLine) != 400            // Erro!
         FWRITE(::nHandle,STRZERO(LEN(::cLine),5)+CRLF)
         Throw(ErrorNew("oRemessa",0,400,PROCNAME(),"Arquivos CNAB400 possuem 400 bytes por registro"+" ("+LTRIM(STR(LEN(::cLine)))+")",HB_aParams()))
      ENDIF
   ELSE
      FWRITE(::nHandle,::cLine+CRLF)
      IF LEN(::cLine) != 240            // Erro!
         FWRITE(::nHandle,STRZERO(LEN(::cLine),5)+CRLF)
         Throw(ErrorNew("oRemessa",0,240,PROCNAME(),"Arquivos FEBRABAN possuem 240 bytes por registro"+" ("+LTRIM(STR(LEN(::cLine)))+")",HB_aParams()))
      ENDIF
   ENDIF
   ::cLine := ""

RETURN Self

// eof

*+ EOF: OREMESSA.PRG


 /*
 * $Id: oRetorno.prg,v 1.32 2010/01/15 11:52:23 marioargon Exp $
 */
 /*
 * Copyright 2006 Mario Simoes Filho mario@argoninformatica.com.br for original oRemessa.prg
 * Copyright 2006 Marcelo Sturm <marcelo.sturm@gmail.com> for modifications in the original project
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307 USA (or visit the web site http://www.gnu.org/).
 *
 * As a special exception, the Harbour Project gives permission for
 * additional uses of the text contained in its release of Harbour.
 *
 * The exception is that, if you link the Harbour libraries with other
 * files to produce an executable, this does not by itself cause the
 * resulting executable to be covered by the GNU General Public License.
 * Your use of that executable is in no way restricted on account of
 * linking the Harbour library code into it.
 *
 * This exception does not however inVALidate any other reasons why
 * the executable file might be covered by the GNU General Public License.
 *
 * This exception applies only to the code released by the Harbour
 * Project under the name Harbour.  If you copy code from other
 * Harbour Project or Free Software Foundation releases into a copy of
 * Harbour, as the General Public License permits, the exception does
 * not apply to the code that you add in this way.  To avoid misleading
 * anyone as to the status of such modified files, you must delete
 * this exception notice from them.
 *
 * If you write modifications of your own for Harbour, it is your choice
 * whether to permit this exception to apply to your modifications.
 * If you do not wish that, delete this exception notice.
 *
 */

/* Exemplo de utilizacao

func main()

   set date to brit
   altd(.t.)
   altd()
    oRet:=oRetorno("237")

    IF oRet:cCodBco=="237"

       DO WHILE !oRet:eof()
           ? "dados do titulo"
           IF oRet:isPago
              ? "o Titulo abaixo foi pago"
           ENDIF
           IF oRet:isOk
              ? "o Titulo foi processado"
           ENDIF
           ? "Nosso Numero:" + oRet:cNossoNumero
           ? "Vencimento  :" + dtoc(oRet:DtVenc)
           ? "Pago/processado:" + dtoc(oRet:DtPagto)
           ? "a quantia de:" + str(oRet:nValor)
           ? "a Multa foi :" + str(oRet:nMulta)
           ? "Documento No:" + oRet:cNumDoc
           ? "no Banco: " + oRet:cBcoPag
           ? "na agencia " + oRet:cNumAgencia
           ? "Ocorrencia: "+ oRet:cOcorrencia
           ? "Descricao: "+oRet:cDescOcorrencia
           ? "Codigo da rejeicao:" + oRet:cRejeicao
           oRet:Next()
           inkey(0)
       ENDDO
    ENDIF

*/

#include "harbourboleto.ch"
#include "fileio.ch"
#include "hbclass.ch"

CLASS oRetorno

DATA cLine           INIT ""  PROTECTED

DATA nHandle         INIT 0   PROTECTED  // link - Arquivo Retorno (Fopen)
DATA nLen            INIT 0   PROTECTED  // tamanho do arquivo de retorno em bytes

DATA cCodBco         INIT ""  READONLY
DATA cNomeBco        INIT ""  READONLY
DATA DtVenc          INIT ctod("") READONLY   // Data de vencimento no Formato data
DATA DtPagto         INIT ctod("") READONLY   // Data de pagamento no Formato data
DATA nValor          INIT 0   READONLY   // Valor Recebido
DATA nMulta          INIT 0   READONLY   // Valor da Multa
DATA cNumDoc         INIT ""  READONLY
DATA cNossoNumero    INIT ""  READONLY
DATA cBcoPag         INIT ""  READONLY // Banco onde foi feito o pagamento
DATA cNumAgencia     INIT ""  READONLY //  Agencia onde foi feito o pagamento
DATA cRejeicao       INIT ""   READONLY // codigo da ocorrencia
DATA cOcorrencia     INIT ""  READONLY // descri‡Æo das ocorrencias
DATA cDescOcorrencia INIT ""  READONLY // descri‡Æo das ocorrencias
DATA isPago          INIT .f. READONLY //  Titulo foi pago
DATA isOk            INIT .f. READONLY //  titulo processado normalmente

DATA CNAB400         INIT .T.          // .T. = CNAB400 ou .F. = CNAB240(Febraban)


METHOD New( cBco, cArq ) CONSTRUCTOR
METHOD Next()
METHOD eof()
METHOD Close()
METHOD Readln(nBytes) PROTECTED
METHOD OcorrenciaExt() PROTECTED
ENDCLASS

/* -------------------------------------------------------------------------- */

METHOD new( cBco, cArq ) CLASS oRetorno
   local nBytes

   DEFAULT cBco TO "237"

   IF file(cArq)
      ::nHandle :=fopen(cArq)
      ::nLen    := FSEEK(::nHandle,0,FS_END )
      FSEEK(::nHandle,0 )
      HB_FReadLine(::nHandle,@::cLine)
      ::CNAB400:=(len(::cLine) == 400)
      FSEEK(::nHandle,0 )
      IF ::CNAB400
    DO CASE
       CASE cBco == "237"
         ::READLN(402)

          IF SUBS(::cLine,077 ,3) == cBco
        ::cNomeBco:= "BRADESCO"
        ::cCodBco := cBco
          endif

       CASE cBco == "341"
          ::READLN(402)

          IF SUBS(::cLine,077  ,3) == cBco
        ::cNomeBco:= "BANCO ITAU  SA"
        ::cCodBco := cBco
          endif

       CASE cBco == "409"
          ::cNomeBco   := "UNIBANCO"
          ::cCodBco := cBco
       CASE cBco == "422"
          ::cNomeBco := "Safra"
          ::cCodBco := cBco
       OTHERWISE
          ::nLen:=0
    ENDCASE
    ::cNomeBco := PAD(::cNomeBco, 15)
      else
        ::READLN(242)
        ::cNomeBco := subs(::cLine,103,40)
        ::cCodBco  := subs(::cLine,1,3)

      ENDIF
      ::Next()
   ENDIF

RETURN Self

/* -------------------------------------------------------------------------- */
METHOD Next( ) CLASS oRetorno
   local cIDreg:=""
   ::isPago :=.F.
   ::isOk   :=.F.

   IF ::CNAB400

      DO CASE

         CASE ::cCodBco == "237"
         DO WHILE cIDreg # "1" .and. .not. ::eof()
       ::READLN(402)
       cIDreg:=SUBS(::cLine,1,1)
         ENDDO
         IF ::Eof()
       ::Close()
         ELSE

       ::DtVenc      :=ctod(trans(SUBS(::cLine,147,6) ,"@R 99/99/2099"))
       ::DtPagto     :=ctod(trans(SUBS(::cLine,111,6) ,"@R 99/99/2099"))
       ::nValor      :=val(SUBS(::cLine,254,13))/100
       ::nMulta      :=val(SUBS(::cLine,267,13))/100
       ::cNumDoc     :=SUBS(::cLine,117,10)
       ::cNossoNumero:=SUBS(::cLine,071,12)
       ::cBcoPag     :=SUBS(::cLine,166,3)
       ::cNumAgencia :=SUBS(::cLine,169,5)
       ::cOcorrencia :=SUBS(::cLine,109,2)
       ::cRejeicao   :=SUBS(::cLine,319,10)

       IF "06" $ ::cRejeicao .or."17" $ ::cOcorrencia
          ::isPago :=.t.
       ENDIF

       // temos aqui o problema de acentuacao ANSI/OEM
       // algo para ser resolvido ...
       ::OcorrenciaExt()
         ENDIF
    CASE ::cCodBco == "341"
         DO WHILE cIDreg # "1" .and. .not. ::eof()
       ::READLN(402)
       cIDreg:=SUBS(::cLine,1,1)
         ENDDO
         IF ::Eof()
       ::Close()
         ELSE
       ::DtVenc      :=ctod(trans(SUBS(::cLine,147,6) ,"@R 99/99/2099"))
       ::DtPagto     :=ctod(trans(SUBS(::cLine,296,6) ,"@R 99/99/2099"))
       ::nValor      :=val(SUBS(::cLine,153 ,13))/100
       ::nMulta      :=val(SUBS(::cLine,267,13))/100
       ::cNumDoc     :=SUBS(::cLine,038,25)
       ::cNossoNumero:="0000"+SUBS(::cLine,063,08)
       ::cBcoPag     :=SUBS(::cLine,166 ,3)
       ::cNumAgencia :=SUBS(::cLine,169 ,5)
       ::cOcorrencia :=SUBS(::cLine,109,2)
       ::cRejeicao   :=SUBS(::cLine,378,8)
       ::cDescOcorrencia:=""
          ENDIF
    CASE ::cCodBco == "409"
       DO WHILE cIDreg # "1" .and. .not. ::eof()
          ::READLN(402)
          cIDreg:=SUBS(::cLine,1,1)
       ENDDO
       IF ::Eof()
          ::Close()
       ELSE

         ::DtVenc      :=ctod(trans(SUBS(::cLine,147,6) ,"@R 99/99/2099"))
         ::DtPagto     :=ctod(trans(SUBS(::cLine,111,6) ,"@R 99/99/2099"))
         ::nValor      :=val(SUBS(::cLine,254,13))/100
         ::nMulta      :=val(SUBS(::cLine,267,13))/100
         ::cNumDoc     :=SUBS(::cLine,117,12)
         ::cNossoNumero:=SUBS(::cLine,063,15)
         ::cBcoPag     :=SUBS(::cLine,166,3)
         ::cNumAgencia :=SUBS(::cLine,169,5)
         ::cOcorrencia :=SUBS(::cLine,109,2)
         ::cRejeicao   := ""//SUBS(::cLine,319,10)

         //IF left(::cOcorrencia,2) $ "06 17"
           ::isPago :=.t.
         //ENDIF

         // temos aqui o problema de acentuacao ANSI/OEM
         // algo para ser resolvido ...
         ::OcorrenciaExt()
       ENDIF
    CASE ::cCodBco == "422"
         DO WHILE cIDreg # "1" .and. .not. ::eof()
       ::READLN(402)
       cIDreg:=SUBS(::cLine,1,1)
         ENDDO
         IF ::Eof()
       ::Close()
         ELSE
       ::DtVenc      :=ctod(trans(SUBS(::cLine,147,6) ,"@R 99/99/2099"))
       ::DtPagto     :=ctod(trans(SUBS(::cLine,111,6) ,"@R 99/99/2099"))
       ::nValor      :=val(SUBS(::cLine,153 ,13))/100
       ::nMulta      :=val(SUBS(::cLine,267,13))/100
       ::cNumDoc     :=SUBS(::cLine,117,10)
       IF SUBS(::cLine,108,1) =="6"
          ::cNossoNumero:=SUBS(::cLine,38,17)+" "
       ELSE
          ::cNossoNumero:="000"+SUBS(::cLine,63,9)
       ENDIF
       ::cBcoPag     := ""
       ::cNumAgencia := ""
          ::isPago :=.t.
       ::cOcorrencia :=SUBS(::cLine,109,2)
       ::cRejeicao   :=SUBS(::cLine,105,3)
       ::cDescOcorrencia:=""
       IF "06" $ ::cOcorrencia
          ::isPago :=.t.
       ENDIF
          ENDIF
      ENDCASE

   ELSE // CNAB240

     If ::cCodBco == "104"

        DO WHILE cIDreg # "3" .and. .not. ::eof()
           ::READLN(242)
           cIDreg:=SUBS(::cLine,8,1)
        ENDDO

        IF ::Eof()
           ::Close()
        ELSE

          Seg := SUBS(::cLine,14,1) // Segmento Detalhe (T) (U)

          If Seg == "T"
             ::cOcorrencia  := SUBS(::cLine,16,2)
             ::cNossoNumero := SUBS(::cLine,40,17)
             ::cNumDoc      := SUBS(::cLine,59,11)
             ::DtVenc       := CTOD(Tran(SUBS(::cLine,74,8)  ,"@R 99/99/9999"))
             ::nValor       := VAL(SUBS(::cLine,82,15))/100
             ::cBcoPag      := SUBS(::cLine,97,3)
             ::cNumAgencia  := SUBS(::cLine,100,5)
             ::cRejeicao    := SUBS(::cLine,214,10)
          Endif

          If Seg == "U"
             ::DtPagto      := CTOD(Tran(SUBS(::cLine,138,8) ,"@R 99/99/9999"))
             ::nMulta       := VAL(SUBS(::cLine,18,15))/100
          Endif

          ::isPago       := ( ::cOcorrencia == "06" )
          ::OcorrenciaExt()

        ENDIF

     Else  // Outros

        DO WHILE cIDreg # "3" .and. .not. ::eof()
           ::READLN(242)
           cIDreg:=SUBS(::cLine,8,1)
        ENDDO
        IF ::Eof()
           ::Close()
        ELSE
           ::DtVenc      :=ctod(trans(SUBS(::cLine,72,8) ,"@R 99/99/9999"))
           ::DtPagto     :=date()
           ::nValor      :=val(SUBS(::cLine,80,15))/100
           ::nMulta      :=val(SUBS(::cLine,110,15))/100
           ::cNumDoc     :=SUBS(::cLine,59,13)
           ::cNossoNumero:=SUBS(::cLine,047,10)
           ::cBcoPag     :=SUBS(::cLine,095,3)
           ::cNumAgencia :=SUBS(::cLine,098,6)
           ::cOcorrencia :=SUBS(::cLine,016,2)
           ::cRejeicao   :=SUBS(::cLine,226,10)
           ::isPago :=( ::cOcorrencia =="06" )
           ::OcorrenciaExt()
        ENDIF

     Endif

   ENDIF

RETURN Self

/* -------------------------------------------------------------------------- */
METHOD eof( ) CLASS oRetorno
return (::nLen == 0)

/* -------------------------------------------------------------------------- */
METHOD Close( ) CLASS oRetorno
   fclose(::nHandle)
RETURN Self

/* -------------------------------------------------------------------------- */
METHOD Readln(nBytes) CLASS oRetorno

   ::cLine:=space(nBytes)
   FREAD(::nHandle,@::cLine,nBytes)
   ::nLen-=nBytes
return ::cLine

METHOD OcorrenciaExt() CLASS oRetorno

      DO CASE
         CASE ::cOcorrencia == "02"
              ::cDescOcorrencia:="Entrada Confirmada"
              ::isOk   :=.t.
         CASE ::cOcorrencia == "03"
              ::cDescOcorrencia:="Entrada Rejeitada motivo "+::cRejeicao
         CASE ::cOcorrencia == "06"
              ::cDescOcorrencia:="Liquida‡Æo normal"
         CASE ::cOcorrencia == "09"
              ::cDescOcorrencia:="Baixado Automat. via Arquivo motivo "+::cRejeicao
         CASE ::cOcorrencia == "10"
              ::cDescOcorrencia:="Baixado conforme instru‡äes da Agˆncia motivo "+::cRejeicao
         CASE ::cOcorrencia == "11"
              ::cDescOcorrencia:="Em Ser - Arquivo de T¡tulos pendentes"
         CASE ::cOcorrencia == "12"
              ::cDescOcorrencia:="Abatimento Concedido"
         CASE ::cOcorrencia == "13"
              ::cDescOcorrencia:="Abatimento Cancelado"
         CASE ::cOcorrencia == "14"
              ::cDescOcorrencia:="Vencimento Alterado"
         CASE ::cOcorrencia == "15"
              ::cDescOcorrencia:="Liquidacao em Cartorio"
         CASE ::cOcorrencia == "16"
              ::cDescOcorrencia:="Titulo Pago em Cheque Vinculado"
         CASE ::cOcorrencia == "17"
              ::cDescOcorrencia:="Liquida‡Æo apos baixa ou Titulo nao registrado"
         CASE ::cOcorrencia == "18"
              ::cDescOcorrencia:="Acerto de Deposit ria"
         CASE ::cOcorrencia == "19"
              ::cDescOcorrencia:="Confirma‡ao Receb. Inst. de Protesto motivo "+::cRejeicao
         CASE ::cOcorrencia == "20"
              ::cDescOcorrencia:="Confirma‡ao Recebimento Instru‡Æo Susta‡ao de Protesto"
         CASE ::cOcorrencia == "21"
              ::cDescOcorrencia:="Acerto do Controle do Participante"
         CASE ::cOcorrencia == "22"
              ::cDescOcorrencia:="Titulo Com Pagamento Cancelado"
         CASE ::cOcorrencia == "23"
              ::cDescOcorrencia:="Entrada do Titulo em Cartorio"
         CASE ::cOcorrencia == "24"
              ::cDescOcorrencia:="Entrada rejeitada por CEP Irregular motivo "+::cRejeicao
         CASE ::cOcorrencia == "27"
              ::cDescOcorrencia:="Baixa Rejeitada motivo "+::cRejeicao
         CASE ::cOcorrencia == "28"
              ::cDescOcorrencia:="Debito de tarifas/custas motivo "+::cRejeicao
         CASE ::cOcorrencia == "30"
              ::cDescOcorrencia:="Altera‡ao de Outros Dados Rejeitados motivo "+::cRejeicao
         CASE ::cOcorrencia == "32"
              ::cDescOcorrencia:="Instru‡ao Rejeitada motivo "+::cRejeicao
         CASE ::cOcorrencia == "33"
              ::cDescOcorrencia:="Confirma‡ao Pedido Alteracao Outros Dados"
         CASE ::cOcorrencia == "34"
              ::cDescOcorrencia:="Retirado de Cartorio e Manutencao Carteira"
         CASE ::cOcorrencia == "35"
              ::cDescOcorrencia:="Desagendamento do debito autom tico motivo "+::cRejeicao
         CASE ::cOcorrencia == "68"
              ::cDescOcorrencia:="Acerto dos dados do rateio de Credito"
         CASE ::cOcorrencia == "69"
              ::cDescOcorrencia:="Cancelamento dos dados do rateio"
         OTHERWISE
              ::cDescOcorrencia:=""
      ENDCASE

return ::cDescOcorrencia

// eof


/*
 * $Id: xhbrun.prg,v 1.8 2010/04/06 21:33:16 marioargon Exp $
*/

#include "common.ch"

/* -------------------------------------------------------------------------- */

FUNCTION xhbrun( cCommand, lWait, lBackG )
   LOCAL hIn, hOut, hProc, nRet ,hErr

   hProc := HB_OpenProcess(cCommand, @hIn, @hOut, @hErr, lBackG)
   IF hProc > 0
      nRet :=  HB_ProcessValue(hProc, lWait)
   ENDIF
   FCLOSE(hProc)
   FCLOSE(hIn)
   FCLOSE(hOut)
   FCLOSE(hErr)
RETURN nRet


#IFNDEF __PLATFORM__Linux
#pragma BEGINDUMP

#include <windows.h>
#include <hbapi.h>

// ShellExecute( cFile, cOperation, cParams, cDir, nFlag )
HB_FUNC( SHELLEXECUTE )
{
   hb_retnl( (LONG) ShellExecute( GetActiveWindow(),
              ISNIL(2) ? NULL : (LPCSTR) hb_parc(2),
              (LPCSTR) hb_parc(1),
              ISNIL(3) ? NULL : (LPCSTR) hb_parc(3),
              ISNIL(4) ? "C:\\" : (LPCSTR) hb_parc(4),
              ISNIL(5) ? 1 : hb_parni(5) ) ) ;
}

#pragma ENDDUMP
#ENDIF
***************************************** F I M ************************************
