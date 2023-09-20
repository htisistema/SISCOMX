/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <sactabl4.prg>
 * Command: C:\xharbour997\bin\harbour.exe C:\helio\siachb\sactabl4.prg /q /oC:\helio\siachb\sactabl4.c /M /N /B 
 * Created: 2018.04.09 19:29:12 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "sactabl4.prg"

HB_FUNC( SACTABL4 );
HB_FUNC_INITLINES();
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( SAC5ET201 );
HB_FUNC_EXTERN( __DBGENTRY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACTABL4 )
{ "SACTABL4", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACTABL4 )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "ACHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACHOICE )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "MCOD_TABL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "F", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "SAC5ET201", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5ET201 )}, NULL },
{ "__DBGENTRY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGENTRY )}, NULL },
{ "(_INITLINES)", {HB_FS_INITEXIT}, {hb_INITLINES}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACTABL4 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACTABL4
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACTABL4 = hb_vm_SymbolInit_SACTABL4;
   #pragma data_seg()
#endif

HB_FUNC( SACTABL4 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 12, 0,	/* locals, params */
	HB_P_MODULENAME,	/* sactabl4.prg:SACTABL4 */
 's', 'a', 'c', 't', 'a', 'b', 'l', '4', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'T', 'A', 'B', 'L', '4', 0,
	HB_P_MODULENAME,	/* C:\helio\siachb\sactabl4.prg: */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 't', 'a', 'b', 'l', '4', '.', 'p', 'r', 'g', ':', 0,
/* 00057 */ HB_P_BASELINE, 9, 0,	/* 9 */
	HB_P_LOCALNAME, 1, 0,	/* MPRG */
 'M', 'P', 'R', 'G', 0,
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', 'T', 'A', 'B', 'L', '4', 0, 
	HB_P_LOCALNAME, 2, 0,	/* MTITULO */
 'M', 'T', 'I', 'T', 'U', 'L', 'O', 0,
	HB_P_LOCALNEARSETSTR, 2, 35, 0,	/* MTITULO 35*/
	'C', 'O', 'N', 'S', 'U', 'L', 'T', 'A', ' ', 'E', ' ', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'O', 'S', ' ', 'T', 'A', 'B', 'L', 'O', 'I', 'D', 'E', 'S', 0, 
	HB_P_LOCALNAME, 3, 0,	/* MCONS_TABL */
 'M', 'C', 'O', 'N', 'S', '_', 'T', 'A', 'B', 'L', 0,
	HB_P_LOCALNAME, 4, 0,	/* MDATA */
 'M', 'D', 'A', 'T', 'A', 0,
	HB_P_LOCALNAME, 5, 0,	/* MCONS_MERC */
 'M', 'C', 'O', 'N', 'S', '_', 'M', 'E', 'R', 'C', 0,
	HB_P_LOCALNAME, 6, 0,	/* I */
 'I', 0,
	HB_P_LOCALNAME, 7, 0,	/* Y */
 'Y', 0,
	HB_P_LOCALNAME, 8, 0,	/* POINT */
 'P', 'O', 'I', 'N', 'T', 0,
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* POINT 0*/
	HB_P_LOCALNAME, 9, 0,	/* M_MENU */
 'M', '_', 'M', 'E', 'N', 'U', 0,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 9,	/* M_MENU */
	HB_P_LOCALNAME, 10, 0,	/* MTIPO_OP */
 'M', 'T', 'I', 'P', 'O', '_', 'O', 'P', 0,
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* MTIPO_OP 0*/
	HB_P_LOCALNAME, 11, 0,	/* MORDEM */
 'M', 'O', 'R', 'D', 'E', 'M', 0,
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* MORDEM 0*/
	HB_P_LOCALNAME, 12, 0,	/* MQUANTD */
 'M', 'Q', 'U', 'A', 'N', 'T', 'D', 0,
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* MQUANTD 0*/
/* 00251 */ HB_P_LINEOFFSET, 2,	/* 11 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 8,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 2,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 3,	/* MARQ */
	HB_P_PUSHSYMNEAR, 5,	/* MPAG */
	HB_P_PUSHSYMNEAR, 6,	/* MTIT */
	HB_P_PUSHSYMNEAR, 7,	/* MTIPO */
	HB_P_DOSHORT, 6,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
	HB_P_POPVARIABLE, 3, 0,	/* MARQ */
	HB_P_POPVARIABLE, 2, 0,	/* MIMP_TIPO */
/* 00288 */ HB_P_LINEOFFSET, 4,	/* 13 */
	HB_P_PUSHSYMNEAR, 9,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 10, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00323) */
/* 00318 */ HB_P_LINEOFFSET, 5,	/* 14 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00323 */ HB_P_LINEOFFSET, 7,	/* 16 */
	HB_P_PUSHSYMNEAR, 11,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 98,	/* 98 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_DOSHORT, 5,
/* 00339 */ HB_P_LINEOFFSET, 8,	/* 17 */
/* 00341 */ HB_P_LINEOFFSET, 10,	/* 19 */
	HB_P_PUSHMEMVAR, 12, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 1, 0,	/* MTIPO_IMP */
/* 00354 */ HB_P_LINEOFFSET, 12,	/* 21 */
	HB_P_PUSHSYMNEAR, 13,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00362 */ HB_P_LINEOFFSET, 13,	/* 22 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* Y 0*/
	HB_P_PUSHLOCALNEAR, 7,	/* Y */
	HB_P_POPLOCALNEAR, 6,	/* I */
/* 00372 */ HB_P_LINEOFFSET, 14,	/* 23 */
	HB_P_PUSHSYMNEAR, 14,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 4,	/* MDATA */
/* 00381 */ HB_P_LINEOFFSET, 15,	/* 24 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00429 */ HB_P_LINEOFFSET, 16,	/* 25 */
	HB_P_PUSHSYMNEAR, 16,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DOSHORT, 4,
/* 00442 */ HB_P_LINEOFFSET, 17,	/* 26 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'T', 'a', 'b', 'l', 'o', 'i', 'd', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 00467 */ HB_P_LINEOFFSET, 18,	/* 27 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'I', 'n', 'i', 'c', 'i', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00491 */ HB_P_LINEOFFSET, 19,	/* 28 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'i', 'n', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 00514 */ HB_P_LINEOFFSET, 20,	/* 29 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'Q', 't', 'd', '.', 'P', 'r', 'd', 0, 
	HB_P_DOSHORT, 1,
/* 00539 */ HB_P_LINEOFFSET, 21,	/* 30 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 69,	/* 69 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'i', 't', 'u', 'a', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00565 */ HB_P_LINEOFFSET, 22,	/* 31 */
	HB_P_PUSHSYMNEAR, 19,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00578 */ HB_P_LINEOFFSET, 23,	/* 32 */
	HB_P_PUSHSYMNEAR, 20,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 21, 0,	/* GETLIST */
/* 00600 */ HB_P_LINEOFFSET, 24,	/* 33 */
	HB_P_PUSHSYMNEAR, 22,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00617) */
/* 00612 */ HB_P_LINEOFFSET, 25,	/* 34 */
	HB_P_JUMP, 185, 14,	/* 3769 (abs: 04383) */
/* 00617 */ HB_P_LINEOFFSET, 27,	/* 36 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 's', 'e', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'T', 'A', 'B', 'L', 'O', 'I', 'D', 'E', 'S', ' ', 'p', 'a', 'r', 'a', ' ', 's', 'e', 'r', ' ', 'i', 'n', 'i', 'c', 'i', 'a', 'd', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00679 */ HB_P_LINEOFFSET, 28,	/* 37 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 9,	/* M_MENU */
/* 00686 */ HB_P_LINEOFFSET, 29,	/* 38 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* MCONS_TABL */
/* 00693 */ HB_P_LINEOFFSET, 31,	/* 40 */
	HB_P_MESSAGE, 23, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 24,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 181,	/* 181 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ',', 'n', 'o', 'm', 'e', ',', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', ',', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', ',', 'c', 'o', 'u', 'n', 't', '(', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ')', ' ', 'F', 'R', 'O', 'M', ' ', 't', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'i', 'n', 'i', 'c', 'i', 'o', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ',', 'c', 'o', 'd', 'i', 'g', 'o', ',', 'n', 'o', 'm', 'e', ',', 'n', 'o', 'm', 'e', ',', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', ',', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', ',', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', ',', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* MCONS_TABL */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00894 */ HB_P_LINEOFFSET, 32,	/* 41 */
	HB_P_PUSHSYMNEAR, 25,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 155, 0,	/* 155 (abs: 01060) */
/* 00908 */ HB_P_LINEOFFSET, 33,	/* 42 */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* I 0*/
/* 00914 */ HB_P_LINEOFFSET, 34,	/* 43 */
	HB_P_LOCALNEARSETINT, 6, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_PUSHSYMNEAR, 25,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 130, 0,	/* 130 (abs: 01060) */
/* 00933 */ HB_P_LINEOFFSET, 35,	/* 44 */
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* M_MENU */
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 27,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 27,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', 'I', 'N', 'I', 'C', 'I', 'A', 'L', 'I', 'Z', 'A', 'R', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01051 */ HB_P_LINEOFFSET, 36,	/* 45 */
	HB_P_LOCALNEARADDINT, 6, 1, 0,	/* I 1*/
	HB_P_JUMP, 119, 255,	/* -137 (abs: 00920) */
/* 01060 */ HB_P_LINEOFFSET, 38,	/* 47 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 's', 'e', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'T', 'A', 'B', 'L', 'O', 'I', 'D', 'E', 'S', ' ', 'p', 'a', 'r', 'a', ' ', 's', 'e', 'r', ' ', 'F', 'i', 'n', 'a', 'l', 'i', 'z', 'a', 'd', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01124 */ HB_P_LINEOFFSET, 39,	/* 48 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* MCONS_TABL */
/* 01131 */ HB_P_LINEOFFSET, 41,	/* 50 */
	HB_P_MESSAGE, 23, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 24,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 203,	/* 203 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ',', 'n', 'o', 'm', 'e', ',', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', ',', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', ',', 'c', 'o', 'u', 'n', 't', '(', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ')', ' ', 'F', 'R', 'O', 'M', ' ', 't', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'f', 'i', 'n', 'a', 'l', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'i', 'n', 'i', 'c', 'i', 'o', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ',', 'c', 'o', 'd', 'i', 'g', 'o', ',', 'n', 'o', 'm', 'e', ',', 'n', 'o', 'm', 'e', ',', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', ',', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', ',', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', ',', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* MCONS_TABL */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01354 */ HB_P_LINEOFFSET, 42,	/* 51 */
	HB_P_PUSHSYMNEAR, 25,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 155, 0,	/* 155 (abs: 01520) */
/* 01368 */ HB_P_LINEOFFSET, 43,	/* 52 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* Y 0*/
/* 01374 */ HB_P_LINEOFFSET, 44,	/* 53 */
	HB_P_LOCALNEARSETINT, 7, 1, 0,	/* Y 1*/
	HB_P_PUSHLOCALNEAR, 7,	/* Y */
	HB_P_PUSHSYMNEAR, 25,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 130, 0,	/* 130 (abs: 01520) */
/* 01393 */ HB_P_LINEOFFSET, 45,	/* 54 */
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* M_MENU */
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 7,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 7,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 27,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 7,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 27,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 7,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 7,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', 'F', 'I', 'N', 'A', 'L', 'I', 'Z', 'A', 'R', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01511 */ HB_P_LINEOFFSET, 46,	/* 55 */
	HB_P_LOCALNEARADDINT, 7, 1, 0,	/* Y 1*/
	HB_P_JUMP, 119, 255,	/* -137 (abs: 01380) */
/* 01520 */ HB_P_LINEOFFSET, 48,	/* 57 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 01534) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 7,	/* Y */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 63,	/* 63 (abs: 01597) */
/* 01536 */ HB_P_LINEOFFSET, 49,	/* 58 */
	HB_P_PUSHSYMNEAR, 29,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'T', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ' ', 'p', 'a', 'r', 'a', ' ', 's', 'e', 'r', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 01592 */ HB_P_LINEOFFSET, 50,	/* 59 */
	HB_P_JUMP, 25, 251,	/* -1255 (abs: 00339) */
/* 01597 */ HB_P_LINEOFFSET, 52,	/* 61 */
	HB_P_PUSHSYMNEAR, 13,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01606 */ HB_P_LINEOFFSET, 53,	/* 62 */
	HB_P_PUSHSYMNEAR, 30,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHBYTE, 97,	/* 97 */
	HB_P_PUSHLOCALNEAR, 9,	/* M_MENU */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* POINT */
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPLOCALNEAR, 8,	/* POINT */
/* 01628 */ HB_P_LINEOFFSET, 54,	/* 63 */
/* 01630 */ HB_P_LINEOFFSET, 55,	/* 64 */
	HB_P_PUSHSYMNEAR, 22,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 01647) */
