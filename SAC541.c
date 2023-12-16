/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC541.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC541.PRG /q /oC:\hti\SISCOM\SAC541.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:14 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC541.PRG"

HB_FUNC( SAC541 );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( DTOS );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( VER_VEN );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC541 )
{ "SAC541", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC541 )}, NULL },
{ "MTRACO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TELAPRINT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "POINT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNOME_VEN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_VEN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "SEN", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "SNOME", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "MOV", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "DTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOS )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "DATA_S_E", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "ENT_SAI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "VER_VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_VEN )}, NULL },
{ "VL_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "QUANTD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PR_VENDA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PR_VENDA1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC541 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC541
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC541 = hb_vm_SymbolInit_SAC541;
   #pragma data_seg()
#endif

HB_FUNC( SAC541 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 13, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 10, 0,	/* 10 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '5', '4', '1', 0, 
	HB_P_LOCALNEARSETSTR, 2, 55, 0,	/* MTITULO 55*/
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'E', 'S', 'T', 'A', 'T', 'I', 'S', 'T', 'I', 'C', 'A', ' ', 'V', 'L', 'R', '.', 'V', 'E', 'N', 'D', 'I', 'D', 'O', ' ', '/', ' ', 'P', 'R', 'E', 'C', 'O', ' ', 'D', 'E', ' ', 'T', 'A', 'B', 'E', 'L', 'A', 0, 
	HB_P_LOCALNEARSETSTR, 13, 2, 0,	/* MTIPO_PR 2*/
	'1', 0, 
/* 00082 */ HB_P_LINEOFFSET, 2,	/* 12 */
	HB_P_PUSHSYMNEAR, 9,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MTRACO */
	HB_P_PUSHSYMNEAR, 2,	/* TELAPRINT */
	HB_P_PUSHSYMNEAR, 3,	/* MTIT */
	HB_P_PUSHSYMNEAR, 4,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 5,	/* MPAG */
	HB_P_PUSHSYMNEAR, 6,	/* POINT */
	HB_P_PUSHSYMNEAR, 7,	/* MNOME_VEN */
	HB_P_PUSHSYMNEAR, 8,	/* MCOD_VEN */
	HB_P_DOSHORT, 8,
/* 00105 */ HB_P_LINEOFFSET, 4,	/* 14 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 13,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 9,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 10,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 11,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 12,	/* MARQ */
	HB_P_DOSHORT, 3,
	HB_P_POPVARIABLE, 12, 0,	/* MARQ */
	HB_P_POPVARIABLE, 11, 0,	/* MIMP_TIPO */
/* 00132 */ HB_P_LINEOFFSET, 6,	/* 16 */
	HB_P_PUSHSYMNEAR, 14,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 15, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00167) */
/* 00162 */ HB_P_LINEOFFSET, 7,	/* 17 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00167 */ HB_P_LINEOFFSET, 10,	/* 20 */
	HB_P_PUSHSYMNEAR, 16,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 1, 0,	/* MTRACO */
/* 00184 */ HB_P_LINEOFFSET, 12,	/* 22 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_POPLOCALNEAR, 3,	/* LCI */
/* 00194 */ HB_P_LINEOFFSET, 13,	/* 23 */
	HB_P_LOCALNEARSETINT, 5, 5, 0,	/* LBA 5*/
/* 00200 */ HB_P_LINEOFFSET, 14,	/* 24 */
	HB_P_LOCALNEARSETINT, 6, 53, 0,	/* CBA 53*/
/* 00206 */ HB_P_LINEOFFSET, 16,	/* 26 */
	HB_P_PUSHSYMNEAR, 17,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 18,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 19,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00228 */ HB_P_LINEOFFSET, 17,	/* 27 */
	HB_P_PUSHSYMNEAR, 20,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'm', 'o', 'v', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'm', 'o', 'v', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00255) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00255 */ HB_P_LINEOFFSET, 18,	/* 28 */
	HB_P_PUSHSYMNEAR, 20,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00284) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00284 */ HB_P_LINEOFFSET, 20,	/* 30 */
	HB_P_PUSHSYMNEAR, 21,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_DOSHORT, 5,
/* 00304 */ HB_P_LINEOFFSET, 23,	/* 33 */
	HB_P_PUSHMEMVAR, 22, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 10, 0,	/* MTIPO_IMP */
