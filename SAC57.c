/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC57.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC57.PRG /q /oC:\hti\SISCOM\SAC57.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:10 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC57.PRG"

HB_FUNC( SAC57 );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SAC571 );
HB_FUNC_EXTERN( SAC572 );
HB_FUNC_EXTERN( SAC576 );
HB_FUNC_EXTERN( SAC575 );
HB_FUNC_EXTERN( SAC573 );
HB_FUNC_EXTERN( SAC574 );
HB_FUNC_EXTERN( SAC577 );
HB_FUNC_EXTERN( SAC578 );
HB_FUNC_EXTERN( SAC579 );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC57 )
{ "SAC57", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC57 )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SAC571", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC571 )}, NULL },
{ "SAC572", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC572 )}, NULL },
{ "SAC576", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC576 )}, NULL },
{ "SAC575", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC575 )}, NULL },
{ "SAC573", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC573 )}, NULL },
{ "SAC574", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC574 )}, NULL },
{ "SAC577", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC577 )}, NULL },
{ "SAC578", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC578 )}, NULL },
{ "SAC579", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC579 )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC57 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC57
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC57 = hb_vm_SymbolInit_SAC57;
   #pragma data_seg()
#endif

HB_FUNC( SAC57 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_LOCALNEARSETSTR, 1, 6, 0,	/* MPRG 6*/
	'S', 'A', 'C', '5', '7', 0, 
/* 00016 */ HB_P_LINEOFFSET, 2,	/* 10 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_POPLOCALNEAR, 3,	/* LCI */
/* 00026 */ HB_P_LINEOFFSET, 3,	/* 11 */
	HB_P_LOCALNEARSETINT, 5, 7, 0,	/* LBA 7*/
/* 00032 */ HB_P_LINEOFFSET, 4,	/* 12 */
	HB_P_LOCALNEARSETINT, 6, 28, 0,	/* CBA 28*/
/* 00038 */ HB_P_LINEOFFSET, 5,	/* 13 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'T', 'a', 'b', 'e', 'l', 'a', 's', ' ', 'd', 'e', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00077 */ HB_P_LINEOFFSET, 8,	/* 16 */
	HB_P_PUSHSYMNEAR, 2,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00086 */ HB_P_LINEOFFSET, 9,	/* 17 */
	HB_P_PUSHSYMNEAR, 3,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'a', ' ', 'O', 'p', 'c', 'a', 'o', ' ', 'o', 'u', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00131 */ HB_P_LINEOFFSET, 10,	/* 18 */
	HB_P_PUSHSYMNEAR, 4,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 00140 */ HB_P_LINEOFFSET, 11,	/* 19 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', ' ', '1', '-', '>', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '/', 'F', 'a', 'b', 'r', 'i', 'c', 'a', 'n', 't', 'e', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00185 */ HB_P_LINEOFFSET, 12,	/* 20 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', ' ', '2', '-', '>', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00233 */ HB_P_LINEOFFSET, 13,	/* 21 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', ' ', '3', '-', '>', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00281 */ HB_P_LINEOFFSET, 14,	/* 22 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', ' ', '4', '-', '>', ' ', 'G', 'r', 'u', 'p', 'o', '/', 'S', 'u', 'b', '-', 'G', 'r', 'u', 'p', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00329 */ HB_P_LINEOFFSET, 15,	/* 23 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', ' ', '5', '-', '>', ' ', 'D', 'e', 's', 'p', 'e', 's', 'a', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00377 */ HB_P_LINEOFFSET, 16,	/* 24 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', ' ', '6', '-', '>', ' ', 'C', 'o', 'n', 't', 'a', ' ', 'D', 'e', 's', 'p', 'e', 's', 'a', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00425 */ HB_P_LINEOFFSET, 17,	/* 25 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', ' ', '7', '-', '>', ' ', 'T', 'a', 'b', '.', 'C', 'o', 'n', 'd', 'i', 'c', 'a', 'o', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00473 */ HB_P_LINEOFFSET, 18,	/* 26 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', ' ', '8', '-', '>', ' ', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', 'e', 's', '/', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', 'e', 's', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00521 */ HB_P_LINEOFFSET, 19,	/* 27 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', ' ', '9', '-', '>', ' ', 'N', 'i', 'v', 'e', 'l', ' ', 'd', 'e', ' ', 'A', 'c', 'e', 's', 's', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00569 */ HB_P_LINEOFFSET, 20,	/* 28 */
	HB_P_PUSHSYMNEAR, 6,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 7,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00596) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00601) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OPCAO */
