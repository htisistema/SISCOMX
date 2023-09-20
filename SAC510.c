/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC510.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HELIO\SIACHB\TESTE\SAC510.PRG /q /oC:\helio\siachb\SAC510.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2020.05.12 16:21:04 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC510.PRG"

HB_FUNC( SAC510 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_EMP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( V_GRU_COD );
HB_FUNC_EXTERN( VER_SGRU );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( __MVXRELEASE );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( VER_ESPE );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC510 )
{ "SAC510", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC510 )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_PARAM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ARET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTRACO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTOT_ITEM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TELAPRINT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_TAB", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSALDO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFORNECE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MUF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_ESPE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDESC_SUB", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCODEMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_EMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_EMP )}, NULL },
{ "MMULT_EMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "V_GRU_COD", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_GRU_COD )}, NULL },
{ "VER_SGRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SGRU )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "__MVXRELEASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVXRELEASE )}, NULL },
{ "GRUP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "VER_ESPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_ESPE )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC510 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC510
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC510 = hb_vm_SymbolInit_SAC510;
   #pragma data_seg()
#endif

HB_FUNC( SAC510 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 19, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 9, 0,	/* 9 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '5', '1', '0', 0, 
	HB_P_LOCALNEARSETSTR, 2, 38, 0,	/* MTITULO 38*/
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'T', 'A', 'B', 'E', 'L', 'A', ' ', 'P', 'R', 'E', 'C', 'O', ' ', 'P', '/', 'T', 'E', 'R', 'M', 'I', 'N', 'A', 'I', 'S', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 13,	/* M_ARQ */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 14,	/* M_ARQ1 */
	HB_P_LOCALNEARSETSTR, 18, 2, 0,	/* MT_PRECO 2*/
	'V', 0, 
	HB_P_LOCALNEARSETINT, 19, 0, 0,	/* MCONT 0*/
/* 00079 */ HB_P_LINEOFFSET, 5,	/* 14 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 20,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 20,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 22,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* CCOMM */
	HB_P_PUSHSYMNEAR, 2,	/* M_PARAM */
	HB_P_PUSHSYMNEAR, 3,	/* ARET */
	HB_P_PUSHSYMNEAR, 4,	/* MTRACO */
	HB_P_PUSHSYMNEAR, 5,	/* MTOT_ITEM */
	HB_P_PUSHSYMNEAR, 6,	/* TELAPRINT */
	HB_P_PUSHSYMNEAR, 7,	/* MTIT */
	HB_P_PUSHSYMNEAR, 8,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 9,	/* MPAG */
	HB_P_PUSHSYMNEAR, 10,	/* MTIPO_TAB */
	HB_P_PUSHSYMNEAR, 11,	/* MSALDO */
	HB_P_PUSHSYMNEAR, 12,	/* MFORNECE */
	HB_P_PUSHSYMNEAR, 13,	/* MUF */
	HB_P_PUSHSYMNEAR, 14,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 15,	/* MCOD_ESPE */
	HB_P_PUSHSYMNEAR, 16,	/* MDESC_SUB */
	HB_P_PUSHSYMNEAR, 17,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 18,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 19,	/* MARQ */
	HB_P_PUSHSYMNEAR, 21,	/* MCODEMP */
	HB_P_DOSHORT, 20,
	HB_P_POPVARIABLE, 21, 0,	/* MCODEMP */
	HB_P_POPVARIABLE, 19, 0,	/* MARQ */
	HB_P_POPVARIABLE, 18, 0,	/* MIMP_TIPO */
	HB_P_POPVARIABLE, 3, 0,	/* ARET */
	HB_P_POPVARIABLE, 2, 0,	/* M_PARAM */
/* 00162 */ HB_P_LINEOFFSET, 7,	/* 16 */
	HB_P_PUSHSYMNEAR, 23,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '6', 0, 
	HB_P_PUSHMEMVAR, 24, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00198) */
/* 00193 */ HB_P_LINEOFFSET, 8,	/* 17 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00198 */ HB_P_LINEOFFSET, 10,	/* 19 */
	HB_P_PUSHSYMNEAR, 25,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 4, 0,	/* MTRACO */
