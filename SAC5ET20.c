/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5ET20.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC5ET20.PRG /q /oC:\hti\SISCOM\SAC5ET20.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:01 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5ET20.PRG"

HB_FUNC( SAC5ET20 );
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
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( ROW );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( IAT );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __SETCENTURY );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( MYRUN );
HB_FUNC_EXTERN( LIMPA );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5ET20 )
{ "SAC5ET20", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5ET20 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCOD_BC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCODEMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
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
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "ROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( ROW )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "IAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IAT )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "EDESCRI2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MLIN_PRE1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "EDESCR1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__SETCENTURY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETCENTURY )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MYRUN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYRUN )}, NULL },
{ "MDEFCAM_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5ET20 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5ET20
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5ET20 = hb_vm_SymbolInit_SAC5ET20;
   #pragma data_seg()
#endif

HB_FUNC( SAC5ET20 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 45, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 13, 0,	/* 13 */
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', '5', 'E', 'T', '2', '0', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 11,	/* MTIPO */
	HB_P_LOCALNEARSETINT, 31, 1, 0,	/* MFORMA_PG 1*/
	HB_P_LOCALNEARSETINT, 32, 0, 0,	/* MPARCELA 0*/
	HB_P_LOCALNEARSETSTR, 33, 2, 0,	/* MLETRA 2*/
	' ', 0, 
	HB_P_LOCALNEARSETINT, 34, 0, 0,	/* OP_OPCAO 0*/
	HB_P_LOCALNEARSETINT, 35, 0, 0,	/* MCOD_BC1 0*/
	HB_P_LOCALNEARSETINT, 36, 0, 0,	/* MPRECO1 0*/
	HB_P_LOCALNEARSETINT, 37, 0, 0,	/* MPRECO2 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_LOCALNEARSETSTR, 42, 2, 0,	/* MIMP_PRECO 2*/
	'N', 0, 
	HB_P_LOCALNEARSETSTR, 43, 1, 0,	/* MCAB 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 44, 1, 0,	/* MCAB1 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 45, 1, 0,	/* MTAM 1*/
	0, 
/* 00083 */ HB_P_LINEOFFSET, 2,	/* 15 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 8,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MCOD_BC */
	HB_P_PUSHSYMNEAR, 3,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 4,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 5,	/* MARQ */
	HB_P_PUSHSYMNEAR, 6,	/* MCODEMP */
	HB_P_PUSHSYMNEAR, 7,	/* IMP_ARQ */
	HB_P_DOSHORT, 6,
	HB_P_POPVARIABLE, 6, 0,	/* MCODEMP */
	HB_P_POPVARIABLE, 5, 0,	/* MARQ */
	HB_P_POPVARIABLE, 4, 0,	/* MIMP_TIPO */
/* 00126 */ HB_P_LINEOFFSET, 4,	/* 17 */
	HB_P_LOCALNEARSETSTR, 12, 2, 0,	/* ENTER 2*/
	13, 0, 
/* 00134 */ HB_P_LINEOFFSET, 5,	/* 18 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_POPLOCALNEAR, 2,	/* LCI */
/* 00144 */ HB_P_LINEOFFSET, 6,	/* 19 */
	HB_P_LOCALNEARSETINT, 4, 13, 0,	/* LBA 13*/
/* 00150 */ HB_P_LINEOFFSET, 7,	/* 20 */
	HB_P_LOCALNEARSETINT, 5, 90, 0,	/* CBA 90*/
/* 00156 */ HB_P_LINEOFFSET, 8,	/* 21 */
	HB_P_PUSHMEMVAR, 9, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 17,	/* MTIP_TERM */
/* 00166 */ HB_P_LINEOFFSET, 9,	/* 22 */
	HB_P_PUSHSYMNEAR, 10,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00175 */ HB_P_LINEOFFSET, 10,	/* 23 */
	HB_P_LOCALNEARSETSTR, 11, 2, 0,	/* MTIPO 2*/
	'G', 0, 
/* 00183 */ HB_P_LINEOFFSET, 11,	/* 24 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 29,	/* MOBS */
/* 00194 */ HB_P_LINEOFFSET, 12,	/* 25 */
	HB_P_LOCALNEARSETSTR, 30, 5, 0,	/* MLINHAS 5*/
	'0', '0', '3', '0', 0, 
/* 00205 */ HB_P_LINEOFFSET, 13,	/* 26 */
	HB_P_PUSHVARIABLE, 11, 0,	/* MEMP_RESA */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 12,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MEMP_RESA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_MINUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 10,	/* WEMP */
/* 00229 */ HB_P_LINEOFFSET, 14,	/* 27 */
	HB_P_PUSHSYMNEAR, 13,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', 'd', 'e', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'e', ' ', 'B', 'a', 'r', 'r', 'a', ' ', 'A', 'R', 'G', 'O', 'X', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00289 */ HB_P_LINEOFFSET, 15,	/* 28 */
	HB_P_LOCALNEARSETINT, 34, 0, 0,	/* OP_OPCAO 0*/
/* 00295 */ HB_P_LINEOFFSET, 17,	/* 30 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 18,	/* DESCRI */
/* 00306 */ HB_P_LINEOFFSET, 19,	/* 32 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 20,	/* FIM */
/* 00311 */ HB_P_LINEOFFSET, 20,	/* 33 */
	HB_P_LOCALNEARSETINT, 34, 0, 0,	/* OP_OPCAO 0*/
/* 00317 */ HB_P_LINEOFFSET, 21,	/* 34 */
	HB_P_LOCALNEARSETSTR, 33, 2, 0,	/* MLETRA 2*/
	' ', 0, 
/* 00325 */ HB_P_LINEOFFSET, 22,	/* 35 */
	HB_P_LOCALNEARSETSTR, 43, 32, 0,	/* MCAB 32*/
	'T', 'r', 'o', 'c', 'a', ' ', 's', 'o', 'm', 'e', 'n', 't', 'e', ' ', 'c', 'o', 'm', ' ', 'e', 's', 's', 'a', ' ', 'e', 't', 'i', 'q', 'u', 'e', 't', 'a', 0, 
/* 00363 */ HB_P_LINEOFFSET, 23,	/* 36 */
	HB_P_LOCALNEARSETSTR, 44, 32, 0,	/* MCAB1 32*/
	' ', ' ', 'n', 'o', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'e', 'm', ' ', 'a', 't', 'e', ' ', '1', '5', ' ', 'd', 'i', 'a', 's', ' ', ' ', ' ', ' ', 0, 
/* 00401 */ HB_P_LINEOFFSET, 24,	/* 37 */
	HB_P_LOCALNEARSETSTR, 45, 4, 0,	/* MTAM 4*/
	' ', ' ', ' ', 0, 
/* 00411 */ HB_P_LINEOFFSET, 25,	/* 38 */
	HB_P_PUSHSYMNEAR, 13,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'T', 'i', 'p', 'o', 's', ' ', 'd', 'e', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', 0, 
	HB_P_DOSHORT, 5,
/* 00448 */ HB_P_LINEOFFSET, 26,	/* 39 */
	HB_P_PUSHSYMNEAR, 14,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'a', ' ', 'O', 'p', 'c', 'a', 'o', ' ', 'o', 'u', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00492 */ HB_P_LINEOFFSET, 27,	/* 40 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MCOD_BC1 */
	HB_P_POPVARIABLE, 2, 0,	/* MCOD_BC */
/* 00507 */ HB_P_LINEOFFSET, 28,	/* 41 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* QTDE 0*/
	HB_P_PUSHLOCALNEAR, 9,	/* QTDE */
	HB_P_POPLOCALNEAR, 19,	/* CONT */
/* 00517 */ HB_P_LINEOFFSET, 29,	/* 42 */
	HB_P_PUSHSYMNEAR, 15,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 00526 */ HB_P_LINEOFFSET, 30,	/* 43 */
	HB_P_PUSHSYMNEAR, 16,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', 'G', 'O', 'N', 'D', 'O', 'L', 'A', ' ', 'G', 'r', 'a', 'n', 'd', 'e', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00569 */ HB_P_LINEOFFSET, 31,	/* 44 */
	HB_P_PUSHSYMNEAR, 16,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', 'G', 'O', 'N', 'D', 'O', 'L', 'A', ' ', 'P', 'r', 'o', 'm', 'o', 'c', 'a', 'o', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00612 */ HB_P_LINEOFFSET, 32,	/* 45 */
	HB_P_PUSHSYMNEAR, 16,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', 'P', 'E', 'Q', 'U', 'E', 'N', 'A', ' ', 'S', 'E', 'M', ' ', 'E', 's', 'p', 'a', 'c', 'o', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00656 */ HB_P_LINEOFFSET, 33,	/* 46 */
	HB_P_PUSHSYMNEAR, 16,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', 'P', 'E', 'Q', 'U', 'E', 'N', 'A', ' ', 'C', 'O', 'M', ' ', 'E', 's', 'p', 'a', 'c', 'o', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00700 */ HB_P_LINEOFFSET, 34,	/* 47 */
	HB_P_PUSHSYMNEAR, 16,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', 'P', 'R', 'O', 'M', 'O', 'C', 'A', 'O', ' ', 'G', 'r', 'a', 'n', 'd', 'e', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00743 */ HB_P_LINEOFFSET, 35,	/* 48 */
	HB_P_PUSHSYMNEAR, 16,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', 's', '/', 'C', 'o', 'd', '.', 'B', 'a', 'r', 'r', 'a', ' ', '2', ' ', 'C', 'o', 'd', '.', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00787 */ HB_P_LINEOFFSET, 36,	/* 49 */
	HB_P_PUSHSYMNEAR, 16,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', 'G', 'O', 'N', 'D', 'O', 'L', 'A', ' ', 'P', 'e', 'q', 'u', 'e', 'n', 'a', 's', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00831 */ HB_P_LINEOFFSET, 37,	/* 50 */
	HB_P_PUSHSYMNEAR, 16,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', 'G', 'O', 'N', 'D', 'O', 'L', 'A', ' ', 'M', 'e', 'd', 'i', 'a', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00875 */ HB_P_LINEOFFSET, 38,	/* 51 */
	HB_P_PUSHSYMNEAR, 16,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', 'p', 'a', 'r', 'a', ' ', 'R', 'O', 'U', 'P', 'A', 'S', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00919 */ HB_P_LINEOFFSET, 39,	/* 52 */
	HB_P_PUSHSYMNEAR, 17,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	34, 0,	/* OP_OPCAO */
	HB_P_PUSHSYMNEAR, 18,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00946) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00951) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'o', 'p', '_', 'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 34,	/* OP_OPCAO */
