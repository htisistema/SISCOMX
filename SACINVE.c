/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACINVE.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SACINVE.PRG /q /oC:\hti\SISCOM\SACINVE.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:18 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACINVE.PRG"

HB_FUNC( SACINVE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( V_GRU_COD );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( VER_ESPE );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( __MVXRELEASE );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( ROUND );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( MENSAGEM1 );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( DISPOUT );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACINVE )
{ "SACINVE", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACINVE )}, NULL },
{ "MTRACO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTOT_ITEM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MQUANTD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ_PRIN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_REL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPORTA_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_TAB", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTOT_VOL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFORNECE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MUF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_ESPE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MMERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_BC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPRG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_TP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MLAYOUT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "MDATA_INVE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "V_GRU_COD", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_GRU_COD )}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "VER_ESPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_ESPE )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "__MVXRELEASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVXRELEASE )}, NULL },
{ "ARET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "ROUND", {HB_FS_PUBLIC}, {HB_FUNCNAME( ROUND )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "MENSAGEM1", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM1 )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "MCGC_FIRM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MINSC_FIRM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "DISPOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPOUT )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACINVE )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACINVE
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACINVE = hb_vm_SymbolInit_SACINVE;
   #pragma data_seg()
#endif

HB_FUNC( SACINVE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 22, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_LOCALNEARSETSTR, 1, 24, 0,	/* MTITULO 24*/
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'I', 'N', 'V', 'E', 'N', 'T', 'A', 'R', 'I', 'O', 0, 
	HB_P_LOCALNEARSETSTR, 14, 2, 0,	/* MTIPO_TB 2*/
	' ', 0, 
	HB_P_LOCALNEARSETINT, 15, 0, 0,	/* MSALDO 0*/
	HB_P_LOCALNEARSETINT, 17, 0, 0,	/* MCUST_MERC 0*/
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* MSALDO_FIS 0*/
	HB_P_LOCALNEARSETINT, 19, 0, 0,	/* MPC_SALDO 0*/
	HB_P_LOCALNEARSETINT, 20, 0, 0,	/* MPC_VLR 0*/
	HB_P_LOCALNEARSETSTR, 21, 2, 0,	/* MALTERE 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 22, 2, 0,	/* MTIPO_SALDO 2*/
	' ', 0, 
/* 00072 */ HB_P_LINEOFFSET, 5,	/* 13 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'S', 'A', 'C', 'I', 'N', 'V', 'E', 0, 
	HB_P_PUSHSYMNEAR, 20,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MTRACO */
	HB_P_PUSHSYMNEAR, 2,	/* MTOT_ITEM */
	HB_P_PUSHSYMNEAR, 3,	/* MTIT */
	HB_P_PUSHSYMNEAR, 4,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 5,	/* MPAG */
	HB_P_PUSHSYMNEAR, 6,	/* MQUANTD */
	HB_P_PUSHSYMNEAR, 7,	/* MARQ_PRIN */
	HB_P_PUSHSYMNEAR, 8,	/* MIMP_REL */
	HB_P_PUSHSYMNEAR, 9,	/* MPORTA_IMP */
	HB_P_PUSHSYMNEAR, 10,	/* MTIPO_TAB */
	HB_P_PUSHSYMNEAR, 11,	/* MTOT_VOL */
	HB_P_PUSHSYMNEAR, 12,	/* MFORNECE */
	HB_P_PUSHSYMNEAR, 13,	/* MUF */
	HB_P_PUSHSYMNEAR, 14,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 15,	/* MCOD_ESPE */
	HB_P_PUSHSYMNEAR, 16,	/* MCOD_MERC */
	HB_P_PUSHSYMNEAR, 17,	/* MMERC */
	HB_P_PUSHSYMNEAR, 18,	/* MCOD_BC */
	HB_P_PUSHSYMNEAR, 19,	/* MPRG */
	HB_P_DOSHORT, 19,
	HB_P_POPVARIABLE, 19, 0,	/* MPRG */
	HB_P_POPVARIABLE, 16, 0,	/* MCOD_MERC */
/* 00134 */ HB_P_LINEOFFSET, 7,	/* 15 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 24,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 20,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 21,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 22,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 23,	/* MARQ */
	HB_P_DOSHORT, 3,
	HB_P_POPVARIABLE, 23, 0,	/* MARQ */
	HB_P_POPVARIABLE, 22, 0,	/* MIMP_TIPO */
/* 00161 */ HB_P_LINEOFFSET, 9,	/* 17 */
	HB_P_PUSHSYMNEAR, 25,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 1,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHVARIABLE, 26, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00197) */
/* 00192 */ HB_P_LINEOFFSET, 10,	/* 18 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00197 */ HB_P_LINEOFFSET, 12,	/* 20 */
	HB_P_PUSHSYMNEAR, 27,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 130, 0,	/* 130 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 1, 0,	/* MTRACO */
/* 00214 */ HB_P_LINEOFFSET, 13,	/* 21 */
	HB_P_LOCALNEARSETINT, 2, 18, 0,	/* LBA 18*/
/* 00220 */ HB_P_LINEOFFSET, 14,	/* 22 */
	HB_P_LOCALNEARSETINT, 3, 85, 0,	/* CBA 85*/
/* 00226 */ HB_P_LINEOFFSET, 15,	/* 23 */
	HB_P_LOCALNEARSETSTR, 8, 2, 0,	/* OPCAO 2*/
	'S', 0, 
/* 00234 */ HB_P_LINEOFFSET, 16,	/* 24 */
	HB_P_PUSHSYMNEAR, 28,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 95,	/* 95 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTITULO */
	HB_P_DOSHORT, 5,
/* 00251 */ HB_P_LINEOFFSET, 18,	/* 26 */
	HB_P_PUSHSYMNEAR, 29,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00261 */ HB_P_LINEOFFSET, 20,	/* 28 */
	HB_P_PUSHMEMVAR, 30, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 21, 0,	/* MTIPO_IMP */
/* 00274 */ HB_P_LINEOFFSET, 22,	/* 30 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 6, 0,	/* MQUANTD */
/* 00280 */ HB_P_LINEOFFSET, 23,	/* 31 */
	HB_P_PUSHSYMNEAR, 24,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* MGRUPO1 */
/* 00291 */ HB_P_LINEOFFSET, 25,	/* 33 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 14, 0,	/* MCOD_FORN */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 11, 0,	/* MTOT_VOL */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_VEN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_MERC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* MTOT_CUST */
	HB_P_POPVARIABLE, 2, 0,	/* MTOT_ITEM */
/* 00314 */ HB_P_LINEOFFSET, 26,	/* 34 */
	HB_P_PUSHSYMNEAR, 24,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 12, 0,	/* MFORNECE */
/* 00326 */ HB_P_LINEOFFSET, 27,	/* 35 */
	HB_P_PUSHSYMNEAR, 24,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 13, 0,	/* MUF */
/* 00338 */ HB_P_LINEOFFSET, 28,	/* 36 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 15, 0,	/* MCOD_ESPE */
/* 00344 */ HB_P_LINEOFFSET, 29,	/* 37 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_POPVARIABLE, 31, 0,	/* MTIPO_TP */
/* 00353 */ HB_P_LINEOFFSET, 30,	/* 38 */
	HB_P_PUSHSYMNEAR, 24,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 16,	/* M_ANO */
/* 00364 */ HB_P_LINEOFFSET, 31,	/* 39 */
	HB_P_PUSHSYMNEAR, 24,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 32, 0,	/* MTIPO_MERC */
/* 00376 */ HB_P_LINEOFFSET, 32,	/* 40 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_POPVARIABLE, 33, 0,	/* MLAYOUT */
/* 00385 */ HB_P_LINEOFFSET, 33,	/* 41 */
	HB_P_LOCALNEARSETSTR, 22, 2, 0,	/* MTIPO_SALDO 2*/
	'2', 0, 
/* 00393 */ HB_P_LINEOFFSET, 34,	/* 42 */
	HB_P_PUSHSYMNEAR, 34,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 35, 0,	/* MDATA_INVE */
/* 00414 */ HB_P_LINEOFFSET, 35,	/* 43 */
	HB_P_PUSHSYMNEAR, 36,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 63,	/* 63 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', 'o', 'u', ' ', 'e', 'm', ' ', 'B', 'r', 'n', 'a', 'c', 'o', ' ', 'p', '/', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 't', 'o', 'd', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00486 */ HB_P_LINEOFFSET, 36,	/* 44 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'A', 'n', 'o', ' ', 'i', 'n', 'v', 'e', 'n', 't', 'a', 'r', 'i', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00535 */ HB_P_LINEOFFSET, 37,	/* 45 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'v', 'e', 'n', 't', 'a', 'r', 'i', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00569 */ HB_P_LINEOFFSET, 38,	/* 46 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'G', 'r', 'u', 'p', 'o', ' ', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00619 */ HB_P_LINEOFFSET, 39,	/* 47 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00669 */ HB_P_LINEOFFSET, 40,	/* 48 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'E', 's', 'p', 'e', 'c', 'i', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00719 */ HB_P_LINEOFFSET, 41,	/* 49 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'S', 'a', 'l', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00769 */ HB_P_LINEOFFSET, 42,	/* 50 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'T', 'o', 't', 'a', 'l', ' ', 'S', 'a', 'l', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00819 */ HB_P_LINEOFFSET, 43,	/* 51 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00847 */ HB_P_LINEOFFSET, 44,	/* 52 */
	HB_P_PUSHSYMNEAR, 39,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHLOCALNEAR, 3,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00862 */ HB_P_LINEOFFSET, 45,	/* 53 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00912 */ HB_P_LINEOFFSET, 46,	/* 54 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'S', 'a', 'l', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00962 */ HB_P_LINEOFFSET, 47,	/* 55 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'V', 'a', 'l', 'o', 'r', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', '(', 'C', 'u', 's', 't', '.', 'M', 'e', 'r', 'c', '.', ')', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01012 */ HB_P_LINEOFFSET, 48,	/* 56 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'(', '%', ')', ' ', 'p', '/', 'S', 'a', 'l', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01062 */ HB_P_LINEOFFSET, 49,	/* 57 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'(', '%', ')', ' ', 'p', '/', 'V', 'a', 'l', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01112 */ HB_P_LINEOFFSET, 50,	/* 58 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', '[', '1', ',', '2', ',', '3', ',', '4', ',', '5', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01162 */ HB_P_LINEOFFSET, 51,	/* 59 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'T', 'i', 'p', 'o', ' ', 'L', 'a', 'y', 'o', 'u', 't', ' ', '[', 'S', ']', 'e', 'f', ' ', '[', 'R', ']', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01212 */ HB_P_LINEOFFSET, 52,	/* 60 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'C', 'o', 'p', 'i', 'a', 's', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01262 */ HB_P_LINEOFFSET, 54,	/* 62 */
	HB_P_PUSHSYMNEAR, 40,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 41,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 43,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* M_ANO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01300) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01305) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'a', 'n', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* M_ANO */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01342) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01343) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 45, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 42, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01361 */ HB_P_LINEOFFSET, 55,	/* 63 */
	HB_P_PUSHSYMNEAR, 40,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 67,	/* 67 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 41,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 43,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'd', 'a', 't', 'a', '_', 'i', 'n', 'v', 'e', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 17,	/* 17 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 35, 0,	/* MDATA_INVE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01410) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01411) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 45, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 42, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01429 */ HB_P_LINEOFFSET, 56,	/* 64 */
	HB_P_PUSHSYMNEAR, 40,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 41,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 43,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MGRUPO1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01468) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01473) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'g', 'r', 'u', 'p', 'o', '1', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MGRUPO1 */
	HB_P_PUSHSYMNEAR, 46,	/* V_GRU_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 45, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 42, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01526 */ HB_P_LINEOFFSET, 57,	/* 65 */
	HB_P_PUSHSYMNEAR, 40,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 41,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 43,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 47,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 45, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 42, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01598 */ HB_P_LINEOFFSET, 58,	/* 66 */
	HB_P_PUSHSYMNEAR, 40,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 41,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 43,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'e', 's', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 17,	/* 17 */
	HB_P_PUSHSYMNEAR, 48,	/* VER_ESPE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 45, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 42, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01672 */ HB_P_LINEOFFSET, 59,	/* 67 */
	HB_P_PUSHSYMNEAR, 40,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 41,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 43,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MTIPO_SALDO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01711) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01716) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 't', 'i', 'p', 'o', '_', 's', 'a', 'l', 'd', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MTIPO_SALDO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', ',', '2', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 45, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 42, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01771 */ HB_P_LINEOFFSET, 60,	/* 68 */
	HB_P_PUSHSYMNEAR, 49,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 42, 0,	/* GETLIST */