/* 00215 */ HB_P_LINEOFFSET, 11,	/* 20 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_POPLOCALNEAR, 4,	/* LCI */
/* 00225 */ HB_P_LINEOFFSET, 12,	/* 21 */
	HB_P_LOCALNEARSETINT, 6, 10, 0,	/* LBA 10*/
/* 00231 */ HB_P_LINEOFFSET, 13,	/* 22 */
	HB_P_LOCALNEARSETINT, 7, 79, 0,	/* CBA 79*/
/* 00237 */ HB_P_LINEOFFSET, 15,	/* 24 */
	HB_P_PUSHSYMNEAR, 26,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'e', 's', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'e', 's', 'p', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00266) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00266 */ HB_P_LINEOFFSET, 16,	/* 25 */
	HB_P_PUSHSYMNEAR, 26,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00295) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00295 */ HB_P_LINEOFFSET, 17,	/* 26 */
	HB_P_PUSHSYMNEAR, 26,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'g', 'r', 'u', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00325) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00325 */ HB_P_LINEOFFSET, 19,	/* 28 */
	HB_P_PUSHSYMNEAR, 27,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_DOSHORT, 5,
/* 00342 */ HB_P_LINEOFFSET, 21,	/* 30 */
	HB_P_PUSHSYMNEAR, 28,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00351 */ HB_P_LINEOFFSET, 22,	/* 31 */
	HB_P_LOCALNEARSETSTR, 18, 2, 0,	/* MT_PRECO 2*/
	'V', 0, 
/* 00359 */ HB_P_LINEOFFSET, 23,	/* 32 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_POPVARIABLE, 10, 0,	/* MTIPO_TAB */
/* 00368 */ HB_P_LINEOFFSET, 24,	/* 33 */
	HB_P_PUSHSYMNEAR, 20,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* MGRUPO1 */
/* 00379 */ HB_P_LINEOFFSET, 25,	/* 34 */
	HB_P_PUSHSYMNEAR, 20,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MSUB_GRUPO */
/* 00390 */ HB_P_LINEOFFSET, 26,	/* 35 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 15, 0,	/* MCOD_ESPE */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 14, 0,	/* MCOD_FORN */
	HB_P_POPVARIABLE, 5, 0,	/* MTOT_ITEM */
/* 00404 */ HB_P_LINEOFFSET, 27,	/* 36 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_POPVARIABLE, 11, 0,	/* MSALDO */
/* 00413 */ HB_P_LINEOFFSET, 28,	/* 37 */
	HB_P_PUSHSYMNEAR, 20,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 12, 0,	/* MFORNECE */
