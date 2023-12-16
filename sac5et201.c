/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <sac5et201.prg>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\sac5et201.prg /q /oC:\hti\SISCOM\sac5et201.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:29 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "sac5et201.prg"

HB_FUNC( SAC5ET201 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( ROW );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( LIMPA );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5ET201 )
{ "SAC5ET201", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5ET201 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCOD_BC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "M_CFG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MEMP_RESA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "ROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( ROW )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "EDESCRI2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MLIN_PRE1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "EDESCR1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5ET201 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5ET201
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5ET201 = hb_vm_SymbolInit_SAC5ET201;
   #pragma data_seg()
#endif

HB_FUNC( SAC5ET201 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 42, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 13, 0,	/* 13 */
	HB_P_LOCALNEARSETSTR, 2, 10, 0,	/* MPRG 10*/
	'S', 'A', 'C', '5', 'E', 'T', '2', '0', '1', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 12,	/* MTIPO */
	HB_P_LOCALNEARSETINT, 32, 1, 0,	/* MFORMA_PG 1*/
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* MPARCELA 0*/
	HB_P_LOCALNEARSETSTR, 34, 2, 0,	/* MLETRA 2*/
	' ', 0, 
	HB_P_LOCALNEARSETINT, 35, 0, 0,	/* OP_OPCAO 0*/
	HB_P_LOCALNEARSETINT, 36, 0, 0,	/* MCOD_BC1 0*/
	HB_P_LOCALNEARSETINT, 37, 0, 0,	/* MPRECO1 0*/
	HB_P_LOCALNEARSETINT, 38, 0, 0,	/* MPRECO2 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_LOCALNEARSETSTR, 43, 2, 0,	/* MIMP_PRECO 2*/
	'N', 0, 
/* 00069 */ HB_P_LINEOFFSET, 1,	/* 14 */
	HB_P_PUSHSYMNEAR, 3,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MCOD_BC */
	HB_P_DOSHORT, 1,
/* 00078 */ HB_P_LINEOFFSET, 4,	/* 17 */
	HB_P_LOCALNEARSETSTR, 13, 2, 0,	/* ENTER 2*/
	13, 0, 
/* 00086 */ HB_P_LINEOFFSET, 5,	/* 18 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_POPLOCALNEAR, 3,	/* LCI */
/* 00096 */ HB_P_LINEOFFSET, 6,	/* 19 */
	HB_P_LOCALNEARSETINT, 5, 13, 0,	/* LBA 13*/
/* 00102 */ HB_P_LINEOFFSET, 7,	/* 20 */
	HB_P_LOCALNEARSETINT, 6, 90, 0,	/* CBA 90*/
/* 00108 */ HB_P_LINEOFFSET, 9,	/* 22 */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 18,	/* MTIP_TERM */
/* 00118 */ HB_P_LINEOFFSET, 15,	/* 28 */
	HB_P_PUSHSYMNEAR, 5,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00127 */ HB_P_LINEOFFSET, 16,	/* 29 */
	HB_P_LOCALNEARSETSTR, 12, 2, 0,	/* MTIPO 2*/
	'G', 0, 
/* 00135 */ HB_P_LINEOFFSET, 17,	/* 30 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 30,	/* MOBS */
/* 00146 */ HB_P_LINEOFFSET, 18,	/* 31 */
	HB_P_LOCALNEARSETSTR, 31, 5, 0,	/* MLINHAS 5*/
	'0', '0', '3', '0', 0, 
/* 00157 */ HB_P_LINEOFFSET, 19,	/* 32 */
	HB_P_PUSHVARIABLE, 6, 0,	/* MEMP_RESA */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 7,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MEMP_RESA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_MINUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* WEMP */
/* 00181 */ HB_P_LINEOFFSET, 20,	/* 33 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', 'd', 'e', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'e', ' ', 'B', 'a', 'r', 'r', 'a', ' ', 'A', 'R', 'G', 'O', 'X', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00246 */ HB_P_LINEOFFSET, 21,	/* 34 */
	HB_P_LOCALNEARSETINT, 35, 0, 0,	/* OP_OPCAO 0*/
/* 00252 */ HB_P_LINEOFFSET, 23,	/* 36 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 19,	/* DESCRI */
/* 00263 */ HB_P_LINEOFFSET, 25,	/* 38 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 21,	/* FIM */
/* 00268 */ HB_P_LINEOFFSET, 26,	/* 39 */
	HB_P_LOCALNEARSETINT, 35, 0, 0,	/* OP_OPCAO 0*/
/* 00274 */ HB_P_LINEOFFSET, 27,	/* 40 */
	HB_P_LOCALNEARSETSTR, 34, 2, 0,	/* MLETRA 2*/
	' ', 0, 
/* 00282 */ HB_P_LINEOFFSET, 28,	/* 41 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'T', 'i', 'p', 'o', 's', ' ', 'd', 'e', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', 0, 
	HB_P_DOSHORT, 5,
/* 00319 */ HB_P_LINEOFFSET, 29,	/* 42 */
	HB_P_PUSHSYMNEAR, 9,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'a', ' ', 'O', 'p', 'c', 'a', 'o', ' ', 'o', 'u', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00363 */ HB_P_LINEOFFSET, 30,	/* 43 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 36,	/* MCOD_BC1 */
	HB_P_POPVARIABLE, 2, 0,	/* MCOD_BC */
/* 00378 */ HB_P_LINEOFFSET, 31,	/* 44 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* QTDE 0*/
	HB_P_PUSHLOCALNEAR, 10,	/* QTDE */
	HB_P_POPLOCALNEAR, 20,	/* CONT */
/* 00388 */ HB_P_LINEOFFSET, 32,	/* 45 */
	HB_P_PUSHSYMNEAR, 10,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 00397 */ HB_P_LINEOFFSET, 33,	/* 46 */
	HB_P_PUSHSYMNEAR, 11,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', 'G', 'O', 'N', 'D', 'O', 'L', 'A', ' ', 'G', 'r', 'a', 'n', 'd', 'e', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00440 */ HB_P_LINEOFFSET, 34,	/* 47 */
	HB_P_PUSHSYMNEAR, 11,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', 'G', 'O', 'N', 'D', 'O', 'L', 'A', ' ', 'P', 'r', 'o', 'm', 'o', 'c', 'a', 'o', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00483 */ HB_P_LINEOFFSET, 35,	/* 48 */
	HB_P_PUSHSYMNEAR, 11,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', 'P', 'E', 'Q', 'U', 'E', 'N', 'A', ' ', 'S', 'E', 'M', ' ', 'E', 's', 'p', 'a', 'c', 'o', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00527 */ HB_P_LINEOFFSET, 36,	/* 49 */
	HB_P_PUSHSYMNEAR, 11,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', 'P', 'E', 'Q', 'U', 'E', 'N', 'A', ' ', 'C', 'O', 'M', ' ', 'E', 's', 'p', 'a', 'c', 'o', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00571 */ HB_P_LINEOFFSET, 37,	/* 50 */
	HB_P_PUSHSYMNEAR, 11,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', 'P', 'R', 'O', 'M', 'O', 'C', 'A', 'O', ' ', 'G', 'r', 'a', 'n', 'd', 'e', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00614 */ HB_P_LINEOFFSET, 38,	/* 51 */
	HB_P_PUSHSYMNEAR, 11,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', 's', '/', 'C', 'o', 'd', '.', 'B', 'a', 'r', 'r', 'a', ' ', '2', ' ', 'C', 'o', 'd', '.', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00658 */ HB_P_LINEOFFSET, 39,	/* 52 */
	HB_P_PUSHSYMNEAR, 11,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', 'G', 'O', 'N', 'D', 'O', 'L', 'A', ' ', 'P', 'e', 'q', 'u', 'e', 'n', 'a', 's', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00702 */ HB_P_LINEOFFSET, 40,	/* 53 */
	HB_P_PUSHSYMNEAR, 11,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', 'G', 'O', 'N', 'D', 'O', 'L', 'A', ' ', 'M', 'e', 'd', 'i', 'a', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00746 */ HB_P_LINEOFFSET, 41,	/* 54 */
	HB_P_PUSHSYMNEAR, 12,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	35, 0,	/* OP_OPCAO */
	HB_P_PUSHSYMNEAR, 13,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00773) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00778) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'o', 'p', '_', 'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 35,	/* OP_OPCAO */
