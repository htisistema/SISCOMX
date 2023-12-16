/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON42_0.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\CON42_0.PRG /q /oC:\hti\SISCOM\CON42_0.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:53 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON42_0.PRG"

HB_FUNC( CON42_0 );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( CON420 );
HB_FUNC_EXTERN( CON423 );
HB_FUNC_EXTERN( CON424 );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON42_0 )
{ "CON42_0", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON42_0 )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "CON420", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON420 )}, NULL },
{ "CON423", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON423 )}, NULL },
{ "CON424", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON424 )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON42_0 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON42_0
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON42_0 = hb_vm_SymbolInit_CON42_0;
   #pragma data_seg()
#endif

HB_FUNC( CON42_0 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 5, 0,	/* 5 */
	HB_P_LOCALNEARSETSTR, 1, 6, 0,	/* MPRG 6*/
	'C', 'O', 'N', '4', '2', 0, 
/* 00016 */ HB_P_LINEOFFSET, 1,	/* 6 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00061 */ HB_P_LINEOFFSET, 3,	/* 8 */
	HB_P_PUSHSYMNEAR, 2,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00070 */ HB_P_LINEOFFSET, 4,	/* 9 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 00079 */ HB_P_LINEOFFSET, 5,	/* 10 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '0', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'E', 'm', 'i', 't', 'i', 'd', 'a', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00132 */ HB_P_LINEOFFSET, 6,	/* 11 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '2', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'a', ' ', 'V', 'e', 'n', 'c', 'e', 'r', '/', 'V', 'e', 'n', 'c', 'i', 'd', 'a', 's', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00185 */ HB_P_LINEOFFSET, 7,	/* 12 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '3', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'P', 'a', 'g', 'a', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00239 */ HB_P_LINEOFFSET, 8,	/* 13 */
	HB_P_PUSHSYMNEAR, 5,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* OP42 */
	HB_P_PUSHSYMNEAR, 6,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00266) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00271) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'p', '4', '2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OP42 */
/* 00283 */ HB_P_LINEOFFSET, 9,	/* 14 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00291 */ HB_P_LINEOFFSET, 11,	/* 16 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP42 */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00311) */
/* 00299 */ HB_P_LINEOFFSET, 12,	/* 17 */
	HB_P_PUSHSYMNEAR, 7,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00306 */ HB_P_LINEOFFSET, 13,	/* 18 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00311 */ HB_P_LINEOFFSET, 14,	/* 19 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP42 */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00333) */
/* 00319 */ HB_P_LINEOFFSET, 16,	/* 21 */
	HB_P_PUSHSYMNEAR, 8,	/* CON420 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 243, 254,	/* -269 (abs: 00061) */
/* 00333 */ HB_P_LINEOFFSET, 17,	/* 22 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP42 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00356) */
/* 00342 */ HB_P_LINEOFFSET, 19,	/* 24 */
	HB_P_PUSHSYMNEAR, 9,	/* CON423 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 220, 254,	/* -292 (abs: 00061) */
/* 00356 */ HB_P_LINEOFFSET, 20,	/* 25 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP42 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 210, 254,	/* -302 (abs: 00061) */
/* 00366 */ HB_P_LINEOFFSET, 22,	/* 27 */
	HB_P_PUSHSYMNEAR, 10,	/* CON424 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 196, 254,	/* -316 (abs: 00061) */
	HB_P_ENDPROC
/* 00381 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

