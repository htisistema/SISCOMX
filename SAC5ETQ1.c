/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5ETQ1.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC5ETQ1.PRG /q /oC:\hti\SISCOM\SAC5ETQ1.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:01 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5ETQ1.PRG"

HB_FUNC( SAC5ETQ1 );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SAC5ET11 );
HB_FUNC_EXTERN( SAC5ET12 );
HB_FUNC_EXTERN( SAC5ET14 );
HB_FUNC_EXTERN( SAC5ET16 );
HB_FUNC_EXTERN( SAC5ET17 );
HB_FUNC_EXTERN( SAC5ET19 );
HB_FUNC_EXTERN( SAC5ET20 );
HB_FUNC_EXTERN( SAC5ET21 );
HB_FUNC_EXTERN( SAC5ET22 );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5ETQ1 )
{ "SAC5ETQ1", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5ETQ1 )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SAC5ET11", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5ET11 )}, NULL },
{ "SAC5ET12", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5ET12 )}, NULL },
{ "SAC5ET14", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5ET14 )}, NULL },
{ "SAC5ET16", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5ET16 )}, NULL },
{ "SAC5ET17", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5ET17 )}, NULL },
{ "SAC5ET19", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5ET19 )}, NULL },
{ "SAC5ET20", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5ET20 )}, NULL },
{ "SAC5ET21", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5ET21 )}, NULL },
{ "SAC5ET22", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5ET22 )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5ETQ1 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5ETQ1
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5ETQ1 = hb_vm_SymbolInit_SAC5ETQ1;
   #pragma data_seg()
#endif

HB_FUNC( SAC5ETQ1 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', '5', 'E', 'T', 'Q', '1', 0, 
/* 00019 */ HB_P_LINEOFFSET, 2,	/* 10 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_POPLOCALNEAR, 3,	/* LCI */
/* 00029 */ HB_P_LINEOFFSET, 3,	/* 11 */
	HB_P_LOCALNEARSETINT, 5, 7, 0,	/* LBA 7*/
/* 00035 */ HB_P_LINEOFFSET, 4,	/* 12 */
	HB_P_LOCALNEARSETINT, 6, 28, 0,	/* CBA 28*/
/* 00041 */ HB_P_LINEOFFSET, 6,	/* 14 */
	HB_P_PUSHSYMNEAR, 1,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'g', 'r', 'u', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00071) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00071 */ HB_P_LINEOFFSET, 7,	/* 15 */
	HB_P_PUSHSYMNEAR, 1,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00100) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00100 */ HB_P_LINEOFFSET, 9,	/* 17 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00128 */ HB_P_LINEOFFSET, 12,	/* 20 */
	HB_P_PUSHSYMNEAR, 3,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'a', ' ', 'O', 'p', 'c', 'a', 'o', ' ', 'o', 'u', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00172 */ HB_P_LINEOFFSET, 13,	/* 21 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* OP_OPCAO 0*/
/* 00178 */ HB_P_LINEOFFSET, 14,	/* 22 */
	HB_P_PUSHSYMNEAR, 4,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00187 */ HB_P_LINEOFFSET, 15,	/* 23 */
	HB_P_PUSHSYMNEAR, 5,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 00196 */ HB_P_LINEOFFSET, 16,	/* 24 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', ' ', 'N', 'o', 'r', 'm', 'a', 'l', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00247 */ HB_P_LINEOFFSET, 17,	/* 25 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', ' ', 'P', 'e', 'q', 'u', 'e', 'n', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00301 */ HB_P_LINEOFFSET, 18,	/* 26 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', ' ', 'M', 'e', 'd', 'i', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00355 */ HB_P_LINEOFFSET, 19,	/* 27 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', ' ', 'R', 'o', 'u', 'p', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00409 */ HB_P_LINEOFFSET, 20,	/* 28 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', 'C', 'o', 'd', '.', 'B', 'a', 'r', 'r', 'a', ' ', '(', ' ', 'E', 'L', 'T', 'R', 'O', 'N', '/', 'Z', 'E', 'B', 'R', 'A', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00463 */ HB_P_LINEOFFSET, 21,	/* 29 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', 'C', 'o', 'd', '.', 'B', 'a', 'r', 'r', 'a', ' ', '(', ' ', 'B', 'E', 'E', 'T', 'L', 'E', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00517 */ HB_P_LINEOFFSET, 22,	/* 30 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', 'C', 'o', 'd', '.', 'B', 'a', 'r', 'r', 'a', ' ', '(', ' ', 'A', 'R', 'G', 'O', 'X', ' ', 'e', ' ', 'B', 'E', 'E', 'T', 'L', 'E', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00571 */ HB_P_LINEOFFSET, 23,	/* 31 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', 'C', 'o', 'd', '.', 'B', 'a', 'r', 'r', 'a', ' ', '(', ' ', 'J', 'A', 'T', 'O', ' ', 'D', 'E', ' ', 'T', 'I', 'N', 'T', 'A', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00625 */ HB_P_LINEOFFSET, 24,	/* 32 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', 'G', 'e', 'r', 'a', 'r', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'p', '/', 'I', 'm', 'p', 'o', 'r', 't', 'a', 'c', 'a', 'o', ' ', '(', 'Z', 'E', 'B', 'R', 'A', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00679 */ HB_P_LINEOFFSET, 26,	/* 34 */
	HB_P_PUSHSYMNEAR, 7,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* OP_OPCAO */
	HB_P_PUSHSYMNEAR, 8,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00706) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00711) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'o', 'p', '_', 'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OP_OPCAO */