/* 01793 */ HB_P_LINEOFFSET, 61,	/* 69 */
	HB_P_PUSHSYMNEAR, 50,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 164, 0,	/* 164 (abs: 01967) */
/* 01806 */ HB_P_LINEOFFSET, 62,	/* 70 */
	HB_P_PUSHSYMNEAR, 51,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01813 */ HB_P_LINEOFFSET, 64,	/* 72 */
	HB_P_PUSHSYMNEAR, 52,	/* __MVXRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 't', 'r', 'a', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'o', 't', '_', 'i', 't', 'e', 'm', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	't', 'e', 'l', 'a', 'p', 'r', 'i', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 't', 'i', 't', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 't', 'i', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'p', 'a', 'g', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'q', 'u', 'a', 'n', 't', 'd', 0, 
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'm', 'p', 'r', 'g', ':', '=', 34, 'S', 'I', 'A', 'C', '5', '1', '1', 34, 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'i', 'm', 'p', '_', 't', 'i', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'a', 'r', 'q', '_', 'p', 'r', 'i', 'n', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'i', 'm', 'p', '_', 'r', 'e', 'l', 0, 
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'p', 'o', 'r', 't', 'a', '_', 'i', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 't', 'o', 't', '_', 'v', 'o', 'l', 0, 
	HB_P_DOSHORT, 13,
/* 01962 */ HB_P_LINEOFFSET, 65,	/* 73 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01967 */ HB_P_LINEOFFSET, 67,	/* 75 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 53, 0,	/* ARET */
/* 01975 */ HB_P_LINEOFFSET, 68,	/* 76 */
	HB_P_MESSAGE, 54, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 55,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', '3', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'i', 'n', 'v', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', '3', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* M_ANO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 53, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02052 */ HB_P_LINEOFFSET, 69,	/* 77 */
	HB_P_MESSAGE, 54, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 55,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02076 */ HB_P_LINEOFFSET, 70,	/* 78 */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 53, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 165, 0,	/* 165 (abs: 02253) */