/* 00967 */ HB_P_LINEOFFSET, 40,	/* 53 */
	HB_P_PUSHSYMNEAR, 15,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00975 */ HB_P_LINEOFFSET, 41,	/* 54 */
	HB_P_PUSHSYMNEAR, 19,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00982 */ HB_P_LINEOFFSET, 42,	/* 55 */
	HB_P_PUSHSYMNEAR, 20,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00997) */
	HB_P_JUMP, 240, 32,	/* 8432 (abs: 09426) */
/* 00997 */ HB_P_LINEOFFSET, 45,	/* 58 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* ROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 25,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', '_', 'b', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01102 */ HB_P_LINEOFFSET, 46,	/* 59 */
	HB_P_PUSHSYMNEAR, 30,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 27, 0,	/* GETLIST */
/* 01124 */ HB_P_LINEOFFSET, 47,	/* 60 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 41,	/* CONS_MERC */
/* 01131 */ HB_P_LINEOFFSET, 48,	/* 61 */
	HB_P_PUSHSYMNEAR, 12,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_BC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 60,	/* 60 (abs: 01209) */
/* 01151 */ HB_P_LINEOFFSET, 49,	/* 62 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_BC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 70,	/* 70 (abs: 01277) */
/* 01209 */ HB_P_LINEOFFSET, 51,	/* 64 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_BC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 01277 */ HB_P_LINEOFFSET, 53,	/* 66 */
	HB_P_MESSAGE, 36, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 37,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 41, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01298 */ HB_P_LINEOFFSET, 54,	/* 67 */
	HB_P_MESSAGE, 36, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 37,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01322 */ HB_P_LINEOFFSET, 55,	/* 68 */
	HB_P_PUSHSYMNEAR, 12,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 01385) */
/* 01335 */ HB_P_LINEOFFSET, 56,	/* 69 */
	HB_P_PUSHSYMNEAR, 38,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'n', 'a', 'o', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', ' ', 'n', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 193, 251,	/* -1087 (abs: 00295) */
/* 01385 */ HB_P_LINEOFFSET, 59,	/* 72 */
	HB_P_PUSHSYMNEAR, 39,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 80,	/* 80 (abs: 01479) */
/* 01401 */ HB_P_LINEOFFSET, 60,	/* 73 */
	HB_P_PUSHSYMNEAR, 38,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	'E', 's', 't', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'e', 's', 't', 'a', 'r', ' ', 's', 'e', 'm', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'e', ' ', 'b', 'a', 'r', 'r', 'a', ',', ' ', 'N', 'a', 'o', ' ', 'p', 'o', 'd', 'e', ' ', 's', 'e', 'r', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 99, 251,	/* -1181 (abs: 00295) */
/* 01479 */ HB_P_LINEOFFSET, 63,	/* 76 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 34,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 01496) */
	HB_P_PUSHLOCALNEAR, 34,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01508) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 01560) */
/* 01510 */ HB_P_LINEOFFSET, 64,	/* 77 */
	HB_P_PUSHSYMNEAR, 38,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'E', 's', 't', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'N', 'A', 'O', ' ', 'e', 's', 't', 'a', 'r', ' ', 'e', 'm', ' ', 'P', 'R', 'O', 'M', 'O', 'C', 'A', 'O', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 77,	/* 77 (abs: 01635) */
/* 01560 */ HB_P_LINEOFFSET, 65,	/* 78 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 01581) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 34,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 01589) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 34,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 01635) */
/* 01591 */ HB_P_LINEOFFSET, 66,	/* 79 */
	HB_P_PUSHSYMNEAR, 38,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'E', 's', 't', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'e', 's', 't', 'a', 'r', ' ', 'e', 'm', ' ', 'P', 'R', 'O', 'M', 'O', 'C', 'A', 'O', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01635 */ HB_P_LINEOFFSET, 69,	/* 82 */
	HB_P_PUSHSYMNEAR, 15,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01644 */ HB_P_LINEOFFSET, 70,	/* 83 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 34, 0,	/* 34*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01673 */ HB_P_LINEOFFSET, 71,	/* 84 */
	HB_P_PUSHSYMNEAR, 15,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01681 */ HB_P_LINEOFFSET, 72,	/* 85 */
	HB_P_PUSHSYMNEAR, 35,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 2, 0,	/* MCOD_BC */
/* 01698 */ HB_P_LINEOFFSET, 73,	/* 86 */
	HB_P_LOCALNEARSETINT, 36, 0, 0,	/* MPRECO1 0*/
