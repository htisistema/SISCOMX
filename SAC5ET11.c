/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5ET11.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\hti\SISCOM\SAC5ET11.PRG /q /oC:\hti\SISCOM\SAC5ET11.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.29 11:52:42 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5ET11.PRG"

HB_FUNC( SAC5ET11 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( MENSAGEM );
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
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5ET11 )
{ "SAC5ET11", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5ET11 )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
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
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GRU_SUB", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "COD_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SALDO_MER", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PR_VENDA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "MEMP_RESA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5ET11 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5ET11
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5ET11 = hb_vm_SymbolInit_SAC5ET11;
   #pragma data_seg()
#endif

HB_FUNC( SAC5ET11 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 24, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 11, 0,	/* 11 */
	HB_P_LOCALNEARSETSTR, 2, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', '5', 'E', 'T', '1', '1', 0, 
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* LCI 0*/
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_LOCALNEARSETINT, 5, 13, 0,	/* LBA 13*/
	HB_P_LOCALNEARSETINT, 6, 79, 0,	/* CBA 79*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 15,	/* M_PRODUTO */
/* 00040 */ HB_P_LINEOFFSET, 1,	/* 12 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 5,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 2,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 3,	/* MARQ */
	HB_P_DOSHORT, 3,
	HB_P_POPVARIABLE, 3, 0,	/* MARQ */
	HB_P_POPVARIABLE, 2, 0,	/* MIMP_TIPO */
/* 00067 */ HB_P_LINEOFFSET, 3,	/* 14 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'O', 'p', 'c', 'o', 'e', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', 'P', 'A', 'D', 'R', 'A', 'O', 0, 
	HB_P_DOSHORT, 5,
/* 00117 */ HB_P_LINEOFFSET, 6,	/* 17 */
	HB_P_PUSHMEMVAR, 7, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 1, 0,	/* MTIPO_IMP */
/* 00130 */ HB_P_LINEOFFSET, 9,	/* 20 */
	HB_P_PUSHSYMNEAR, 8,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 9,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00150 */ HB_P_LINEOFFSET, 10,	/* 21 */
	HB_P_PUSHSYMNEAR, 10,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00157 */ HB_P_LINEOFFSET, 12,	/* 23 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* MPRODUTO 0*/
	HB_P_PUSHLOCALNEAR, 10,	/* MPRODUTO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 9,	/* MSUBGRUPO */
	HB_P_POPLOCALNEAR, 8,	/* MGRUPO */
/* 00170 */ HB_P_LINEOFFSET, 13,	/* 24 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* OPCAO */
/* 00180 */ HB_P_LINEOFFSET, 14,	/* 25 */
	HB_P_LOCALNEARSETSTR, 25, 2, 0,	/* MSOPRECO 2*/
	'S', 0, 
	HB_P_PUSHLOCALNEAR, 25,	/* MSOPRECO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MSALDO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* MPRECO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* MDESCRICAO */
	HB_P_POPLOCALNEAR, 11,	/* MEMPRESA */
/* 00201 */ HB_P_LINEOFFSET, 15,	/* 26 */
	HB_P_LOCALNEARSETINT, 14, 1, 0,	/* MQUANTD 1*/
/* 00207 */ HB_P_LINEOFFSET, 16,	/* 27 */
	HB_P_LOCALNEARSETINT, 16, 63, 0,	/* MESPACO 63*/
/* 00213 */ HB_P_LINEOFFSET, 17,	/* 28 */
	HB_P_LOCALNEARSETINT, 20, 2, 0,	/* MFILA 2*/
	HB_P_PUSHLOCALNEAR, 20,	/* MFILA */
	HB_P_POPLOCALNEAR, 19,	/* MLINHAS */
/* 00223 */ HB_P_LINEOFFSET, 18,	/* 29 */
	HB_P_PUSHSYMNEAR, 11,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00233 */ HB_P_LINEOFFSET, 19,	/* 30 */
	HB_P_PUSHSYMNEAR, 12,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'a', 's', ' ', 'o', 'p', 'c', 'o', 'e', 's', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00280 */ HB_P_LINEOFFSET, 20,	/* 31 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'G', 'R', 'U', 'P', 'O', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00327 */ HB_P_LINEOFFSET, 21,	/* 32 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'S', 'U', 'B', '-', 'G', 'R', 'U', 'P', 'O', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00374 */ HB_P_LINEOFFSET, 22,	/* 33 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00421 */ HB_P_LINEOFFSET, 23,	/* 34 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'n', 'o', 'm', 'e', ' ', 'd', 'a', ' ', 'F', 'I', 'R', 'M', 'A', ' ', '.', '.', '.', '.', '.', '.', '.', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00473 */ HB_P_LINEOFFSET, 24,	/* 35 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'P', 'R', 'E', 'C', 'O', ' ', 'D', 'O', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', '.', '.', '.', '.', '.', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00525 */ HB_P_LINEOFFSET, 25,	/* 36 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'E', 's', 'p', 'a', 'c', 'o', ' ', 'e', 'n', 't', 'r', 'e', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00577 */ HB_P_LINEOFFSET, 26,	/* 37 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'L', 'i', 'n', 'h', 'a', 's', ' ', 'e', 'n', 't', 'r', 'e', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00638 */ HB_P_LINEOFFSET, 27,	/* 38 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', 'p', 'o', 'r', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00699 */ HB_P_LINEOFFSET, 28,	/* 39 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'F', 'i', 'l', 'e', 'i', 'r', 'a', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', ' ', '[', '1', ',', '2', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00760 */ HB_P_LINEOFFSET, 29,	/* 40 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', 'c', 'o', 'm', ' ', 'S', 'A', 'L', 'D', 'O', ' ', '[', 'S', '/', 'n', ']', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00821 */ HB_P_LINEOFFSET, 30,	/* 41 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', 'c', 'o', 'm', ' ', 'P', 'R', 'E', 'C', 'O', ' ', '[', 'S', '/', 'n', ']', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00882 */ HB_P_LINEOFFSET, 31,	/* 42 */
	HB_P_PUSHSYMNEAR, 15,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 24, 0,	/* 24*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 18,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MGRUPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00927) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00932) */
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
	HB_P_PUSHSYMNEAR, 19,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00973) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 19,	/* 19 (abs: 00990) */
	HB_P_PUSHSYMNEAR, 20,	/* VER_GRU */
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
	HB_P_MESSAGE, 21, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01021 */ HB_P_LINEOFFSET, 32,	/* 43 */
	HB_P_PUSHSYMNEAR, 15,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 24, 0,	/* 24*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 18,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MSUBGRUPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01066) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01071) */
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
	HB_P_PUSHSYMNEAR, 19,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01117) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 19,	/* 19 (abs: 01134) */
	HB_P_PUSHSYMNEAR, 22,	/* VER_SGRU */
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
	HB_P_PUSHSYMNEAR, 19,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 01161) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 21, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01178 */ HB_P_LINEOFFSET, 33,	/* 44 */
	HB_P_PUSHSYMNEAR, 15,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 24, 0,	/* 24*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 18,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MPRODUTO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01223) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01228) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'p', 'r', 'o', 'd', 'u', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 33, 0,	/* 33 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	10, 0,	/* MPRODUTO */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 23,	/* VER_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 30, 0,	/* 30*/
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	8, 0,	/* MGRUPO */
	9, 0,	/* MSUBGRUPO */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 19,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 01310) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 19,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 21, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01327 */ HB_P_LINEOFFSET, 34,	/* 45 */
	HB_P_PUSHSYMNEAR, 15,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 29, 0,	/* 29*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 18,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MEMPRESA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01372) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01377) */
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
	HB_P_MESSAGE, 21, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01430 */ HB_P_LINEOFFSET, 35,	/* 46 */
	HB_P_PUSHSYMNEAR, 15,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 29, 0,	/* 29*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 18,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MPRECO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01475) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01480) */
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
	HB_P_MESSAGE, 21, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01531 */ HB_P_LINEOFFSET, 36,	/* 47 */
	HB_P_PUSHSYMNEAR, 15,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 29, 0,	/* 29*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 18,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MESPACO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01576) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01581) */
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
	16, 0,	/* MESPACO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01617) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01618) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 21, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01636 */ HB_P_LINEOFFSET, 37,	/* 48 */
	HB_P_PUSHSYMNEAR, 15,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 38, 0,	/* 38*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 18,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MLINHAS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01681) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01686) */
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
	HB_P_MESSAGE, 21, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01719 */ HB_P_LINEOFFSET, 38,	/* 49 */
	HB_P_PUSHSYMNEAR, 15,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 38, 0,	/* 38*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 18,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MQUANTD */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01764) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01769) */
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
	HB_P_MESSAGE, 21, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01807 */ HB_P_LINEOFFSET, 39,	/* 50 */
	HB_P_PUSHSYMNEAR, 15,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 38, 0,	/* 38*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 18,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	20, 0,	/* MFILA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01852) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01857) */
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
	20, 0,	/* MFILA */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 01893) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01898) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01899) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 21, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01917 */ HB_P_LINEOFFSET, 40,	/* 51 */
	HB_P_PUSHSYMNEAR, 15,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 38, 0,	/* 38*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 18,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	24, 0,	/* MSALDO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01962) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01967) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 's', 'a', 'l', 'd', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	24, 0,	/* MSALDO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 21, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02018 */ HB_P_LINEOFFSET, 41,	/* 52 */
	HB_P_PUSHSYMNEAR, 15,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 38, 0,	/* 38*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 18,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	25, 0,	/* MSOPRECO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02063) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02068) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 's', 'o', 'p', 'r', 'e', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	25, 0,	/* MSOPRECO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 21, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02121 */ HB_P_LINEOFFSET, 42,	/* 53 */
	HB_P_PUSHSYMNEAR, 24,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 17, 0,	/* GETLIST */
