/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACEXP.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SACEXP.PRG /q /oC:\hti\SISCOM\SACEXP.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:17 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACEXP.PRG"

HB_FUNC( SACEXP );
HB_FUNC( SACEXPM );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SACEXP1 );
HB_FUNC_EXTERN( SACEXP11 );
HB_FUNC_EXTERN( SACEXP3 );
HB_FUNC_EXTERN( SACENTRE );
HB_FUNC_EXTERN( SAVESCREEN );
HB_FUNC_EXTERN( SCROLL );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( RESTSCREEN );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( SACEXP2 );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACEXP )
{ "SACEXP", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACEXP )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "SACEXP1", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACEXP1 )}, NULL },
{ "SACEXP11", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACEXP11 )}, NULL },
{ "SACEXP3", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACEXP3 )}, NULL },
{ "SACENTRE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACENTRE )}, NULL },
{ "SACEXPM", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SACEXPM )}, NULL },
{ "SAVESCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAVESCREEN )}, NULL },
{ "SCROLL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SCROLL )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "RESTSCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( RESTSCREEN )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "SACEXP2", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACEXP2 )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACEXP )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACEXP
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACEXP = hb_vm_SymbolInit_SACEXP;
   #pragma data_seg()
#endif

HB_FUNC( SACEXP )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 4, 0,	/* 4 */
	HB_P_LOCALNEARSETSTR, 2, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', 'E', 'X', 'P', 0, 
/* 00017 */ HB_P_LINEOFFSET, 2,	/* 6 */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_POPLOCALNEAR, 5,	/* LCI */
/* 00027 */ HB_P_LINEOFFSET, 3,	/* 7 */
	HB_P_LOCALNEARSETINT, 7, 3, 0,	/* LBA 3*/
/* 00033 */ HB_P_LINEOFFSET, 4,	/* 8 */
	HB_P_LOCALNEARSETINT, 8, 25, 0,	/* CBA 25*/
/* 00039 */ HB_P_LINEOFFSET, 5,	/* 9 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'E', 'x', 'p', 'e', 'd', 'i', 'c', 'a', 'o', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00079 */ HB_P_LINEOFFSET, 8,	/* 12 */
	HB_P_PUSHSYMNEAR, 2,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00088 */ HB_P_LINEOFFSET, 9,	/* 13 */
	HB_P_PUSHSYMNEAR, 3,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'a', ' ', 'o', 'p', 'c', 'a', 'o', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00125 */ HB_P_LINEOFFSET, 10,	/* 14 */
	HB_P_PUSHSYMNEAR, 4,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 00134 */ HB_P_LINEOFFSET, 11,	/* 15 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	' ', 'E', 'x', 'p', 'e', 'd', 'i', 'c', 'a', 'o', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'G', 'e', 'r', 'a', 'l', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00188 */ HB_P_LINEOFFSET, 12,	/* 16 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	' ', 'E', 'x', 'p', 'e', 'd', 'i', 'c', 'a', 'o', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'P', 'a', 'r', 'c', 'i', 'a', 'l', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00245 */ HB_P_LINEOFFSET, 13,	/* 17 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	' ', 'E', 's', 't', 'o', 'r', 'n', 'o', ' ', 'd', 'e', ' ', 'E', 'x', 'p', 'e', 'd', 'i', 'c', 'a', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00302 */ HB_P_LINEOFFSET, 14,	/* 18 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	' ', 'E', 'n', 't', 'r', 'e', 'g', 'a', ' ', 'd', 'e', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00359 */ HB_P_LINEOFFSET, 17,	/* 21 */
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 00373 */ HB_P_LINEOFFSET, 18,	/* 22 */
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
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00400) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00405) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* OPCAO */
/* 00418 */ HB_P_LINEOFFSET, 19,	/* 23 */
	HB_P_PUSHSYMNEAR, 4,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00426 */ HB_P_LINEOFFSET, 20,	/* 24 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00450) */
/* 00438 */ HB_P_LINEOFFSET, 21,	/* 25 */
	HB_P_PUSHSYMNEAR, 10,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00445 */ HB_P_LINEOFFSET, 22,	/* 26 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00450 */ HB_P_LINEOFFSET, 25,	/* 29 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00468) */
/* 00458 */ HB_P_LINEOFFSET, 27,	/* 31 */
	HB_P_PUSHSYMNEAR, 11,	/* SACEXP1 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 126, 254,	/* -386 (abs: 00079) */
/* 00468 */ HB_P_LINEOFFSET, 28,	/* 32 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00487) */
/* 00477 */ HB_P_LINEOFFSET, 30,	/* 34 */
	HB_P_PUSHSYMNEAR, 12,	/* SACEXP11 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 107, 254,	/* -405 (abs: 00079) */
