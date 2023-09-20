#ifndef _FIVEWIN_CH
#define _FIVEWIN_CH

//#include "Window.ch"
#include "DDE.ch"
#include "Dialog.ch"
#include "DLL.ch"
#include "Font.ch"
#include "Menu.ch"
#include "Objects.ch"
#include "Print.ch"
#include "Timer.ch"
#include "WinApi.ch"

//----------------------------------------------------------------------------//
// ACCESSING / SETTING Variables

#xtranslate bSETGET(<uVar>) => ;
            { | u | If( PCount() == 0, <uVar>, <uVar> := u ) }

//----------------------------------------------------------------------------//

#xcommand SET HELPFILE TO <cFile> => SetHelpFile( <cFile> )

//----------------------------------------------------------------------------//
// Resources

#xcommand SET RESOURCES TO <cName> => SetResources( <cName> )

#xcommand SET RESOURCES TO => FreeResources()

//----------------------------------------------------------------------------//
// Colores m s frecuentes

#define CLR_BLACK            0
#define CLR_GRAY       8421504               // RGB( 128, 128, 128 )
#define CLR_LIGHTGRAY 12632256               // RGB( 192, 192, 192 )
#define CLR_WHITE     16777215               // RGB( 255, 255, 255 )

//---------------------------------------------------------------------------//
// MESSAGE BAR

#xcommand SET MESSAGE [ OF <oWnd> ] [ TO <cMsg> ] => ;
          <oWnd>:oMsgBar := TMsgBar():New( <oWnd>, <cMsg> )
          
#xcommand DEFINE MESSAGE BAR OF <oWnd> ;
             [ PROMPT <cMsg> ] ;
      => ;
         <oWnd>:oMsgBar := TMsgBar():New( <oWnd>, <cMsg> )

#xcommand SET MENU OF <oWnd> TO <oMenu> => <oWnd>:SetMenu( <oMenu> )

//----------------------------------------------------------------------------//
// PUSHBUTTON

#xcommand @ <nRow>, <nCol> BUTTON [ <oBtn> PROMPT ] <cCaption> ;
             [ SIZE <nWidth>, <nHeight> ] ;
             [ ACTION <uAction> ] ;
             [ <of:OF, WINDOW, DIALOG> <oWnd> ] ;
             [ <help:HELP, HELPID, HELP ID> <nHelpId> ] ;
             [ FONT <oFont> ] ;
      => ;
         [ <oBtn> := ] TButton():New( <nRow>, <nCol>, <cCaption>, <oWnd>,;
            <{uAction}>, <nWidth>, <nHeight>, <nHelpId>, <oFont> )

#xcommand REDEFINE BUTTON [ <oBtn> ] ;
             [ ID <nId> ] ;
             [ ACTION <uAction> ] ;
             [ <of:OF, WINDOW, DIALOG> <oDlg> ] ;
             [ <help:HELP, HELPID, HELP ID> <nHelpId> ] ;
       => ;
          [ <oBtn> := ] TButton():ReDefine( <nId>, <{uAction}>, <oDlg>,;
             <nHelpId> )

//----------------------------------------------------------------------------//
// CHECKBOX

#xcommand REDEFINE CHECKBOX [ <oCbx> VAR ] <lVar> ;
             [ ID <nId> ] ;
             [ <of:OF, WINDOW, DIALOG> <oWnd> ] ;
             [ <help:HELPID, HELP ID> <nHelpId> ] ;
             [ ON CLICK <uClick> ];
       => ;
          [ <oCbx> := ] TCheckBox():ReDefine( <nId>, bSETGET(<lVar>),;
             <oWnd>, <nHelpId>, [<{uClick}>] )

#xcommand @ <nRow>, <nCol> CHECKBOX [ <oCbx> VAR ] <lVar> ;
             [ PROMPT <cCaption> ] ;
             [ <of:OF, WINDOW, DIALOG> <oWnd> ] ;
             [ SIZE <nWidth>, <nHeight> ] ;
             [ <help:HELPID, HELP ID> <nHelpId> ] ; 
             [ FONT <oFont> ] ;
             [ ON CLICK <uClick> ];
      => ;
         [ <oCbx> := ] TCheckBox():New( <nRow>, <nCol>, <cCaption>,;
             [bSETGET(<lVar>)], <oWnd>, <nWidth>, <nHeight>, <nHelpId>,;
             [<{uClick}>], <oFont> )

