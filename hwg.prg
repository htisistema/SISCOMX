#include "hwgui.ch"
Function DialogFromPrg( o )
local nColor
Local cTitle := "Dialog from prg", cText := "Input something"
Local oModDlg, oFont := HFont():Add( "MS Sans Serif",0,-13 )
Local cRes, aCombo := { "First","Second" }, oEdit, vard := "Monday"
// Local aTabs := { "Monday","Tuesday","Wednesday","Thursday","Friday" }

   // o:bGetFocus := Nil
   INIT DIALOG oModDlg TITLE cTitle           ;
   AT 210,10  SIZE 300,300                    ;
   FONT oFont                                 ;
   ON EXIT {||MsgYesNo("Really exit ?")}

   @ 20,10 SAY cText SIZE 260, 22
   @ 20,35 EDITBOX oEdit CAPTION ""    ;
        STYLE WS_DLGFRAME              ;
        SIZE 260, 26 COLOR Vcolor("FF0000")

   @ 20,70 CHECKBOX "Check 1" SIZE 90, 20
   @ 20,95 CHECKBOX "Check 2"  ;
        SIZE 90, 20 COLOR Iif( nColor==Nil,Vcolor("0000FF"),nColor )

   @ 160,70 GROUPBOX "RadioGroup"  SIZE 130, 75

   RADIOGROUP
   @ 180,90 RADIOBUTTON "Radio 1"  ;
        SIZE 90, 20 ON CLICK {||oEdit:SetColor(Vcolor("0000FF"),,.T.)}
   @ 180,115 RADIOBUTTON "Radio 2" ;
        SIZE 90, 20 ON CLICK {||oEdit:SetColor(Vcolor("FF0000"),,.T.)}
   END RADIOGROUP SELECTED 2

   @ 20,120 COMBOBOX aCombo STYLE WS_TABSTOP ;
        SIZE 100, 150

   @ 20,160 UPDOWN 10 RANGE -10,50 SIZE 50,32 STYLE WS_BORDER

   @ 160,160 TAB oTab ITEMS {} SIZE 130,56
   BEGIN PAGE "Monday" OF oTab
      @ 20,28 GET vard SIZE 80,22 STYLE WS_BORDER
   END PAGE OF oTab
   BEGIN PAGE "Tuesday" OF oTab
      @ 20,28 EDITBOX "" SIZE 80,22 STYLE WS_BORDER
   END PAGE OF oTab

   @ 100,220 LINE LENGTH 100

   @ 20,240 BUTTON "Ok" OF oModDlg ID IDOK  ;
        SIZE 100, 32 COLOR Vcolor("FF0000")
   @ 140,240 BUTTON "11" OF oModDlg  ;
        SIZE 20, 32 ON CLICK {|o|CreateC(o)}
   @ 180,240 BUTTON "Cancel" OF oModDlg ID IDCANCEL  ;
        SIZE 100, 32

   ACTIVATE DIALOG oModDlg
   oFont:Release()

Return Nil


#define DTM_SETFORMAT       4101
Static Function CreateC( oDlg )
Static lFirst := .F., o
   IF !lFirst
      @ 100,200 DATEPICKER o SIZE 80, 24
      lFirst := .T.
   ENDIF
   SendMessage( o:handle,DTM_SETFORMAT,0,"dd':'MM':'yyyy" )
Return Nil