/* 00425 */ HB_P_LINEOFFSET, 29,	/* 38 */
	HB_P_PUSHSYMNEAR, 29,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 68,	/* 68 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', 'o', 'u', ' ', 'e', 'm', ' ', 'B', 'r', 'a', 'n', 'c', 'o', ' ', 'p', '/', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 't', 'o', 'd', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00502 */ HB_P_LINEOFFSET, 30,	/* 39 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00543 */ HB_P_LINEOFFSET, 31,	/* 40 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00584 */ HB_P_LINEOFFSET, 32,	/* 41 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'S', 'u', 'b', '-', 'G', 'r', 'u', 'p', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00625 */ HB_P_LINEOFFSET, 33,	/* 42 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'T', 'a', 'b', 'e', 'l', 'a', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00666 */ HB_P_LINEOFFSET, 34,	/* 43 */
	HB_P_PUSHSYMNEAR, 32,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00675 */ HB_P_LINEOFFSET, 35,	/* 44 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'E', 'x', '.', ':', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', ' ', '[', 'S', ']', 'e', 'm', ' ', 'S', 'a', 'l', 'd', 'o', ' ', '-', ' ', '[', 'C', ']', 'o', 'm', ' ', 'S', 'a', 'l', 'd', 'o', ' ', '-', ' ', '[', 'G', ']', 'e', 'r', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 00750 */ HB_P_LINEOFFSET, 36,	/* 45 */
	HB_P_PUSHSYMNEAR, 33,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 7,	/* CBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00778 */ HB_P_LINEOFFSET, 37,	/* 46 */
	HB_P_PUSHSYMNEAR, 32,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00786 */ HB_P_LINEOFFSET, 38,	/* 47 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'I', 'm', 'p', '.', 's', 'a', 'l', 'd', 'o', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00827 */ HB_P_LINEOFFSET, 39,	/* 48 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00868 */ HB_P_LINEOFFSET, 40,	/* 49 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'E', 's', 'p', 'e', 'c', 'i', 'e', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00909 */ HB_P_LINEOFFSET, 41,	/* 50 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'T', 'i', 'p', 'o', ' ', 'P', 'r', 'e', 'c', 'o', ' ', '[', 'V', ']', 'a', 'r', 'e', 'j', 'o', ' ', '[', 'A', ']', 't', 'a', 'c', 'a', 'd', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00964 */ HB_P_LINEOFFSET, 43,	/* 52 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'e', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 35, 0,	/* 35 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	4, 0,	/* LCI */
	5, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 38,	/* VER_EMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 21, 0,	/* MCODEMP */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 23, 0,	/* 23*/
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHVARIABLE, 39, 0,	/* MMULT_EMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 40, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01069 */ HB_P_LINEOFFSET, 44,	/* 53 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MGRUPO1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01114) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01119) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'g', 'r', 'u', 'p', 'o', '1', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 45, 0,	/* 45 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	8, 0,	/* MGRUPO1 */
	4, 0,	/* LCI */
	5, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 41,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01161) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 21,	/* 21 (abs: 01180) */
	HB_P_PUSHSYMNEAR, 42,	/* V_GRU_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 23, 0,	/* 23*/
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 40, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01198 */ HB_P_LINEOFFSET, 45,	/* 54 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MSUB_GRUPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01243) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01248) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 's', 'u', 'b', '_', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 45, 0,	/* 45 */
	0, 0,	/* number of local parameters (0) */
	4, 0,	/* number of local variables (4) */
	8, 0,	/* MGRUPO1 */
	10, 0,	/* MSUB_GRUPO */
	4, 0,	/* LCI */
	5, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 43,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 44,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 252,	/* localvar4 */
	HB_P_ADDINT, 23, 0,	/* 23*/
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MGRUPO1 */
	HB_P_PUSHSYMNEAR, 41,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 40, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01346 */ HB_P_LINEOFFSET, 46,	/* 55 */
	HB_P_PUSHSYMNEAR, 45,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 36, 0,	/* GETLIST */
/* 01368 */ HB_P_LINEOFFSET, 47,	/* 56 */
	HB_P_PUSHSYMNEAR, 46,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 01397) */
/* 01380 */ HB_P_LINEOFFSET, 48,	/* 57 */
	HB_P_PUSHSYMNEAR, 47,	/* __MVXRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'p', 'r', 'g', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 123, 15,	/* 3963 (abs: 05357) */
/* 01397 */ HB_P_LINEOFFSET, 51,	/* 60 */
	HB_P_PUSHSYMNEAR, 41,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MSUB_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 01417) */
/* 01408 */ HB_P_LINEOFFSET, 52,	/* 61 */
	HB_P_PUSHSYMNEAR, 48,	/* GRUP */
	HB_P_PUSHALIASEDFIELDNEAR, 49,	/* MERC */
	HB_P_POPVARIABLE, 16, 0,	/* MDESC_SUB */
/* 01417 */ HB_P_LINEOFFSET, 54,	/* 63 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 't', 'a', 'b', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MTIPO_TAB */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', ',', 'C', ',', 'G', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 40, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01493 */ HB_P_LINEOFFSET, 55,	/* 64 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 's', 'a', 'l', 'd', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 11, 0,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 40, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01564 */ HB_P_LINEOFFSET, 56,	/* 65 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	4, 0,	/* LCI */
	5, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 50,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* MCOD_FORN */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 24, 0,	/* 24*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 40, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01657 */ HB_P_LINEOFFSET, 57,	/* 66 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'e', 's', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 32, 0,	/* 32 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	4, 0,	/* LCI */
	5, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 51,	/* VER_ESPE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCOD_ESPE */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 24, 0,	/* 24*/
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 40, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01752 */ HB_P_LINEOFFSET, 58,	/* 67 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 33, 0,	/* 33*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	18, 0,	/* MT_PRECO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01797) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01802) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 't', '_', 'p', 'r', 'e', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	18, 0,	/* MT_PRECO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'A', ',', 'V', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 40, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01855 */ HB_P_LINEOFFSET, 59,	/* 68 */
	HB_P_PUSHSYMNEAR, 45,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 36, 0,	/* GETLIST */
