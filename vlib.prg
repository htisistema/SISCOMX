/*
 * Versao 2.0 - 23/11/2005 - Vailton Renato
 * Versao 2.1 - 07/02/2006 - Ajuste para n∆o consumir 100% do processador
 */
#include "common.ch"
#include "inkey.ch"

#ifdef K_MINMOUSE
   ** No HB 0.45 nao havia esta constante anteriormente
#else
   #define K_MINMOUSE              1001
   #define K_MAXMOUSE              1007
#endif

static Static1, Static2:= .F., Static3, Static4, Static5, Static6, ;
   Static7, Static8, Static9, Static10
static Static11:= ""
static Static12, Static13:= .T., Static14:= .F., Static15:= .F., ;
   Static16:= .F., Static17:= 0, Static18:= {}, Static19:= 0, ;
   Static20:= 0, Static21:= 0, Static22:= {180, {|| vlmarquee()}}
static ;
   arrMouseInfLeft  := { 0,0,0 },;
   arrMouseInfRight := { 0,0,0 }
static ;
   sbGuiSupport   := .F.,;
   sbGuiSupportEx := .F.

********************************
function NEWBUTTON

   return {}

********************************
function ADDBUTTON(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, ;
   Arg9)

   local Local1
   Arg5:= iif(At("&", Arg5) == 0, "&" + Arg5, Arg5)
   Arg7:= iif(ISNIL(Arg7), .F., Arg7)
   Arg8:= iif(ISNIL(Arg8), {|| Nil}, Arg8)
   Arg9:= iif(ISNIL(Arg9), .T., Arg9)
   Local1:= SubStr(Arg5, At("&", Arg5) + 1, 1)
   AAdd(Arg1, {Arg5, Arg6, Arg8, Arg9, Arg7, Arg2, Arg3, Local1, ;
      Arg4})
   return Nil

********************************
function SHOWBUTTON(Arg1, Arg2, Arg3)

   aeval(Arg1, {|_1| drawbutton(_1, Arg2, Arg3)})
   return Nil

********************************
static function BUTEXECUTE(Arg1, Arg2, Arg3, Arg4)

   drawbutton(Arg1[Arg2], Arg3, Arg4, 3, .F., .F.)
   InKey(0.1) //.1
   drawbutton(Arg1[Arg2], Arg3, Arg4, 2, .F.)
   eval(Arg1[Arg2][3])
   InKey(0.1) //.1
   hidebutfoc(Arg1[Arg2], Arg3, Arg4)
   return Arg2

********************************
function BUTTONCOLOr(Arg1)
   return BUTTONCOLO(Arg1)

function BUTTONCOLOrs(Arg1)
   return BUTTONCOLO(Arg1)

function BUTTONCOLO(Arg1)

   local Local1
   Local1:= {}
   Arg1:= iif(ISNIL(Arg1), 1, 2)
   if (Arg1 == 1)
      AAdd(Local1, "N/W")
      AAdd(Local1, "W*/N")
      AAdd(Local1, "N*/N")
      AAdd(Local1, "W+*/N")
      AAdd(Local1, "W*/N")
      AAdd(Local1, "W+*/N")
      AAdd(Local1, "N+*/N")
      AAdd(Local1, "GR+*/N")
      AAdd(Local1, "R*/W")
   elseif (Arg1 == 2)
      AAdd(Local1, "N*/W")
      AAdd(Local1, "W+/W")
      AAdd(Local1, "N+/W")
      AAdd(Local1, "N/W")
      AAdd(Local1, "N+/W")
      AAdd(Local1, "N/W")
      AAdd(Local1, "W/W")
      AAdd(Local1, "W+/W")
      AAdd(Local1, "R*/W")
   endif
   return Local1

********************************
function VLGETGOTO(Arg1)

   local Local1, Local2
   Local1:= getactive()
   Local2:= ascan(getlist, {|_1| _1 == Local1})
   if (Local2 > Arg1)
      Local1:exitstate(1)
   else
      Local1:exitstate(2)
   endif
   vlgetmovto(Arg1)
   return Nil

********************************
function NEWBARMENU

   return {}

********************************
function TEXTMENU(Arg1)

   local Local1, Local2, Local3
   Local1:= At("&", Arg1)
   Local2:= SubStr(Arg1, 1, Local1 - 1)
   Local3:= SubStr(Arg1, Local1 + 1)
   return iif(Local1 != 0, Local2 + Local3, Arg1)

********************************
function SETBARMSG(Arg1)

   local Local1
   Local1:= Static13
   if (Arg1 != Nil)
      Static13:= Arg1
   endif
   return Local1

********************************
static function DRAWBUTTON(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6)

   local Local1, Local2, Local3, Local4, Local5, Local6, Local7, ;
      Local8, Local9, Local10, Local11, Local12, Local13, Local14, ;
      Local15, Local16, Local17, Local18, Local19, Local20, Local21
   Arg4:= iif(ISNIL(Arg4), 1, Arg4)
   Arg5:= iif(ISNIL(Arg5), .T., Arg5)
   Arg6:= iif(ISNIL(Arg6), .T., Arg6)
   Local10:= textbutton(Arg1[1])
   if (Arg2 == 1)
      Local1:= "N/W"
      Local2:= iif(Arg6, "W*/N", "N*/N")
      Local3:= "W+*/N"
      Local4:= "W*/N"
      Local6:= "W+*/N"
      Local7:= "N+*/N"
      Local9:= iif(Arg1[4], "GR+*/N", "W*/N")
   elseif (Arg2 == 2)
      Local1:= "N*/W"
      Local2:= iif(Arg6, "W+/W", "N+/W")
      Local3:= "N/W"
      Local4:= "N+/W"
      Local6:= "N/W"
      Local7:= "W/W"
      Local9:= iif(Arg1[4], "W+/W", "N+/W")
   elseif (Arg2 == 3)
      Local1:= Arg3[1]
      Local2:= iif(Arg6, Arg3[2], Arg3[3])
      Local3:= Arg3[4]
      Local4:= Arg3[5]
      Local6:= Arg3[6]
      Local7:= Arg3[7]
      Local9:= iif(Arg1[4], Arg3[8], Arg3[5])
   endif
   if (Arg4 == 1)
      Local10:= padc(Local10, Arg1[9] - 3)
      Local11:= At(Upper(Arg1[8]), Upper(Local10)) - 1
      Local5:= iif(Arg1[4], Local3, Local4)
      Local8:= Local7
   elseif (Arg4 == 2)
      Local10:= padc(Local10, Arg1[9] - 3)
      Local11:= At(Upper(Arg1[8]), Upper(Local10)) - 1
      Local5:= iif(Arg1[4], Local3, Local4)
      Local8:= Local6
   elseif (Arg4 == 3)
      Local10:= " " + Left(padc(Local10, Arg1[9] - 3), Arg1[9] - 4)
      Local11:= At(Upper(Arg1[8]), Upper(Local10)) - 1
      Local5:= iif(Arg1[4], Local3, Local4)
      Local8:= Local6
   endif
   Local20:= At(alltrim(Local10), Local10) - 1
   Local21:= Local20 + Len(Arg1[1]) + 2
   if (Arg5)
      Local12:= "’"
      Local13:= iif(Arg6, "›", "◊")
      Local14:= "©"
      Local15:= "∫"
      Local16:= "Ω"
      Local17:= "–"
      Local18:= "”"
      Local19:= "‹"
   else
      Local12:= "◊"
      Local13:= iif(Arg6, "—", "ÿ")
      Local14:= "∏"
      Local15:= "π"
      Local16:= "æ"
      Local17:= "œ"
      Local18:= "‘"
      Local19:= "€"
   endif
   
   if sbGuiSupport
      if (Arg5)
         Local12:= "⁄"
         Local13:= iif(Arg6, "ƒ", "ƒ")
         Local14:= "ø"
         Local15:= "≥"
         Local16:= "Ÿ"
         Local17:= "ƒ"
         Local18:= "¿"
         Local19:= "≥"
      else
         Local12:= "…"
         Local13:= iif(Arg6, "Õ", "Õ")
         Local14:= "ª"
         Local15:= "∫"
         Local16:= "º"
         Local17:= "Õ"
         Local18:= "»"
         Local19:= "∫"
      end
   end

   DevPos(Arg1[6] - 1, Arg1[7])
   vldevout(Local12 + Replicate(Local13, Arg1[9] - 2) + Local14, ;
      Local1)
   DevPos(Arg1[6], Arg1[7])
   vldevout(Local19, Local1)
   DevPos(Arg1[6], Arg1[7] + 1)

   if sbGuiSupport
      vldevout(" ", Local2)
   else
      vldevout("∫", Local2)
   end
   
   DevPos(Arg1[6], Arg1[7] + 2)
   vldevout(Local10, Local5)
   DevPos(Arg1[6], Arg1[7] + 2 + Local11)
   vldevout(Arg1[8], Local9)
   DevPos(Arg1[6], Arg1[7] + Arg1[9] - 1)
   vldevout(Local15, Local1)
   DevPos(Arg1[6] + 1, Arg1[7])
   vldevout(Local18 + Replicate(Local17, Arg1[9] - 2) + Local16, ;
      Local1)
   DevPos(Arg1[6], Arg1[7] + Local20)
   vldevout(iif( sbGuiSupport,"Æ","Ú"), Local8)
   DevPos(Arg1[6], Arg1[7] + Local21)
   vldevout(iif( sbGuiSupport,"Ø","Û"), Local8)
   return Nil

********************************
static function TEXTBUTTON(Arg1)

   local Local1, Local2, Local3, Local4
   Local1:= ""
   Local2:= At("&", Arg1)
   Local3:= SubStr(Arg1, 1, Local2 - 1)
   Local4:= SubStr(Arg1, Local2 + 1)
   return iif(Local2 != 0, Local3 + Local4, Arg1)

********************************
function SETBUTTON(Arg1, Arg2, Arg3)

   local Local1
   Local1:= Arg1[Arg2][4]
   if (Arg3 != Nil)
      Arg1[Arg2][4]:= Arg3
   endif
   return Local1

********************************
static function SHOWBUTFOC(Arg1, Arg2, Arg3)

   drawbutton(Arg1, Arg2, Arg3, 2, .F.)
   showbutmsg(Arg1, Arg2, Arg3)
   return Nil

********************************
static function CHKBTMOUSE(Arg1, Arg2)

   local Local1, Local2, Local3, Local4
   Local1:= nbut:= 0
   for Local1:= 1 to Len(Arg1)
      Local2:= Arg1[Local1][6]
      Local3:= Arg1[Local1][7]
      Local4:= Arg1[Local1][7] + Arg1[Local1][9] - 1
      if (Arg2[2] == Local2 .AND. Arg2[3] >= Local3 .AND. Arg2[3] <= ;
            Local4)
         nbut:= Local1
         exit
      endif
   next
   return nbut

********************************
static function BUTLEFT(Arg1, Arg2, Arg3, Arg4)

   hidebutfoc(Arg1[Arg2], Arg3, Arg4)
   Arg2:= iif(--Arg2 == 0, Len(Arg1), Arg2)
   showbutfoc(Arg1[Arg2], Arg3, Arg4)
   return Arg2

********************************
static function BUTRIGHT(Arg1, Arg2, Arg3, Arg4)

   hidebutfoc(Arg1[Arg2], Arg3, Arg4)
   Arg2:= iif(++Arg2 > Len(Arg1), 1, Arg2)
   showbutfoc(Arg1[Arg2], Arg3, Arg4)
   return Arg2

********************************
static function BUTGOTO(Arg1, Arg2, Arg3, Arg4, Arg5)

   hidebutfoc(Arg1[Arg2], Arg4, Arg5)
   Arg2:= iif(Len(Arg1) >= Arg3, Arg3, Arg2)
   showbutfoc(Arg1[Arg2], Arg4, Arg5)
   return Arg2

********************************
function VLGETMOVTO(Arg1)

   local Local1
   Local1:= Static12
   if (PCount() > 0)
      Static12:= Arg1
   endif
   return Local1