/* 02091 */ HB_P_LINEOFFSET, 71,	/* 79 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSYMNEAR, 58,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'J', 'a', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'r', 'e', 'g', 'i', 's', 't', 'r', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'A', 'N', 'O', ',', ' ', 'D', 'e', 's', 'e', 'j', 'a', ' ', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'o', 's', ' ', 'd', 'a', 'd', 'o', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 90,	/* 90 (abs: 02253) */
/* 02165 */ HB_P_LINEOFFSET, 72,	/* 80 */
	HB_P_MESSAGE, 54, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 55,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'i', 'n', 'v', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', '3', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* M_ANO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02229 */ HB_P_LINEOFFSET, 73,	/* 81 */
	HB_P_MESSAGE, 54, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 55,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02253 */ HB_P_LINEOFFSET, 77,	/* 85 */
	HB_P_PUSHSYMNEAR, 36,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'C', 'o', 'p', 'i', 'a', 'n', 'd', 'o', ' ', 'a', ' ', 'T', 'a', 'b', 'e', 'l', 'a', ' ', 'd', 'e', ' ', 'P', 'r', 'e', 'c', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02292 */ HB_P_LINEOFFSET, 78,	/* 86 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 53, 0,	/* ARET */
/* 02300 */ HB_P_LINEOFFSET, 79,	/* 87 */
	HB_P_MESSAGE, 54, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 55,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 53, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02342 */ HB_P_LINEOFFSET, 80,	/* 88 */
	HB_P_MESSAGE, 54, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 55,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02366 */ HB_P_LINEOFFSET, 82,	/* 90 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* I 0*/