/* 00794 */ HB_P_LINEOFFSET, 42,	/* 55 */
	HB_P_PUSHSYMNEAR, 10,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00802 */ HB_P_LINEOFFSET, 43,	/* 56 */
	HB_P_PUSHSYMNEAR, 14,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00809 */ HB_P_LINEOFFSET, 44,	/* 57 */
	HB_P_PUSHSYMNEAR, 15,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00824) */
	HB_P_JUMP, 47, 20,	/* 5167 (abs: 05988) */
/* 00824 */ HB_P_LINEOFFSET, 47,	/* 60 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHSYMNEAR, 17,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'T', 'i', 'p', 'o', ' ', 'L', 'e', 't', 'r', 'a', ' ', '[', 'P', ']', 'e', 'q', 'u', 'e', 'n', 'a', ' ', '[', 'G', ']', 'r', 'a', 'n', 'd', 'e', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* ROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 17,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	34, 0,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00929) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00934) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'l', 'e', 't', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	34, 0,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'P', ',', 'G', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 15, 0,	/* 15 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	35, 0,	/* OP_OPCAO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00999 */ HB_P_LINEOFFSET, 48,	/* 61 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'F', 'o', 'r', 'm', 'a', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* ROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 17,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	32, 0,	/* MFORMA_PG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01087) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01092) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'f', 'o', 'r', 'm', 'a', '_', 'p', 'g', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 15, 0,	/* 15 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	35, 0,	/* OP_OPCAO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01142 */ HB_P_LINEOFFSET, 49,	/* 62 */
	HB_P_PUSHSYMNEAR, 25,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 22, 0,	/* GETLIST */
/* 01164 */ HB_P_LINEOFFSET, 50,	/* 63 */
	HB_P_PUSHSYMNEAR, 15,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01179) */
	HB_P_JUMP, 204, 18,	/* 4812 (abs: 05988) */
/* 01179 */ HB_P_LINEOFFSET, 54,	/* 67 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'V', 'a', 'l', 'o', 'r', ' ', 'P', 'a', 'r', 'c', 'e', 'l', 'a', 'd', 'o', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* ROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 17,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	33, 0,	/* MPARCELA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01267) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01272) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'p', 'a', 'r', 'c', 'e', 'l', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 15, 0,	/* 15 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	35, 0,	/* OP_OPCAO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01317 */ HB_P_LINEOFFSET, 55,	/* 68 */
	HB_P_PUSHSYMNEAR, 25,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 22, 0,	/* GETLIST */
/* 01339 */ HB_P_LINEOFFSET, 56,	/* 69 */
	HB_P_PUSHSYMNEAR, 15,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01354) */
	HB_P_JUMP, 181, 251,	/* -1099 (abs: 00252) */
/* 01354 */ HB_P_LINEOFFSET, 59,	/* 72 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'P', 'r', 'e', 'c', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* ROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 17,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	43, 0,	/* MIMP_PRECO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01451) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01456) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'i', 'm', 'p', '_', 'p', 'r', 'e', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	43, 0,	/* MIMP_PRECO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 15, 0,	/* 15 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	35, 0,	/* OP_OPCAO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01525 */ HB_P_LINEOFFSET, 60,	/* 73 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* ROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 17,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* QTDE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01622) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01627) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'q', 't', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* QTDE */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01664) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01665) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01683 */ HB_P_LINEOFFSET, 61,	/* 74 */
	HB_P_PUSHSYMNEAR, 25,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 22, 0,	/* GETLIST */