********************************
function PROCBUTTON(Arg1, Arg2, Arg3, Arg4)

   local Local1, Local2, Local3, Local4, Local5
   Local1:= setcursor(0)
   Local5:= 0
   Arg2:= iif(ISNIL(Arg2), 1, Arg2)
   Arg3:= iif(ISNIL(Arg3), 1, Arg3)
   showbutton(Arg1, Arg2, Arg4)
   do while (!Arg1[Arg3][4])
      Arg3:= iif(++Arg3 > Len(Arg1), 1, Arg3)
   enddo
   do while (Local5 == 0)
      showbutfoc(Arg1[Arg3], Arg2, Arg4)
      Local2:= waitstate()
      do case
      case Local2[1] == 1
         do case
         case (Local3:= ascan(Arg1, {|_1| Upper(Chr(Local2[2])) == ;
               Upper(_1[8])})) != 0
            Arg3:= butgoto(Arg1, Arg3, Local3, Arg2, Arg4)
            Arg3:= Local5:= butexecute(Arg1, Arg3, Arg2, Arg4)
         case Local2[2] == 19 .OR. Local2[2] == 271 .OR. Local2[2] ;
               == 5
            Arg3:= butleft(Arg1, Arg3, Arg2, Arg4)
         case Local2[2] == 4 .OR. Local2[2] == 9 .OR. Local2[2] == 24
            Arg3:= butright(Arg1, Arg3, Arg2, Arg4)
         case Local2[2] == 27
            if ((Local3:= ascan(Arg1, {|_1| _1[5]})) != 0 .AND. ;
                  Arg1[Local3][4])
               Arg3:= butgoto(Arg1, Arg3, Local3, Arg2, Arg4)
               Arg3:= Local5:= butexecute(Arg1, Arg3, Arg2, Arg4)
            endif
         case Local2[2] == 13 .AND. Arg1[Arg3][4]
            Arg3:= Local5:= butexecute(Arg1, Arg3, Arg2, Arg4)
         endcase
      case Local2[1] == 2
         if ((Local4:= chkbtmouse(Arg1, Local2)) != 0 .AND. Local4 ;
               != Arg3)
            Arg3:= butgoto(Arg1, Arg3, Local4, Arg2, Arg4)
         endif
      case Local2[1] == 3
         if ((Local4:= chkbtmouse(Arg1, Local2)) != 0)
            Arg3:= butgoto(Arg1, Arg3, Local4, Arg2, Arg4)
            Arg3:= Local5:= butexecute(Arg1, Local4, Arg2, Arg4)
         endif
      case Local2[1] == 4
         if ((Local4:= chkbtmouse(Arg1, Local2)) != 0 .AND. Local4 ;
               != Arg3)
            Arg3:= butgoto(Arg1, Arg3, Local4, Arg2, Arg4)
         endif
      endcase
   enddo
   setcursor(Local1)
   return Local5

********************************
static function SHOWBUTMSG(Arg1, Arg2, Arg3)

   local Local1
   Local1:= iif(Arg2 == 3, Arg3[9], "R*/W")
   if (Arg1[2] != Nil .OR. Arg1[2] != "")
      dwnmsg(Arg1[2], Local1)
   endif
   return Nil

********************************
static function HIDEBUTFOC(Arg1, Arg2, Arg3)

   drawbutton(Arg1, Arg2, Arg3, 1, .T.)
   return Nil

********************************
procedure VLGETREADER(Arg1)
      return VLGETREADE(Arg1)

procedure VLGETREADE(Arg1)
/**
@ 0,0 say len (getlist )
?? ' ', seconds()

#ifndef __XHARBOUR__
   return __GetListActive():Reader()
#else
   return Arg1:Reader()
#endif
/**/
/**/
   local Local1, Local2, Local3, Local4, Local5, Local6, Local7, ;
      Local8, Local9, Local10, Local11, Local12, Local13
   Local12:= array(4)
   Local1:= ascan(getlist, {|_1| _1 == Arg1})
   if (!(ISNIL(vlgetmovto())) .AND. Local1 != vlgetmovto())
      if (Local1 > vlgetmovto())
         Arg1:exitstate(1)
      else
         Arg1:exitstate(2)
      endif
   else
      vlgetmovto(Nil)
      Local10:= getprevalidate(Arg1)
      if (Local10)
         Arg1:setfocus()
         
         // vailton
         SetCursor(1)
         
         do while (Arg1:exitstate() == 0)
            if (Arg1:typeout())
               Arg1:exitstate(5)
            endif
            do while (Arg1:exitstate() == 0)
               Local3:= .F.
               Local4:= .F.
               do while (!Local4 .AND. !Local3)
                  Local13:= waitstate()
                  if (Local13[1] == 1)
                     Local2:= Local13[2]
                     Local4:= .T.
                  endif
                  if (!Local4)
                     Local7:= Local13[2]
                     Local8:= Local13[3]
                     if (Local13[1] == 2)
                        Local9:= ascan(getlist, {|_1| Local7 == ;
                           _1:row() .AND. Local8 >= _1:col() .AND. ;
                           Local8 <= _1:col() + ;
                           Len(Transform(_1:varget(), _1:picture())) ;
                           - 1})
                        Local3:= Local9 > 0
                     endif
                  endif
               enddo
               if (Local4)
                  getapplykey(Arg1, Local2)
               else
                  vlgetgoto(Local9)
               endif
            enddo
            Local11:= getpostvalidate(Arg1)
            if (!Local11)
               Arg1:exitstate(0)
               vlgetmovto(Nil)
            endif
         enddo
         Arg1:killfocus()
      endif
   endif
   return
/**/
********************************
function ADDBARITEM(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7)

   local Local1, Local2, Local3
   Local3:= Len(Arg1)
   Arg2:= iif(At("&", Arg2) == 0, "&" + Arg2, Arg2)
   Arg4:= iif(ISNIL(Arg4), {|| nret()}, Arg4)
   Arg5:= iif(ISNIL(Arg5), .T., Arg5)
   Arg6:= iif(ISNIL(Arg6), 1, Arg6)
   Local1:= SubStr(Arg2, At("&", Arg2) + 1, 1)
   Local2:= Len(Arg2) + 1
   if (Local3 == 0)
      Arg7:= iif(ISNIL(Arg7), 1, Arg7)
   else
      Arg7:= iif(ISNIL(Arg7), Arg1[Local3][7] + Arg1[Local3][8], Arg7)
   endif
   AAdd(Arg1, {Arg2, Arg3, Arg4, Arg5, Local1, Arg6, Arg7, Local2})
   return Nil

********************************
function SETBARITEM(Arg1, Arg2, Arg3)

   local Local1
   Local1:= Arg1[Arg2][4]
   if (Arg3 != Nil)
      Arg1[Arg2][4]:= Arg3
   endif
   return Local1

********************************
static function DISPLAYBAR(Arg1, Arg2, Arg3)

   aeval(Arg1, {|_1| (_1[6]:= Arg2, drawbarite(_1, 1, Arg3))})
   return Nil

********************************
static function BARESCAPE(Arg1, Arg2, Arg3)

   return 0

********************************
function NEWDOWNMENU
   RETURN NEWDOWNMEN()

function NEWDOWNMEN

   return {}

********************************
function BARMENU(Arg1, Arg2, Arg3, Arg4)

   local Local1, Local2, Local3, Local4, Local5, Local6, Local7, ;
      Local8
   Local1:= array(4)
   Local2:= setcursor(0)
   Local6:= .T.
   Local7:= .T.
   Local8:= 0
   Arg2:= iif(ISNIL(Arg2), 1, Arg2)
   Arg3:= iif(ISNIL(Arg3), 1, Arg3)
   Arg4:= iif(PCount() == 4, Arg4, menucolors())
   keyboard Chr(13)
   InKey(0.2) //.1
   do while (Arg3 != 0)
      if (Local6)
         displaybar(Arg1, Arg2, Arg4)
         showbarfoc(Arg1[Arg3], Arg4)
         Local6:= .F.
      endif
      do case
      case setmovleft()
         Arg3:= barleft(Arg1, Arg3, Arg4)
         setmovleft(.F.)
         keyboard Chr(13)
      case setmovrigh()
         Arg3:= barright(Arg1, Arg3, Arg4)
         setmovrigh(.F.)
         keyboard Chr(13)
      case setmovflag() .AND. !setbarmsg() .AND. (Local3[2] == 19 ;
            .OR. Local3[2] == 4)
         keyboard Chr(13)
      case Arg3 == Local8 .AND. LastKey() == K_ESC
         keyboard Chr(13)
         InKey(0.2) //.1
         Local8:= 0
      endcase
      Local3:= waitstate()
      do case
      case Local3[1] == 1
         Local8:= 0
         do case
         case (Local5:= ascan(Arg1, {|_1| Upper(Chr(Local3[2])) == ;
               Upper(_1[5])})) != 0
            Arg3:= bargoto(Arg1, Arg3, Local5, Arg4)
            Arg3:= barexecute(Arg1, Arg3, Arg2, Local5, Arg4)
            Local6:= .T.
         case Local3[2] == 19
            Arg3:= barleft(Arg1, Arg3, Arg4)
         case Local3[2] == 4
            Arg3:= barright(Arg1, Arg3, Arg4)
         case Local3[2] == 27
            Arg3:= barescape(Arg1, Arg3, Arg4)
         case Local3[2] == 13 .AND. Arg1[Arg3][4]
            Arg3:= barexecute(Arg1, Arg3, Arg2, Arg3, Arg4)
            Local6:= .T.
         endcase
      case Local3[1] == 2
         if ((Local4:= chkbrmouse(Arg1, Arg2, Local3, Arg3)) > 0)
            setbarmsg(.T.)
            setmovflag(.F.)
            Arg3:= bargoto(Arg1, Arg3, Local4, Arg4)
            Local7:= .T.
         else
            Local7:= .F.
         endif
      case Local3[1] == 3
         if ((Local4:= chkbrmouse(Arg1, Arg2, Local3, Arg3)) > 0 ;
               .AND. Local7 .AND. Local8 != Arg3 .OR. Local4 > 0 ;
               .AND. ISBLOCK(Arg1[Arg3][3]))
            setbarmsg(.T.)
            setmovflag(.F.)
            Arg3:= bargoto(Arg1, Arg3, Local4, Arg4)
            Local8:= Arg3
            Arg3:= barexecute(Arg1, Local4, Arg2, Local4, Arg4)
            Local6:= .T.
         elseif (Local4 > 0)
            Local8:= 0
         endif
      case Local3[1] == 4
         if ((Local4:= chkbrmouse(Arg1, Arg2, Local3, Arg3)) > 0 ;
               .AND. Local4 != Arg3 .AND. Local7)
            setbarmsg(.T.)
            setmovflag(.F.)
            Arg3:= bargoto(Arg1, Arg3, Local4, Arg4)
            Local8:= 0
         elseif (Local4 == -1 .AND. Local7)
            setbarmsg(.T.)
            setmovflag(.F.)
            Local8:= Arg3
            Arg3:= barexecute(Arg1, Arg3, Arg2, Local4, Arg4)
            Local6:= .T.
         endif
      endcase
   enddo
   setcursor(Local2)
   return Arg3

********************************
static function DRAWBARITE(Arg1, Arg2, Arg3)

   local Local1, Local2, Local3, Local4
   Local3:= padr(" " + textmenu(Arg1[1]), Arg1[8])
   Local4:= At("&", Arg1[1])
   if (Arg2 == 1)
      Local1:= iif(Arg1[4], Arg3[1], Arg3[2])
      Local2:= iif(Arg1[4], Arg3[6], Arg3[8])
   elseif (Arg2 == 2)
      Local1:= iif(Arg1[4], Arg3[3], Arg3[4])
      Local2:= iif(Arg1[4], Arg3[5], Arg3[7])
   endif
   DevPos(Arg1[6], Arg1[7])
   vldevout(Local3, Local1)
   DevPos(Arg1[6], Arg1[7] + Local4)
   vldevout(Arg1[5], Local2)
   return Nil

********************************
static function SHOWBARMSG(Arg1, Arg2)

   if (setbarmsg() .AND. (Arg1[2] != Nil .OR. Arg1[2] = ""))
      dwnmsg(Arg1[2], Arg2[10])
   endif
   return Nil

********************************
static function SHOWBARFOC(Arg1, Arg2)

   drawbarite(Arg1, 2, Arg2)
   showbarmsg(Arg1, Arg2)
   return Nil

********************************
static function HIDEBARFOC(Arg1, Arg2)

   drawbarite(Arg1, 1, Arg2)
   return Nil

