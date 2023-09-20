/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <sactabl.prg>
 * Command: C:\xharbour997\bin\harbour.exe C:\helio\siachb\sactabl.prg /q /oC:\helio\siachb\sactabl.c /M /N /B 
 * Created: 2018.04.09 19:29:08 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "sactabl.prg"

HB_FUNC( SACTABL );
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
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( F4_MERC );
HB_FUNC_EXTERN( F4_MERC1 );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( SCROLL );
HB_FUNC_EXTERN( __DBGENTRY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACTABL )
{ "SACTABL", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACTABL )}, NULL },
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
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "MCOD_BARRA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "F4_MERC", {HB_FS_PUBLIC}, {HB_FUNCNAME( F4_MERC )}, NULL },
{ "F4_MERC1", {HB_FS_PUBLIC}, {HB_FUNCNAME( F4_MERC1 )}, NULL },
{ "MMERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "SCROLL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SCROLL )}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__DBGENTRY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGENTRY )}, NULL },
{ "(_INITLINES)", {HB_FS_INITEXIT}, {hb_INITLINES}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACTABL )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACTABL
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACTABL = hb_vm_SymbolInit_SACTABL;
   #pragma data_seg()
#endif

HB_FUNC( SACTABL )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 18, 0,	/* locals, params */
	HB_P_MODULENAME,	/* sactabl.prg:SACTABL */
 's', 'a', 'c', 't', 'a', 'b', 'l', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'T', 'A', 'B', 'L', 0,
	HB_P_MODULENAME,	/* C:\helio\siachb\sactabl.prg: */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 't', 'a', 'b', 'l', '.', 'p', 'r', 'g', ':', 0,
/* 00054 */ HB_P_BASELINE, 9, 0,	/* 9 */
	HB_P_LOCALNAME, 1, 0,	/* MPRG */
 'M', 'P', 'R', 'G', 0,
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', 'T', 'A', 'B', 'L', 0, 
	HB_P_LOCALNAME, 2, 0,	/* MTITULO */
 'M', 'T', 'I', 'T', 'U', 'L', 'O', 0,
	HB_P_LOCALNEARSETSTR, 2, 22, 0,	/* MTITULO 22*/
	'I', 'N', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'T', 'A', 'B', 'L', 'O', 'I', 'D', 'E', 'S', 0, 
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
/* 00303 */ HB_P_LINEOFFSET, 2,	/* 11 */
	HB_P_PUSHSYMNEAR, 3,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MCOD_MERC */
	HB_P_PUSHSYMNEAR, 2,	/* MCOD_OP */
	HB_P_DOSHORT, 2,
/* 00314 */ HB_P_LINEOFFSET, 4,	/* 13 */
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
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00349) */
/* 00344 */ HB_P_LINEOFFSET, 5,	/* 14 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00349 */ HB_P_LINEOFFSET, 8,	/* 17 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_POPLOCALNEAR, 3,	/* LCI */
/* 00359 */ HB_P_LINEOFFSET, 9,	/* 18 */
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
/* 00380 */ HB_P_LINEOFFSET, 10,	/* 19 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 98,	/* 98 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_DOSHORT, 5,
/* 00396 */ HB_P_LINEOFFSET, 11,	/* 20 */
/* 00398 */ HB_P_LINEOFFSET, 12,	/* 21 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* MNOME */
/* 00409 */ HB_P_LINEOFFSET, 13,	/* 22 */
	HB_P_PUSHSYMNEAR, 9,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 8,	/* MDATA_FIM */
	HB_P_POPLOCALNEAR, 7,	/* MDATA_INI */
/* 00432 */ HB_P_LINEOFFSET, 14,	/* 23 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* I_ENT 0*/
/* 00438 */ HB_P_LINEOFFSET, 15,	/* 24 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 13,	/* M_ENT */
/* 00445 */ HB_P_LINEOFFSET, 16,	/* 25 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 14,	/* M_CODIGO */
/* 00452 */ HB_P_LINEOFFSET, 17,	/* 26 */
	HB_P_PUSHSYMNEAR, 10,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00500 */ HB_P_LINEOFFSET, 18,	/* 27 */
	HB_P_PUSHSYMNEAR, 11,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DOSHORT, 4,
