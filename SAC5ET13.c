/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5ET13.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC5ET13.PRG /q /oC:\hti\SISCOM\SAC5ET13.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.02 16:10:55 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5ET13.PRG"

HB_FUNC( SAC5ET13 );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_GRU );
HB_FUNC_EXTERN( VER_SGRU );
HB_FUNC_EXTERN( VER_COD );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5ET13 )
{ "SAC5ET13", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5ET13 )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VER_GRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_GRU )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_SGRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SGRU )}, NULL },
{ "VER_COD", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_COD )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GRU_SUB", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "COD_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "MEMP_RESA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PR_VENDA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "PRN", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "A_COMP17", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "A_COMP20", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "A_NEGRITO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "D_NEGRITO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "D_COMP17", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "D_COMP20", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5ET13 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5ET13
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5ET13 = hb_vm_SymbolInit_SAC5ET13;
   #pragma data_seg()
#endif

HB_FUNC( SAC5ET13 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 24, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 11, 0,	/* 11 */
	HB_P_LOCALNEARSETSTR, 2, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', '5', 'E', 'T', '1', '3', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 15,	/* M_PRODUTO */
/* 00024 */ HB_P_LINEOFFSET, 2,	/* 13 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_POPLOCALNEAR, 3,	/* LCI */
/* 00034 */ HB_P_LINEOFFSET, 3,	/* 14 */
	HB_P_LOCALNEARSETINT, 5, 12, 0,	/* LBA 12*/
/* 00040 */ HB_P_LINEOFFSET, 4,	/* 15 */
	HB_P_LOCALNEARSETINT, 6, 79, 0,	/* CBA 79*/
/* 00046 */ HB_P_LINEOFFSET, 6,	/* 17 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	' ', 'O', 'p', 'c', 'o', 'e', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', 'p', '/', 'R', 'O', 'U', 'P', 'A', 0, 
	HB_P_DOSHORT, 5,
/* 00097 */ HB_P_LINEOFFSET, 9,	/* 20 */
	HB_P_PUSHSYMNEAR, 2,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 3,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00117 */ HB_P_LINEOFFSET, 10,	/* 21 */
	HB_P_PUSHSYMNEAR, 4,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00124 */ HB_P_LINEOFFSET, 12,	/* 23 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* MPRODUTO 0*/
	HB_P_PUSHLOCALNEAR, 10,	/* MPRODUTO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 9,	/* MSUBGRUPO */
	HB_P_POPLOCALNEAR, 8,	/* MGRUPO */
/* 00137 */ HB_P_LINEOFFSET, 13,	/* 24 */
	HB_P_PUSHSYMNEAR, 5,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* OPCAO */
/* 00147 */ HB_P_LINEOFFSET, 14,	/* 25 */
	HB_P_LOCALNEARSETSTR, 13, 2, 0,	/* MPRECO 2*/
	'S', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* MPRECO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* MDESCRICAO */
	HB_P_POPLOCALNEAR, 11,	/* MEMPRESA */
/* 00162 */ HB_P_LINEOFFSET, 15,	/* 26 */
	HB_P_LOCALNEARSETSTR, 18, 2, 0,	/* MPRECO_N 2*/
	'N', 0, 
	HB_P_PUSHLOCALNEAR, 18,	/* MPRECO_N */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* MPROD_N */
	HB_P_POPLOCALNEAR, 16,	/* MEMP_N */
/* 00177 */ HB_P_LINEOFFSET, 16,	/* 27 */
	HB_P_LOCALNEARSETINT, 14, 1, 0,	/* MQUANTD 1*/
/* 00183 */ HB_P_LINEOFFSET, 17,	/* 28 */
	HB_P_LOCALNEARSETINT, 19, 55, 0,	/* MESPACO 55*/
/* 00189 */ HB_P_LINEOFFSET, 18,	/* 29 */
	HB_P_LOCALNEARSETSTR, 20, 3, 0,	/* MCOMPRIMIR 3*/
	'2', '0', 0, 
/* 00198 */ HB_P_LINEOFFSET, 19,	/* 30 */
	HB_P_LOCALNEARSETINT, 22, 5, 0,	/* MLINHAS 5*/
/* 00204 */ HB_P_LINEOFFSET, 20,	/* 31 */
	HB_P_PUSHSYMNEAR, 6,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00214 */ HB_P_LINEOFFSET, 21,	/* 32 */
	HB_P_LOCALNEARSETSTR, 24, 2, 0,	/* DRVPADRAO 2*/
	'1', 0, 
/* 00222 */ HB_P_LINEOFFSET, 22,	/* 33 */
	HB_P_LOCALNEARSETINT, 23, 2, 0,	/* MFILA 2*/
/* 00228 */ HB_P_LINEOFFSET, 23,	/* 34 */
	HB_P_PUSHSYMNEAR, 7,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'a', 's', ' ', 'o', 'p', 'c', 'o', 'e', 's', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00275 */ HB_P_LINEOFFSET, 24,	/* 35 */
	HB_P_PUSHSYMNEAR, 8,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00284 */ HB_P_LINEOFFSET, 25,	/* 36 */
	HB_P_PUSHSYMNEAR, 9,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00306 */ HB_P_LINEOFFSET, 26,	/* 37 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'G', 'R', 'U', 'P', 'O', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00353 */ HB_P_LINEOFFSET, 27,	/* 38 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'S', 'U', 'B', '-', 'G', 'R', 'U', 'P', 'O', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00400 */ HB_P_LINEOFFSET, 28,	/* 39 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00447 */ HB_P_LINEOFFSET, 29,	/* 40 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'n', 'o', 'm', 'e', ' ', 'd', 'a', ' ', 'F', 'I', 'R', 'M', 'A', ' ', '.', '.', '.', '.', '.', '.', '.', '[', 'S', '/', 'N', ']', ':', ' ', ' ', ' ', 'e', 'm', ' ', 'N', 'E', 'G', 'R', 'I', 'T', 'O', ' ', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00519 */ HB_P_LINEOFFSET, 30,	/* 41 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'e', 'm', ' ', 'N', 'E', 'G', 'R', 'I', 'T', 'O', '.', '.', '.', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00571 */ HB_P_LINEOFFSET, 31,	/* 42 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'P', 'R', 'E', 'C', 'O', ' ', 'D', 'O', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', '.', '.', '.', '.', '.', '[', 'S', '/', 'N', ']', ':', ' ', ' ', ' ', 'e', 'm', ' ', 'N', 'E', 'G', 'R', 'I', 'T', 'O', ' ', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00643 */ HB_P_LINEOFFSET, 32,	/* 43 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 70,	/* 70 */
	'E', 's', 'p', 'a', 'c', 'o', ' ', 'e', 'n', 't', 'r', 'e', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', '.', '.', '.', '.', ':', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'a', 'm', 'a', 'n', 'h', 'o', ' ', 'd', 'a', ' ', 'L', 'e', 't', 'r', 'a', ' ', 'C', 'o', 'm', 'p', 'r', 'i', 'm', 'i', 'd', 'a', ' ', '[', '1', '7', '/', '2', '0', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00737 */ HB_P_LINEOFFSET, 33,	/* 44 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'L', 'i', 'n', 'h', 'a', 's', ' ', 'e', 'n', 't', 'r', 'e', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00798 */ HB_P_LINEOFFSET, 34,	/* 45 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', 'p', 'o', 'r', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00859 */ HB_P_LINEOFFSET, 35,	/* 46 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'F', 'i', 'l', 'e', 'i', 'r', 'a', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', ' ', '[', '1', ',', '2', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00920 */ HB_P_LINEOFFSET, 36,	/* 47 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 24, 0,	/* 24*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MGRUPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00965) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00970) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 43, 0,	/* 43 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	8, 0,	/* MGRUPO */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 16,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01011) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 19,	/* 19 (abs: 01028) */
	HB_P_PUSHSYMNEAR, 17,	/* VER_GRU */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 30, 0,	/* 30*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 14, 0,	/* 14 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* TIPO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01059 */ HB_P_LINEOFFSET, 37,	/* 48 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 24, 0,	/* 24*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MSUBGRUPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01104) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01109) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 's', 'u', 'b', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 43, 0,	/* 43 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	9, 0,	/* MSUBGRUPO */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 16,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01155) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 19,	/* 19 (abs: 01172) */
	HB_P_PUSHSYMNEAR, 19,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 30, 0,	/* 30*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 27, 0,	/* 27 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	8, 0,	/* MGRUPO */
	1, 0,	/* TIPO */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 16,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 01199) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01216 */ HB_P_LINEOFFSET, 38,	/* 49 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 24, 0,	/* 24*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MPRODUTO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01261) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01266) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'p', 'r', 'o', 'd', 'u', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 31, 0,	/* 31 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	10, 0,	/* MPRODUTO */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 20,	/* VER_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 30, 0,	/* 30*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	8, 0,	/* MGRUPO */
	9, 0,	/* MSUBGRUPO */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 16,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 01346) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 16,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01363 */ HB_P_LINEOFFSET, 39,	/* 50 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 29, 0,	/* 29*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MEMPRESA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01408) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01413) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'e', 'm', 'p', 'r', 'e', 's', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MEMPRESA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01466 */ HB_P_LINEOFFSET, 40,	/* 51 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 49, 0,	/* 49*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MEMP_N */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01511) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01516) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'e', 'm', 'p', '_', 'n', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MEMP_N */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01567 */ HB_P_LINEOFFSET, 41,	/* 52 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 29, 0,	/* 29*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MPROD_N */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01612) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01617) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'p', 'r', 'o', 'd', '_', 'n', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MPROD_N */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01669 */ HB_P_LINEOFFSET, 42,	/* 53 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 29, 0,	/* 29*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MPRECO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01714) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01719) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'p', 'r', 'e', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MPRECO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01770 */ HB_P_LINEOFFSET, 43,	/* 54 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 49, 0,	/* 49*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	18, 0,	/* MPRECO_N */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01815) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01820) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'p', 'r', 'e', 'c', 'o', '_', 'n', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	18, 0,	/* MPRECO_N */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01873 */ HB_P_LINEOFFSET, 44,	/* 55 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 29, 0,	/* 29*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MESPACO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01918) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01923) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'e', 's', 'p', 'a', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MESPACO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01959) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01960) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01978 */ HB_P_LINEOFFSET, 45,	/* 56 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 71, 0,	/* 71*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	20, 0,	/* MCOMPRIMIR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02023) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02028) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'c', 'o', 'm', 'p', 'r', 'i', 'm', 'i', 'r', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	20, 0,	/* MCOMPRIMIR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'1', '7', ',', '2', '0', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02085 */ HB_P_LINEOFFSET, 46,	/* 57 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 38, 0,	/* 38*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MLINHAS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02130) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02135) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'l', 'i', 'n', 'h', 'a', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02168 */ HB_P_LINEOFFSET, 47,	/* 58 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 38, 0,	/* 38*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MQUANTD */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02213) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02218) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'q', 'u', 'a', 'n', 't', 'd', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02256 */ HB_P_LINEOFFSET, 48,	/* 59 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 38, 0,	/* 38*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MFILA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02301) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02306) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'f', 'i', 'l', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MFILA */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 02342) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02347) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02348) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02366 */ HB_P_LINEOFFSET, 49,	/* 60 */
	HB_P_PUSHSYMNEAR, 21,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 14, 0,	/* GETLIST */