********************************
static function CHKBRMOUSE(Arg1, Arg2, Arg3, Arg4)

   local Local1, Local2, Local3
   nret:= 0
   if (Arg3[2] == Arg2 + 2)
      Local2:= Arg1[Arg4][7]
      Local3:= Arg1[Arg4][7] + Arg1[Arg4][8]
      if (Arg3[3] >= Local2 .AND. Arg3[3] <= Local3)
         nret:= -1
      endif
   elseif (Arg3[2] == Arg2)
      for Local1:= 1 to Len(Arg1)
         Local2:= Arg1[Local1][7]
         Local3:= Arg1[Local1][7] + Arg1[Local1][8]
         if (Arg3[3] >= Local2 .AND. Arg3[3] <= Local3)
            nret:= Local1
            setmovflag(.F.)
            exit
         endif
      next
   endif
   return nret

********************************
function SETMOVLEFT(Arg1)

   local Local1
   Local1:= Static14
   if (Arg1 != Nil)
      Static14:= Arg1
   endif
   return Local1

********************************
static function BARLEFT(Arg1, Arg2, Arg3)

   if (setmovflag() .AND. setbarmsg())
      setbarmsg(.F.)
   endif
   hidebarfoc(Arg1[Arg2], Arg3)
   Arg2:= iif(--Arg2 == 0, Len(Arg1), Arg2)
   showbarfoc(Arg1[Arg2], Arg3)
   return Arg2

********************************
static function BARRIGHT(Arg1, Arg2, Arg3)

   if (setmovflag() .AND. setbarmsg())
      setbarmsg(.F.)
   endif
   hidebarfoc(Arg1[Arg2], Arg3)
   Arg2:= iif(++Arg2 > Len(Arg1), 1, Arg2)
   showbarfoc(Arg1[Arg2], Arg3)
   return Arg2

********************************
static function BARGOTO(Arg1, Arg2, Arg3, Arg4)

   hidebarfoc(Arg1[Arg2], Arg4)
   Arg2:= iif(Len(Arg1) >= Arg3, Arg3, Arg2)
   showbarfoc(Arg1[Arg2], Arg4)
   return Arg2

********************************
static function BAREXECUTE(Arg1, Arg2, Arg3, Arg4, Arg5)

   local Local1
   if (ISARRAY(Arg1[Arg2][3]) .AND. Arg1[Arg2][4])
      Local1:= downmenu(Arg1[Arg2][3], 1, Arg1[Arg2][6] + 1, ;
         Arg1[Arg2][7], 1, Arg5, Arg3, Arg1)
      Arg2:= iif(Local1 == -1, Arg2, Local1)
   elseif (ISBLOCK(Arg1[Arg2][3]) .AND. Arg1[Arg2][4] .AND. Arg4 != ;
         -1)
      if (setmovflag() .AND. !setbarmsg())
         setbarmsg(.T.)
      else
         setmovflag(.F.)
         eval(Arg1[Arg2][3])
      endif
   endif
   return Arg2

********************************
function SETMOVRIGHT(Arg1)
   RETURN SETMOVRIGH(Arg1)

function SETMOVRIGH(Arg1)

   local Local1
   Local1:= Static15
   if (Arg1 != Nil)
      Static15:= Arg1
   endif
   return Local1

********************************
function SETMOVFLAG(Arg1)

   local Local1
   Local1:= Static16
   if (Arg1 != Nil)
      Static16:= Arg1
   endif
   return Local1

********************************
function MENUCOLORS

   local Local1
   Local1:= {}
   AAdd(Local1, "N*/W")
   AAdd(Local1, "W*/W")
   AAdd(Local1, "W+/N")
   AAdd(Local1, "W/N")
   AAdd(Local1, "R+/N")
   AAdd(Local1, "R+*/W")
   AAdd(Local1, "W+/N")
   AAdd(Local1, "N*/W")
   AAdd(Local1, "N*/W")
   AAdd(Local1, "R*/W")
   return Local1

********************************
function ADDDOWNSEP(Arg1, Arg2)

   local Local1, Local2, Local3
   Local3:= Len(Arg1)
   Arg2:= iif(ISNIL(Arg2), 1, Arg2)
   Local2:= iif(ISNIL(Local2), 3, Local2)
   if (Local3 == 0)
      Local1:= iif(ISNIL(Local1), 3, Local1)
   else
      Local1:= iif(ISNIL(Local1), Arg1[Local3][6] + 1, Local1)
   endif
   AAdd(Arg1, {Nil, Nil, Nil, .T., "", Local1, Local2, .F., .T., ;
      Arg2})
   return Nil

********************************
static function HIDEDWNFOC(Arg1, Arg2)

   drawdownit(Arg1, 1, Arg2)
   return Nil

********************************
function ADDDOWNITE(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8)
      RETURN ADDDOWNITEM(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8)

function ADDDOWNITEM(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8)

   local Local1, Local2
   Local2:= Len(Arg1)
   Arg2:= iif(At("&", Arg2) == 0, "&" + Arg2, Arg2)
   Arg4:= iif(ISNIL(Arg4), {|| nret()}, Arg4)
   Arg6:= iif(ISNIL(Arg6), .T., Arg6)
   Arg8:= iif(ISNIL(Arg8), 3, Arg8)
   Local1:= SubStr(Arg2, At("&", Arg2) + 1, 1)
   if (Local2 == 0)
      Arg7:= iif(ISNIL(Arg7), 3, Arg7)
      Arg5:= iif(ISNIL(Arg5), Len(Arg2) + 4, Arg5)
   else
      Arg7:= iif(ISNIL(Arg7), Arg1[Local2][6] + 1, Arg7)
      Arg5:= iif(ISNIL(Arg5), Max(Arg1[Local2][10], Len(Arg2) + 4), ;
         Arg5)
   endif
   AAdd(Arg1, {Arg2, Arg3, Arg4, Arg6, Local1, Arg7, Arg8, .F., .F., ;
      Arg5})
   return Nil

********************************
static function DRAWDOWNIT(Arg1, Arg2, Arg3)

   local Local1, Local2, Local3, Local4, Local5, Local6
   Local5:= iif(Arg1[8], "˚ ", "  ")
   Local6:= iif(ISARRAY(Arg1[3]), iif(sbGuiSupport,'>',Chr(16)), " ")
   Local3:= iif(Arg1[9], Replicate("ƒ", Arg1[10]), padr(Local5 + ;
      textmenu(Arg1[1]), Arg1[10] - 1) + Local6)
   Local4:= iif(Arg1[9], 0, At("&", Arg1[1]) + 1)
   if (Arg2 == 1)
      Local1:= iif(Arg1[4], Arg3[1], Arg3[2])
      Local2:= iif(Arg1[4], Arg3[6], Arg3[8])
   elseif (Arg2 == 2)
      Local1:= iif(Arg1[4], Arg3[3], Arg3[4])
      Local2:= iif(Arg1[4], Arg3[5], Arg3[7])
   endif
   if (Arg1[9])
      if !sbGuiSupport
         DevPos(Arg1[6], Arg1[7])
         vldevout(Local3, Local1)
      else
         DevPos(Arg1[6], Arg1[7]-1)
         if sbGuiSupportEX
            vldevout(' '+Local3+' ', Local1)
         else
            vldevout('√'+Local3+'¥', Local1)
         end
      end
   else
      DevPos(Arg1[6], Arg1[7])
      vldevout(Local3, Local1)
      DevPos(Arg1[6], Arg1[7] + Local4)
      vldevout(Arg1[5], Local2)
   endif
   return Nil

********************************
function CHKDOWNITEM(Arg1, Arg2, Arg3)
   return CHKDOWNITE(Arg1, Arg2, Arg3)

function CHKDOWNITE(Arg1, Arg2, Arg3)

   local Local1
   Local1:= Arg1[Arg2][8]
   if (Arg3 != Nil)
      Arg1[Arg2][8]:= Arg3
   endif
   return Local1

********************************
function SETDOWNITEM(Arg1, Arg2, Arg3)
   return SETDOWNITE(Arg1, Arg2, Arg3)

function SETDOWNITE(Arg1, Arg2, Arg3)

   local Local1
   Local1:= Arg1[Arg2][4]
   if (Arg3 != Nil)
      Arg1[Arg2][4]:= Arg3
   endif
   return Local1

********************************
static function DISPLAYDOWN(Arg1, Arg2)
   return DISPLAYDOW(Arg1, Arg2)
   
static function DISPLAYDOW(Arg1, Arg2)

   local Local1
   for Local1:= 1 to Len(Arg1[2])
      drawdownit(Arg1[2][Local1], 1, Arg2)
   next
   return Nil

********************************
static function SHOWDOWNMS(Arg1, Arg2)

   if (Arg1[2] != Nil .OR. Arg1[2] = "")
      dwnmsg(Arg1[2], Arg2[10])
   endif
   return Nil

********************************
function GETTIMER

   return Static17

********************************
function DOWNMENU(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8)

   local Local1, Local2, Local3, Local4, Local5, Local6, Local7, ;
      Local8, Local9, Local10, Local11, Local12, Local13, Local14, ;
      Local15, Local16
   Local1:= array(4)
   Local2:= setcursor(0)
   Local3:= Len(Arg1)
   Local4:= Arg1[1][10]
   Local8:= 1
   Local11:= {}
   Local15:= 0
   Local16:= .T.
   Arg7:= iif(ISNIL(Arg7), -1, Arg7)
   Arg8:= iif(ValType(Arg8) != "A", {}, Arg8)
   Arg6:= iif(PCount() < 6, menucolors(), Arg6)
   
   if sbGuiSupportEx
      //Arg3 += 2
   endif
   
   auxpshdown(Local11, Arg1, Arg2, Arg3, Arg4, Arg5, Local8, Arg6)
   do while (Local15 == 0)
      setmovflag(.F.)
      Local12:= Local11[Local8][1]
      Local13:= Local11[Local8][2]
      Arg2:= Local12[1]
      do while (Local13[Arg2][9])
         Arg2:= iif(++Arg2 > Len(Local13), 1, Arg2)
      enddo
      do while (Arg2 != 0)
         if (Local16)
            displaydow(Local11[Local8], Arg6)
            showdwnfoc(Local13[Arg2], Arg6)
            Local16:= .F.
         endif
         Local7:= waitstate()
         do case
         case Local7[1] == 1
            do case
            case (Local10:= ascan(Local13, {|_1| ;
                  Upper(Chr(Local7[2])) == Upper(_1[5])})) != 0
               Arg2:= dwngoto(Local13, Arg2, Local10, Arg6)
               Arg2:= dwnexecute(Local11, Local13, Arg2, Local12, ;
                  Local8, Arg6)
               Local8:= Len(Local11)
               Local16:= .T.
            case Local7[2] == 5
               Arg2:= dwnup(Local13, Arg2, Arg6)
            case Local7[2] == 24
               Arg2:= dwndown(Local13, Arg2, Arg6)
            case Local7[2] == 19
               Arg2:= dwnleft(Local11, Local13, Local8, Arg6)
               Local8:= Len(Local11)
               Local15:= -1
            case Local7[2] == 4
               Arg2:= dwnrigh(Local11, Local13, Local8, Arg6)
               Local8:= Len(Local11)
               Local15:= -1
            case Local7[2] == 27
               Arg2:= dwnescape(Local11, Local13, Arg2, Arg6)
               Local8--
               Local15:= iif(Local8 == 0, -1, Local15)
            case Local7[2] == 13 .AND. Local13[Arg2][4]
               Arg2:= dwnexecute(Local11, Local13, Arg2, Local12, ;
                  Local8, Arg6)
               Local8:= Len(Local11)
               Local16:= .T.
            endcase
         case Local7[1] == 2
            Local14:= chkdnmouse(Local11, Local13, Arg2, Local7, ;
               Local8, Arg8, Arg7)
            if (Local14[2] != 0)
               do while (Local8 > Local14[1])
                  auxpopdown(Local11)
                  Local8--
               enddo
               if (Local8 > 0)
                  Local11[Local8][1][1]:= Local14[2]
               else
                  Local15:= Local14[2]
               endif
               Arg2:= 0
               Local16:= .T.
            endif
         case Local7[1] == 3
            if (Local8 > 0 .AND. (Local9:= chkupmouse(Local11, ;
                  Local13, Arg2, Local7, Local8)) != 0)
               Arg2:= dwngoto(Local13, Arg2, Local9, Arg6)
               Arg2:= dwnexecute(Local11, Local13, Arg2, Local12, ;
                  Local8, Arg6)
               Local8:= Len(Local11)
               Local16:= .T.
            endif
         case Local7[1] == 4
            if (Local8 > 0 .AND. (Local9:= chkupmouse(Local11, ;
                  Local13, Arg2, Local7, Local8)) != 0)
               Arg2:= dwngoto(Local13, Arg2, Local9, Arg6)
            endif
         endcase
      enddo
      if (Local8 == 0)
         exit
      endif
   enddo
   setcursor(Local2)
   return Local15