/* 00513 */ HB_P_LINEOFFSET, 19,	/* 28 */
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
/* 00552 */ HB_P_LINEOFFSET, 20,	/* 29 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 25, 0,	/* 25*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'T', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00583 */ HB_P_LINEOFFSET, 21,	/* 30 */
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
/* 00625 */ HB_P_LINEOFFSET, 22,	/* 31 */
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
/* 00667 */ HB_P_LINEOFFSET, 23,	/* 32 */
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
/* 00709 */ HB_P_LINEOFFSET, 24,	/* 33 */
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
/* 00731 */ HB_P_LINEOFFSET, 25,	/* 34 */
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
/* 00763 */ HB_P_LINEOFFSET, 26,	/* 35 */
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
/* 00798 */ HB_P_LINEOFFSET, 27,	/* 36 */
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
/* 00836 */ HB_P_LINEOFFSET, 29,	/* 38 */
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
/* 00858 */ HB_P_LINEOFFSET, 30,	/* 39 */
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
/* 00880 */ HB_P_LINEOFFSET, 31,	/* 40 */
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
/* 00902 */ HB_P_LINEOFFSET, 32,	/* 41 */
	HB_P_PUSHSYMNEAR, 16,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00911 */ HB_P_LINEOFFSET, 33,	/* 42 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00938 */ HB_P_LINEOFFSET, 34,	/* 43 */
	HB_P_PUSHSYMNEAR, 16,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00946 */ HB_P_LINEOFFSET, 35,	/* 44 */
	HB_P_PUSHSYMNEAR, 18,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 35, 0,	/* 35*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 21,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 77, 0,	/* 77 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MNOME */
	HB_P_MODULENAME,	/* C:\helio\siachb\sactabl.prg:SACTABL */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 't', 'a', 'b', 'l', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'T', 'A', 'B', 'L', 0,
	HB_P_LOCALNAME, 255, 255,	/* MNOME */
 'M', 'N', 'O', 'M', 'E', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01040) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01045) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'n', 'o', 'm', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
/* 01065 */ HB_P_LINEOFFSET, 35,	/* 44 */
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01079 */ HB_P_LINEOFFSET, 36,	/* 45 */
	HB_P_PUSHSYMNEAR, 18,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 21,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 81, 0,	/* 81 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MDATA_INI */
	HB_P_MODULENAME,	/* C:\helio\siachb\sactabl.prg:SACTABL */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 't', 'a', 'b', 'l', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'T', 'A', 'B', 'L', 0,
	HB_P_LOCALNAME, 255, 255,	/* MDATA_INI */
 'M', 'D', 'A', 'T', 'A', '_', 'I', 'N', 'I', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01180) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01185) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 77, 0,	/* 77 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MDATA_INI */
	HB_P_MODULENAME,	/* C:\helio\siachb\sactabl.prg:SACTABL */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 't', 'a', 'b', 'l', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'T', 'A', 'B', 'L', 0,
	HB_P_LOCALNAME, 255, 255,	/* MDATA_INI */
 'M', 'D', 'A', 'T', 'A', '_', 'I', 'N', 'I', 0,
/* 01258 */ HB_P_LINE, 45, 0,	/* 45 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSYMNEAR, 17,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01274) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01275) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
/* 01281 */ HB_P_LINEOFFSET, 36,	/* 45 */
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01295 */ HB_P_LINEOFFSET, 37,	/* 46 */
	HB_P_PUSHSYMNEAR, 18,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 21,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 81, 0,	/* 81 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MDATA_FIM */
	HB_P_MODULENAME,	/* C:\helio\siachb\sactabl.prg:SACTABL */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 't', 'a', 'b', 'l', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'T', 'A', 'B', 'L', 0,
	HB_P_LOCALNAME, 255, 255,	/* MDATA_FIM */
 'M', 'D', 'A', 'T', 'A', '_', 'F', 'I', 'M', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01396) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01401) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'd', 'a', 't', 'a', '_', 'f', 'i', 'm', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 89, 0,	/* 89 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	7, 0,	/* MDATA_INI */
	8, 0,	/* MDATA_FIM */
	HB_P_MODULENAME,	/* C:\helio\siachb\sactabl.prg:SACTABL */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 't', 'a', 'b', 'l', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'T', 'A', 'B', 'L', 0,
	HB_P_LOCALNAME, 255, 255,	/* MDATA_INI */
 'M', 'D', 'A', 'T', 'A', '_', 'I', 'N', 'I', 0,
	HB_P_LOCALNAME, 254, 255,	/* MDATA_FIM */
 'M', 'D', 'A', 'T', 'A', '_', 'F', 'I', 'M', 0,