/* 02388 */ HB_P_LINEOFFSET, 50,	/* 61 */
	HB_P_PUSHSYMNEAR, 22,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02403) */
	HB_P_JUMP, 186, 8,	/* 2234 (abs: 04634) */
/* 02403 */ HB_P_LINEOFFSET, 53,	/* 64 */
	HB_P_PUSHSYMNEAR, 23,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', 's', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'd', 'a', 's', ' ', 'e', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 7,	/* OPCAO */
/* 02466 */ HB_P_LINEOFFSET, 54,	/* 65 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02480) */
	HB_P_JUMP, 180, 246,	/* -2380 (abs: 00097) */
/* 02480 */ HB_P_LINEOFFSET, 57,	/* 68 */
	HB_P_PUSHSYMNEAR, 16,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 200, 0,	/* 200 (abs: 02689) */
/* 02492 */ HB_P_LINEOFFSET, 58,	/* 69 */
	HB_P_PUSHSYMNEAR, 7,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'a', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 02534 */ HB_P_LINEOFFSET, 60,	/* 71 */
	HB_P_PUSHSYMNEAR, 2,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 3,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 02555 */ HB_P_LINEOFFSET, 61,	/* 72 */
	HB_P_PUSHSYMNEAR, 4,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02562 */ HB_P_LINEOFFSET, 62,	/* 73 */
	HB_P_PUSHSYMNEAR, 24,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUE, 136, 2,	/* 648 (abs: 03217) */
