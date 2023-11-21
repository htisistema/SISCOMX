/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACOS1.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SACOS1.PRG /q /oC:\hti\SISCOM\SACOS1.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.11.21 09:47:31 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACOS1.PRG"

HB_FUNC( SACOS1 );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SACOS11 );
HB_FUNC_EXTERN( SACOS15 );
HB_FUNC_EXTERN( OS_PROD );
HB_FUNC_EXTERN( SACOS2 );
HB_FUNC_EXTERN( SACOS5 );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACOS1 )
{ "SACOS1", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACOS1 )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "SACOS11", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACOS11 )}, NULL },
{ "SACOS15", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACOS15 )}, NULL },
{ "OS_PROD", {HB_FS_PUBLIC}, {HB_FUNCNAME( OS_PROD )}, NULL },
{ "SACOS2", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACOS2 )}, NULL },
{ "SACOS5", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACOS5 )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACOS1 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACOS1
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACOS1 = hb_vm_SymbolInit_SACOS1;
   #pragma data_seg()
#endif

HB_FUNC( SACOS1 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 11, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 5, 0,	/* 5 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', 'O', 'S', '1', 0, 
/* 00017 */ HB_P_LINEOFFSET, 2,	/* 7 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* LCI 0*/
/* 00023 */ HB_P_LINEOFFSET, 3,	/* 8 */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* CCI 0*/
/* 00029 */ HB_P_LINEOFFSET, 4,	/* 9 */
	HB_P_LOCALNEARSETINT, 7, 8, 0,	/* LBA 8*/
/* 00035 */ HB_P_LINEOFFSET, 5,	/* 10 */
	HB_P_LOCALNEARSETINT, 8, 32, 0,	/* CBA 32*/
/* 00041 */ HB_P_LINEOFFSET, 6,	/* 11 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* OPCAO 0*/
/* 00047 */ HB_P_LINEOFFSET, 7,	/* 12 */
	HB_P_PUSHSYMNEAR, 1,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 11,	/* MTRACO */
/* 00062 */ HB_P_LINEOFFSET, 8,	/* 13 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'O', 'R', 'D', 'E', 'M', ' ', 'D', 'E', ' ', 'S', 'E', 'R', 'V', 'I', 'C', 'O', 'S', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00099 */ HB_P_LINEOFFSET, 10,	/* 15 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00108 */ HB_P_LINEOFFSET, 11,	/* 16 */
	HB_P_PUSHSYMNEAR, 4,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'a', ' ', 'O', 'p', 'c', 'a', 'o', ' ', 'd', 'e', ' ', 'D', 'e', 's', 'e', 'j', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00144 */ HB_P_LINEOFFSET, 12,	/* 17 */
	HB_P_PUSHSYMNEAR, 5,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 00153 */ HB_P_LINEOFFSET, 13,	/* 18 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', '0', ' ', '-', '>', ' ', 'S', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'c', 'a', 'o', ' ', 'O', '.', 'S', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00201 */ HB_P_LINEOFFSET, 14,	/* 19 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', '1', ' ', '-', '>', ' ', '2', 'a', '.', 'V', 'i', 'a', ' ', 'd', 'a', ' ', 'O', '.', 'S', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00252 */ HB_P_LINEOFFSET, 15,	/* 20 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', '2', ' ', '-', '>', ' ', 'D', 'i', 'a', 'g', 'n', 'o', 's', 't', 'i', 'c', 'o', ' ', 'T', 'E', 'C', 'N', 'I', 'C', 'O', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00303 */ HB_P_LINEOFFSET, 16,	/* 21 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', '3', ' ', '-', '>', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00354 */ HB_P_LINEOFFSET, 17,	/* 22 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', '4', ' ', '-', '>', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', 'd', 'a', ' ', 'O', '.', 'S', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00405 */ HB_P_LINEOFFSET, 18,	/* 23 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', '5', ' ', '-', '>', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'd', 'a', ' ', 'O', '.', 'S', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00456 */ HB_P_LINEOFFSET, 19,	/* 24 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', '6', ' ', '-', '>', ' ', 'C', 'a', 'n', 'c', 'e', 'l', 'a', 'r', ' ', 'O', '.', 'S', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00507 */ HB_P_LINEOFFSET, 20,	/* 25 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', '7', ' ', '-', '>', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', ' ', 'd', 'e', ' ', 'A', 'c', 'e', 's', 's', 'o', 'r', 'i', 'o', 's', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00558 */ HB_P_LINEOFFSET, 21,	/* 26 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', '8', ' ', '-', '>', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', 's', ' ', 'd', 'a', ' ', 'O', '.', 'S', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00609 */ HB_P_LINEOFFSET, 22,	/* 27 */
	HB_P_PUSHSYMNEAR, 7,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 8,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00636) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00641) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* OPCAO */