/* 01489 */ HB_P_LINE, 46, 0,	/* 46 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01502) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01503) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
/* 01509 */ HB_P_LINEOFFSET, 37,	/* 46 */
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01523 */ HB_P_LINEOFFSET, 38,	/* 47 */
	HB_P_PUSHSYMNEAR, 23,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 20, 0,	/* GETLIST */
/* 01545 */ HB_P_LINEOFFSET, 39,	/* 48 */
	HB_P_PUSHSYMNEAR, 24,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01569) */
/* 01557 */ HB_P_LINEOFFSET, 40,	/* 49 */
	HB_P_PUSHSYMNEAR, 25,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01564 */ HB_P_LINEOFFSET, 41,	/* 50 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01569 */ HB_P_LINEOFFSET, 43,	/* 52 */
/* 01571 */ HB_P_LINEOFFSET, 44,	/* 53 */
	HB_P_PUSHSYMNEAR, 11,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DOSHORT, 4,
/* 01591 */ HB_P_LINEOFFSET, 45,	/* 54 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 30, 0,	/* 30*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'o', 'd', 'i', 'g', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01619 */ HB_P_LINEOFFSET, 46,	/* 55 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 30, 0,	/* 30*/
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'r', 'c', '.', ' ', 'V', 'e', 'n', 'd', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 01651 */ HB_P_LINEOFFSET, 47,	/* 56 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 30, 0,	/* 30*/
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
/* 01689 */ HB_P_LINEOFFSET, 49,	/* 58 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 26, 0,	/* MCOD_BARRA */
/* 01701 */ HB_P_LINEOFFSET, 50,	/* 59 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* MDESC_TABL 0*/
	HB_P_PUSHLOCALNEAR, 10,	/* MDESC_TABL */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 9,	/* MPR_TABL */
	HB_P_POPVARIABLE, 1, 0,	/* MCOD_MERC */
/* 01715 */ HB_P_LINEOFFSET, 51,	/* 60 */
	HB_P_LOCALNEARSETSTR, 18, 2, 0,	/* ALT_MERC 2*/
	' ', 0, 
/* 01723 */ HB_P_LINEOFFSET, 52,	/* 61 */
	HB_P_PUSHSYMNEAR, 10,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'a', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 01779 */ HB_P_LINEOFFSET, 54,	/* 63 */
	HB_P_PUSHSYMNEAR, 18,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 21,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01838 */ HB_P_LINEOFFSET, 55,	/* 64 */
	HB_P_PUSHSYMNEAR, 23,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 20, 0,	/* GETLIST */
/* 01860 */ HB_P_LINEOFFSET, 56,	/* 65 */
	HB_P_PUSHSYMNEAR, 24,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 01877) */
/* 01872 */ HB_P_LINEOFFSET, 57,	/* 66 */
	HB_P_JUMP, 43, 5,	/* 1323 (abs: 03197) */
/* 01877 */ HB_P_LINEOFFSET, 59,	/* 68 */
	HB_P_PUSHSYMNEAR, 27,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MCOD_BARRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 232, 0,	/* 232 (abs: 02119) */
/* 01890 */ HB_P_LINEOFFSET, 60,	/* 69 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* MCONS_MERC */
/* 01897 */ HB_P_LINEOFFSET, 61,	/* 70 */
	HB_P_PUSHSYMNEAR, 28,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MCOD_BARRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 73,	/* 73 (abs: 01988) */
/* 01917 */ HB_P_LINEOFFSET, 62,	/* 71 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MCOD_BARRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 11, 0,	/* MCONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
	HB_P_JUMPNEAR, 83,	/* 83 (abs: 02069) */
/* 01988 */ HB_P_LINEOFFSET, 64,	/* 73 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MCOD_BARRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 11, 0,	/* MCONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02069 */ HB_P_LINEOFFSET, 66,	/* 75 */
	HB_P_PUSHSYMNEAR, 28,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 227, 0,	/* 227 (abs: 02307) */
/* 02083 */ HB_P_LINEOFFSET, 67,	/* 76 */
	HB_P_PUSHSYMNEAR, 35,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'n', 'a', 'o', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 02114 */ HB_P_LINEOFFSET, 68,	/* 77 */
	HB_P_JUMP, 221, 253,	/* -547 (abs: 01569) */