/* 01704 */ HB_P_LINEOFFSET, 74,	/* 87 */
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 101,	/* 101 (abs: 01816) */
/* 01717 */ HB_P_LINEOFFSET, 76,	/* 89 */
	HB_P_PUSHSYMNEAR, 40,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 103,	/* 103 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 40,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 103,	/* 103 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 36,	/* MPRECO1 */
/* 01773 */ HB_P_LINEOFFSET, 77,	/* 90 */
	HB_P_PUSHSYMNEAR, 40,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 103,	/* 103 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 37,	/* MPRECO2 */
/* 01797 */ HB_P_LINEOFFSET, 78,	/* 91 */
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '*', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 40,	/* MDESCRI */
	HB_P_JUMPNEAR, 61,	/* 61 (abs: 01875) */
/* 01816 */ HB_P_LINEOFFSET, 80,	/* 93 */
	HB_P_PUSHSYMNEAR, 40,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 103,	/* 103 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 36,	/* MPRECO1 */
/* 01840 */ HB_P_LINEOFFSET, 81,	/* 94 */
	HB_P_PUSHSYMNEAR, 40,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 103,	/* 103 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 37,	/* MPRECO2 */
/* 01864 */ HB_P_LINEOFFSET, 82,	/* 95 */
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 40,	/* MDESCRI */
/* 01875 */ HB_P_LINEOFFSET, 84,	/* 97 */
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 38,	/* MUNIDADE */
/* 01886 */ HB_P_LINEOFFSET, 85,	/* 98 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', '2', ' ', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* ROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 25,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	35, 0,	/* MCOD_BC1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01989) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01994) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'b', 'c', '1', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 15, 0,	/* 15 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	34, 0,	/* OP_OPCAO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02043 */ HB_P_LINEOFFSET, 86,	/* 99 */
	HB_P_PUSHSYMNEAR, 30,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 27, 0,	/* GETLIST */
/* 02065 */ HB_P_LINEOFFSET, 87,	/* 100 */
	HB_P_PUSHSYMNEAR, 39,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MCOD_BC1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 68, 1,	/* 324 (abs: 02398) */
/* 02077 */ HB_P_LINEOFFSET, 88,	/* 101 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 41,	/* CONS_MERC */
/* 02084 */ HB_P_LINEOFFSET, 89,	/* 102 */
	HB_P_PUSHSYMNEAR, 12,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MCOD_BC1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 59,	/* 59 (abs: 02155) */
/* 02098 */ HB_P_LINEOFFSET, 90,	/* 103 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MCOD_BC1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 69,	/* 69 (abs: 02222) */
/* 02155 */ HB_P_LINEOFFSET, 92,	/* 105 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MCOD_BC1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 02222 */ HB_P_LINEOFFSET, 94,	/* 107 */
	HB_P_MESSAGE, 36, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 37,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 41, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02243 */ HB_P_LINEOFFSET, 95,	/* 108 */
	HB_P_MESSAGE, 36, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 37,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02267 */ HB_P_LINEOFFSET, 96,	/* 109 */
	HB_P_PUSHSYMNEAR, 12,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 02330) */
/* 02280 */ HB_P_LINEOFFSET, 97,	/* 110 */
	HB_P_PUSHSYMNEAR, 38,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'n', 'a', 'o', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', ' ', 'n', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 16, 248,	/* -2032 (abs: 00295) */
/* 02330 */ HB_P_LINEOFFSET, 100,	/* 113 */
	HB_P_PUSHSYMNEAR, 15,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 02339 */ HB_P_LINEOFFSET, 101,	/* 114 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 34, 0,	/* 34*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02368 */ HB_P_LINEOFFSET, 102,	/* 115 */
	HB_P_PUSHSYMNEAR, 15,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 02376 */ HB_P_LINEOFFSET, 103,	/* 116 */
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 37,	/* MPRECO2 */
/* 02387 */ HB_P_LINEOFFSET, 104,	/* 117 */
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 39,	/* MUNIDADE1 */
/* 02398 */ HB_P_LINEOFFSET, 106,	/* 119 */
	HB_P_PUSHSYMNEAR, 20,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02413) */
	HB_P_JUMP, 104, 27,	/* 7016 (abs: 09426) */
/* 02413 */ HB_P_LINEOFFSET, 109,	/* 122 */
	HB_P_PUSHSYMNEAR, 39,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 77,	/* 77 (abs: 02504) */
/* 02429 */ HB_P_LINEOFFSET, 110,	/* 123 */
	HB_P_PUSHSYMNEAR, 38,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	'E', 's', 't', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'e', 's', 't', 'a', 'r', ' ', 's', 'e', 'm', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'e', ' ', 'b', 'a', 'r', 'r', 'a', ',', ' ', 'N', 'a', 'o', ' ', 'p', 'o', 'd', 'e', ' ', 's', 'e', 'r', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 02504 */ HB_P_LINEOFFSET, 113,	/* 126 */
	HB_P_PUSHLOCALNEAR, 34,	/* OP_OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 173, 0,	/* 173 (abs: 02683) */
/* 02513 */ HB_P_LINEOFFSET, 114,	/* 127 */
	HB_P_LOCALNEARSETSTR, 27, 16, 0,	/* MLIN_PRE 16*/
	'1', '3', '2', '4', '0', '0', '0', '0', '0', '0', '0', '0', '2', '0', '0', 0, 
/* 02535 */ HB_P_LINEOFFSET, 115,	/* 128 */
	HB_P_LOCALNEARSETSTR, 21, 16, 0,	/* MLIN_COD 16*/
	'1', 'F', '6', '3', '0', '3', '0', '0', '0', '1', '0', '0', '0', '1', '5', 0, 
/* 02557 */ HB_P_LINEOFFSET, 116,	/* 129 */
	HB_P_LOCALNEARSETSTR, 24, 16, 0,	/* MLIN_DESC 16*/
	'1', '3', '1', '1', '0', '0', '0', '0', '0', '7', '0', '0', '0', '1', '5', 0, 
/* 02579 */ HB_P_LINEOFFSET, 117,	/* 130 */
	HB_P_LOCALNEARSETSTR, 28, 16, 0,	/* MLIN_OBS 16*/
	'1', '2', '1', '1', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1', '5', 0, 
/* 02601 */ HB_P_LINEOFFSET, 118,	/* 131 */
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* EDESCRI */
/* 02625 */ HB_P_LINEOFFSET, 119,	/* 132 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', '$', ' ', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MPRECO1 */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MPRECO */
/* 02664 */ HB_P_LINEOFFSET, 120,	/* 133 */
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 16,	/* ECODI */
	HB_P_JUMP, 48, 5,	/* 1328 (abs: 04008) */
/* 02683 */ HB_P_LINEOFFSET, 121,	/* 134 */
	HB_P_PUSHLOCALNEAR, 34,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 147, 0,	/* 147 (abs: 02837) */
/* 02693 */ HB_P_LINEOFFSET, 122,	/* 135 */
	HB_P_LOCALNEARSETSTR, 24, 16, 0,	/* MLIN_DESC 16*/
	'1', '2', '1', '2', '0', '0', '0', '0', '0', '8', '0', '0', '0', '1', '5', 0, 
/* 02715 */ HB_P_LINEOFFSET, 123,	/* 136 */
	HB_P_LOCALNEARSETSTR, 21, 16, 0,	/* MLIN_COD 16*/
	'1', 'F', '6', '2', '0', '3', '0', '0', '0', '3', '0', '0', '0', '1', '5', 0, 