/* 02372 */ HB_P_LINEOFFSET, 83,	/* 91 */
	HB_P_LOCALNEARSETINT, 9, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 53, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 150, 1,	/* 406 (abs: 02795) */
/* 02392 */ HB_P_LINEOFFSET, 106,	/* 114 */
	HB_P_MESSAGE, 54, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 55,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 128,	/* 128 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'i', 'n', 'v', 'e', ' ', '(', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ',', 'm', 'e', 'r', 'c', ',', 'e', 's', 'p', 'e', 'c', 'i', 'e', ',', 'c', 'o', 'd', '_', 'f', 'a', 'b', ',', 'g', 'r', 'u', '_', 's', 'u', 'b', ',', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ',', 'c', 'u', 's', 't', '_', 'm', 'e', 'r', 'c', ',', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', '3', ',', 't', 'i', 'p', 'o', '_', 'm', 'e', 'r', 'c', ',', 'u', 'n', 'i', 'd', 'a', 'd', 'e', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MTIPO_SALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 02662) */
	HB_P_PUSHSYMNEAR, 59,	/* ROUND */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPNEAR, 18,	/* 18 (abs: 02678) */
	HB_P_PUSHSYMNEAR, 59,	/* ROUND */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* ROUND */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* M_ANO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
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
/* 02786 */ HB_P_LINEOFFSET, 107,	/* 115 */
	HB_P_LOCALNEARADDINT, 9, 1, 0,	/* I 1*/
	HB_P_JUMP, 98, 254,	/* -414 (abs: 02378) */
/* 02795 */ HB_P_LINEOFFSET, 108,	/* 116 */
	HB_P_MESSAGE, 54, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 55,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02819 */ HB_P_LINEOFFSET, 110,	/* 118 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MPC_SALDO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 02841) */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MPC_VLR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_OR,
	HB_P_JUMPFALSE, 159, 3,	/* 927 (abs: 03768) */
/* 02844 */ HB_P_LINEOFFSET, 111,	/* 119 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 53, 0,	/* ARET */
/* 02852 */ HB_P_LINEOFFSET, 112,	/* 120 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'i', 'n', 'v', 'e', ' ', 'S', 'E', 'T', ' ', 0, 
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 02879 */ HB_P_LINEOFFSET, 113,	/* 121 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MPC_SALDO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 52,	/* 52 (abs: 02940) */
/* 02890 */ HB_P_LINEOFFSET, 114,	/* 122 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '=', ' ', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '*', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MPC_SALDO */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 02940 */ HB_P_LINEOFFSET, 116,	/* 124 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MPC_VLR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 52,	/* 52 (abs: 03001) */
/* 02951 */ HB_P_LINEOFFSET, 117,	/* 125 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'c', 'u', 's', 't', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 'c', 'u', 's', 't', '_', 'm', 'e', 'r', 'c', ' ', '*', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MPC_VLR */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 03001 */ HB_P_LINEOFFSET, 119,	/* 127 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 70,	/* 70 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'm', 'e', 'r', 'c', ' ', '=', ' ', 39, 'I', 'M', 'P', 'O', 'S', 'T', 'O', 39, ' ', 'A', 'N', 'D', ' ', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '>', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', '3', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* M_ANO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 03118 */ HB_P_LINEOFFSET, 120,	/* 128 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCOD_ESPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 03173) */
/* 03130 */ HB_P_LINEOFFSET, 121,	/* 129 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 's', 'p', 'e', 'c', 'i', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 03173 */ HB_P_LINEOFFSET, 123,	/* 131 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 03228) */
/* 03185 */ HB_P_LINEOFFSET, 124,	/* 132 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 03228 */ HB_P_LINEOFFSET, 126,	/* 134 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 59,	/* 59 (abs: 03296) */
/* 03239 */ HB_P_LINEOFFSET, 127,	/* 135 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 03296 */ HB_P_LINEOFFSET, 129,	/* 137 */
	HB_P_MESSAGE, 54, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 55,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 53, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03317 */ HB_P_LINEOFFSET, 130,	/* 138 */
	HB_P_MESSAGE, 54, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 55,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03341 */ HB_P_LINEOFFSET, 133,	/* 141 */
	HB_P_MESSAGE, 54, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 55,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 113,	/* 113 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ',', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ',', 'm', 'e', 'r', 'c', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'i', 'n', 'v', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'm', 'e', 'r', 'c', ' ', '=', ' ', 39, 'I', 'M', 'P', 'O', 'S', 'T', 'O', 39, ' ', 'A', 'N', 'D', ' ', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '>', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', '3', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* M_ANO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	' ', 'A', 'N', 'D', ' ', 'u', 'n', 'i', 'd', 'a', 'd', 'e', ' ', '=', ' ', 39, 'U', 'N', 39, ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'm', 'e', 'r', 'c', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 53, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03547 */ HB_P_LINEOFFSET, 134,	/* 142 */
	HB_P_MESSAGE, 54, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 55,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03571 */ HB_P_LINEOFFSET, 135,	/* 143 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* I 0*/