/* 02119 */ HB_P_LINEOFFSET, 71,	/* 80 */
	HB_P_PUSHMEMVAR, 36, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 93,	/* 93 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 02143) */
	HB_P_PUSHSYMNEAR, 37,	/* F4_MERC */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02148) */
	HB_P_PUSHSYMNEAR, 38,	/* F4_MERC1 */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 1, 0,	/* MCOD_MERC */
/* 02151 */ HB_P_LINEOFFSET, 72,	/* 81 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 11, 0,	/* MCONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02227 */ HB_P_LINEOFFSET, 73,	/* 82 */
	HB_P_PUSHSYMNEAR, 28,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 02290) */
/* 02240 */ HB_P_LINEOFFSET, 74,	/* 83 */
	HB_P_PUSHSYMNEAR, 35,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'm', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', 'n', 'a', 'o', ' ', 'c', 'a', 'd', 'a', 's', 't', 'r', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 02285 */ HB_P_LINEOFFSET, 75,	/* 84 */
	HB_P_JUMP, 50, 253,	/* -718 (abs: 01569) */
/* 02290 */ HB_P_LINEOFFSET, 77,	/* 86 */
	HB_P_PUSHSYMNEAR, 24,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 02307) */
/* 02302 */ HB_P_LINEOFFSET, 78,	/* 87 */
	HB_P_JUMP, 33, 253,	/* -735 (abs: 01569) */
/* 02307 */ HB_P_LINEOFFSET, 81,	/* 90 */
	HB_P_PUSHSYMNEAR, 34,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 1, 0,	/* MCOD_MERC */
/* 02324 */ HB_P_LINEOFFSET, 82,	/* 91 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 39, 0,	/* MMERC */
/* 02336 */ HB_P_LINEOFFSET, 83,	/* 92 */
	HB_P_PUSHSYMNEAR, 40,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* M_CODIGO */
	HB_P_PUSHSYMNEAR, 33,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 64,	/* 64 (abs: 02421) */
/* 02359 */ HB_P_LINEOFFSET, 84,	/* 93 */
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_PUSHSYMNEAR, 40,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* M_CODIGO */
	HB_P_PUSHSYMNEAR, 33,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 9,	/* MPR_TABL */
/* 02386 */ HB_P_LINEOFFSET, 85,	/* 94 */
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_PUSHSYMNEAR, 40,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* M_CODIGO */
	HB_P_PUSHSYMNEAR, 33,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 10,	/* MDESC_TABL */
/* 02413 */ HB_P_LINEOFFSET, 86,	/* 95 */
	HB_P_LOCALNEARSETSTR, 18, 2, 0,	/* ALT_MERC 2*/
	'*', 0, 
/* 02421 */ HB_P_LINEOFFSET, 88,	/* 97 */
	HB_P_PUSHSYMNEAR, 16,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 02430 */ HB_P_LINEOFFSET, 89,	/* 98 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02470 */ HB_P_LINEOFFSET, 90,	/* 99 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02514 */ HB_P_LINEOFFSET, 91,	/* 100 */
	HB_P_PUSHSYMNEAR, 16,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 02522 */ HB_P_LINEOFFSET, 92,	/* 101 */
	HB_P_PUSHSYMNEAR, 18,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 21,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 80, 0,	/* 80 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MPR_TABL */
	HB_P_MODULENAME,	/* C:\helio\siachb\sactabl.prg:SACTABL */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 't', 'a', 'b', 'l', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'T', 'A', 'B', 'L', 0,
	HB_P_LOCALNAME, 255, 255,	/* MPR_TABL */
 'M', 'P', 'R', '_', 'T', 'A', 'B', 'L', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02619) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02624) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'p', 'r', '_', 't', 'a', 'b', 'l', 0, 
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
/* 02655 */ HB_P_LINEOFFSET, 92,	/* 101 */
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02669 */ HB_P_LINEOFFSET, 94,	/* 103 */
	HB_P_PUSHSYMNEAR, 23,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 20, 0,	/* GETLIST */
/* 02691 */ HB_P_LINEOFFSET, 95,	/* 104 */
	HB_P_PUSHSYMNEAR, 24,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 02708) */
/* 02703 */ HB_P_LINEOFFSET, 95,	/* 104 */
	HB_P_JUMP, 144, 251,	/* -1136 (abs: 01569) */