/* 02572 */ HB_P_LINEOFFSET, 63,	/* 74 */
	HB_P_LOCALNEARSETINT, 25, 0, 0,	/* I 0*/
/* 02578 */ HB_P_LINEOFFSET, 65,	/* 76 */
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 26,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 27,	/* GRU_SUB */
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSYMNEAR, 28,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MGRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 16,	/* 16 (abs: 02619) */
	HB_P_PUSHSYMNEAR, 26,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 29,	/* COD_MERC */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 02631) */
/* 02621 */ HB_P_LINEOFFSET, 66,	/* 77 */
	HB_P_PUSHSYMNEAR, 30,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 189,	/* -67 (abs: 02562) */
/* 02631 */ HB_P_LINEOFFSET, 69,	/* 80 */
	HB_P_LOCALNEARSETINT, 25, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_PUSHLOCALNEAR, 14,	/* MQUANTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 02679) */
/* 02644 */ HB_P_LINEOFFSET, 70,	/* 81 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHMEMVAR, 31, 0,	/* MEMP_RESA */
	HB_P_PUSHSYMNEAR, 26,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 29,	/* COD_MERC */
	HB_P_PUSHSYMNEAR, 26,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 26,	/* MERC */
	HB_P_PUSHSYMNEAR, 26,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 32,	/* PR_VENDA */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02671 */ HB_P_LINEOFFSET, 71,	/* 82 */
	HB_P_LOCALNEARADDINT, 25, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 216,	/* -40 (abs: 02637) */