/* 01642 */ HB_P_LINEOFFSET, 56,	/* 65 */
	HB_P_JUMP, 179, 10,	/* 2739 (abs: 04383) */
/* 01647 */ HB_P_LINEOFFSET, 57,	/* 66 */
	HB_P_PUSHSYMNEAR, 22,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 218, 250,	/* -1318 (abs: 00339) */
/* 01660 */ HB_P_LINEOFFSET, 58,	/* 67 */
	HB_P_PUSHSYMNEAR, 13,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01668 */ HB_P_LINEOFFSET, 59,	/* 68 */
	HB_P_PUSHSYMNEAR, 31,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* M_MENU */
	HB_P_PUSHLOCALNEAR, 8,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 33, 0,	/* MCOD_TABL */
/* 01690 */ HB_P_LINEOFFSET, 60,	/* 69 */
	HB_P_PUSHSYMNEAR, 11,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'M', 'e', 'n', 'u', ' ', 'p', 'a', 'r', 'a', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'e', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', 0, 
	HB_P_DOSHORT, 5,
/* 01739 */ HB_P_LINEOFFSET, 61,	/* 70 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'T', 'a', 'b', 'l', 'o', 'i', 'd', 'e', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01777 */ HB_P_LINEOFFSET, 62,	/* 71 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'i', 'p', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01815 */ HB_P_LINEOFFSET, 63,	/* 72 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'O', 'r', 'd', 'e', 'm', ' ', 'p', 'a', 'r', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01854 */ HB_P_LINEOFFSET, 64,	/* 73 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'C', 'o', 'p', 'i', 'a', 's', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01893 */ HB_P_LINEOFFSET, 65,	/* 74 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 't', 'a', 'b', 'l', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01951 */ HB_P_LINEOFFSET, 66,	/* 75 */
	HB_P_PUSHSYMNEAR, 20,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 21, 0,	/* GETLIST */
