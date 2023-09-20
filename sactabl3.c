/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <sactabl3.prg>
 * Command: C:\xharbour997\bin\harbour.exe C:\helio\siachb\sactabl3.prg /q /oC:\helio\siachb\sactabl3.c /M /N /B 
 * Created: 2018.04.09 19:29:11 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "sactabl3.prg"

HB_FUNC( SACTABL3 );
HB_FUNC_INITLINES();
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( IAT );
HB_FUNC_EXTERN( CRIPTO );
HB_FUNC_EXTERN( __DBGENTRY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACTABL3 )
{ "SACTABL3", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACTABL3 )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "IAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IAT )}, NULL },
{ "MLINHA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CRIPTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CRIPTO )}, NULL },
{ "__DBGENTRY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGENTRY )}, NULL },
{ "(_INITLINES)", {HB_FS_INITEXIT}, {hb_INITLINES}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACTABL3 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACTABL3
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACTABL3 = hb_vm_SymbolInit_SACTABL3;
   #pragma data_seg()
#endif

HB_FUNC( SACTABL3 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 0,	/* locals, params */
	HB_P_MODULENAME,	/* sactabl3.prg:SACTABL3 */
 's', 'a', 'c', 't', 'a', 'b', 'l', '3', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'T', 'A', 'B', 'L', '3', 0,
	HB_P_MODULENAME,	/* C:\helio\siachb\sactabl3.prg: */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 't', 'a', 'b', 'l', '3', '.', 'p', 'r', 'g', ':', 0,
/* 00057 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_LOCALNAME, 1, 0,	/* MPRG */
 'M', 'P', 'R', 'G', 0,
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', 'T', 'A', 'B', 'L', '3', 0, 
	HB_P_LOCALNAME, 2, 0,	/* MTITULO */
 'M', 'T', 'I', 'T', 'U', 'L', 'O', 0,
	HB_P_LOCALNEARSETSTR, 2, 31, 0,	/* MTITULO 31*/
	'I', 'N', 'I', 'C', 'I', 'A', 'R', '/', 'F', 'I', 'N', 'A', 'L', 'I', 'Z', 'A', 'R', ' ', 'O', 'S', ' ', 'T', 'A', 'B', 'L', 'O', 'I', 'D', 'E', 'S', 0, 
	HB_P_LOCALNAME, 3, 0,	/* MCONS_TABL */
 'M', 'C', 'O', 'N', 'S', '_', 'T', 'A', 'B', 'L', 0,
	HB_P_LOCALNAME, 4, 0,	/* MDATA */
 'M', 'D', 'A', 'T', 'A', 0,
	HB_P_LOCALNAME, 5, 0,	/* MCONS_MERC */
 'M', 'C', 'O', 'N', 'S', '_', 'M', 'E', 'R', 'C', 0,
	HB_P_LOCALNAME, 6, 0,	/* I */
 'I', 0,
	HB_P_LOCALNAME, 7, 0,	/* Y */
 'Y', 0,
/* 00174 */ HB_P_LINEOFFSET, 2,	/* 10 */
	HB_P_PUSHSYMNEAR, 1,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 2, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00209) */
/* 00204 */ HB_P_LINEOFFSET, 3,	/* 11 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00209 */ HB_P_LINEOFFSET, 6,	/* 14 */
	HB_P_PUSHSYMNEAR, 3,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 98,	/* 98 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_DOSHORT, 5,
/* 00225 */ HB_P_LINEOFFSET, 7,	/* 15 */
/* 00227 */ HB_P_LINEOFFSET, 8,	/* 16 */
	HB_P_PUSHSYMNEAR, 4,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00235 */ HB_P_LINEOFFSET, 9,	/* 17 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* Y 0*/
	HB_P_PUSHLOCALNEAR, 7,	/* Y */
	HB_P_POPLOCALNEAR, 6,	/* I */
/* 00245 */ HB_P_LINEOFFSET, 10,	/* 18 */
	HB_P_PUSHSYMNEAR, 5,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 4,	/* MDATA */
/* 00254 */ HB_P_LINEOFFSET, 11,	/* 19 */
	HB_P_PUSHSYMNEAR, 6,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00302 */ HB_P_LINEOFFSET, 12,	/* 20 */
	HB_P_PUSHSYMNEAR, 7,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DOSHORT, 4,
/* 00315 */ HB_P_LINEOFFSET, 13,	/* 21 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'D', 'a', 't', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00337 */ HB_P_LINEOFFSET, 14,	/* 22 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'T', 'a', 'b', 'l', 'o', 'i', 'd', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 00363 */ HB_P_LINEOFFSET, 15,	/* 23 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'I', 'n', 'i', 'c', 'i', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00388 */ HB_P_LINEOFFSET, 16,	/* 24 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'i', 'n', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 00412 */ HB_P_LINEOFFSET, 17,	/* 25 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'i', 't', 'u', 'a', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00439 */ HB_P_LINEOFFSET, 18,	/* 26 */
	HB_P_PUSHSYMNEAR, 10,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00452 */ HB_P_LINEOFFSET, 19,	/* 27 */
	HB_P_PUSHSYMNEAR, 10,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00467 */ HB_P_LINEOFFSET, 20,	/* 28 */
	HB_P_PUSHSYMNEAR, 11,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 13, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 14,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 79, 0,	/* 79 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MDATA */
	HB_P_MODULENAME,	/* C:\helio\siachb\sactabl3.prg:SACTABL3 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 't', 'a', 'b', 'l', '3', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'T', 'A', 'B', 'L', '3', 0,
	HB_P_LOCALNAME, 255, 255,	/* MDATA */
 'M', 'D', 'A', 'T', 'A', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00559) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00564) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'd', 'a', 't', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
/* 00580 */ HB_P_LINEOFFSET, 20,	/* 28 */
	HB_P_MESSAGE, 15, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 13, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00594 */ HB_P_LINEOFFSET, 21,	/* 29 */
	HB_P_PUSHSYMNEAR, 16,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 13, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 13, 0,	/* GETLIST */
/* 00616 */ HB_P_LINEOFFSET, 22,	/* 30 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00640) */
/* 00628 */ HB_P_LINEOFFSET, 23,	/* 31 */
	HB_P_PUSHSYMNEAR, 18,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00635 */ HB_P_LINEOFFSET, 24,	/* 32 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00640 */ HB_P_LINEOFFSET, 26,	/* 34 */
	HB_P_PUSHSYMNEAR, 6,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 's', 'e', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'T', 'A', 'B', 'L', 'O', 'I', 'D', 'E', 'S', ' ', 'p', 'a', 'r', 'a', ' ', 's', 'e', 'r', ' ', 'i', 'n', 'i', 'c', 'i', 'a', 'd', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00702 */ HB_P_LINEOFFSET, 27,	/* 35 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* MCONS_TABL */
/* 00709 */ HB_P_LINEOFFSET, 28,	/* 36 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 88,	/* 88 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ',', 'n', 'o', 'm', 'e', ',', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', ',', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', ',', 'c', 'o', 'u', 'n', 't', '(', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ')', ' ', 'F', 'R', 'O', 'M', ' ', 't', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', ' ', '<', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 111,	/* 111 */
	' ', 'A', 'N', 'D', ' ', 'i', 'n', 'i', 'c', 'i', 'o', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ',', 'c', 'o', 'd', 'i', 'g', 'o', ',', 'n', 'o', 'm', 'e', ',', 'n', 'o', 'm', 'e', ',', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', ',', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', ',', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', ',', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* MCONS_TABL */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00939 */ HB_P_LINEOFFSET, 29,	/* 37 */
	HB_P_PUSHSYMNEAR, 4,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00948 */ HB_P_LINEOFFSET, 30,	/* 38 */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 132, 0,	/* 132 (abs: 01091) */
/* 00962 */ HB_P_LINEOFFSET, 31,	/* 39 */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* I 0*/
/* 00968 */ HB_P_LINEOFFSET, 32,	/* 40 */
	HB_P_LOCALNEARSETINT, 6, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 162, 0,	/* 162 (abs: 01146) */
/* 00987 */ HB_P_LINEOFFSET, 33,	/* 41 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_PLUS,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 23,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 23,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', ' ', 'I', 'N', 'I', 'C', 'I', 'A', 'L', 'I', 'Z', 'A', 'R', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01083 */ HB_P_LINEOFFSET, 34,	/* 42 */
	HB_P_LOCALNEARADDINT, 6, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 141,	/* -115 (abs: 00974) */
/* 01091 */ HB_P_LINEOFFSET, 36,	/* 44 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'T', 'a', 'b', 'l', 'o', 'i', 'd', 'e', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'I', 'N', 'I', 'C', 'I', 'A', 'L', 'I', 'Z', 'A', 'R', 0, 
	HB_P_DOSHORT, 1,
/* 01146 */ HB_P_LINEOFFSET, 38,	/* 46 */
	HB_P_PUSHSYMNEAR, 6,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 's', 'e', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'T', 'A', 'B', 'L', 'O', 'I', 'D', 'E', 'S', ' ', 'p', 'a', 'r', 'a', ' ', 's', 'e', 'r', ' ', 'F', 'i', 'n', 'a', 'l', 'i', 'z', 'a', 'd', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01210 */ HB_P_LINEOFFSET, 39,	/* 47 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* MCONS_TABL */
/* 01217 */ HB_P_LINEOFFSET, 40,	/* 48 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 90,	/* 90 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ',', 'n', 'o', 'm', 'e', ',', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', ',', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', ',', 'c', 'o', 'u', 'n', 't', '(', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ')', ' ', 'F', 'R', 'O', 'M', ' ', 't', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 133,	/* 133 */
	' ', 'A', 'N', 'D', ' ', 'f', 'i', 'n', 'a', 'l', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'i', 'n', 'i', 'c', 'i', 'o', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ',', 'c', 'o', 'd', 'i', 'g', 'o', ',', 'n', 'o', 'm', 'e', ',', 'n', 'o', 'm', 'e', ',', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', ',', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', ',', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', ',', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* MCONS_TABL */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01471 */ HB_P_LINEOFFSET, 41,	/* 49 */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 132, 0,	/* 132 (abs: 01614) */
/* 01485 */ HB_P_LINEOFFSET, 42,	/* 50 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* Y 0*/
/* 01491 */ HB_P_LINEOFFSET, 43,	/* 51 */
	HB_P_LOCALNEARSETINT, 7, 1, 0,	/* Y 1*/
	HB_P_PUSHLOCALNEAR, 7,	/* Y */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 171, 0,	/* 171 (abs: 01678) */
/* 01510 */ HB_P_LINEOFFSET, 44,	/* 52 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* Y */
	HB_P_PLUS,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 7,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 7,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 23,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 7,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 23,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 7,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'F', 'I', 'N', 'A', 'L', 'I', 'Z', 'A', 'R', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01606 */ HB_P_LINEOFFSET, 45,	/* 53 */
	HB_P_LOCALNEARADDINT, 7, 1, 0,	/* Y 1*/
	HB_P_JUMPNEAR, 141,	/* -115 (abs: 01497) */
/* 01614 */ HB_P_LINEOFFSET, 47,	/* 55 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_PLUS,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'T', 'a', 'b', 'l', 'o', 'i', 'd', 'e', 's', ' ', 'p', 'a', 'r', 'a', ' ', 's', 'e', 'r', ' ', 'F', 'I', 'N', 'A', 'L', 'I', 'Z', 'A', 'D', 'O', 0, 
	HB_P_DOSHORT, 1,
/* 01678 */ HB_P_LINEOFFSET, 49,	/* 57 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 01692) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 7,	/* Y */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 72,	/* 72 (abs: 01764) */
/* 01694 */ HB_P_LINEOFFSET, 50,	/* 58 */
	HB_P_PUSHSYMNEAR, 24,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'T', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ' ', 'p', 'a', 'r', 'a', ' ', 'I', 'N', 'I', 'C', 'I', 'A', 'L', 'I', 'Z', 'A', 'R', ' ', 'E', ' ', 'F', 'I', 'N', 'A', 'L', 'I', 'Z', 'A', 'R', 0, 
	HB_P_DOSHORT, 1,
/* 01759 */ HB_P_LINEOFFSET, 51,	/* 59 */
	HB_P_JUMP, 0, 250,	/* -1536 (abs: 00225) */
/* 01764 */ HB_P_LINEOFFSET, 53,	/* 61 */
	HB_P_PUSHSYMNEAR, 4,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01772 */ HB_P_LINEOFFSET, 54,	/* 62 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'e', 's', 't', 'e', ' ', 'P', 'r', 'o', 'c', 'e', 's', 's', 'o', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 01821) */
/* 01816 */ HB_P_LINEOFFSET, 55,	/* 63 */
	HB_P_JUMP, 199, 249,	/* -1593 (abs: 00225) */
/* 01821 */ HB_P_LINEOFFSET, 57,	/* 65 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* MCONS_TABL */
/* 01828 */ HB_P_LINEOFFSET, 58,	/* 66 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 't', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', ' ', '<', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'i', 'n', 'i', 'c', 'i', 'o', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* MCONS_TABL */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01921 */ HB_P_LINEOFFSET, 59,	/* 67 */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 173, 2,	/* 685 (abs: 02617) */
/* 01935 */ HB_P_LINEOFFSET, 60,	/* 68 */
	HB_P_PUSHSYMNEAR, 6,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'I', 'N', 'I', 'C', 'I', 'A', 'L', 'I', 'Z', 'A', 'N', 'D', 'O', ' ', 'T', 'A', 'B', 'L', 'O', 'I', 'D', 'E', 'S', ' ', 'A', 'g', 'u', 'a', 'r', 'd', 'e', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01980 */ HB_P_LINEOFFSET, 61,	/* 69 */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* I 0*/
/* 01986 */ HB_P_LINEOFFSET, 62,	/* 70 */
	HB_P_LOCALNEARSETINT, 6, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 79, 2,	/* 591 (abs: 02593) */
/* 02005 */ HB_P_LINEOFFSET, 63,	/* 71 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* MCONS_MERC */
/* 02012 */ HB_P_LINEOFFSET, 64,	/* 72 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 5, 0,	/* MCONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02086 */ HB_P_LINEOFFSET, 65,	/* 73 */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 71,	/* 71 (abs: 02168) */
/* 02099 */ HB_P_LINEOFFSET, 66,	/* 74 */
	HB_P_PUSHSYMNEAR, 24,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'E', 'X', 'C', 'L', 'U', 'I', 'D', 'O', ' ', 'd', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02163 */ HB_P_LINEOFFSET, 67,	/* 75 */
	HB_P_JUMP, 165, 1,	/* 421 (abs: 02586) */
/* 02168 */ HB_P_LINEOFFSET, 69,	/* 77 */
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 26,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 232, 3,	/* 1000 */
	HB_P_MULT,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 26,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 27,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 68,	/* 68 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 28, 0,	/* MLINHA */
/* 02255 */ HB_P_LINEOFFSET, 70,	/* 78 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 't', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ' ', 'S', 'E', 'T', ' ', 'p', 'r', '_', 'a', 'n', 't', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'i', 'n', 'i', 'c', 'i', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02405 */ HB_P_LINEOFFSET, 71,	/* 79 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'S', 'E', 'T', ' ', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'u', 'l', '_', 'a', 'l', 't', '_', 'p', 'r', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'o', 'p', 'e', 'r', 'a', '_', 'p', 'r', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'h', 'v', '_', 'c', 'r', 'i', 'p', 't', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 31,	/* CRIPTO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 28, 0,	/* MLINHA */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02584 */ HB_P_LINEOFFSET, 72,	/* 80 */
	HB_P_LOCALNEARADDINT, 6, 1, 0,	/* I 1*/
	HB_P_JUMP, 170, 253,	/* -598 (abs: 01992) */
/* 02593 */ HB_P_LINEOFFSET, 73,	/* 81 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02617 */ HB_P_LINEOFFSET, 75,	/* 83 */
	HB_P_PUSHSYMNEAR, 6,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 's', 'e', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'T', 'A', 'B', 'L', 'O', 'I', 'D', 'E', 'S', ' ', 'p', 'a', 'r', 'a', ' ', 's', 'e', 'r', ' ', 'F', 'i', 'n', 'a', 'l', 'i', 'z', 'a', 'd', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02681 */ HB_P_LINEOFFSET, 76,	/* 84 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* MCONS_TABL */
/* 02688 */ HB_P_LINEOFFSET, 77,	/* 85 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 't', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', ' ', '<', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	' ', 'A', 'N', 'D', ' ', 'f', 'i', 'n', 'a', 'l', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'i', 'n', 'i', 'c', 'i', 'o', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* MCONS_TABL */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02805 */ HB_P_LINEOFFSET, 78,	/* 86 */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 225, 245,	/* -2591 (abs: 00225) */
/* 02819 */ HB_P_LINEOFFSET, 79,	/* 87 */
	HB_P_PUSHSYMNEAR, 6,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'F', 'I', 'N', 'A', 'L', 'I', 'Z', 'A', 'N', 'D', 'O', ' ', 'T', 'A', 'B', 'L', 'O', 'I', 'D', 'E', 'S', ' ', 'A', 'g', 'u', 'a', 'r', 'd', 'e', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02862 */ HB_P_LINEOFFSET, 80,	/* 88 */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* I 0*/
/* 02868 */ HB_P_LINEOFFSET, 81,	/* 89 */
	HB_P_LOCALNEARSETINT, 6, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 51, 2,	/* 563 (abs: 03447) */
/* 02887 */ HB_P_LINEOFFSET, 82,	/* 90 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* MCONS_MERC */
/* 02894 */ HB_P_LINEOFFSET, 83,	/* 91 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 5, 0,	/* MCONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02968 */ HB_P_LINEOFFSET, 84,	/* 92 */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 71,	/* 71 (abs: 03050) */
/* 02981 */ HB_P_LINEOFFSET, 85,	/* 93 */
	HB_P_PUSHSYMNEAR, 24,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'E', 'X', 'C', 'L', 'U', 'I', 'D', 'O', ' ', 'd', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03045 */ HB_P_LINEOFFSET, 86,	/* 94 */
	HB_P_JUMP, 137, 1,	/* 393 (abs: 03440) */
/* 03050 */ HB_P_LINEOFFSET, 88,	/* 96 */
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 26,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 232, 3,	/* 1000 */
	HB_P_MULT,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 26,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 27,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 68,	/* 68 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 28, 0,	/* MLINHA */
/* 03137 */ HB_P_LINEOFFSET, 89,	/* 97 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 't', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ' ', 'S', 'E', 'T', ' ', 'f', 'i', 'n', 'a', 'l', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03259 */ HB_P_LINEOFFSET, 90,	/* 98 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'S', 'E', 'T', ' ', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'u', 'l', '_', 'a', 'l', 't', '_', 'p', 'r', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'o', 'p', 'e', 'r', 'a', '_', 'p', 'r', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'h', 'v', '_', 'c', 'r', 'i', 'p', 't', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 31,	/* CRIPTO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 28, 0,	/* MLINHA */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03438 */ HB_P_LINEOFFSET, 91,	/* 99 */
	HB_P_LOCALNEARADDINT, 6, 1, 0,	/* I 1*/
	HB_P_JUMP, 198, 253,	/* -570 (abs: 02874) */
/* 03447 */ HB_P_LINEOFFSET, 92,	/* 100 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 82, 243,	/* -3246 (abs: 00225) */
	HB_P_ENDPROC
/* 03475 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_INITLINES()
{
   static const BYTE pcode[] =
   {
	HB_P_MODULENAME,	/* sactabl3 */
 's', 'a', 'c', 't', 'a', 'b', 'l', '3', 0,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'C', ':', 92, 'h', 'e', 'l', 'i', 'o', 92, 's', 'i', 'a', 'c', 'h', 'b', 92, 's', 'a', 'c', 't', 'a', 'b', 'l', '3', '.', 'p', 'r', 'g', 0, 
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	16, 205, 255, 255, 253, 215, 191, 238, 254, 239, 251, 127, 159, 0, 
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00066 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