/* 01877 */ HB_P_LINEOFFSET, 60,	/* 69 */
	HB_P_PUSHSYMNEAR, 46,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01892) */
	HB_P_JUMP, 140, 13,	/* 3468 (abs: 05357) */
/* 01892 */ HB_P_LINEOFFSET, 63,	/* 72 */
	HB_P_PUSHMEMVAR, 52, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 17, 0,	/* MTIPO_IMP */
/* 01905 */ HB_P_LINEOFFSET, 64,	/* 73 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 13,	/* M_ARQ */
/* 01912 */ HB_P_LINEOFFSET, 65,	/* 74 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 14,	/* M_ARQ1 */
/* 01919 */ HB_P_LINEOFFSET, 66,	/* 75 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* I 0*/
/* 01925 */ HB_P_LINEOFFSET, 67,	/* 76 */
	HB_P_PUSHSYMNEAR, 29,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'm', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'c', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'o', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01990 */ HB_P_LINEOFFSET, 68,	/* 77 */
	HB_P_PUSHSTRSHORT, 65,	/* 65 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'I', 'M', 'P', 'O', 'S', 'T', 'O', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 76,	/* 76 */
	' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'd', 'i', 's', 'p', ' ', '=', ' ', 39, 'N', 39, ' ', 'A', 'N', 'D', ' ', '(', 'd', 'e', 's', 'c', 'o', 'n', 't', ' ', '=', ' ', 39, 'N', 39, ' ', 'O', 'R', ' ', 'd', 'e', 's', 'c', 'o', 'n', 't', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'd', 'e', 's', 'c', 'o', 'n', 't', ' ', '=', ' ', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 1, 0,	/* CCOMM */
/* 02157 */ HB_P_LINEOFFSET, 69,	/* 78 */
	HB_P_PUSHSYMNEAR, 41,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCOD_ESPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 02212) */
/* 02169 */ HB_P_LINEOFFSET, 70,	/* 79 */
	HB_P_PUSHVARIABLE, 1, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 's', 'p', 'e', 'c', 'i', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 1, 0,	/* CCOMM */
/* 02212 */ HB_P_LINEOFFSET, 72,	/* 81 */
	HB_P_PUSHSYMNEAR, 41,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 02267) */
/* 02224 */ HB_P_LINEOFFSET, 73,	/* 82 */
	HB_P_PUSHVARIABLE, 1, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 1, 0,	/* CCOMM */
/* 02267 */ HB_P_LINEOFFSET, 75,	/* 84 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MTIPO_TAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 02316) */
/* 02279 */ HB_P_LINEOFFSET, 76,	/* 85 */
	HB_P_PUSHVARIABLE, 1, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 1, 0,	/* CCOMM */
/* 02316 */ HB_P_LINEOFFSET, 78,	/* 87 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MTIPO_TAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 02364) */
/* 02328 */ HB_P_LINEOFFSET, 79,	/* 88 */
	HB_P_PUSHVARIABLE, 1, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '>', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 1, 0,	/* CCOMM */
/* 02364 */ HB_P_LINEOFFSET, 81,	/* 90 */
	HB_P_PUSHSYMNEAR, 41,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 21, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 02412) */
/* 02376 */ HB_P_LINEOFFSET, 82,	/* 91 */
	HB_P_PUSHVARIABLE, 1, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 21, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 1, 0,	/* CCOMM */
/* 02412 */ HB_P_LINEOFFSET, 84,	/* 93 */
	HB_P_PUSHSYMNEAR, 41,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 57,	/* 57 (abs: 02478) */
/* 02423 */ HB_P_LINEOFFSET, 85,	/* 94 */
	HB_P_PUSHVARIABLE, 1, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 1, 0,	/* CCOMM */