/* 02143 */ HB_P_LINEOFFSET, 43,	/* 54 */
	HB_P_PUSHSYMNEAR, 25,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02158) */
	HB_P_JUMP, 247, 5,	/* 1527 (abs: 03682) */
/* 02158 */ HB_P_LINEOFFSET, 46,	/* 57 */
	HB_P_PUSHSYMNEAR, 19,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 255, 0,	/* 255 (abs: 02422) */
/* 02170 */ HB_P_LINEOFFSET, 47,	/* 58 */
	HB_P_PUSHSYMNEAR, 12,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'a', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 02212 */ HB_P_LINEOFFSET, 49,	/* 60 */
	HB_P_PUSHSYMNEAR, 8,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 9,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 02233 */ HB_P_LINEOFFSET, 50,	/* 61 */
	HB_P_PUSHSYMNEAR, 10,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02240 */ HB_P_LINEOFFSET, 51,	/* 62 */
	HB_P_PUSHSYMNEAR, 26,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUE, 46, 3,	/* 814 (abs: 03061) */
/* 02250 */ HB_P_LINEOFFSET, 52,	/* 63 */
	HB_P_PUSHSYMNEAR, 27,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 02262 */ HB_P_LINEOFFSET, 53,	/* 64 */
	HB_P_LOCALNEARSETINT, 22, 0, 0,	/* I 0*/