/* 01705 */ HB_P_LINEOFFSET, 62,	/* 75 */
	HB_P_PUSHSYMNEAR, 15,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01720) */
	HB_P_JUMP, 71, 250,	/* -1465 (abs: 00252) */
/* 01720 */ HB_P_LINEOFFSET, 65,	/* 78 */
	HB_P_PUSHSYMNEAR, 27,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 7,	/* OPCAO */
/* 01757 */ HB_P_LINEOFFSET, 66,	/* 79 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01771) */
	HB_P_JUMP, 20, 250,	/* -1516 (abs: 00252) */
/* 01771 */ HB_P_LINEOFFSET, 69,	/* 82 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 28, 0,	/* I */
/* 01777 */ HB_P_LINEOFFSET, 70,	/* 83 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 28, 0,	/* I */
	HB_P_PUSHVARIABLE, 28, 0,	/* I */
	HB_P_PUSHSYMNEAR, 7,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_ETIQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 250, 249,	/* -1542 (abs: 00252) */
/* 01797 */ HB_P_LINEOFFSET, 71,	/* 84 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 42,	/* CONS_MERC */
/* 01804 */ HB_P_LINEOFFSET, 72,	/* 85 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_ETIQ */
	HB_P_PUSHVARIABLE, 28, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 30, 0,	/* CCOMM */
/* 01866 */ HB_P_LINEOFFSET, 73,	/* 86 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 30, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 42, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01887 */ HB_P_LINEOFFSET, 74,	/* 87 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01911 */ HB_P_LINEOFFSET, 75,	/* 88 */
	HB_P_PUSHSYMNEAR, 7,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 01974) */
/* 01924 */ HB_P_LINEOFFSET, 76,	/* 89 */
	HB_P_PUSHSYMNEAR, 33,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'n', 'a', 'o', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', ' ', 'n', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 167, 15,	/* 4007 (abs: 05978) */
/* 01974 */ HB_P_LINEOFFSET, 79,	/* 92 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 80,	/* 80 (abs: 02068) */
/* 01990 */ HB_P_LINEOFFSET, 80,	/* 93 */
	HB_P_PUSHSYMNEAR, 33,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	'E', 's', 't', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'e', 's', 't', 'a', 'r', ' ', 's', 'e', 'm', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'e', ' ', 'b', 'a', 'r', 'r', 'a', ',', ' ', 'N', 'a', 'o', ' ', 'p', 'o', 'd', 'e', ' ', 's', 'e', 'r', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 73, 15,	/* 3913 (abs: 05978) */
/* 02068 */ HB_P_LINEOFFSET, 83,	/* 96 */
	HB_P_PUSHLOCALNEAR, 32,	/* MFORMA_PG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 02090) */
/* 02076 */ HB_P_LINEOFFSET, 84,	/* 97 */
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 32,	/* MFORMA_PG */
	HB_P_DIVIDE,
	HB_P_POPLOCALNEAR, 33,	/* MPARCELA */
/* 02090 */ HB_P_LINEOFFSET, 86,	/* 99 */
	HB_P_PUSHLOCALNEAR, 35,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 119,	/* 119 (abs: 02216) */
/* 02099 */ HB_P_LINEOFFSET, 87,	/* 100 */
	HB_P_PUSHLOCALNEAR, 33,	/* MPARCELA */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 02161) */
/* 02107 */ HB_P_LINEOFFSET, 88,	/* 101 */
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MFORMA_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'x', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MPARCELA */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 30,	/* MOBS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 30,	/* MOBS */
	HB_P_JUMPNEAR, 57,	/* 57 (abs: 02216) */
/* 02161 */ HB_P_LINEOFFSET, 89,	/* 102 */
	HB_P_PUSHLOCALNEAR, 32,	/* MFORMA_PG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 02192) */
/* 02169 */ HB_P_LINEOFFSET, 90,	/* 103 */
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MFORMA_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'x', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 30,	/* MOBS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 30,	/* MOBS */
	HB_P_JUMPNEAR, 26,	/* 26 (abs: 02216) */
/* 02192 */ HB_P_LINEOFFSET, 92,	/* 105 */
	HB_P_LOCALNEARSETSTR, 30, 18, 0,	/* MOBS 18*/
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
/* 02216 */ HB_P_LINEOFFSET, 96,	/* 109 */
	HB_P_PUSHLOCALNEAR, 35,	/* OP_OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 180, 0,	/* 180 (abs: 02402) */
/* 02225 */ HB_P_LINEOFFSET, 97,	/* 110 */
	HB_P_LOCALNEARSETSTR, 28, 16, 0,	/* MLIN_PRE 16*/
	'1', '3', '2', '4', '0', '0', '0', '0', '0', '0', '0', '0', '2', '0', '0', 0, 
/* 02247 */ HB_P_LINEOFFSET, 98,	/* 111 */
	HB_P_LOCALNEARSETSTR, 22, 16, 0,	/* MLIN_COD 16*/
	'1', 'F', '6', '3', '0', '3', '0', '0', '0', '1', '0', '0', '0', '1', '5', 0, 
/* 02269 */ HB_P_LINEOFFSET, 99,	/* 112 */
	HB_P_LOCALNEARSETSTR, 25, 16, 0,	/* MLIN_DESC 16*/
	'1', '3', '1', '1', '0', '0', '0', '0', '0', '7', '0', '0', '0', '1', '5', 0, 
/* 02291 */ HB_P_LINEOFFSET, 100,	/* 113 */
	HB_P_LOCALNEARSETSTR, 29, 16, 0,	/* MLIN_OBS 16*/
	'1', '2', '1', '1', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1', '5', 0, 
