#define CRLF CHR(13)+CHR(10)

#xcommand DEFAULT <v1> TO <x1> [, <vn> TO <xn> ] ;
    => IF <v1> == NIL ; <v1> := <x1> ; END ;
    [; IF <vn> == NIL ; <vn> := <xn> ; END ]

#define WVW_DEFAULT_MENUKEYEVENT  1024

#define WVW_CONTEXTMENU           59190

#define WVW_TOOLBAR_ID            60000

#define VK_CAPITAL                20
#define VK_NUMLOCK                144
#define VK_SCROLL                 145
#define VK_INSERT                 45

#define CLR_STANDARD              0
#define CLR_ENHANCED              1
#define CLR_BORDER                2
#define CLR_BACKGROUND            3
#define CLR_UNSELECTED            4
#define CLR_DISABLED              5

#define CRLF                      CHR(13)+CHR(10)

#define COLOR_BTNFACE             15
#define COLOR_WINDOWTEXT          8

// constants for WvWGuiObject

#define WPO_TABCONTROLFRAME      -1
#define WPO_TABPAGEFRAME         -2
#define WPO_NORMALGET            -3

#define WPO_BOXGROUP              1
#define WPO_IMAGE                 2
#define WPO_BOXRECESSED           3
#define WPO_LABEL                 4
#define WPO_OUTLINE               5
#define WPO_BOXGET                6
#define WPO_GRIDHORZ              7
#define WPO_GRIDVERT              8
#define WPO_LINE                  9
#define WPO_COLORRECT             10
#define WPO_LABELOBJ              11
#define WPO_TEXTBOX               12
#define WPO_BOXRAISED             13
#define WPO_RECTANGLE             14
#define WPO_ROUNDRECT             15
#define WPO_FOCUSRECT             16

// icon indexes for standard bitmap

#define STD_CUT                   0
#define STD_COPY                  1
#define STD_PASTE                 2
#define STD_UNDO                  3
#define STD_REDO                  4
#define STD_DELETE                5
#define STD_FILENEW               6
#define STD_FILEOPEN              7
#define STD_FILESAVE              8
#define STD_PRINTPRE              9
#define STD_PROPERTIES            10
#define STD_HELP                  11
#define STD_FIND                  12
#define STD_REPLACE               13
#define STD_PRINT                 14

// icon indexes for standard view bitmap

#define VIEW_LARGEICONS           0
#define VIEW_SMALLICONS           1
#define VIEW_LIST                 2
#define VIEW_DETAILS              3
#define VIEW_SORTNAME             4
#define VIEW_SORTSIZE             5
#define VIEW_SORTDATE             6
#define VIEW_SORTTYPE             7
#define VIEW_PARENTFOLDER         8
#define VIEW_NETCONNECT           9
#define VIEW_NETDISCONNECT        10
#define VIEW_NEWFOLDER            11
#define VIEW_VIEWMENU             12

#define HIST_BACK                 0
#define HIST_FORWARD              1
#define HIST_FAVORITES            2
#define HIST_ADDTOFAVORITES       3
#define HIST_VIEWTREE             4

#xcommand SCATTER MEMVAR ;
   => for __Scatter := 1 TO FCOUNT() ;;
         &( "m->"+FIELDNAME(__Scatter) ) := FIELDGET(__Scatter) ;;
      next ;;

#xcommand SCATTER MEMVAR BLANK ;
   => __Recno := recno() ;;
      dbgoto( 9999999 ) ;;
      for __Scatter := 1 TO FCOUNT() ;;
         &( "m->"+FIELDNAME(__Scatter) ) := FIELDGET(__Scatter) ;;
      next ;;
      dbgoto( __recno ) ;;

#xcommand PRIVATE SCATTER MEMVAR [CODE <code>] [<add: BLANK>] ;
   => setPMC( <"code">, <.add.> ) ;;
      for __Scatter := 1 TO FCOUNT() ;;
         &( "m->"+__pCode+FIELDNAME(__Scatter) ) := FIELDGET(__Scatter) ;;
      next ;;
      setPMC()

#xcommand GATHER MEMVAR [<add: NEW>] => Gather( <.add.>,,,,, .T. )

#xcommand PRIVATE GATHER MEMVAR [<add: NEW>] => Gather( <.add.>,,, .T.,, .T. )

#command @ <Top>, <Left> TO <Bottom>, <Right> TITLE <cTitle> [DOUBLE] [COLOR <color>] ;
   => DispBox( WvW_RowSet( <Top> ), WvW_ColSet( <Left> ), WvW_RowSet( <Bottom> ), WvW_ColSet( <Right> ), 2 [, <color> ] ) ;
    ; SetPos( WvW_RowSet( <Top> ), WvW_ColSet( <Left>+2 ) ) ;
    ; DispOut( " " + <cTitle> + " " )

