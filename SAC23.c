/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC23.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\hti\SISCOM\SAC23.PRG /q /oC:\hti\SISCOM\SAC23.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.29 11:52:54 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC23.PRG"

HB_FUNC( SAC23 );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( SETKEY );
HB_FUNC_EXTERN( MENU_CONS );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SAC23PD1 );
HB_FUNC_EXTERN( SAC23ORC );
HB_FUNC_EXTERN( ALT_SENHA );
HB_FUNC_EXTERN( SAC23O2 );
HB_FUNC_EXTERN( SAC5PED1 );
HB_FUNC_EXTERN( SAC342 );
HB_FUNC_EXTERN( SAC342O );
HB_FUNC_EXTERN( SAC344 );
HB_FUNC_EXTERN( SACENTRE );
HB_FUNC_EXTERN( SACREORC );
HB_FUNC_EXTERN( SAC343 );
HB_FUNC_EXTERN( SAC350 );
HB_FUNC_EXTERN( SACEXP2 );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC23 )
{ "SAC23", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC23 )}, NULL },
{ "MCOD_COND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_COD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_MAT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_CBAR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "SETKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETKEY )}, NULL },
{ "MENU_CONS", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENU_CONS )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SAC23PD1", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC23PD1 )}, NULL },
{ "SAC23ORC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC23ORC )}, NULL },
{ "ALT_SENHA", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALT_SENHA )}, NULL },
{ "SAC23O2", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC23O2 )}, NULL },
{ "SAC5PED1", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5PED1 )}, NULL },
{ "SAC342", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC342 )}, NULL },
{ "SAC342O", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC342O )}, NULL },
{ "SAC344", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC344 )}, NULL },
{ "SACENTRE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACENTRE )}, NULL },
{ "SACREORC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACREORC )}, NULL },
{ "SAC343", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC343 )}, NULL },
{ "SAC350", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC350 )}, NULL },
{ "SACEXP2", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACEXP2 )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC23 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC23
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC23 = hb_vm_SymbolInit_SAC23;
   #pragma data_seg()
#endif

HB_FUNC( SAC23 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 5, 4,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_LOCALNEARSETSTR, 5, 6, 0,	/* MPRG 6*/
	'S', 'A', 'C', '2', '3', 0, 
/* 00016 */ HB_P_LINEOFFSET, 2,	/* 9 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 5,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MCOD_COND */
	HB_P_PUSHSYMNEAR, 2,	/* M_COD */
	HB_P_PUSHSYMNEAR, 3,	/* M_MAT */
	HB_P_PUSHSYMNEAR, 4,	/* M_CBAR */
	HB_P_DOSHORT, 4,
	HB_P_POPVARIABLE, 4, 0,	/* M_CBAR */
	HB_P_POPVARIABLE, 3, 0,	/* M_MAT */
	HB_P_POPVARIABLE, 2, 0,	/* M_COD */
	HB_P_POPVARIABLE, 1, 0,	/* MCOD_COND */
/* 00053 */ HB_P_LINEOFFSET, 4,	/* 11 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 7,	/* CCI */
	HB_P_POPLOCALNEAR, 6,	/* LCI */
/* 00063 */ HB_P_LINEOFFSET, 6,	/* 13 */
	HB_P_PUSHLOCALNEAR, 2,	/* ORC */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 00089) */
/* 00071 */ HB_P_LINEOFFSET, 7,	/* 14 */
	HB_P_LOCALNEARSETSTR, 9, 10, 0,	/* MT 10*/
	'P', 'E', 'D', 'I', 'D', 'O', ' ', ' ', ' ', 0, 
	HB_P_JUMPNEAR, 18,	/* 18 (abs: 00105) */
/* 00089 */ HB_P_LINEOFFSET, 9,	/* 16 */
	HB_P_LOCALNEARSETSTR, 9, 10, 0,	/* MT 10*/
	'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', 0, 
/* 00105 */ HB_P_LINEOFFSET, 11,	/* 18 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'M', 'E', 'N', 'U', ' ', 'D', 'E', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 9,	/* MT */
	HB_P_PLUS,
	HB_P_DOSHORT, 5,