/* 02268 */ HB_P_LINEOFFSET, 57,	/* 68 */
	HB_P_PUSHSYMNEAR, 29,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 31,	/* GRU_SUB */
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSYMNEAR, 32,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MGRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 16,	/* 16 (abs: 02309) */
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 33,	/* COD_MERC */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 20,	/* 20 (abs: 02330) */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 24,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 02329) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 34,	/* SALDO_MER */
	HB_P_ZERO,
	HB_P_LESSEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 20,	/* 20 (abs: 02351) */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 25,	/* MSOPRECO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 02350) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 35,	/* PR_VENDA */
	HB_P_ZERO,
	HB_P_LESSEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 02363) */
/* 02353 */ HB_P_LINEOFFSET, 58,	/* 69 */
	HB_P_PUSHSYMNEAR, 36,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 135,	/* -121 (abs: 02240) */
/* 02363 */ HB_P_LINEOFFSET, 61,	/* 72 */
	HB_P_LOCALNEARSETINT, 22, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 22,	/* I */
	HB_P_PUSHLOCALNEAR, 14,	/* MQUANTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 02411) */
/* 02376 */ HB_P_LINEOFFSET, 62,	/* 73 */
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHMEMVAR, 37, 0,	/* MEMP_RESA */
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 33,	/* COD_MERC */
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 30,	/* MERC */
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 35,	/* PR_VENDA */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02403 */ HB_P_LINEOFFSET, 63,	/* 74 */
	HB_P_LOCALNEARADDINT, 22, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 216,	/* -40 (abs: 02369) */