/* 02313 */ HB_P_LINEOFFSET, 101,	/* 114 */
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* EDESCRI */
/* 02337 */ HB_P_LINEOFFSET, 102,	/* 115 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', '$', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_ETIQ */
	HB_P_PUSHVARIABLE, 28, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MPRECO */
/* 02383 */ HB_P_LINEOFFSET, 103,	/* 116 */
	HB_P_PUSHSYMNEAR, 35,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 17,	/* ECODI */
	HB_P_JUMP, 80, 5,	/* 1360 (abs: 03759) */
/* 02402 */ HB_P_LINEOFFSET, 104,	/* 117 */
	HB_P_PUSHLOCALNEAR, 35,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 154, 0,	/* 154 (abs: 02563) */
/* 02412 */ HB_P_LINEOFFSET, 105,	/* 118 */
	HB_P_LOCALNEARSETSTR, 25, 16, 0,	/* MLIN_DESC 16*/
	'1', '2', '1', '2', '0', '0', '0', '0', '0', '8', '0', '0', '0', '1', '5', 0, 
/* 02434 */ HB_P_LINEOFFSET, 106,	/* 119 */
	HB_P_LOCALNEARSETSTR, 22, 16, 0,	/* MLIN_COD 16*/
	'1', 'F', '6', '2', '0', '3', '0', '0', '0', '3', '0', '0', '0', '1', '5', 0, 
/* 02456 */ HB_P_LINEOFFSET, 109,	/* 122 */
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* EDESCRI */
/* 02480 */ HB_P_LINEOFFSET, 110,	/* 123 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', '$', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_ETIQ */
	HB_P_PUSHVARIABLE, 28, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MPRECO */
/* 02526 */ HB_P_LINEOFFSET, 111,	/* 124 */
	HB_P_PUSHSYMNEAR, 35,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 17,	/* ECODI */
/* 02542 */ HB_P_LINEOFFSET, 112,	/* 125 */
	HB_P_LOCALNEARSETSTR, 30, 12, 0,	/* MOBS 12*/
	'S', '/', 'J', 'U', 'R', 'O', 'S', ' ', ' ', ' ', ' ', 0, 
	HB_P_JUMP, 175, 4,	/* 1199 (abs: 03759) */
/* 02563 */ HB_P_LINEOFFSET, 113,	/* 126 */
	HB_P_PUSHLOCALNEAR, 35,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 138, 0,	/* 138 (abs: 02708) */
/* 02573 */ HB_P_LINEOFFSET, 114,	/* 127 */
	HB_P_LOCALNEARSETSTR, 22, 16, 0,	/* MLIN_COD 16*/
	'1', 'F', '4', '2', '0', '2', '0', '0', '0', '1', '0', '0', '0', '0', '4', 0, 
/* 02595 */ HB_P_LINEOFFSET, 115,	/* 128 */
	HB_P_LOCALNEARSETSTR, 23, 16, 0,	/* MLIN_COD1 16*/
	'1', 'F', '4', '2', '0', '2', '0', '0', '0', '1', '0', '0', '1', '1', '0', 0, 
/* 02617 */ HB_P_LINEOFFSET, 116,	/* 129 */
	HB_P_LOCALNEARSETSTR, 24, 16, 0,	/* MLIN_COD2 16*/
	'1', 'F', '4', '2', '0', '2', '0', '0', '0', '1', '0', '0', '2', '1', '7', 0, 
/* 02639 */ HB_P_LINEOFFSET, 117,	/* 130 */
	HB_P_LOCALNEARSETSTR, 25, 16, 0,	/* MLIN_DESC 16*/
	'1', '1', '0', '0', '0', '0', '0', '0', '0', '4', '0', '0', '0', '0', '4', 0, 
/* 02661 */ HB_P_LINEOFFSET, 118,	/* 131 */
	HB_P_LOCALNEARSETSTR, 26, 16, 0,	/* MLIN_DESC1 16*/
	'1', '1', '0', '0', '0', '0', '0', '0', '0', '4', '0', '0', '1', '1', '2', 0, 
/* 02683 */ HB_P_LINEOFFSET, 119,	/* 132 */
	HB_P_LOCALNEARSETSTR, 27, 16, 0,	/* MLIN_DESC2 16*/
	'1', '1', '0', '0', '0', '0', '0', '0', '0', '4', '0', '0', '2', '1', '9', 0, 
	HB_P_JUMP, 30, 4,	/* 1054 (abs: 03759) */
/* 02708 */ HB_P_LINEOFFSET, 120,	/* 133 */
	HB_P_PUSHLOCALNEAR, 35,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 138, 0,	/* 138 (abs: 02853) */
/* 02718 */ HB_P_LINEOFFSET, 121,	/* 134 */
	HB_P_LOCALNEARSETSTR, 22, 16, 0,	/* MLIN_COD 16*/
	'1', 'F', '4', '2', '0', '2', '0', '0', '0', '1', '0', '0', '0', '0', '2', 0, 
/* 02740 */ HB_P_LINEOFFSET, 122,	/* 135 */
	HB_P_LOCALNEARSETSTR, 23, 16, 0,	/* MLIN_COD1 16*/
	'1', 'F', '4', '2', '0', '2', '0', '0', '0', '1', '0', '0', '1', '2', '0', 0, 
/* 02762 */ HB_P_LINEOFFSET, 123,	/* 136 */
	HB_P_LOCALNEARSETSTR, 24, 16, 0,	/* MLIN_COD2 16*/
	'1', 'F', '4', '2', '0', '2', '0', '0', '0', '1', '0', '0', '2', '4', '0', 0, 
/* 02784 */ HB_P_LINEOFFSET, 124,	/* 137 */
	HB_P_LOCALNEARSETSTR, 25, 16, 0,	/* MLIN_DESC 16*/
	'1', '1', '0', '0', '0', '0', '0', '0', '0', '4', '0', '0', '0', '0', '2', 0, 
