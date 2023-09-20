#define COR_DE_FUNDO      setcolor("3/9") 
#define COR_WINDOWS_XP    setcolor( 'N/W,N/GR*,,,N/W*' ) 
#define COR_NORMAL        setcolor("N/W*,GR+/B*,N/N,GR+/N*,W+/N*,R/W*,W/W*,B/W*") 
 

*************** 
FUNCTION cor()
*************** 
/*
   set confirm    on 
   set deleted    on 
   set bell       off 
   set scoreboard off 
   //set eventmask  to INKEY_ALL
   set date       british 
   set epoch      to 1950 
*/
   ConfigCores() 
/*
   //wvw_size_ready(.T.)
   wvw_SetPaintRefresh(0) 
   WVW_SetCodePage(,250) 
   wvw_SetVertCaret(.F.) 
   wvw_enableshortcuts(0,.T.) 
   wvw_maximize(0) 


   COR_WINDOWS_XP 
   scroll() 

   wvw_drawboxraised(,01,01,04,97) 
   COR_DE_FUNDO 
   @ 01, 01 clear to 04, 97 
   COR_WINDOWS_XP 

   wvw_drawboxraised(,06,01,28,47) 
   COR_NORMAL 
   @ 06, 01 clear to 28, 47 
   COR_WINDOWS_XP 

   wvw_drawboxraised(,30,01,32,97) 
   COR_NORMAL 
   @ 30, 01 clear to 32, 97 
   COR_WINDOWS_XP 

   wvw_drawboxraised(,06,49,10,97) 
   wvw_drawboxraised(,12,49,16,97) 
   wvw_drawboxraised(,18,49,28,97) 
   COR_DE_FUNDO 
   @ 06, 49 clear to 10, 97 
   @ 12, 49 clear to 16, 97 
   @ 18, 49 clear to 28, 97 

   wvw_drawlabel(, 06, 50, "Valor Unitário",,, RGB( 0, 255, 255 ), RGB( 100, 135, 220 ), "Tahoma",,, 2 ) 
   wvw_drawlabel(, 12, 50, "Subtotal"      ,,, RGB( 0, 255, 255 ), RGB( 100, 135, 220 ), "Tahoma",,, 2 ) 
   wvw_drawlabel(, 23, 65, "Seu logotipo aqui",,, RGB( 0, 255, 255 ), RGB( 100, 135, 220 ), "Tahoma",,, 2 ) 

   mcodigo := space(13) 
   mquant  := 0.0 

   COR_NORMAL 
   wvw_drawlabel(, 31, 03, "CÓDIGO :",,, aPalette[1], aPalette[16], "Tahoma",,, 2 ) 
   wvw_drawlabel(, 31, 72, "QUANTIDADE :",,, aPalette[1], aPalette[16], "Tahoma",,, 2 ) 

   @ 31, 14 get mcodigo picture "9999999999999" 
   @ 31, 88 get mquant picture "@E 9999.99" 
   read 
*/
RETURN NIL 

********************** 
FUNCTION ConfigCores() 
********************** 
PUBLIC apalette:={}
FOR i = 1 to 13
     AADD(apalette,' ')
NEXT
aPalette     := WvW_GetPalette()
aPalette[01] := GetSysColor(8)  // 8
//aPalette[01] := GetSysColor( COLOR_WINDOWTEXT )  // 8
aPalette[02] := RGB(   0,  51, 153 )
aPalette[04] := RGB(   0, 255, 255 )
aPalette[08] := GetSysColor(15)    // 15
//aPalette[08] := GetSysColor( COLOR_BTNFACE )    // 15
aPalette[10] := RGB( 100, 135, 220 )
aPalette[13] := RGB( 227,  92,  47 )
WvW_SetPalette( aPalette )
RETURN NIL 
 


