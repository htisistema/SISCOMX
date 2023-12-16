/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACCHEQ.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SACCHEQ.PRG /q /oC:\hti\SISCOM\SACCHEQ.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:15 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACCHEQ.PRG"

HB_FUNC( SACCHEQ );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SACPCHEQ );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACCHEQ )
{ "SACCHEQ", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACCHEQ )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "SACPCHEQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACPCHEQ )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACCHEQ )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACCHEQ
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACCHEQ = hb_vm_SymbolInit_SACCHEQ;
   #pragma data_seg()
#endif

HB_FUNC( SACCHEQ )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 8, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 5, 0,	/* 5 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', 'C', 'H', 'E', 'Q', 0, 
/* 00018 */ HB_P_LINEOFFSET, 2,	/* 7 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* LCI 0*/
/* 00024 */ HB_P_LINEOFFSET, 3,	/* 8 */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* CCI 0*/
/* 00030 */ HB_P_LINEOFFSET, 4,	/* 9 */
	HB_P_LOCALNEARSETINT, 7, 1, 0,	/* LBA 1*/
/* 00036 */ HB_P_LINEOFFSET, 5,	/* 10 */
	HB_P_LOCALNEARSETINT, 8, 30, 0,	/* CBA 30*/
/* 00042 */ HB_P_LINEOFFSET, 6,	/* 11 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* OPCAO 0*/
/* 00048 */ HB_P_LINEOFFSET, 7,	/* 12 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00056 */ HB_P_LINEOFFSET, 9,	/* 14 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHLOCALNEAR, 7,	/* LBA */
	HB_P_PUSHLOCALNEAR, 8,	/* CBA */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'P', 'r', 'e', 'e', 'n', 'c', 'h', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00097 */ HB_P_LINEOFFSET, 11,	/* 16 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00106 */ HB_P_LINEOFFSET, 12,	/* 17 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 00115 */ HB_P_LINEOFFSET, 13,	/* 18 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', '0', ' ', '-', '>', ' ', 'C', 'h', 'e', 'q', 'u', 'e', ' ', 'f', 'o', 'r', 'm', '.', ' ', 'C', 'o', 'n', 't', 'i', 'n', 'u', 'o', ' ', '1', ' ', 0, 
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'*', '*', ' ', 'P', 'r', 'e', 'e', 'n', 'c', 'h', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', 'f', 'o', 'r', 'm', 'u', 'l', 'a', 'r', 'i', 'o', ' ', 'c', 'o', 'n', 't', 'i', 'n', 'u', 'o', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00230 */ HB_P_LINEOFFSET, 14,	/* 19 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', '1', ' ', '-', '>', ' ', 'C', 'h', 'e', 'q', 'u', 'e', ' ', 'f', 'o', 'r', 'm', '.', ' ', 'C', 'o', 'n', 't', 'i', 'n', 'u', 'o', ' ', '2', ' ', 0, 
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'*', '*', ' ', 'P', 'r', 'e', 'e', 'n', 'c', 'h', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', 'f', 'o', 'r', 'm', 'u', 'l', 'a', 'r', 'i', 'o', ' ', 'c', 'o', 'n', 't', 'i', 'n', 'u', 'o', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00348 */ HB_P_LINEOFFSET, 16,	/* 21 */
	HB_P_PUSHSYMNEAR, 5,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 00362 */ HB_P_LINEOFFSET, 17,	/* 22 */
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
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00389) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00394) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OPCAO */
/* 00407 */ HB_P_LINEOFFSET, 18,	/* 23 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00415 */ HB_P_LINEOFFSET, 19,	/* 24 */
	HB_P_PUSHSYMNEAR, 8,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00439) */
/* 00427 */ HB_P_LINEOFFSET, 20,	/* 25 */
	HB_P_PUSHSYMNEAR, 9,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00434 */ HB_P_LINEOFFSET, 21,	/* 26 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00439 */ HB_P_LINEOFFSET, 25,	/* 30 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00459) */
/* 00447 */ HB_P_LINEOFFSET, 27,	/* 32 */
	HB_P_PUSHSYMNEAR, 10,	/* SACPCHEQ */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 153, 254,	/* -359 (abs: 00097) */
/* 00459 */ HB_P_LINEOFFSET, 28,	/* 33 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00478) */
/* 00468 */ HB_P_LINEOFFSET, 30,	/* 35 */
	HB_P_PUSHSYMNEAR, 10,	/* SACPCHEQ */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 134, 254,	/* -378 (abs: 00097) */
/* 00478 */ HB_P_LINEOFFSET, 31,	/* 36 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 124, 254,	/* -388 (abs: 00097) */
	HB_P_JUMP, 121, 254,	/* -391 (abs: 00097) */
	HB_P_ENDPROC
/* 00492 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

