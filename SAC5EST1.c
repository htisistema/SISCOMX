/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5EST1.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC5EST1.PRG /q /oC:\hti\SISCOM\SAC5EST1.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.11.21 09:48:01 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5EST1.PRG"

HB_FUNC( SAC5EST1 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( VER_GRU );
HB_FUNC_EXTERN( VER_SGRU );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( __MVRELEASE );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( IAT );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5EST1 )
{ "SAC5EST1", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5EST1 )}, NULL },
{ "MTRACO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TELAPRINT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "CONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MGER_PRUNIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MGER_QUANTD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MGER_VLR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTOT_PRUNIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTOT_QUANTD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTOT_VLR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "VER_GRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_GRU )}, NULL },
{ "VER_SGRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SGRU )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "__MVRELEASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVRELEASE )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "IAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IAT )}, NULL },
{ "MPACU", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "FORN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "RAZAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5EST1 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5EST1
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5EST1 = hb_vm_SymbolInit_SAC5EST1;
   #pragma data_seg()
#endif

HB_FUNC( SAC5EST1 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 17, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', '5', 'E', 'S', 'T', '1', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 17,	/* CONS_MOV */
/* 00024 */ HB_P_LINEOFFSET, 3,	/* 11 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 10,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 12,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MTRACO */
	HB_P_PUSHSYMNEAR, 2,	/* TELAPRINT */
	HB_P_PUSHSYMNEAR, 3,	/* MTIT */
	HB_P_PUSHSYMNEAR, 4,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 5,	/* MPAG */
	HB_P_PUSHSYMNEAR, 6,	/* MCOD_CLI */
	HB_P_PUSHSYMNEAR, 7,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 8,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 9,	/* MARQ */
	HB_P_PUSHSYMNEAR, 11,	/* CONS_CLI */
	HB_P_DOSHORT, 10,
	HB_P_POPVARIABLE, 11, 0,	/* CONS_CLI */
	HB_P_POPVARIABLE, 9, 0,	/* MARQ */
	HB_P_POPVARIABLE, 8, 0,	/* MIMP_TIPO */
/* 00071 */ HB_P_LINEOFFSET, 5,	/* 13 */
	HB_P_PUSHSYMNEAR, 13,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 59,	/* 59 */
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'C', 'L', 'A', 'S', 'S', 'I', 'F', 'I', 'C', 'A', 'C', 'A', 'O', ' ', 'D', 'O', 'S', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'C', 'U', 'R', 'V', 'A', ' ', 'A', 'B', 'C', ' ', '-', ' ', 'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHVARIABLE, 14, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00165) */
/* 00160 */ HB_P_LINEOFFSET, 6,	/* 14 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00165 */ HB_P_LINEOFFSET, 8,	/* 16 */
	HB_P_PUSHSYMNEAR, 15,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 1, 0,	/* MTRACO */
/* 00182 */ HB_P_LINEOFFSET, 9,	/* 17 */
	HB_P_PUSHSYMNEAR, 16,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', 'C', 'L', 'A', 'S', 'S', 'I', 'F', 'I', 'C', 'A', 'O', ' ', 'D', 'O', 'S', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'C', 'U', 'R', 'V', 'A', ' ', 'A', 'B', 'C', 0, 
	HB_P_DOSHORT, 5,
/* 00235 */ HB_P_LINEOFFSET, 11,	/* 19 */
	HB_P_PUSHSYMNEAR, 17,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00244 */ HB_P_LINEOFFSET, 12,	/* 20 */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'C', 'L', 'A', 'S', 'S', 'I', 'F', 'I', 'C', 'A', 'C', 'A', 'O', ' ', 'D', 'O', 'S', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'C', 'U', 'R', 'V', 'A', ' ', 'A', 'B', 'C', 0, 
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 00298 */ HB_P_LINEOFFSET, 13,	/* 21 */
	HB_P_PUSHMEMVAR, 18, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 7, 0,	/* MTIPO_IMP */
/* 00311 */ HB_P_LINEOFFSET, 14,	/* 22 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* I 0*/
/* 00317 */ HB_P_LINEOFFSET, 15,	/* 23 */
	HB_P_PUSHSYMNEAR, 10,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* MCOD_MERC */
/* 00328 */ HB_P_LINEOFFSET, 16,	/* 24 */
	HB_P_PUSHSYMNEAR, 10,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* MMERC */
/* 00339 */ HB_P_LINEOFFSET, 20,	/* 28 */
	HB_P_LOCALNEARSETINT, 15, 0, 0,	/* MCOD_FORN 0*/
	HB_P_PUSHLOCALNEAR, 15,	/* MCOD_FORN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* MCOD_OPE */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* MCOD_VEN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* MSUBGRUPO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* MGRUPO */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 6, 0,	/* MCOD_CLI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* MQUANTD_MERC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 9,	/* MOP */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 19, 0,	/* MGER_PRUNIT */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 20, 0,	/* MGER_QUANTD */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 21, 0,	/* MGER_VLR */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 22, 0,	/* MTOT_PRUNIT */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 23, 0,	/* MTOT_QUANTD */
	HB_P_POPVARIABLE, 24, 0,	/* MTOT_VLR */
/* 00392 */ HB_P_LINEOFFSET, 21,	/* 29 */
	HB_P_PUSHVARIABLE, 25, 0,	/* MDATA_SIS */
	HB_P_ADDINT, 226, 255,	/* -30*/
	HB_P_POPLOCALNEAR, 4,	/* MDATA1 */
/* 00402 */ HB_P_LINEOFFSET, 22,	/* 30 */
	HB_P_PUSHVARIABLE, 25, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 5,	/* MDATA2 */
/* 00409 */ HB_P_LINEOFFSET, 23,	/* 31 */
	HB_P_PUSHSYMNEAR, 10,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 16,	/* MCIDADE */
/* 00420 */ HB_P_LINEOFFSET, 24,	/* 32 */
	HB_P_PUSHSYMNEAR, 26,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00462 */ HB_P_LINEOFFSET, 25,	/* 33 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00496 */ HB_P_LINEOFFSET, 26,	/* 34 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00531 */ HB_P_LINEOFFSET, 27,	/* 35 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00566 */ HB_P_LINEOFFSET, 28,	/* 36 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00601 */ HB_P_LINEOFFSET, 29,	/* 37 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'S', 'u', 'b', '-', 'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00636 */ HB_P_LINEOFFSET, 30,	/* 38 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00671 */ HB_P_LINEOFFSET, 31,	/* 39 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00706 */ HB_P_LINEOFFSET, 32,	/* 40 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00741 */ HB_P_LINEOFFSET, 33,	/* 41 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', 'a', ' ', 's', 'e', 'r', ' ', 'l', 'i', 's', 't', 'a', 'd', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00797 */ HB_P_LINEOFFSET, 34,	/* 42 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'C', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00853 */ HB_P_LINEOFFSET, 36,	/* 44 */
	HB_P_PUSHSYMNEAR, 29,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00891) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00896) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '1', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MDATA1 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00938) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00939) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 34, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00957 */ HB_P_LINEOFFSET, 37,	/* 45 */
	HB_P_PUSHSYMNEAR, 29,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00996) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01001) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '2', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	5, 0,	/* MDATA2 */
	4, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01043) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01044) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 34, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01062 */ HB_P_LINEOFFSET, 38,	/* 46 */
	HB_P_PUSHSYMNEAR, 29,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 35,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 34, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01134 */ HB_P_LINEOFFSET, 39,	/* 47 */
	HB_P_PUSHSYMNEAR, 29,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MGRUPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01173) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01178) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 35, 0,	/* 35 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MGRUPO */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01215) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 15,	/* 15 (abs: 01228) */
	HB_P_PUSHSYMNEAR, 36,	/* VER_GRU */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALREF, 255, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 34, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01246 */ HB_P_LINEOFFSET, 40,	/* 48 */
	HB_P_PUSHSYMNEAR, 29,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MSUBGRUPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01285) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01290) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 's', 'u', 'b', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 38, 0,	/* 38 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	12, 0,	/* MSUBGRUPO */
	11, 0,	/* MGRUPO */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01331) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 01345) */
	HB_P_PUSHSYMNEAR, 37,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 34, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01363 */ HB_P_LINEOFFSET, 41,	/* 49 */
	HB_P_PUSHSYMNEAR, 29,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MCOD_VEN */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01402) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01407) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 33, 0,	/* 33 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MCOD_VEN */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01446) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 01457) */
	HB_P_PUSHSYMNEAR, 38,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 34, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01475 */ HB_P_LINEOFFSET, 42,	/* 50 */
	HB_P_PUSHSYMNEAR, 29,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MCOD_OPE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01514) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01519) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'o', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 33, 0,	/* 33 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MCOD_OPE */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01558) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 01569) */
	HB_P_PUSHSYMNEAR, 38,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 34, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01587 */ HB_P_LINEOFFSET, 43,	/* 51 */
	HB_P_PUSHSYMNEAR, 29,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MCOD_FORN */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01626) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01631) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 33, 0,	/* 33 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01672) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 01683) */
	HB_P_PUSHSYMNEAR, 39,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 34, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01701 */ HB_P_LINEOFFSET, 44,	/* 52 */
	HB_P_PUSHSYMNEAR, 29,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MQUANTD_MERC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01740) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01745) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'm', 'q', 'u', 'a', 'n', 't', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 40,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 100,	/* 100 */
	HB_P_PUSHSYMNEAR, 41,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHSTRSHORT, 86,	/* 86 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'l', 'i', 's', 't', 'a', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'b', 'r', 'a', 'n', 'c', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 'l', 'i', 's', 't', 'a', 'r', ' ', 'T', 'O', 'D', 'O', 'S', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 34, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01892 */ HB_P_LINEOFFSET, 45,	/* 53 */
	HB_P_PUSHSYMNEAR, 29,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MCIDADE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01931) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01936) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 40,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 78,	/* 78 */
	HB_P_PUSHSYMNEAR, 41,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHSTRSHORT, 64,	/* 64 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'C', 'I', 'D', 'A', 'D', 'E', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'v', 'e', ' ', 'e', 'm', ' ', 'B', 'R', 'A', 'N', 'C', 'O', ' ', 'p', 'a', 'r', 'a', ' ', 'l', 'i', 's', 't', 'a', 'r', ' ', 'T', 'O', 'D', 'A', 'S', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 34, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02054 */ HB_P_LINEOFFSET, 46,	/* 54 */
	HB_P_PUSHSYMNEAR, 42,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 31, 0,	/* GETLIST */