//----------------------------------------------------------------------------//
// COMBOBOX

#xcommand @ <nRow>, <nCol> COMBOBOX [ <oCbx> VAR ] <cVar> ;
             [ ITEMS <aItems> ] ;
             [ SIZE <nWidth>, <nHeight> ] ;
             [ <dlg:OF,WINDOW,DIALOG> <oWnd> ] ;
             [ <help:HELPID, HELP ID> <nHelpId> ] ;
             [ ON CHANGE <uChange> ] ;
       => ;
          [ <oCbx> := ] TComboBox():New( <nRow>, <nCol>, bSETGET(<cVar>),;
             <aItems>, <nWidth>, <nHeight>, <oWnd>, <nHelpId>,;
             [{|Self|<uChange>}])

#xcommand REDEFINE COMBOBOX [ <oCbx> VAR ] <cVar> ;
             [ ITEMS <aItems> ] ;
             [ ID <nId> ] ;
             [ <dlg:OF,WINDOW,DIALOG> <oWnd> ] ;
             [ <help:HELPID, HELP ID> <nHelpId> ] ;
             [ VALID <uValid> ] ;
             [ ON CHANGE <uChange> ] ;
       => ;
          [ <oCbx> := ] TComboBox():ReDefine( <nId>, bSETGET(<cVar>),;
             <aItems>, <oWnd>, <nHelpId>, <{uValid}>, [{|Self|<uChange>}] )

//----------------------------------------------------------------------------//
// LISTBOX

#xcommand REDEFINE LISTBOX [ <oLbx> VAR ] <cVar> ;
             [ ITEMS <aItems> ]  ;
             [ ID <nId> ] ;
             [ <dlg:OF,WINDOW,DIALOG> <oWnd> ] ;
             [ <help:HELPID, HELP ID> <nHelpId> ] ;
       => ;
          [ <oLbx> := ] TListBox():ReDefine( <nId>, bSETGET(<cVar>), <aItems>,;
             <oWnd>, <nHelpId> )

#xcommand @ <nRow>, <nCol> LISTBOX [ <oLbx> VAR ] <cVar> ;
             [ ITEMS <aList>  ] ;
             [ SIZE <nWidth>, <nHeight> ] ;
             [ OF <oDlg> ] ;
       => ;
          [ <oLbx> := ] TListBox():New( <nRow>, <nCol>, bSETGET(<cVar>),;
                                        <aList>, <nWidth>, <nHeight>, <oDlg> )

//----------------------------------------------------------------------------//
// LISTBOX - BROWSE

#command REDEFINE LISTBOX [ <oLbx> ] FIELDS [<Flds,...>] ;
             [ ID <nId> ] ;
             [ <dlg:OF,DIALOG> <oDlg> ] ;
             [ FIELDSIZES <aColSizes,...> ] ;
             [ <head:HEAD,HEADER,HEADERS> <aHeaders,...> ] ;
       => ;
              [ <oLbx> := ] TWBrowse():ReDefine( <nId>, ;
                                       [\{|| \{ <Flds> \} \}], <oDlg>,;
                                        [ \{<aHeaders>\}], [\{<aColSizes>\}] )

#command @ <nRow>, <nCol> LISTBOX [ <oBrw> ] FIELDS [<Flds,...>] ;
                           [ FIELDSIZES <aColSizes,...> ] ;
                           [ <head:HEAD,HEADER,HEADERS> <aHeaders,...> ] ;
                           [ ID <nId> ] ;
                           [ SIZE <nWidth>, <nHeigth> ] ;
                           [ <dlg:OF,DIALOG> <oDlg> ] ;
                                                          => ;
          [ <oBrw> := ] TWBrowse():New( <nRow>, <nCol>, <nWidth>, <nHeigth>,;
                                       [\{|| \{<Flds> \} \}], ;
                                       [ \{<aHeaders>\}], [\{<aColSizes>\}], ;
                                       <nId>, <oDlg> )