********************************
static function CHKDNMOUSE(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7)

   local Local1, Local2, Local3, Local4, Local5, Local6, Local7, ;
      Local8, Local9, Local10, Local11
   Local11:= xmik2:= 0
   if (Arg4[2] == Arg7)
      for Local3:= 1 to Len(Arg6)
         Local4:= Arg6[Local3][7]
         Local5:= Arg6[Local3][7] + Arg6[Local3][8]
         if (Arg4[3] >= Local4 .AND. Arg4[3] <= Local5)
            Local11:= 0
            xmik2:= Local3
            exit
         endif
      next
   else
      for Local1:= 1 to Arg5
         Local10:= Len(Arg1[Local1][2])
         Local6:= Arg1[Local1][1][3] + 1
         Local7:= Arg1[Local1][1][4] + 1
         Local8:= Arg1[Local1][1][5] - 1
         Local9:= Arg1[Local1][1][6] - 1
         if (Arg4[2] >= Local6 .AND. Arg4[2] <= Local8 .AND. Arg4[3] ;
               >= Local7 .AND. Arg4[3] <= Local9)
            for Local2:= 1 to Local10
               if (Arg4[2] == Arg1[Local1][2][Local2][6] .AND. ;
                     !Arg1[Local1][2][Local2][9])
                  Local11:= Local1
                  xmik2:= Local2
                  exit
               endif
            next
         endif
         if (Local11 != 0)
            exit
         endif
      next
   endif
   return {Local11, xmik2}

********************************
static function CHKUPMOUSE(Arg1, Arg2, Arg3, Arg4, Arg5)

   local Local1, Local2, Local3, Local4, Local5, Local6, Local7
   Local7:= 0
   Local6:= Len(Arg2)
   Local2:= Arg1[Arg5][1][3] + 1
   Local3:= Arg1[Arg5][1][4] + 1
   Local4:= Arg1[Arg5][1][5] - 1
   Local5:= Arg1[Arg5][1][6] - 1
   if (Arg4[2] >= Local2 .AND. Arg4[2] <= Local4 .AND. Arg4[3] >= ;
         Local3 .AND. Arg4[3] <= Local5)
      for Local1:= 1 to Local6
         if (Arg4[2] == Arg2[Local1][6] .AND. !Arg2[Local1][9])
            Local7:= Local1
            exit
         endif
      next
   endif
   return Local7

********************************
function NRET

   return Nil

********************************
static function AUXPSHDOWN(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, ;
   Arg8)

   local Local1, Local2, Local3, Local4, Local5, Local6, Local7
   local r22 := MaxRow()-2
   local c80 := MaxCol()
   
   Local1:= Len(Arg2)
   Local2:= Arg2[1][10]
   Arg3:= iif(ISNIL(Arg3), 1, Arg3)
   for Local4:= 1 to Local1
      Local2:= Max(Arg2[Local4][10], Local2)
   next
   for Local4:= 1 to Local1
      Arg2[Local4][10]:= Local2
   next
   Local5:= Arg4 + Local1 + 1
   Local6:= Arg5 + Arg2[1][10] + 1
   if (Arg7 > 1 .AND. (Arg5 > 45 .OR. Arg5 + Arg6 > 65))
      Arg5:= Arg5 + Arg6
      Local6:= Local6 + Arg6
      Arg5:= Arg5 - iif(Local6 + 3 > c80, Arg6 + Arg2[1][10] + 2, 0)
      Local6:= Local6 - iif(Local6 + 3 > c80, Arg6 + Arg2[1][10] + 2, ;
         0)
      Arg4:= Arg4 - iif(Local5 + 1 > r22, Local5 + 1 - r22, 0)
      Local5:= Local5 - iif(Local5 + 1 > r22, Local5 + 1 - r22, 0)
      if (Arg5 < 0)
         Arg5:= 77 - (Local6 - Arg5)
         Local6:= Arg5 + Arg2[1][10] + 1
      endif
   elseif (Arg7 > 1)
      Arg5:= Arg5 + Arg6
      Local6:= Local6 + Arg6
      Arg5:= Arg5 - iif(Local6 + 3 > c80, Local6 + 3 - c80, 0)
      Local6:= Local6 - iif(Local6 + 3 > c80, Local6 + 3 - c80, 0)
      Arg4:= Arg4 - iif(Local5 + 1 > r22, Local5 + 1 - r22, 0)
      Local5:= Local5 - iif(Local5 + 1 > r22, Local5 + 1 - r22, 0)
   else
      Arg5:= Arg5 - iif(Local6 + 3 > c80, Local6 + 3 - c80, 0)
      Local6:= Local6 - iif(Local6 + 3 > c80, Local6 + 3 - c80, 0)
      Arg4:= Arg4 - iif(Local5 + 1 > r22, Local5 + 1 - r22, 0)
      Local5:= Local5 - iif(Local5 + 1 > r22, Local5 + 1 - r22, 0)
   endif
   
   if sbGuiSupportEx
      Local7:= nbox(Arg4, Arg5, Local5, Local6, Arg8[9],.T.)
   else
      Local7:= nbox(Arg4, Arg5, Local5, Local6, Arg8[9])
   end
   
   for Local4:= 1 to Local1
      Arg2[Local4][6]:= Arg4 + Local4
      Arg2[Local4][7]:= Arg5 + 1
   next
   AAdd(Arg1, {{Arg3, Local7, Arg4, Arg5, Local5, Local6}, Arg2})
   return Nil

********************************
static function AUXPOPDOWN(Arg1)

   local Local1
   Local1:= Len(Arg1)
   rstenv(Arg1[Local1][1][2])
   asize(Arg1, Local1 - 1)
   return Nil

********************************
static function SHOWDWNFOC(Arg1, Arg2)

   drawdownit(Arg1, 2, Arg2)
   showdownms(Arg1, Arg2)
   return Nil

********************************
static function DWNUP(Arg1, Arg2, Arg3)

   hidedwnfoc(Arg1[Arg2], Arg3)
   Arg2:= iif(--Arg2 == 0, Len(Arg1), Arg2)
   do while (Arg1[Arg2][9])
      Arg2:= iif(--Arg2 == 0, Len(Arg1), Arg2)
   enddo
   showdwnfoc(Arg1[Arg2], Arg3)
   return Arg2

********************************
static function DWNDOWN(Arg1, Arg2, Arg3)

   hidedwnfoc(Arg1[Arg2], Arg3)
   Arg2:= iif(++Arg2 > Len(Arg1), 1, Arg2)
   do while (Arg1[Arg2][9])
      Arg2:= iif(++Arg2 > Len(Arg1), 1, Arg2)
   enddo
   showdwnfoc(Arg1[Arg2], Arg3)
   return Arg2

********************************
static function DWNLEFT(Arg1, Arg2, Arg3)

   do while (Arg3 > 0)
      auxpopdown(Arg1)
      Arg3--
   enddo
   setmovflag(.T.)
   setmovleft(.T.)
   setbarmsg(.F.)
   return 0

********************************
static function DWNRIGH(Arg1, Arg2, Arg3)

   do while (Arg3 > 0)
      auxpopdown(Arg1)
      Arg3--
   enddo
   setmovflag(.T.)
   setmovrigh(.T.)
   setbarmsg(.F.)
   return 0

********************************
static function DWNGOTO(Arg1, Arg2, Arg3, Arg4)

   hidedwnfoc(Arg1[Arg2], Arg4)
   Arg2:= iif(Arg1[Arg3][9], Arg2, Arg3)
   showdwnfoc(Arg1[Arg2], Arg4)
   return Arg2

********************************
static function DWNEXECUTE(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6)

   if (ISARRAY(Arg2[Arg3][3]) .AND. Arg2[Arg3][4])
      Arg4[1]:= Arg3
      Arg5++
      auxpshdown(Arg1, Arg2[Arg3][3], 1, Arg2[Arg3][6] - 1, ;
         Arg2[Arg3][7], Arg2[Arg3][10], Arg5, Arg6)
      Arg3:= 0
   elseif (ISBLOCK(Arg2[Arg3][3]) .AND. Arg2[Arg3][4])
      eval(Arg2[Arg3][3])
   endif
   return Arg3

********************************
static function DWNESCAPE(Arg1, Arg2, Arg3)

   auxpopdown(Arg1)
   setbarmsg(.T.)
   return 0

********************************
function NINKEY(Arg1)

   local Local1, Local2, Local3
   do while (.T.)
      Local1:= .F.
      if (Arg1 = Nil)
         Local2:= InKey(0.10,159)
      else
         Local2:= InKey(Arg1,159)
      endif

      if Local2 >= K_MINMOUSE .and. ;
         Local2 <= K_MAXMOUSE
         
         if Local2 == K_LBUTTONDOWN .or. ;
            Local2 == K_LBUTTONUP .or. ;
            Local2 == K_LDBLCLK

            if Local2 == K_LDBLCLK
               arrMouseInfLeft[1] := 2
            else
               arrMouseInfLeft[1] := 1
            end
            arrMouseInfLeft[2] := mRow()
            arrMouseInfLeft[3] := mCol()
         end

         if Local2 == K_RBUTTONDOWN .or. ;
            Local2 == K_RBUTTONUP .or. ;
            Local2 == K_RDBLCLK

            if Local2 == K_RDBLCLK
               arrMouseInfRight[1] := 2
            else
               arrMouseInfRight[1] := 1
            end
            arrMouseInfRight[2] := mRow()
            arrMouseInfRight[3] := mCol()
         end
         Local2 := 0
         Setswmouse(.t.)
      end
      
      if (Local2 != 0 .AND. (Local3:= SetKey(Local2)) != Nil)
         eval(Local3, procname(2), procline(2), "")
         Local1:= .T.
         resettimer()
      endif
      if (!Local1)
         exit
      endif
   enddo
   return Local2

********************************
function DWNMSG(Arg1, Arg2)
   local r23 := MaxRow()-1
   local c80 := MaxCol()+1
   
   Arg2:= iif(ISNIL(Arg2), "R*/W", Arg2)
   DevPos(r23, 0)
   vldevout(padc(Arg1, c80), Arg2)
   return .T.

********************************
function CLOCK

   local Local1, Local2, Local3, Local4
   Local3:= vlscrsaver()
   Local4:= array(3)
   Local1:= win(10, 29, 13, 50, "Rel¢gio - " + DToC(Date()), ;
      "W+*/B", "B+*/W")
   setcursor(0)
   resettimer()
   vlmousedn(0, Local4)
   do while (.T.)
      DevPos(12, 36)
      vldevout(Time(), "N*/W")
      if ((Local2:= InKey(1)) != 0)
         exit
      endif
      vlmousedn(0, Local4)
      if (Local4[1] > 0)
         exit
      endif
      if (Seconds() - gettimer() > Local3[1])
         eval(Local3[2])
         resettimer()
      endif
   enddo
   rstenv(Local1)
   return Nil

********************************
function CHKPRN

   local Local1
   Local1:= .T.
   do while (!isprinter())
      if (msgbox2("Impressora nÑo preparada. Continuar ?") == 2)
         Local1:= .F.
         exit
      endif
   enddo
   return Local1