/* 02076 */ HB_P_LINEOFFSET, 47,	/* 55 */
	HB_P_PUSHSYMNEAR, 43,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 02125) */
/* 02088 */ HB_P_LINEOFFSET, 48,	/* 56 */
	HB_P_PUSHSYMNEAR, 44,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 45,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 46,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 02110 */ HB_P_LINEOFFSET, 49,	/* 57 */
	HB_P_PUSHSYMNEAR, 47,	/* __MVRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 3, 12,	/* 3075 (abs: 05197) */
/* 02125 */ HB_P_LINEOFFSET, 60,	/* 68 */
	HB_P_PUSHLOCALNEAR, 4,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 5,	/* MDATA2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 02142) */
/* 02134 */ HB_P_LINEOFFSET, 61,	/* 69 */
	HB_P_LOCALNEARSETINT, 8, 1, 0,	/* MDIA 1*/
	HB_P_JUMPNEAR, 14,	/* 14 (abs: 02154) */
/* 02142 */ HB_P_LINEOFFSET, 63,	/* 71 */
	HB_P_PUSHLOCALNEAR, 5,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 4,	/* MDATA1 */
	HB_P_MINUS,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_POPLOCALNEAR, 8,	/* MDIA */
/* 02154 */ HB_P_LINEOFFSET, 65,	/* 73 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 17,	/* CONS_MOV */
/* 02161 */ HB_P_LINEOFFSET, 71,	/* 79 */
	HB_P_PUSHSTRSHORT, 125,	/* 125 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'm', 'o', 'v', '.', 'c', 'o', 'd', 'i', 'g', 'o', ',', 'c', 'a', 's', 't', '(', 's', 'u', 'm', '(', 'm', 'o', 'v', '.', 'q', 'u', 'a', 'n', 't', 'd', ' ', '*', ' ', 'm', 'o', 'v', '.', 'v', 'l', '_', 'v', 'e', 'n', 'd', ')', ' ', 'a', 's', ' ', 'n', 'u', 'm', 'e', 'r', 'i', 'c', ' ', '(', '1', '5', ',', '3', ')', ')', ',', '0', ',', '0', ',', '0', ',', 39, 39, ',', 's', 'u', 'm', '(', 'm', 'o', 'v', '.', 'q', 'u', 'a', 'n', 't', 'd', ')', ',', 'm', 'o', 'v', '.', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', 'm', 'o', 'v', 0, 
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02293 */ HB_P_LINEOFFSET, 72,	/* 80 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	' ', 'J', 'O', 'I', 'N', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'c', 'l', 'i', ' ', 'O', 'N', ' ', 'c', 'l', 'i', '.', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02350 */ HB_P_LINEOFFSET, 73,	/* 81 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'm', 'o', 'v', '.', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', '>', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '.', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02426 */ HB_P_LINEOFFSET, 74,	/* 82 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 68,	/* 68 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '.', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', '=', ' ', 39, 'S', 39, ' ', 'A', 'N', 'D', ' ', '(', 'm', 'o', 'v', '.', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'm', 'o', 'v', '.', 'c', 'a', 'n', 'c', 'e', 'l', ' ', '=', ' ', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02505 */ HB_P_LINEOFFSET, 75,	/* 83 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '.', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, '0', '2', 39, ' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '.', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '>', ' ', '0', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02557 */ HB_P_LINEOFFSET, 76,	/* 84 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '.', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'N', 'O', 'T', ' ', 'L', 'I', 'K', 'E', ' ', 39, 'T', 'R', '%', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02602 */ HB_P_LINEOFFSET, 77,	/* 85 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '.', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'N', 'O', 'T', ' ', 'L', 'I', 'K', 'E', ' ', 39, 'B', 'L', '%', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02647 */ HB_P_LINEOFFSET, 78,	/* 86 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 02696) */
/* 02658 */ HB_P_LINEOFFSET, 79,	/* 87 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'c', 'l', 'i', '.', 'c', 'i', 'd', 'a', 'd', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02696 */ HB_P_LINEOFFSET, 81,	/* 89 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MCOD_OPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 02754) */
/* 02707 */ HB_P_LINEOFFSET, 82,	/* 90 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MCOD_OPE */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02754 */ HB_P_LINEOFFSET, 84,	/* 92 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 02812) */
/* 02765 */ HB_P_LINEOFFSET, 85,	/* 93 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02812 */ HB_P_LINEOFFSET, 87,	/* 95 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 56,	/* 56 (abs: 02877) */
/* 02823 */ HB_P_LINEOFFSET, 88,	/* 96 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '.', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MGRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02877 */ HB_P_LINEOFFSET, 90,	/* 98 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MSUBGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 58,	/* 58 (abs: 02944) */
/* 02888 */ HB_P_LINEOFFSET, 91,	/* 99 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '.', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MGRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MSUBGRUPO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02944 */ HB_P_LINEOFFSET, 93,	/* 101 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 03001) */
/* 02955 */ HB_P_LINEOFFSET, 94,	/* 102 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 03001 */ HB_P_LINEOFFSET, 96,	/* 104 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 42,	/* 42 (abs: 03053) */
/* 03013 */ HB_P_LINEOFFSET, 97,	/* 105 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 03053 */ HB_P_LINEOFFSET, 100,	/* 108 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'm', 'o', 'v', '.', 'c', 'o', 'd', 'i', 'g', 'o', ',', 'm', 'o', 'v', '.', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', '2', ' ', 'd', 'e', 's', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 03113 */ HB_P_LINEOFFSET, 101,	/* 109 */
	HB_P_MESSAGE, 51, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 52,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 17, 0,	/* CONS_MOV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03134 */ HB_P_LINEOFFSET, 102,	/* 110 */
	HB_P_MESSAGE, 51, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 52,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03158 */ HB_P_LINEOFFSET, 103,	/* 111 */
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 59, 1,	/* 315 (abs: 03484) */
/* 03172 */ HB_P_LINEOFFSET, 104,	/* 112 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* I 0*/
/* 03178 */ HB_P_LINEOFFSET, 105,	/* 113 */
	HB_P_LOCALNEARSETINT, 3, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 03229) */