/* 02679 */ HB_P_LINEOFFSET, 72,	/* 83 */
	HB_P_PUSHSYMNEAR, 30,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 131,	/* -125 (abs: 02562) */
/* 02689 */ HB_P_LINEOFFSET, 75,	/* 86 */
	HB_P_PUSHSYMNEAR, 16,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MSUBGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 192, 0,	/* 192 (abs: 02890) */
/* 02701 */ HB_P_LINEOFFSET, 76,	/* 87 */
	HB_P_PUSHSYMNEAR, 7,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'a', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 02743 */ HB_P_LINEOFFSET, 78,	/* 89 */
	HB_P_PUSHSYMNEAR, 2,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 3,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 02764 */ HB_P_LINEOFFSET, 79,	/* 90 */
	HB_P_PUSHSYMNEAR, 4,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02771 */ HB_P_LINEOFFSET, 80,	/* 91 */
	HB_P_PUSHSYMNEAR, 24,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUE, 183, 1,	/* 439 (abs: 03217) */
/* 02781 */ HB_P_LINEOFFSET, 81,	/* 92 */
	HB_P_LOCALNEARSETINT, 25, 0, 0,	/* I 0*/
/* 02787 */ HB_P_LINEOFFSET, 83,	/* 94 */
	HB_P_PUSHSYMNEAR, 26,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 27,	/* GRU_SUB */
	HB_P_PUSHSYMNEAR, 28,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MSUBGRUPO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 16,	/* 16 (abs: 02820) */
	HB_P_PUSHSYMNEAR, 26,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 29,	/* COD_MERC */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 02832) */
