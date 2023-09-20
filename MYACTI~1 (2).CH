//-----------------------------------------------------------------------------------------------//
/*
                      CLASS MyActiveX Para Conectar a ActiveX/COM
                      Redstarsoft Informática 2000 - 2009
                      www.redstarsoft.net / www.redstarsoft.com.br
                      Lailton Fernando Mariano
                                                                                                 */
//-----------------------------------------------------------------------------------------------//

#define xtpCalendarThemeOffice2000  0
#define xtpCalendarThemeOfficeXP    1
#define xtpCalendarThemeOffice2003  2
#define xtpCalendarThemeOffice2007  3
#define xtpCalendarDayView          0
#define xtpCalendarWorkWeekView     1
#define xtpCalendarWeekView         2
#define xtpCalendarMonthView        3
#define xtpCalendarFullWeekView     4

#ifndef __XPP__
   #define  HKEY_CLASSES_ROOT       2147483648
#else
   #define  HKEY_CLASSES_ROOT       1
#endif

#define SW_HIDE                     0
#define SW_SHOW                     8

#define COLOR_BTNFACE               15

#xcommand DEFAULT <uVar1> := <uVal1> ;
               [, <uVarN> := <uValN> ] => ;
              If( <uVar1> == nil, <uVar1> := <uVal1>, ) ;;
            [ If( <uVarN> == nil, <uVarN> := <uValN>, ); ]

// Using ActiveX controls

#xcommand @ <nRow>, <nCol> MyACTIVEX <oActX>                       ;
             [ <of: OF, WINDOW, DIALOG> <oWnd> ]                   ;
             [ PROGID <cProgID> ]                                  ;
             [ SIZE <nWidth>, <nHeight> ]                          ;
                                                                => ;
<oActX> := MyActiveX():New( <oWnd>, <cProgID>, <nRow>, <nCol>, <nWidth>, <nHeight> )

#xcommand REDEFINE MyActiveX <oActX>                               ;
          [ ID <nId> ]                                             ;
          [ <of: OF, WINDOW, DIALOG> <oWnd> ]                      ;
          [ PROGID <cProgID> ]                                     ;
                                                                => ;
<oActX> := MyActiveX():Redefine( <oWnd>,<nId>,<cProgID> )