/* 02411 */ HB_P_LINEOFFSET, 64,	/* 75 */
	HB_P_PUSHSYMNEAR, 36,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 77, 255,	/* -179 (abs: 02240) */
/* 02422 */ HB_P_LINEOFFSET, 67,	/* 78 */
	HB_P_PUSHSYMNEAR, 19,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MSUBGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 247, 0,	/* 247 (abs: 02678) */
/* 02434 */ HB_P_LINEOFFSET, 68,	/* 79 */
	HB_P_PUSHSYMNEAR, 12,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'a', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 02476 */ HB_P_LINEOFFSET, 70,	/* 81 */
	HB_P_PUSHSYMNEAR, 8,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 9,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 02497 */ HB_P_LINEOFFSET, 71,	/* 82 */
	HB_P_PUSHSYMNEAR, 10,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02504 */ HB_P_LINEOFFSET, 72,	/* 83 */
	HB_P_PUSHSYMNEAR, 26,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUE, 38, 2,	/* 550 (abs: 03061) */
/* 02514 */ HB_P_LINEOFFSET, 73,	/* 84 */
	HB_P_PUSHSYMNEAR, 27,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 02526 */ HB_P_LINEOFFSET, 74,	/* 85 */
	HB_P_LOCALNEARSETINT, 22, 0, 0,	/* I 0*/
/* 02532 */ HB_P_LINEOFFSET, 78,	/* 89 */
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 31,	/* GRU_SUB */
	HB_P_PUSHSYMNEAR, 32,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MSUBGRUPO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 16,	/* 16 (abs: 02565) */
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 33,	/* COD_MERC */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 20,	/* 20 (abs: 02586) */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 24,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 02585) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 34,	/* SALDO_MER */
	HB_P_ZERO,
	HB_P_LESSEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 20,	/* 20 (abs: 02607) */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 25,	/* MSOPRECO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 02606) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 35,	/* PR_VENDA */
	HB_P_ZERO,
	HB_P_LESSEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 02619) */
/* 02609 */ HB_P_LINEOFFSET, 79,	/* 90 */
	HB_P_PUSHSYMNEAR, 36,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 143,	/* -113 (abs: 02504) */
/* 02619 */ HB_P_LINEOFFSET, 82,	/* 93 */
	HB_P_LOCALNEARSETINT, 22, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 22,	/* I */
	HB_P_PUSHLOCALNEAR, 14,	/* MQUANTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 02667) */
/* 02632 */ HB_P_LINEOFFSET, 83,	/* 94 */
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHMEMVAR, 37, 0,	/* MEMP_RESA */
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 33,	/* COD_MERC */
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 30,	/* MERC */
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 35,	/* PR_VENDA */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02659 */ HB_P_LINEOFFSET, 84,	/* 95 */
	HB_P_LOCALNEARADDINT, 22, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 216,	/* -40 (abs: 02625) */
/* 02667 */ HB_P_LINEOFFSET, 85,	/* 96 */
	HB_P_PUSHSYMNEAR, 36,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 85, 255,	/* -171 (abs: 02504) */
/* 02678 */ HB_P_LINEOFFSET, 88,	/* 99 */
	HB_P_PUSHSYMNEAR, 19,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MPRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 148, 0,	/* 148 (abs: 02835) */