/* 02822 */ HB_P_LINEOFFSET, 84,	/* 95 */
	HB_P_PUSHSYMNEAR, 30,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 197,	/* -59 (abs: 02771) */
/* 02832 */ HB_P_LINEOFFSET, 87,	/* 98 */
	HB_P_LOCALNEARSETINT, 25, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_PUSHLOCALNEAR, 14,	/* MQUANTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 02880) */
/* 02845 */ HB_P_LINEOFFSET, 88,	/* 99 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHMEMVAR, 31, 0,	/* MEMP_RESA */
	HB_P_PUSHSYMNEAR, 26,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 29,	/* COD_MERC */
	HB_P_PUSHSYMNEAR, 26,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 26,	/* MERC */
	HB_P_PUSHSYMNEAR, 26,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 32,	/* PR_VENDA */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02872 */ HB_P_LINEOFFSET, 89,	/* 100 */
	HB_P_LOCALNEARADDINT, 25, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 216,	/* -40 (abs: 02838) */
/* 02880 */ HB_P_LINEOFFSET, 90,	/* 101 */
	HB_P_PUSHSYMNEAR, 30,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 139,	/* -117 (abs: 02771) */
/* 02890 */ HB_P_LINEOFFSET, 93,	/* 104 */
	HB_P_PUSHSYMNEAR, 16,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MPRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 148, 0,	/* 148 (abs: 03047) */
/* 02902 */ HB_P_LINEOFFSET, 94,	/* 105 */
	HB_P_PUSHSYMNEAR, 7,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'a', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 02944 */ HB_P_LINEOFFSET, 96,	/* 107 */
	HB_P_PUSHSYMNEAR, 2,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 3,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 02964 */ HB_P_LINEOFFSET, 97,	/* 108 */
	HB_P_PUSHSYMNEAR, 4,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02971 */ HB_P_LINEOFFSET, 98,	/* 109 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 26,	/* MERC */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 33,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MPRODUTO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_POPALIAS,
/* 02992 */ HB_P_LINEOFFSET, 99,	/* 110 */
	HB_P_LOCALNEARSETINT, 25, 0, 0,	/* I 0*/
/* 02998 */ HB_P_LINEOFFSET, 100,	/* 111 */
	HB_P_LOCALNEARSETINT, 25, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_PUSHLOCALNEAR, 14,	/* MQUANTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 208, 0,	/* 208 (abs: 03217) */
/* 03012 */ HB_P_LINEOFFSET, 101,	/* 112 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHMEMVAR, 31, 0,	/* MEMP_RESA */
	HB_P_PUSHSYMNEAR, 26,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 29,	/* COD_MERC */
	HB_P_PUSHSYMNEAR, 26,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 26,	/* MERC */
	HB_P_PUSHSYMNEAR, 26,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 32,	/* PR_VENDA */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03039 */ HB_P_LINEOFFSET, 102,	/* 113 */
	HB_P_LOCALNEARADDINT, 25, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 215,	/* -41 (abs: 03004) */
/* 03047 */ HB_P_LINEOFFSET, 105,	/* 116 */
	HB_P_PUSHSYMNEAR, 7,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'a', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 03089 */ HB_P_LINEOFFSET, 107,	/* 118 */
	HB_P_PUSHSYMNEAR, 2,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 3,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 03110 */ HB_P_LINEOFFSET, 108,	/* 119 */
	HB_P_PUSHSYMNEAR, 4,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03117 */ HB_P_LINEOFFSET, 109,	/* 120 */
	HB_P_PUSHSYMNEAR, 24,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 93,	/* 93 (abs: 03217) */