/* 00317 */ HB_P_LINEOFFSET, 25,	/* 35 */
	HB_P_LOCALNEARSETSTR, 13, 2, 0,	/* MTIPO_PR 2*/
	'1', 0, 
/* 00325 */ HB_P_LINEOFFSET, 26,	/* 36 */
	HB_P_PUSHSYMNEAR, 23,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* MDATA2 */
	HB_P_POPLOCALNEAR, 9,	/* MDATA1 */
/* 00348 */ HB_P_LINEOFFSET, 27,	/* 37 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* MTOT_VEN 0*/
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_VEN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* MTOT_PRC */
	HB_P_POPVARIABLE, 8, 0,	/* MCOD_VEN */
/* 00362 */ HB_P_LINEOFFSET, 28,	/* 38 */
	HB_P_PUSHSYMNEAR, 13,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 7, 0,	/* MNOME_VEN */
/* 00374 */ HB_P_LINEOFFSET, 29,	/* 39 */
	HB_P_PUSHSYMNEAR, 24,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00416 */ HB_P_LINEOFFSET, 30,	/* 40 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00457 */ HB_P_LINEOFFSET, 31,	/* 41 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00498 */ HB_P_LINEOFFSET, 32,	/* 42 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00539 */ HB_P_LINEOFFSET, 33,	/* 43 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'P', 'r', 'e', 'c', 'o', ':', ' ', '[', '1', ']', '-', '>', 'V', 'e', 'n', 'd', 'a', ' ', 'o', 'u', ' ', '[', '2', ']', '-', '>', 'V', 'e', 'n', 'd', 'a', '1', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00597 */ HB_P_LINEOFFSET, 35,	/* 45 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 30,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00642) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00647) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '1', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MDATA1 */
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00679) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00680) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00698 */ HB_P_LINEOFFSET, 36,	/* 46 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 30,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00743) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00748) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '2', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	10, 0,	/* MDATA2 */
	9, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00780) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00781) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00799 */ HB_P_LINEOFFSET, 37,	/* 47 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 30,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 43, 0,	/* 43 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00867) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 20,	/* 20 (abs: 00885) */
	HB_P_PUSHSYMNEAR, 33,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_VEN */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 23, 0,	/* 23*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00903 */ HB_P_LINEOFFSET, 38,	/* 48 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 36, 0,	/* 36*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 30,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MTIPO_PR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00948) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00953) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 't', 'i', 'p', 'o', '_', 'p', 'r', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MTIPO_PR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', ',', '2', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01006 */ HB_P_LINEOFFSET, 39,	/* 49 */
	HB_P_PUSHSYMNEAR, 34,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 29, 0,	/* GETLIST */
/* 01028 */ HB_P_LINEOFFSET, 40,	/* 50 */
	HB_P_PUSHSYMNEAR, 35,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 01065) */
/* 01040 */ HB_P_LINEOFFSET, 41,	/* 51 */
	HB_P_PUSHSYMNEAR, 17,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 18,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 19,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 203, 4,	/* 1227 (abs: 02289) */
/* 01065 */ HB_P_LINEOFFSET, 44,	/* 54 */
	HB_P_PUSHSYMNEAR, 36,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01074 */ HB_P_LINEOFFSET, 45,	/* 55 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 23, 0,	/* 23*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* SEN */
	HB_P_PUSHALIASEDFIELDNEAR, 38,	/* SNOME */
	HB_P_DOSHORT, 1,
/* 01100 */ HB_P_LINEOFFSET, 46,	/* 56 */
	HB_P_PUSHSYMNEAR, 36,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01108 */ HB_P_LINEOFFSET, 48,	/* 58 */
	HB_P_PUSHSYMNEAR, 18,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'm', 'o', 'v', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 39,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01127 */ HB_P_LINEOFFSET, 49,	/* 59 */
	HB_P_PUSHSYMNEAR, 40,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01134 */ HB_P_LINEOFFSET, 51,	/* 61 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 41,	/* MOV */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 42,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* DTOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
	HB_P_POPALIAS,
/* 01154 */ HB_P_LINEOFFSET, 52,	/* 62 */
	HB_P_PUSHSYMNEAR, 44,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 01214) */
/* 01163 */ HB_P_LINEOFFSET, 53,	/* 63 */
	HB_P_PUSHSYMNEAR, 45,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'm', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 117, 252,	/* -907 (abs: 00304) */
