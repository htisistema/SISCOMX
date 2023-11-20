/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON41.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\hti\SISCOM\CON41.PRG /q /oC:\hti\SISCOM\CON41.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.29 11:52:28 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON41.PRG"

HB_FUNC( CON41 );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( CON411 );
HB_FUNC_EXTERN( CON413 );
HB_FUNC_EXTERN( CON414 );
HB_FUNC_EXTERN( CON418 );
HB_FUNC_EXTERN( CON419 );
HB_FUNC_EXTERN( CON415 );
HB_FUNC_EXTERN( CON412 );
HB_FUNC_EXTERN( CON416 );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON41 )
{ "CON41", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON41 )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "CON411", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON411 )}, NULL },
{ "CON413", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON413 )}, NULL },
{ "CON414", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON414 )}, NULL },
{ "CON418", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON418 )}, NULL },
{ "CON419", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON419 )}, NULL },
{ "CON415", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON415 )}, NULL },
{ "CON412", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON412 )}, NULL },
{ "CON416", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON416 )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON41 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON41
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON41 = hb_vm_SymbolInit_CON41;
   #pragma data_seg()
#endif

HB_FUNC( CON41 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 5, 0,	/* 5 */
	HB_P_LOCALNEARSETSTR, 1, 6, 0,	/* MPRG 6*/
	'C', 'O', 'N', '4', '1', 0, 
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* OP41 0*/
/* 00020 */ HB_P_LINEOFFSET, 2,	/* 7 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', 'A', ' ', 'P', 'A', 'G', 'A', 'R', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00068 */ HB_P_LINEOFFSET, 4,	/* 9 */
	HB_P_PUSHSYMNEAR, 2,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00077 */ HB_P_LINEOFFSET, 5,	/* 10 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 00086 */ HB_P_LINEOFFSET, 6,	/* 11 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', '0', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'd', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00135 */ HB_P_LINEOFFSET, 7,	/* 12 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', '1', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'a', ' ', 'V', 'e', 'n', 'c', 'e', 'r', '/', 'V', 'e', 'n', 'c', 'i', 'd', 'o', 's', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00184 */ HB_P_LINEOFFSET, 8,	/* 13 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', '2', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'P', 'a', 'g', 'a', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00234 */ HB_P_LINEOFFSET, 9,	/* 14 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', '3', '-', '>', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'R', 'e', 'c', 'i', 'b', 'o', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00284 */ HB_P_LINEOFFSET, 10,	/* 15 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', '4', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ' ', 'X', ' ', 'a', ' ', 'P', 'a', 'g', 'a', 'r', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00334 */ HB_P_LINEOFFSET, 11,	/* 16 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', '5', '-', '>', ' ', 'B', 'A', 'L', 'A', 'N', 'C', 'E', 'T', 'E', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00384 */ HB_P_LINEOFFSET, 12,	/* 17 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', '6', '-', '>', ' ', 'R', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00434 */ HB_P_LINEOFFSET, 13,	/* 18 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', '7', '-', '>', ' ', 'C', 'o', 'n', 't', 'a', ' ', 'C', 'o', 'r', 'r', 'e', 'n', 't', 'e', ' ', 'd', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00484 */ HB_P_LINEOFFSET, 14,	/* 19 */
	HB_P_PUSHSYMNEAR, 5,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* OP41 */
	HB_P_PUSHSYMNEAR, 6,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00511) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00516) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'p', '4', '1', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OP41 */
/* 00528 */ HB_P_LINEOFFSET, 15,	/* 20 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00536 */ HB_P_LINEOFFSET, 16,	/* 21 */
	HB_P_PUSHSYMNEAR, 7,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00560) */
/* 00548 */ HB_P_LINEOFFSET, 17,	/* 22 */
	HB_P_PUSHSYMNEAR, 8,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00555 */ HB_P_LINEOFFSET, 18,	/* 23 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00560 */ HB_P_LINEOFFSET, 21,	/* 26 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP41 */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00578) */
/* 00568 */ HB_P_LINEOFFSET, 22,	/* 27 */
	HB_P_PUSHSYMNEAR, 9,	/* CON411 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 5, 254,	/* -507 (abs: 00068) */
/* 00578 */ HB_P_LINEOFFSET, 23,	/* 28 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP41 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00597) */
/* 00587 */ HB_P_LINEOFFSET, 24,	/* 29 */
	HB_P_PUSHSYMNEAR, 10,	/* CON413 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 242, 253,	/* -526 (abs: 00068) */
/* 00597 */ HB_P_LINEOFFSET, 25,	/* 30 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP41 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00616) */
/* 00606 */ HB_P_LINEOFFSET, 26,	/* 31 */
	HB_P_PUSHSYMNEAR, 11,	/* CON414 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 223, 253,	/* -545 (abs: 00068) */
/* 00616 */ HB_P_LINEOFFSET, 27,	/* 32 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP41 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00635) */
/* 00625 */ HB_P_LINEOFFSET, 28,	/* 33 */
	HB_P_PUSHSYMNEAR, 12,	/* CON418 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 204, 253,	/* -564 (abs: 00068) */
/* 00635 */ HB_P_LINEOFFSET, 29,	/* 34 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP41 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00654) */
/* 00644 */ HB_P_LINEOFFSET, 30,	/* 35 */
	HB_P_PUSHSYMNEAR, 13,	/* CON419 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 185, 253,	/* -583 (abs: 00068) */
/* 00654 */ HB_P_LINEOFFSET, 31,	/* 36 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP41 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00673) */
/* 00663 */ HB_P_LINEOFFSET, 32,	/* 37 */
	HB_P_PUSHSYMNEAR, 14,	/* CON415 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 166, 253,	/* -602 (abs: 00068) */
/* 00673 */ HB_P_LINEOFFSET, 33,	/* 38 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP41 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00692) */
/* 00682 */ HB_P_LINEOFFSET, 34,	/* 39 */
	HB_P_PUSHSYMNEAR, 15,	/* CON412 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 147, 253,	/* -621 (abs: 00068) */
/* 00692 */ HB_P_LINEOFFSET, 35,	/* 40 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP41 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 137, 253,	/* -631 (abs: 00068) */
/* 00702 */ HB_P_LINEOFFSET, 36,	/* 41 */
	HB_P_PUSHSYMNEAR, 16,	/* CON416 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 127, 253,	/* -641 (abs: 00068) */
	HB_P_ENDPROC
/* 00713 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