/* 02478 */ HB_P_LINEOFFSET, 87,	/* 96 */
	HB_P_PUSHSYMNEAR, 41,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MSUB_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 53,	/* 53 (abs: 02540) */
/* 02489 */ HB_P_LINEOFFSET, 88,	/* 97 */
	HB_P_PUSHVARIABLE, 1, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 55,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MSUB_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 1, 0,	/* CCOMM */
/* 02540 */ HB_P_LINEOFFSET, 90,	/* 99 */
	HB_P_PUSHVARIABLE, 1, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'm', 'e', 'r', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 1, 0,	/* CCOMM */
/* 02566 */ HB_P_LINEOFFSET, 91,	/* 100 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 3, 0,	/* ARET */
/* 02574 */ HB_P_LINEOFFSET, 92,	/* 101 */
	HB_P_MESSAGE, 56, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 57,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 1, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 13, 0,	/* M_ARQ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02595 */ HB_P_LINEOFFSET, 93,	/* 102 */
	HB_P_PUSHSYMNEAR, 58,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 02654) */
/* 02608 */ HB_P_LINEOFFSET, 94,	/* 103 */
	HB_P_PUSHSYMNEAR, 59,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', 'a', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 251, 246,	/* -2309 (abs: 00342) */
/* 02654 */ HB_P_LINEOFFSET, 97,	/* 106 */
	HB_P_PUSHSYMNEAR, 29,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'E', 's', 'p', 'e', 'r', 'e', ' ', 'o', ' ', 'F', 'i', 'n', 'a', 'l', ' ', 'd', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'O', 'K', ' ', '-', ' ', '[', 'E', 'S', 'C', ']', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 02711 */ HB_P_LINEOFFSET, 98,	/* 107 */
	HB_P_PUSHSYMNEAR, 60,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'A', 'B', '_', 'T', 'E', 'R', 'M', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 02742) */
	HB_P_JUMP, 163, 246,	/* -2397 (abs: 00342) */
/* 02742 */ HB_P_LINEOFFSET, 101,	/* 110 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 9, 0,	/* MPAG */
/* 02748 */ HB_P_LINEOFFSET, 102,	/* 111 */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'T', 'a', 'b', 'e', 'l', 'a', ' ', 'd', 'e', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', 's', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', 's', 0, 
	HB_P_POPVARIABLE, 7, 0,	/* MTIT */
/* 02788 */ HB_P_LINEOFFSET, 103,	/* 112 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'p', '/', ' ', 'T', 'e', 'r', 'm', 'i', 'n', 'a', 'i', 's', 0, 
	HB_P_POPVARIABLE, 8, 0,	/* MTIPO */
/* 02808 */ HB_P_LINEOFFSET, 104,	/* 113 */
	HB_P_LOCALNEARSETINT, 15, 0, 0,	/* Y 0*/
	HB_P_PUSHLOCALNEAR, 15,	/* Y */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* MCONT */
	HB_P_POPLOCALNEAR, 17,	/* X */
/* 02821 */ HB_P_LINEOFFSET, 105,	/* 114 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 3, 0,	/* ARET */
/* 02829 */ HB_P_LINEOFFSET, 106,	/* 115 */
	HB_P_LOCALNEARSETINT, 17, 1, 0,	/* X 1*/
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_PUSHSYMNEAR, 58,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 141, 5,	/* 1421 (abs: 04266) */
/* 02848 */ HB_P_LINEOFFSET, 107,	/* 116 */
	HB_P_PUSHSYMNEAR, 61,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 02865 */ HB_P_LINEOFFSET, 112,	/* 121 */
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 13,	/* M_ARQ */
	HB_P_PUSHLOCALNEAR, 17,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 50, 0,	/* 50 */
	HB_P_DOSHORT, 2,
/* 03277 */ HB_P_LINEOFFSET, 113,	/* 122 */
	HB_P_LOCALNEARADDINT, 15, 1, 0,	/* Y 1*/
/* 03283 */ HB_P_LINEOFFSET, 114,	/* 123 */
	HB_P_PUSHLOCALNEAR, 15,	/* Y */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03295) */
	HB_P_JUMP, 199, 3,	/* 967 (abs: 04259) */