/* 03196 */ HB_P_LINEOFFSET, 106,	/* 114 */
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
/* 03221 */ HB_P_LINEOFFSET, 107,	/* 115 */
	HB_P_LOCALNEARADDINT, 3, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 213,	/* -43 (abs: 03184) */
/* 03229 */ HB_P_LINEOFFSET, 108,	/* 116 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* I 0*/
/* 03235 */ HB_P_LINEOFFSET, 109,	/* 117 */
	HB_P_LOCALNEARSETINT, 3, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 60,	/* 60 (abs: 03311) */
/* 03253 */ HB_P_LINEOFFSET, 110,	/* 118 */
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 03269) */
	HB_P_JUMPNEAR, 38,	/* 38 (abs: 03305) */
/* 03269 */ HB_P_LINEOFFSET, 113,	/* 121 */
	HB_P_PUSHSYMNEAR, 54,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPOP,
/* 03303 */ HB_P_LINEOFFSET, 114,	/* 122 */
	HB_P_LOCALNEARADDINT, 3, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 188,	/* -68 (abs: 03241) */
/* 03311 */ HB_P_LINEOFFSET, 115,	/* 123 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 55, 0,	/* MPACU */
	HB_P_POPLOCALNEAR, 3,	/* I */
/* 03320 */ HB_P_LINEOFFSET, 116,	/* 124 */
	HB_P_LOCALNEARSETINT, 3, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 148, 0,	/* 148 (abs: 03484) */