/* 02737 */ HB_P_LINEOFFSET, 126,	/* 139 */
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* EDESCRI */
/* 02761 */ HB_P_LINEOFFSET, 127,	/* 140 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', '$', ' ', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MPRECO2 */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MPRECO */
/* 02800 */ HB_P_LINEOFFSET, 128,	/* 141 */
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 16,	/* ECODI */
/* 02816 */ HB_P_LINEOFFSET, 129,	/* 142 */
	HB_P_LOCALNEARSETSTR, 29, 12, 0,	/* MOBS 12*/
	'S', '/', 'J', 'U', 'R', 'O', 'S', ' ', ' ', ' ', ' ', 0, 
	HB_P_JUMP, 150, 4,	/* 1174 (abs: 04008) */
/* 02837 */ HB_P_LINEOFFSET, 130,	/* 143 */
	HB_P_PUSHLOCALNEAR, 34,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 138, 0,	/* 138 (abs: 02982) */
/* 02847 */ HB_P_LINEOFFSET, 131,	/* 144 */
	HB_P_LOCALNEARSETSTR, 21, 16, 0,	/* MLIN_COD 16*/
	'1', 'F', '4', '2', '0', '2', '0', '0', '0', '1', '0', '0', '0', '0', '4', 0, 
/* 02869 */ HB_P_LINEOFFSET, 132,	/* 145 */
	HB_P_LOCALNEARSETSTR, 22, 16, 0,	/* MLIN_COD1 16*/
	'1', 'F', '4', '2', '0', '2', '0', '0', '0', '1', '0', '0', '1', '1', '0', 0, 
/* 02891 */ HB_P_LINEOFFSET, 133,	/* 146 */
	HB_P_LOCALNEARSETSTR, 23, 16, 0,	/* MLIN_COD2 16*/
	'1', 'F', '4', '2', '0', '2', '0', '0', '0', '1', '0', '0', '2', '1', '7', 0, 
/* 02913 */ HB_P_LINEOFFSET, 134,	/* 147 */
	HB_P_LOCALNEARSETSTR, 24, 16, 0,	/* MLIN_DESC 16*/
	'1', '1', '0', '0', '0', '0', '0', '0', '0', '4', '0', '0', '0', '0', '4', 0, 
/* 02935 */ HB_P_LINEOFFSET, 135,	/* 148 */
	HB_P_LOCALNEARSETSTR, 25, 16, 0,	/* MLIN_DESC1 16*/
	'1', '1', '0', '0', '0', '0', '0', '0', '0', '4', '0', '0', '1', '1', '2', 0, 
/* 02957 */ HB_P_LINEOFFSET, 136,	/* 149 */
	HB_P_LOCALNEARSETSTR, 26, 16, 0,	/* MLIN_DESC2 16*/
	'1', '1', '0', '0', '0', '0', '0', '0', '0', '4', '0', '0', '2', '1', '9', 0, 
	HB_P_JUMP, 5, 4,	/* 1029 (abs: 04008) */
/* 02982 */ HB_P_LINEOFFSET, 137,	/* 150 */
	HB_P_PUSHLOCALNEAR, 34,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 138, 0,	/* 138 (abs: 03127) */
/* 02992 */ HB_P_LINEOFFSET, 138,	/* 151 */
	HB_P_LOCALNEARSETSTR, 21, 16, 0,	/* MLIN_COD 16*/
	'1', 'F', '4', '2', '0', '2', '0', '0', '0', '1', '0', '0', '0', '0', '2', 0, 
/* 03014 */ HB_P_LINEOFFSET, 139,	/* 152 */
	HB_P_LOCALNEARSETSTR, 22, 16, 0,	/* MLIN_COD1 16*/
	'1', 'F', '4', '2', '0', '2', '0', '0', '0', '1', '0', '0', '1', '2', '0', 0, 
/* 03036 */ HB_P_LINEOFFSET, 140,	/* 153 */
	HB_P_LOCALNEARSETSTR, 23, 16, 0,	/* MLIN_COD2 16*/
	'1', 'F', '4', '2', '0', '2', '0', '0', '0', '1', '0', '0', '2', '4', '0', 0, 
/* 03058 */ HB_P_LINEOFFSET, 141,	/* 154 */
	HB_P_LOCALNEARSETSTR, 24, 16, 0,	/* MLIN_DESC 16*/
	'1', '1', '0', '0', '0', '0', '0', '0', '0', '4', '0', '0', '0', '0', '2', 0, 
/* 03080 */ HB_P_LINEOFFSET, 142,	/* 155 */
	HB_P_LOCALNEARSETSTR, 25, 16, 0,	/* MLIN_DESC1 16*/
	'1', '1', '0', '0', '0', '0', '0', '0', '0', '4', '0', '0', '1', '2', '2', 0, 
/* 03102 */ HB_P_LINEOFFSET, 143,	/* 156 */
	HB_P_LOCALNEARSETSTR, 26, 16, 0,	/* MLIN_DESC2 16*/
	'1', '1', '0', '0', '0', '0', '0', '0', '0', '4', '0', '0', '2', '4', '0', 0, 
	HB_P_JUMP, 116, 3,	/* 884 (abs: 04008) */
/* 03127 */ HB_P_LINEOFFSET, 144,	/* 157 */
	HB_P_PUSHLOCALNEAR, 34,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 166, 0,	/* 166 (abs: 03300) */
/* 03137 */ HB_P_LINEOFFSET, 145,	/* 158 */
	HB_P_LOCALNEARSETSTR, 24, 16, 0,	/* MLIN_DESC 16*/
	'1', '3', '1', '1', '0', '0', '0', '0', '3', '4', '0', '0', '0', '1', '5', 0, 
/* 03159 */ HB_P_LINEOFFSET, 146,	/* 159 */
	HB_P_LOCALNEARSETSTR, 27, 16, 0,	/* MLIN_PRE 16*/
	'1', '4', '2', '5', '0', '0', '0', '0', '2', '0', '0', '0', '0', '5', '0', 0, 
/* 03181 */ HB_P_LINEOFFSET, 147,	/* 160 */
	HB_P_LOCALNEARSETSTR, 28, 16, 0,	/* MLIN_OBS 16*/
	'1', '3', '3', '0', '0', '0', '0', '0', '1', '6', '0', '0', '2', '5', '0', 0, 
/* 03203 */ HB_P_LINEOFFSET, 148,	/* 161 */
	HB_P_LOCALNEARSETSTR, 21, 16, 0,	/* MLIN_COD 16*/
	'1', 'F', '6', '3', '0', '6', '0', '0', '0', '4', '0', '0', '0', '1', '5', 0, 
/* 03225 */ HB_P_LINEOFFSET, 149,	/* 162 */
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* EDESCRI */
/* 03249 */ HB_P_LINEOFFSET, 150,	/* 163 */
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MPRECO2 */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* MPRECO */
/* 03281 */ HB_P_LINEOFFSET, 151,	/* 164 */
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 16,	/* ECODI */
	HB_P_JUMP, 199, 2,	/* 711 (abs: 04008) */
/* 03300 */ HB_P_LINEOFFSET, 152,	/* 165 */
	HB_P_PUSHLOCALNEAR, 34,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 20, 1,	/* 276 (abs: 03583) */
/* 03310 */ HB_P_LINEOFFSET, 153,	/* 166 */
	HB_P_LOCALNEARSETSTR, 24, 16, 0,	/* MLIN_DESC 16*/
	'1', '3', '1', '0', '0', '0', '0', '0', '0', '8', '0', '0', '0', '0', '5', 0, 
