#include "winuser.ch"
#include "wvwtools.ch"
#include "inkey.ch"

REQUEST HB_LANG_ES
REQUEST HB_CODEPAGE_ES
REQUEST HB_CODEPAGE_ESMWIN
REQUEST HB_CODEPAGE_ESWIN

GLOBAL oApp

//****
FUNCTION Main()
//****
   // Change this settings before instantiating the WvW_tApplication() object.
   // Look at tAppl.prg for other options...
   // You have to make the needed 'REQUEST' for your settings, look above.
   WvW_SetGet( "LANGUAGE"    , "ES" )
   WvW_SetGet( "RDD_CODEPAGE", "ESWIN" )
   WvW_SetGet( "RDD"         , "DBFCDX" )
   WvW_SetGet( "CODEPAGE"    , 255 )
   WvW_SetGet( "WIN_ROWS"    , 28 )
   WvW_SetGet( "WIN_COLS"    , 88 )
   //
   // Creates, configures and run the main object of the app.
   // WvW_tApplication() inherits from WvW_tWindows()...
   WITH OBJECT ( oApp := WvW_tApplication():New( CurDrive() + ":\" + CurDir() ) )
      :cImagePath := CurDrive() + ":\" + CurDir() + "\resources\"
      :Setup()
      //
      :SetTitle( "WvWTools Version " + WvW_tVersion() )
      :SetIcon( "window.ico" )
      //
      :CreateMenu()
       :BeginPopup( "Opciones" )
        // AddMenuItem( cCaption, bBlock, bCondition, cBitmap, lAddToContext, cFlag, nKeyCode )
        :AddMenuItem( "WvW_tBrowse()", {|| BrowseTest() },,,, "CTRL+B", K_CTRL_B )
        :AddMenuItem()
        :AddMenuItem( "WvW_GetSys()", {|| GetSysTest() },,,, "CTRL+G", K_CTRL_G )
        :AddMenuItem()
        :AddMenuItem( "Salir", {|| QuitApp() },, "salir.bmp" )
       :EndPopup()
       //
       :BeginPopup( "Info." )
        :AddMenuItem( "Version Information", {|| WvW_Alert( "WvW_Tools v" + WvW_tVersion() ) },, "setup.bmp" )
       :EndPopup()
      :SetMenu()
      //
      :CreateContextMenu()
       :BeginContextPopup( "Opciones" )
        :AddContextMenuItem( "WvW_tBrowse()", {|| BrowseTest() } )
        :AddContextMenuItem()
        :AddContextMenuItem( "WvW_GetSys()", {|| GetSysTest() } )
       :EndContextPopup()
       :AddContextMenuItem()
       :AddContextMenuItem( "Salir", {|| QuitApp() },, "salir.bmp" )
      //
      :CreateSystemMenu()
       :AddSystemMenuItem()
       :AddSystemMenuItem( "System Test #1", {|| WvW_Alert( "You clicked System Menu #1" ) } )
       :AddSystemMenuItem( "System Test #2", {|| WvW_Alert( "You clicked System Menu #2" ) } )
      //
      :CreateToolBar()
      :AddToolBarButton()
      :AddToolBarButton( "Info.",  {|| WvW_Alert("Info!") },, 12 )
      :AddToolBarButton( "Manual", {|| WvW_Alert("Manual!") },, "safety.bmp" )
      :AddToolBarButton( "Setup",  {|| WvW_Alert("Setup!" ) },, 10 )
      :AddToolBarButton()
      :AddToolBarButton( "Background", {|| WvW_Alert("Here will go a popup menu !!!" ) },, 14, .T. ) // Doesn't work yet!
      :AddToolBarButton()
      :AddToolBarButton( "Salir/Exit", {|| QuitApp() },, 25 )
      //
      IF :CreateStatusBar()
         //AddStatusPart( bText, cIcon, cToolTip )
         :AddStatusPart( {|| IF( StatusKey( VK_INSERT ) = 0, REPLICATE( CHR(0), 3 ), "INS" ) } )     // Section 2
         :AddStatusPart( {|| IF( StatusKey( VK_NUMLOCK ) = 0, REPLICATE( CHR(0), 3 ), "NUM" ) } )    // Section 3
         :AddStatusPart( {|| IF( StatusKey( VK_CAPITAL ) = 0, REPLICATE( CHR(0), 4 ), "CAPS" ) } )   // Section 4
         :AddStatusPart( {|| IF( StatusKey( VK_SCROLL ) = 0, REPLICATE( CHR(0), 6 ), "SCROLL" ) } )  // Section 5
         :AddStatusPart( {|| STR(mRow(),3) + "x" + STR(mCol(),3) } )                                 // Section 6
         :AddStatusPart( {|| TIME() }, "bloquear.ico", "This is the current time of this pc!" )      // Section 7
         //
         :SetStatusBar( 1, "A collection of classes to make the most out of GtWvw!" )
      ENDIF
      //
      // Have to think of an easier way of painting this kind of 'objects' ...
      :AddGuiObject( {|| Wvw_DrawColorRect( :nHandle, 22, 46, 25, 84, {-10,0,+5,0}, RGB(230,139,44) ), ;
          WVW_DrawLabel( :nHandle, 23, 65, "WvWTools Version " + WvW_tVersion(), 6, 5, RGB(225,225,76), RGB(230,139,44), ;
                                         "Tahoma",,, 2 ) } )
      //
      :lDevelopment := .T.
      :Run( ,, .T. )
   END
   //
   RETURN (.T.)

//****
FUNCTION BrowseTest()
//****
   LOCAL oWindow, oBrowse, cFile := "data\nits"
   //
   BEGIN SEQUENCE
      USE ( cFile ) INDEX ( cFile ) NEW ALIAS TEST
      //
      WITH OBJECT ( oWindow := WvW_TWindow():New( 4, 5, 24, 78 ) )
         :SetTitle( "Archivo de Nits/C‚dulas" )
         :SetStatusBar( " ESC Salir INS Crear ENTER Editar F7 Buscar DEL Eliminar" )
         :Create( "BROWSE" )
         //
         WITH OBJECT ( oBrowse := WvW_TBrowseDB( oWindow, "TEST" ) )
            // CreateColumn( cHeading, bBlock, bCondition, cTag )
            :CreateColumn( "NIT/C‚dula", {|| NIT },, "CODIGO" )
            :CreateColumn( "Nombre",     {|| NOMBRE },, "NOMBRE" )
            :CreateColumn( "Comercial",  {|| COMERCIAL },, "COMERCIAL" )
            :CreateColumn( "Direcci¢n",  {|| DIRECCION } )
            :CreateColumn( "Telefono",   {|| TELEFONO } )
            //
            // AddAction( nKey, bBlock, bCondition, cTitle, lAddToContext, nKey2, nUserLevel )
            :AddAction( K_INS,   {|| Alert("You pressed INS key!") } )
            :AddAction( K_ENTER, {|| Alert("You pressed ENTER key!") } )
    	    :AddAction( K_DEL,   {|| Alert( "You pressed DEL key!" ) } )
   	    //
   	    :lMultiSelect := .T.
   	    //
            :Run()
         END
      END
      //
      CLOSE TEST
   END SEQUENCE
   //
   RETURN NIL

//****
FUNCTION GetSysTest()
//****
   LOCAL oWindow, lSave := .F., nChoice, nOthers, nCfg, cNameImp
   LOCAL aPuertos := { "LPT1", "LPT2", "LPT3", "LPT4" }, ;
         aMonitor := { { "Color", 4 }, { "VGA-Mono", 7 }, { "Monocr¢matico", 15 } }, ;
         aOSes := { "WINDOWS 95", "WINDOWS 98", "WINDOWS ME", "WIN NT", "WINDOWS 2000", "WINDOWS XP" }, ;
         aTiposImp := { { "Matrix de Punto", "A" }, { "Impresi¢n Windows", "B" } }, ;
         aXlsProg := { "Interno", "Excel OLE", "OpenOffice" }, ;
         aFontList := { "Lucida Console", "Tahoma", "Arial" }
   LOCAL aPrinters := GetPrinters(), nLine := 18
   //
   AADD( aPrinters, "<NO DISPONIBLES>" )
   cNombre  := PADR( "WvWTest", 15 )
   cOS      := "WINDOWS XP"
   nMonitor := 1
   nFont    := 1
   nSizeV   := nSizeH := 0
   nType    := 1
   cPrinter := SPACE(60)
   lMed     := .F.
   lDisableTab := .F.
   nPort    := 2
   nXls     := 1
   //
   WITH OBJECT ( oWindow := WvW_tWindow():New( 4, 1, 22, 82, "Equipo", "WINDOW" ) )
      :SetTitle( "Editar Datos del Equipo" )
      :SetStatusBar( "WvwGetsys Demo!" )
      :SetFont( "Courier New" )
      :Create()
      //
      @ 01,02 SAY "Nombre Equipo......:" GET cNombre PICTURE "@!" VALID NombreEquipo()
      @ 02,02,12,44 GET cOS ;
                            LISTBOX aOSes CAPTION "Sistema Operativo..:" DROPDOWN SCROLLBAR
      @ 03,02,13,44 GET nMonitor ;
                         LISTBOX aMonitor CAPTION "Tipo Monitor.......:" DROPDOWN SCROLLBAR
      DEFINE TABCONTROL tab FROM 5,2 TO 12,45
         DEFINE PAGE Screen CAPTION "Pantalla"
            @ 1, 1, 4, 40 GET nFont ;
                          LISTBOX aFontList CAPTION "Fuente de Letra..:" DROPDOWN SCROLLBAR
            @ 2,01 SAY "Dimensiones......: Alto" GET nSizeV PICTURE "99"
            @ 2,28 SAY "x Ancho" GET nSizeH PICTURE "99"
         END PAGE

         DEFINE PAGE Impresion CAPTION "Impresi¢n"
            @ 1,01,4,43 GET nType ;
                       LISTBOX aTiposImp CAPTION "Tipo impresi¢n.....:" DROPDOWN SCROLLBAR
            @ 2,01,5,43 GET cPrinter ;
                       LISTBOX aPrinters CAPTION "Impresora Principal:" DROPDOWN SCROLLBAR
            @ 3,01,6,43 GET nPort ;
                        LISTBOX aPuertos CAPTION "Puerto Impresi¢n...:" DROPDOWN SCROLLBAR
         END PAGE

         DEFINE PAGE Others CAPTION "Others"
            @ 1,01 GET lMed CHECKBOX CAPTION "Usar Editor MED para ver reportes" ;
                                           WHEN ! EMPTY(cNombre) STATE ShowGet( "nOthers", lMed )
            @ 2,01 TO 5,41 TITLE "Otras Configuraciones"
            @ 3,03,6,38 GET nXls LISTBOX aXlsProg CAPTION "Hojas Electr¢nica:" DROPDOWN SCROLLBAR
            @ 4,03 GET nOthers PUSHBUTTON CAPTION " &Apariencia y Otros Aspectos..." DISABLED VALID {|| WvW_Alert( "WHAT !?" ) }
            // getList[-1]:disable() ---> Can use this instead of DISABLED clause.
         END PAGE
      END TABCONTROL
      @ 14,02 GET lDisableTab CHECKBOX ;
                CAPTION "Click here to disable tab 'Impresion'" STATE WvW_ShowTabPage( "Impresion", .F. )
      @ 16,05 GET nChoice ;
                     PUSHBUTTON CAPTION "   &Grabar   " STATE {|| :SaveForm() }
      @ 16,28 GET nChoice ;
                     PUSHBUTTON CAPTION "  &Cancelar  " STATE {|| :CancelForm() }
      //
      WvW_GBcreate( , 01, 50, 04, 76," Escoja Orden ",,,  { -2, -2, +8, +8 } )
      WvW_RBcreate( , 02, 52, 02, 75, "Codigo",,     {|| fSet(1)} )
      WvW_RBcreate( , 03, 52, 03, 75, "Nombre",,     {|| fSet(2)} )
      WvW_RBcreate( , 04, 52, 04, 75, "Referencia",, {|| fSet(3)} )
      //
      @ 06,49 SAY "RadioButtons are NOT part of"
      @ 07,49 SAY "GetSys.prg yet!"
      @ 08,49 SAY "Botones de Radio NO son parte"
      @ 09,49 SAY "de Getsys.prg todavia. Falta"
      @ 10,49 SAY "bastante trabajo a£n."
      //
      WvW_GBcreate( , 12, 50, 13, 76, " Your Opinion ",,,  { -2, -2, +9, +9 } )
      WvW_RBcreate( , 13, 52, 13, 64, "This Rocks!",, {|| fSet(1)} )
      WvW_RBcreate( , 13, 66, 13, 75, "Sucker!!!",,   {|| fSet(2)} )
      //
      :Activate( .T., .T. ) // Instead of READ CYCLE
      :Close()
      IF :DialogOk()
         WvW_Alert( STR(nMonitor,3) + "/" ;
              + cOS + "/" + STR(nType,3) + "/" + IF( lMed, "SI", "No" ), "Saved" )
      ENDIF
   END
   //
   RETURN (.T.)

//****
FUNCTION fSet( nPos )
//****
   WvW_MESSAGEBOX( NIL, "RadioButton #" + STR(nPos,2), "WvWTools" )
   //
   RETURN (.T.)

//****
FUNCTION NombreEquipo()
//****
   IF LEN(ALLTRIM(cNombre)) <= 7
      WvW_Alert( "Nombre muy corto" )
      RETURN (.F.)
   ENDIF
   //
   RETURN (.T.)

//****
FUNCTION SysAlert( ... )
//****
   LOCAL xMessage, lIsArray, nCurrWin
   STATIC lPostP, aMessage := {}
   //
   IF ( lPostP = NIL )
      aMessage := {}
   ENDIF
   FOR EACH xMessage IN HB_aParams()
      lIsArray := .F.
      SWITCH ValType( xMessage )
      CASE "C"
      CASE "M"
         EXIT
      CASE "N"
         xMessage := LTrim( Str( xMessage ) )
         EXIT
      CASE "D"
         xMessage := DToC( xMessage )
         EXIT
      CASE "L"
         xMessage := IF( xMessage, ".T.", ".F." )
         EXIT
      CASE "O"
         xMessage := xMessage:className + " Object"
         EXIT
      CASE "B"
         xMessage := "{||...}"
         EXIT
      CASE "A"
         lPostP := lIsArray := .T.
         EXIT
      DEFAULT
         xMessage := "NIL"
      END
      IF ( lIsArray )
         AADD( aMessage, "Vector ->" )
      ELSE
         AADD( aMessage, xMessage )
      ENDIF
   NEXT
   //
   Alert( aMessage )
   lPostP := NIL
   //
   RETURN (.T.)

//****
FUNCTION ShowClue( ... )
//****
   LOCAL xMessage
   STATIC lPostP, cMessage := ""
   //
   IF ( lPostP = NIL )
      cMessage := ""
   ENDIF
   FOR EACH xMessage IN HB_aParams()
      lIsArray := .F.
      SWITCH ValType( xMessage )
      CASE "C"
      CASE "M"
         EXIT
      CASE "N"
         xMessage := LTrim( Str( xMessage ) )
         EXIT
      CASE "D"
         xMessage := DToC( xMessage )
         EXIT
      CASE "L"
         xMessage := IF( xMessage, ".T.", ".F." )
         EXIT
      CASE "O"
         xMessage := xMessage:className + " Object"
         EXIT
      CASE "B"
         xMessage := "{||...}"
         EXIT
      CASE "A"
         lPostP := lIsArray := .T.
         EXIT
      DEFAULT
         xMessage := "NIL"
      END
      cMessage += ( "/" + xMessage )
   NEXT
   WvW_SBsetText( 1, 0, "* " +  cMessage )
   lPostP := NIL
   //
   RETURN (.T.)

//****
FUNCTION QuitApp( lDoBreak )
//****
   LOCAL nButton
   //
   nButton:= WvW_MessageBox( NIL, CRLF + "  Desea salir de este programa ahora ?   " ;
                       + CRLF + CRLF, "Confirmar!", MB_YESNO + MB_ICONQUESTION + MB_SYSTEMMODAL )
   IF ( nButton == 6 )
      QUIT
   ENDIF
   //
   RETURN (.T.)


