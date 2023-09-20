/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <sactabl2.prg>
 * Command: C:\xharbour997\bin\harbour.exe C:\helio\siachb\sactabl2.prg /q /oC:\helio\siachb\sactabl2.c /M /N /B 
 * Created: 2018.04.09 19:29:10 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "sactabl2.prg"

HB_FUNC( SACTABL2 );
HB_FUNC_INITLINES();
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( SET_KEY );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( SCROLL );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( __DBGENTRY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACTABL2 )
{ "SACTABL2", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACTABL2 )}, NULL },
{ "MCOD_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_OP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SET_KEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET_KEY )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "SCROLL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SCROLL )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "__DBGENTRY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGENTRY )}, NULL },
{ "(_INITLINES)", {HB_FS_INITEXIT}, {hb_INITLINES}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACTABL2 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACTABL2
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACTABL2 = hb_vm_SymbolInit_SACTABL2;
   #pragma data_seg()
#endif

HB_FUNC( SACTABL2 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 18, 0,	/* locals, params */
	HB_P_MODULENAME,	/* sactabl2.prg:SACTABL2 */
 's', 'a', 'c', 't', 'a', 'b', 'l', '2', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'T', 'A', 'B', 'L', '2', 0,
	HB_P_MODULENAME,	/* C:\helio\siachb\sactabl2.prg: */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 't', 'a', 'b', 'l', '2', '.', 'p', 'r', 'g', ':', 0,
/* 00057 */ HB_P_BASELINE, 9, 0,	/* 9 */
	HB_P_LOCALNAME, 1, 0,	/* MPRG */
 'M', 'P', 'R', 'G', 0,
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', 'T', 'A', 'B', 'L', '2', 0, 
	HB_P_LOCALNAME, 2, 0,	/* MTITULO */
 'M', 'T', 'I', 'T', 'U', 'L', 'O', 0,
	HB_P_LOCALNEARSETSTR, 2, 22, 0,	/* MTITULO 22*/
	'E', 'X', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'T', 'A', 'B', 'L', 'O', 'I', 'D', 'E', 'S', 0, 
	HB_P_LOCALNAME, 3, 0,	/* LCI */
 'L', 'C', 'I', 0,
	HB_P_LOCALNAME, 4, 0,	/* CCI */
 'C', 'C', 'I', 0,
	HB_P_LOCALNAME, 5, 0,	/* OPCAO */
 'O', 'P', 'C', 'A', 'O', 0,
	HB_P_LOCALNAME, 6, 0,	/* MNOME */
 'M', 'N', 'O', 'M', 'E', 0,
	HB_P_LOCALNAME, 7, 0,	/* MDATA_INI */
 'M', 'D', 'A', 'T', 'A', '_', 'I', 'N', 'I', 0,
	HB_P_LOCALNAME, 8, 0,	/* MDATA_FIM */
 'M', 'D', 'A', 'T', 'A', '_', 'F', 'I', 'M', 0,
	HB_P_LOCALNAME, 9, 0,	/* MPR_TABL */
 'M', 'P', 'R', '_', 'T', 'A', 'B', 'L', 0,
	HB_P_LOCALNAME, 10, 0,	/* MDESC_TABL */
 'M', 'D', 'E', 'S', 'C', '_', 'T', 'A', 'B', 'L', 0,
	HB_P_LOCALNAME, 11, 0,	/* MCONS_MERC */
 'M', 'C', 'O', 'N', 'S', '_', 'M', 'E', 'R', 'C', 0,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* MCONS_MERC */
	HB_P_LOCALNAME, 12, 0,	/* I_ENT */
 'I', '_', 'E', 'N', 'T', 0,
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* I_ENT 0*/
	HB_P_LOCALNAME, 13, 0,	/* M_ENT */
 'M', '_', 'E', 'N', 'T', 0,
	HB_P_LOCALNAME, 14, 0,	/* M_CODIGO */
 'M', '_', 'C', 'O', 'D', 'I', 'G', 'O', 0,
	HB_P_LOCALNAME, 15, 0,	/* MCONS_TABL */
 'M', 'C', 'O', 'N', 'S', '_', 'T', 'A', 'B', 'L', 0,
	HB_P_LOCALNAME, 16, 0,	/* MNUMERO */
 'M', 'N', 'U', 'M', 'E', 'R', 'O', 0,
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* MNUMERO 0*/
	HB_P_LOCALNAME, 17, 0,	/* I */
 'I', 0,
	HB_P_LOCALNAME, 18, 0,	/* ALT_MERC */
 'A', 'L', 'T', '_', 'M', 'E', 'R', 'C', 0,
	HB_P_LOCALNEARSETSTR, 18, 2, 0,	/* ALT_MERC 2*/
	' ', 0, 
/* 00307 */ HB_P_LINEOFFSET, 2,	/* 11 */
	HB_P_PUSHSYMNEAR, 3,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MCOD_MERC */
	HB_P_PUSHSYMNEAR, 2,	/* MCOD_OP */
	HB_P_DOSHORT, 2,
/* 00318 */ HB_P_LINEOFFSET, 4,	/* 13 */
	HB_P_PUSHSYMNEAR, 4,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 5, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00353) */
/* 00348 */ HB_P_LINEOFFSET, 5,	/* 14 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00353 */ HB_P_LINEOFFSET, 8,	/* 17 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_POPLOCALNEAR, 3,	/* LCI */
/* 00363 */ HB_P_LINEOFFSET, 9,	/* 18 */
	HB_P_PUSHSYMNEAR, 6,	/* SET_KEY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 5,
/* 00384 */ HB_P_LINEOFFSET, 10,	/* 19 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 98,	/* 98 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_DOSHORT, 5,
/* 00400 */ HB_P_LINEOFFSET, 11,	/* 20 */
/* 00402 */ HB_P_LINEOFFSET, 12,	/* 21 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* MNOME */
/* 00413 */ HB_P_LINEOFFSET, 13,	/* 22 */
	HB_P_PUSHSYMNEAR, 9,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 8,	/* MDATA_FIM */
	HB_P_POPLOCALNEAR, 7,	/* MDATA_INI */
/* 00436 */ HB_P_LINEOFFSET, 14,	/* 23 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* I_ENT 0*/
/* 00442 */ HB_P_LINEOFFSET, 15,	/* 24 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 13,	/* M_ENT */
/* 00449 */ HB_P_LINEOFFSET, 16,	/* 25 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 14,	/* M_CODIGO */
/* 00456 */ HB_P_LINEOFFSET, 17,	/* 26 */
	HB_P_PUSHSYMNEAR, 10,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00504 */ HB_P_LINEOFFSET, 18,	/* 27 */
	HB_P_PUSHSYMNEAR, 11,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DOSHORT, 4,
/* 00517 */ HB_P_LINEOFFSET, 19,	/* 28 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', 'o', 'd', 'i', 'g', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00556 */ HB_P_LINEOFFSET, 20,	/* 29 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 26, 0,	/* 26*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'T', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00587 */ HB_P_LINEOFFSET, 21,	/* 30 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00629 */ HB_P_LINEOFFSET, 22,	/* 31 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'I', 'n', 'i', 'c', 'i', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00671 */ HB_P_LINEOFFSET, 23,	/* 32 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00713 */ HB_P_LINEOFFSET, 24,	/* 33 */
	HB_P_PUSHSYMNEAR, 14,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00735 */ HB_P_LINEOFFSET, 25,	/* 34 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00767 */ HB_P_LINEOFFSET, 26,	/* 35 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 51, 0,	/* 51*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'r', 'c', '.', ' ', 'V', 'e', 'n', 'd', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 00802 */ HB_P_LINEOFFSET, 27,	/* 36 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHSYMNEAR, 15,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'r', 'c', '.', 'T', 'a', 'b', 'l', 'o', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00840 */ HB_P_LINEOFFSET, 29,	/* 38 */
	HB_P_PUSHSYMNEAR, 14,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00862 */ HB_P_LINEOFFSET, 30,	/* 39 */
	HB_P_PUSHSYMNEAR, 14,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 29, 0,	/* 29*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 29, 0,	/* 29*/
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00884 */ HB_P_LINEOFFSET, 31,	/* 40 */
	HB_P_PUSHSYMNEAR, 14,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 31, 0,	/* 31*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 31, 0,	/* 31*/
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00906 */ HB_P_LINEOFFSET, 32,	/* 41 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 81, 0,	/* 81 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MNUMERO */
	HB_P_MODULENAME,	/* C:\helio\siachb\sactabl2.prg:SACTABL2 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 't', 'a', 'b', 'l', '2', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'T', 'A', 'B', 'L', '2', 0,
	HB_P_LOCALNAME, 255, 255,	/* MNUMERO */
 'M', 'N', 'U', 'M', 'E', 'R', 'O', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01004) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01009) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'n', 'u', 'm', 'e', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