/* 03332 */ HB_P_LINEOFFSET, 154,	/* 167 */
	HB_P_LOCALNEARSETSTR, 25, 16, 0,	/* MLIN_DESC1 16*/
	'1', '3', '1', '1', '0', '0', '0', '0', '0', '4', '0', '0', '0', '0', '5', 0, 
/* 03354 */ HB_P_LINEOFFSET, 155,	/* 168 */
	HB_P_LOCALNEARSETSTR, 26, 16, 0,	/* MLIN_DESC2 16*/
	'1', '3', '1', '1', '0', '0', '0', '0', '0', '1', '0', '0', '0', '0', '5', 0, 
/* 03376 */ HB_P_LINEOFFSET, 156,	/* 169 */
	HB_P_LOCALNEARSETSTR, 27, 16, 0,	/* MLIN_PRE 16*/
	'1', '2', '2', '3', '0', '0', '0', '0', '0', '4', '0', '0', '1', '5', '0', 0, 
/* 03398 */ HB_P_LINEOFFSET, 157,	/* 170 */
	HB_P_LOCALNEARSETSTR, 28, 16, 0,	/* MLIN_OBS 16*/
	'1', '4', '1', '1', '0', '0', '0', '0', '0', '1', '0', '0', '1', '6', '0', 0, 
/* 03420 */ HB_P_LINEOFFSET, 158,	/* 171 */
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_BC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 40,	/* MDESCRI */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* EDESCRI */
/* 03442 */ HB_P_LINEOFFSET, 159,	/* 172 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'D', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_BC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* EDESCRI1 */
/* 03465 */ HB_P_LINEOFFSET, 160,	/* 173 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'D', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MCOD_BC1 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* EDESCRI2 */
/* 03488 */ HB_P_LINEOFFSET, 161,	/* 174 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', '$', ' ', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MPRECO1 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 38,	/* MUNIDADE */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MPRECO */
/* 03534 */ HB_P_LINEOFFSET, 162,	/* 175 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', '$', ' ', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MPRECO2 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MUNIDADE1 */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 29,	/* MOBS */
	HB_P_JUMP, 172, 1,	/* 428 (abs: 04008) */
/* 03583 */ HB_P_LINEOFFSET, 163,	/* 176 */
	HB_P_PUSHLOCALNEAR, 34,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 155, 0,	/* 155 (abs: 03745) */
/* 03593 */ HB_P_LINEOFFSET, 164,	/* 177 */
	HB_P_LOCALNEARSETSTR, 24, 16, 0,	/* MLIN_DESC 16*/
	'1', '1', '0', '0', '0', '0', '0', '0', '0', '9', '0', '0', '0', '0', '5', 0, 
/* 03615 */ HB_P_LINEOFFSET, 165,	/* 178 */
	HB_P_LOCALNEARSETSTR, 21, 16, 0,	/* MLIN_COD 16*/
	'1', 'F', '6', '2', '0', '3', '0', '0', '0', '4', '0', '0', '0', '1', '5', 0, 
/* 03637 */ HB_P_LINEOFFSET, 166,	/* 179 */
	HB_P_LOCALNEARSETSTR, 27, 16, 0,	/* MLIN_PRE 16*/
	'1', '2', '2', '3', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1', '0', 0, 
/* 03659 */ HB_P_LINEOFFSET, 167,	/* 180 */
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* EDESCRI */
/* 03683 */ HB_P_LINEOFFSET, 168,	/* 181 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', '$', ' ', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MPRECO */
/* 03726 */ HB_P_LINEOFFSET, 169,	/* 182 */
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 16,	/* ECODI */
	HB_P_JUMP, 10, 1,	/* 266 (abs: 04008) */
/* 03745 */ HB_P_LINEOFFSET, 170,	/* 183 */
	HB_P_PUSHLOCALNEAR, 34,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 0, 1,	/* 256 (abs: 04008) */
/* 03755 */ HB_P_LINEOFFSET, 171,	/* 184 */
	HB_P_LOCALNEARSETSTR, 24, 16, 0,	/* MLIN_DESC 16*/
	'1', '1', '0', '0', '0', '0', '0', '0', '0', '8', '0', '0', '0', '2', '0', 0, 
/* 03777 */ HB_P_LINEOFFSET, 172,	/* 185 */
	HB_P_LOCALNEARSETSTR, 25, 16, 0,	/* MLIN_DESC1 16*/
	'1', '1', '0', '0', '0', '0', '0', '0', '0', '8', '0', '0', '1', '9', '0', 0, 
/* 03799 */ HB_P_LINEOFFSET, 173,	/* 186 */
	HB_P_LOCALNEARSETSTR, 21, 16, 0,	/* MLIN_COD 16*/
	'1', 'F', '6', '2', '0', '3', '0', '0', '0', '3', '0', '0', '0', '2', '0', 0, 
/* 03821 */ HB_P_LINEOFFSET, 174,	/* 187 */
	HB_P_LOCALNEARSETSTR, 22, 16, 0,	/* MLIN_COD1 16*/
	'1', 'F', '6', '2', '0', '3', '0', '0', '0', '3', '0', '0', '2', '0', '0', 0, 
/* 03843 */ HB_P_LINEOFFSET, 175,	/* 188 */
	HB_P_LOCALNEARSETSTR, 27, 16, 0,	/* MLIN_PRE 16*/
	'1', '2', '2', '3', '0', '0', '0', '0', '0', '0', '0', '0', '0', '2', '0', 0, 
/* 03865 */ HB_P_LINEOFFSET, 176,	/* 189 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'1', '2', '2', '3', '0', '0', '0', '0', '0', '0', '0', '0', '2', '0', '0', 0, 
	HB_P_POPVARIABLE, 44, 0,	/* MLIN_PRE1 */
/* 03888 */ HB_P_LINEOFFSET, 177,	/* 190 */
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* EDESCRI */
/* 03920 */ HB_P_LINEOFFSET, 178,	/* 191 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 46, 0,	/* EDESCR1 */
/* 03949 */ HB_P_LINEOFFSET, 179,	/* 192 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', '$', ' ', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MPRECO */
/* 03992 */ HB_P_LINEOFFSET, 180,	/* 193 */
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 16,	/* ECODI */
/* 04008 */ HB_P_LINEOFFSET, 182,	/* 195 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'P', 'R', 'E', 'C', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* ROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 25,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MPRECO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04096) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04101) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'p', 'r', 'e', 'c', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 15, 0,	/* 15 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	34, 0,	/* OP_OPCAO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04144 */ HB_P_LINEOFFSET, 183,	/* 196 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHSYMNEAR, 25,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'T', 'i', 'p', 'o', ' ', 'L', 'e', 't', 'r', 'a', ' ', '[', 'P', ']', 'e', 'q', 'u', 'e', 'n', 'a', ' ', '[', 'G', ']', 'r', 'a', 'n', 'd', 'e', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* ROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 25,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	33, 0,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04249) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04254) */
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
	33, 0,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'P', ',', 'G', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 15, 0,	/* 15 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	34, 0,	/* OP_OPCAO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04319 */ HB_P_LINEOFFSET, 184,	/* 197 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'F', 'o', 'r', 'm', 'a', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* ROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 25,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	31, 0,	/* MFORMA_PG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04407) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04412) */
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
	34, 0,	/* OP_OPCAO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04462 */ HB_P_LINEOFFSET, 185,	/* 198 */
	HB_P_PUSHSYMNEAR, 30,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 27, 0,	/* GETLIST */