/* 01214 */ HB_P_LINEOFFSET, 56,	/* 66 */
	HB_P_PUSHSYMNEAR, 24,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'E', 's', 'p', 'e', 'r', 'e', ' ', 'o', ' ', 'F', 'i', 'n', 'a', 'l', ' ', 'd', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'O', 'K', ' ', '-', ' ', '[', 'E', 'S', 'C', ']', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 01266 */ HB_P_LINEOFFSET, 57,	/* 67 */
	HB_P_PUSHSYMNEAR, 46,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'S', 'T', '_', 'V', 'E', 'N', 'D', 'A', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01298) */
	HB_P_JUMP, 33, 252,	/* -991 (abs: 00304) */
/* 01298 */ HB_P_LINEOFFSET, 61,	/* 71 */
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* MTOT_PRC 0*/
/* 01304 */ HB_P_LINEOFFSET, 62,	/* 72 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* MTOT_VEN 0*/
/* 01310 */ HB_P_LINEOFFSET, 63,	/* 73 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 01316 */ HB_P_LINEOFFSET, 64,	/* 74 */
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'L', 'i', 's', 't', 'a', 'g', 'e', 'm', ' ', 'd', 'e', ' ', 'E', 's', 't', 'a', 't', 'i', 's', 't', 'i', 'c', 'a', ' ', 'V', 'l', 'r', '.', 'V', 'e', 'n', 'd', 'a', '/', 'P', 'r', 'e', 'c', 'o', ' ', 'd', 'e', ' ', 'T', 'a', 'b', 'e', 'l', 'a', 0, 
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 01373 */ HB_P_LINEOFFSET, 65,	/* 75 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', 'e', ' ', 0, 
	HB_P_PUSHSYMNEAR, 47,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 't', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 01409 */ HB_P_LINEOFFSET, 66,	/* 76 */
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 01457) */
/* 01421 */ HB_P_LINEOFFSET, 67,	/* 77 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 01457 */ HB_P_LINEOFFSET, 69,	/* 79 */
	HB_P_PUSHSYMNEAR, 49,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 01475 */ HB_P_LINEOFFSET, 70,	/* 80 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 41,	/* MOV */
	HB_P_PUSHALIASEDFIELDNEAR, 50,	/* DATA_S_E */
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA2 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 01494) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 44,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 179, 0,	/* 179 (abs: 01673) */
/* 01497 */ HB_P_LINEOFFSET, 71,	/* 81 */
	HB_P_PUSHSYMNEAR, 51,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 6, 0,	/* POINT */
/* 01507 */ HB_P_LINEOFFSET, 74,	/* 84 */
	HB_P_PUSHSYMNEAR, 41,	/* MOV */
	HB_P_PUSHALIASEDFIELDNEAR, 52,	/* ENT_SAI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 30,	/* 30 (abs: 01549) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 01548) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 41,	/* MOV */
	HB_P_PUSHALIASEDFIELDNEAR, 53,	/* COD_VEND */
	HB_P_PUSHSYMNEAR, 48,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01561) */
/* 01551 */ HB_P_LINEOFFSET, 75,	/* 85 */
	HB_P_PUSHSYMNEAR, 54,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 172,	/* -84 (abs: 01475) */
/* 01561 */ HB_P_LINEOFFSET, 78,	/* 88 */
	HB_P_PUSHSYMNEAR, 55,	/* VER_VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* MOV */
	HB_P_PUSHALIASEDFIELDNEAR, 53,	/* COD_VEND */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 16,	/* 16 (abs: 01592) */
/* 01578 */ HB_P_LINEOFFSET, 79,	/* 89 */
	HB_P_PUSHSYMNEAR, 13,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 7, 0,	/* MNOME_VEN */
	HB_P_JUMPNEAR, 11,	/* 11 (abs: 01601) */
/* 01592 */ HB_P_LINEOFFSET, 81,	/* 91 */
	HB_P_PUSHSYMNEAR, 37,	/* SEN */
	HB_P_PUSHALIASEDFIELDNEAR, 38,	/* SNOME */
	HB_P_POPVARIABLE, 7, 0,	/* MNOME_VEN */