//----------------------------------------------------------------------------//
// RADIOBUTTONS

#xcommand @ <nRow>, <nCol> RADIO [ <oRadMenu> VAR ] <nVar> ;
             [ PROMPT <cItems,...> ] ;
             [ <of:OF, WINDOW, DIALOG> <oWnd> ] ;
             [ <help:HELPID, HELP ID> <nHelpId> ] ; 
       => ;
          [ <oRadMenu> := ] TRadMenu():New( <nRow>, <nCol>, {<cItems>},;
                                   [bSETGET(<nVar>)], <oWnd>, <nHelpId> )

#xcommand REDEFINE RADIO [ <oRadMenu> VAR ] <nVar> ;
             [ ID <nId,...> ] ;
             [ <of: OF, WINDOW, DIALOG> <oWnd> ] ;
             [ <help:HELPID, HELP ID> <nHelpId> ] ;
       => ;
          [ <oRadMenu> := ] TRadMenu():Redefine( [bSETGET(<nVar>)],;
             <oWnd>, <nHelpId>, \{ <nId> \} )

//----------------------------------------------------------------------------//
// BITMAP

#xcommand REDEFINE BITMAP [ <oBmp> ] ;
             [ <of: OF, WINDOW, DIALOG> <oDlg> ] ;
             [ ID <nId> ] ;
             [ BMP <cName> ] ;
       => ;      
          <oDlg>:DefControl( [ <oBmp> := ] TBitmap():ReDefine( <nId>,;
                     <cName> ) )

//----------------------------------------------------------------------------//
// SAY

#xcommand REDEFINE SAY [ <oSay> PROMPT ] <cText> ;
             [ ID <nId> ] ;
             [ <dlg:OF,WINDOW,DIALOG> <oWnd> ] ;
       => ;
          TSay():ReDefine( <nId>, <cText>, <oWnd> )

#xcommand @ <nRow>, <nCol> SAY [ <oSay> TEXT ]  <cText> ;
             [ PICTURE <cPict> ] ;
             [ COLOR <cColor>] ;
             [ <dlg:OF,WINDOW,DIALOG> <oWnd> ] ;
             [ FONT <oFont> ]  ;
      => ;
          [ <oSay> := ] TSay():New( <nRow>, <nCol>, <cText>,;
             [<oWnd>], [<cPict>], <oFont> )

//----------------------------------------------------------------------------//
// GET

#xcommand REDEFINE GET [ <oGet> VAR ] <uVar> ;
             [ ID <nId> ] ;
             [ <dlg:OF,WINDOW,DIALOG> <oDlg> ] ;
             [ <help:HELPID, HELP ID> <nHelpId> ] ;
        => ;
          [ <oGet> := ] TGet():ReDefine( <nId>, bSETGET(<uVar>), <oDlg>,;
             <nHelpId> )

#command @ <nRow>, <nCol> GET [ <oGet> VAR ] <uVar>     ;
                          [ OF <oWnd> ]                 ;
                          [ PICTURE <cPict> ]           ;
                          [ VALID   <ValidFunc> ]       ;
                          [ WHEN    <WhenFunc> ]        ;
                          [ COLOR   <cColor> ]          ;
                          [ SIZE <nWidth>, <nHeight> ]  ;
       => ;
          [ <oGet> := ] TGet():New( <nRow>, <nCol>, bSETGET(<uVar>),;
                           [<oWnd>], <nWidth>, <nHeight> )

//----------------------------------------------------------------------------//
// SCROLLBAR