/* 01973 */ HB_P_LINEOFFSET, 67,	/* 76 */
	HB_P_PUSHSYMNEAR, 22,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01997) */
/* 01985 */ HB_P_LINEOFFSET, 68,	/* 77 */
	HB_P_PUSHSYMNEAR, 37,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01992 */ HB_P_LINEOFFSET, 69,	/* 78 */
	HB_P_JUMP, 137, 249,	/* -1655 (abs: 00339) */
/* 01997 */ HB_P_LINEOFFSET, 71,	/* 80 */
	HB_P_MESSAGE, 23, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 24,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 't', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 38,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MCOD_TABL */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* MCONS_TABL */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02072 */ HB_P_LINEOFFSET, 72,	/* 81 */
	HB_P_PUSHSYMNEAR, 25,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 02151) */
/* 02085 */ HB_P_LINEOFFSET, 73,	/* 82 */
	HB_P_PUSHSYMNEAR, 29,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'r', ' ', 'e', 's', 't', 'e', ' ', 'T', 'A', 'B', 'L', 'O', 'I', 'D', 'E', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02139 */ HB_P_LINEOFFSET, 74,	/* 83 */
	HB_P_PUSHSYMNEAR, 37,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02146 */ HB_P_LINEOFFSET, 75,	/* 84 */
	HB_P_JUMP, 239, 248,	/* -1809 (abs: 00339) */