/* 03339 */ HB_P_LINEOFFSET, 118,	/* 126 */
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 03355) */
	HB_P_JUMPNEAR, 124,	/* 124 (abs: 03477) */
/* 03355 */ HB_P_LINEOFFSET, 122,	/* 130 */
	HB_P_PUSHVARIABLE, 55, 0,	/* MPACU */
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 55, 0,	/* MPACU */
/* 03372 */ HB_P_LINEOFFSET, 123,	/* 131 */
	HB_P_PUSHSYMNEAR, 54,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHVARIABLE, 55, 0,	/* MPACU */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPOP,
/* 03399 */ HB_P_LINEOFFSET, 124,	/* 132 */
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 03430) */
/* 03414 */ HB_P_LINEOFFSET, 125,	/* 133 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 47,	/* 47 (abs: 03475) */
/* 03430 */ HB_P_LINEOFFSET, 126,	/* 134 */
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 95,	/* 95 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 03461) */
/* 03445 */ HB_P_LINEOFFSET, 127,	/* 135 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 03475) */
/* 03461 */ HB_P_LINEOFFSET, 129,	/* 137 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
/* 03475 */ HB_P_LINEOFFSET, 132,	/* 140 */
	HB_P_LOCALNEARADDINT, 3, 1, 0,	/* I 1*/
	HB_P_JUMP, 101, 255,	/* -155 (abs: 03326) */
