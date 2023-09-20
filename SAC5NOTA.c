/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5NOTA.PRG>
 * Command: C:\xharbour997\bin\harbour.exe C:\helio\siachb\SAC5NOTA.PRG /q /oC:\helio\siachb\SAC5NOTA.c /M /N /B 
 * Created: 2018.04.09 19:25:38 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5NOTA.PRG"

HB_FUNC( SAC5NOTA );
HB_FUNC_INITLINES();
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SAC5NOT1 );
HB_FUNC_EXTERN( SAC5NOT2 );
HB_FUNC_EXTERN( SAC5NOT3 );
HB_FUNC_EXTERN( SAC5NOT6 );
HB_FUNC_EXTERN( SAC5NOT7 );
HB_FUNC_EXTERN( SAC5NOT8 );
HB_FUNC_EXTERN( SAC5NOT4 );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( __DBGENTRY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5NOTA )
{ "SAC5NOTA", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5NOTA )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SAC5NOT1", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5NOT1 )}, NULL },
{ "SAC5NOT2", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5NOT2 )}, NULL },
{ "SAC5NOT3", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5NOT3 )}, NULL },
{ "SAC5NOT6", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5NOT6 )}, NULL },
{ "SAC5NOT7", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5NOT7 )}, NULL },
{ "SAC5NOT8", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5NOT8 )}, NULL },
{ "SAC5NOT4", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5NOT4 )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "__DBGENTRY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGENTRY )}, NULL },
{ "(_INITLINES)", {HB_FS_INITEXIT}, {hb_INITLINES}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5NOTA )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5NOTA
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5NOTA = hb_vm_SymbolInit_SAC5NOTA;
   #pragma data_seg()
#endif

HB_FUNC( SAC5NOTA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 0,	/* locals, params */
	HB_P_MODULENAME,	/* SAC5NOTA.PRG:SAC5NOTA */
 'S', 'A', 'C', '5', 'N', 'O', 'T', 'A', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '5', 'N', 'O', 'T', 'A', 0,
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC5NOTA.PRG: */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '5', 'N', 'O', 'T', 'A', '.', 'P', 'R', 'G', ':', 0,
/* 00057 */ HB_P_BASELINE, 6, 0,	/* 6 */
	HB_P_LOCALNAME, 1, 0,	/* MPRG */
 'M', 'P', 'R', 'G', 0,
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', '5', 'N', 'O', 'T', 'A', 0, 
	HB_P_LOCALNAME, 2, 0,	/* OPCAO */
 'O', 'P', 'C', 'A', 'O', 0,
/* 00090 */ HB_P_LINEOFFSET, 1,	/* 7 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'N', 'o', 't', 'a', 's', ' ', 'E', 'm', 'i', 't', 'i', 'd', 'a', 's', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00124 */ HB_P_LINEOFFSET, 2,	/* 8 */
/* 00126 */ HB_P_LINEOFFSET, 3,	/* 9 */
	HB_P_PUSHSYMNEAR, 2,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00135 */ HB_P_LINEOFFSET, 4,	/* 10 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00143 */ HB_P_LINEOFFSET, 5,	/* 11 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', ' ', '0', '-', '>', ' ', 'N', 'o', 't', 'a', 's', ' ', 'E', 'm', 'i', 't', 'i', 'd', 'a', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00184 */ HB_P_LINEOFFSET, 6,	/* 12 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', ' ', '1', '-', '>', ' ', 'N', 'o', 't', 'a', 's', ' ', 'I', 'n', 't', 'e', 'r', 'e', 's', 't', 'a', 'd', 'u', 'a', 'i', 's', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00225 */ HB_P_LINEOFFSET, 7,	/* 13 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', ' ', '2', '-', '>', ' ', 'N', 'o', 't', 'a', 's', ' ', 'I', 'n', 't', 'e', 'r', 'n', 'a', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00267 */ HB_P_LINEOFFSET, 8,	/* 14 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', ' ', '3', '-', '>', ' ', 'R', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'a', 's', ' ', 'N', 'O', 'T', 'A', 'S', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00309 */ HB_P_LINEOFFSET, 9,	/* 15 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', ' ', '4', '-', '>', ' ', 'N', 'o', 't', 'a', 's', ' ', 'd', 'e', ' ', 'E', 'n', 't', 'r', 'a', 'd', 'a', 's', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00351 */ HB_P_LINEOFFSET, 10,	/* 16 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', ' ', '5', '-', '>', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'I', 'P', 'I', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00393 */ HB_P_LINEOFFSET, 11,	/* 17 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', ' ', '3', '-', '>', ' ', 'A', 'p', 'u', 'r', 'a', 'c', 'a', 'o', ' ', 'd', 'e', ' ', 'I', 'm', 'p', 'o', 's', 't', 'o', 's', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00435 */ HB_P_LINEOFFSET, 13,	/* 19 */
	HB_P_PUSHSYMNEAR, 5,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 85, 0,	/* 85 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* OPCAO */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC5NOTA.PRG:SAC5NOTA */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '5', 'N', 'O', 'T', 'A', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '5', 'N', 'O', 'T', 'A', 0,
	HB_P_LOCALNAME, 255, 255,	/* OPCAO */
 'O', 'P', 'C', 'A', 'O', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
/* 00503 */ HB_P_LINE, 19, 0,	/* 19 */
	HB_P_PUSHSYMNEAR, 6,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00519) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00524) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OPCAO */