/* 02151 */ HB_P_LINEOFFSET, 77,	/* 86 */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'd', 'o', ' ', 'T', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 6, 0,	/* MTIT */
/* 02204 */ HB_P_LINEOFFSET, 79,	/* 88 */
	HB_P_PUSHSYMNEAR, 40,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', '/', 'C', 'O', 'N', 'S', 'U', 'L', 'T', 'A', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 02239 */ HB_P_LINEOFFSET, 80,	/* 89 */
	HB_P_PUSHSYMNEAR, 40,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 41,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 02273 */ HB_P_LINEOFFSET, 81,	/* 90 */
	HB_P_PUSHSYMNEAR, 42,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 02287 */ HB_P_LINEOFFSET, 82,	/* 91 */
	HB_P_PUSHSYMNEAR, 43,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 88, 0,	/* 88 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MTIPO_OP */
	HB_P_MODULENAME,	/* C:\helio\siachb\sactabl4.prg:SACTABL4 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 't', 'a', 'b', 'l', '4', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'T', 'A', 'B', 'L', '4', 0,
	HB_P_LOCALNAME, 255, 255,	/* MTIPO_OP */
 'M', 'T', 'I', 'P', 'O', '_', 'O', 'P', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
/* 02358 */ HB_P_LINE, 91, 0,	/* 91 */
	HB_P_PUSHSYMNEAR, 44,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02374) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02379) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 't', 'i', 'p', 'o', '_', 'o', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 10,	/* MTIPO_OP */