/* 03484 */ HB_P_LINEOFFSET, 134,	/* 142 */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'U', 'R', 'V', 'A', '_', 'A', 'B', 'C', '.', 'R', 'E', 'L', 0, 
	HB_P_POPVARIABLE, 9, 0,	/* MARQ */
/* 03505 */ HB_P_LINEOFFSET, 135,	/* 143 */
	HB_P_PUSHSYMNEAR, 26,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'E', 's', 'p', 'e', 'r', 'e', ' ', 'o', ' ', 'F', 'i', 'n', 'a', 'l', ' ', 'd', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'O', 'K', ' ', '-', ' ', '[', 'E', 'S', 'C', ']', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 03557 */ HB_P_LINEOFFSET, 136,	/* 144 */
	HB_P_PUSHSYMNEAR, 43,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 28,	/* 28 (abs: 03596) */
	HB_P_PUSHSYMNEAR, 56,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'M', 'A', 'I', 'S', '_', 'P', 'R', 'O', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOT,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03601) */
	HB_P_JUMP, 221, 242,	/* -3363 (abs: 00235) */
/* 03601 */ HB_P_LINEOFFSET, 140,	/* 148 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 03607 */ HB_P_LINEOFFSET, 141,	/* 149 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', 'e', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 't', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'I', 'n', 't', 'e', 'r', 'v', 'a', 'l', 'o', ' ', 'd', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDIA */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'd', 'i', 'a', 's', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 03680 */ HB_P_LINEOFFSET, 142,	/* 150 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 33,	/* 33 (abs: 03723) */
/* 03692 */ HB_P_LINEOFFSET, 143,	/* 151 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', '-', ' ', 'C', 'o', 'd', '.', 'C', 'l', 'i', 'e', 'n', 't', 'e', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_CLI */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 03723 */ HB_P_LINEOFFSET, 145,	/* 153 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 32,	/* 32 (abs: 03764) */
/* 03734 */ HB_P_LINEOFFSET, 146,	/* 154 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', ' ', 'C', 'i', 'd', 'a', 'd', 'e', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 03764 */ HB_P_LINEOFFSET, 148,	/* 156 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 03821) */
/* 03775 */ HB_P_LINEOFFSET, 149,	/* 157 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 60,	/* RAZAO */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 03821 */ HB_P_LINEOFFSET, 151,	/* 159 */
	HB_P_PUSHSYMNEAR, 61,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 03839 */ HB_P_LINEOFFSET, 152,	/* 160 */
	HB_P_PUSHSYMNEAR, 62,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03853 */ HB_P_LINEOFFSET, 153,	/* 161 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', 0, 
	HB_P_PUSHSYMNEAR, 10,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03892 */ HB_P_LINEOFFSET, 154,	/* 162 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 64,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 03931 */ HB_P_LINEOFFSET, 155,	/* 163 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 64,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'V', 'l', 'r', '.', 'M', 'e', 'd', 'i', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03968 */ HB_P_LINEOFFSET, 156,	/* 164 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 64,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 04009 */ HB_P_LINEOFFSET, 157,	/* 165 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 64,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'a', 'r', 't', '.', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 04047 */ HB_P_LINEOFFSET, 158,	/* 166 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 64,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', ' ', ' ', 'A', 'c', 'u', 'm', 'u', 'l', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 04087 */ HB_P_LINEOFFSET, 159,	/* 167 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 64,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'u', 'r', 'v', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 04120 */ HB_P_LINEOFFSET, 160,	/* 168 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 04144 */ HB_P_LINEOFFSET, 161,	/* 169 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* I 0*/
