/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACVEN1.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SACVEN1.PRG /q /oC:\hti\SISCOM\SACVEN1.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.11.21 09:47:35 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACVEN1.PRG"

HB_FUNC( SACVEN1 );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SAC23 );
HB_FUNC_EXTERN( SACTROCA );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( SET_KEY );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( F7_CLI );
HB_FUNC_EXTERN( SAC42 );
HB_FUNC_EXTERN( SAC210 );
HB_FUNC_EXTERN( SACENTRE );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACVEN1 )
{ "SACVEN1", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACVEN1 )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SAC23", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC23 )}, NULL },
{ "SACTROCA", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACTROCA )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "SET_KEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET_KEY )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "F7_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( F7_CLI )}, NULL },
{ "SAC42", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC42 )}, NULL },
{ "SAC210", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC210 )}, NULL },
{ "SACENTRE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACENTRE )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACVEN1 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACVEN1
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACVEN1 = hb_vm_SymbolInit_SACVEN1;
   #pragma data_seg()
#endif

HB_FUNC( SACVEN1 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 5, 0,	/* 5 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', 'V', 'E', 'N', '1', 0, 
/* 00018 */ HB_P_LINEOFFSET, 2,	/* 7 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_POPLOCALNEAR, 3,	/* LCI */
/* 00028 */ HB_P_LINEOFFSET, 3,	/* 8 */
	HB_P_LOCALNEARSETINT, 5, 12, 0,	/* LBA 12*/
/* 00034 */ HB_P_LINEOFFSET, 4,	/* 9 */
	HB_P_LOCALNEARSETINT, 6, 29, 0,	/* CBA 29*/
/* 00040 */ HB_P_LINEOFFSET, 5,	/* 10 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* OPCAO 0*/
/* 00046 */ HB_P_LINEOFFSET, 6,	/* 11 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 'V', 'E', 'N', 'D', 'A', 'S', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00072 */ HB_P_LINEOFFSET, 8,	/* 13 */
	HB_P_PUSHSYMNEAR, 2,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00081 */ HB_P_LINEOFFSET, 9,	/* 14 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 00090 */ HB_P_LINEOFFSET, 10,	/* 15 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', ' ', '0', ' ', '-', '>', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'*', '*', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00177 */ HB_P_LINEOFFSET, 11,	/* 16 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', ' ', '1', ' ', '-', '>', ' ', 'O', 'r', 'c', 'a', 'm', 'e', 'n', 't', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'*', '*', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'O', 'r', 'c', 'a', 'm', 'e', 'n', 't', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00270 */ HB_P_LINEOFFSET, 12,	/* 17 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', ' ', '2', ' ', '-', '>', ' ', 'T', 'r', 'o', 'c', 'a', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'*', '*', ' ', 'T', 'r', 'o', 'c', 'a', 's', ' ', 'd', 'e', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00363 */ HB_P_LINEOFFSET, 13,	/* 18 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', ' ', '3', ' ', '-', '>', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'*', '*', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00454 */ HB_P_LINEOFFSET, 14,	/* 19 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', ' ', '4', ' ', '-', '>', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'*', '*', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00546 */ HB_P_LINEOFFSET, 15,	/* 20 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', ' ', '5', ' ', '-', '>', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'N', '.', 'f', 'i', 's', 'c', 'a', 'l', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'*', '*', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'n', 'o', 't', 'a', ' ', 'f', 'i', 's', 'c', 'a', 'l', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00638 */ HB_P_LINEOFFSET, 16,	/* 21 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', ' ', '6', ' ', '-', '>', ' ', 'E', 'n', 't', 'r', 'e', 'g', 'a', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', 0, 
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'*', '*', ' ', 'E', 'n', 't', 'r', 'e', 'g', 'a', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00728 */ HB_P_LINEOFFSET, 18,	/* 23 */
	HB_P_PUSHSYMNEAR, 5,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 6,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00755) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00760) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OPCAO */
/* 00773 */ HB_P_LINEOFFSET, 19,	/* 24 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00781 */ HB_P_LINEOFFSET, 20,	/* 25 */
	HB_P_PUSHSYMNEAR, 7,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00796) */
	HB_P_JUMP, 111, 1,	/* 367 (abs: 01160) */