/* 02395 */ HB_P_LINEOFFSET, 83,	/* 92 */
	HB_P_PUSHSYMNEAR, 40,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'L', 'F', 'A', 'B', 'E', 'T', 'I', 'C', 'A', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 02423 */ HB_P_LINEOFFSET, 84,	/* 93 */
	HB_P_PUSHSYMNEAR, 40,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHSYMNEAR, 41,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 'C', 'O', 'D', 'I', 'G', 'O', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 02453 */ HB_P_LINEOFFSET, 85,	/* 94 */
	HB_P_PUSHSYMNEAR, 40,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHSYMNEAR, 41,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 02487 */ HB_P_LINEOFFSET, 86,	/* 95 */
	HB_P_PUSHSYMNEAR, 42,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 02501 */ HB_P_LINEOFFSET, 87,	/* 96 */
	HB_P_PUSHSYMNEAR, 43,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 86, 0,	/* 86 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MORDEM */
	HB_P_MODULENAME,	/* C:\helio\siachb\sactabl4.prg:SACTABL4 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 't', 'a', 'b', 'l', '4', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'T', 'A', 'B', 'L', '4', 0,
	HB_P_LOCALNAME, 255, 255,	/* MORDEM */
 'M', 'O', 'R', 'D', 'E', 'M', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
/* 02570 */ HB_P_LINE, 96, 0,	/* 96 */
	HB_P_PUSHSYMNEAR, 44,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02586) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02591) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'o', 'r', 'd', 'e', 'm', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 11,	/* MORDEM */