/* 03126 */ HB_P_LINEOFFSET, 110,	/* 121 */
	HB_P_LOCALNEARSETINT, 25, 0, 0,	/* I 0*/
/* 03132 */ HB_P_LINEOFFSET, 111,	/* 122 */
	HB_P_PUSHSYMNEAR, 26,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 29,	/* COD_MERC */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03159) */
/* 03149 */ HB_P_LINEOFFSET, 112,	/* 123 */
	HB_P_PUSHSYMNEAR, 30,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 216,	/* -40 (abs: 03117) */
/* 03159 */ HB_P_LINEOFFSET, 115,	/* 126 */
	HB_P_LOCALNEARSETINT, 25, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_PUSHLOCALNEAR, 14,	/* MQUANTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 03207) */
/* 03172 */ HB_P_LINEOFFSET, 116,	/* 127 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHMEMVAR, 31, 0,	/* MEMP_RESA */
	HB_P_PUSHSYMNEAR, 26,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 29,	/* COD_MERC */
	HB_P_PUSHSYMNEAR, 26,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 26,	/* MERC */
	HB_P_PUSHSYMNEAR, 26,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 32,	/* PR_VENDA */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03199 */ HB_P_LINEOFFSET, 117,	/* 128 */
	HB_P_LOCALNEARADDINT, 25, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 216,	/* -40 (abs: 03165) */
/* 03207 */ HB_P_LINEOFFSET, 118,	/* 129 */
	HB_P_PUSHSYMNEAR, 30,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 158,	/* -98 (abs: 03117) */
/* 03217 */ HB_P_LINEOFFSET, 122,	/* 133 */
	HB_P_PUSHSYMNEAR, 34,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'P', 'R', 'I', 'N', 'T', 'E', 'R', 0, 
	HB_P_DOSHORT, 2,
/* 03236 */ HB_P_LINEOFFSET, 123,	/* 134 */
	HB_P_PUSHSYMNEAR, 34,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 35, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 03254 */ HB_P_LINEOFFSET, 124,	/* 135 */
	HB_P_LOCALNEARSETINT, 25, 0, 0,	/* I 0*/
/* 03260 */ HB_P_LINEOFFSET, 125,	/* 136 */
	HB_P_LOCALNEARSETINT, 25, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_PUSHSYMNEAR, 36,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 214, 4,	/* 1238 (abs: 04514) */
/* 03279 */ HB_P_LINEOFFSET, 126,	/* 137 */
	HB_P_PUSHLOCALNEAR, 20,	/* MCOMPRIMIR */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 03324) */
/* 03291 */ HB_P_LINEOFFSET, 127,	/* 138 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PRN */
	HB_P_PUSHALIASEDFIELDNEAR, 40,	/* A_COMP17 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_MACROPUSHARG, 11,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 03355) */
/* 03324 */ HB_P_LINEOFFSET, 129,	/* 140 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PRN */
	HB_P_PUSHALIASEDFIELDNEAR, 41,	/* A_COMP20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_MACROPUSHARG, 11,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_DOSHORT, 1,
/* 03355 */ HB_P_LINEOFFSET, 131,	/* 142 */
	HB_P_PUSHLOCALNEAR, 11,	/* MEMPRESA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 16, 1,	/* 272 (abs: 03636) */
/* 03367 */ HB_P_LINEOFFSET, 132,	/* 143 */
	HB_P_PUSHLOCALNEAR, 16,	/* MEMP_N */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 03409) */
/* 03378 */ HB_P_LINEOFFSET, 133,	/* 144 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PRN */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* A_NEGRITO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_MACROPUSHARG, 11,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_DOSHORT, 1,
/* 03409 */ HB_P_LINEOFFSET, 135,	/* 146 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 46, 0,	/* 46 */
	HB_P_DOSHORT, 1,
