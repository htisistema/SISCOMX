/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC522.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\hti\SISCOM\SAC522.PRG /q /oC:\hti\SISCOM\SAC522.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.29 11:53:02 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC522.PRG"

HB_FUNC( SAC522 );
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
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( VER_COD );
HB_FUNC_EXTERN( V_UF );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC522 )
{ "SAC522", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC522 )}, NULL },
{ "MCLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "CONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "VER_COD", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_COD )}, NULL },
{ "V_UF", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_UF )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "MDATA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC522 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC522
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC522 = hb_vm_SymbolInit_SAC522;
   #pragma data_seg()
#endif

HB_FUNC( SAC522 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 39, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 14, 0,	/* 14 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '5', '2', '2', 0, 
	HB_P_LOCALNEARSETSTR, 2, 39, 0,	/* MTITULO 39*/
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'P', '/', 'P', 'R', 'O', 'D', 'U', 'T', 'O', '/', 'V', 'E', 'N', 'D', 'E', 'D', 'O', 'R', 0, 
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* I 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 35,	/* MCONS_MERC */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 37,	/* VEMP */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 38,	/* ARET */
/* 00084 */ HB_P_LINEOFFSET, 2,	/* 16 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 9,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 2,	/* MCPF */
	HB_P_PUSHSYMNEAR, 3,	/* MCGC */
	HB_P_PUSHSYMNEAR, 4,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 5,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 6,	/* MARQ */
	HB_P_PUSHSYMNEAR, 8,	/* CONS_CLI */
	HB_P_DOSHORT, 7,
	HB_P_POPVARIABLE, 8, 0,	/* CONS_CLI */
	HB_P_POPVARIABLE, 6, 0,	/* MARQ */
	HB_P_POPVARIABLE, 5, 0,	/* MIMP_TIPO */
/* 00125 */ HB_P_LINEOFFSET, 4,	/* 18 */
	HB_P_PUSHSYMNEAR, 10,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '6', 0, 
	HB_P_PUSHMEMVAR, 11, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00161) */
/* 00156 */ HB_P_LINEOFFSET, 5,	/* 19 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00161 */ HB_P_LINEOFFSET, 7,	/* 21 */
	HB_P_PUSHSYMNEAR, 12,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 17,	/* MTRACO */
/* 00177 */ HB_P_LINEOFFSET, 9,	/* 23 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_POPLOCALNEAR, 3,	/* LCI */
/* 00187 */ HB_P_LINEOFFSET, 10,	/* 24 */
	HB_P_LOCALNEARSETINT, 5, 7, 0,	/* LBA 7*/
/* 00193 */ HB_P_LINEOFFSET, 11,	/* 25 */
	HB_P_LOCALNEARSETINT, 6, 70, 0,	/* CBA 70*/
/* 00199 */ HB_P_LINEOFFSET, 13,	/* 27 */
	HB_P_PUSHMEMVAR, 13, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO_IMP */
/* 00212 */ HB_P_LINEOFFSET, 14,	/* 28 */
	HB_P_PUSHSYMNEAR, 14,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_DOSHORT, 5,
/* 00232 */ HB_P_LINEOFFSET, 16,	/* 30 */
	HB_P_PUSHSYMNEAR, 15,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00241 */ HB_P_LINEOFFSET, 17,	/* 31 */
	HB_P_LOCALNEARSETINT, 30, 0, 0,	/* MQUANTD 0*/
	HB_P_PUSHLOCALNEAR, 30,	/* MQUANTD */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MCOD_MONT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MCOD_MERC */
	HB_P_POPLOCALNEAR, 23,	/* MCOD_VEND */