/***
*  @..GET
*/
/*

#command @ <row>, <col> GET <var>             ;
                        [PICTURE <pic>]       ;
                        [VALID <valid>]       ;
                        [WHEN <when>]         ;
                        [CAPTION <caption>]   ;
                        [MESSAGE <message>]   ;
                        [SEND <msg>]          ;
                        [<disabled:DISABLED>] ;
                        [<password:PASSWORD>] ;
   => AAdd( getList, _GET_( <var>, <"var">, <pic>, <{valid}>, <{when}> ) ) ;
    ; WvW_BuildGetObject( getList, "NORMAL",, {<row>, <col>}, ;
       <caption>, <message>, <{valid}>, <{when}>,,,,, <.disabled.>, <"when">, <.password.> )
#command @ <row>, <col> SAY <caption> GET <var> ;
                        [PICTURE <pic>]       ;
                        [VALID <valid>]       ;
                        [WHEN <when>]         ;
                        [MESSAGE <message>]   ;
                        [SEND <msg>]          ;
                        [<disabled:DISABLED>] ;
                        [<password:PASSWORD>] ;
   => AAdd( getList, _GET_( <var>, <"var">, <pic>, <{valid}>, <{when}> ) ) ;
    ; WvW_BuildGetObject( getList, "NORMAL",, {<row>, <col>}, ;
       <caption>, <message>, <{valid}>, <{when}>,,,,, <.disabled.>, <"when">, <.password.> )
*/
/***
*  @..GET CHECKBOX
***/
/*
#command @ <row>, <col> GET <var>                                       ;
                        CHECKBOX                                        ;
                        [VALID <valid>]                                 ;
                        [WHEN <when>]                                   ;
                        [CAPTION <caption>]                             ;
                        [MESSAGE <message>]                             ;
                        [COLOR <color>]                                 ;
                        [FOCUS <fblock>]                                ;
                        [STATE <sblock>]                                ;
                        [BITMAPS <aBitmaps>]                            ;
                        [<disabled:DISABLED>]                           ;
   => AAdd( getList, _GET_( <var>, <(var)>, NIL, <{valid}>, <{when}> ) ) ;
    ; WvW_BuildGetObject( getList, "CHECKBOX", <var>, {<row>, <col>}, ;
         <caption>, <message>, <{valid}>, <{when}>, <{fblock}>, <{sblock}>,, ;
                       <aBitmaps>, <.disabled.>, <"when"> )
*/
/***
*  @..GET LISTBOX
***/
#command @ <Top>, <Left>, <Bottom>, <Right> GET <var>                    ;
                        LISTBOX <items>                                  ;
                        [VALID <valid>]                                  ;
                        [WHEN <when>]                                    ;
                        [CAPTION <caption>]                              ;
                        [MESSAGE <message>]                              ;
                        [COLOR <color>]                                  ;
                        [FOCUS <fblock>]                                 ;
                        [STATE <sblock>]                                 ;
                        [<drop: DROPDOWN>]                               ;
                        [<scroll: SCROLLBAR>]                            ;
                        [SEND <msg>]                                     ;
                        [GUISEND <guimsg>]                               ;
                        [BITMAP <cBitmap>]                               ;
                        [<disabled:DISABLED>]                            ;
   => AAdd( getList, _GET_( <var>, <(var)>, NIL, <{valid}>, <{when}> ) ) ;
    ; WvW_BuildGetObject( getList, "LISTBOX", <var>, ;
        { <Top>, <Left>, <Bottom>, <Right> }, <caption>, ;
        <message>, <{valid}>, <{when}>, <{fblock}>, <{sblock}>, <items>, <cBitmap>, ;
        <.disabled.>, <"when"> )