/* 03440 */ HB_P_LINEOFFSET, 136,	/* 147 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_PUSHSYMNEAR, 36,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03461) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 23,	/* MFILA */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 03495) */
/* 03463 */ HB_P_LINEOFFSET, 137,	/* 148 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 19,	/* MESPACO */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 46, 0,	/* 46 */
	HB_P_DOSHORT, 1,
/* 03495 */ HB_P_LINEOFFSET, 139,	/* 150 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 36,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03519) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 23,	/* MFILA */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 69,	/* 69 (abs: 03588) */
/* 03521 */ HB_P_LINEOFFSET, 140,	/* 151 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 19,	/* MESPACO */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 46, 0,	/* 46 */
	HB_P_DOSHORT, 1,
/* 03553 */ HB_P_LINEOFFSET, 141,	/* 152 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 19,	/* MESPACO */
	HB_P_PUSHLOCALNEAR, 19,	/* MESPACO */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 46, 0,	/* 46 */
	HB_P_DOSHORT, 1,
/* 03588 */ HB_P_LINEOFFSET, 143,	/* 154 */
	HB_P_PUSHLOCALNEAR, 16,	/* MEMP_N */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 64,	/* 64 (abs: 03661) */
/* 03599 */ HB_P_LINEOFFSET, 144,	/* 155 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 43,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PRN */
	HB_P_PUSHALIASEDFIELDNEAR, 44,	/* D_NEGRITO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_MACROPUSHARG, 11,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 27,	/* 27 (abs: 03661) */
/* 03636 */ HB_P_LINEOFFSET, 147,	/* 158 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 5,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 03661 */ HB_P_LINEOFFSET, 149,	/* 160 */
	HB_P_PUSHLOCALNEAR, 17,	/* MPROD_N */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 78,	/* 78 (abs: 03748) */
/* 03672 */ HB_P_LINEOFFSET, 150,	/* 161 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PRN */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* A_NEGRITO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_MACROPUSHARG, 11,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_DOSHORT, 1,
/* 03706 */ HB_P_LINEOFFSET, 151,	/* 162 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 03791) */
/* 03748 */ HB_P_LINEOFFSET, 153,	/* 164 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03791 */ HB_P_LINEOFFSET, 155,	/* 166 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_PUSHSYMNEAR, 36,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03812) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 23,	/* MFILA */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 03861) */
/* 03814 */ HB_P_LINEOFFSET, 156,	/* 167 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 19,	/* MESPACO */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03861 */ HB_P_LINEOFFSET, 158,	/* 169 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 36,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03885) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 23,	/* MFILA */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 99,	/* 99 (abs: 03984) */
/* 03887 */ HB_P_LINEOFFSET, 159,	/* 170 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 19,	/* MESPACO */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03934 */ HB_P_LINEOFFSET, 160,	/* 171 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 19,	/* MESPACO */
	HB_P_PUSHLOCALNEAR, 19,	/* MESPACO */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03984 */ HB_P_LINEOFFSET, 162,	/* 173 */
	HB_P_PUSHLOCALNEAR, 17,	/* MPROD_N */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 04030) */
/* 03995 */ HB_P_LINEOFFSET, 163,	/* 174 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 43,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PRN */
	HB_P_PUSHALIASEDFIELDNEAR, 44,	/* D_NEGRITO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_MACROPUSHARG, 11,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_DOSHORT, 1,
/* 04030 */ HB_P_LINEOFFSET, 165,	/* 176 */
	HB_P_PUSHLOCALNEAR, 13,	/* MPRECO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 124, 1,	/* 380 (abs: 04419) */
/* 04042 */ HB_P_LINEOFFSET, 166,	/* 177 */
	HB_P_PUSHLOCALNEAR, 18,	/* MPRECO_N */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 04084) */