/* 00257 */ HB_P_LINEOFFSET, 18,	/* 32 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 1, 0,	/* MCLIENTE */
/* 00269 */ HB_P_LINEOFFSET, 19,	/* 33 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 2, 0,	/* MCPF */
/* 00281 */ HB_P_LINEOFFSET, 20,	/* 34 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 3, 0,	/* MCGC */
/* 00293 */ HB_P_LINEOFFSET, 21,	/* 35 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 11,	/* MDOC */
/* 00304 */ HB_P_LINEOFFSET, 22,	/* 36 */
	HB_P_PUSHMEMVAR, 16, 0,	/* MDATA_SIS */
	HB_P_ADDINT, 225, 255,	/* -31*/
	HB_P_POPLOCALNEAR, 25,	/* MDATA1 */
/* 00314 */ HB_P_LINEOFFSET, 23,	/* 37 */
	HB_P_PUSHMEMVAR, 16, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 26,	/* MDATA2 */
/* 00321 */ HB_P_LINEOFFSET, 24,	/* 38 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 29,	/* MUF */
/* 00332 */ HB_P_LINEOFFSET, 25,	/* 39 */
	HB_P_PUSHSYMNEAR, 17,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00374 */ HB_P_LINEOFFSET, 26,	/* 40 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00415 */ HB_P_LINEOFFSET, 27,	/* 41 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'M', 'o', 'n', 't', 'a', 'd', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00456 */ HB_P_LINEOFFSET, 28,	/* 42 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00497 */ HB_P_LINEOFFSET, 29,	/* 43 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'S', 'i', 'g', 'l', 'a', ' ', 'd', 'o', ' ', 'E', 's', 't', 'a', 'd', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00538 */ HB_P_LINEOFFSET, 30,	/* 44 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00579 */ HB_P_LINEOFFSET, 31,	/* 45 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00620 */ HB_P_LINEOFFSET, 33,	/* 47 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 20, 0,	/* 20*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MCOD_VEND */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00665) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00670) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 43, 0,	/* 43 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	23, 0,	/* MCOD_VEND */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 24,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00714) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 19,	/* 19 (abs: 00731) */
	HB_P_PUSHSYMNEAR, 25,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 25, 0,	/* 25*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00749 */ HB_P_LINEOFFSET, 34,	/* 48 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
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
/* 00771 */ HB_P_LINEOFFSET, 35,	/* 49 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00786) */
	HB_P_JUMP, 163, 14,	/* 3747 (abs: 04530) */
/* 00786 */ HB_P_LINEOFFSET, 38,	/* 52 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 20, 0,	/* 20*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	34, 0,	/* MCOD_MONT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00831) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00836) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'm', 'o', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 43, 0,	/* 43 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	34, 0,	/* MCOD_MONT */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 24,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00880) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 19,	/* 19 (abs: 00897) */
	HB_P_PUSHSYMNEAR, 25,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 25, 0,	/* 25*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00915 */ HB_P_LINEOFFSET, 39,	/* 53 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
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
/* 00937 */ HB_P_LINEOFFSET, 40,	/* 54 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00952) */
	HB_P_JUMP, 253, 13,	/* 3581 (abs: 04530) */
/* 00952 */ HB_P_LINEOFFSET, 43,	/* 57 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	24, 0,	/* MCOD_MERC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00997) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01002) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 45, 0,	/* 45 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	24, 0,	/* MCOD_MERC */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 24,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01048) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 21,	/* 21 (abs: 01067) */
	HB_P_PUSHSYMNEAR, 29,	/* VER_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 25, 0,	/* 25*/
	HB_P_FALSE,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01085 */ HB_P_LINEOFFSET, 44,	/* 58 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
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
/* 01107 */ HB_P_LINEOFFSET, 45,	/* 59 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01122) */
	HB_P_JUMP, 83, 13,	/* 3411 (abs: 04530) */