********************************
function SAVENV(Arg1, Arg2, Arg3, Arg4,lNoCaption)
   local Local1
   local win
   local a,b,c

   Local1:= {}
   AAdd(Local1, Arg1)
   AAdd(Local1, Arg2)
   AAdd(Local1, Arg3)
   AAdd(Local1, Arg4)
   AAdd(Local1, vlsavescre(Arg1, Arg2, Arg3, Arg4))
   AAdd(Local1, SetColor())
   AAdd(Local1, setcursor())
   AAdd(Local1, Row())
   AAdd(Local1, Col())

   if sbGuiSupportEx
      a := &("{|| WVW_NSETCURWINDOW() }")
      b := &("{|| WVW_NNUMWINDOWS() }")
      c := &("{|p1,p2,p3,p4,p5,p6,p7| WVW_nOpenWindow(p1,p2,p3,p4,p5,p6,p7) }")
      
      AADD(Local1, a:Eval() ) // 10 item
      AADD(Local1, b:EVal() )   // 11 item

      if lNoCaption <> nil .and. lNoCaption
         win := c:EVal('',Arg1, Arg2, Arg3, Arg4,KS_NOCAPTION(),0)
      else
         win := c:EVal('',Arg1, Arg2, Arg3, Arg4)
      end
      AADD(Local1, win )                 // 12 item
   else
      AADD(Local1, 00 )   // 10 item
      AADD(Local1, 00 )   // 11 item
      AADD(Local1, nil )  // 12 item
   end
   
   RETURN Local1

********************************
function RSTENV(Arg1)
   LOCAL i := 00
   LOCAL b,c,d

   if sbGuiSupportEx

      b := &( "{|| WVW_NNUMWINDOWS() }" )
      c := &( "{|| WVW_lCloseWindow() }" )
      d := &( "{|_1| WVW_NSETCURWINDOW(_1) }" )
      
      WHILE ( b:Eval() <> Arg1[11] )
            i++
            c:Eval()

            if i > 5
               exit
            end
      End

      d:Eval( Arg1[10] )
   else
      vlrestscre(Arg1[1], Arg1[2], Arg1[3], Arg1[4], Arg1[5])
      set color to (Arg1[6])
      setcursor(Arg1[7])
      SetPos(Arg1[8], Arg1[9])
   end
   return Nil

********************************
function VLEXIT(Arg1, Arg2, Arg3, Arg4)

   local Local1
   //Local1:= savenv(33, 0, 33, 79)
   Arg4:= iif(ISNIL(Arg4), .T., Arg4)

   if (!Arg4)
      if sbGuiSupport
         vlmouseoff()
         set color to
         vlscroll()
         SetPos(0, 0)
         close databases
         setcursor(1)
      else
         vlmouseoff()
         set color to n/n
         setcursor(0)
         vlscroll()
*         run vlfont.exe off

         set color to
         vlscroll()
         SetPos(0, 0)
         vlsetmode(25, 80)
         close databases
         vlsetblink(.T.)
         setcursor(1)
      end
      quit
   elseif (msgbox2("Confirma o encerramento ?", "Sa°da", Nil, Nil, ;
         Nil, Nil, 2) == 1)
      if sbGuiSupport
         setcursor(0)
         vlmouseoff()
         set color to
         vlscroll()
         SetPos(0, 0)
         close databases
         setcursor(1)
      else
         setcursor(0)
         vlmouseoff()
         set color to n/n
         vlscroll()
*         run vlfont.exe off

         set color to
         vlscroll()
         SetPos(0, 0)
         vlsetmode(25, 80)
         close databases
         vlsetblink(.T.)
         setcursor(1)
      end
      quit
   endif
   //rstenv(Local1)
   return Nil

********************************
function QEXIT(Arg1, Arg2, Arg3, Arg4)

   vlexit(Arg1, Arg2, Arg3, Arg4)
   return Nil

********************************
function VLSCROLL(Arg1, Arg2, Arg3, Arg4, Arg5)

   local Local1
   Local1:= vlsetmouse(.F.)
   Scroll(Arg1, Arg2, Arg3, Arg4, Arg5)
   vlsetmouse(Local1)
   return Nil

********************************
function RESETTIMER

   return Static17:= Seconds()

********************************
function VLSETMODE(Arg1, Arg2)

   local Local1, Local2
   Local1:= vlsetmouse(.F.)
   Local2:= setmode(Arg1, Arg2)
   vlmouseini()
   vlsetmouse(Local1)
   return Local2

********************************
function VLSAVESCREEN(Arg1, Arg2, Arg3, Arg4)
   RETURN VLSAVESCRE(Arg1, Arg2, Arg3, Arg4)

function VLSAVESCRE(Arg1, Arg2, Arg3, Arg4)

   local Local1, Local2
   Local2:= vlsetmouse(.F.)
   Local1:= SaveScreen(Arg1, Arg2, Arg3, Arg4)
   vlsetmouse(Local2)
   return Local1

********************************
function VLRESTSCREEN(Arg1, Arg2, Arg3, Arg4, Arg5)
   RETURN VLRESTSCRE(Arg1, Arg2, Arg3, Arg4, Arg5)

function VLRESTSCRE(Arg1, Arg2, Arg3, Arg4, Arg5)

   local Local1
   Local1:= vlsetmouse(.F.)
   RestScreen(Arg1, Arg2, Arg3, Arg4, Arg5)
   vlsetmouse(Local1)
   return Nil

********************************
function VLQOUT(Arg1)

   local Local1, Local2
   Local1:= vlsetmouse(.F.)
   Local2:= Len(Arg1)
   do case
   case Local2 == 1
      ? Arg1[1]
   case Local2 == 2
      ? Arg1[1], Arg1[2]
   case Local2 == 3
      ? Arg1[1], Arg1[2], Arg1[3]
   case Local2 == 4
      ? Arg1[1], Arg1[2], Arg1[3], Arg1[4]
   case Local2 == 5
      ? Arg1[1], Arg1[2], Arg1[3], Arg1[4], Arg1[5]
   endcase
   vlsetmouse(Local1)
   return Nil

********************************
function VLQQOUT(Arg1)

   local Local1
   Local1:= vlsetmouse(.F.)
   aeval(Arg1, {|_1| QQOut(_1)})
   vlsetmouse(Local1)
   return Nil

********************************
function VLDEVOUT(Arg1, Arg2)

   local Local1
   Local1:= vlsetmouse(.F.)
   DevOut(Arg1, Arg2)
   vlmouseon(Local1)
   return Nil

********************************
function VLDEVOUTPICT(Arg1, Arg2, Arg3)
   return VLDEVOUTPI(Arg1, Arg2, Arg3)
   
function VLDEVOUTPI(Arg1, Arg2, Arg3)

   local Local1
   Local1:= vlsetmouse(.F.)
   DevOutPict(Arg1, Arg2, Arg3)
   vlmouseon(Local1)
   return Nil

********************************
function VLDISPBOX(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6)

   local Local1
   Local1:= vlsetmouse(.F.)
   @ Arg1, Arg2, Arg3, Arg4 box Arg5 color Arg6
   vlmouseon(Local1)
   return Nil

********************************
function DESKTOP(Arg1, Arg2,lCallSetMode,lCallSetFont)

   local Local1
   local c80 := MaxCol()+1
   local r24 := MaxRow()
   
   Arg1:= iif(ISNIL(Arg1), ;
      "Analyze Tecnologia em Sistemas - Visual Lib 2.0", Arg1)
   Arg2:= iif(ISNIL(Arg2), "W+/BG", Arg2)
   vl850(lCallSetMode,lCallSetFont)
   if (vlmouseini(@Local1))
      vlmouseon()
   endif
   vlsetblink(.F.)
   set color to W+/W
   vlscroll()
   SetPos(0, 0)
   DevPos(0, 0)
   vldevout(padc(Arg1, c80), Arg2)
   DevPos(r24, 0)
   vldevout(padc(" ", c80), Arg2)
   DevPos(1, 0)
   vldevout(padc(" ", c80), "N*/W")
   DevPos(r24-1, 0)
   vldevout(padc(" ", c80), "N*/W")
   return Nil

********************************
function DRAWFN(Arg1, Arg2, Arg3, Arg4)

   local Local1
   local r24 := MaxRow()
   
   Local1:= {1, 9, 17, 25, 33, 41, 49, 57, 65, 73}
   Arg3:= iif(ISNIL(Arg3), "W+/BG", Arg3)
   Arg4:= iif(ISNIL(Arg4), "N/BG", Arg4)
   DevPos(r24, Local1[Arg1])
   vldevout(Left(Arg2, 7), Arg4)
   DevPos(r24, Local1[Arg1] - 1)
   
   if sbGuiSupport
      if Arg1 == 10
         Arg1 := 48
      else
         Arg1 += 48
      end
      vldevout(Chr(Arg1), Arg3)
   else
      vldevout(Chr(Arg1), Arg3)
   end
   return Nil

********************************
function NBOX(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6)
   local Local1

   if sbGuiSupportEX
      Local1:= savenv(Arg1, Arg2, Arg3, Arg4, Arg6 )
      dispbox(Arg1, Arg2, Arg3, Arg4, "           ", Arg5)
   else
      Local1:= savenv(Arg1, Arg2, Arg3 + 1, Arg4 + 2)
      Arg5:= iif(ISNIL(Arg5), "N*/W", Arg5)
      Arg6:= iif(ISNIL(Arg6), .T., Arg6)
      
      if sbGuiSupport
         vldispbox(Arg1, Arg2, Arg3, Arg4, "⁄ƒø≥Ÿƒ¿≥ " /*"…Õª∫ºÕ»∫ "*/, Arg5)
      else
         vldispbox(Arg1, Arg2, Arg3, Arg4, "…–À‹ Ã»∫ ", Arg5)
      end

      if (Arg6)
         sombra(Arg1, Arg2, Arg3, Arg4)
      endif
   end
   return Local1

********************************
function WIN(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8,lNoCaption)
   local Local1
   local a

   Arg5:= iif(ISNIL(Arg5), "", Arg5)
   Arg6:= iif(ISNIL(Arg6), "W+/B", Arg6)
   Arg7:= iif(ISNIL(Arg7), "B*/W", Arg7)
   Arg8:= iif(ISNIL(Arg8), .T., Arg8)

   if sbGuiSupportEX
      Local1:= nbox(Arg1, Arg2, Arg3, Arg4, Arg7, /*Arg8*/lNoCaption)
      a := &( "{|_1,_2| WVW_SETTITLE(_1,_2) }")
      a:Eval(,hb_oemtoansi(Arg5))
   else
      Local1:= nbox(Arg1, Arg2, Arg3, Arg4, Arg7, Arg8)
      DevPos(Arg1, Arg2)

      vldevout(padc(Arg5, Arg4 - Arg2 + 1), Arg6)
   end
   return Local1

********************************
function SOMBRA(Arg1, Arg2, Arg3, Arg4)

   local Local1, Local2, Local3, Local4
   Local3:= vlsavescre(Arg1 + 1, Arg4 + 1, Arg3 + 1, Arg4 + 2)
   Local4:= vlsavescre(Arg3 + 1, Arg2 + 2, Arg3 + 1, Arg4 + 2)
   for Local1:= 2 to Len(Local3) step 2
      Local2:= shadow(Asc(SubStr(Local3, Local1, 1)))
      Local3:= stuff(Local3, Local1, 1, Local2)
   next
   for Local1:= 2 to Len(Local4) step 2
      Local2:= shadow(Asc(SubStr(Local4, Local1, 1)))
      Local4:= stuff(Local4, Local1, 1, Local2)
   next
   vlrestscre(Arg1 + 1, Arg4 + 1, Arg3 + 1, Arg4 + 2, Local3)
   vlrestscre(Arg3 + 1, Arg2 + 2, Arg3 + 1, Arg4 + 2, Local4)
   return Nil

********************************
static function SHADOW(Arg1)

   local Local1, Local2, Local3
   Local1:= Arg1 % 16
   Local2:= (Arg1 - Local1) / 16
   Local3:= {0, 0, 8, 8, 0, 8, 0, 8, 0, 1, 2, 3, 4, 5, 6, 7}
   Local1:= Local3[Local1 + 1]
   Local2:= Local3[Local2 + 1]
   return Chr(16 * Local2 + Local1)