/* 03295 */ HB_P_LINEOFFSET, 117,	/* 126 */
	HB_P_LOCALNEARSETINT, 15, 0, 0,	/* Y 0*/
/* 03301 */ HB_P_LINEOFFSET, 119,	/* 128 */
	HB_P_LOCALNEARSETINT, 19, 0, 0,	/* MCONT 0*/
/* 03307 */ HB_P_LINEOFFSET, 120,	/* 129 */
	HB_P_LOCALNEARSETINT, 19, 1, 0,	/* MCONT 1*/
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 163, 3,	/* 931 (abs: 04249) */
/* 03321 */ HB_P_LINEOFFSET, 121,	/* 130 */
	HB_P_PUSHVARIABLE, 9, 0,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 03340) */
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 70, 1,	/* 326 (abs: 03666) */
/* 03343 */ HB_P_LINEOFFSET, 122,	/* 131 */
	HB_P_PUSHVARIABLE, 9, 0,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 03359) */
/* 03352 */ HB_P_LINEOFFSET, 123,	/* 132 */
	HB_P_PUSHSYMNEAR, 63,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03359 */ HB_P_LINEOFFSET, 125,	/* 134 */
	HB_P_PUSHVARIABLE, 9, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 9, 0,	/* MPAG */
/* 03368 */ HB_P_LINEOFFSET, 126,	/* 135 */
	HB_P_PUSHSYMNEAR, 64,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 8, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 03386 */ HB_P_LINEOFFSET, 127,	/* 136 */
	HB_P_PUSHSYMNEAR, 65,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03400 */ HB_P_LINEOFFSET, 128,	/* 137 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03428 */ HB_P_LINEOFFSET, 129,	/* 138 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03459 */ HB_P_LINEOFFSET, 130,	/* 139 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 03483 */ HB_P_LINEOFFSET, 132,	/* 141 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', 'r', 'e', 'c', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03510 */ HB_P_LINEOFFSET, 133,	/* 142 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 68,	/* 68 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'|', 0, 
	HB_P_DOSHORT, 1,
/* 03533 */ HB_P_LINEOFFSET, 134,	/* 143 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03559 */ HB_P_LINEOFFSET, 135,	/* 144 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 78,	/* 78 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03590 */ HB_P_LINEOFFSET, 136,	/* 145 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 119,	/* 119 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 03614 */ HB_P_LINEOFFSET, 137,	/* 146 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHINT, 129, 0,	/* 129 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', 'r', 'e', 'c', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03642 */ HB_P_LINEOFFSET, 138,	/* 147 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 03666 */ HB_P_LINEOFFSET, 140,	/* 149 */
	HB_P_PUSHSYMNEAR, 65,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03680 */ HB_P_LINEOFFSET, 141,	/* 150 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03710 */ HB_P_LINEOFFSET, 142,	/* 151 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 66,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03744 */ HB_P_LINEOFFSET, 143,	/* 152 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 66,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03778 */ HB_P_LINEOFFSET, 144,	/* 153 */
	HB_P_PUSHLOCALNEAR, 18,	/* MT_PRECO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 03838) */
/* 03789 */ HB_P_LINEOFFSET, 145,	/* 154 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 66,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 67,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 92,	/* 92 (abs: 03928) */
/* 03838 */ HB_P_LINEOFFSET, 147,	/* 156 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 66,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 67,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 13,	/* 13 (abs: 03888) */
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ARRAYPUSH,
	HB_P_JUMPNEAR, 27,	/* 27 (abs: 03913) */
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03928 */ HB_P_LINEOFFSET, 149,	/* 158 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 68,	/* 68 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'|', 0, 
	HB_P_DOSHORT, 1,
/* 03951 */ HB_P_LINEOFFSET, 151,	/* 160 */
	HB_P_PUSHSYMNEAR, 58,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ADDINT, 50, 0,	/* 50*/
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 17, 1,	/* 273 (abs: 04240) */
/* 03970 */ HB_P_LINEOFFSET, 152,	/* 161 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ADDINT, 50, 0,	/* 50*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04001 */ HB_P_LINEOFFSET, 153,	/* 162 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 66,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ADDINT, 50, 0,	/* 50*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04038 */ HB_P_LINEOFFSET, 154,	/* 163 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 66,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ADDINT, 50, 0,	/* 50*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04075 */ HB_P_LINEOFFSET, 155,	/* 164 */
	HB_P_PUSHLOCALNEAR, 18,	/* MT_PRECO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 54,	/* 54 (abs: 04138) */