/* 04484 */ HB_P_LINEOFFSET, 186,	/* 199 */
	HB_P_PUSHSYMNEAR, 20,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04499) */
	HB_P_JUMP, 66, 19,	/* 4930 (abs: 09426) */
/* 04499 */ HB_P_LINEOFFSET, 189,	/* 202 */
	HB_P_PUSHLOCALNEAR, 34,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 103,	/* 103 (abs: 04609) */
/* 04508 */ HB_P_LINEOFFSET, 199,	/* 212 */
	HB_P_PUSHLOCALNEAR, 33,	/* MLETRA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 04565) */
/* 04519 */ HB_P_LINEOFFSET, 200,	/* 213 */
	HB_P_LOCALNEARSETSTR, 28, 16, 0,	/* MLIN_OBS 16*/
	'1', '2', '2', '3', '0', '0', '0', '0', '0', '2', '0', '0', '1', '5', '0', 0, 
/* 04541 */ HB_P_LINEOFFSET, 201,	/* 214 */
	HB_P_LOCALNEARSETSTR, 27, 16, 0,	/* MLIN_PRE 16*/
	'1', '3', '1', '1', '0', '0', '0', '0', '0', '6', '0', '0', '1', '5', '0', 0, 
	HB_P_JUMPNEAR, 46,	/* 46 (abs: 04609) */
/* 04565 */ HB_P_LINEOFFSET, 203,	/* 216 */
	HB_P_LOCALNEARSETSTR, 28, 16, 0,	/* MLIN_OBS 16*/
	'1', '3', '1', '1', '0', '0', '0', '0', '0', '6', '0', '0', '1', '5', '0', 0, 
/* 04587 */ HB_P_LINEOFFSET, 204,	/* 217 */
	HB_P_LOCALNEARSETSTR, 27, 16, 0,	/* MLIN_PRE 16*/
	'1', '2', '2', '3', '0', '0', '0', '0', '0', '2', '0', '0', '1', '5', '0', 0, 
/* 04609 */ HB_P_LINEOFFSET, 217,	/* 230 */
	HB_P_PUSHLOCALNEAR, 31,	/* MFORMA_PG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 04631) */
/* 04617 */ HB_P_LINEOFFSET, 218,	/* 231 */
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 31,	/* MFORMA_PG */
	HB_P_DIVIDE,
	HB_P_POPLOCALNEAR, 32,	/* MPARCELA */
/* 04631 */ HB_P_LINEOFFSET, 220,	/* 233 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'V', 'a', 'l', 'o', 'r', ' ', 'P', 'a', 'r', 'c', 'e', 'l', 'a', 'd', 'o', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* ROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 25,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	32, 0,	/* MPARCELA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04719) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04724) */
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
	34, 0,	/* OP_OPCAO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04769 */ HB_P_LINEOFFSET, 221,	/* 234 */
	HB_P_PUSHSYMNEAR, 30,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 27, 0,	/* GETLIST */
/* 04791 */ HB_P_LINEOFFSET, 222,	/* 235 */
	HB_P_PUSHSYMNEAR, 20,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04806) */
	HB_P_JUMP, 100, 238,	/* -4508 (abs: 00295) */
/* 04806 */ HB_P_LINEOFFSET, 225,	/* 238 */
	HB_P_PUSHLOCALNEAR, 34,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 176, 0,	/* 176 (abs: 04989) */
/* 04816 */ HB_P_LINEOFFSET, 226,	/* 239 */
	HB_P_PUSHLOCALNEAR, 32,	/* MPARCELA */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 04878) */
/* 04824 */ HB_P_LINEOFFSET, 227,	/* 240 */
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* MFORMA_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'x', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MPARCELA */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 29,	/* MOBS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 29,	/* MOBS */
	HB_P_JUMPNEAR, 113,	/* 113 (abs: 04989) */
/* 04878 */ HB_P_LINEOFFSET, 228,	/* 241 */
	HB_P_PUSHLOCALNEAR, 31,	/* MFORMA_PG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 04909) */
/* 04886 */ HB_P_LINEOFFSET, 229,	/* 242 */
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* MFORMA_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'x', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 29,	/* MOBS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 29,	/* MOBS */
	HB_P_JUMPNEAR, 82,	/* 82 (abs: 04989) */
/* 04909 */ HB_P_LINEOFFSET, 230,	/* 243 */
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 04965) */
/* 04922 */ HB_P_LINEOFFSET, 231,	/* 244 */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'P', 'O', 'R', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MPRECO1 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 29,	/* MOBS */
	HB_P_JUMPNEAR, 26,	/* 26 (abs: 04989) */
/* 04965 */ HB_P_LINEOFFSET, 233,	/* 246 */
	HB_P_LOCALNEARSETSTR, 29, 18, 0,	/* MOBS 18*/
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
/* 04989 */ HB_P_LINEOFFSET, 236,	/* 249 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* ROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 25,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* MOBS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05066) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05071) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'o', 'b', 's', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 15, 0,	/* 15 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	34, 0,	/* OP_OPCAO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05112 */ HB_P_LINEOFFSET, 237,	/* 250 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'P', 'r', 'e', 'c', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* ROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 25,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	42, 0,	/* MIMP_PRECO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05209) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05214) */
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
	42, 0,	/* MIMP_PRECO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 15, 0,	/* 15 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	34, 0,	/* OP_OPCAO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05283 */ HB_P_LINEOFFSET, 238,	/* 251 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'T', 'a', 'm', 'a', 'n', 'h', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* ROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 25,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	45, 0,	/* MTAM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05380) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05385) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 't', 'a', 'm', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 15, 0,	/* 15 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	34, 0,	/* OP_OPCAO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05430 */ HB_P_LINEOFFSET, 239,	/* 252 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* ROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 25,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* QTDE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05527) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05532) */
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
	9, 0,	/* QTDE */
	HB_P_PUSHSYMNEAR, 39,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05569) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 05570) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05588 */ HB_P_LINEOFFSET, 240,	/* 253 */
	HB_P_PUSHSYMNEAR, 30,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 27, 0,	/* GETLIST */
/* 05610 */ HB_P_LINEOFFSET, 241,	/* 254 */
	HB_P_PUSHSYMNEAR, 20,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05625) */
	HB_P_JUMP, 49, 235,	/* -5327 (abs: 00295) */
/* 05625 */ HB_P_LINEOFFSET, 244,	/* 257 */
	HB_P_PUSHSYMNEAR, 47,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 6,	/* OPCAO */
/* 05662 */ HB_P_LINEOFFSET, 245,	/* 258 */
	HB_P_PUSHLOCALNEAR, 6,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05676) */
	HB_P_JUMP, 254, 234,	/* -5378 (abs: 00295) */
/* 05676 */ HB_P_LINE, 13, 1,	/* 269 */
	HB_P_PUSHSYMNEAR, 48,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'P', 'R', 'I', 'N', 'T', 'E', 'R', 0, 
	HB_P_DOSHORT, 2,
/* 05696 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_PUSHSYMNEAR, 48,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 05711 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 49, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'H', 'T', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 7, 0,	/* IMP_ARQ */
/* 05741 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHSYMNEAR, 48,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHVARIABLE, 7, 0,	/* IMP_ARQ */
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 05755 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHLOCALNEAR, 34,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 05772) */
	HB_P_PUSHLOCALNEAR, 34,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 218, 1,	/* 474 (abs: 06246) */