/* 02605 */ HB_P_LINEOFFSET, 88,	/* 97 */
	HB_P_PUSHLOCALNEAR, 11,	/* MORDEM */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 137, 0,	/* 137 (abs: 02748) */
/* 02614 */ HB_P_LINEOFFSET, 89,	/* 98 */
	HB_P_MESSAGE, 23, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 24,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 't', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 38,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MCOD_TABL */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* MCONS_TABL */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02711 */ HB_P_LINEOFFSET, 90,	/* 99 */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'O', 'r', 'd', 'e', 'm', ' ', 'd', 'e', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 0, 
	HB_P_POPVARIABLE, 7, 0,	/* MTIPO */
	HB_P_JUMP, 23, 1,	/* 279 (abs: 03024) */
/* 02748 */ HB_P_LINEOFFSET, 91,	/* 100 */
	HB_P_PUSHLOCALNEAR, 11,	/* MORDEM */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 136, 0,	/* 136 (abs: 02891) */
/* 02758 */ HB_P_LINEOFFSET, 92,	/* 101 */
	HB_P_MESSAGE, 23, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 24,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 't', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 38,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MCOD_TABL */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'm', 'e', 'r', 'c', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* MCONS_TABL */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02851 */ HB_P_LINEOFFSET, 93,	/* 102 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'O', 'r', 'd', 'e', 'm', ' ', 'd', 'e', ' ', 'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 0, 
	HB_P_POPVARIABLE, 7, 0,	/* MTIPO */
	HB_P_JUMP, 136, 0,	/* 136 (abs: 03024) */
/* 02891 */ HB_P_LINEOFFSET, 95,	/* 104 */
	HB_P_MESSAGE, 23, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 24,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 't', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 38,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MCOD_TABL */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', '_', 'f', 'a', 'b', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* MCONS_TABL */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02987 */ HB_P_LINEOFFSET, 96,	/* 105 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'O', 'r', 'd', 'e', 'm', ' ', 'd', 'e', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', 0, 
	HB_P_POPVARIABLE, 7, 0,	/* MTIPO */
/* 03024 */ HB_P_LINEOFFSET, 98,	/* 107 */
	HB_P_PUSHSYMNEAR, 25,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 03103) */
/* 03037 */ HB_P_LINEOFFSET, 99,	/* 108 */
	HB_P_PUSHSYMNEAR, 29,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'r', ' ', 'e', 's', 't', 'e', ' ', 'T', 'A', 'B', 'L', 'O', 'I', 'D', 'E', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03091 */ HB_P_LINEOFFSET, 100,	/* 109 */
	HB_P_PUSHSYMNEAR, 37,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03098 */ HB_P_LINEOFFSET, 101,	/* 110 */
	HB_P_JUMP, 55, 245,	/* -2761 (abs: 00339) */
/* 03103 */ HB_P_LINEOFFSET, 103,	/* 112 */
	HB_P_PUSHLOCALNEAR, 10,	/* MTIPO_OP */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 231, 4,	/* 1255 (abs: 04364) */
/* 03112 */ HB_P_LINEOFFSET, 104,	/* 113 */
	HB_P_LOCALNEARSETINT, 12, 1, 0,	/* MQUANTD 1*/
/* 03118 */ HB_P_LINEOFFSET, 105,	/* 114 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 81, 0,	/* 81 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MQUANTD */
	HB_P_MODULENAME,	/* C:\helio\siachb\sactabl4.prg:SACTABL4 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 't', 'a', 'b', 'l', '4', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'T', 'A', 'B', 'L', '4', 0,
	HB_P_LOCALNAME, 255, 255,	/* MQUANTD */
 'M', 'Q', 'U', 'A', 'N', 'T', 'D', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03213) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03218) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'q', 'u', 'a', 'n', 't', 'd', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 76, 0,	/* 76 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MQUANTD */
	HB_P_MODULENAME,	/* C:\helio\siachb\sactabl4.prg:SACTABL4 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 't', 'a', 'b', 'l', '4', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'T', 'A', 'B', 'L', '4', 0,
	HB_P_LOCALNAME, 255, 255,	/* MQUANTD */
 'M', 'Q', 'U', 'A', 'N', 'T', 'D', 0,