/* 04086 */ HB_P_LINEOFFSET, 156,	/* 165 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 66,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 67,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ADDINT, 50, 0,	/* 50*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 104,	/* 104 (abs: 04240) */
/* 04138 */ HB_P_LINEOFFSET, 158,	/* 167 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 66,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 67,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ADDINT, 50, 0,	/* 50*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 16,	/* 16 (abs: 04194) */
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ADDINT, 50, 0,	/* 50*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ARRAYPUSH,
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 04225) */
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ADDINT, 50, 0,	/* 50*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ADDINT, 50, 0,	/* 50*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04240 */ HB_P_LINEOFFSET, 161,	/* 170 */
	HB_P_LOCALNEARADDINT, 19, 1, 0,	/* MCONT 1*/
	HB_P_JUMP, 91, 252,	/* -933 (abs: 03313) */
/* 04249 */ HB_P_LINEOFFSET, 162,	/* 171 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 3, 0,	/* ARET */
/* 04257 */ HB_P_LINEOFFSET, 163,	/* 172 */
	HB_P_LOCALNEARADDINT, 17, 1, 0,	/* X 1*/
	HB_P_JUMP, 108, 250,	/* -1428 (abs: 02835) */
/* 04266 */ HB_P_LINEOFFSET, 165,	/* 174 */
	HB_P_PUSHSYMNEAR, 58,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 201, 3,	/* 969 (abs: 05247) */
/* 04281 */ HB_P_LINEOFFSET, 166,	/* 175 */
	HB_P_LOCALNEARSETINT, 19, 0, 0,	/* MCONT 0*/
/* 04287 */ HB_P_LINEOFFSET, 167,	/* 176 */
	HB_P_LOCALNEARSETINT, 19, 1, 0,	/* MCONT 1*/
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_PUSHSYMNEAR, 58,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 175, 3,	/* 943 (abs: 05247) */
/* 04307 */ HB_P_LINEOFFSET, 168,	/* 177 */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04319) */
	HB_P_JUMP, 163, 3,	/* 931 (abs: 05247) */
/* 04319 */ HB_P_LINEOFFSET, 171,	/* 180 */
	HB_P_PUSHVARIABLE, 9, 0,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 04338) */
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 70, 1,	/* 326 (abs: 04664) */
/* 04341 */ HB_P_LINEOFFSET, 172,	/* 181 */
	HB_P_PUSHVARIABLE, 9, 0,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 04357) */
/* 04350 */ HB_P_LINEOFFSET, 173,	/* 182 */
	HB_P_PUSHSYMNEAR, 63,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04357 */ HB_P_LINEOFFSET, 175,	/* 184 */
	HB_P_PUSHVARIABLE, 9, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 9, 0,	/* MPAG */
/* 04366 */ HB_P_LINEOFFSET, 176,	/* 185 */
	HB_P_PUSHSYMNEAR, 64,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 8, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 04384 */ HB_P_LINEOFFSET, 177,	/* 186 */
	HB_P_PUSHSYMNEAR, 65,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 04398 */ HB_P_LINEOFFSET, 178,	/* 187 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 04426 */ HB_P_LINEOFFSET, 179,	/* 188 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 04457 */ HB_P_LINEOFFSET, 180,	/* 189 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 04481 */ HB_P_LINEOFFSET, 182,	/* 191 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', 'r', 'e', 'c', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 04508 */ HB_P_LINEOFFSET, 183,	/* 192 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 68,	/* 68 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'|', 0, 
	HB_P_DOSHORT, 1,
/* 04531 */ HB_P_LINEOFFSET, 184,	/* 193 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 04557 */ HB_P_LINEOFFSET, 185,	/* 194 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 78,	/* 78 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 04588 */ HB_P_LINEOFFSET, 186,	/* 195 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 119,	/* 119 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 04612 */ HB_P_LINEOFFSET, 187,	/* 196 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHINT, 129, 0,	/* 129 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', 'r', 'e', 'c', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 04640 */ HB_P_LINEOFFSET, 188,	/* 197 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 04664 */ HB_P_LINEOFFSET, 190,	/* 199 */
	HB_P_PUSHSYMNEAR, 65,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 04678 */ HB_P_LINEOFFSET, 191,	/* 200 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04708 */ HB_P_LINEOFFSET, 192,	/* 201 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 66,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04742 */ HB_P_LINEOFFSET, 193,	/* 202 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 66,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04776 */ HB_P_LINEOFFSET, 194,	/* 203 */
	HB_P_PUSHLOCALNEAR, 18,	/* MT_PRECO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 04836) */