/* 01034 */ HB_P_LINEOFFSET, 32,	/* 41 */
	HB_P_MESSAGE, 20, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01048 */ HB_P_LINEOFFSET, 33,	/* 42 */
	HB_P_PUSHSYMNEAR, 21,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 18, 0,	/* GETLIST */
/* 01070 */ HB_P_LINEOFFSET, 34,	/* 43 */
	HB_P_PUSHSYMNEAR, 22,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01094) */
/* 01082 */ HB_P_LINEOFFSET, 35,	/* 44 */
	HB_P_PUSHSYMNEAR, 23,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01089 */ HB_P_LINEOFFSET, 36,	/* 45 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01094 */ HB_P_LINEOFFSET, 38,	/* 47 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 13,	/* M_ENT */
/* 01101 */ HB_P_LINEOFFSET, 39,	/* 48 */
	HB_P_MESSAGE, 24, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 25,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 144,	/* 144 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ',', 'm', 'e', 'r', 'c', ',', 'c', 'o', 'd', '_', 'f', 'a', 'b', ',', 'f', 'a', 'b', 'r', 'i', 'c', 'a', ',', 'p', 'r', '_', 'a', 'n', 't', ',', 'p', 'r', '_', 't', 'a', 'b', ',', 'd', 'e', 's', 'c', '_', 't', 'a', 'b', ',', 'c', 'o', 'd', 'i', 'g', 'o', ',', 'n', 'o', 'm', 'e', ',', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', ',', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', ',', 'd', 'a', 't', 'a', '_', 'c', 'a', 'd', ',', 'i', 'n', 'i', 'c', 'i', 'o', ',', 'f', 'i', 'n', 'a', 'l', ' ', 'F', 'R', 'O', 'M', ' ', 't', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 26,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 27,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MNUMERO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 13, 0,	/* M_ENT */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01280 */ HB_P_LINEOFFSET, 40,	/* 49 */
	HB_P_PUSHSYMNEAR, 28,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 01331) */