/* 00134 */ HB_P_LINEOFFSET, 13,	/* 20 */
	HB_P_PUSHSYMNEAR, 7,	/* SETKEY */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	3, 0,	/* number of local parameters (3) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 8,	/* MENU_CONS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_PUSHLOCALNEAR, 3,	/* codeblockvar3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 2,
/* 00162 */ HB_P_LINEOFFSET, 14,	/* 21 */
	HB_P_PUSHSYMNEAR, 9,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00171 */ HB_P_LINEOFFSET, 15,	/* 22 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* OPCAO 0*/
/* 00177 */ HB_P_LINEOFFSET, 16,	/* 23 */
	HB_P_PUSHSYMNEAR, 10,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'a', ' ', 'o', 'p', 'c', 'a', 'o', ' ', 'o', 'u', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'r', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00222 */ HB_P_LINEOFFSET, 17,	/* 24 */
	HB_P_PUSHSYMNEAR, 11,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 00231 */ HB_P_LINEOFFSET, 18,	/* 25 */
	HB_P_PUSHSYMNEAR, 12,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LCI */
	HB_P_PUSHLOCALNEAR, 7,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', '0', '-', '>', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 9,	/* MT */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'*', '*', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 9,	/* MT */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00323 */ HB_P_LINEOFFSET, 19,	/* 26 */
	HB_P_PUSHSYMNEAR, 12,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 7,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', '1', '-', '>', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 9,	/* MT */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'*', '*', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 9,	/* MT */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'j', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'o', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00431 */ HB_P_LINEOFFSET, 20,	/* 27 */
	HB_P_PUSHSYMNEAR, 12,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 7,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', '2', '-', '>', ' ', '2', 'a', '.', 'v', 'i', 'a', ' ', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 9,	/* MT */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'*', '*', ' ', '2', 'a', '.', 'v', 'i', 'a', ' ', 'd', 'o', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 9,	/* MT */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00525 */ HB_P_LINEOFFSET, 21,	/* 28 */
	HB_P_PUSHSYMNEAR, 12,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 7,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', '4', '-', '>', ' ', 'C', 'a', 'n', 'c', 'e', 'l', 'a', 'r', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 9,	/* MT */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'*', '*', ' ', 'C', 'a', 'n', 'c', 'e', 'l', 'a', 'r', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 9,	/* MT */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00618 */ HB_P_LINEOFFSET, 22,	/* 29 */
	HB_P_PUSHSYMNEAR, 12,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 7,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', '5', '-', '>', ' ', 'E', 's', 't', 'o', 'r', 'n', 'o', ' ', 'C', 'a', 'n', 'c', 'e', 'l', 'a', 'm', 'e', 'n', 't', 'o', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'*', '*', ' ', 'E', 's', 't', 'o', 'r', 'n', 'o', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', 'C', 'a', 'n', 'c', 'e', 'l', 'a', 'd', 'o', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 9,	/* MT */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00730 */ HB_P_LINEOFFSET, 23,	/* 30 */
	HB_P_PUSHLOCALNEAR, 9,	/* MT */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 191, 0,	/* 191 (abs: 00935) */
/* 00747 */ HB_P_LINEOFFSET, 24,	/* 31 */
	HB_P_PUSHSYMNEAR, 12,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 7,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', '6', '-', '>', ' ', 'E', 'n', 't', 'r', 'e', 'g', 'a', ' ', 'd', 'e', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'*', '*', ' ', 'E', 'n', 't', 'r', 'e', 'g', 'a', ' ', 'd', 'e', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00841 */ HB_P_LINEOFFSET, 25,	/* 32 */
	HB_P_PUSHSYMNEAR, 12,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 7,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', '7', '-', '>', ' ', 'T', 'A', 'L', 'A', 'O', ' ', 'p', 'a', 'r', 'a', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'*', '*', ' ', 'E', 'n', 't', 'r', 'e', 'g', 'a', ' ', 'd', 'e', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00935 */ HB_P_LINEOFFSET, 27,	/* 34 */
	HB_P_PUSHLOCALNEAR, 9,	/* MT */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 207, 0,	/* 207 (abs: 01159) */