/* 00537 */ HB_P_LINEOFFSET, 14,	/* 20 */
	HB_P_PUSHSYMNEAR, 7,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00554) */
/* 00549 */ HB_P_LINEOFFSET, 15,	/* 21 */
	HB_P_JUMP, 138, 0,	/* 138 (abs: 00689) */
/* 00554 */ HB_P_LINEOFFSET, 17,	/* 23 */
/* 00556 */ HB_P_LINEOFFSET, 18,	/* 24 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00574) */
/* 00564 */ HB_P_LINEOFFSET, 19,	/* 25 */
	HB_P_PUSHSYMNEAR, 8,	/* SAC5NOT1 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 65, 254,	/* -447 (abs: 00124) */
/* 00574 */ HB_P_LINEOFFSET, 20,	/* 26 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00593) */
/* 00583 */ HB_P_LINEOFFSET, 21,	/* 27 */
	HB_P_PUSHSYMNEAR, 9,	/* SAC5NOT2 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 46, 254,	/* -466 (abs: 00124) */
/* 00593 */ HB_P_LINEOFFSET, 22,	/* 28 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00612) */
/* 00602 */ HB_P_LINEOFFSET, 23,	/* 29 */
	HB_P_PUSHSYMNEAR, 10,	/* SAC5NOT3 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 27, 254,	/* -485 (abs: 00124) */
/* 00612 */ HB_P_LINEOFFSET, 24,	/* 30 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00631) */
/* 00621 */ HB_P_LINEOFFSET, 25,	/* 31 */
	HB_P_PUSHSYMNEAR, 11,	/* SAC5NOT6 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 8, 254,	/* -504 (abs: 00124) */
/* 00631 */ HB_P_LINEOFFSET, 26,	/* 32 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00650) */
/* 00640 */ HB_P_LINEOFFSET, 27,	/* 33 */
	HB_P_PUSHSYMNEAR, 12,	/* SAC5NOT7 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 245, 253,	/* -523 (abs: 00124) */
/* 00650 */ HB_P_LINEOFFSET, 28,	/* 34 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00669) */
/* 00659 */ HB_P_LINEOFFSET, 29,	/* 35 */
	HB_P_PUSHSYMNEAR, 13,	/* SAC5NOT8 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 226, 253,	/* -542 (abs: 00124) */
/* 00669 */ HB_P_LINEOFFSET, 30,	/* 36 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 216, 253,	/* -552 (abs: 00124) */
/* 00679 */ HB_P_LINEOFFSET, 31,	/* 37 */
	HB_P_PUSHSYMNEAR, 14,	/* SAC5NOT4 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 206, 253,	/* -562 (abs: 00124) */
/* 00689 */ HB_P_LINEOFFSET, 36,	/* 42 */
	HB_P_PUSHSYMNEAR, 15,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00696 */ HB_P_LINEOFFSET, 37,	/* 43 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00701 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_INITLINES()
{
   static const BYTE pcode[] =
   {
	HB_P_MODULENAME,	/* SAC5NOTA */
 'S', 'A', 'C', '5', 'N', 'O', 'T', 'A', 0,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'C', ':', 92, 'h', 'e', 'l', 'i', 'o', 92, 's', 'i', 'a', 'c', 'h', 'b', 92, 'S', 'A', 'C', '5', 'N', 'O', 'T', 'A', '.', 'P', 'R', 'G', 0, 
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	208, 255, 187, 255, '?', 12, 0, 
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00059 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