/* 00487 */ HB_P_LINEOFFSET, 31,	/* 35 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00506) */
/* 00496 */ HB_P_LINEOFFSET, 33,	/* 37 */
	HB_P_PUSHSYMNEAR, 13,	/* SACEXP3 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 88, 254,	/* -424 (abs: 00079) */
/* 00506 */ HB_P_LINEOFFSET, 34,	/* 38 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 78, 254,	/* -434 (abs: 00079) */
/* 00516 */ HB_P_LINEOFFSET, 36,	/* 40 */
	HB_P_PUSHSYMNEAR, 14,	/* SACENTRE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 68, 254,	/* -444 (abs: 00079) */
	HB_P_ENDPROC
/* 00527 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SACEXPM )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 53, 0,	/* 53 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', 'E', 'X', 'P', 'M', 0, 
/* 00018 */ HB_P_LINEOFFSET, 2,	/* 55 */
	HB_P_LOCALNEARSETINT, 3, 10, 0,	/* LCI 10*/
/* 00024 */ HB_P_LINEOFFSET, 3,	/* 56 */
	HB_P_LOCALNEARSETINT, 4, 25, 0,	/* CCI 25*/
/* 00030 */ HB_P_LINEOFFSET, 4,	/* 57 */
	HB_P_LOCALNEARSETINT, 5, 13, 0,	/* LBA 13*/
/* 00036 */ HB_P_LINEOFFSET, 5,	/* 58 */
	HB_P_LOCALNEARSETINT, 6, 57, 0,	/* CBA 57*/
/* 00042 */ HB_P_LINEOFFSET, 6,	/* 59 */
	HB_P_PUSHSYMNEAR, 16,	/* SAVESCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 2,	/* MTELA */
/* 00057 */ HB_P_LINEOFFSET, 9,	/* 62 */
	HB_P_PUSHSYMNEAR, 2,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00066 */ HB_P_LINEOFFSET, 10,	/* 63 */
	HB_P_PUSHSYMNEAR, 17,	/* SCROLL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_DOSHORT, 4,
	HB_P_PUSHSYMNEAR, 18,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00088 */ HB_P_LINEOFFSET, 11,	/* 64 */
	HB_P_PUSHSYMNEAR, 19,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'M', 'E', 'N', 'U', ' ', 'D', 'E', ' ', 'E', 'X', 'P', 'E', 'D', 'I', 'C', 'A', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', 0, 
	HB_P_DOSHORT, 6,
/* 00134 */ HB_P_LINEOFFSET, 12,	/* 65 */
	HB_P_PUSHSYMNEAR, 4,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 00143 */ HB_P_LINEOFFSET, 13,	/* 66 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', 'E', 'x', 'p', 'e', 'd', 'i', 'r', ' ', 'o', 'u', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'*', '*', ' ', 'E', 'x', 'p', 'e', 'd', 'i', 'c', 'a', 'o', ' ', 'o', 'u', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00254 */ HB_P_LINEOFFSET, 14,	/* 67 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', 'E', 's', 't', 'o', 'r', 'n', 'o', ' ', 'd', 'e', ' ', 'E', 'x', 'p', 'e', 'd', 'i', 'c', 'a', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	'*', '*', ' ', 'E', 's', 't', 'o', 'r', 'n', 'o', ' ', 'd', 'e', ' ', 'E', 'x', 'p', 'e', 'd', 'i', 'c', 'a', 'o', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00363 */ HB_P_LINEOFFSET, 15,	/* 68 */
	HB_P_PUSHSYMNEAR, 7,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 8,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00390) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00395) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 7,	/* OPCAO */
/* 00408 */ HB_P_LINEOFFSET, 16,	/* 69 */
	HB_P_PUSHSYMNEAR, 4,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00416 */ HB_P_LINEOFFSET, 17,	/* 70 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 00470) */
/* 00428 */ HB_P_LINEOFFSET, 18,	/* 71 */
	HB_P_PUSHSYMNEAR, 20,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTELA */
	HB_P_DOSHORT, 5,
/* 00443 */ HB_P_LINEOFFSET, 19,	/* 72 */
	HB_P_PUSHSYMNEAR, 21,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 22,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 23,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00465 */ HB_P_LINEOFFSET, 20,	/* 73 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00470 */ HB_P_LINEOFFSET, 24,	/* 77 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00488) */
/* 00478 */ HB_P_LINEOFFSET, 26,	/* 79 */
	HB_P_PUSHSYMNEAR, 24,	/* SACEXP2 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 84, 254,	/* -428 (abs: 00057) */
/* 00488 */ HB_P_LINEOFFSET, 27,	/* 80 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 74, 254,	/* -438 (abs: 00057) */
/* 00498 */ HB_P_LINEOFFSET, 29,	/* 82 */
	HB_P_PUSHSYMNEAR, 13,	/* SACEXP3 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 64, 254,	/* -448 (abs: 00057) */
	HB_P_ENDPROC
/* 00509 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