/* 03577 */ HB_P_LINEOFFSET, 136,	/* 144 */
	HB_P_LOCALNEARSETINT, 9, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 53, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 150, 0,	/* 150 (abs: 03744) */
/* 03597 */ HB_P_LINEOFFSET, 137,	/* 145 */
	HB_P_PUSHSYMNEAR, 63,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 03629 */ HB_P_LINEOFFSET, 138,	/* 146 */
	HB_P_MESSAGE, 54, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 55,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'i', 'n', 'v', 'e', ' ', 'S', 'E', 'T', ' ', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* ROUND */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03735 */ HB_P_LINEOFFSET, 139,	/* 147 */
	HB_P_LOCALNEARADDINT, 9, 1, 0,	/* I 1*/
	HB_P_JUMP, 98, 255,	/* -158 (abs: 03583) */
/* 03744 */ HB_P_LINEOFFSET, 140,	/* 148 */
	HB_P_MESSAGE, 54, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 55,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03768 */ HB_P_LINEOFFSET, 143,	/* 151 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 53, 0,	/* ARET */
/* 03776 */ HB_P_LINEOFFSET, 144,	/* 152 */
	HB_P_PUSHSTRSHORT, 91,	/* 91 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'i', 'n', 'v', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'm', 'e', 'r', 'c', ' ', '=', ' ', 39, 'I', 'M', 'P', 'O', 'S', 'T', 'O', 39, ' ', 'A', 'N', 'D', ' ', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '>', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', '3', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* M_ANO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 03910 */ HB_P_LINEOFFSET, 146,	/* 154 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCOD_ESPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 03965) */
/* 03922 */ HB_P_LINEOFFSET, 147,	/* 155 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 's', 'p', 'e', 'c', 'i', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 03965 */ HB_P_LINEOFFSET, 149,	/* 157 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 04020) */
/* 03977 */ HB_P_LINEOFFSET, 150,	/* 158 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 04020 */ HB_P_LINEOFFSET, 152,	/* 160 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 59,	/* 59 (abs: 04088) */
/* 04031 */ HB_P_LINEOFFSET, 153,	/* 161 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 04088 */ HB_P_LINEOFFSET, 155,	/* 163 */
	HB_P_MESSAGE, 54, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 55,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 53, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 04109 */ HB_P_LINEOFFSET, 156,	/* 164 */
	HB_P_MESSAGE, 54, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 55,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04133 */ HB_P_LINEOFFSET, 157,	/* 165 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* I 0*/
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 11, 0,	/* MTOT_VOL */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 2, 0,	/* MTOT_ITEM */
	HB_P_POPLOCALNEAR, 13,	/* MTOT_MERC */
/* 04151 */ HB_P_LINEOFFSET, 158,	/* 166 */
	HB_P_LOCALNEARSETINT, 9, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 53, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 150, 0,	/* 150 (abs: 04318) */
/* 04171 */ HB_P_LINEOFFSET, 159,	/* 167 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_MERC */
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_MERC */
/* 04197 */ HB_P_LINEOFFSET, 160,	/* 168 */
	HB_P_PUSHVARIABLE, 11, 0,	/* MTOT_VOL */
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 11, 0,	/* MTOT_VOL */
/* 04215 */ HB_P_LINEOFFSET, 161,	/* 169 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MTOT_ITEM */
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* MTOT_ITEM */
/* 04224 */ HB_P_LINEOFFSET, 162,	/* 170 */
	HB_P_PUSHSYMNEAR, 64,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 04233 */ HB_P_LINEOFFSET, 163,	/* 171 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 65,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MTOT_VOL */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04267 */ HB_P_LINEOFFSET, 164,	/* 172 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 65,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_MERC */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04301 */ HB_P_LINEOFFSET, 165,	/* 173 */
	HB_P_PUSHSYMNEAR, 64,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 04309 */ HB_P_LINEOFFSET, 166,	/* 174 */
	HB_P_LOCALNEARADDINT, 9, 1, 0,	/* I 1*/
	HB_P_JUMP, 98, 255,	/* -158 (abs: 04157) */
/* 04318 */ HB_P_LINEOFFSET, 167,	/* 175 */
	HB_P_LOCALNEARSETSTR, 21, 2, 0,	/* MALTERE 2*/
	'*', 0, 
/* 04326 */ HB_P_LINEOFFSET, 168,	/* 176 */
	HB_P_PUSHSYMNEAR, 24,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 18, 0,	/* MCOD_BC */
/* 04338 */ HB_P_LINEOFFSET, 169,	/* 177 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 16, 0,	/* MCOD_MERC */
/* 04344 */ HB_P_LINEOFFSET, 170,	/* 178 */
	HB_P_PUSHSYMNEAR, 24,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 17, 0,	/* MMERC */
/* 04356 */ HB_P_LINEOFFSET, 171,	/* 179 */
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* MSALDO_FIS 0*/
	HB_P_PUSHLOCALNEAR, 18,	/* MSALDO_FIS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* MCUST_MERC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* MPC_VLR */
	HB_P_POPLOCALNEAR, 19,	/* MPC_SALDO */