/* 01122 */ HB_P_LINEOFFSET, 48,	/* 62 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* MUF */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01167) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01172) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'm', 'u', 'f', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* MUF */
	HB_P_PUSHSYMNEAR, 30,	/* V_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01218 */ HB_P_LINEOFFSET, 49,	/* 63 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	25, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01263) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01268) */
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
	25, 0,	/* MDATA1 */
	HB_P_PUSHSYMNEAR, 24,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01310) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01311) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01329 */ HB_P_LINEOFFSET, 50,	/* 64 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	26, 0,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01374) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01379) */
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
	26, 0,	/* MDATA2 */
	25, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01421) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01422) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01440 */ HB_P_LINEOFFSET, 51,	/* 65 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
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
/* 01462 */ HB_P_LINEOFFSET, 52,	/* 66 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01477) */
	HB_P_JUMP, 240, 11,	/* 3056 (abs: 04530) */
/* 01477 */ HB_P_LINEOFFSET, 55,	/* 69 */
	HB_P_PUSHSYMNEAR, 17,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'o', ' ', 'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', '/', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01528 */ HB_P_LINEOFFSET, 56,	/* 70 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 35,	/* MCONS_MERC */
/* 01535 */ HB_P_LINEOFFSET, 57,	/* 71 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'm', 'e', 'r', 'c', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 35, 0,	/* MCONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01606 */ HB_P_LINEOFFSET, 58,	/* 72 */
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
/* 01630 */ HB_P_LINEOFFSET, 59,	/* 73 */
	HB_P_PUSHSYMNEAR, 34,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MCONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 01677) */
/* 01643 */ HB_P_LINEOFFSET, 60,	/* 74 */
	HB_P_PUSHSYMNEAR, 35,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'n', 'a', 'o', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 94, 250,	/* -1442 (abs: 00232) */
/* 01677 */ HB_P_LINEOFFSET, 64,	/* 78 */
	HB_P_PUSHSTRSHORT, 120,	/* 120 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ',', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ',', 'p', 'r', 'o', 'd', 'u', 't', 'o', ',', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'v', 'l', '_', 'v', 'e', 'n', 'd', ',', 'q', 'u', 'a', 'n', 't', 'd', ',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ',', 'p', 'r', '_', 'u', 'n', 'i', 't', ',', 'c', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', ' ', 'B', 'E', 'T', 'W', 'E', 'E', 'N', ' ', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 64,	/* 64 */
	' ', 'A', 'N', 'D', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', '=', ' ', 39, 'S', 39, ' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, '0', '2', 39, ' ', 'A', 'N', 'D', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'N', 'O', 'T', ' ', 'L', 'I', 'K', 'E', ' ', 39, 'B', 'L', '%', 39, 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 39,	/* CCOMM */
/* 01895 */ HB_P_LINEOFFSET, 65,	/* 79 */
	HB_P_PUSHSYMNEAR, 24,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 01947) */
/* 01906 */ HB_P_LINEOFFSET, 66,	/* 80 */
	HB_P_PUSHLOCALNEAR, 39,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 39,	/* CCOMM */
/* 01947 */ HB_P_LINEOFFSET, 68,	/* 82 */
	HB_P_PUSHSYMNEAR, 24,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MCOD_MONT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 84,	/* 84 (abs: 02040) */
/* 01958 */ HB_P_LINEOFFSET, 70,	/* 84 */
	HB_P_PUSHLOCALNEAR, 39,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', '(', 'm', 'o', 'n', 't', 'a', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MCOD_MONT */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'O', 'R', ' ', 'm', 'o', 'n', 't', 'a', 'd', 'o', 'r', '1', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MCOD_MONT */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 39,	/* CCOMM */
/* 02040 */ HB_P_LINEOFFSET, 72,	/* 86 */
	HB_P_PUSHSYMNEAR, 24,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 02083) */
/* 02051 */ HB_P_LINEOFFSET, 73,	/* 87 */
	HB_P_PUSHLOCALNEAR, 39,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 39,	/* CCOMM */
/* 02083 */ HB_P_LINEOFFSET, 75,	/* 89 */
	HB_P_PUSHLOCALNEAR, 39,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ',', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 39,	/* CCOMM */