/* 04150 */ HB_P_LINEOFFSET, 162,	/* 170 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MQUANTD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 13,	/* 13 (abs: 04173) */
	HB_P_PUSHLOCALNEAR, 10,	/* MQUANTD_MERC */
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 04186) */
/* 04175 */ HB_P_LINEOFFSET, 163,	/* 171 */
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MQUANTD_MERC */
/* 04186 */ HB_P_LINEOFFSET, 165,	/* 173 */
	HB_P_LOCALNEARSETINT, 3, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_PUSHLOCALNEAR, 10,	/* MQUANTD_MERC */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 198, 2,	/* 710 (abs: 04907) */
/* 04200 */ HB_P_LINEOFFSET, 166,	/* 174 */
	HB_P_PUSHSYMNEAR, 62,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 04214 */ HB_P_LINEOFFSET, 167,	/* 175 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04256 */ HB_P_LINEOFFSET, 168,	/* 176 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 64,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 65,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04303 */ HB_P_LINEOFFSET, 169,	/* 177 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 64,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 65,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04357 */ HB_P_LINEOFFSET, 170,	/* 178 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 64,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 65,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04406 */ HB_P_LINEOFFSET, 171,	/* 179 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 64,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04460 */ HB_P_LINEOFFSET, 172,	/* 180 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 64,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04515 */ HB_P_LINEOFFSET, 173,	/* 181 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 64,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04548 */ HB_P_LINEOFFSET, 174,	/* 182 */
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 84, 1,	/* 340 (abs: 04898) */
/* 04561 */ HB_P_LINEOFFSET, 175,	/* 183 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 04570 */ HB_P_LINEOFFSET, 176,	/* 184 */
	HB_P_PUSHSYMNEAR, 67,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04577 */ HB_P_LINEOFFSET, 177,	/* 185 */
	HB_P_PUSHSYMNEAR, 61,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 04595 */ HB_P_LINEOFFSET, 178,	/* 186 */
	HB_P_PUSHSYMNEAR, 62,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 04609 */ HB_P_LINEOFFSET, 179,	/* 187 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 04640 */ HB_P_LINEOFFSET, 180,	/* 188 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 64,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'Q', 'u', 'a', 'n', 't', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 04675 */ HB_P_LINEOFFSET, 181,	/* 189 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 64,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'V', 'l', 'r', '.', 'M', 'e', 'd', 'i', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 04712 */ HB_P_LINEOFFSET, 182,	/* 190 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 64,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'V', 'l', 'r', '.', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 04749 */ HB_P_LINEOFFSET, 183,	/* 191 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 64,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'a', 'r', 't', '.', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 04787 */ HB_P_LINEOFFSET, 184,	/* 192 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 64,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'(', '%', ')', 'A', 'c', 'u', 'm', 'u', 'l', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 04827 */ HB_P_LINEOFFSET, 185,	/* 193 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 64,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'u', 'r', 'v', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 04860 */ HB_P_LINEOFFSET, 186,	/* 194 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 04884 */ HB_P_LINEOFFSET, 187,	/* 195 */
	HB_P_PUSHSYMNEAR, 62,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 04898 */ HB_P_LINEOFFSET, 189,	/* 197 */
	HB_P_LOCALNEARADDINT, 3, 1, 0,	/* I 1*/
	HB_P_JUMP, 56, 253,	/* -712 (abs: 04192) */
