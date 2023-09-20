#include "inkey.ch"
#include "common.ch"
#include "setcurs.ch"
#include "c:\xharbour\include\winuser.ch"

#DEFINE ID_MENU_1 101
#DEFINE ID_MENU_2 102
#DEFINE WVW_DEFAULT_MENUKEYEVENT 1024

FUNC SAC00()
   PUBLIC nTELA:=0
   SET SCOREBOARD OFF
   SET ESCAPE OFF
   SET(_SET_EVENTMASK, INKEY_ALL )
   SETINKEYAFTERBLOCK({|nkey| nAfterInkey(nkey)})
   WVW_SETTITLE(,"MEU MENU")
   WVW_SETVERTCARET(.t.)
   WVW_SIZE_READY(.T.)
   WVW_ENABLEMAXIMIZE(0,.T.)
   WVW_ENABLESHORTCUTS(,.T.)
   WVW_MAXIMIZE(0)
   WVW_SETMOUSEMOVE(,.T.)
   SETCOLOR("N/W")
   CLS

   hMenu = WVW_CreateMenu( )
   hPopupMenu = WVW_CreateMenu( )
   WVW_AppendMenu( hPopupMenu, MF_ENABLED + MF_STRING, ID_MENU_1, "~EXECUTAR FUNÇÃO")
   WVW_AppendMenu( hMenu , MF_ENABLED + MF_POPUP , hPopupMenu, "~CADASTRO", )
   hPopupMenu = WVW_CreateMenu( )
   WVW_AppendMenu( hPopupMenu, MF_ENABLED + MF_STRING, ID_MENU_2, "~SAIR")
   WVW_AppendMenu( hMenu , MF_ENABLED + MF_POPUP , hPopupMenu, "~SAIDA DO MENU", )

   WVW_SETMENU(, hMENU )

   WHILE .T.
      CH:=INKEY(0)
      IF CH=K_ESC; quit; ENDIF
       ENDDO
      RETURN

      **** Captura movimento de teclado ou mouse
   function nAfterInkey(nkey)
      * check if nkey is:
      * (1) menu command, or
      * (2) mouse button action
      local bAction
      if nkey==WVW_DEFAULT_MENUKEYEVENT
         * MenuKeyEvent
         return nMenuChecker(WVW_GETLASTMENUEVENT())
         //was: elseif ASCAN({K_LBUTTONDOWN, K_LBUTTONUP, K_MOUSEMOVE}, nKey) > 0
      elseif ASCAN({K_LBUTTONDOWN, K_LBUTTONUP, K_MOUSEMOVE, K_MMLEFTDOWN,;
          K_LDBLCLK}, nKey) > 0
         * MouseEvent
         return //wvwm_nMouseChecker(nkey)
      elseif (bAction := SETKEY(nKey)) != NIL
         eval(bAction, PROCNAME(), PROCLINE(), READVAR())
         return 0
      endif
      return nkey //nAfterInkey(nkey)

      ** testa evento capturado
   FUNCTION nMenuChecker(nMenuEvent)
      local nkey := 0
      do case
      case nMenuEvent==ID_MENU_1
         messageBox(ntela, "FUNCIONA", "OK", MB_OK,,MB_SYSTEMMODAL)
      case nMenuEvent==ID_MENU_2
         QUIT
      otherwise
         messagebOX(nTELA,"ERRO","ERRO", MB_OK,,MB_SYSTEMMODAL)
      endcase
      return nkey

      ** para trablhar com tela inteira (wvw_set_size_ready)
      #pragma BEGINDUMP
      #include "hbapi.h"

      HB_FUNC( WVW_SIZE_READY )
      {
      BOOL bIsReady;
    static BOOL s_bIsReady = FALSE;
   bIsReady = s_bIsReady;
    if (ISLOG(1))
   {
   s_bIsReady = hb_parl(1);
    }
   hb_retl(bIsReady);
    }
   #pragma ENDDUMP