/* 02690 */ HB_P_LINEOFFSET, 89,	/* 100 */
	HB_P_PUSHSYMNEAR, 12,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'a', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 02732 */ HB_P_LINEOFFSET, 91,	/* 102 */
	HB_P_PUSHSYMNEAR, 8,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 9,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 02752 */ HB_P_LINEOFFSET, 92,	/* 103 */
	HB_P_PUSHSYMNEAR, 10,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02759 */ HB_P_LINEOFFSET, 93,	/* 104 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 38,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MPRODUTO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_POPALIAS,
/* 02780 */ HB_P_LINEOFFSET, 94,	/* 105 */
	HB_P_LOCALNEARSETINT, 22, 0, 0,	/* I 0*/
/* 02786 */ HB_P_LINEOFFSET, 95,	/* 106 */
	HB_P_LOCALNEARSETINT, 22, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 22,	/* I */
	HB_P_PUSHLOCALNEAR, 14,	/* MQUANTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 8, 1,	/* 264 (abs: 03061) */
/* 02800 */ HB_P_LINEOFFSET, 96,	/* 107 */
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHMEMVAR, 37, 0,	/* MEMP_RESA */
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 33,	/* COD_MERC */
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 30,	/* MERC */
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 35,	/* PR_VENDA */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02827 */ HB_P_LINEOFFSET, 97,	/* 108 */
	HB_P_LOCALNEARADDINT, 22, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 215,	/* -41 (abs: 02792) */
/* 02835 */ HB_P_LINEOFFSET, 100,	/* 111 */
	HB_P_PUSHSYMNEAR, 12,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'a', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 02877 */ HB_P_LINEOFFSET, 102,	/* 113 */
	HB_P_PUSHSYMNEAR, 8,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 9,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 02898 */ HB_P_LINEOFFSET, 103,	/* 114 */
	HB_P_PUSHSYMNEAR, 10,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02905 */ HB_P_LINEOFFSET, 104,	/* 115 */
	HB_P_PUSHSYMNEAR, 26,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUE, 149, 0,	/* 149 (abs: 03061) */
/* 02915 */ HB_P_LINEOFFSET, 105,	/* 116 */
	HB_P_PUSHSYMNEAR, 27,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 02927 */ HB_P_LINEOFFSET, 106,	/* 117 */
	HB_P_LOCALNEARSETINT, 22, 0, 0,	/* I 0*/
/* 02933 */ HB_P_LINEOFFSET, 109,	/* 120 */
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 33,	/* COD_MERC */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 20,	/* 20 (abs: 02969) */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 24,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 02968) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 34,	/* SALDO_MER */
	HB_P_ZERO,
	HB_P_LESSEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 20,	/* 20 (abs: 02990) */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 25,	/* MSOPRECO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 02989) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 35,	/* PR_VENDA */
	HB_P_ZERO,
	HB_P_LESSEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03002) */
/* 02992 */ HB_P_LINEOFFSET, 110,	/* 121 */
	HB_P_PUSHSYMNEAR, 36,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 161,	/* -95 (abs: 02905) */
/* 03002 */ HB_P_LINEOFFSET, 113,	/* 124 */
	HB_P_LOCALNEARSETINT, 22, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 22,	/* I */
	HB_P_PUSHLOCALNEAR, 14,	/* MQUANTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 03050) */
/* 03015 */ HB_P_LINEOFFSET, 114,	/* 125 */
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHMEMVAR, 37, 0,	/* MEMP_RESA */
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 33,	/* COD_MERC */
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 30,	/* MERC */
	HB_P_PUSHSYMNEAR, 30,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 35,	/* PR_VENDA */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03042 */ HB_P_LINEOFFSET, 115,	/* 126 */
	HB_P_LOCALNEARADDINT, 22, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 216,	/* -40 (abs: 03008) */
/* 03050 */ HB_P_LINEOFFSET, 116,	/* 127 */
	HB_P_PUSHSYMNEAR, 36,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 103, 255,	/* -153 (abs: 02905) */
/* 03061 */ HB_P_LINEOFFSET, 120,	/* 131 */
	HB_P_PUSHSYMNEAR, 39,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 03092) */
	HB_P_JUMP, 100, 244,	/* -2972 (abs: 00117) */