/* 03293 */ HB_P_LINE, 114, 0,	/* 114 */
	HB_P_PUSHSYMNEAR, 45,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03308) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 03309) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
/* 03315 */ HB_P_LINEOFFSET, 105,	/* 114 */
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03329 */ HB_P_LINEOFFSET, 106,	/* 115 */
	HB_P_PUSHSYMNEAR, 20,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 21, 0,	/* GETLIST */
/* 03351 */ HB_P_LINEOFFSET, 107,	/* 116 */
	HB_P_PUSHSYMNEAR, 22,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 03375) */
/* 03363 */ HB_P_LINEOFFSET, 108,	/* 117 */
	HB_P_PUSHSYMNEAR, 37,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03370 */ HB_P_LINEOFFSET, 109,	/* 118 */
	HB_P_JUMP, 39, 244,	/* -3033 (abs: 00339) */
/* 03375 */ HB_P_LINEOFFSET, 111,	/* 120 */
	HB_P_PUSHSYMNEAR, 13,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 03383 */ HB_P_LINEOFFSET, 112,	/* 121 */
	HB_P_PUSHSYMNEAR, 46,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'A', 'B', 'L', 'O', 'I', 'D', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 03416) */
/* 03411 */ HB_P_LINEOFFSET, 113,	/* 122 */
	HB_P_JUMP, 254, 243,	/* -3074 (abs: 00339) */
/* 03416 */ HB_P_LINEOFFSET, 115,	/* 124 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 47, 0,	/* F */
/* 03422 */ HB_P_LINEOFFSET, 116,	/* 125 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 47, 0,	/* F */
	HB_P_PUSHVARIABLE, 47, 0,	/* F */
	HB_P_PUSHLOCALNEAR, 12,	/* MQUANTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 97, 3,	/* 865 (abs: 04299) */
/* 03437 */ HB_P_LINEOFFSET, 117,	/* 126 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
	HB_P_POPLOCALNEAR, 6,	/* I */
/* 03446 */ HB_P_LINEOFFSET, 118,	/* 127 */
	HB_P_LOCALNEARSETINT, 6, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_PUSHSYMNEAR, 25,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 15, 3,	/* 783 (abs: 04245) */
/* 03465 */ HB_P_LINEOFFSET, 119,	/* 128 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 03484) */
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 163, 1,	/* 419 (abs: 03903) */
/* 03487 */ HB_P_LINEOFFSET, 121,	/* 130 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 03496 */ HB_P_LINEOFFSET, 122,	/* 131 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 03512) */
/* 03505 */ HB_P_LINEOFFSET, 123,	/* 132 */
	HB_P_PUSHSYMNEAR, 49,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03512 */ HB_P_LINEOFFSET, 125,	/* 134 */
	HB_P_PUSHSYMNEAR, 50,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 6, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '1', 0, 
	HB_P_DOSHORT, 5,