/* 02806 */ HB_P_LINEOFFSET, 125,	/* 138 */
	HB_P_LOCALNEARSETSTR, 26, 16, 0,	/* MLIN_DESC1 16*/
	'1', '1', '0', '0', '0', '0', '0', '0', '0', '4', '0', '0', '1', '2', '2', 0, 
/* 02828 */ HB_P_LINEOFFSET, 126,	/* 139 */
	HB_P_LOCALNEARSETSTR, 27, 16, 0,	/* MLIN_DESC2 16*/
	'1', '1', '0', '0', '0', '0', '0', '0', '0', '4', '0', '0', '2', '4', '0', 0, 
	HB_P_JUMP, 141, 3,	/* 909 (abs: 03759) */
/* 02853 */ HB_P_LINEOFFSET, 127,	/* 140 */
	HB_P_PUSHLOCALNEAR, 35,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 173, 0,	/* 173 (abs: 03033) */
/* 02863 */ HB_P_LINEOFFSET, 128,	/* 141 */
	HB_P_LOCALNEARSETSTR, 25, 16, 0,	/* MLIN_DESC 16*/
	'1', '3', '1', '1', '0', '0', '0', '0', '3', '4', '0', '0', '0', '1', '5', 0, 
/* 02885 */ HB_P_LINEOFFSET, 129,	/* 142 */
	HB_P_LOCALNEARSETSTR, 28, 16, 0,	/* MLIN_PRE 16*/
	'1', '4', '2', '5', '0', '0', '0', '0', '2', '0', '0', '0', '0', '5', '0', 0, 
/* 02907 */ HB_P_LINEOFFSET, 130,	/* 143 */
	HB_P_LOCALNEARSETSTR, 29, 16, 0,	/* MLIN_OBS 16*/
	'1', '3', '3', '0', '0', '0', '0', '0', '1', '6', '0', '0', '2', '5', '0', 0, 
/* 02929 */ HB_P_LINEOFFSET, 131,	/* 144 */
	HB_P_LOCALNEARSETSTR, 22, 16, 0,	/* MLIN_COD 16*/
	'1', 'F', '6', '3', '0', '6', '0', '0', '0', '4', '0', '0', '0', '1', '5', 0, 
/* 02951 */ HB_P_LINEOFFSET, 132,	/* 145 */
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* EDESCRI */
/* 02975 */ HB_P_LINEOFFSET, 133,	/* 146 */
	HB_P_PUSHSYMNEAR, 35,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_ETIQ */
	HB_P_PUSHVARIABLE, 28, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 14,	/* MPRECO */
/* 03014 */ HB_P_LINEOFFSET, 134,	/* 147 */
	HB_P_PUSHSYMNEAR, 35,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 17,	/* ECODI */
	HB_P_JUMP, 217, 2,	/* 729 (abs: 03759) */
/* 03033 */ HB_P_LINEOFFSET, 135,	/* 148 */
	HB_P_PUSHLOCALNEAR, 35,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 34, 1,	/* 290 (abs: 03330) */
/* 03043 */ HB_P_LINEOFFSET, 136,	/* 149 */
	HB_P_LOCALNEARSETSTR, 25, 16, 0,	/* MLIN_DESC 16*/
	'1', '3', '1', '0', '0', '0', '0', '0', '0', '8', '0', '0', '0', '0', '5', 0, 
/* 03065 */ HB_P_LINEOFFSET, 137,	/* 150 */
	HB_P_LOCALNEARSETSTR, 26, 16, 0,	/* MLIN_DESC1 16*/
	'1', '3', '1', '1', '0', '0', '0', '0', '0', '4', '0', '0', '0', '0', '5', 0, 
/* 03087 */ HB_P_LINEOFFSET, 138,	/* 151 */
	HB_P_LOCALNEARSETSTR, 27, 16, 0,	/* MLIN_DESC2 16*/
	'1', '3', '1', '1', '0', '0', '0', '0', '0', '1', '0', '0', '0', '0', '5', 0, 
/* 03109 */ HB_P_LINEOFFSET, 139,	/* 152 */
	HB_P_LOCALNEARSETSTR, 28, 16, 0,	/* MLIN_PRE 16*/
	'1', '2', '2', '3', '0', '0', '0', '0', '0', '4', '0', '0', '1', '5', '0', 0, 
/* 03131 */ HB_P_LINEOFFSET, 140,	/* 153 */
	HB_P_LOCALNEARSETSTR, 29, 16, 0,	/* MLIN_OBS 16*/
	'1', '4', '1', '1', '0', '0', '0', '0', '0', '1', '0', '0', '1', '6', '0', 0, 
/* 03153 */ HB_P_LINEOFFSET, 141,	/* 154 */
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_BC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 41,	/* MDESCRI */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* EDESCRI */
/* 03175 */ HB_P_LINEOFFSET, 142,	/* 155 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'D', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_BC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 16,	/* EDESCRI1 */
/* 03198 */ HB_P_LINEOFFSET, 143,	/* 156 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'D', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MCOD_BC1 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 37, 0,	/* EDESCRI2 */
/* 03221 */ HB_P_LINEOFFSET, 144,	/* 157 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', '$', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_ETIQ */
	HB_P_PUSHVARIABLE, 28, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MUNIDADE */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MPRECO */
/* 03274 */ HB_P_LINEOFFSET, 145,	/* 158 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', '$', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_ETIQ */
	HB_P_PUSHVARIABLE, 28, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 40,	/* MUNIDADE1 */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 30,	/* MOBS */
	HB_P_JUMP, 176, 1,	/* 432 (abs: 03759) */
/* 03330 */ HB_P_LINEOFFSET, 146,	/* 159 */
	HB_P_PUSHLOCALNEAR, 35,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 157, 0,	/* 157 (abs: 03494) */