/* 02120 */ HB_P_LINEOFFSET, 76,	/* 90 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 36,	/* CONS_ARQ */
/* 02127 */ HB_P_LINEOFFSET, 77,	/* 91 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 39,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 36, 0,	/* CONS_ARQ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02147 */ HB_P_LINEOFFSET, 78,	/* 92 */
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
/* 02171 */ HB_P_LINEOFFSET, 80,	/* 94 */
	HB_P_PUSHSYMNEAR, 34,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 02234) */
/* 02184 */ HB_P_LINEOFFSET, 81,	/* 95 */
	HB_P_PUSHSYMNEAR, 35,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 49, 248,	/* -1999 (abs: 00232) */
/* 02234 */ HB_P_LINEOFFSET, 84,	/* 98 */
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* MDATA_DIA */
	HB_P_POPLOCALNEAR, 19,	/* MDATA_DIA */
/* 02247 */ HB_P_LINEOFFSET, 87,	/* 101 */
	HB_P_LOCALNEARSETINT, 28, 0, 0,	/* MTOT_QUANTD 0*/
	HB_P_PUSHLOCALNEAR, 28,	/* MTOT_QUANTD */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 27,	/* MSAI_BAL */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_PED */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* MVLR_SAI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 9,	/* MTOT_DIF */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* MTOT_PRVEN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* MTOT_CUST */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* MTOT_COMISS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* MTOT_DIA */
	HB_P_POPLOCALNEAR, 21,	/* MCOM_DIA */
/* 02281 */ HB_P_LINEOFFSET, 88,	/* 102 */
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 11,	/* MDOC */
/* 02292 */ HB_P_LINEOFFSET, 89,	/* 103 */
	HB_P_PUSHSYMNEAR, 17,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'E', 's', 'p', 'e', 'r', 'e', ' ', 'o', ' ', 'F', 'i', 'n', 'a', 'l', ' ', 'd', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'O', 'K', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 02336 */ HB_P_LINEOFFSET, 90,	/* 104 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'M', 'O', 'V', '_', 'V', 'E', 'N', 'D', '.', 'R', 'E', 'L', 0, 
	HB_P_POPVARIABLE, 6, 0,	/* MARQ */
/* 02356 */ HB_P_LINEOFFSET, 91,	/* 105 */
	HB_P_PUSHSYMNEAR, 37,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'M', 'O', 'V', '_', 'V', 'E', 'N', 'D', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 02387) */
	HB_P_JUMP, 152, 247,	/* -2152 (abs: 00232) */
/* 02387 */ HB_P_LINEOFFSET, 94,	/* 108 */
	HB_P_LOCALNEARSETINT, 31, 1, 0,	/* MPAG 1*/
/* 02393 */ HB_P_LINEOFFSET, 95,	/* 109 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 32,	/* MTIT */
/* 02420 */ HB_P_LINEOFFSET, 96,	/* 110 */
	HB_P_PUSHSYMNEAR, 24,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MCOD_MONT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 02463) */
/* 02431 */ HB_P_LINEOFFSET, 97,	/* 111 */
	HB_P_PUSHLOCALNEAR, 32,	/* MTIT */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', '-', ' ', 'M', 'o', 'n', 't', 'a', 'd', 'o', 'r', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MCOD_MONT */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 32,	/* MTIT */
/* 02463 */ HB_P_LINEOFFSET, 99,	/* 113 */
	HB_P_PUSHSYMNEAR, 24,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MUF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 58,	/* 58 (abs: 02530) */
/* 02474 */ HB_P_LINEOFFSET, 100,	/* 114 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', 'e', ' ', 0, 
	HB_P_PUSHSYMNEAR, 38,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 't', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 38,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'd', 'o', ' ', 'E', 's', 't', 'a', 'd', 'o', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 29,	/* MUF */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 33,	/* MTIPO */
	HB_P_JUMPNEAR, 37,	/* 37 (abs: 02565) */
/* 02530 */ HB_P_LINEOFFSET, 102,	/* 116 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', 'e', ' ', 0, 
	HB_P_PUSHSYMNEAR, 38,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 't', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 38,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 33,	/* MTIPO */
