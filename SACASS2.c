/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACASS2.PRG>
 * Command: C:\xharbour997\bin\harbour.exe C:\helio\siachb\SACASS2.PRG /q /oC:\helio\siachb\SACASS2.c /M /N /B 
 * Created: 2018.04.09 19:27:17 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACASS2.PRG"

HB_FUNC( SACASS2 );
HB_FUNC_INITLINES();
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SACASS20 );
HB_FUNC_EXTERN( SACASS21 );
HB_FUNC_EXTERN( __DBGENTRY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACASS2 )
{ "SACASS2", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACASS2 )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "SACASS20", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACASS20 )}, NULL },
{ "SACASS21", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACASS21 )}, NULL },
{ "__DBGENTRY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGENTRY )}, NULL },
{ "(_INITLINES)", {HB_FS_INITEXIT}, {hb_INITLINES}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACASS2 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACASS2
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACASS2 = hb_vm_SymbolInit_SACASS2;
   #pragma data_seg()
#endif

HB_FUNC( SACASS2 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 1,	/* locals, params */
	HB_P_MODULENAME,	/* SACASS2.PRG:SACASS2 */
 'S', 'A', 'C', 'A', 'S', 'S', '2', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', 'A', 'S', 'S', '2', 0,
	HB_P_LOCALNAME, 1, 0,	/* MTP */
 'M', 'T', 'P', 0,
	HB_P_MODULENAME,	/* C:\helio\siachb\SACASS2.PRG: */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', 'A', 'S', 'S', '2', '.', 'P', 'R', 'G', ':', 0,
/* 00061 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_LOCALNAME, 2, 0,	/* MPRG */
 'M', 'P', 'R', 'G', 0,
	HB_P_LOCALNEARSETSTR, 2, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', 'A', 'S', 'S', '2', 0, 
	HB_P_LOCALNAME, 3, 0,	/* MTELA */
 'M', 'T', 'E', 'L', 'A', 0,
	HB_P_LOCALNAME, 4, 0,	/* LCI */
 'L', 'C', 'I', 0,
	HB_P_LOCALNAME, 5, 0,	/* CCI */
 'C', 'C', 'I', 0,
	HB_P_LOCALNAME, 6, 0,	/* LBA */
 'L', 'B', 'A', 0,
	HB_P_LOCALNAME, 7, 0,	/* CBA */
 'C', 'B', 'A', 0,
	HB_P_LOCALNAME, 8, 0,	/* OPCAO */
 'O', 'P', 'C', 'A', 'O', 0,
/* 00130 */ HB_P_LINEOFFSET, 2,	/* 9 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* LCI 0*/
/* 00136 */ HB_P_LINEOFFSET, 3,	/* 10 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* CCI 0*/
/* 00142 */ HB_P_LINEOFFSET, 4,	/* 11 */
	HB_P_LOCALNEARSETINT, 6, 2, 0,	/* LBA 2*/
/* 00148 */ HB_P_LINEOFFSET, 5,	/* 12 */
	HB_P_LOCALNEARSETINT, 7, 25, 0,	/* CBA 25*/
/* 00154 */ HB_P_LINEOFFSET, 6,	/* 13 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_PUSHLOCALNEAR, 6,	/* LBA */
	HB_P_PUSHLOCALNEAR, 7,	/* CBA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', 'S', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00205) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 'S', 'S', 'I', 'S', 'T', 'E', 'N', 'C', 'I', 'A', 0, 
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 00219) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'O', 'L', 'I', 'C', 'I', 'T', 'A', 'C', 'A', 'O', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 6,
/* 00227 */ HB_P_LINEOFFSET, 8,	/* 15 */
/* 00229 */ HB_P_LINEOFFSET, 9,	/* 16 */
	HB_P_PUSHSYMNEAR, 2,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00238 */ HB_P_LINEOFFSET, 10,	/* 17 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00246 */ HB_P_LINEOFFSET, 11,	/* 18 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00281) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 's', 's', 'i', 's', 't', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 00295) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'c', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'e', 'm', ' ', 'A', 'b', 'e', 'r', 't', 'o', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00318 */ HB_P_LINEOFFSET, 12,	/* 19 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00356) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 's', 's', 'i', 's', 't', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 00370) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'c', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', 'B', 'a', 'i', 'x', 'a', 'd', 'o', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00393 */ HB_P_LINEOFFSET, 14,	/* 21 */
	HB_P_PUSHSYMNEAR, 5,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 00407 */ HB_P_LINEOFFSET, 15,	/* 22 */
	HB_P_PUSHSYMNEAR, 6,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 83, 0,	/* 83 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* OPCAO */
	HB_P_MODULENAME,	/* C:\helio\siachb\SACASS2.PRG:SACASS2 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', 'A', 'S', 'S', '2', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', 'A', 'S', 'S', '2', 0,
	HB_P_LOCALNAME, 255, 255,	/* OPCAO */
 'O', 'P', 'C', 'A', 'O', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
/* 00473 */ HB_P_LINE, 22, 0,	/* 22 */
	HB_P_PUSHSYMNEAR, 7,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00489) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00494) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 8,	/* OPCAO */
/* 00507 */ HB_P_LINEOFFSET, 17,	/* 24 */
	HB_P_PUSHSYMNEAR, 8,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00531) */
/* 00519 */ HB_P_LINEOFFSET, 18,	/* 25 */
	HB_P_PUSHSYMNEAR, 9,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00526 */ HB_P_LINEOFFSET, 19,	/* 26 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00531 */ HB_P_LINEOFFSET, 22,	/* 29 */
/* 00533 */ HB_P_LINEOFFSET, 23,	/* 30 */
	HB_P_PUSHLOCALNEAR, 8,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00553) */
/* 00541 */ HB_P_LINEOFFSET, 25,	/* 32 */
	HB_P_PUSHSYMNEAR, 10,	/* SACASS20 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 189, 254,	/* -323 (abs: 00227) */
/* 00553 */ HB_P_LINEOFFSET, 26,	/* 33 */
	HB_P_PUSHLOCALNEAR, 8,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 179, 254,	/* -333 (abs: 00227) */
/* 00563 */ HB_P_LINEOFFSET, 28,	/* 35 */
	HB_P_PUSHSYMNEAR, 11,	/* SACASS21 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 167, 254,	/* -345 (abs: 00227) */
	HB_P_ENDPROC
/* 00576 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_INITLINES()
{
   static const BYTE pcode[] =
   {
	HB_P_MODULENAME,	/* SACASS2 */
 'S', 'A', 'C', 'A', 'S', 'S', '2', 0,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', ':', 92, 'h', 'e', 'l', 'i', 'o', 92, 's', 'i', 'a', 'c', 'h', 'b', 92, 'S', 'A', 'C', 'A', 'S', 'S', '2', '.', 'P', 'R', 'G', 0, 
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	144, 190, 'o', 'g', 203, 0, 
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00056 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