********************************
function MSGBOX3D1(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7)

   local Local1:= i:= 0, Local2:= obut:= {}
   Arg4:= iif(ISNIL(Arg4), "&OK", Arg4)
   Arg1:= iif(ISNIL(Arg1), "", Arg1)
   Arg2:= iif(ISNIL(Arg2), "Atená∆o!", Arg2)
   Local1:= iif(ISARRAY(Arg1), Len(Arg1), 1)
   Arg3:= iif(ISNIL(Arg3), Int(12 - (Local1 + 8) / 2), Arg3)
   Arg5:= iif(ISNIL(Arg5), "W+/N", Arg5)
   Arg6:= iif(ISNIL(Arg6), "N/W", Arg6)
   Arg7:= iif(ISNIL(Arg7), "N/W", Arg7)
   obut:= newbutton()
   addbutton(obut, Arg3 + 5 + Local1, 31, 18, Arg4, Nil, .T.)
   Local2:= win(Arg3, 10, Arg3 + 8 + Local1, 69, Arg2, Arg5, Arg6)
/*
   vldispbox(Arg3 + 2, 11, Arg3 + 7 + Local1, 11, "‹‹‹‹‹‹‹‹‹", "W+/W")
   vldispbox(Arg3 + 2, 68, Arg3 + 7 + Local1, 68, "∫∫∫∫∫∫∫∫∫", "N+/W")
   DevPos(Arg3 + 2, 12)
   vldevout(Replicate("–", 56), "W+/W")
   DevPos(Arg3 + 7 + Local1, 12)
   vldevout(Replicate("Ã", 56), "N+/W")
*/
   DESKBOX(Arg3 + 2, 11, Arg3 + 7 + Local1, 68, , "W+/W", "N+/W")
   
   if (ISARRAY(Arg1))
      for i:= 1 to Local1
         DevPos(Arg3 + 2 + i, 13)
         vldevout(padc(Arg1[i], 54), Arg7)
      next
   else
      DevPos(Arg3 + 3, 13)
      vldevout(padc(Arg1, 54), Arg7)
   endif
   setcursor(0)
   procbutton(obut, 1, 1)
   rstenv(Local2)
   return Nil

********************************
function DESKBOX(Arg1, Arg2, Arg3, Arg4, Arg5, COR1, COR2)

   local Local1:= "N+/W", Local2:= "W+/W"
   
   Arg5:= iif(ISNIL(Arg5), 1, Arg5)
   if (Arg5 == 2)
      Local1:= "W+/W"
      Local2:= "N+/W"
   endif
   
   if cor1 <> nil;Local1 := cor1; end
   if cor2 <> nil;Local2 := cor2; end
   
   if sbGuiSupport
      if sbGuiSupportEx
         dispbox(Arg1, Arg2, Arg3, Arg4, "           ", Local1)
      /*
         vldispbox(Arg1, Arg2, Arg3, Arg4, "⁄ƒø≥Ÿƒ¿≥ ", Local1)
         vldispbox(Arg1, Arg2, Arg3, Arg4, "⁄ƒø≥Ÿƒ¿≥ ", Local2)

         DevPos(Arg1, Arg2)
         vldevout(Replicate("ƒ", Arg4 - Arg2 + 1), Local1)
         DevPos(Arg3, Arg2)
         vldevout(Replicate("ƒ", Arg4 - Arg2 + 1), Local2)

         DevPos(Arg1, Arg2)
         vldevout("⁄", Local1)
         DevPos(Arg1, Arg4)
         vldevout("ø", Local2)

         DevPos(Arg3, Arg4)
         vldevout("Ÿ", Local2)
         DevPos(Arg3, Arg2)
         vldevout("¿", Local1)
         
         @ arg1, arg2 say ''
         ?? Arg1, Arg2, Arg3, Arg4
         /**/
      else
         vldispbox(Arg1, Arg2, Arg3, Arg2, "⁄ƒø≥Ÿƒ¿≥ ", Local1)
         vldispbox(Arg1, Arg4, Arg3, Arg4, "⁄ƒø≥Ÿƒ¿≥ ", Local2)
         DevPos(Arg1, Arg2)
         vldevout(Replicate("ƒ", Arg4 - Arg2 + 1), Local1)
         DevPos(Arg3, Arg2)
         vldevout(Replicate("ƒ", Arg4 - Arg2 + 1), Local2)

         DevPos(Arg1, Arg2)
         vldevout("⁄", Local1)
         DevPos(Arg1, Arg4)
         vldevout("ø", Local2)

         DevPos(Arg3, Arg4)
         vldevout("Ÿ", Local2)
         DevPos(Arg3, Arg2)
         vldevout("¿", Local1)
      end
   else
      vldispbox(Arg1, Arg2, Arg3, Arg2, "∫∫∫∫∫∫∫∫∫", Local1)
      vldispbox(Arg1, Arg4, Arg3, Arg4, "‹‹‹‹‹‹‹‹‹", Local2)
      DevPos(Arg1, Arg2)
      vldevout(Replicate("Ã", Arg4 - Arg2 + 1), Local1)
      DevPos(Arg3, Arg2)
      vldevout(Replicate("–", Arg4 - Arg2 + 1), Local2)
   end
   return Nil

********************************
function MSGBOX3D2(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, ;
   Arg9, Arg10)

   local Local1:= i:= 0, Local2:= obut:= {}
   Arg4:= iif(ISNIL(Arg4), "&Sim", Arg4)
   Arg5:= iif(ISNIL(Arg5), "&N∆o", Arg5)
   Arg6:= iif(ISNIL(Arg6), 1, Arg6)
   Arg7:= iif(ISNIL(Arg7), 2, Arg7)
   Arg1:= iif(ISNIL(Arg1), "", Arg1)
   Arg2:= iif(ISNIL(Arg2), "Atená∆o!", Arg2)
   Local1:= iif(ISARRAY(Arg1), Len(Arg1), 1)
   Arg3:= iif(ISNIL(Arg3), Int(12 - (Local1 + 8) / 2), Arg3)
   Arg8:= iif(ISNIL(Arg8), "W+/N", Arg8)
   Arg9:= iif(ISNIL(Arg9), "N/W", Arg9)
   Arg10:= iif(ISNIL(Arg10), "N/W", Arg10)
   obut:= newbutton()
   addbutton(obut, Arg3 + 5 + Local1, 21, 18, Arg4, Nil, iif(Arg7 == ;
      1, .T., .F.))
   addbutton(obut, Arg3 + 5 + Local1, 41, 18, Arg5, Nil, iif(Arg7 == ;
      2, .T., .F.))
   Local2:= win(Arg3, 10, Arg3 + 8 + Local1, 69, Arg2, Arg8, Arg9)
/*
   vldispbox(Arg3 + 2, 11, Arg3 + 7 + Local1, 11, "‹‹‹‹‹‹‹‹‹", "W+/W")
   vldispbox(Arg3 + 2, 68, Arg3 + 7 + Local1, 68, "∫∫∫∫∫∫∫∫∫", "N+/W")
   DevPos(Arg3 + 2, 12)
   vldevout(Replicate("–", 56), "W+/W")
   DevPos(Arg3 + 7 + Local1, 12)
   vldevout(Replicate("Ã", 56), "N+/W")
*/
   DESKBOX(Arg3 + 2, 11, Arg3 + 7 + Local1, 68, , "W+/W", "N+/W")

   if (ISARRAY(Arg1))
      for i:= 1 to Local1
         DevPos(Arg3 + 2 + i, 13)
         vldevout(padc(Arg1[i], 54), Arg10)
      next
   else
      DevPos(Arg3 + 3, 13)
      vldevout(padc(Arg1, 54), Arg10)
   endif
   setcursor(0)
   i:= procbutton(obut, 1, iif(Arg6 < 3, Arg6, 2))
   rstenv(Local2)
   return i

********************************
static function CLEARGETSYS
   RETURN CLEARGETSYS()
   
static function CLEARGETSY

   local Local1[9]
   Local1[1]:= Static3
   Local1[2]:= Static4
   Local1[3]:= Static5
   Local1[4]:= Static6
   Local1[5]:= Static7
   Local1[6]:= getactive(Nil)
   Local1[7]:= readvar("")
   Local1[8]:= Static9
   Local1[9]:= Static10
   Static3:= .F.
   Static4:= .F.
   Static5:= .F.
   Static6:= 0
   Static7:= 0
   Static9:= ""
   Static10:= 0
   Static2:= .F.
   return Local1

********************************
function MSGBOX3D3(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, ;
   Arg9, Arg10, Arg11)

   local Local1, Local2, Local3, Local4
   Arg4:= iif(ISNIL(Arg4), "&Sim", Arg4)
   Arg5:= iif(ISNIL(Arg5), "&N∆o", Arg5)
   Arg6:= iif(ISNIL(Arg6), "&Cancelar", Arg6)
   Arg7:= iif(ISNIL(Arg7), 1, Arg7)
   Arg8:= iif(ISNIL(Arg8), 3, Arg8)
   Arg1:= iif(ISNIL(Arg1), "", Arg1)
   Arg2:= iif(ISNIL(Arg2), "Atená∆o!", Arg2)
   Local1:= iif(ISARRAY(Arg1), Len(Arg1), 1)
   Arg3:= iif(ISNIL(Arg3), Int(12 - (Local1 + 8) / 2), Arg3)
   Arg9:= iif(ISNIL(Arg9), "W+/N", Arg9)
   Arg10:= iif(ISNIL(Arg10), "N/W", Arg10)
   Arg11:= iif(ISNIL(Arg11), "N/W", Arg11)
   Local3:= newbutton()
   addbutton(Local3, Arg3 + 5 + Local1, 13, 18, Arg4, Nil, iif(Arg8 ;
      == 1, .T., .F.))
   addbutton(Local3, Arg3 + 5 + Local1, 31, 18, Arg5, Nil, iif(Arg8 ;
      == 2, .T., .F.))
   addbutton(Local3, Arg3 + 5 + Local1, 49, 18, Arg6, Nil, iif(Arg8 ;
      == 3, .T., .F.))
   Local2:= win(Arg3, 10, Arg3 + 8 + Local1, 69, Arg2, Arg9, Arg10)
/*
   vldispbox(Arg3 + 2, 11, Arg3 + 7 + Local1, 11, "‹‹‹‹‹‹‹‹‹", "W+/W")
   vldispbox(Arg3 + 2, 68, Arg3 + 7 + Local1, 68, "∫∫∫∫∫∫∫∫∫", "N+/W")
   DevPos(Arg3 + 2, 12)
   vldevout(Replicate("–", 56), "W+/W")
   DevPos(Arg3 + 7 + Local1, 12)
   vldevout(Replicate("Ã", 56), "N+/W")
*/
   DESKBOX(Arg3 + 2, 11, Arg3 + 7 + Local1, 68, , "W+/W", "N+/W")
   if (ISARRAY(Arg1))
      for Local4:= 1 to Local1
         DevPos(Arg3 + 2 + Local4, 13)
         vldevout(padc(Arg1[Local4], 54), Arg11)
      next
   else
      DevPos(Arg3 + 3, 13)
      vldevout(padc(Arg1, 54), Arg11)
   endif
   setcursor(0)
   Local4:= procbutton(Local3, 1, iif(Arg7 < 4, Arg7, 3))
   rstenv(Local2)
   return Local4

********************************
function CLRTED(Arg1, Arg2)

   local Local1
   local r22 := maxrow()-2
   local c79 := maxcol()//-1
   
   Local1:= SetColor("N/W")
   Arg1:= iif(ISNIL(Arg1), 2, Arg1)
   Arg2:= iif(ISNIL(Arg2), r22, Arg2)
   vlscroll(Arg1, 0, Arg2, c79)
   set color to (Local1)
   return Nil

********************************
function MSGBOX1(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7)

   local Local1, Local2, Local3, Local4
   Arg4:= iif(ISNIL(Arg4), "&OK", Arg4)
   Arg1:= iif(ISNIL(Arg1), "", Arg1)
   Arg2:= iif(ISNIL(Arg2), "Atená∆o!", Arg2)
   Local1:= iif(ISARRAY(Arg1), Len(Arg1), 1)
   Arg3:= iif(ISNIL(Arg3), Int(12 - (Local1 + 5) / 2), Arg3)
   Arg5:= iif(ISNIL(Arg5), "W+*/R", Arg5)
   Arg6:= iif(ISNIL(Arg6), "R+*/W", Arg6)
   Arg7:= iif(ISNIL(Arg7), "N*/W", Arg7)
   Local3:= newbutton()
   addbutton(Local3, Arg3 + 3 + Local1, 31, 18, Arg4, Nil, .T.)
   Local2:= win(Arg3, 10, Arg3 + 5 + Local1, 69, Arg2, Arg5, Arg6)
   if (ISARRAY(Arg1))
      for Local4:= 1 to Local1
         DevPos(Arg3 + 1 + Local4, 12)
         vldevout(padc(Arg1[Local4], 56), Arg7)
      next
   else
      DevPos(Arg3 + 2, 12)
      vldevout(padc(Arg1, 56), Arg7)
   endif
   setcursor(0)
   procbutton(Local3, 2, 1)
   rstenv(Local2)
   return Nil