/* 02565 */ HB_P_LINEOFFSET, 104,	/* 118 */
	HB_P_PUSHSYMNEAR, 39,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 32,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 33,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 02578 */ HB_P_LINEOFFSET, 105,	/* 119 */
	HB_P_PUSHSYMNEAR, 24,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 97,	/* 97 (abs: 02684) */
/* 02589 */ HB_P_LINEOFFSET, 106,	/* 120 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02647 */ HB_P_LINEOFFSET, 107,	/* 121 */
	HB_P_PUSHSYMNEAR, 41,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 02661 */ HB_P_LINEOFFSET, 108,	/* 122 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 02684 */ HB_P_LINEOFFSET, 110,	/* 124 */
	HB_P_PUSHSYMNEAR, 41,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 02698 */ HB_P_LINEOFFSET, 111,	/* 125 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 95,	/* 95 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', ' ', ' ', 'C', 'o', 'd', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'D', 'o', 'c', '.', '(', 'N', 'F', ')', ' ', ' ', ' ', ' ', ' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ' ', ' ', ' ', ' ', ' ', 'V', 'l', 'r', '.', 'T', 'o', 't', 'a', 'l', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 02816 */ HB_P_LINEOFFSET, 112,	/* 126 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 02839 */ HB_P_LINEOFFSET, 113,	/* 127 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* I 0*/
/* 02845 */ HB_P_LINEOFFSET, 114,	/* 128 */
	HB_P_LOCALNEARSETINT, 8, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_PUSHSYMNEAR, 34,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 84, 3,	/* 852 (abs: 03713) */
/* 02864 */ HB_P_LINEOFFSET, 115,	/* 129 */
	HB_P_PUSHSYMNEAR, 42,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 02876 */ HB_P_LINEOFFSET, 116,	/* 130 */
	HB_P_PUSHSYMNEAR, 24,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MUF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 41,	/* 41 (abs: 02926) */
/* 02887 */ HB_P_LINEOFFSET, 118,	/* 132 */
	HB_P_PUSHSYMNEAR, 44,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 4,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 14,	/* 14 (abs: 02921) */
	HB_P_PUSHLOCALNEAR, 29,	/* MUF */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02926) */
	HB_P_JUMP, 15, 3,	/* 783 (abs: 03706) */
/* 02926 */ HB_P_LINEOFFSET, 122,	/* 136 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 1, 0,	/* MCLIENTE */
/* 02938 */ HB_P_LINEOFFSET, 123,	/* 137 */
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 11,	/* MDOC */
/* 02950 */ HB_P_LINEOFFSET, 124,	/* 138 */
	HB_P_LOCALNEARSETINT, 28, 0, 0,	/* MTOT_QUANTD 0*/
	HB_P_PUSHLOCALNEAR, 28,	/* MTOT_QUANTD */
	HB_P_POPLOCALNEAR, 12,	/* MTOT_PED */