/* 03340 */ HB_P_LINEOFFSET, 147,	/* 160 */
	HB_P_LOCALNEARSETSTR, 25, 16, 0,	/* MLIN_DESC 16*/
	'1', '1', '0', '0', '0', '0', '0', '0', '0', '9', '0', '0', '0', '0', '5', 0, 
/* 03362 */ HB_P_LINEOFFSET, 148,	/* 161 */
	HB_P_LOCALNEARSETSTR, 22, 16, 0,	/* MLIN_COD 16*/
	'1', 'F', '6', '2', '0', '3', '0', '0', '0', '4', '0', '0', '0', '1', '5', 0, 
/* 03384 */ HB_P_LINEOFFSET, 149,	/* 162 */
	HB_P_LOCALNEARSETSTR, 28, 16, 0,	/* MLIN_PRE 16*/
	'1', '2', '2', '3', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1', '0', 0, 
/* 03406 */ HB_P_LINEOFFSET, 150,	/* 163 */
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* EDESCRI */
/* 03430 */ HB_P_LINEOFFSET, 151,	/* 164 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', '$', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_ETIQ */
	HB_P_PUSHVARIABLE, 28, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MPRECO */
/* 03475 */ HB_P_LINEOFFSET, 152,	/* 165 */
	HB_P_PUSHSYMNEAR, 35,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 17,	/* ECODI */
	HB_P_JUMP, 12, 1,	/* 268 (abs: 03759) */
/* 03494 */ HB_P_LINEOFFSET, 153,	/* 166 */
	HB_P_PUSHLOCALNEAR, 35,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 2, 1,	/* 258 (abs: 03759) */
/* 03504 */ HB_P_LINEOFFSET, 154,	/* 167 */
	HB_P_LOCALNEARSETSTR, 25, 16, 0,	/* MLIN_DESC 16*/
	'1', '1', '0', '0', '0', '0', '0', '0', '0', '8', '0', '0', '0', '2', '0', 0, 
/* 03526 */ HB_P_LINEOFFSET, 155,	/* 168 */
	HB_P_LOCALNEARSETSTR, 26, 16, 0,	/* MLIN_DESC1 16*/
	'1', '1', '0', '0', '0', '0', '0', '0', '0', '8', '0', '0', '1', '9', '0', 0, 
/* 03548 */ HB_P_LINEOFFSET, 156,	/* 169 */
	HB_P_LOCALNEARSETSTR, 22, 16, 0,	/* MLIN_COD 16*/
	'1', 'F', '6', '2', '0', '3', '0', '0', '0', '3', '0', '0', '0', '2', '0', 0, 
/* 03570 */ HB_P_LINEOFFSET, 157,	/* 170 */
	HB_P_LOCALNEARSETSTR, 23, 16, 0,	/* MLIN_COD1 16*/
	'1', 'F', '6', '2', '0', '3', '0', '0', '0', '3', '0', '0', '2', '0', '0', 0, 
/* 03592 */ HB_P_LINEOFFSET, 158,	/* 171 */
	HB_P_LOCALNEARSETSTR, 28, 16, 0,	/* MLIN_PRE 16*/
	'1', '2', '2', '3', '0', '0', '0', '0', '0', '0', '0', '0', '0', '2', '0', 0, 
/* 03614 */ HB_P_LINEOFFSET, 159,	/* 172 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'1', '2', '2', '3', '0', '0', '0', '0', '0', '0', '0', '0', '2', '0', '0', 0, 
	HB_P_POPVARIABLE, 38, 0,	/* MLIN_PRE1 */
/* 03637 */ HB_P_LINEOFFSET, 160,	/* 173 */
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 39,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* EDESCRI */
/* 03669 */ HB_P_LINEOFFSET, 161,	/* 174 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 39,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 40, 0,	/* EDESCR1 */
/* 03698 */ HB_P_LINEOFFSET, 162,	/* 175 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', '$', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_ETIQ */
	HB_P_PUSHVARIABLE, 28, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MPRECO */
/* 03743 */ HB_P_LINEOFFSET, 163,	/* 176 */
	HB_P_PUSHSYMNEAR, 35,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 17,	/* ECODI */
/* 03759 */ HB_P_LINEOFFSET, 166,	/* 179 */
	HB_P_PUSHLOCALNEAR, 35,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 103,	/* 103 (abs: 03869) */
/* 03768 */ HB_P_LINEOFFSET, 167,	/* 180 */
	HB_P_PUSHLOCALNEAR, 34,	/* MLETRA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 03825) */
/* 03779 */ HB_P_LINEOFFSET, 168,	/* 181 */
	HB_P_LOCALNEARSETSTR, 29, 16, 0,	/* MLIN_OBS 16*/
	'1', '2', '2', '3', '0', '0', '0', '0', '0', '2', '0', '0', '1', '5', '0', 0, 
/* 03801 */ HB_P_LINEOFFSET, 169,	/* 182 */
	HB_P_LOCALNEARSETSTR, 28, 16, 0,	/* MLIN_PRE 16*/
	'1', '3', '1', '1', '0', '0', '0', '0', '0', '6', '0', '0', '1', '5', '0', 0, 
	HB_P_JUMPNEAR, 46,	/* 46 (abs: 03869) */
/* 03825 */ HB_P_LINEOFFSET, 171,	/* 184 */
	HB_P_LOCALNEARSETSTR, 29, 16, 0,	/* MLIN_OBS 16*/
	'1', '3', '1', '1', '0', '0', '0', '0', '0', '6', '0', '0', '1', '5', '0', 0, 
/* 03847 */ HB_P_LINEOFFSET, 172,	/* 185 */
	HB_P_LOCALNEARSETSTR, 28, 16, 0,	/* MLIN_PRE 16*/
	'1', '2', '2', '3', '0', '0', '0', '0', '0', '2', '0', '0', '1', '5', '0', 0, 