/* 02708 */ HB_P_LINEOFFSET, 96,	/* 105 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 27,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MPR_TABL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 02728) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 27,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MDESC_TABL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 02735) */
/* 02730 */ HB_P_LINEOFFSET, 96,	/* 105 */
	HB_P_JUMP, 117, 251,	/* -1163 (abs: 01569) */
/* 02735 */ HB_P_LINEOFFSET, 97,	/* 106 */
	HB_P_PUSHLOCALNEAR, 18,	/* ALT_MERC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 124,	/* 124 (abs: 02868) */
/* 02746 */ HB_P_LINEOFFSET, 98,	/* 107 */
	HB_P_PUSHSYMNEAR, 42,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'd', 'a', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 02811) */
/* 02806 */ HB_P_LINEOFFSET, 99,	/* 108 */
	HB_P_JUMP, 41, 251,	/* -1239 (abs: 01569) */
/* 02811 */ HB_P_LINEOFFSET, 101,	/* 110 */
	HB_P_PUSHLOCALNEAR, 9,	/* MPR_TABL */
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_PUSHSYMNEAR, 40,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* M_CODIGO */
	HB_P_PUSHSYMNEAR, 33,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
/* 02838 */ HB_P_LINEOFFSET, 102,	/* 111 */
	HB_P_PUSHLOCALNEAR, 10,	/* MDESC_TABL */
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_PUSHSYMNEAR, 40,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* M_CODIGO */
	HB_P_PUSHSYMNEAR, 33,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPOP,
	HB_P_JUMP, 240, 250,	/* -1296 (abs: 01569) */
/* 02868 */ HB_P_LINEOFFSET, 105,	/* 114 */
	HB_P_PUSHSYMNEAR, 42,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'a', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 02932) */
/* 02927 */ HB_P_LINEOFFSET, 106,	/* 115 */
	HB_P_JUMP, 176, 250,	/* -1360 (abs: 01569) */
/* 02932 */ HB_P_LINEOFFSET, 108,	/* 117 */
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* M_CODIGO */
	HB_P_PUSHLOCALNEAR, 11,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 02948 */ HB_P_LINEOFFSET, 109,	/* 118 */
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_PUSHLOCALNEAR, 11,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 9,	/* MPR_TABL */
	HB_P_PUSHLOCALNEAR, 10,	/* MDESC_TABL */
	HB_P_PUSHLOCALNEAR, 11,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 8, 0,	/* 8 */
	HB_P_DOSHORT, 2,
/* 03006 */ HB_P_LINEOFFSET, 110,	/* 119 */
	HB_P_PUSHLOCALNEAR, 12,	/* I_ENT */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 03042) */
/* 03015 */ HB_P_LINEOFFSET, 111,	/* 120 */
	HB_P_PUSHSYMNEAR, 43,	/* SCROLL */
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
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 03048) */
/* 03042 */ HB_P_LINEOFFSET, 113,	/* 122 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* I_ENT 1*/
/* 03048 */ HB_P_LINEOFFSET, 115,	/* 124 */
	HB_P_PUSHSYMNEAR, 16,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 03057 */ HB_P_LINEOFFSET, 116,	/* 125 */
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
	HB_P_PUSHLOCALNEAR, 11,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MPR_TABL */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MDESC_TABL */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03186 */ HB_P_LINEOFFSET, 117,	/* 126 */
	HB_P_PUSHSYMNEAR, 16,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 167, 249,	/* -1625 (abs: 01569) */
/* 03197 */ HB_P_LINEOFFSET, 120,	/* 129 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSYMNEAR, 42,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', ' ', 'F', 'e', 'c', 'h', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'o', ' ', 'T', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 03257) */
/* 03252 */ HB_P_LINEOFFSET, 121,	/* 130 */
	HB_P_JUMP, 214, 244,	/* -2858 (abs: 00396) */
/* 03257 */ HB_P_LINEOFFSET, 123,	/* 132 */
	HB_P_PUSHSYMNEAR, 10,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'G', 'e', 'r', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', 'd', 'o', ' ', 'T', 'a', 'b', 'l', 'o', 'i', 'd', 'e', 's', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03300 */ HB_P_LINEOFFSET, 124,	/* 133 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 15,	/* MCONS_TABL */