/* 01293 */ HB_P_LINEOFFSET, 41,	/* 50 */
	HB_P_PUSHSYMNEAR, 29,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'T', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ' ', 'n', 'a', 'o', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 01326 */ HB_P_LINEOFFSET, 42,	/* 51 */
	HB_P_JUMP, 96, 252,	/* -928 (abs: 00400) */
/* 01331 */ HB_P_LINEOFFSET, 44,	/* 53 */
	HB_P_PUSHSYMNEAR, 30,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01340 */ HB_P_LINEOFFSET, 45,	/* 54 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 27,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MNUMERO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01368 */ HB_P_LINEOFFSET, 46,	/* 55 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01397 */ HB_P_LINEOFFSET, 47,	/* 56 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 36, 0,	/* 36*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01423 */ HB_P_LINEOFFSET, 48,	/* 57 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01452 */ HB_P_LINEOFFSET, 49,	/* 58 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01481 */ HB_P_LINEOFFSET, 50,	/* 59 */
	HB_P_PUSHSYMNEAR, 30,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01489 */ HB_P_LINEOFFSET, 51,	/* 60 */
	HB_P_LOCALNEARSETINT, 17, 0, 0,	/* I 0*/
/* 01495 */ HB_P_LINEOFFSET, 52,	/* 61 */
	HB_P_LOCALNEARSETINT, 17, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 17,	/* I */
	HB_P_PUSHSYMNEAR, 28,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 201, 0,	/* 201 (abs: 01712) */