/* 00955 */ HB_P_LINEOFFSET, 28,	/* 35 */
	HB_P_PUSHSYMNEAR, 12,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 7,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', '6', '-', '>', ' ', '2', 'a', '.', 'V', 'i', 'a', ' ', 'R', 'e', 's', 't', 'a', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 58,	/* 58 */
	'*', '*', ' ', '2', 'a', '.', ' ', 'v', 'i', 'a', ' ', 'd', 'o', ' ', 'R', 'e', 's', 't', 'a', 'n', 't', 'e', ' ', 'd', 'o', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01063 */ HB_P_LINEOFFSET, 29,	/* 36 */
	HB_P_PUSHSYMNEAR, 12,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 7,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', '7', '-', '>', ' ', 'E', 's', 't', 'o', 'r', 'n', 'o', 'r', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'*', '*', ' ', 'E', 's', 't', 'o', 'r', 'n', 'o', ' ', 'd', 'o', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01159 */ HB_P_LINEOFFSET, 31,	/* 38 */
	HB_P_PUSHSYMNEAR, 12,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 7,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', '8', '-', '>', ' ', 'L', 'i', 'b', 'e', 'r', 'a', 'r', ' ', 'o', 'u', ' ', 'C', 'a', 'n', 'c', 'e', 'l', 'a', 'r', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'*', '*', ' ', 'L', 'i', 'b', 'e', 'r', 'a', 'r', ' ', 'o', 'u', ' ', 'C', 'a', 'n', 'c', 'e', 'l', 'a', 'r', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01262 */ HB_P_LINEOFFSET, 32,	/* 39 */
	HB_P_PUSHSYMNEAR, 12,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 7,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', '9', '-', '>', ' ', 'E', 's', 't', 'o', 'r', 'n', 'o', ' ', 'd', 'e', ' ', 'L', 'i', 'b', 'e', 'r', 'a', 'c', 'a', 'o', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'*', '*', ' ', 'E', 's', 't', 'o', 'r', 'n', 'o', ' ', 'd', 'e', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', 'L', 'I', 'B', 'E', 'R', 'A', 'D', 'O', 'S', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01366 */ HB_P_LINEOFFSET, 33,	/* 40 */
	HB_P_PUSHSYMNEAR, 12,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 7,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'A', '-', '>', ' ', 'R', 'e', '-', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'F', 'r', 'e', 'n', 't', 'e', ' ', 'L', 'o', 'j', 'a', 0, 
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'*', '*', ' ', 'E', 's', 't', 'o', 'r', 'n', 'o', ' ', 'd', 'e', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', 'L', 'I', 'B', 'E', 'R', 'A', 'D', 'O', 'S', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01470 */ HB_P_LINEOFFSET, 34,	/* 41 */
	HB_P_PUSHSYMNEAR, 13,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 01484 */ HB_P_LINEOFFSET, 35,	/* 42 */
	HB_P_PUSHSYMNEAR, 14,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 15,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01511) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01516) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 8,	/* OPCAO */
/* 01529 */ HB_P_LINEOFFSET, 36,	/* 43 */
	HB_P_PUSHSYMNEAR, 11,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01537 */ HB_P_LINEOFFSET, 38,	/* 45 */
	HB_P_PUSHSYMNEAR, 16,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01552) */
	HB_P_JUMP, 14, 2,	/* 526 (abs: 02075) */
/* 01552 */ HB_P_LINEOFFSET, 42,	/* 49 */
	HB_P_PUSHLOCALNEAR, 8,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 77,	/* 77 (abs: 01635) */
/* 01560 */ HB_P_LINEOFFSET, 43,	/* 50 */
	HB_P_PUSHLOCALNEAR, 1,	/* V */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 01594) */
/* 01568 */ HB_P_LINEOFFSET, 44,	/* 51 */
	HB_P_PUSHLOCALNEAR, 2,	/* ORC */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 01585) */
/* 01576 */ HB_P_LINEOFFSET, 45,	/* 52 */
	HB_P_PUSHSYMNEAR, 17,	/* SAC23PD1 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 20,	/* 20 (abs: 01603) */