/* 00614 */ HB_P_LINEOFFSET, 21,	/* 29 */
	HB_P_PUSHSYMNEAR, 4,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00622 */ HB_P_LINEOFFSET, 22,	/* 30 */
	HB_P_PUSHSYMNEAR, 8,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00637) */
	HB_P_JUMP, 174, 0,	/* 174 (abs: 00808) */
/* 00637 */ HB_P_LINEOFFSET, 26,	/* 34 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00655) */
/* 00645 */ HB_P_LINEOFFSET, 28,	/* 36 */
	HB_P_PUSHSYMNEAR, 9,	/* SAC571 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 193, 253,	/* -575 (abs: 00077) */
/* 00655 */ HB_P_LINEOFFSET, 29,	/* 37 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00674) */
/* 00664 */ HB_P_LINEOFFSET, 31,	/* 39 */
	HB_P_PUSHSYMNEAR, 10,	/* SAC572 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 174, 253,	/* -594 (abs: 00077) */
/* 00674 */ HB_P_LINEOFFSET, 32,	/* 40 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00693) */
/* 00683 */ HB_P_LINEOFFSET, 34,	/* 42 */
	HB_P_PUSHSYMNEAR, 11,	/* SAC576 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 155, 253,	/* -613 (abs: 00077) */
/* 00693 */ HB_P_LINEOFFSET, 35,	/* 43 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00712) */
/* 00702 */ HB_P_LINEOFFSET, 37,	/* 45 */
	HB_P_PUSHSYMNEAR, 12,	/* SAC575 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 136, 253,	/* -632 (abs: 00077) */
/* 00712 */ HB_P_LINEOFFSET, 38,	/* 46 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00731) */
/* 00721 */ HB_P_LINEOFFSET, 40,	/* 48 */
	HB_P_PUSHSYMNEAR, 13,	/* SAC573 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 117, 253,	/* -651 (abs: 00077) */
/* 00731 */ HB_P_LINEOFFSET, 41,	/* 49 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00750) */
/* 00740 */ HB_P_LINEOFFSET, 43,	/* 51 */
	HB_P_PUSHSYMNEAR, 14,	/* SAC574 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 98, 253,	/* -670 (abs: 00077) */
/* 00750 */ HB_P_LINEOFFSET, 44,	/* 52 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00769) */
/* 00759 */ HB_P_LINEOFFSET, 46,	/* 54 */
	HB_P_PUSHSYMNEAR, 15,	/* SAC577 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 79, 253,	/* -689 (abs: 00077) */
/* 00769 */ HB_P_LINEOFFSET, 47,	/* 55 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00788) */
/* 00778 */ HB_P_LINEOFFSET, 49,	/* 57 */
	HB_P_PUSHSYMNEAR, 16,	/* SAC578 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 60, 253,	/* -708 (abs: 00077) */
/* 00788 */ HB_P_LINEOFFSET, 50,	/* 58 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 50, 253,	/* -718 (abs: 00077) */
/* 00798 */ HB_P_LINEOFFSET, 52,	/* 60 */
	HB_P_PUSHSYMNEAR, 17,	/* SAC579 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 40, 253,	/* -728 (abs: 00077) */
/* 00808 */ HB_P_LINEOFFSET, 55,	/* 63 */
	HB_P_PUSHSYMNEAR, 18,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00815 */ HB_P_LINEOFFSET, 56,	/* 64 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00820 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