/* 03869 */ HB_P_LINEOFFSET, 176,	/* 189 */
	HB_P_PUSHSYMNEAR, 41,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'L', 'P', 'T', '1', 0, 
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 03886 */ HB_P_LINEOFFSET, 177,	/* 190 */
	HB_P_PUSHSYMNEAR, 41,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'P', 'R', 'I', 'N', 'T', 'E', 'R', 0, 
	HB_P_DOSHORT, 2,
/* 03905 */ HB_P_LINEOFFSET, 178,	/* 191 */
	HB_P_PUSHLOCALNEAR, 35,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 03921) */
	HB_P_PUSHLOCALNEAR, 35,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 229, 1,	/* 485 (abs: 04406) */
/* 03924 */ HB_P_LINEOFFSET, 179,	/* 192 */
	HB_P_PUSHSYMNEAR, 39,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_ONE,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 15,	/* EDESCRI */
/* 03956 */ HB_P_LINEOFFSET, 180,	/* 193 */
	HB_P_PUSHSYMNEAR, 39,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 16,	/* EDESCRI1 */
/* 03989 */ HB_P_LINEOFFSET, 181,	/* 194 */
	HB_P_PUSHSYMNEAR, 35,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 17,	/* ECODI */
/* 04005 */ HB_P_LINEOFFSET, 182,	/* 195 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	2, 'q', 'A', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04029 */ HB_P_LINEOFFSET, 183,	/* 196 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	2, 'V', '0', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04053 */ HB_P_LINEOFFSET, 184,	/* 197 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	2, 'L', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04076 */ HB_P_LINEOFFSET, 185,	/* 198 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'H', '1', '1', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04100 */ HB_P_LINEOFFSET, 186,	/* 199 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'P', 'A', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04123 */ HB_P_LINEOFFSET, 187,	/* 200 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'A', '2', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04146 */ HB_P_LINEOFFSET, 188,	/* 201 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', '1', '1', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04170 */ HB_P_LINEOFFSET, 191,	/* 204 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MLIN_DESC */
	HB_P_PUSHLOCALNEAR, 15,	/* EDESCRI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04193 */ HB_P_LINEOFFSET, 192,	/* 205 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MLIN_DESC1 */
	HB_P_PUSHLOCALNEAR, 15,	/* EDESCRI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04216 */ HB_P_LINEOFFSET, 193,	/* 206 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MLIN_DESC2 */
	HB_P_PUSHLOCALNEAR, 15,	/* EDESCRI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04239 */ HB_P_LINEOFFSET, 194,	/* 207 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* ECODI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 71,	/* 71 (abs: 04319) */
/* 04250 */ HB_P_LINEOFFSET, 195,	/* 208 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MLIN_COD */
	HB_P_PUSHLOCALNEAR, 17,	/* ECODI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04273 */ HB_P_LINEOFFSET, 196,	/* 209 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MLIN_COD1 */
	HB_P_PUSHLOCALNEAR, 17,	/* ECODI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04296 */ HB_P_LINEOFFSET, 197,	/* 210 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MLIN_COD2 */
	HB_P_PUSHLOCALNEAR, 17,	/* ECODI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04319 */ HB_P_LINEOFFSET, 199,	/* 212 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'Q', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* QTDE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04351 */ HB_P_LINEOFFSET, 200,	/* 213 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04373 */ HB_P_LINEOFFSET, 201,	/* 214 */
	HB_P_PUSHSYMNEAR, 41,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
/* 04385 */ HB_P_LINEOFFSET, 202,	/* 215 */
	HB_P_PUSHSYMNEAR, 41,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 244, 5,	/* 1524 (abs: 05927) */
/* 04406 */ HB_P_LINEOFFSET, 203,	/* 216 */
	HB_P_PUSHLOCALNEAR, 35,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 242, 1,	/* 498 (abs: 04911) */
/* 04416 */ HB_P_LINEOFFSET, 204,	/* 217 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	2, 'q', 'A', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04440 */ HB_P_LINEOFFSET, 205,	/* 218 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	2, 'e', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04463 */ HB_P_LINEOFFSET, 206,	/* 219 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	2, 'K', 'I', '5', '0', '8', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04490 */ HB_P_LINEOFFSET, 207,	/* 220 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	2, 'O', '0', '2', '2', '0', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04517 */ HB_P_LINEOFFSET, 208,	/* 221 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	2, 'f', '2', '2', '0', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04543 */ HB_P_LINEOFFSET, 209,	/* 222 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	2, 'K', 'W', '0', '3', '9', '4', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04571 */ HB_P_LINEOFFSET, 210,	/* 223 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	2, 'K', 'I', '0', '0', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04597 */ HB_P_LINEOFFSET, 211,	/* 224 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	2, 'V', '0', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04621 */ HB_P_LINEOFFSET, 212,	/* 225 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	2, 'L', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04644 */ HB_P_LINEOFFSET, 213,	/* 226 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'H', '1', '1', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04668 */ HB_P_LINEOFFSET, 214,	/* 227 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'P', 'A', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04691 */ HB_P_LINEOFFSET, 215,	/* 228 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'A', '2', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04714 */ HB_P_LINEOFFSET, 216,	/* 229 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', '1', '1', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04738 */ HB_P_LINEOFFSET, 217,	/* 230 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MLIN_DESC */
	HB_P_PUSHLOCALNEAR, 15,	/* EDESCRI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04761 */ HB_P_LINEOFFSET, 218,	/* 231 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MLIN_DESC1 */
	HB_P_PUSHLOCALNEAR, 16,	/* EDESCRI1 */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04784 */ HB_P_LINEOFFSET, 219,	/* 232 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MLIN_DESC2 */
	HB_P_PUSHVARIABLE, 37, 0,	/* EDESCRI2 */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04808 */ HB_P_LINEOFFSET, 220,	/* 233 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* MLIN_PRE */
	HB_P_PUSHLOCALNEAR, 14,	/* MPRECO */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04831 */ HB_P_LINEOFFSET, 221,	/* 234 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MLIN_OBS */
	HB_P_PUSHLOCALNEAR, 30,	/* MOBS */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04854 */ HB_P_LINEOFFSET, 222,	/* 235 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'Q', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* QTDE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04886 */ HB_P_LINEOFFSET, 223,	/* 236 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 251, 3,	/* 1019 (abs: 05927) */