/* 04372 */ HB_P_LINEOFFSET, 172,	/* 180 */
	HB_P_PUSHSYMNEAR, 40,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 41,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 43,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MPC_SALDO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04411) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04416) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'p', 'c', '_', 's', 'a', 'l', 'd', 'o', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 45, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 42, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04466 */ HB_P_LINEOFFSET, 173,	/* 181 */
	HB_P_PUSHSYMNEAR, 40,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 41,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 43,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	20, 0,	/* MPC_VLR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04505) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04510) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'p', 'c', '_', 'v', 'l', 'r', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 45, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 42, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04558 */ HB_P_LINEOFFSET, 174,	/* 182 */
	HB_P_PUSHSYMNEAR, 49,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 42, 0,	/* GETLIST */
/* 04580 */ HB_P_LINEOFFSET, 175,	/* 183 */
	HB_P_PUSHSYMNEAR, 50,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 04594) */
	HB_P_JUMPNEAR, 38,	/* 38 (abs: 04630) */
/* 04594 */ HB_P_LINEOFFSET, 178,	/* 186 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MPC_SALDO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 04616) */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MPC_VLR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_OR,
	HB_P_JUMPFALSE, 251, 248,	/* -1797 (abs: 02819) */
/* 04619 */ HB_P_LINEOFFSET, 179,	/* 187 */
	HB_P_LOCALNEARSETSTR, 21, 2, 0,	/* MALTERE 2*/
	' ', 0, 
	HB_P_JUMP, 240, 248,	/* -1808 (abs: 02819) */
/* 04630 */ HB_P_LINEOFFSET, 182,	/* 190 */
	HB_P_PUSHSYMNEAR, 40,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 41,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 43,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 't', 'i', 'p', 'o', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 32,	/* 32 */
	HB_P_PUSHSYMNEAR, 66,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTIPO_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'1', ',', '2', ',', '3', ',', '4', ',', '5', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04699) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 04700) */
	HB_P_FALSE,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 91,	/* 91 */
	HB_P_PUSHSYMNEAR, 67,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 79,	/* 79 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', '[', '1', ']', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', '-', ' ', '[', '2', ']', ' ', 'M', 'a', 't', 'e', 'r', 'i', 'a', ' ', 'P', 'r', 'i', 'm', 'a', ' ', '-', ' ', '[', '3', ']', ' ', 'I', 's', 'u', 'm', 'o', 's', ' ', '-', ' ', '[', '4', ']', ' ', 'C', 'o', 'n', 's', 'u', 'm', 'o', ' ', '-', ' ', '[', '5', ']', ' ', 'O', 'u', 't', 'r', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 45, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 42, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04808 */ HB_P_LINEOFFSET, 183,	/* 191 */
	HB_P_PUSHSYMNEAR, 40,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 41,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 43,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'l', 'a', 'y', 'o', 'u', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 33, 0,	/* MLAYOUT */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'R', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 45, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 42, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04874 */ HB_P_LINEOFFSET, 184,	/* 192 */
	HB_P_PUSHSYMNEAR, 40,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 41,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 43,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'q', 'u', 'a', 'n', 't', 'd', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 45, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 42, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04931 */ HB_P_LINEOFFSET, 185,	/* 193 */
	HB_P_PUSHSYMNEAR, 49,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 42, 0,	/* GETLIST */
/* 04953 */ HB_P_LINEOFFSET, 186,	/* 194 */
	HB_P_PUSHSYMNEAR, 50,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04968) */
	HB_P_JUMP, 150, 237,	/* -4714 (abs: 00251) */
/* 04968 */ HB_P_LINEOFFSET, 189,	/* 197 */
	HB_P_PUSHVARIABLE, 33, 0,	/* MLAYOUT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 98,	/* 98 (abs: 05076) */
/* 04980 */ HB_P_LINEOFFSET, 190,	/* 198 */
	HB_P_PUSHSYMNEAR, 68,	/* MENSAGEM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 58,	/* 58 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'O', 'r', 'd', 'e', 'm', ' ', 'd', 'o', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', '[', '1', ']', ' ', 'A', 'l', 'f', 'a', 'b', 'e', 't', 'i', 'c', 'a', ' ', ' ', '-', ' ', ' ', '[', '2', ']', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ':', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', ',', '2', 0, 
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 10,	/* MTECLA */
/* 05061 */ HB_P_LINEOFFSET, 191,	/* 199 */
	HB_P_PUSHSYMNEAR, 50,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05076) */
	HB_P_JUMP, 42, 237,	/* -4822 (abs: 00251) */
/* 05076 */ HB_P_LINEOFFSET, 195,	/* 203 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 05082 */ HB_P_LINEOFFSET, 196,	/* 204 */
	HB_P_PUSHSYMNEAR, 36,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'o', ' ', 'f', 'i', 'n', 'a', 'l', ' ', 'd', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', '-', ' ', '[', 'E', 'S', 'C', ']', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 05132 */ HB_P_LINEOFFSET, 197,	/* 205 */
	HB_P_PUSHSYMNEAR, 69,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'R', 'E', 'L', '_', 'I', 'N', 'V', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 05163) */
	HB_P_JUMP, 211, 236,	/* -4909 (abs: 00251) */
/* 05163 */ HB_P_LINEOFFSET, 200,	/* 208 */
	HB_P_PUSHVARIABLE, 33, 0,	/* MLAYOUT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 29, 5,	/* 1309 (abs: 06482) */
