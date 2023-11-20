/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON25.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\hti\SISCOM\CON25.PRG /q /oC:\hti\SISCOM\CON25.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.29 11:52:28 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON25.PRG"

HB_FUNC( CON25 );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( CON251 );
HB_FUNC_EXTERN( CON252 );
HB_FUNC_EXTERN( CON253 );
HB_FUNC_EXTERN( CON2511 );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON25 )
{ "CON25", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON25 )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "CON251", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON251 )}, NULL },
{ "CON252", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON252 )}, NULL },
{ "CON253", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON253 )}, NULL },
{ "CON2511", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON2511 )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON25 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON25
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON25 = hb_vm_SymbolInit_CON25;
   #pragma data_seg()
#endif

HB_FUNC( CON25 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 8, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_LOCALNEARSETSTR, 2, 6, 0,	/* MPRG 6*/
	'C', 'O', 'N', '2', '5', 0, 
/* 00016 */ HB_P_LINEOFFSET, 4,	/* 12 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* LCI 0*/
/* 00022 */ HB_P_LINEOFFSET, 5,	/* 13 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
/* 00028 */ HB_P_LINEOFFSET, 6,	/* 14 */
	HB_P_LOCALNEARSETINT, 5, 5, 0,	/* LBA 5*/
/* 00034 */ HB_P_LINEOFFSET, 7,	/* 15 */
	HB_P_LOCALNEARSETINT, 6, 29, 0,	/* CBA 29*/
/* 00040 */ HB_P_LINEOFFSET, 10,	/* 18 */
	HB_P_PUSHSYMNEAR, 1,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00069) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00069 */ HB_P_LINEOFFSET, 11,	/* 19 */
	HB_P_PUSHSYMNEAR, 1,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'c', 'h', 'e', 'q', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'h', 'e', 'q', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00098) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00098 */ HB_P_LINEOFFSET, 12,	/* 20 */
	HB_P_PUSHSYMNEAR, 1,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'r', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00127) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00127 */ HB_P_LINEOFFSET, 13,	/* 21 */
	HB_P_PUSHSYMNEAR, 1,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'p', 'e', 'd', '_', 's', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 's', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00158) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00158 */ HB_P_LINEOFFSET, 14,	/* 22 */
	HB_P_PUSHSYMNEAR, 1,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00185) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00185 */ HB_P_LINEOFFSET, 16,	/* 24 */
	HB_P_PUSHLOCALNEAR, 1,	/* TP */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 57,	/* 57 (abs: 00248) */
/* 00193 */ HB_P_LINEOFFSET, 17,	/* 25 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', 'B', 'a', 'i', 'x', 'a', ' ', 'D', 'O', 'C', '.', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '*', '*', '*', ' ', 'C', 'A', 'I', 'X', 'A', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 5,
	HB_P_JUMPNEAR, 59,	/* 59 (abs: 00305) */