/* 05775 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_ONE,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 14,	/* EDESCRI */
/* 05808 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 15,	/* EDESCRI1 */
/* 05842 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 16,	/* ECODI */
/* 05859 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	2, 'q', 'A', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05884 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	2, 'V', '0', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05909 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	2, 'L', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05933 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'H', '1', '1', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05958 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'P', 'A', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05982 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'A', '2', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06006 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', '1', '1', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06031 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MLIN_DESC */
	HB_P_PUSHLOCALNEAR, 14,	/* EDESCRI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06055 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MLIN_DESC1 */
	HB_P_PUSHLOCALNEAR, 14,	/* EDESCRI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06079 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MLIN_DESC2 */
	HB_P_PUSHLOCALNEAR, 14,	/* EDESCRI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06103 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHSYMNEAR, 39,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* ECODI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 74,	/* 74 (abs: 06187) */
/* 06115 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MLIN_COD */
	HB_P_PUSHLOCALNEAR, 16,	/* ECODI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06139 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MLIN_COD1 */
	HB_P_PUSHLOCALNEAR, 16,	/* ECODI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06163 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MLIN_COD2 */
	HB_P_PUSHLOCALNEAR, 16,	/* ECODI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06187 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'Q', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* QTDE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06220 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 232, 11,	/* 3048 (abs: 09291) */
/* 06246 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHLOCALNEAR, 34,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 6, 2,	/* 518 (abs: 06772) */
/* 06257 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	2, 'q', 'A', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06282 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	2, 'e', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06306 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	2, 'K', 'I', '5', '0', '8', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06334 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	2, 'O', '0', '2', '2', '0', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06362 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	2, 'f', '2', '2', '0', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06389 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	2, 'K', 'W', '0', '3', '9', '4', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06418 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	2, 'K', 'I', '0', '0', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06445 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	2, 'V', '0', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06470 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	2, 'L', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06494 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'H', '1', '1', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06519 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'P', 'A', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06543 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'A', '2', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06567 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', '1', '1', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06592 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MLIN_DESC */
	HB_P_PUSHLOCALNEAR, 14,	/* EDESCRI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06616 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MLIN_DESC1 */
	HB_P_PUSHLOCALNEAR, 15,	/* EDESCRI1 */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06640 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MLIN_DESC2 */
	HB_P_PUSHVARIABLE, 43, 0,	/* EDESCRI2 */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06665 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MLIN_PRE */
	HB_P_PUSHLOCALNEAR, 13,	/* MPRECO */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06689 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* MLIN_OBS */
	HB_P_PUSHLOCALNEAR, 29,	/* MOBS */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06713 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'Q', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* QTDE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06746 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 218, 9,	/* 2522 (abs: 09291) */
/* 06772 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHLOCALNEAR, 34,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 147, 1,	/* 403 (abs: 07183) */
/* 06783 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	2, 'q', 'A', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06808 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	2, 'V', '0', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06833 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	2, 'L', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06857 */ HB_P_LINE, 79, 1,	/* 335 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'H', '1', '1', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06882 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'P', 'A', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06906 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'A', '2', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06930 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', '1', '1', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06955 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MLIN_DESC */
	HB_P_PUSHLOCALNEAR, 14,	/* EDESCRI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06979 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MLIN_DESC1 */
	HB_P_PUSHLOCALNEAR, 14,	/* EDESCRI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07003 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHSYMNEAR, 39,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* ECODI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 50,	/* 50 (abs: 07063) */
/* 07015 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MLIN_COD */
	HB_P_PUSHLOCALNEAR, 16,	/* ECODI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07039 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MLIN_COD1 */
	HB_P_PUSHLOCALNEAR, 16,	/* ECODI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07063 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_PUSHLOCALNEAR, 42,	/* MIMP_PRECO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 07124) */
/* 07075 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MLIN_PRE */
	HB_P_PUSHLOCALNEAR, 13,	/* MPRECO */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07099 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 44, 0,	/* MLIN_PRE1 */
	HB_P_PUSHLOCALNEAR, 13,	/* MPRECO */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07124 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'Q', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* QTDE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07157 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 63, 8,	/* 2111 (abs: 09291) */
/* 07183 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHLOCALNEAR, 34,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 220, 5,	/* 1500 (abs: 08691) */
/* 07194 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_ONE,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 14,	/* EDESCRI */
/* 07227 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 15,	/* EDESCRI1 */
/* 07261 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 16,	/* ECODI */
/* 07278 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	2, 'q', 'A', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07303 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	2, 'V', '0', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07328 */ HB_P_LINE, 105, 1,	/* 361 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	2, 'L', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07352 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'H', '1', '1', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07377 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'P', 'A', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07401 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'A', '2', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07425 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', '1', '1', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07450 */ HB_P_LINE, 112, 1,	/* 368 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'1', '0', '1', '2', '0', '0', '0', '0', '1', '9', '0', '0', '0', '2', '0', 0, 
	HB_P_PUSHLOCALNEAR, 43,	/* MCAB */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07490 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'1', '0', '1', '2', '0', '0', '0', '0', '1', '9', '0', '0', '1', '5', '5', 0, 
	HB_P_PUSHLOCALNEAR, 43,	/* MCAB */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07530 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'1', '0', '1', '2', '0', '0', '0', '0', '1', '9', '0', '0', '2', '9', '5', 0, 
	HB_P_PUSHLOCALNEAR, 43,	/* MCAB */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07570 */ HB_P_LINE, 116, 1,	/* 372 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'1', '0', '1', '2', '0', '0', '0', '0', '1', '8', '2', '0', '0', '2', '0', 0, 
	HB_P_PUSHLOCALNEAR, 44,	/* MCAB1 */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07610 */ HB_P_LINE, 117, 1,	/* 373 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'1', '0', '1', '2', '0', '0', '0', '0', '1', '8', '2', '0', '1', '5', '5', 0, 
	HB_P_PUSHLOCALNEAR, 44,	/* MCAB1 */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07650 */ HB_P_LINE, 118, 1,	/* 374 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'1', '0', '1', '2', '0', '0', '0', '0', '1', '8', '2', '0', '2', '9', '5', 0, 
	HB_P_PUSHLOCALNEAR, 44,	/* MCAB1 */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07690 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_PUSHSYMNEAR, 50,	/* __SETCENTURY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 07703 */ HB_P_LINE, 121, 1,	/* 377 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'1', '0', '1', '2', '0', '0', '0', '0', '1', '7', '2', '0', '0', '5', '0', 0, 
	HB_P_PUSHSYMNEAR, 51,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 52, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07749 */ HB_P_LINE, 122, 1,	/* 378 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'1', '0', '1', '2', '0', '0', '0', '0', '1', '7', '2', '0', '1', '9', '0', 0, 
	HB_P_PUSHSYMNEAR, 51,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 52, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07795 */ HB_P_LINE, 123, 1,	/* 379 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'1', '0', '1', '2', '0', '0', '0', '0', '1', '7', '2', '0', '3', '3', '0', 0, 
	HB_P_PUSHSYMNEAR, 51,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 52, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07841 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_PUSHSYMNEAR, 50,	/* __SETCENTURY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 1,
/* 07855 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'1', '2', '0', '0', '0', '0', '0', '0', '1', '5', '5', '0', '0', '0', '1', 0, 
	HB_P_PUSHLOCALNEAR, 14,	/* EDESCRI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07895 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'1', '2', '0', '0', '0', '0', '0', '0', '1', '5', '5', '0', '1', '4', '0', 0, 
	HB_P_PUSHLOCALNEAR, 14,	/* EDESCRI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07935 */ HB_P_LINE, 128, 1,	/* 384 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'1', '2', '0', '0', '0', '0', '0', '0', '1', '5', '5', '0', '2', '8', '0', 0, 
	HB_P_PUSHLOCALNEAR, 14,	/* EDESCRI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07975 */ HB_P_LINE, 130, 1,	/* 386 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'1', '3', '0', '0', '0', '0', '0', '0', '1', '3', '5', '0', '0', '2', '0', 'T', 'A', 'M', ':', 0, 
	HB_P_PUSHLOCALNEAR, 45,	/* MTAM */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08019 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'1', '3', '0', '0', '0', '0', '0', '0', '1', '3', '5', '0', '1', '6', '0', 'T', 'A', 'M', ':', 0, 
	HB_P_PUSHLOCALNEAR, 45,	/* MTAM */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08063 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'1', '3', '0', '0', '0', '0', '0', '0', '1', '3', '5', '0', '3', '0', '0', 'T', 'A', 'M', ':', 0, 
	HB_P_PUSHLOCALNEAR, 45,	/* MTAM */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08107 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'1', '2', '0', '0', '0', '0', '0', '0', '1', '2', '0', '0', '0', '0', '2', 'I', 'T', 'E', 'M', ' ', 'C', 'H', 'A', 'V', 'E', ':', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08168 */ HB_P_LINE, 135, 1,	/* 391 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'1', '2', '0', '0', '0', '0', '0', '0', '1', '2', '0', '0', '1', '4', '0', 'I', 'T', 'E', 'M', ' ', 'C', 'H', 'A', 'V', 'E', ':', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08229 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'1', '2', '0', '0', '0', '0', '0', '0', '1', '2', '0', '0', '2', '8', '0', 'I', 'T', 'E', 'M', ' ', 'C', 'H', 'A', 'V', 'E', ':', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08290 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'1', 'F', '4', '2', '0', '3', '0', '0', '0', '7', '5', '0', '0', '0', '2', 0, 
	HB_P_PUSHLOCALNEAR, 16,	/* ECODI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08330 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'1', 'F', '4', '2', '0', '3', '0', '0', '0', '7', '5', '0', '1', '4', '0', 0, 
	HB_P_PUSHLOCALNEAR, 16,	/* ECODI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08370 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'1', 'F', '4', '2', '0', '3', '0', '0', '0', '7', '5', '0', '2', '8', '0', 0, 
	HB_P_PUSHLOCALNEAR, 16,	/* ECODI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08410 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'1', '4', '1', '2', '0', '0', '0', '0', '0', '2', '0', '0', '0', '0', '2', 'R', '$', ':', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08484 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'1', '4', '1', '2', '0', '0', '0', '0', '0', '2', '0', '0', '1', '4', '0', 'R', '$', ':', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08558 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'1', '4', '1', '2', '0', '0', '0', '0', '0', '2', '0', '0', '2', '8', '0', 'R', '$', ':', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08632 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'Q', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* QTDE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08665 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 91, 2,	/* 603 (abs: 09291) */