/* 04053 */ HB_P_LINEOFFSET, 167,	/* 178 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PRN */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* A_NEGRITO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_MACROPUSHARG, 11,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_DOSHORT, 1,
/* 04084 */ HB_P_LINEOFFSET, 169,	/* 180 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'P', 'r', 'e', 'c', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04142 */ HB_P_LINEOFFSET, 170,	/* 181 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_PUSHSYMNEAR, 36,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 04163) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 23,	/* MFILA */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 04224) */
/* 04165 */ HB_P_LINEOFFSET, 171,	/* 182 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 19,	/* MESPACO */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'P', 'r', 'e', 'c', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04224 */ HB_P_LINEOFFSET, 173,	/* 184 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 36,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 04248) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 23,	/* MFILA */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 123,	/* 123 (abs: 04371) */
/* 04250 */ HB_P_LINEOFFSET, 174,	/* 185 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 19,	/* MESPACO */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'P', 'r', 'e', 'c', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04309 */ HB_P_LINEOFFSET, 175,	/* 186 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 19,	/* MESPACO */
	HB_P_PUSHLOCALNEAR, 19,	/* MESPACO */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'P', 'r', 'e', 'c', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 25,	/* I */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04371 */ HB_P_LINEOFFSET, 177,	/* 188 */
	HB_P_PUSHLOCALNEAR, 18,	/* MPRECO_N */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 64,	/* 64 (abs: 04444) */
/* 04382 */ HB_P_LINEOFFSET, 178,	/* 189 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 43,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PRN */
	HB_P_PUSHALIASEDFIELDNEAR, 44,	/* D_NEGRITO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_MACROPUSHARG, 11,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 27,	/* 27 (abs: 04444) */
/* 04419 */ HB_P_LINEOFFSET, 181,	/* 192 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 04444 */ HB_P_LINEOFFSET, 183,	/* 194 */
	HB_P_PUSHLOCALNEAR, 23,	/* MFILA */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 04459) */
/* 04453 */ HB_P_LINEOFFSET, 184,	/* 195 */
	HB_P_LOCALNEARADDINT, 25, 1, 0,	/* I 1*/
/* 04459 */ HB_P_LINEOFFSET, 186,	/* 197 */
	HB_P_PUSHLOCALNEAR, 23,	/* MFILA */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 04480) */
/* 04468 */ HB_P_LINEOFFSET, 187,	/* 198 */
	HB_P_LOCALNEARADDINT, 25, 1, 0,	/* I 1*/
/* 04474 */ HB_P_LINEOFFSET, 188,	/* 199 */
	HB_P_LOCALNEARADDINT, 25, 1, 0,	/* I 1*/
/* 04480 */ HB_P_LINEOFFSET, 190,	/* 201 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 22,	/* MLINHAS */
	HB_P_PLUS,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 04505 */ HB_P_LINEOFFSET, 191,	/* 202 */
	HB_P_LOCALNEARADDINT, 25, 1, 0,	/* I 1*/
	HB_P_JUMP, 35, 251,	/* -1245 (abs: 03266) */
/* 04514 */ HB_P_LINEOFFSET, 192,	/* 203 */
	HB_P_PUSHLOCALNEAR, 20,	/* MCOMPRIMIR */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 04559) */
/* 04526 */ HB_P_LINEOFFSET, 193,	/* 204 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PRN */
	HB_P_PUSHALIASEDFIELDNEAR, 46,	/* D_COMP17 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_MACROPUSHARG, 11,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 04590) */
/* 04559 */ HB_P_LINEOFFSET, 195,	/* 206 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PRN */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* D_COMP20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_MACROPUSHARG, 11,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_DOSHORT, 1,
/* 04590 */ HB_P_LINEOFFSET, 197,	/* 208 */
	HB_P_PUSHSYMNEAR, 34,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 74, 238,	/* -4534 (abs: 00097) */
/* 04634 */ HB_P_LINEOFFSET, 200,	/* 211 */
	HB_P_PUSHSYMNEAR, 48,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04641 */ HB_P_LINEOFFSET, 201,	/* 212 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 04646 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