/* 00248 */ HB_P_LINEOFFSET, 19,	/* 27 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', 'B', 'a', 'i', 'x', 'a', ' ', 'D', 'O', 'C', '.', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '*', '*', '*', ' ', 'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 5,
/* 00305 */ HB_P_LINEOFFSET, 23,	/* 31 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00314 */ HB_P_LINEOFFSET, 24,	/* 32 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* OPCAO 0*/
/* 00320 */ HB_P_LINEOFFSET, 25,	/* 33 */
	HB_P_PUSHSYMNEAR, 4,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 00329 */ HB_P_LINEOFFSET, 26,	/* 34 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', '0', '-', '>', ' ', 'I', 'n', 'd', 'i', 'v', 'i', 'd', 'u', 'a', 'l', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00374 */ HB_P_LINEOFFSET, 27,	/* 35 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', '1', '-', '>', ' ', 'G', 'e', 'r', 'a', 'l', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00422 */ HB_P_LINEOFFSET, 28,	/* 36 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', '2', '-', '>', ' ', 'E', 's', 't', 'o', 'r', 'n', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00470 */ HB_P_LINEOFFSET, 29,	/* 37 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', '3', '-', '>', ' ', 'T', 'r', 'a', 'n', 's', 'f', 'e', 'r', 'e', 'n', 'c', 'i', 'a', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00518 */ HB_P_LINEOFFSET, 30,	/* 38 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', '4', '-', '>', ' ', 'B', 'a', 'i', 'x', 'a', ' ', 'P', 'a', 'r', 'c', 'i', 'a', 'l', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00566 */ HB_P_LINEOFFSET, 31,	/* 39 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', '5', '-', '>', ' ', 'D', 'e', 'm', 'o', 'n', 's', 't', 'r', 'a', 't', 'i', 'v', 'o', ' ', 'D', 'e', 'b', 'i', 't', 'o', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00614 */ HB_P_LINEOFFSET, 32,	/* 40 */
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 00628 */ HB_P_LINEOFFSET, 33,	/* 41 */
	HB_P_PUSHSYMNEAR, 7,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 8,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00655) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00660) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 9,	/* OPCAO */
/* 00673 */ HB_P_LINEOFFSET, 34,	/* 42 */
	HB_P_PUSHSYMNEAR, 4,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00681 */ HB_P_LINEOFFSET, 35,	/* 43 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00705) */
/* 00693 */ HB_P_LINEOFFSET, 36,	/* 44 */
	HB_P_PUSHSYMNEAR, 10,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00700 */ HB_P_LINEOFFSET, 37,	/* 45 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00705 */ HB_P_LINEOFFSET, 40,	/* 48 */
	HB_P_PUSHLOCALNEAR, 9,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00725) */
/* 00713 */ HB_P_LINEOFFSET, 41,	/* 49 */
	HB_P_PUSHSYMNEAR, 11,	/* CON251 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* TP */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 95, 254,	/* -417 (abs: 00305) */
/* 00725 */ HB_P_LINEOFFSET, 42,	/* 50 */
	HB_P_PUSHLOCALNEAR, 9,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00746) */
/* 00734 */ HB_P_LINEOFFSET, 43,	/* 51 */
	HB_P_PUSHSYMNEAR, 12,	/* CON252 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* TP */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 74, 254,	/* -438 (abs: 00305) */
/* 00746 */ HB_P_LINEOFFSET, 44,	/* 52 */
	HB_P_PUSHLOCALNEAR, 9,	/* OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00770) */
/* 00755 */ HB_P_LINEOFFSET, 45,	/* 53 */
	HB_P_PUSHSYMNEAR, 11,	/* CON251 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 50, 254,	/* -462 (abs: 00305) */
/* 00770 */ HB_P_LINEOFFSET, 46,	/* 54 */
	HB_P_PUSHLOCALNEAR, 9,	/* OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00791) */
/* 00779 */ HB_P_LINEOFFSET, 47,	/* 55 */
	HB_P_PUSHSYMNEAR, 13,	/* CON253 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* TP */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 29, 254,	/* -483 (abs: 00305) */
/* 00791 */ HB_P_LINEOFFSET, 48,	/* 56 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 9,	/* OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00806) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 1,	/* TP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00818) */
/* 00808 */ HB_P_LINEOFFSET, 49,	/* 57 */
	HB_P_PUSHSYMNEAR, 14,	/* CON2511 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 2, 254,	/* -510 (abs: 00305) */
/* 00818 */ HB_P_LINEOFFSET, 50,	/* 58 */
	HB_P_PUSHLOCALNEAR, 9,	/* OPCAO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 248, 253,	/* -520 (abs: 00305) */
/* 00828 */ HB_P_LINEOFFSET, 51,	/* 59 */
	HB_P_PUSHSYMNEAR, 12,	/* CON252 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 233, 253,	/* -535 (abs: 00305) */
	HB_P_ENDPROC
/* 00844 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