/* 01585 */ HB_P_LINEOFFSET, 47,	/* 54 */
	HB_P_PUSHSYMNEAR, 18,	/* SAC23ORC */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 11,	/* 11 (abs: 01603) */
/* 01594 */ HB_P_LINEOFFSET, 50,	/* 57 */
	HB_P_PUSHSYMNEAR, 17,	/* SAC23PD1 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
/* 01603 */ HB_P_LINEOFFSET, 52,	/* 59 */
	HB_P_PUSHSYMNEAR, 7,	/* SETKEY */
	HB_P_PUSHNIL,
	HB_P_PUSHINT, 31, 1,	/* 287 */
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	3, 0,	/* number of local parameters (3) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 19,	/* ALT_SENHA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_PUSHLOCALNEAR, 3,	/* codeblockvar3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 38, 250,	/* -1498 (abs: 00134) */
/* 01635 */ HB_P_LINEOFFSET, 53,	/* 60 */
	HB_P_PUSHLOCALNEAR, 8,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 01678) */
/* 01644 */ HB_P_LINEOFFSET, 54,	/* 61 */
	HB_P_PUSHLOCALNEAR, 2,	/* ORC */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 01668) */
/* 01652 */ HB_P_LINEOFFSET, 55,	/* 62 */
	HB_P_PUSHSYMNEAR, 17,	/* SAC23PD1 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 3,
	HB_P_JUMP, 151, 1,	/* 407 (abs: 02072) */
/* 01668 */ HB_P_LINEOFFSET, 57,	/* 64 */
	HB_P_PUSHSYMNEAR, 20,	/* SAC23O2 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 251, 249,	/* -1541 (abs: 00134) */
/* 01678 */ HB_P_LINEOFFSET, 59,	/* 66 */
	HB_P_PUSHLOCALNEAR, 8,	/* OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 01717) */
/* 01687 */ HB_P_LINEOFFSET, 60,	/* 67 */
	HB_P_PUSHLOCALNEAR, 2,	/* ORC */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01705) */
/* 01695 */ HB_P_LINEOFFSET, 61,	/* 68 */
	HB_P_PUSHSYMNEAR, 21,	/* SAC5PED1 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 114, 1,	/* 370 (abs: 02072) */
/* 01705 */ HB_P_LINEOFFSET, 63,	/* 70 */
	HB_P_PUSHSYMNEAR, 21,	/* SAC5PED1 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 212, 249,	/* -1580 (abs: 00134) */
/* 01717 */ HB_P_LINEOFFSET, 65,	/* 72 */
	HB_P_PUSHLOCALNEAR, 8,	/* OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 01770) */
/* 01726 */ HB_P_LINEOFFSET, 66,	/* 73 */
	HB_P_PUSHLOCALNEAR, 2,	/* ORC */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 01752) */
/* 01734 */ HB_P_LINEOFFSET, 67,	/* 74 */
	HB_P_PUSHSYMNEAR, 22,	/* SAC342 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 's', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 67, 1,	/* 323 (abs: 02072) */
/* 01752 */ HB_P_LINEOFFSET, 69,	/* 76 */
	HB_P_PUSHSYMNEAR, 23,	/* SAC342O */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'r', 'c', 'a', 'm', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 159, 249,	/* -1633 (abs: 00134) */
/* 01770 */ HB_P_LINEOFFSET, 71,	/* 78 */
	HB_P_PUSHLOCALNEAR, 8,	/* OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 01823) */
/* 01779 */ HB_P_LINEOFFSET, 72,	/* 79 */
	HB_P_PUSHLOCALNEAR, 2,	/* ORC */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 01805) */
/* 01787 */ HB_P_LINEOFFSET, 73,	/* 80 */
	HB_P_PUSHSYMNEAR, 24,	/* SAC344 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 's', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 14, 1,	/* 270 (abs: 02072) */
/* 01805 */ HB_P_LINEOFFSET, 75,	/* 82 */
	HB_P_PUSHSYMNEAR, 24,	/* SAC344 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'r', 'c', 'a', 'm', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 106, 249,	/* -1686 (abs: 00134) */