********************************
function LINBUTTON3(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, ;
   Arg9, Arg10, Arg11, Arg12)

   local Local1
   Local1:= newbutton()
   Arg1:= iif(ISNIL(Arg1), .T., Arg1)
   Arg2:= iif(ISNIL(Arg2), 1, Arg2)
   Arg3:= iif(ISNIL(Arg3), 21, Arg3)
   Arg4:= iif(ISNIL(Arg4), 1, Arg4)
   Arg5:= iif(ISNIL(Arg5), 3, Arg5)
   Arg6:= iif(ISNIL(Arg6), "&OK", Arg6)
   Arg8:= iif(ISNIL(Arg8), "&Alterar", Arg8)
   Arg10:= iif(ISNIL(Arg10), "&Cancelar", Arg10)
   addbutton(Local1, Arg3, 11, 18, Arg6, Arg7, iif(Arg5 == 1, .T., ;
      .F.))
   addbutton(Local1, Arg3, 31, 18, Arg8, Arg9, iif(Arg5 == 2, .T., ;
      .F.))
   addbutton(Local1, Arg3, 51, 18, Arg10, Arg11, iif(Arg5 == 3, .T., ;
      .F.))
   if (Arg1)
      Arg3:= procbutton(Local1, Arg2, iif(Arg4 < 4, Arg4, 3), Arg12)
   else
      showbutton(Local1, Arg2, Arg12)
   endif
   return Arg3

********************************
function MSGBOX2(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, ;
   Arg9, Arg10)

   local Local1, Local2, Local3, Local4
   Arg4:= iif(ISNIL(Arg4), "&Sim", Arg4)
   Arg5:= iif(ISNIL(Arg5), "&N∆o", Arg5)
   Arg6:= iif(ISNIL(Arg6), 1, Arg6)
   Arg7:= iif(ISNIL(Arg7), 2, Arg7)
   Arg1:= iif(ISNIL(Arg1), "", Arg1)
   Arg2:= iif(ISNIL(Arg2), "Atená∆o!", Arg2)
   Local1:= iif(ISARRAY(Arg1), Len(Arg1), 1)
   Arg3:= iif(ISNIL(Arg3), Int(12 - (Local1 + 7) / 2), Arg3)
   Arg8:= iif(ISNIL(Arg8), "W+*/R", Arg8)
   Arg9:= iif(ISNIL(Arg9), "R+*/W", Arg9)
   Arg10:= iif(ISNIL(Arg10), "N*/W", Arg10)

   Local3:= newbutton()
   addbutton(Local3, Arg3 + 3 + Local1, 21, 18, Arg4, Nil, iif(Arg7 ;
      == 1, .T., .F.))
   addbutton(Local3, Arg3 + 3 + Local1, 41, 18, Arg5, Nil, iif(Arg7 ;
      == 2, .T., .F.))
   Local2:= win(Arg3, 10, Arg3 + 5 + Local1, 69, Arg2, Arg8, Arg9)
   if (ISARRAY(Arg1))
      for Local4:= 1 to Local1
         DevPos(Arg3 + 1 + Local4, 13)
         vldevout(padc(Arg1[Local4], 54), Arg10)
      next
   else
      DevPos(Arg3 + 2, 13)
      vldevout(padc(Arg1, 54), Arg10)
   endif
   setcursor(0)
   Local4:= procbutton(Local3, 2, iif(Arg6 < 3, Arg6, 2))
   rstenv(Local2)
   return Local4

********************************
function LINBUTTON2(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, ;
   Arg9, Arg10)

   local Local1
   Local1:= newbutton()
   Arg1:= iif(ISNIL(Arg1), .T., Arg1)
   Arg2:= iif(ISNIL(Arg2), 1, Arg2)
   Arg3:= iif(ISNIL(Arg3), 21, Arg3)
   Arg4:= iif(ISNIL(Arg4), 1, Arg4)
   Arg5:= iif(ISNIL(Arg5), 2, Arg5)
   Arg6:= iif(ISNIL(Arg6), "&OK", Arg6)
   Arg8:= iif(ISNIL(Arg8), "&Cancelar", Arg8)
   addbutton(Local1, Arg3, 21, 18, Arg6, Arg7, iif(Arg5 == 1, .T., ;
      .F.))
   addbutton(Local1, Arg3, 41, 18, Arg8, Arg9, iif(Arg5 == 2, .T., ;
      .F.))
   if (Arg1)
      Arg3:= procbutton(Local1, Arg2, iif(Arg4 < 3, Arg4, 2), Arg10)
   else
      showbutton(Local1, Arg2, Arg10)
   endif
   return Arg3

********************************
function MSGBOX3(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, ;
   Arg9, Arg10, Arg11)

   local Local1, Local2, Local3, Local4
   Arg4:= iif(ISNIL(Arg4), "&Sim", Arg4)
   Arg5:= iif(ISNIL(Arg5), "&N∆o", Arg5)
   Arg6:= iif(ISNIL(Arg6), "&Cancelar", Arg6)
   Arg7:= iif(ISNIL(Arg7), 1, Arg7)
   Arg8:= iif(ISNIL(Arg8), 3, Arg8)
   Arg1:= iif(ISNIL(Arg1), "", Arg1)
   Arg2:= iif(ISNIL(Arg2), "Atená∆o!", Arg2)
   Local1:= iif(ISARRAY(Arg1), Len(Arg1), 1)
   Arg3:= iif(ISNIL(Arg3), Int(12 - (Local1 + 7) / 2), Arg3)
   Arg9:= iif(ISNIL(Arg9), "W+*/R", Arg9)
   Arg10:= iif(ISNIL(Arg10), "R+*/W", Arg10)
   Arg11:= iif(ISNIL(Arg11), "N*/W", Arg11)
   Local3:= newbutton()
   addbutton(Local3, Arg3 + 3 + Local1, 13, 18, Arg4, Nil, iif(Arg8 ;
      == 1, .T., .F.))
   addbutton(Local3, Arg3 + 3 + Local1, 31, 18, Arg5, Nil, iif(Arg8 ;
      == 2, .T., .F.))
   addbutton(Local3, Arg3 + 3 + Local1, 49, 18, Arg6, Nil, iif(Arg8 ;
      == 3, .T., .F.))
   Local2:= win(Arg3, 10, Arg3 + 5 + Local1, 69, Arg2, Arg9, Arg10)
   if (ISARRAY(Arg1))
      for Local4:= 1 to Local1
         DevPos(Arg3 + 1 + Local4, 13)
         vldevout(padc(Arg1[Local4], 54), Arg11)
      next
   else
      DevPos(Arg3 + 2, 13)
      vldevout(padc(Arg1, 54), Arg11)
   endif
   setcursor(0)
   Local4:= procbutton(Local3, 2, iif(Arg7 < 3, Arg7, 2))
   rstenv(Local2)
   return Local4

********************************
function LINBUTTON1(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6)

   local Local1
   Local1:= newbutton()
   Arg1:= iif(ISNIL(Arg1), .T., Arg1)
   Arg2:= iif(ISNIL(Arg2), 1, Arg2)
   Arg3:= iif(ISNIL(Arg3), 21, Arg3)
   Arg4:= iif(ISNIL(Arg4), "&OK", Arg4)
   addbutton(Local1, Arg3, 31, 18, Arg4, Arg5, .T.)
   if (Arg1)
      Arg3:= procbutton(Local1, Arg2, 1, Arg6)
   else
      showbutton(Local1, Arg2, Arg6)
   endif
   return Arg3

********************************
function VLSCRSAVER(Arg1, Arg2)

   local Local1
   Local1:= aclone(Static22)
   Static22[1]:= iif(Arg1 != Nil, Arg1, Static22[1])
   Static22[2]:= iif(Arg2 != Nil, Arg2, Static22[2])
   return Local1

********************************
function MSGBOX3D(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6)

   local Local1, Local2, Local3
   Arg1:= iif(ISNIL(Arg1), "", Arg1)
   Arg2:= iif(ISNIL(Arg2), "Aguarde", Arg2)
   Local1:= iif(ISARRAY(Arg1), Len(Arg1), 1)
   Arg3:= iif(ISNIL(Arg3), 12 - (Local1 + 6) / 2, Arg3)
   Arg4:= iif(ISNIL(Arg4), "W+/N", Arg4)
   Arg5:= iif(ISNIL(Arg5), "N/W", Arg5)
   Arg6:= iif(ISNIL(Arg6), "N/W", Arg6)
   Local2:= win(Arg3, 16, Arg3 + 6 + Local1, 63, Arg2, Arg4, Arg5)
/*
   vldispbox(Arg3 + 2, 17, Arg3 + 5 + Local1, 17, "‹‹‹‹‹‹‹‹‹", "W+/W")
   vldispbox(Arg3 + 2, 62, Arg3 + 5 + Local1, 62, "∫∫∫∫∫∫∫∫∫", "N+/W")
   DevPos(Arg3 + 2, 18)
   vldevout(Replicate("–", 44), "W+/W")
   DevPos(Arg3 + 5 + Local1, 18)
   vldevout(Replicate("Ã", 44), "N+/W")
/**/
   DESKBOX(Arg3 + 2, 17, Arg3 + 5 + Local1, 62, , "W+/W", "N+/W")

   if (ISARRAY(Arg1))
      for Local3:= 1 to Local1
         DevPos(Arg3 + 3 + Local3, 19)
         vldevout(padc(Arg1[Local3], 42), Arg6)
      next
   else
      DevPos(Arg3 + 4, 19)
      vldevout(padc(Arg1, 42), Arg6)
   endif
   setcursor(0)
   return Local2

********************************
function MSGBOX(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6)

   local Local1, Local2, Local3
   Arg1:= iif(ISNIL(Arg1), "", Arg1)
   Arg2:= iif(ISNIL(Arg2), "Aguarde", Arg2)
   Local1:= iif(ISARRAY(Arg1), Len(Arg1), 1)
   Arg3:= iif(ISNIL(Arg3), 12 - (Local1 + 5) / 2, Arg3)
   Arg4:= iif(ISNIL(Arg4), "W+*/B", Arg4)
   Arg5:= iif(ISNIL(Arg5), "B+*/W", Arg5)
   Arg6:= iif(ISNIL(Arg6), "N*/W", Arg6)
   Local2:= win(Arg3, 18, Arg3 + 5 + Local1, 61, Arg2, Arg4, Arg5)
   if (ISARRAY(Arg1))
      for Local3:= 1 to Local1
         DevPos(Arg3 + 2 + Local3, 20)
         vldevout(padc(Arg1[Local3], 40), Arg6)
      next
   else
      DevPos(Arg3 + 3, 20)
      vldevout(padc(Arg1, 40), Arg6)
   endif
   setcursor(0)
   return Local2