/* 01514 */ HB_P_LINEOFFSET, 53,	/* 62 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* M_CODIGO */
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_PUSHLOCALNEAR, 17,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 01530 */ HB_P_LINEOFFSET, 54,	/* 63 */
	HB_P_PUSHLOCALNEAR, 12,	/* I_ENT */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 01566) */
/* 01539 */ HB_P_LINEOFFSET, 55,	/* 64 */
	HB_P_PUSHSYMNEAR, 31,	/* SCROLL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 12,	/* I_ENT */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 01572) */
/* 01566 */ HB_P_LINEOFFSET, 57,	/* 66 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* I_ENT 1*/
/* 01572 */ HB_P_LINEOFFSET, 59,	/* 68 */
	HB_P_PUSHSYMNEAR, 30,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01581 */ HB_P_LINEOFFSET, 61,	/* 70 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 12,	/* I_ENT */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_PUSHLOCALNEAR, 17,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_PUSHLOCALNEAR, 17,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_PUSHLOCALNEAR, 17,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_PUSHLOCALNEAR, 17,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01695 */ HB_P_LINEOFFSET, 62,	/* 71 */
	HB_P_PUSHSYMNEAR, 30,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01703 */ HB_P_LINEOFFSET, 63,	/* 72 */
	HB_P_LOCALNEARADDINT, 17, 1, 0,	/* I 1*/
	HB_P_JUMP, 48, 255,	/* -208 (abs: 01501) */
/* 01712 */ HB_P_LINEOFFSET, 64,	/* 73 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_PUSHLOCALNEAR, 17,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 69,	/* 69 (abs: 01796) */
/* 01729 */ HB_P_LINEOFFSET, 65,	/* 74 */
	HB_P_PUSHSYMNEAR, 29,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'E', 's', 't', 'e', ' ', 'T', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ' ', 'n', 'a', 'o', ' ', 'p', 'o', 'd', 'e', ' ', 's', 'e', 'r', ' ', 'E', 'X', 'C', 'L', 'U', 'I', 'D', 'O', ' ', 'j', 'a', ' ', 'i', 'n', 'i', 'c', 'i', 'a', 'd', 'o', ' ', '!', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01791 */ HB_P_LINEOFFSET, 66,	/* 75 */
	HB_P_JUMP, 143, 250,	/* -1393 (abs: 00400) */
/* 01796 */ HB_P_LINEOFFSET, 68,	/* 77 */
	HB_P_PUSHSYMNEAR, 34,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'E', 'X', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'd', 'o', ' ', 'T', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 01858) */
/* 01853 */ HB_P_LINEOFFSET, 69,	/* 78 */
	HB_P_JUMP, 81, 250,	/* -1455 (abs: 00400) */
/* 01858 */ HB_P_LINEOFFSET, 71,	/* 80 */
	HB_P_MESSAGE, 24, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 25,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 't', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 26,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 27,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MNUMERO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01927 */ HB_P_LINEOFFSET, 72,	/* 81 */
	HB_P_MESSAGE, 24, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 25,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 241, 249,	/* -1551 (abs: 00400) */
	HB_P_ENDPROC
/* 01955 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_INITLINES()
{
   static const BYTE pcode[] =
   {
	HB_P_MODULENAME,	/* sactabl2 */
 's', 'a', 'c', 't', 'a', 'b', 'l', '2', 0,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'C', ':', 92, 'h', 'e', 'l', 'i', 'o', 92, 's', 'i', 'a', 'c', 'h', 'b', 92, 's', 'a', 'c', 't', 'a', 'b', 'l', '2', '.', 'p', 'r', 'g', 0, 
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	16, 'j', 254, 255, 223, 191, 239, 255, 213, 'o', 3, 0, 
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00064 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