/* 03307 */ HB_P_LINEOFFSET, 125,	/* 134 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 't', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 15, 0,	/* MCONS_TABL */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03366 */ HB_P_LINEOFFSET, 126,	/* 135 */
	HB_P_PUSHSYMNEAR, 28,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MCONS_TABL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 03387) */
/* 03379 */ HB_P_LINEOFFSET, 127,	/* 136 */
	HB_P_LOCALNEARSETINT, 16, 1, 0,	/* MNUMERO 1*/
	HB_P_JUMPNEAR, 21,	/* 21 (abs: 03406) */
/* 03387 */ HB_P_LINEOFFSET, 129,	/* 138 */
	HB_P_PUSHSYMNEAR, 34,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MCONS_TABL */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_POPLOCALNEAR, 16,	/* MNUMERO */
/* 03406 */ HB_P_LINEOFFSET, 131,	/* 140 */
	HB_P_LOCALNEARSETINT, 17, 0, 0,	/* I 0*/
/* 03412 */ HB_P_LINEOFFSET, 132,	/* 141 */
	HB_P_LOCALNEARSETINT, 17, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 17,	/* I */
	HB_P_PUSHSYMNEAR, 28,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* M_CODIGO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 183, 1,	/* 439 (abs: 03867) */
/* 03431 */ HB_P_LINEOFFSET, 164,	/* 173 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 155,	/* 155 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 't', 'a', 'b', 'l', 'o', 'i', 'd', 'e', ' ', '(', 'c', 'o', 'd', 'i', 'g', 'o', ',', 'n', 'o', 'm', 'e', ',', 'd', 'a', 't', 'a', '_', 'c', 'a', 'd', ',', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', ',', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', ',', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ',', 'm', 'e', 'r', 'c', ',', 'c', 'o', 'd', '_', 'f', 'a', 'b', ',', 'f', 'a', 'b', 'r', 'i', 'c', 'a', ',', 'p', 'r', '_', 'a', 'n', 't', ',', 'p', 'r', '_', 't', 'a', 'b', ',', 'd', 'e', 's', 'c', '_', 't', 'a', 'b', ',', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ',', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MNUMERO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MNOME */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_PUSHLOCALNEAR, 17,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_PUSHLOCALNEAR, 17,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_PUSHLOCALNEAR, 17,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_PUSHLOCALNEAR, 17,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_PUSHLOCALNEAR, 17,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_PUSHLOCALNEAR, 17,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_PUSHLOCALNEAR, 17,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 44, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ENT */
	HB_P_PUSHLOCALNEAR, 17,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03858 */ HB_P_LINEOFFSET, 165,	/* 174 */
	HB_P_LOCALNEARADDINT, 17, 1, 0,	/* I 1*/
	HB_P_JUMP, 66, 254,	/* -446 (abs: 03418) */
/* 03867 */ HB_P_LINEOFFSET, 166,	/* 175 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03891 */ HB_P_LINEOFFSET, 167,	/* 176 */
	HB_P_PUSHSYMNEAR, 16,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 03900 */ HB_P_LINEOFFSET, 168,	/* 177 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MNUMERO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03928 */ HB_P_LINEOFFSET, 169,	/* 178 */
	HB_P_PUSHSYMNEAR, 16,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 03936 */ HB_P_LINEOFFSET, 170,	/* 179 */
	HB_P_PUSHSYMNEAR, 35,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'F', 'o', 'i', ' ', 'G', 'e', 'r', 'a', 'd', 'o', ' ', 'o', ' ', 'T', 'A', 'B', 'L', 'O', 'I', 'D', 'E', ' ', 'D', 'E', ' ', 'N', 'U', 'M', 'E', 'R', 'O', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MNUMERO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 247, 241,	/* -3593 (abs: 00396) */
	HB_P_ENDPROC
/* 03993 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_INITLINES()
{
   static const BYTE pcode[] =
   {
	HB_P_MODULENAME,	/* sactabl */
 's', 'a', 'c', 't', 'a', 'b', 'l', 0,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', ':', 92, 'h', 'e', 'l', 'i', 'o', 92, 's', 'i', 'a', 'c', 'h', 'b', 92, 's', 'a', 'c', 't', 'a', 'b', 'l', '.', 'p', 'r', 'g', 0, 
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	16, 'j', 254, 255, 223, 255, 247, 189, 247, ':', 223, 252, 190, 223, 236, 'u', 246, '5', 0, 0, 0, 224, 15, 0, 
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00074 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