********************************
function FRAME(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9)

   local Local1:= SetColor(), Local2:= dn:= "", Local3:= Arg4 - Arg2 ;
      - 1, Local4:= y:= z:= 0
   Arg6:= iif(ISNIL(Arg6), 1, Arg6)
   Arg7:= iif(ISNIL(Arg7), 1, Arg7)
   Arg8:= iif(ISNIL(Arg8), "N/W", Arg8)
   Arg9:= iif(ISNIL(Arg9), "N/W", Arg9)
   if (Arg7 == 1)
      Local2:= "N+/W"
      dn:= "W+/W"
   elseif (Arg7 == 2)
      Local2:= "W+/W"
      dn:= "N+/W"
   elseif (Arg7 == 3)
      Local2:= dn:= Arg8
   endif
   vldispbox(Arg1 + 1, Arg2, Arg3 - 1, Arg2, Replicate(iif(sbGuiSupport,'≥',"‹"), 9), ;
      Local2)
   DevPos(Arg1, Arg2)
   vldevout(iif(sbGuiSupport,'⁄',"Õ") + Replicate("ƒ", Local3), Local2)
   DevPos(Arg3, Arg2)
   vldevout(iif(sbGuiSupport,'¿',"Œ"), Local2)
   vldispbox(Arg1 + 1, Arg4, Arg3 - 1, Arg4, Replicate(iif(sbGuiSupport,'≥',"∫"), 9), dn)
   DevPos(Arg3, Arg2 + 1)
   vldevout(Replicate("ƒ", Local3) + iif(sbGuiSupport,'Ÿ',"º"), dn)
   DevPos(Arg1, Arg4)
   vldevout(iif(sbGuiSupport,'ø',"ª"), dn)
   if (Arg5 != Nil)
      z:= Len(Arg5)
      if (Arg6 == 1)
         DevPos(Arg1, Arg2 + 2)
         vldevout(" " + Arg5 + " ", Arg9)
      elseif (Arg6 == 2)
         DevPos(Arg1, Arg4 - Local3 / 2 - z / 2 - 1)
         vldevout(" " + Arg5 + " ", Arg9)
      elseif (Arg6 == 3)
         DevPos(Arg1, Arg4 - z - 3)
         vldevout(" " + Arg5 + " ", Arg9)
      endif
   endif
   set color to (Local1)
   return Nil

********************************
function SETKEYMOUSE(Arg1, Arg2)
   RETURN SETKEYMOUS(Arg1, Arg2)

function SETKEYMOUS(Arg1, Arg2)

   local Local1, Local2, Local3
   Local3:= {}
   if (PCount() == 1)
      Local1:= ascan(Static18, {|_1| _1[1] == Arg1})
      if (Local1 > 0)
         Local3:= Static18[Local1][2]
      endif
   elseif (Len(Arg2) == 4)
      Local1:= ascan(Static18, {|_1| _1[1] == Arg1})
      if (Local1 > 0)
         Local3:= Static18[Local1][2]
         Static18[Local1][1]:= Arg1
         Static18[Local1][2]:= Arg2
      else
         AAdd(Static18, {Arg1, Arg2})
      endif
   elseif (Len(Arg2) == 0)
      Local1:= ascan(Static18, {|_1| _1[1] == Arg1})
      if (Local1 > 0)
         Local3:= Static18[Local1][2]
         adel(Static18, Local1)
         asize(Static18, Len(Static18) - 1)
      else
      endif
   endif
   return Local3

********************************
function VLKEYBOARD(Arg1)
   keyboard Arg1
   return Nil

********************************
function LINBUTTON4(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, ;
   Arg9, Arg10, Arg11, Arg12, Arg13, Arg14)

   local Local1
   Local1:= newbutton()
   Arg1:= iif(ISNIL(Arg1), .T., Arg1)
   Arg2:= iif(ISNIL(Arg2), 1, Arg2)
   Arg3:= iif(ISNIL(Arg3), 21, Arg3)
   Arg4:= iif(ISNIL(Arg4), 1, Arg4)
   Arg5:= iif(ISNIL(Arg5), 4, Arg5)
   Arg6:= iif(ISNIL(Arg6), "&OK", Arg6)
   Arg8:= iif(ISNIL(Arg8), "&Alterar", Arg8)
   Arg10:= iif(ISNIL(Arg10), "&Excluir", Arg10)
   Arg12:= iif(ISNIL(Arg12), "&Cancelar", Arg12)
   addbutton(Local1, Arg3, 1, 18, Arg6, Arg7, iif(Arg5 == 1, .T., ;
      .F.))
   addbutton(Local1, Arg3, 21, 18, Arg8, Arg9, iif(Arg5 == 2, .T., ;
      .F.))
   addbutton(Local1, Arg3, 41, 18, Arg10, Arg11, iif(Arg5 == 3, .T., ;
      .F.))
   addbutton(Local1, Arg3, 61, 18, Arg12, Arg13, iif(Arg5 == 4, .T., ;
      .F.))
   if (Arg1)
      Arg3:= procbutton(Local1, Arg2, iif(Arg4 < 5, Arg4, 4), Arg14)
   else
      showbutton(Local1, Arg2, Arg14)
   endif
   return Arg3

********************************
function VLMARQUEE(Arg1, Arg2, Arg3)

   local Local1, Local2, Local3, Local4
   local r24 := MaxRow()
   local c79 := MaxCol()-1
   
   Local1:= savenv(0, 0, r24, c79)
   setcursor(0)
   Arg1:= iif(ISNIL(Arg1), "Pressione algo para continuar...", Arg1)
   Arg2:= iif(ISNIL(Arg2), "W/N", Arg2)
   Arg3:= iif(ISNIL(Arg3), 0.1, Arg3)
   set color to
   vlscroll()
   SetPos(0, 0)
   do while (.T.)
      for Local3:= 0 to r24
         for Local4:= 0 to c79
            DevPos(Local3, Local4)
            vldevout(Arg1, Arg2)
            Local2:= waitsaver(Arg3)
            if (Local2)
               exit
            endif
            DevPos(Local3, Local4)
            vldevout("  ")
         next
         if (Local2)
            exit
         endif
      next
      if (Local2)
         exit
      endif
   enddo
   rstenv(Local1)
   return Nil

********************************
function WAITSTATE

   local Local1, Local2, Local3, Local4, Local5, Local6, Local7
   Local1:= {0, Nil, Nil}
   Local3:= array(4)
   Local4:= vlscrsaver()
   resettimer()
   do while (Local1[1] == 0)
/***
      rrr := row()
      ccc := col()
      
      @ 0,0 say rrr
      ?? ' ', ccc, ' cursor: ', setcursor(0)
      setpos(rrr,ccc)
      /***/
      if (Seconds() - gettimer() > Local4[1])
         eval(Local4[2])
         resettimer()
      endif
      if ((Local2:= ninkey(0.5)) != 0)//.1
         Local1[2]:= Local2
         Local1[1]:= 1
      else
         vlmouseinf(Local3)
         if (Local3[1] .OR. Local3[2])
            if (Static19 == 0 .OR. Static19 == 3)
               Local1[1]:= Static19:= 2
               Local1[2]:= Local3[3]
               Local1[3]:= Local3[4]
               Static20:= Local3[3]
               Static21:= Local3[4]
            elseif ((Static19 == 2 .OR. Static19 == 4) .AND. ;
                  (Local3[3] != Static20 .OR. Local3[4] != Static21))
               Local1[1]:= Static19:= 4
               Local1[2]:= Local3[3]
               Local1[3]:= Local3[4]
               Static20:= Local3[3]
               Static21:= Local3[4]
            endif
         elseif (Static19 == 2 .OR. Static19 == 4)
            Local1[1]:= Static19:= 3
            Local1[2]:= Local3[3]
            Local1[3]:= Local3[4]
         else
            Local1[1]:= Static19:= 0
         endif
      endif
      if (Local1[1] == 3)
         Local7:= aclone(getkeymouse())
         for Local6:= 1 to Len(Local7)
            if (Local1[2] >= Local7[Local6][2][1] .AND. Local1[2] <= ;
                  Local7[Local6][2][2] .AND. Local1[3] >= ;
                  Local7[Local6][2][3] .AND. Local1[3] <= ;
                  Local7[Local6][2][4])
               Local1[1]:= Static19:= 0
               if ((Local5:= SetKey(Local7[Local6][1])) != Nil)
                  eval(Local5, procname(1), procline(1), "")
               endif
            endif
         next
      endif
   enddo
   return Local1

********************************
function WAITSAVER(Arg1)

   local Local1, Local2, Local3, Local4
   Local1:= array(4)
   Local2:= array(4)
   Local4:= .F.
   vlmouseinf(Local1)
   Local2:= aclone(Local1)
   resettimer()
   do while (.T.)
      if ((Local3:= InKey(.5)) != 0)//.1
         Local4:= .T.
         exit
      endif
      vlmouseinf(Local1)
      if (Local2[1] != Local1[1] .OR. Local2[2] != Local1[2] .OR. ;
            Local2[3] != Local1[3] .OR. Local2[4] != Local1[4])
         Local4:= .T.
         exit
      endif
      if (ISNIL(Arg1))
         exit
      elseif (Arg1 == 0)
         loop
      elseif (Seconds() - gettimer() >= Arg1)
         exit
      endif
   enddo
   return Local4

********************************
function GETKEYMOUSE
   return GETKEYMOUS()

function GETKEYMOUS
   return Static18

/* Mouse Function's */
function VLMouseDN(i,a)
   // Botao esquerdo
   if i == 00
      a[1] := arrMouseInfLeft[1]
      a[2] := arrMouseInfLeft[2]
      a[3] := arrMouseInfLeft[3]
      
      arrMouseInfLeft[1] := 00
      arrMouseInfLeft[2] := 00
      arrMouseInfLeft[3] := 00
      //return aClone( arrMouseInfLeft )
   else
      a[1] := arrMouseInfRight[1]
      a[2] := arrMouseInfRight[2]
      a[3] := arrMouseInfRight[3]
      
      arrMouseInfRight[1] := 00
      arrMouseInfRight[2] := 00
      arrMouseInfRight[3] := 00
      //return aClone( arrMouseInfRight )
   endif
   return

function VLMouseINF(a)
      a[1] = mLeftDown()   // .F.
      a[2] = mRightDown()  // .F.
      a[3] = mRow()        // 00
      a[4] = mCol()        // 00
   return

function VLMouseINI(a)
   return mPresent()

function VLMouseON()
   return mSetCursor(.T.)

function VLMouseOFF()
   return mSetCursor(.F.)

function VLMouseUP(i,a)
   if i == 00
      return aClone( arrMouseInfLeft )
   else
      return aClone( arrMouseInfRight )
   endif
   return

function VLSetMouse(l)
   //static sl := .f.
   //   if l <> nil ; sl := l ; end
   //return sl
   if pcount() == 00
      return mSetCursor()
   else
      return mSetCursor(l)
   endif

/*** API Functions ... **/
function vl850(lCallSetMode,lCallSetFont)
   local l := 'vlfont.exe on blink'
   local c := setcursor(0)
   
   if GuiSupport()
      return nil
   end
   
   if lCallSetMode == nil
      lCallSetMode := .T.
   endif
   
   if lCallSetFont == nil
      lCallSetFont := .T.
   endif
   
   if lCallSetMode
      vlsetmode(25, 80)
   end
   
   if lCallSetFont
      __run(l)
   endif
   setcursor(c)
   return

function vlSetBlink( l )
   static x := .t.
   local u  := x
   local c := setcursor(0)
   if sbGuiSupport; return u; end
   if l <> nil
      l := 'vlfont.exe ' + iif( !l, 'noblink', 'blink' )
      __Run( l )
   endif
   setcursor(c)
   return u

function Setswmouse(x)
   static swMouse := .f.
   
   if pcount()<>00
      swMouse := x
   end
   
   return swMouse

function GuiSupport(X,XX)
   LOCAL y := sbGuiSupport
   LOCAL yy:= sbGuiSupportEx

   IF PCount()>0
      sbGuiSupport := x
   End

   IF PCount()==02
      sbGuiSupportEx := xx
   End
   RETURN y

INIT PROCEDURE VLInit
   LOCAL x := NIL
   LOCAL d := ErrorBlock( {|x| Break(x) } )
   
   BEGIN SEQUENCE
      x := "{|| WVT_SETCODEPAGE(255),GUISUpport(.T.) }"
      x := &X.
      x := X:Eval()
   RECOVER USING x

   End

   BEGIN SEQUENCE
      x := "{|| WVW_SETCODEPAGE(0,255),GUISUpport(.T.,.T.) }"
      x := &X.
      x := X:Eval()
   RECOVER USING x

   End

   ErrorBlock(d)
   RETURN NIL

#pragma BEGINDUMP
#define HB_OS_WIN_32_USED
//-------------------------------0--------------------------------------------//
#include "hbgtwvt.h"
#include "hbgtwvw.h"
#include "hbapi.h"
#include "windows.h"
#include "ocidl.h"
#include "olectl.h"

HB_FUNC( KS_NOCAPTION )
{
  DWORD Style = (WS_POPUP|WS_BORDER |WS_SYSMENU |WS_CLIPCHILDREN);
  hb_retni( Style );
}
#pragma ENDDUMP