/* 04787 */ HB_P_LINEOFFSET, 195,	/* 204 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 66,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 67,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 92,	/* 92 (abs: 04926) */
/* 04836 */ HB_P_LINEOFFSET, 197,	/* 206 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 66,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 67,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 13,	/* 13 (abs: 04886) */
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ARRAYPUSH,
	HB_P_JUMPNEAR, 27,	/* 27 (abs: 04911) */
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04926 */ HB_P_LINEOFFSET, 199,	/* 208 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 68,	/* 68 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'|', 0, 
	HB_P_DOSHORT, 1,
/* 04949 */ HB_P_LINEOFFSET, 201,	/* 210 */
	HB_P_PUSHSYMNEAR, 58,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ADDINT, 50, 0,	/* 50*/
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 17, 1,	/* 273 (abs: 05238) */
/* 04968 */ HB_P_LINEOFFSET, 202,	/* 211 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ADDINT, 50, 0,	/* 50*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04999 */ HB_P_LINEOFFSET, 203,	/* 212 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 66,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ADDINT, 50, 0,	/* 50*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05036 */ HB_P_LINEOFFSET, 204,	/* 213 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 66,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ADDINT, 50, 0,	/* 50*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05073 */ HB_P_LINEOFFSET, 205,	/* 214 */
	HB_P_PUSHLOCALNEAR, 18,	/* MT_PRECO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 54,	/* 54 (abs: 05136) */
/* 05084 */ HB_P_LINEOFFSET, 206,	/* 215 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 66,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 67,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ADDINT, 50, 0,	/* 50*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 104,	/* 104 (abs: 05238) */
/* 05136 */ HB_P_LINEOFFSET, 208,	/* 217 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 66,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 67,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ADDINT, 50, 0,	/* 50*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 16,	/* 16 (abs: 05192) */
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ADDINT, 50, 0,	/* 50*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ARRAYPUSH,
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 05223) */
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ADDINT, 50, 0,	/* 50*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 3, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_ADDINT, 50, 0,	/* 50*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05238 */ HB_P_LINEOFFSET, 211,	/* 220 */
	HB_P_LOCALNEARADDINT, 19, 1, 0,	/* MCONT 1*/
	HB_P_JUMP, 73, 252,	/* -951 (abs: 04293) */
/* 05247 */ HB_P_LINEOFFSET, 216,	/* 225 */
	HB_P_PUSHSYMNEAR, 63,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05254 */ HB_P_LINEOFFSET, 217,	/* 226 */
	HB_P_PUSHSYMNEAR, 68,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 05263 */ HB_P_LINEOFFSET, 218,	/* 227 */
	HB_P_PUSHSYMNEAR, 29,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'F', 'i', 'm', ' ', 'd', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 'a', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 05291 */ HB_P_LINEOFFSET, 219,	/* 228 */
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
/* 05332 */ HB_P_LINEOFFSET, 220,	/* 229 */
	HB_P_PUSHSYMNEAR, 70,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'A', 'B', '_', 'T', 'E', 'R', 'M', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 108, 236,	/* -5012 (abs: 00342) */
/* 05357 */ HB_P_LINEOFFSET, 222,	/* 231 */
	HB_P_PUSHSYMNEAR, 71,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05364 */ HB_P_LINEOFFSET, 223,	/* 232 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 05369 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