/* 05176 */ HB_P_LINEOFFSET, 201,	/* 209 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 53, 0,	/* ARET */
/* 05184 */ HB_P_LINEOFFSET, 202,	/* 210 */
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'i', 'n', 'v', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '>', ' ', '0', ' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 05258 */ HB_P_LINEOFFSET, 203,	/* 211 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTIPO_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 118, 1,	/* 374 (abs: 05642) */
/* 05271 */ HB_P_LINEOFFSET, 204,	/* 212 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', '(', 't', 'i', 'p', 'o', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTIPO_MERC */
	HB_P_ONE,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 05317 */ HB_P_LINEOFFSET, 205,	/* 213 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTIPO_MERC */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 60,	/* 60 (abs: 05395) */
/* 05337 */ HB_P_LINEOFFSET, 206,	/* 214 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', 'O', 'R', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 05353 */ HB_P_LINEOFFSET, 207,	/* 215 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 't', 'i', 'p', 'o', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTIPO_MERC */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 05395 */ HB_P_LINEOFFSET, 209,	/* 217 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTIPO_MERC */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 60,	/* 60 (abs: 05473) */
/* 05415 */ HB_P_LINEOFFSET, 210,	/* 218 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', 'O', 'R', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 05431 */ HB_P_LINEOFFSET, 211,	/* 219 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 't', 'i', 'p', 'o', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTIPO_MERC */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 05473 */ HB_P_LINEOFFSET, 213,	/* 221 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTIPO_MERC */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 60,	/* 60 (abs: 05551) */
/* 05493 */ HB_P_LINEOFFSET, 214,	/* 222 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', 'O', 'R', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 05509 */ HB_P_LINEOFFSET, 215,	/* 223 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 't', 'i', 'p', 'o', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTIPO_MERC */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 05551 */ HB_P_LINEOFFSET, 217,	/* 225 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTIPO_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 60,	/* 60 (abs: 05629) */
/* 05571 */ HB_P_LINEOFFSET, 218,	/* 226 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', 'O', 'R', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 05587 */ HB_P_LINEOFFSET, 219,	/* 227 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 't', 'i', 'p', 'o', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTIPO_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 05629 */ HB_P_LINEOFFSET, 221,	/* 229 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 05642 */ HB_P_LINEOFFSET, 223,	/* 231 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 't', 'i', 'p', 'o', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 05673 */ HB_P_LINEOFFSET, 224,	/* 232 */
	HB_P_MESSAGE, 54, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 55,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 53, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 05694 */ HB_P_LINEOFFSET, 225,	/* 233 */
	HB_P_MESSAGE, 54, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 55,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 05718 */ HB_P_LINEOFFSET, 226,	/* 234 */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 53, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 110,	/* 110 (abs: 05840) */
/* 05732 */ HB_P_LINEOFFSET, 227,	/* 235 */
	HB_P_PUSHSYMNEAR, 71,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'c', 'o', 'm', ' ', 's', 'a', 'l', 'd', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 05787 */ HB_P_LINEOFFSET, 228,	/* 236 */
	HB_P_PUSHSYMNEAR, 72,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 05796 */ HB_P_LINEOFFSET, 229,	/* 237 */
	HB_P_PUSHSYMNEAR, 73,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 73,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 73,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 46, 234,	/* -5586 (abs: 00251) */
/* 05840 */ HB_P_LINEOFFSET, 232,	/* 240 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* I 0*/
/* 05846 */ HB_P_LINEOFFSET, 233,	/* 241 */
	HB_P_LOCALNEARSETINT, 9, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 53, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 36, 10,	/* 2596 (abs: 08459) */
/* 05866 */ HB_P_LINEOFFSET, 234,	/* 242 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'7', '4', 0, 
	HB_P_DOSHORT, 1,
/* 05892 */ HB_P_LINEOFFSET, 235,	/* 243 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 35, 0,	/* MDATA_INVE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 35, 0,	/* MDATA_INVE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 35, 0,	/* MDATA_INVE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05961 */ HB_P_LINEOFFSET, 236,	/* 244 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06001 */ HB_P_LINEOFFSET, 237,	/* 245 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ONE,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06072 */ HB_P_LINEOFFSET, 238,	/* 246 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ONE,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06163 */ HB_P_LINEOFFSET, 239,	/* 247 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
/* 06186 */ HB_P_LINEOFFSET, 240,	/* 248 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 76, 0,	/* MCGC_FIRM */
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 76, 0,	/* MCGC_FIRM */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 76, 0,	/* MCGC_FIRM */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 76, 0,	/* MCGC_FIRM */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 76, 0,	/* MCGC_FIRM */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06268 */ HB_P_LINEOFFSET, 241,	/* 249 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 77, 0,	/* MINSC_FIRM */
	HB_P_LEFT, 14, 0,	/* 14 */
	HB_P_DOSHORT, 1,
/* 06293 */ HB_P_LINEOFFSET, 242,	/* 250 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 78, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 06320 */ HB_P_LINEOFFSET, 243,	/* 251 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 81,	/* 81 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 06346 */ HB_P_LINEOFFSET, 244,	/* 252 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 126,	/* 126 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 06374 */ HB_P_LINEOFFSET, 245,	/* 253 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 127,	/* 127 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ONE,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSYMNEAR, 70,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06445 */ HB_P_LINEOFFSET, 246,	/* 254 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHINT, 141, 0,	/* 141 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06473 */ HB_P_LINEOFFSET, 247,	/* 255 */
	HB_P_LOCALNEARADDINT, 9, 1, 0,	/* I 1*/
	HB_P_JUMP, 141, 253,	/* -627 (abs: 05852) */