/* 00796 */ HB_P_LINEOFFSET, 24,	/* 29 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00820) */
/* 00804 */ HB_P_LINEOFFSET, 26,	/* 31 */
	HB_P_PUSHSYMNEAR, 8,	/* SAC23 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 4,
	HB_P_JUMP, 23, 253,	/* -745 (abs: 00072) */
/* 00820 */ HB_P_LINEOFFSET, 27,	/* 32 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00845) */
/* 00829 */ HB_P_LINEOFFSET, 29,	/* 34 */
	HB_P_PUSHSYMNEAR, 8,	/* SAC23 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 4,
	HB_P_JUMP, 254, 252,	/* -770 (abs: 00072) */
/* 00845 */ HB_P_LINEOFFSET, 30,	/* 35 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00864) */
/* 00854 */ HB_P_LINEOFFSET, 32,	/* 37 */
	HB_P_PUSHSYMNEAR, 9,	/* SACTROCA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 235, 252,	/* -789 (abs: 00072) */
/* 00864 */ HB_P_LINEOFFSET, 33,	/* 38 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 231, 0,	/* 231 (abs: 01102) */
/* 00874 */ HB_P_LINEOFFSET, 36,	/* 41 */
	HB_P_PUSHSYMNEAR, 10,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00903) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00903 */ HB_P_LINEOFFSET, 37,	/* 42 */
	HB_P_PUSHSYMNEAR, 10,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'e', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'e', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00930) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00930 */ HB_P_LINEOFFSET, 39,	/* 44 */
	HB_P_PUSHSYMNEAR, 10,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00957) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00957 */ HB_P_LINEOFFSET, 40,	/* 45 */
	HB_P_PUSHSYMNEAR, 10,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 't', 'a', 'b', 'm', 'e', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', 'a', 'b', 'm', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00988) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00988 */ HB_P_LINEOFFSET, 41,	/* 46 */
	HB_P_PUSHSYMNEAR, 10,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'r', 'e', 'g', 'i', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'r', 'e', 'g', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01015) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01015 */ HB_P_LINEOFFSET, 42,	/* 47 */
	HB_P_PUSHSYMNEAR, 10,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01044) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01044 */ HB_P_LINEOFFSET, 43,	/* 48 */
	HB_P_PUSHSYMNEAR, 11,	/* SET_KEY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 01061 */ HB_P_LINEOFFSET, 44,	/* 49 */
	HB_P_PUSHSYMNEAR, 12,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 13,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 1,
/* 01081 */ HB_P_LINEOFFSET, 45,	/* 50 */
	HB_P_PUSHSYMNEAR, 14,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01088 */ HB_P_LINEOFFSET, 47,	/* 52 */
	HB_P_PUSHSYMNEAR, 15,	/* F7_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 253, 251,	/* -1027 (abs: 00072) */
/* 01102 */ HB_P_LINEOFFSET, 48,	/* 53 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01121) */
/* 01111 */ HB_P_LINEOFFSET, 50,	/* 55 */
	HB_P_PUSHSYMNEAR, 16,	/* SAC42 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 234, 251,	/* -1046 (abs: 00072) */
/* 01121 */ HB_P_LINEOFFSET, 51,	/* 56 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01140) */
/* 01130 */ HB_P_LINEOFFSET, 53,	/* 58 */
	HB_P_PUSHSYMNEAR, 17,	/* SAC210 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 215, 251,	/* -1065 (abs: 00072) */
/* 01140 */ HB_P_LINEOFFSET, 54,	/* 59 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 205, 251,	/* -1075 (abs: 00072) */
/* 01150 */ HB_P_LINEOFFSET, 56,	/* 61 */
	HB_P_PUSHSYMNEAR, 18,	/* SACENTRE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 195, 251,	/* -1085 (abs: 00072) */
/* 01160 */ HB_P_LINEOFFSET, 59,	/* 64 */
	HB_P_PUSHSYMNEAR, 19,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01167 */ HB_P_LINEOFFSET, 60,	/* 65 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01172 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