/* 02960 */ HB_P_LINEOFFSET, 125,	/* 139 */
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 22,	/* MCOD_CLI */
/* 02972 */ HB_P_LINEOFFSET, 126,	/* 140 */
	HB_P_PUSHSYMNEAR, 44,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02987 */ HB_P_LINEOFFSET, 127,	/* 141 */
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 45, 0,	/* MDATA */
/* 02999 */ HB_P_LINEOFFSET, 128,	/* 142 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_PUSHSYMNEAR, 34,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 03026) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 11,	/* MDOC */
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 5, 1,	/* 261 (abs: 03287) */
/* 03029 */ HB_P_LINEOFFSET, 129,	/* 143 */
	HB_P_PUSHLOCALNEAR, 10,	/* MVLR_SAI */
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 10,	/* MVLR_SAI */
/* 03053 */ HB_P_LINEOFFSET, 130,	/* 144 */
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_DIF */
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* MTOT_DIF */
/* 03095 */ HB_P_LINEOFFSET, 131,	/* 145 */
	HB_P_PUSHLOCALNEAR, 28,	/* MTOT_QUANTD */
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 28,	/* MTOT_QUANTD */
/* 03110 */ HB_P_LINEOFFSET, 132,	/* 146 */
	HB_P_PUSHLOCALNEAR, 15,	/* MTOT_PRVEN */
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* MTOT_PRVEN */
/* 03134 */ HB_P_LINEOFFSET, 133,	/* 147 */
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CUST */
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MTOT_CUST */
/* 03158 */ HB_P_LINEOFFSET, 134,	/* 148 */
	HB_P_PUSHLOCALNEAR, 16,	/* MTOT_COMISS */
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 16,	/* MTOT_COMISS */
/* 03194 */ HB_P_LINEOFFSET, 135,	/* 149 */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_PED */
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_PED */
/* 03218 */ HB_P_LINEOFFSET, 136,	/* 150 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTOT_DIA */
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* MTOT_DIA */
/* 03242 */ HB_P_LINEOFFSET, 137,	/* 151 */
	HB_P_PUSHLOCALNEAR, 21,	/* MCOM_DIA */
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHLOCALNEAR, 36,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 21,	/* MCOM_DIA */
/* 03278 */ HB_P_LINEOFFSET, 138,	/* 152 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* I 1*/
	HB_P_JUMP, 227, 254,	/* -285 (abs: 02999) */
/* 03287 */ HB_P_LINEOFFSET, 140,	/* 154 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 45, 0,	/* MDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCLIENTE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* MDOC */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* MTOT_QUANTD */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_PED */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03405 */ HB_P_LINEOFFSET, 152,	/* 166 */
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 33, 1,	/* 289 (abs: 03704) */
/* 03418 */ HB_P_LINEOFFSET, 153,	/* 167 */
	HB_P_PUSHSYMNEAR, 48,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03425 */ HB_P_LINEOFFSET, 154,	/* 168 */
	HB_P_LOCALNEARADDINT, 31, 1, 0,	/* MPAG 1*/
/* 03431 */ HB_P_LINEOFFSET, 155,	/* 169 */
	HB_P_PUSHSYMNEAR, 39,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 32,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 33,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 03444 */ HB_P_LINEOFFSET, 156,	/* 170 */
	HB_P_PUSHSYMNEAR, 24,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 96,	/* 96 (abs: 03549) */
/* 03455 */ HB_P_LINEOFFSET, 157,	/* 171 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 35,	/* MCONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03512 */ HB_P_LINEOFFSET, 158,	/* 172 */
	HB_P_PUSHSYMNEAR, 41,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03526 */ HB_P_LINEOFFSET, 159,	/* 173 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 03549 */ HB_P_LINEOFFSET, 161,	/* 175 */
	HB_P_PUSHSYMNEAR, 41,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03563 */ HB_P_LINEOFFSET, 162,	/* 176 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 95,	/* 95 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', ' ', ' ', 'C', 'o', 'd', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'D', 'o', 'c', '.', '(', 'N', 'F', ')', ' ', ' ', ' ', ' ', ' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ' ', ' ', ' ', ' ', ' ', 'V', 'l', 'r', '.', 'T', 'o', 't', 'a', 'l', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 03681 */ HB_P_LINEOFFSET, 163,	/* 177 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 03704 */ HB_P_LINEOFFSET, 165,	/* 179 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* I 1*/
	HB_P_JUMP, 165, 252,	/* -859 (abs: 02851) */
/* 03713 */ HB_P_LINEOFFSET, 166,	/* 180 */
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 03751) */
/* 03725 */ HB_P_LINEOFFSET, 167,	/* 181 */
	HB_P_PUSHSYMNEAR, 48,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03732 */ HB_P_LINEOFFSET, 168,	/* 182 */
	HB_P_LOCALNEARADDINT, 31, 1, 0,	/* MPAG 1*/