/* 08691 */ HB_P_LINE, 151, 1,	/* 407 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	2, 'q', 'A', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08716 */ HB_P_LINE, 153, 1,	/* 409 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	2, 'e', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08740 */ HB_P_LINE, 154, 1,	/* 410 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	2, 'K', 'I', '5', '0', '8', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08768 */ HB_P_LINE, 155, 1,	/* 411 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	2, 'O', '0', '2', '2', '0', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08796 */ HB_P_LINE, 156, 1,	/* 412 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	2, 'f', '2', '2', '0', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08823 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	2, 'K', 'W', '0', '3', '9', '4', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08852 */ HB_P_LINE, 158, 1,	/* 414 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	2, 'K', 'I', '0', '0', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08879 */ HB_P_LINE, 159, 1,	/* 415 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	2, 'V', '0', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08904 */ HB_P_LINE, 160, 1,	/* 416 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	2, 'L', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08928 */ HB_P_LINE, 161, 1,	/* 417 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'H', '1', '0', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08953 */ HB_P_LINE, 162, 1,	/* 418 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'P', 'A', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08977 */ HB_P_LINE, 163, 1,	/* 419 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'A', '2', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 09001 */ HB_P_LINE, 164, 1,	/* 420 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', '1', '1', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 09026 */ HB_P_LINE, 166, 1,	/* 422 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MLIN_DESC */
	HB_P_PUSHLOCALNEAR, 14,	/* EDESCRI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 09050 */ HB_P_LINE, 167, 1,	/* 423 */
	HB_P_PUSHSYMNEAR, 39,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* ECODI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 26,	/* 26 (abs: 09086) */
/* 09062 */ HB_P_LINE, 168, 1,	/* 424 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MLIN_COD */
	HB_P_PUSHLOCALNEAR, 16,	/* ECODI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 09086 */ HB_P_LINE, 170, 1,	/* 426 */
	HB_P_PUSHLOCALNEAR, 34,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 57,	/* 57 (abs: 09151) */
/* 09096 */ HB_P_LINE, 171, 1,	/* 427 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MLIN_PRE */
	HB_P_PUSHLOCALNEAR, 13,	/* MPRECO */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 09120 */ HB_P_LINE, 172, 1,	/* 428 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* MLIN_OBS */
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 86,	/* 86 (abs: 09235) */
/* 09151 */ HB_P_LINE, 173, 1,	/* 429 */
	HB_P_PUSHLOCALNEAR, 34,	/* OP_OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 09211) */
/* 09161 */ HB_P_LINE, 174, 1,	/* 430 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MLIN_PRE */
	HB_P_PUSHLOCALNEAR, 13,	/* MPRECO */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 09185 */ HB_P_LINE, 175, 1,	/* 431 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* MLIN_OBS */
	HB_P_PUSHLOCALNEAR, 29,	/* MOBS */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 26,	/* 26 (abs: 09235) */
/* 09211 */ HB_P_LINE, 178, 1,	/* 434 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MLIN_PRE */
	HB_P_PUSHLOCALNEAR, 13,	/* MPRECO */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 09235 */ HB_P_LINE, 180, 1,	/* 436 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'Q', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* QTDE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 09268 */ HB_P_LINE, 181, 1,	/* 437 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_PUSHLOCALNEAR, 12,	/* ENTER */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 09291 */ HB_P_LINE, 183, 1,	/* 439 */
	HB_P_PUSHSYMNEAR, 48,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 48,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 48,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 09333 */ HB_P_LINE, 196, 1,	/* 452 */
	HB_P_PUSHSYMNEAR, 53,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'D', 'O', 'S', 'P', 'R', 'I', 'N', 'T', 'E', 'R', ' ', '/', 'R', 'A', 'W', ' ', '/', 'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 49, 0,	/* M_INDIV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 09388) */
	HB_P_PUSHMEMVAR, 49, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 09391) */
	HB_P_PUSHVARIABLE, 54, 0,	/* MDEFCAM_IMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'H', 'T', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09407 */ HB_P_LINE, 201, 1,	/* 457 */
	HB_P_PUSHSYMNEAR, 55,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_PUSHLOCALNEAR, 4,	/* LBA */
	HB_P_PUSHLOCALNEAR, 5,	/* CBA */
	HB_P_DOSHORT, 4,
	HB_P_JUMP, 88, 220,	/* -9128 (abs: 00295) */
/* 09426 */ HB_P_LINE, 203, 1,	/* 459 */
	HB_P_PUSHSYMNEAR, 19,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 09434 */ HB_P_LINE, 204, 1,	/* 460 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 09440 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