/* 03536 */ HB_P_LINEOFFSET, 126,	/* 135 */
	HB_P_PUSHSYMNEAR, 51,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03550 */ HB_P_LINEOFFSET, 127,	/* 136 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03579 */ HB_P_LINEOFFSET, 128,	/* 137 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 52,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 03647 */ HB_P_LINEOFFSET, 129,	/* 138 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 52,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'r', '.', ' ', 'T', 'a', 'b', 'e', 'l', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 03685 */ HB_P_LINEOFFSET, 130,	/* 139 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 52,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'P', 'r', '.', 'T', 'a', 'b', 'l', 'o', 'i', 'd', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 03724 */ HB_P_LINEOFFSET, 131,	/* 140 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 52,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'a', 't', 'a', ' ', 'C', 'a', 'd', 0, 
	HB_P_DOSHORT, 1,
/* 03760 */ HB_P_LINEOFFSET, 132,	/* 141 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 52,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', 'I', 'n', 'i', 'c', 'i', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03796 */ HB_P_LINEOFFSET, 133,	/* 142 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 52,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', 'F', 'i', 'n', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 03832 */ HB_P_LINEOFFSET, 134,	/* 143 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 52,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 03870 */ HB_P_LINEOFFSET, 135,	/* 144 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03903 */ HB_P_LINEOFFSET, 137,	/* 146 */
	HB_P_PUSHSYMNEAR, 51,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03917 */ HB_P_LINEOFFSET, 138,	/* 147 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03946 */ HB_P_LINEOFFSET, 139,	/* 148 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 52,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03979 */ HB_P_LINEOFFSET, 140,	/* 149 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 52,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04030 */ HB_P_LINEOFFSET, 141,	/* 150 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 52,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04082 */ HB_P_LINEOFFSET, 142,	/* 151 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 52,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04115 */ HB_P_LINEOFFSET, 143,	/* 152 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 52,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04148 */ HB_P_LINEOFFSET, 144,	/* 153 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 52,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04181 */ HB_P_LINEOFFSET, 145,	/* 154 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 52,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04236 */ HB_P_LINEOFFSET, 146,	/* 155 */
	HB_P_LOCALNEARADDINT, 6, 1, 0,	/* I 1*/
	HB_P_JUMP, 234, 252,	/* -790 (abs: 03452) */
/* 04245 */ HB_P_LINEOFFSET, 147,	/* 156 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 04271 */ HB_P_LINEOFFSET, 148,	/* 157 */
	HB_P_PUSHSYMNEAR, 49,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04278 */ HB_P_LINEOFFSET, 149,	/* 158 */
	HB_P_PUSHSYMNEAR, 55,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 04287 */ HB_P_LINEOFFSET, 150,	/* 159 */
	HB_P_PUSHVARIABLE, 47, 0,	/* F */
	HB_P_INC,
	HB_P_POPVARIABLE, 47, 0,	/* F */
	HB_P_JUMP, 156, 252,	/* -868 (abs: 03428) */
/* 04299 */ HB_P_LINEOFFSET, 151,	/* 160 */
	HB_P_PUSHSYMNEAR, 42,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 42,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 42,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 04340 */ HB_P_LINEOFFSET, 152,	/* 161 */
	HB_P_PUSHSYMNEAR, 56,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'A', 'B', 'L', 'O', 'I', 'D', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 11,	/* 11 (abs: 04373) */
/* 04364 */ HB_P_LINEOFFSET, 154,	/* 163 */
	HB_P_PUSHSYMNEAR, 57,	/* SAC5ET201 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_TABL */
	HB_P_DOSHORT, 1,
/* 04373 */ HB_P_LINEOFFSET, 156,	/* 165 */
	HB_P_PUSHSYMNEAR, 37,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 55, 240,	/* -4041 (abs: 00339) */
/* 04383 */ HB_P_LINEOFFSET, 161,	/* 170 */
	HB_P_PUSHSYMNEAR, 37,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04390 */ HB_P_LINEOFFSET, 162,	/* 171 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 04395 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_INITLINES()
{
   static const BYTE pcode[] =
   {
	HB_P_MODULENAME,	/* sactabl4 */
 's', 'a', 'c', 't', 'a', 'b', 'l', '4', 0,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'C', ':', 92, 'h', 'e', 'l', 'i', 'o', 92, 's', 'i', 'a', 'c', 'h', 'b', 92, 's', 'a', 'c', 't', 'a', 'b', 'l', '4', '.', 'p', 'r', 'g', 0, 
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	16, 'j', 235, 255, 'w', 191, 253, 238, 255, 127, '_', 255, 127, '{', 127, 247, 221, 255, 253, 255, '+', 12, 0, 
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00075 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