/* 00654 */ HB_P_LINEOFFSET, 23,	/* 28 */
	HB_P_PUSHSYMNEAR, 5,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00662 */ HB_P_LINEOFFSET, 25,	/* 30 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00686) */
/* 00674 */ HB_P_LINEOFFSET, 26,	/* 31 */
	HB_P_PUSHSYMNEAR, 10,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00681 */ HB_P_LINEOFFSET, 27,	/* 32 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00686 */ HB_P_LINEOFFSET, 31,	/* 36 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00704) */
/* 00694 */ HB_P_LINEOFFSET, 33,	/* 38 */
	HB_P_PUSHSYMNEAR, 11,	/* SACOS11 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 166, 253,	/* -602 (abs: 00099) */
/* 00704 */ HB_P_LINEOFFSET, 34,	/* 39 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00727) */
/* 00713 */ HB_P_LINEOFFSET, 36,	/* 41 */
	HB_P_PUSHSYMNEAR, 12,	/* SACOS15 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 143, 253,	/* -625 (abs: 00099) */
/* 00727 */ HB_P_LINEOFFSET, 37,	/* 42 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00750) */
/* 00736 */ HB_P_LINEOFFSET, 39,	/* 44 */
	HB_P_PUSHSYMNEAR, 12,	/* SACOS15 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 120, 253,	/* -648 (abs: 00099) */
/* 00750 */ HB_P_LINEOFFSET, 40,	/* 45 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00769) */
/* 00759 */ HB_P_LINEOFFSET, 42,	/* 47 */
	HB_P_PUSHSYMNEAR, 13,	/* OS_PROD */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 101, 253,	/* -667 (abs: 00099) */
/* 00769 */ HB_P_LINEOFFSET, 43,	/* 48 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00788) */
/* 00778 */ HB_P_LINEOFFSET, 45,	/* 50 */
	HB_P_PUSHSYMNEAR, 12,	/* SACOS15 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 82, 253,	/* -686 (abs: 00099) */
/* 00788 */ HB_P_LINEOFFSET, 46,	/* 51 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00811) */
/* 00797 */ HB_P_LINEOFFSET, 48,	/* 53 */
	HB_P_PUSHSYMNEAR, 12,	/* SACOS15 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 59, 253,	/* -709 (abs: 00099) */
/* 00811 */ HB_P_LINEOFFSET, 49,	/* 54 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00834) */
/* 00820 */ HB_P_LINEOFFSET, 51,	/* 56 */
	HB_P_PUSHSYMNEAR, 12,	/* SACOS15 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 36, 253,	/* -732 (abs: 00099) */
/* 00834 */ HB_P_LINEOFFSET, 52,	/* 57 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00857) */
/* 00843 */ HB_P_LINEOFFSET, 54,	/* 59 */
	HB_P_PUSHSYMNEAR, 14,	/* SACOS2 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 13, 253,	/* -755 (abs: 00099) */
/* 00857 */ HB_P_LINEOFFSET, 55,	/* 60 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 3, 253,	/* -765 (abs: 00099) */
/* 00867 */ HB_P_LINEOFFSET, 57,	/* 62 */
	HB_P_PUSHSYMNEAR, 15,	/* SACOS5 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 249, 252,	/* -775 (abs: 00099) */
	HB_P_ENDPROC
/* 00878 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