/* 03092 */ HB_P_LINEOFFSET, 121,	/* 132 */
	HB_P_LOCALNEARSETINT, 22, 0, 0,	/* I 0*/
/* 03098 */ HB_P_LINEOFFSET, 122,	/* 133 */
	HB_P_LOCALNEARSETINT, 22, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 22,	/* I */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 223, 1,	/* 479 (abs: 03593) */
/* 03117 */ HB_P_LINEOFFSET, 123,	/* 134 */
	HB_P_PUSHSYMNEAR, 41,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03131 */ HB_P_LINEOFFSET, 124,	/* 135 */
	HB_P_PUSHLOCALNEAR, 11,	/* MEMPRESA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 87,	/* 87 (abs: 03227) */
/* 03142 */ HB_P_LINEOFFSET, 125,	/* 136 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 22,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 46, 0,	/* 46 */
	HB_P_DOSHORT, 1,
/* 03170 */ HB_P_LINEOFFSET, 126,	/* 137 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 22,	/* I */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03191) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 20,	/* MFILA */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 03252) */
/* 03193 */ HB_P_LINEOFFSET, 127,	/* 138 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 16,	/* MESPACO */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 22,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 46, 0,	/* 46 */
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 27,	/* 27 (abs: 03252) */
/* 03227 */ HB_P_LINEOFFSET, 130,	/* 141 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 03252 */ HB_P_LINEOFFSET, 132,	/* 143 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 22,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 22,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03295 */ HB_P_LINEOFFSET, 133,	/* 144 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 22,	/* I */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03316) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 20,	/* MFILA */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 03365) */
/* 03318 */ HB_P_LINEOFFSET, 134,	/* 145 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 16,	/* MESPACO */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 22,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 22,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03365 */ HB_P_LINEOFFSET, 136,	/* 147 */
	HB_P_PUSHLOCALNEAR, 13,	/* MPRECO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 145, 0,	/* 145 (abs: 03519) */
/* 03377 */ HB_P_LINEOFFSET, 137,	/* 148 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'P', 'r', 'e', 'c', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 43,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 22,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03435 */ HB_P_LINEOFFSET, 138,	/* 149 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 22,	/* I */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03456) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 20,	/* MFILA */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 88,	/* 88 (abs: 03544) */
/* 03458 */ HB_P_LINEOFFSET, 139,	/* 150 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 16,	/* MESPACO */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'P', 'r', 'e', 'c', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 43,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 22,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 27,	/* 27 (abs: 03544) */
/* 03519 */ HB_P_LINEOFFSET, 142,	/* 153 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 03544 */ HB_P_LINEOFFSET, 144,	/* 155 */
	HB_P_PUSHLOCALNEAR, 20,	/* MFILA */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03559) */
/* 03553 */ HB_P_LINEOFFSET, 145,	/* 156 */
	HB_P_LOCALNEARADDINT, 22, 1, 0,	/* I 1*/
/* 03559 */ HB_P_LINEOFFSET, 147,	/* 158 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 19,	/* MLINHAS */
	HB_P_PLUS,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 03584 */ HB_P_LINEOFFSET, 148,	/* 159 */
	HB_P_LOCALNEARADDINT, 22, 1, 0,	/* I 1*/
	HB_P_JUMP, 26, 254,	/* -486 (abs: 03104) */
/* 03593 */ HB_P_LINEOFFSET, 149,	/* 160 */
	HB_P_PUSHSYMNEAR, 41,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 03607 */ HB_P_LINEOFFSET, 150,	/* 161 */
	HB_P_PUSHSYMNEAR, 44,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 03616 */ HB_P_LINEOFFSET, 151,	/* 162 */
	HB_P_PUSHSYMNEAR, 45,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 03657 */ HB_P_LINEOFFSET, 152,	/* 163 */
	HB_P_PUSHSYMNEAR, 46,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 22, 242,	/* -3562 (abs: 00117) */
/* 03682 */ HB_P_LINEOFFSET, 154,	/* 165 */
	HB_P_PUSHSYMNEAR, 47,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03689 */ HB_P_LINEOFFSET, 155,	/* 166 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 03694 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