#xcommand @ <nRow>, <nCol> SCROLLBAR [ <oSbr> ] ;
             [ <h: HORIZONTAL> ] ;
             [ <v: VERTICAL> ] ;
             [ RANGE <nMin>, <nMax> ] ;
             [ SIZE <nWidth>, <nHeight> ] ;
             [ <up:UP, ON UP> <uUpAction> ] ;
             [ <dn:DOWN, ON DOWN> <uDownAction> ] ;
             [ <pgup:PAGEUP, ON PAGEUP> <uPgUpAction> ] ;
             [ <pgdn:PAGEDOWN, ON PAGEDOWN> <uPgDownAction> ] ;
             [ OF <oWnd> ] ;
       => ;
          [ <oSbr> := ] TScrollBar():New( <nRow>, <nCol>, <nMin>, <nMax> ,;
             (.not.<.h.>) [.or. <.v.> ], <oWnd>, <nWidth>, <nHeight> ,;
             [<{uUpAction}>], [<{uDownAction}>], [<{uPgUpAction}>], ;
             [<{uPgDownAction}>] )

#xcommand REDEFINE SCROLLBAR [ <oSbr> ] ;
             [ ID <nID>  ] ;
             [ RANGE <nMin>, <nMax> ] ;
             [ <up:UP, ON UP> <uUpAction> ] ;
             [ <dn:DOWN, ON DOWN> <uDownAction> ] ;
             [ <pgup:PAGEUP, ON PAGEUP> <uPgUpAction> ] ;
             [ <pgdn:PAGEDOWN, ON PAGEDOWN> <uPgDownAction> ] ;
             [ OF <oDlg> ] ;
       => ;
             [ <oSbr> := ] TScrollBar():Redefine( <nID>, <nMin>, <nMax>,;
             <oDlg>, [<{uUpAction}>], [<{uDownAction}>], [<{uPgUpAction}>], ;
             [<{uPgDownAction}>] )

//----------------------------------------------------------------------------//
// BOX - GROUPS

#xcommand @ <nTop>, <nLeft> [ GROUP <oGroup> ] TO <nBottom>, <nRight > ;
             [ <label:LABEL,PROMPT> <cLabel> ] ;
             [ OF <oWnd> ] ;
       => ;
          [ <oGroup> := ] TGroup():New( <nTop>, <nLeft>, <nBottom>, <nRight>,;
                                        <cLabel>, <oWnd> )

//----------------------------------------------------------------------------//
// CLIPBOARD

#xcommand DEFINE CLIPBOARD <oClp> ;
             [ FORMAT <format:TEXT,OEMTEXT,BITMAP,DIF> ] ;
             [ OF <oWnd> ] ;
       => ;
          <oClp> := TClipBoard():New( [Upper(<(format)>)], <oWnd> )

#xcommand ACTIVATE CLIPBOARD <oClp>     => <oClp>:Open()

#xcommand SET TEXT OF CLIPBOARD <oClp> ;
             TO <cText> ;
       => ;
          <oClp>:SetText( <cText> )

#xcommand DEACTIVATE CLIPBOARD <oClp>   => <oClp>:Close()

#xcommand RELEASE CLIPBOARD <oClp>      => <oClp>:Close(); <oClp> := nil

//----------------------------------------------------------------------------//
// Comandos y funciones no compatibles

#xcommand CLS =>

#xcommand CLEAR SCREEN =>

#xcommand READ =>

#xcommand InKey( [<nTime>] ) => ;
   MsgAlert( OemToAnsi( "Funci¢n no disponible en FiveWin" ) )

#xcommand KEYBOARD <cChars> =>

#xcommand __KeyBoard( <cChars> ) => ;
   MsgAlert( OemToAnsi( "Funci¢n no disponible en FiveWin" ) )

#xcommand SET KEY <nKey> TO <*func*> =>

#xcommand SAVE SCREEN [ TO <u> ] =>

#xcommand RESTORE SCREEN [ FROM <u> ] =>

#xcommand SaveScreen( <*u*> ) => ;
   MsgAlert( OemToAnsi( "Funci¢n no disponible en FiveWin" ) )

#xcommand RestScreen( <*u*> ) => ;
   MsgAlert( OemToAnsi( "Funci¢n no disponible en FiveWin" ) )

#xcommand @ <nRow>, <nCol> PROMPT <*u*> =>

#xcommand MENU TO <u> =>

#command ? [ <list,...> ] => WQout( [ \{ <list> \} ] )

#command ?? [ <list,...> ] => WQout( [ \{ <list> \} ] )

#endif