/* 06482 */ HB_P_LINEOFFSET, 249,	/* 257 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 53, 0,	/* ARET */
/* 06490 */ HB_P_LINEOFFSET, 250,	/* 258 */
	HB_P_PUSHSTRSHORT, 91,	/* 91 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'i', 'n', 'v', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'm', 'e', 'r', 'c', ' ', '=', ' ', 39, 'I', 'M', 'P', 'O', 'S', 'T', 'O', 39, ' ', 'A', 'N', 'D', ' ', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '>', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', '3', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* M_ANO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 06624 */ HB_P_LINEOFFSET, 251,	/* 259 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCOD_ESPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 06679) */
/* 06636 */ HB_P_LINEOFFSET, 252,	/* 260 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 's', 'p', 'e', 'c', 'i', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 06679 */ HB_P_LINEOFFSET, 254,	/* 262 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 06734) */
/* 06691 */ HB_P_LINEOFFSET, 255,	/* 263 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 06734 */ HB_P_LINE, 9, 1,	/* 265 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 60,	/* 60 (abs: 06804) */
/* 06746 */ HB_P_LINE, 10, 1,	/* 266 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 06804 */ HB_P_LINE, 12, 1,	/* 268 */
	HB_P_PUSHLOCALNEAR, 10,	/* MTECLA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 06845) */
/* 06816 */ HB_P_LINE, 13, 1,	/* 269 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'm', 'e', 'r', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 06876) */
/* 06845 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 06876 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_MESSAGE, 54, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 55,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 53, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 06898 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_MESSAGE, 54, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 55,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 06923 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* I 0*/
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 11, 0,	/* MTOT_VOL */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 2, 0,	/* MTOT_ITEM */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_MERC */
	HB_P_POPLOCALNEAR, 15,	/* MSALDO */
/* 06945 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 06952 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_LOCALNEARSETINT, 9, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 53, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 18, 3,	/* 786 (abs: 07756) */
/* 06973 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_ONE,
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 06993) */
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 142, 1,	/* 398 (abs: 07391) */
/* 06996 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 07008 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 07027) */
/* 07019 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 79,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07027 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHSYMNEAR, 80,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 21, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_DOSHORT, 2,
/* 07042 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'I', 'N', 'V', 'E', 'N', 'T', 'A', 'R', 'I', 'O', ' ', 'D', 'O', ' ', 'A', 'N', 'O', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 16,	/* M_ANO */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07086 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 80,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 21, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 07101 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 80,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 21, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 07116 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'P', 'a', 'g', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07159 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 07184 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 07213 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 07245 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 07271 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', ' ', 'S', 'a', 'l', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 07301 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 07334 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 76,	/* 76 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 07366 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 07391 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHSYMNEAR, 40,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 81,	/* DISPOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07432 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 07463 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 82,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 07498 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 82,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 07533 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 82,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 83,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07584 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 82,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 65,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 66,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 78, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 97,	/* 97 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 07632 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 82,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 65,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSYMNEAR, 66,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 78, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 97,	/* 97 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 07690 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_MERC */
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_MERC */
/* 07717 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MTOT_ITEM */
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* MTOT_ITEM */
/* 07727 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHVARIABLE, 11, 0,	/* MTOT_VOL */
	HB_P_PUSHMEMVAR, 53, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 11, 0,	/* MTOT_VOL */
/* 07746 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_LOCALNEARADDINT, 9, 1, 0,	/* I 1*/
	HB_P_JUMP, 230, 252,	/* -794 (abs: 06959) */
/* 07756 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 86, 1,	/* 342 (abs: 08109) */
/* 07770 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHSYMNEAR, 79,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07778 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 07788 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHSYMNEAR, 80,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 21, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_DOSHORT, 2,
/* 07803 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'I', 'N', 'V', 'E', 'N', 'T', 'A', 'R', 'I', 'O', ' ', 'D', 'O', ' ', 'A', 'N', 'O', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 16,	/* M_ANO */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07847 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHSYMNEAR, 80,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 21, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 07862 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHSYMNEAR, 80,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 21, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 07877 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 07902 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 07931 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 07963 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 07989 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', ' ', 'S', 'a', 'l', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 08019 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 08052 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 76,	/* 76 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 08084 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 08109 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 08134 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'I', 't', 'e', 'm', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08173 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 82,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 83,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTOT_ITEM */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08217 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'T', 'o', 't', 'a', 'l', ' ', 'G', 'e', 'r', 'a', 'l', '.', '.', ':', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08268 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 82,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 83,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MTOT_VOL */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08315 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 82,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'V', 'a', 'l', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08350 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 37,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 82,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 83,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_MERC */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08399 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_PUSHSYMNEAR, 79,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08407 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 72,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 08417 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHSYMNEAR, 73,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 73,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 73,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 08459 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHSYMNEAR, 84,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'R', 'E', 'L', '_', 'I', 'N', 'V', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 217, 223,	/* -8231 (abs: 00251) */
	HB_P_ENDPROC
/* 08486 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