/* 01823 */ HB_P_LINEOFFSET, 77,	/* 84 */
	HB_P_PUSHLOCALNEAR, 8,	/* OPCAO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 01868) */
/* 01832 */ HB_P_LINEOFFSET, 78,	/* 85 */
	HB_P_PUSHLOCALNEAR, 9,	/* MT */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01858) */
/* 01848 */ HB_P_LINEOFFSET, 79,	/* 86 */
	HB_P_PUSHSYMNEAR, 25,	/* SACENTRE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 217, 0,	/* 217 (abs: 02072) */
/* 01858 */ HB_P_LINEOFFSET, 81,	/* 88 */
	HB_P_PUSHSYMNEAR, 26,	/* SACREORC */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 61, 249,	/* -1731 (abs: 00134) */
/* 01868 */ HB_P_LINEOFFSET, 83,	/* 90 */
	HB_P_PUSHLOCALNEAR, 8,	/* OPCAO */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 01906) */
/* 01877 */ HB_P_LINEOFFSET, 84,	/* 91 */
	HB_P_PUSHLOCALNEAR, 9,	/* MT */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01896) */
	HB_P_JUMP, 179, 0,	/* 179 (abs: 02072) */
/* 01896 */ HB_P_LINEOFFSET, 87,	/* 94 */
	HB_P_PUSHSYMNEAR, 27,	/* SAC343 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 23, 249,	/* -1769 (abs: 00134) */
/* 01906 */ HB_P_LINEOFFSET, 89,	/* 96 */
	HB_P_PUSHLOCALNEAR, 8,	/* OPCAO */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 01959) */
/* 01915 */ HB_P_LINEOFFSET, 90,	/* 97 */
	HB_P_PUSHLOCALNEAR, 9,	/* MT */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 01945) */
/* 01931 */ HB_P_LINEOFFSET, 91,	/* 98 */
	HB_P_PUSHSYMNEAR, 28,	/* SAC350 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 130, 0,	/* 130 (abs: 02072) */
/* 01945 */ HB_P_LINEOFFSET, 93,	/* 100 */
	HB_P_PUSHSYMNEAR, 28,	/* SAC350 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 226, 248,	/* -1822 (abs: 00134) */
/* 01959 */ HB_P_LINEOFFSET, 95,	/* 102 */
	HB_P_PUSHLOCALNEAR, 8,	/* OPCAO */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 02019) */
/* 01968 */ HB_P_LINEOFFSET, 96,	/* 103 */
	HB_P_PUSHLOCALNEAR, 9,	/* MT */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 02001) */
/* 01984 */ HB_P_LINEOFFSET, 97,	/* 104 */
	HB_P_PUSHSYMNEAR, 29,	/* SACEXP2 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 73,	/* 73 (abs: 02072) */
/* 02001 */ HB_P_LINEOFFSET, 99,	/* 106 */
	HB_P_PUSHSYMNEAR, 29,	/* SACEXP2 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 166, 248,	/* -1882 (abs: 00134) */
/* 02019 */ HB_P_LINEOFFSET, 101,	/* 108 */
	HB_P_PUSHLOCALNEAR, 8,	/* OPCAO */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 156, 248,	/* -1892 (abs: 00134) */
/* 02029 */ HB_P_LINEOFFSET, 102,	/* 109 */
	HB_P_PUSHLOCALNEAR, 2,	/* ORC */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 02054) */
/* 02037 */ HB_P_LINEOFFSET, 103,	/* 110 */
	HB_P_PUSHSYMNEAR, 21,	/* SAC5PED1 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 5,
	HB_P_JUMPNEAR, 20,	/* 20 (abs: 02072) */
/* 02054 */ HB_P_LINEOFFSET, 105,	/* 112 */
	HB_P_PUSHSYMNEAR, 21,	/* SAC5PED1 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 5,
	HB_P_JUMP, 113, 248,	/* -1935 (abs: 00134) */
	HB_P_JUMP, 110, 248,	/* -1938 (abs: 00134) */
/* 02075 */ HB_P_LINEOFFSET, 109,	/* 116 */
	HB_P_PUSHSYMNEAR, 30,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02082 */ HB_P_LINEOFFSET, 110,	/* 117 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02087 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