/* 01601 */ HB_P_LINEOFFSET, 83,	/* 93 */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_VEN */
	HB_P_PUSHSYMNEAR, 41,	/* MOV */
	HB_P_PUSHALIASEDFIELDNEAR, 56,	/* VL_VEND */
	HB_P_PUSHSYMNEAR, 41,	/* MOV */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* QUANTD */
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_VEN */
/* 01617 */ HB_P_LINEOFFSET, 84,	/* 94 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO_PR */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 01646) */
/* 01628 */ HB_P_LINEOFFSET, 85,	/* 95 */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_PRC */
	HB_P_PUSHSYMNEAR, 41,	/* MOV */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* PR_VENDA */
	HB_P_PUSHSYMNEAR, 41,	/* MOV */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* QUANTD */
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* MTOT_PRC */
	HB_P_JUMPNEAR, 18,	/* 18 (abs: 01662) */
/* 01646 */ HB_P_LINEOFFSET, 87,	/* 97 */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_PRC */
	HB_P_PUSHSYMNEAR, 41,	/* MOV */
	HB_P_PUSHALIASEDFIELDNEAR, 59,	/* PR_VENDA1 */
	HB_P_PUSHSYMNEAR, 41,	/* MOV */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* QUANTD */
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* MTOT_PRC */
/* 01662 */ HB_P_LINEOFFSET, 89,	/* 99 */
	HB_P_PUSHSYMNEAR, 54,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 61, 255,	/* -195 (abs: 01475) */
/* 01673 */ HB_P_LINEOFFSET, 91,	/* 101 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'T', 'o', 't', 'a', 'l', ' ', 'a', ' ', 'P', 'r', 'e', 'c', 'o', ' ', 'V', 'e', 'n', 'd', 'i', 'd', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01721 */ HB_P_LINEOFFSET, 92,	/* 102 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 62,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_VEN */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 01765 */ HB_P_LINEOFFSET, 93,	/* 103 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO_PR */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 01826) */
/* 01776 */ HB_P_LINEOFFSET, 94,	/* 104 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'T', 'o', 't', 'a', 'l', ' ', 'a', ' ', 'P', 'r', 'e', 'c', 'o', ' ', 'd', 'e', ' ', 'V', 'e', 'n', 'd', 'a', '.', ':', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 50,	/* 50 (abs: 01874) */
/* 01826 */ HB_P_LINEOFFSET, 96,	/* 106 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'T', 'o', 't', 'a', 'l', ' ', 'a', ' ', 'P', 'r', 'e', 'c', 'o', ' ', 'd', 'e', ' ', 'V', 'e', 'n', 'd', 'a', '1', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01874 */ HB_P_LINEOFFSET, 98,	/* 108 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 62,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_PRC */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 01918 */ HB_P_LINEOFFSET, 99,	/* 109 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 01981 */ HB_P_LINEOFFSET, 100,	/* 110 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'i', 'f', 'e', 'r', 'e', 'n', 'c', 'a', ' ', '(', 'R', '$', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02029 */ HB_P_LINEOFFSET, 101,	/* 111 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 62,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_VEN */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_PRC */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 02076 */ HB_P_LINEOFFSET, 102,	/* 112 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'D', 'i', 'f', 'e', 'r', 'e', 'n', 'c', 'a', ' ', 'n', 'a', ' ', 'M', 'e', 'd', 'i', 'a', ' ', '(', '%', ')', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02124 */ HB_P_LINEOFFSET, 103,	/* 113 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 62,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_PRC */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_VEN */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 02166 */ HB_P_LINEOFFSET, 104,	/* 114 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 02192 */ HB_P_LINEOFFSET, 105,	/* 115 */
	HB_P_PUSHSYMNEAR, 64,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 02206 */ HB_P_LINEOFFSET, 106,	/* 116 */
	HB_P_PUSHSYMNEAR, 65,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02213 */ HB_P_LINEOFFSET, 107,	/* 117 */
	HB_P_PUSHSYMNEAR, 66,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 02222 */ HB_P_LINEOFFSET, 108,	/* 118 */
	HB_P_PUSHSYMNEAR, 67,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 67,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 67,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 02263 */ HB_P_LINEOFFSET, 109,	/* 119 */
	HB_P_PUSHSYMNEAR, 68,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'S', 'T', '_', 'V', 'E', 'N', 'D', 'A', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 66, 248,	/* -1982 (abs: 00304) */
/* 02289 */ HB_P_LINEOFFSET, 122,	/* 132 */
	HB_P_PUSHSYMNEAR, 69,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02296 */ HB_P_LINEOFFSET, 123,	/* 133 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02301 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