/* 03738 */ HB_P_LINEOFFSET, 169,	/* 183 */
	HB_P_PUSHSYMNEAR, 39,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 32,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 33,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 03751 */ HB_P_LINEOFFSET, 171,	/* 185 */
	HB_P_PUSHSYMNEAR, 41,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 03765 */ HB_P_LINEOFFSET, 172,	/* 186 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'R', 'e', 's', 'u', 'm', 'o', ' ', 'G', 'e', 'r', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 03802 */ HB_P_LINEOFFSET, 173,	/* 187 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'R', 'e', 's', 'u', 'm', 'o', ' ', 'G', 'e', 'r', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 03836 */ HB_P_LINEOFFSET, 174,	/* 188 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'S', 'a', 'i', 'd', 'a', 's', ' ', 'R', '$', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03882 */ HB_P_LINEOFFSET, 175,	/* 189 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 49,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MVLR_SAI */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03926 */ HB_P_LINEOFFSET, 176,	/* 190 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'M', 'e', 'd', 'i', 'o', ' ', 'R', '$', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03972 */ HB_P_LINEOFFSET, 177,	/* 191 */
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_DIF */
	HB_P_ZERO,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03986) */
/* 03980 */ HB_P_LINEOFFSET, 178,	/* 192 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* MTOT_DIF 0*/
/* 03986 */ HB_P_LINEOFFSET, 180,	/* 194 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 49,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_DIF */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04030 */ HB_P_LINEOFFSET, 181,	/* 195 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 49,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 'm', ' ', '(', '%', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04065 */ HB_P_LINEOFFSET, 182,	/* 196 */
	HB_P_PUSHLOCALNEAR, 15,	/* MTOT_PRVEN */
	HB_P_PUSHLOCALNEAR, 10,	/* MVLR_SAI */
	HB_P_MINUS,
	HB_P_PUSHLOCALNEAR, 15,	/* MTOT_PRVEN */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 18,	/* MDESC */
/* 04080 */ HB_P_LINEOFFSET, 183,	/* 197 */
	HB_P_PUSHLOCALNEAR, 18,	/* MDESC */
	HB_P_ZERO,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 04094) */
/* 04088 */ HB_P_LINEOFFSET, 184,	/* 198 */
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* MDESC 0*/
/* 04094 */ HB_P_LINEOFFSET, 186,	/* 200 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 49,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MDESC */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04130 */ HB_P_LINEOFFSET, 187,	/* 201 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'L', 'u', 'c', 'r', 'o', ' ', 'M', 'e', 'd', 'i', 'o', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04176 */ HB_P_LINEOFFSET, 188,	/* 202 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 49,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MVLR_SAI */
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CUST */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04223 */ HB_P_LINEOFFSET, 189,	/* 203 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 49,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 'm', ' ', '(', '%', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04258 */ HB_P_LINEOFFSET, 190,	/* 204 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 49,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MVLR_SAI */
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CUST */
	HB_P_MINUS,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CUST */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04303 */ HB_P_LINEOFFSET, 191,	/* 205 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04349 */ HB_P_LINEOFFSET, 192,	/* 206 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 49,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MTOT_COMISS */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04393 */ HB_P_LINEOFFSET, 193,	/* 207 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 49,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MTOT_COMISS */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04437 */ HB_P_LINEOFFSET, 195,	/* 209 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 04463 */ HB_P_LINEOFFSET, 196,	/* 210 */
	HB_P_PUSHSYMNEAR, 48,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04470 */ HB_P_LINEOFFSET, 197,	/* 211 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 04479 */ HB_P_LINEOFFSET, 198,	/* 212 */
	HB_P_PUSHSYMNEAR, 53,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 04520 */ HB_P_LINEOFFSET, 199,	/* 213 */
	HB_P_PUSHSYMNEAR, 54,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MARQ */
	HB_P_DOSHORT, 1,
/* 04530 */ HB_P_LINEOFFSET, 202,	/* 216 */
	HB_P_PUSHSYMNEAR, 55,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04537 */ HB_P_LINEOFFSET, 203,	/* 217 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 04542 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