/* 00727 */ HB_P_LINEOFFSET, 27,	/* 35 */
	HB_P_PUSHSYMNEAR, 5,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00735 */ HB_P_LINEOFFSET, 29,	/* 37 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00750) */
	HB_P_JUMP, 174, 0,	/* 174 (abs: 00921) */
/* 00750 */ HB_P_LINEOFFSET, 31,	/* 39 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP_OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00768) */
/* 00758 */ HB_P_LINEOFFSET, 32,	/* 40 */
	HB_P_PUSHSYMNEAR, 10,	/* SAC5ET11 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 131, 253,	/* -637 (abs: 00128) */
/* 00768 */ HB_P_LINEOFFSET, 33,	/* 41 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00787) */
/* 00777 */ HB_P_LINEOFFSET, 34,	/* 42 */
	HB_P_PUSHSYMNEAR, 11,	/* SAC5ET12 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 112, 253,	/* -656 (abs: 00128) */
/* 00787 */ HB_P_LINEOFFSET, 35,	/* 43 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00806) */
/* 00796 */ HB_P_LINEOFFSET, 36,	/* 44 */
	HB_P_PUSHSYMNEAR, 12,	/* SAC5ET14 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 93, 253,	/* -675 (abs: 00128) */
/* 00806 */ HB_P_LINEOFFSET, 37,	/* 45 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00825) */
/* 00815 */ HB_P_LINEOFFSET, 38,	/* 46 */
	HB_P_PUSHSYMNEAR, 13,	/* SAC5ET16 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 74, 253,	/* -694 (abs: 00128) */
/* 00825 */ HB_P_LINEOFFSET, 39,	/* 47 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00844) */
/* 00834 */ HB_P_LINEOFFSET, 40,	/* 48 */
	HB_P_PUSHSYMNEAR, 14,	/* SAC5ET17 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 55, 253,	/* -713 (abs: 00128) */
/* 00844 */ HB_P_LINEOFFSET, 41,	/* 49 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00863) */
/* 00853 */ HB_P_LINEOFFSET, 42,	/* 50 */
	HB_P_PUSHSYMNEAR, 15,	/* SAC5ET19 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 36, 253,	/* -732 (abs: 00128) */
/* 00863 */ HB_P_LINEOFFSET, 43,	/* 51 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00882) */
/* 00872 */ HB_P_LINEOFFSET, 44,	/* 52 */
	HB_P_PUSHSYMNEAR, 16,	/* SAC5ET20 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 17, 253,	/* -751 (abs: 00128) */
/* 00882 */ HB_P_LINEOFFSET, 45,	/* 53 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00901) */
/* 00891 */ HB_P_LINEOFFSET, 46,	/* 54 */
	HB_P_PUSHSYMNEAR, 17,	/* SAC5ET21 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 254, 252,	/* -770 (abs: 00128) */
/* 00901 */ HB_P_LINEOFFSET, 47,	/* 55 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 244, 252,	/* -780 (abs: 00128) */
/* 00911 */ HB_P_LINEOFFSET, 48,	/* 56 */
	HB_P_PUSHSYMNEAR, 18,	/* SAC5ET22 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 234, 252,	/* -790 (abs: 00128) */
/* 00921 */ HB_P_LINEOFFSET, 51,	/* 59 */
	HB_P_PUSHSYMNEAR, 19,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00928 */ HB_P_LINEOFFSET, 52,	/* 60 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00933 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