/***
*  @..GET PUSHBUTTON
***/
/*
#command @ <row>, <col> GET <var>                                           ;
                        PUSHBUTTON                                          ;
                        [VALID <valid>]                                     ;
                        [WHEN <when>]                                       ;
                        [DISABLEBLOCK <bdisable>]                           ;
                        [CAPTION <caption>]                                 ;
                        [MESSAGE <message>]                                 ;
                        [COLOR <color>]                                     ;
                        [FOCUS <fblock>]                                    ;
                        [STATE <sblock>]                                    ;
                        [STYLE <style>]                                     ;
                        [SEND <msg>]                                        ;
                        [GUISEND <guimsg>]                                  ;
                        [SIZE X <sizex> Y <sizey>]                          ;
                        [CAPOFF X <capxoff> Y <capyoff>]                    ;
                        [BITMAP <bitmap>]                                   ;
                        [BMPOFF X <bmpxoff> Y <bmpyoff>]                    ;
                        [<disabled:DISABLED>]                               ;
   => AAdd( getList, _GET_( <var>, <(var)>, NIL, <{valid}>, <{when}> ) ) ;
    ; WvW_BuildGetObject( getList, "PUSHBUTTON",, {<row>, <col>}, ;
        <caption>, <message>, <{valid}>, <{when}>, <{fblock}>, <{sblock}>,, ;
        <bitmap>, <.disabled.>, <"when">,, <{bdisable}> )
*/
/***
*  @..GET RADIOGROUP
***/
#command @ <Top>, <Left>, <Bottom>, <Right> GET <var>                     ;
                        RADIOGROUP <buttons>                              ;
                        [VALID <valid>]                                   ;
                        [WHEN <when>]                                     ;
                        [CAPTION <caption>]                               ;
                        [MESSAGE <message>]                               ;
                        [COLOR <color>]                                   ;
                        [FOCUS <fblock>]                                  ;
                        [STYLE <style>]                                   ;
                        [SEND <msg>]                                      ;
                        [GUISEND <guimsg>]                                ;
                        [<disabled:DISABLED>]                             ;
   => AAdd( getList, _GET_( <var>, <(var)>, NIL, <{valid}>, <{when}> ) )  ;
    ; WvW_BuildGetObject( getList, "RADIOGROUP", <var>, ;
        { <Top>, <Left>, <Bottom>, <Right> }, <caption>, ;
       <message>, <{valid}>, <{when}>, <{fblock}>,, <buttons>,, <.disabled.>, <"when"> )

/***
*  @..GET TBROWSE
***/
#command @ <Top>, <Left>, <Bottom>, <Right> GET <var>                   ;
                        TBROWSE <oBrowse>                               ;
                        [WHEN <when>]                                   ;
                        [VALID <valid>]                                 ;
                        [MESSAGE <message>]                             ;
                        [SEND <msg>]                                    ;
                        [GUISEND <guimsg>]                              ;
                        [<disabled:DISABLED>]                           ;
      => AAdd( getList, _GET_( <var>, <(var)>, NIL, <{when}>, <{valid}> ) ) ;
       ; WvW_BuildGetObject( getList, "TBROWSE", <var>, ;
               { <Top>, <Left>, <Bottom>, <Right> },, ;
           <message>, <{valid}>, <{when}>,,, <oBrowse>,, <.disabled.>, <"when"> )

/***
*  TABS AND PAGES FOR GET SYSTEM
*/
#command DEFINE TABCONTROL <name> FROM <nT>,<nL> TO <nB>,<nR> ;
   => getList := WvW_CreateTabControl( getList, <(name)>, <nT>, <nL>, <nB>, <nR> )

#command END TABCONTROL => WvW_EndTabControl()

#command DEFINE PAGE <name>                                  ;
                CAPTION <caption>                            ;
		[ <lDisabled: DISABLED> ]                    ;
		[ ON ENTER <bEnter> ]                        ;
		[ ON EXIT <bExit> ]                          ;
   => WvW_CreateTabPage( <(name)>, <caption>, <{bEnter}>, <{bExit}>, <.lDisabled.> )

#command END PAGE => WvW_EndTabPage()

/***
*  READ
*/
/*
#command READ SAVE [WHEN <bWhen>] [VALID <bValid>] [<lCycle:CYCLE>]     ;
              [OBJECT <nObject>] [<lNokey:NOSETKEY>] [PROCESS <aKeys>]  ;
              [CHECK <bCheck>] [TIMEOUT <nSecs>] [<lNoBoxGet:NOBOXGET>] ;
    => WvW_ReadModal( getList, <nObject>,, <.lCycle.>,                  ;
           <.lNokey.>, <aKeys>, <{bWhen}>, <{bValid}>, <{bCheck}>, <nSecs>, <.lNoBoxGet.> )

#command READ [WHEN <bWhen>] [VALID <bValid>] [<lCycle:CYCLE>]          ;
              [OBJECT <nObject>] [<lNokey:NOSETKEY>] [PROCESS <aKeys>]  ;
              [CHECK <bCheck>] [TIMEOUT <nSecs>] [<lNoBoxGet:NOBOXGET>] ;
    => WvW_ReadModal( getList, <nObject>,, <.lCycle.>, <.lNokey.>,      ;
                  <aKeys>, <{bWhen}>, <{bValid}>, <{bCheck}>, <nSecs>, <.lNoBoxGet.> ) ;
     ; WvW_ClearGetVarList()

#command CLEAR GETS         ;
    => MyHBReadKill( .T. )  ;
     ; WvW_ClearGetVarList()

*/