/* 04911 */ HB_P_LINEOFFSET, 224,	/* 237 */
	HB_P_PUSHLOCALNEAR, 35,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 160, 1,	/* 416 (abs: 05334) */
/* 04921 */ HB_P_LINEOFFSET, 225,	/* 238 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	2, 'q', 'A', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04945 */ HB_P_LINEOFFSET, 226,	/* 239 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	2, 'V', '0', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04969 */ HB_P_LINEOFFSET, 227,	/* 240 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	2, 'L', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04992 */ HB_P_LINEOFFSET, 228,	/* 241 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'H', '1', '1', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05016 */ HB_P_LINEOFFSET, 229,	/* 242 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'P', 'A', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05039 */ HB_P_LINEOFFSET, 230,	/* 243 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'A', '2', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05062 */ HB_P_LINEOFFSET, 231,	/* 244 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', '1', '1', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05086 */ HB_P_LINEOFFSET, 234,	/* 247 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MLIN_DESC */
	HB_P_PUSHLOCALNEAR, 15,	/* EDESCRI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05109 */ HB_P_LINEOFFSET, 235,	/* 248 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MLIN_DESC1 */
	HB_P_PUSHLOCALNEAR, 15,	/* EDESCRI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05132 */ HB_P_LINEOFFSET, 236,	/* 249 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* ECODI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 05189) */
/* 05143 */ HB_P_LINEOFFSET, 237,	/* 250 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MLIN_COD */
	HB_P_PUSHLOCALNEAR, 17,	/* ECODI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05166 */ HB_P_LINEOFFSET, 238,	/* 251 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MLIN_COD1 */
	HB_P_PUSHLOCALNEAR, 17,	/* ECODI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05189 */ HB_P_LINEOFFSET, 240,	/* 253 */
	HB_P_PUSHLOCALNEAR, 43,	/* MIMP_PRECO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 05247) */
/* 05200 */ HB_P_LINEOFFSET, 241,	/* 254 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* MLIN_PRE */
	HB_P_PUSHLOCALNEAR, 14,	/* MPRECO */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05223 */ HB_P_LINEOFFSET, 242,	/* 255 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 38, 0,	/* MLIN_PRE1 */
	HB_P_PUSHLOCALNEAR, 14,	/* MPRECO */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05247 */ HB_P_LINEOFFSET, 244,	/* 257 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'Q', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* QTDE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05279 */ HB_P_LINEOFFSET, 245,	/* 258 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05301 */ HB_P_LINEOFFSET, 246,	/* 259 */
	HB_P_PUSHSYMNEAR, 41,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
/* 05313 */ HB_P_LINEOFFSET, 247,	/* 260 */
	HB_P_PUSHSYMNEAR, 41,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 84, 2,	/* 596 (abs: 05927) */
/* 05334 */ HB_P_LINEOFFSET, 249,	/* 262 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	2, 'q', 'A', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05358 */ HB_P_LINEOFFSET, 250,	/* 263 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	2, 'e', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05381 */ HB_P_LINEOFFSET, 251,	/* 264 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	2, 'K', 'I', '5', '0', '8', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05408 */ HB_P_LINEOFFSET, 252,	/* 265 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	2, 'O', '0', '2', '2', '0', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05435 */ HB_P_LINEOFFSET, 253,	/* 266 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	2, 'f', '2', '2', '0', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05461 */ HB_P_LINEOFFSET, 254,	/* 267 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	2, 'K', 'W', '0', '3', '9', '4', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05489 */ HB_P_LINEOFFSET, 255,	/* 268 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	2, 'K', 'I', '0', '0', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05515 */ HB_P_LINE, 13, 1,	/* 269 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	2, 'V', '0', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05540 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	2, 'L', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05564 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'H', '1', '0', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05589 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'P', 'A', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05613 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'A', '2', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05637 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', '1', '1', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05662 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MLIN_DESC */
	HB_P_PUSHLOCALNEAR, 15,	/* EDESCRI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05686 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* ECODI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 26,	/* 26 (abs: 05722) */
/* 05698 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MLIN_COD */
	HB_P_PUSHLOCALNEAR, 17,	/* ECODI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05722 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHLOCALNEAR, 35,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 57,	/* 57 (abs: 05787) */
/* 05732 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* MLIN_PRE */
	HB_P_PUSHLOCALNEAR, 14,	/* MPRECO */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05756 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MLIN_OBS */
	HB_P_PUSHLOCALNEAR, 42,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 86,	/* 86 (abs: 05871) */
/* 05787 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHLOCALNEAR, 35,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 05847) */
/* 05797 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* MLIN_PRE */
	HB_P_PUSHLOCALNEAR, 14,	/* MPRECO */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05821 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MLIN_OBS */
	HB_P_PUSHLOCALNEAR, 30,	/* MOBS */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 26,	/* 26 (abs: 05871) */
/* 05847 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* MLIN_PRE */
	HB_P_PUSHLOCALNEAR, 14,	/* MPRECO */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05871 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'Q', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* QTDE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05904 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05927 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 41,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
/* 05940 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHSYMNEAR, 41,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 05959 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 42,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_DOSHORT, 4,
/* 05975 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHVARIABLE, 28, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 28, 0,	/* I */
	HB_P_JUMP, 150, 239,	/* -4202 (abs: 01783) */
/* 05988 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 14,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05996 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 06002 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