/* 04907 */ HB_P_LINEOFFSET, 190,	/* 198 */
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 04953) */
/* 04919 */ HB_P_LINEOFFSET, 191,	/* 199 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 04928 */ HB_P_LINEOFFSET, 192,	/* 200 */
	HB_P_PUSHSYMNEAR, 67,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04935 */ HB_P_LINEOFFSET, 193,	/* 201 */
	HB_P_PUSHSYMNEAR, 61,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 04953 */ HB_P_LINEOFFSET, 195,	/* 203 */
	HB_P_PUSHSYMNEAR, 62,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 04967 */ HB_P_LINEOFFSET, 196,	/* 204 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04999 */ HB_P_LINEOFFSET, 197,	/* 205 */
	HB_P_PUSHSYMNEAR, 62,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 05013 */ HB_P_LINEOFFSET, 198,	/* 206 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'G', 'e', 'r', 'a', 'l', ' ', 'd', 'o', 's', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', 'R', '$', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05065 */ HB_P_LINEOFFSET, 199,	/* 207 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 64,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 65,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05113 */ HB_P_LINEOFFSET, 210,	/* 218 */
	HB_P_PUSHSYMNEAR, 62,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 05127 */ HB_P_LINEOFFSET, 211,	/* 219 */
	HB_P_PUSHSYMNEAR, 67,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05134 */ HB_P_LINEOFFSET, 212,	/* 220 */
	HB_P_PUSHSYMNEAR, 68,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 05143 */ HB_P_LINEOFFSET, 213,	/* 221 */
	HB_P_PUSHSYMNEAR, 69,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 69,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 69,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 05184 */ HB_P_LINEOFFSET, 214,	/* 222 */
	HB_P_PUSHSYMNEAR, 70,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MARQ */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 161, 236,	/* -4959 (abs: 00235) */
/* 05197 */ HB_P_LINEOFFSET, 216,	/* 224 */
	HB_P_PUSHSYMNEAR, 71,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05204 */ HB_P_LINEOFFSET, 217,	/* 225 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 05209 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

