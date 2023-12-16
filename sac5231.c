/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <sac5231.prg>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\sac5231.prg /q /oC:\hti\SISCOM\sac5231.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:28 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "sac5231.prg"

HB_FUNC( SAC5231 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_EMP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_COD );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( VER_GRU );
HB_FUNC_EXTERN( VER_SGRU );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( V_UF );
HB_FUNC_EXTERN( VER_ESPE );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( MES );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5231 )
{ "SAC5231", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5231 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MTRACO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPOSICAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MGRUPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSUB_GRUPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_EMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_EMP )}, NULL },
{ "MMULT_EMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VER_COD", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_COD )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "VER_GRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_GRU )}, NULL },
{ "VER_SGRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SGRU )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "V_UF", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_UF )}, NULL },
{ "VER_ESPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_ESPE )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "I_AUX", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "MANO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MMES", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDIA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "MES", {HB_FS_PUBLIC}, {HB_FUNCNAME( MES )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5231 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5231
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5231 = hb_vm_SymbolInit_SAC5231;
   #pragma data_seg()
#endif

HB_FUNC( SAC5231 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 53, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 14, 0,	/* 14 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', '5', '2', '3', '1', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 20,	/* MPRODUTO */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 22,	/* M_SALDO */
	HB_P_LOCALNEARSETINT, 30, 0, 0,	/* MCOD_ESPE 0*/
	HB_P_LOCALNEARSETSTR, 33, 2, 0,	/* MRESUMO 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 34, 2, 0,	/* MCUSTO 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 36, 2, 0,	/* MTIPO_REL 2*/
	'R', 0, 
	HB_P_LOCALNEARSETSTR, 38, 2, 0,	/* MLUCRO 2*/
	'S', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 39,	/* MCODEMP */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_LOCALNEARSETSTR, 42, 2, 0,	/* MVLR_ZERO 2*/
	'C', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 45,	/* M_PROD_NAO */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 46,	/* M_PROD */
	HB_P_LOCALNEARSETINT, 47, 0, 0,	/* MPONTO 0*/
	HB_P_LOCALNEARSETSTR, 48, 2, 0,	/* MOP_CAB 2*/
	'S', 0, 
	HB_P_LOCALNEARSETSTR, 50, 2, 0,	/* MTIPO_ORDEM 2*/
	'1', 0, 
	HB_P_LOCALNEARSETSTR, 51, 2, 0,	/* MSINT_MES 2*/
	'N', 0, 
	HB_P_LOCALNEARSETSTR, 52, 3, 0,	/* MTIPO_DOC 3*/
	' ', ' ', 0, 
	HB_P_LOCALNEARSETSTR, 53, 2, 0,	/* MTIPO_MERC 2*/
	' ', 0, 
/* 00126 */ HB_P_LINEOFFSET, 2,	/* 16 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 14,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MTRACO */
	HB_P_PUSHSYMNEAR, 3,	/* MTIT */
	HB_P_PUSHSYMNEAR, 4,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 5,	/* MPAG */
	HB_P_PUSHSYMNEAR, 6,	/* MPOSICAO */
	HB_P_PUSHSYMNEAR, 7,	/* MCOD_MERC */
	HB_P_PUSHSYMNEAR, 8,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 9,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 10,	/* MARQ */
	HB_P_PUSHSYMNEAR, 11,	/* MGRUPO */
	HB_P_PUSHSYMNEAR, 12,	/* MSUB_GRUPO */
	HB_P_PUSHSYMNEAR, 13,	/* CONS_CLI */
	HB_P_DOSHORT, 12,
	HB_P_POPVARIABLE, 13, 0,	/* CONS_CLI */
	HB_P_POPVARIABLE, 10, 0,	/* MARQ */
	HB_P_POPVARIABLE, 9, 0,	/* MIMP_TIPO */
	HB_P_POPVARIABLE, 7, 0,	/* MCOD_MERC */
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 00187 */ HB_P_LINEOFFSET, 4,	/* 18 */
	HB_P_PUSHSYMNEAR, 15,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'G', 'E', 'R', 'A', 'L', ' ', '(', 'S', 'A', 'I', 'D', 'A', 'S', '/', 'L', 'U', 'C', 'R', 'O', 'S', ')', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHVARIABLE, 16, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00282) */
/* 00277 */ HB_P_LINEOFFSET, 5,	/* 19 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00282 */ HB_P_LINEOFFSET, 7,	/* 21 */
	HB_P_PUSHSYMNEAR, 17,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 2, 0,	/* MTRACO */
/* 00299 */ HB_P_LINEOFFSET, 9,	/* 23 */
	HB_P_LOCALNEARSETINT, 2, 21, 0,	/* LBA 21*/
/* 00305 */ HB_P_LINEOFFSET, 10,	/* 24 */
	HB_P_LOCALNEARSETINT, 3, 70, 0,	/* CBA 70*/
/* 00311 */ HB_P_LINEOFFSET, 24,	/* 38 */
	HB_P_PUSHMEMVAR, 18, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 8, 0,	/* MTIPO_IMP */
/* 00324 */ HB_P_LINEOFFSET, 25,	/* 39 */
	HB_P_PUSHSYMNEAR, 19,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'G', 'E', 'R', 'A', 'L', ' ', '(', 'S', 'A', 'I', 'D', 'A', 'S', '/', 'L', 'U', 'C', 'R', 'O', 'S', ')', 0, 
	HB_P_DOSHORT, 5,
/* 00401 */ HB_P_LINEOFFSET, 27,	/* 41 */
	HB_P_PUSHSYMNEAR, 20,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_DOSHORT, 4,
/* 00414 */ HB_P_LINEOFFSET, 28,	/* 42 */
	HB_P_PUSHVARIABLE, 21, 0,	/* MDATA_SIS */
	HB_P_ADDINT, 226, 255,	/* -30*/
	HB_P_POPLOCALNEAR, 7,	/* MDATA1 */
/* 00424 */ HB_P_LINEOFFSET, 29,	/* 43 */
	HB_P_PUSHVARIABLE, 21, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 8,	/* MDATA2 */
/* 00431 */ HB_P_LINEOFFSET, 30,	/* 44 */
	HB_P_LOCALNEARSETSTR, 13, 2, 0,	/* MCOD_AUX 2*/
	'4', 0, 
/* 00439 */ HB_P_LINEOFFSET, 31,	/* 45 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 9,	/* MCOD_OP */
/* 00450 */ HB_P_LINEOFFSET, 33,	/* 47 */
	HB_P_LOCALNEARSETINT, 30, 0, 0,	/* MCOD_ESPE 0*/
	HB_P_PUSHLOCALNEAR, 30,	/* MCOD_ESPE */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 47,	/* MPONTO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 44,	/* MPERC_AUX */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 43,	/* MPERC */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 7, 0,	/* MCOD_MERC */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 12, 0,	/* MSUB_GRUPO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 25,	/* MCOD_CLI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MCOD_FORN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MCOD_MONT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 29,	/* MCOD_OPE */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 23,	/* MCOD_VEN */
	HB_P_POPVARIABLE, 11, 0,	/* MGRUPO */
/* 00493 */ HB_P_LINEOFFSET, 34,	/* 48 */
	HB_P_LOCALNEARSETSTR, 26, 2, 0,	/* MTIPO_CONS 2*/
	'V', 0, 
/* 00501 */ HB_P_LINEOFFSET, 35,	/* 49 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 27,	/* MUF */
/* 00512 */ HB_P_LINEOFFSET, 36,	/* 50 */
	HB_P_LOCALNEARSETSTR, 28, 2, 0,	/* MASS 2*/
	' ', 0, 
/* 00520 */ HB_P_LINEOFFSET, 37,	/* 51 */
	HB_P_LOCALNEARSETSTR, 53, 2, 0,	/* MTIPO_MERC 2*/
	' ', 0, 
/* 00528 */ HB_P_LINEOFFSET, 38,	/* 52 */
	HB_P_LOCALNEARSETSTR, 48, 2, 0,	/* MOP_CAB 2*/
	'S', 0, 
	HB_P_PUSHLOCALNEAR, 48,	/* MOP_CAB */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 38,	/* MLUCRO */
	HB_P_POPLOCALNEAR, 21,	/* MBALANCO */
/* 00543 */ HB_P_LINEOFFSET, 39,	/* 53 */
	HB_P_LOCALNEARSETSTR, 49, 2, 0,	/* MLIST_PRE 2*/
	'N', 0, 
	HB_P_PUSHLOCALNEAR, 49,	/* MLIST_PRE */
	HB_P_POPLOCALNEAR, 33,	/* MRESUMO */
/* 00555 */ HB_P_LINEOFFSET, 40,	/* 54 */
	HB_P_LOCALNEARSETSTR, 36, 2, 0,	/* MTIPO_REL 2*/
	'R', 0, 
	HB_P_PUSHLOCALNEAR, 36,	/* MTIPO_REL */
	HB_P_POPLOCALNEAR, 34,	/* MCUSTO */
/* 00567 */ HB_P_LINEOFFSET, 41,	/* 55 */
	HB_P_LOCALNEARSETSTR, 42, 2, 0,	/* MVLR_ZERO 2*/
	'C', 0, 
	HB_P_PUSHLOCALNEAR, 42,	/* MVLR_ZERO */
	HB_P_POPLOCALNEAR, 37,	/* MTIP_COD */
/* 00579 */ HB_P_LINEOFFSET, 42,	/* 56 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 39,	/* MCODEMP */
/* 00590 */ HB_P_LINEOFFSET, 43,	/* 57 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 45,	/* M_PROD_NAO */
/* 00597 */ HB_P_LINEOFFSET, 44,	/* 58 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 46,	/* M_PROD */
/* 00604 */ HB_P_LINEOFFSET, 45,	/* 59 */
	HB_P_LOCALNEARSETSTR, 50, 2, 0,	/* MTIPO_ORDEM 2*/
	'1', 0, 
/* 00612 */ HB_P_LINEOFFSET, 46,	/* 60 */
	HB_P_LOCALNEARSETSTR, 52, 3, 0,	/* MTIPO_DOC 3*/
	' ', ' ', 0, 
/* 00621 */ HB_P_LINEOFFSET, 47,	/* 61 */
	HB_P_PUSHSYMNEAR, 22,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00663 */ HB_P_LINEOFFSET, 48,	/* 62 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00699 */ HB_P_LINEOFFSET, 49,	/* 63 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', ' ', 'C', 'a', 'b', 'e', 'c', 'a', 'l', 'h', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00738 */ HB_P_LINEOFFSET, 50,	/* 64 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00774 */ HB_P_LINEOFFSET, 51,	/* 65 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00811 */ HB_P_LINEOFFSET, 52,	/* 66 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00848 */ HB_P_LINEOFFSET, 53,	/* 67 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'G', 'R', 'U', 'P', 'O', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00885 */ HB_P_LINEOFFSET, 54,	/* 68 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'S', 'U', 'B', '-', 'G', 'R', 'U', 'P', 'O', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00922 */ HB_P_LINEOFFSET, 55,	/* 69 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'V', 'E', 'N', 'D', 'E', 'D', 'O', 'R', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00959 */ HB_P_LINEOFFSET, 56,	/* 70 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'M', 'O', 'N', 'T', 'A', 'D', 'O', 'R', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00996 */ HB_P_LINEOFFSET, 57,	/* 71 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'O', 'P', 'E', 'R', 'A', 'D', 'O', 'R', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01033 */ HB_P_LINEOFFSET, 58,	/* 72 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01070 */ HB_P_LINEOFFSET, 59,	/* 73 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01107 */ HB_P_LINEOFFSET, 60,	/* 74 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'S', 'i', 'g', 'l', 'a', ' ', 'd', 'o', ' ', 'E', 's', 't', 'a', 'd', 'o', ' ', 'd', 'e', 's', 'e', 'j', 'a', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01161 */ HB_P_LINEOFFSET, 61,	/* 75 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'S', 'o', 'm', 'a', ' ', 'M', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'p', 'e', 'l', 'o', ' ', 'B', 'a', 'l', 'a', 'n', 'c', 'o', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01215 */ HB_P_LINEOFFSET, 62,	/* 76 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'C', 'o', 'd', '.', 'd', 'a', ' ', 'E', 's', 'p', 'e', 'c', 'i', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01269 */ HB_P_LINEOFFSET, 63,	/* 77 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 's', 'o', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'T', 'O', 'T', 'A', 'L', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01323 */ HB_P_LINEOFFSET, 64,	/* 78 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'L', 'u', 'c', 'r', 'o', ' ', 's', '/', 'C', 'u', 's', 't', 'o', ':', '[', 'R', ']', 'e', 'a', 'l', ' ', '[', 'M', ']', 'e', 'r', 'c', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01377 */ HB_P_LINEOFFSET, 65,	/* 79 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'T', 'i', 'p', 'o', ' ', 'R', 'e', 'l', '.', '[', 'R', ']', 'e', 's', 'u', 'm', 'o', ' ', '[', 'E', ']', 'x', 't', 'r', 'a', 't', 'o', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01431 */ HB_P_LINEOFFSET, 66,	/* 80 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'T', 'i', 'p', 'o', ' ', 'C', 'o', 'd', '.', '[', 'C', ']', 'o', 'd', 'i', 'g', 'o', ' ', 'o', 'u', ' ', '[', 'B', ']', ' ', 'C', 'o', 'd', '.', 'B', 'a', 'r', 'r', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01485 */ HB_P_LINEOFFSET, 67,	/* 81 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'L', 'u', 'c', 'r', 'o', 's', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01539 */ HB_P_LINEOFFSET, 68,	/* 82 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'Z', 'e', 'r', 'a', 'd', 'o', ' ', '[', 'S', '/', 'C', '/', 'N', ']', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01593 */ HB_P_LINEOFFSET, 69,	/* 83 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'c', '/', '(', '%', ')', ' ', 'L', 'u', 'c', 'r', 'o', ' ', 'm', 'e', 'n', 'o', 'r', ' ', 'q', 'u', 'e', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01647 */ HB_P_LINEOFFSET, 70,	/* 84 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'O', 'p', 'e', 'r', 'a', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01701 */ HB_P_LINEOFFSET, 71,	/* 85 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'S', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'n', 'a', ' ', 'L', 'i', 's', 't', 'a', ' ', 'd', 'e', ' ', 'P', 'r', 'e', 's', 'e', 'n', 't', 'e', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01755 */ HB_P_LINEOFFSET, 72,	/* 86 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'O', 'r', 'd', 'e', 'm', ' ', '[', '1', ']', 'C', 'o', 'd', 'i', 'g', 'o', ' ', '[', '2', ']', 'A', 'l', 'f', 'a', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01809 */ HB_P_LINEOFFSET, 73,	/* 87 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'S', 'o', ' ', 'S', 'i', 'n', 't', 'e', 't', 'i', 'c', 'o', ' ', 'd', 'o', ' ', 'M', 'E', 'S', 'E', 'S', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01863 */ HB_P_LINEOFFSET, 74,	/* 88 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'o', 'u', ' ', 'e', 'm', ' ', 'b', 'r', 'a', 'n', 'c', 'o', ' ', 'T', 'D', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01917 */ HB_P_LINEOFFSET, 75,	/* 89 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'T', 'i', 'p', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01971 */ HB_P_LINEOFFSET, 79,	/* 93 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	39, 0,	/* MCODEMP */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02009) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02014) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'e', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	39, 0,	/* MCODEMP */
	HB_P_PUSHSYMNEAR, 29,	/* VER_EMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHVARIABLE, 30, 0,	/* MMULT_EMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02083 */ HB_P_LINEOFFSET, 80,	/* 94 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	48, 0,	/* MOP_CAB */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02121) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02126) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'o', 'p', '_', 'c', 'a', 'b', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	48, 0,	/* MOP_CAB */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02178 */ HB_P_LINEOFFSET, 81,	/* 95 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02216) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02221) */
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
	7, 0,	/* MDATA1 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02263) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02264) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02282 */ HB_P_LINEOFFSET, 82,	/* 96 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02321) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02326) */
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
	8, 0,	/* MDATA2 */
	7, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02368) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02369) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02387 */ HB_P_LINEOFFSET, 83,	/* 97 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 17,	/* 17 */
	HB_P_PUSHSYMNEAR, 33,	/* VER_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02462 */ HB_P_LINEOFFSET, 84,	/* 98 */
	HB_P_PUSHSYMNEAR, 34,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 27, 0,	/* GETLIST */
/* 02484 */ HB_P_LINEOFFSET, 85,	/* 99 */
	HB_P_PUSHSYMNEAR, 35,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02499) */
	HB_P_JUMP, 33, 50,	/* 12833 (abs: 15329) */
/* 02499 */ HB_P_LINEOFFSET, 88,	/* 102 */
	HB_P_PUSHSYMNEAR, 33,	/* VER_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 5,
/* 02515 */ HB_P_LINEOFFSET, 89,	/* 103 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 29,	/* 29 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02566) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 15,	/* 15 (abs: 02579) */
	HB_P_PUSHSYMNEAR, 36,	/* VER_GRU */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVARREF, 11, 0,	/* MGRUPO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02607 */ HB_P_LINEOFFSET, 90,	/* 104 */
	HB_P_PUSHSYMNEAR, 34,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 27, 0,	/* GETLIST */
/* 02629 */ HB_P_LINEOFFSET, 91,	/* 105 */
	HB_P_PUSHSYMNEAR, 35,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02644) */
	HB_P_JUMP, 144, 49,	/* 12688 (abs: 15329) */
/* 02644 */ HB_P_LINEOFFSET, 94,	/* 108 */
	HB_P_PUSHSYMNEAR, 36,	/* VER_GRU */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVARREF, 11, 0,	/* MGRUPO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_FALSE,
	HB_P_DOSHORT, 4,
/* 02659 */ HB_P_LINEOFFSET, 95,	/* 109 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 's', 'u', 'b', '_', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 18,	/* 18 */
	HB_P_PUSHSYMNEAR, 37,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MGRUPO */
	HB_P_PUSHVARIABLE, 12, 0,	/* MSUB_GRUPO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 02739) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02756 */ HB_P_LINEOFFSET, 96,	/* 110 */
	HB_P_PUSHSYMNEAR, 34,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 27, 0,	/* GETLIST */
/* 02778 */ HB_P_LINEOFFSET, 97,	/* 111 */
	HB_P_PUSHSYMNEAR, 35,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02793) */
	HB_P_JUMP, 251, 48,	/* 12539 (abs: 15329) */
/* 02793 */ HB_P_LINEOFFSET, 100,	/* 114 */
	HB_P_PUSHSYMNEAR, 37,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MGRUPO */
	HB_P_PUSHVARIABLE, 12, 0,	/* MSUB_GRUPO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 4,
/* 02810 */ HB_P_LINEOFFSET, 101,	/* 115 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MCOD_VEN */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02849) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02854) */
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
	23, 0,	/* MCOD_VEN */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02893) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 02904) */
	HB_P_PUSHSYMNEAR, 38,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02922 */ HB_P_LINEOFFSET, 102,	/* 116 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	35, 0,	/* MCOD_MONT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02961) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02966) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'm', 'o', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 33, 0,	/* 33 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	35, 0,	/* MCOD_MONT */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03006) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 03017) */
	HB_P_PUSHSYMNEAR, 38,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03035 */ HB_P_LINEOFFSET, 103,	/* 117 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* MCOD_OPE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03074) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03079) */
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
	29, 0,	/* MCOD_OPE */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03118) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 03129) */
	HB_P_PUSHSYMNEAR, 38,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03147 */ HB_P_LINEOFFSET, 104,	/* 118 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	24, 0,	/* MCOD_FORN */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03186) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03191) */
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
	24, 0,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03232) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 03243) */
	HB_P_PUSHSYMNEAR, 39,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03261 */ HB_P_LINEOFFSET, 105,	/* 119 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	25, 0,	/* MCOD_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03300) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03305) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	25, 0,	/* MCOD_CLI */
	HB_P_PUSHSYMNEAR, 40,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03363 */ HB_P_LINEOFFSET, 106,	/* 120 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	27, 0,	/* MUF */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03402) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03407) */
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
	27, 0,	/* MUF */
	HB_P_PUSHSYMNEAR, 41,	/* V_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03453 */ HB_P_LINEOFFSET, 107,	/* 121 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	21, 0,	/* MBALANCO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03492) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03497) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'b', 'a', 'l', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	21, 0,	/* MBALANCO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03550 */ HB_P_LINEOFFSET, 108,	/* 122 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	30, 0,	/* MCOD_ESPE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03589) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03594) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'e', 's', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	30, 0,	/* MCOD_ESPE */
	HB_P_PUSHSYMNEAR, 42,	/* VER_ESPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03654 */ HB_P_LINEOFFSET, 109,	/* 123 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	33, 0,	/* MRESUMO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03693) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03698) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'r', 'e', 's', 'u', 'm', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	33, 0,	/* MRESUMO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03750 */ HB_P_LINEOFFSET, 110,	/* 124 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	34, 0,	/* MCUSTO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03789) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03794) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'c', 'u', 's', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	34, 0,	/* MCUSTO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', ',', 'M', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03845 */ HB_P_LINEOFFSET, 111,	/* 125 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	36, 0,	/* MTIPO_REL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03884) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03889) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'r', 'e', 'l', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	36, 0,	/* MTIPO_REL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'E', ',', 'R', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03943 */ HB_P_LINEOFFSET, 112,	/* 126 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	37, 0,	/* MTIP_COD */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03982) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03987) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 't', 'i', 'p', '_', 'c', 'o', 'd', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	37, 0,	/* MTIP_COD */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', ',', 'B', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04040 */ HB_P_LINEOFFSET, 113,	/* 127 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	38, 0,	/* MLUCRO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04079) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04084) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'l', 'u', 'c', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	38, 0,	/* MLUCRO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04135 */ HB_P_LINEOFFSET, 114,	/* 128 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	42, 0,	/* MVLR_ZERO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04174) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04179) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'v', 'l', 'r', '_', 'z', 'e', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	42, 0,	/* MVLR_ZERO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', ',', 'N', ',', 'C', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 89,	/* 89 */
	HB_P_PUSHSYMNEAR, 43,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	'D', 'i', 'g', 'i', 't', 'e', ':', ' ', '[', 'S', ']', 'o', ' ', 'c', 'o', 'm', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'Z', 'e', 'r', 'o', ' ', '-', ' ', '[', 'C', ']', 'o', 'm', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'z', 'e', 'r', 'o', ' ', '-', ' ', '[', 'N', ']', 'a', 'o', ' ', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'Z', 'e', 'r', 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04323 */ HB_P_LINEOFFSET, 115,	/* 129 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	43, 0,	/* MPERC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04362) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04367) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'p', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04403 */ HB_P_LINEOFFSET, 116,	/* 130 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MCOD_AUX */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04442) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04447) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'a', 'u', 'x', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MCOD_AUX */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'1', ',', '2', ',', '3', ',', '4', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 37,	/* 37 */
	HB_P_PUSHSYMNEAR, 43,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'T', 'i', 'p', 'o', 's', ':', ' ', '[', '1', ']', ' ', '[', '2', ']', ' ', '[', '3', ']', ' ', '[', '4', ']', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04539 */ HB_P_LINEOFFSET, 117,	/* 131 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	49, 0,	/* MLIST_PRE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04578) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04583) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'l', 'i', 's', 't', '_', 'p', 'r', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	49, 0,	/* MLIST_PRE */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04637 */ HB_P_LINEOFFSET, 118,	/* 132 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	50, 0,	/* MTIPO_ORDEM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04676) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04681) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 't', 'i', 'p', 'o', '_', 'o', 'r', 'd', 'e', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	50, 0,	/* MTIPO_ORDEM */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', ',', '2', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04736 */ HB_P_LINEOFFSET, 119,	/* 133 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	51, 0,	/* MSINT_MES */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04775) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04780) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 's', 'i', 'n', 't', '_', 'm', 'e', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	51, 0,	/* MSINT_MES */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04834 */ HB_P_LINEOFFSET, 120,	/* 134 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	52, 0,	/* MTIPO_DOC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04873) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04878) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'd', 'o', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04914 */ HB_P_LINEOFFSET, 121,	/* 135 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	53, 0,	/* MTIPO_MERC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04953) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04958) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 't', 'i', 'p', 'o', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCK, 27, 0,	/* 27 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	53, 0,	/* MTIPO_MERC */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', ',', '1', ',', '2', ',', '3', ',', '4', ',', '5', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 111,	/* 111 */
	HB_P_PUSHSYMNEAR, 43,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 99,	/* 99 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', '[', '1', ']', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', '-', ' ', '[', '2', ']', ' ', 'M', 'a', 't', 'e', 'r', 'i', 'a', ' ', 'P', 'r', 'i', 'm', 'a', ' ', '-', ' ', '[', '3', ']', ' ', 'I', 's', 'u', 'm', 'o', 's', ' ', '-', ' ', '[', '4', ']', ' ', 'C', 'o', 'n', 's', 'u', 'm', 'o', ' ', '-', ' ', '[', '5', ']', ' ', 'O', 'u', 't', 'r', 'o', 's', ' ', '-', ' ', 'B', 'r', 'a', 'n', 'c', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 'T', 'O', 'D', 'O', 'S', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05130 */ HB_P_LINEOFFSET, 123,	/* 137 */
	HB_P_PUSHSYMNEAR, 34,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 27, 0,	/* GETLIST */
/* 05152 */ HB_P_LINEOFFSET, 124,	/* 138 */
	HB_P_PUSHSYMNEAR, 35,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05167) */
	HB_P_JUMP, 181, 39,	/* 10165 (abs: 15329) */
/* 05167 */ HB_P_LINEOFFSET, 127,	/* 141 */
	HB_P_PUSHSYMNEAR, 22,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'm', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'c', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', '/', 'o', ' ', 'r', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 05225 */ HB_P_LINEOFFSET, 128,	/* 142 */
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'L', 'i', 's', 't', 'a', 'g', 'e', 'm', ' ', 'd', 'e', ' ', 'M', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', '(', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'S', 'A', 'I', 'D', 'A', 'S', '/', 'L', 'U', 'C', 'R', 'O', 'S', ')', 0, 
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 05277 */ HB_P_LINEOFFSET, 129,	/* 143 */
	HB_P_PUSHLOCALNEAR, 51,	/* MSINT_MES */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 53, 26,	/* 6709 (abs: 11995) */
/* 05289 */ HB_P_LINEOFFSET, 130,	/* 144 */
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MCOD_AUX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 9,	/* MCOD_OP */
/* 05307 */ HB_P_LINEOFFSET, 131,	/* 145 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 40,	/* CONS_MOV */
/* 05314 */ HB_P_LINEOFFSET, 133,	/* 147 */
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', 'B', 'E', 'T', 'W', 'E', 'E', 'N', ' ', 0, 
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 05395 */ HB_P_LINEOFFSET, 134,	/* 148 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 76,	/* 76 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, '0', '2', 39, ' ', 'A', 'N', 'D', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', '=', ' ', 39, 'S', 39, ' ', 'A', 'N', 'D', ' ', 'd', 'e', 'v', 'o', 'l', 'u', 'c', 'a', 'o', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 05482 */ HB_P_LINEOFFSET, 135,	/* 149 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 81,	/* 81 */
	' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 39, 'C', 'U', 'P', 'O', 'M', 'E', 39, ' ', 'A', 'N', 'D', ' ', '(', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'l', 'i', 'k', 'e', ' ', 39, 'P', 'D', '%', 39, ' ', 'O', 'R', ' ', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'l', 'i', 'k', 'e', ' ', 39, 'C', 'P', '%', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 05574 */ HB_P_LINEOFFSET, 136,	/* 150 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'N', 'O', 'T', ' ', 'L', 'I', 'K', 'E', ' ', 39, 'T', 'R', '%', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 05640 */ HB_P_LINEOFFSET, 139,	/* 153 */
	HB_P_PUSHLOCALNEAR, 21,	/* MBALANCO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 05692) */
/* 05651 */ HB_P_LINEOFFSET, 140,	/* 154 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'A', 'N', 'D', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'N', 'O', 'T', ' ', 'L', 'I', 'K', 'E', ' ', 39, 'B', 'L', '%', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 05692 */ HB_P_LINEOFFSET, 142,	/* 156 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 53,	/* MTIPO_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 89,	/* 89 (abs: 05790) */
/* 05703 */ HB_P_LINEOFFSET, 143,	/* 157 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 68,	/* 68 */
	' ', 'A', 'N', 'D', ' ', '(', 'S', 'E', 'L', 'E', 'C', 'T', ' ', 't', 'i', 'p', 'o', '_', 'm', 'e', 'r', 'c', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 'm', 'o', 'v', '.', 'c', 'o', 'd', 'i', 'g', 'o', ')', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 53,	/* MTIPO_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 05790 */ HB_P_LINEOFFSET, 145,	/* 159 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MUF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 81,	/* 81 (abs: 05880) */
/* 05801 */ HB_P_LINEOFFSET, 146,	/* 160 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	' ', 'A', 'N', 'D', ' ', '(', 'S', 'E', 'L', 'E', 'C', 'T', ' ', 'u', 'f', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'c', 'l', 'i', ')', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MUF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 05880 */ HB_P_LINEOFFSET, 149,	/* 163 */
	HB_P_PUSHLOCALNEAR, 42,	/* MVLR_ZERO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 05900) */
	HB_P_PUSHLOCALNEAR, 28,	/* MASS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 63,	/* 63 (abs: 05963) */
/* 05902 */ HB_P_LINEOFFSET, 150,	/* 164 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', '(', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'O', 'R', ' ', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 36,	/* 36 (abs: 05997) */
/* 05963 */ HB_P_LINEOFFSET, 152,	/* 166 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '>', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 05997 */ HB_P_LINEOFFSET, 154,	/* 168 */
	HB_P_PUSHLOCALNEAR, 42,	/* MVLR_ZERO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 06042) */
/* 06008 */ HB_P_LINEOFFSET, 155,	/* 169 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '>', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06042 */ HB_P_LINEOFFSET, 157,	/* 171 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 53,	/* 53 (abs: 06105) */
/* 06054 */ HB_P_LINEOFFSET, 158,	/* 172 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MGRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06105 */ HB_P_LINEOFFSET, 160,	/* 174 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MSUB_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 56,	/* 56 (abs: 06171) */
/* 06117 */ HB_P_LINEOFFSET, 161,	/* 175 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MGRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MSUB_GRUPO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06171 */ HB_P_LINEOFFSET, 163,	/* 177 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 37,	/* 37 (abs: 06218) */
/* 06183 */ HB_P_LINEOFFSET, 164,	/* 178 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06218 */ HB_P_LINEOFFSET, 166,	/* 180 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 06271) */
/* 06229 */ HB_P_LINEOFFSET, 167,	/* 181 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06271 */ HB_P_LINEOFFSET, 169,	/* 183 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 37,	/* 37 (abs: 06317) */
/* 06282 */ HB_P_LINEOFFSET, 170,	/* 184 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06317 */ HB_P_LINEOFFSET, 172,	/* 186 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MCOD_OPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 79,	/* 79 (abs: 06405) */
/* 06328 */ HB_P_LINEOFFSET, 173,	/* 187 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', '-', ' ', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MCOD_OPE */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 06362 */ HB_P_LINEOFFSET, 174,	/* 188 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MCOD_OPE */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06405 */ HB_P_LINEOFFSET, 176,	/* 190 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MCOD_MONT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 114,	/* 114 (abs: 06528) */
/* 06416 */ HB_P_LINEOFFSET, 177,	/* 191 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', '-', ' ', 'M', 'o', 'n', 't', 'a', 'd', 'o', 'r', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MCOD_MONT */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 06450 */ HB_P_LINEOFFSET, 178,	/* 192 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'n', 't', 'a', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MCOD_MONT */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'O', 'R', ' ', 'm', 'o', 'n', 't', 'a', 'd', 'o', 'r', '1', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MCOD_MONT */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06528 */ HB_P_LINEOFFSET, 180,	/* 194 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 79,	/* 79 (abs: 06616) */
/* 06539 */ HB_P_LINEOFFSET, 181,	/* 195 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', '-', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 06573 */ HB_P_LINEOFFSET, 182,	/* 196 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06616 */ HB_P_LINEOFFSET, 184,	/* 198 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MCOD_ESPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 06669) */
/* 06627 */ HB_P_LINEOFFSET, 185,	/* 199 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 's', 'p', 'e', 'c', 'i', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06669 */ HB_P_LINEOFFSET, 187,	/* 201 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 37,	/* 37 (abs: 06715) */
/* 06680 */ HB_P_LINEOFFSET, 188,	/* 202 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06715 */ HB_P_LINEOFFSET, 190,	/* 204 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 52,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 79,	/* 79 (abs: 06803) */
/* 06726 */ HB_P_LINEOFFSET, 191,	/* 205 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 52,	/* MTIPO_DOC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06771 */ HB_P_LINEOFFSET, 192,	/* 206 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', '-', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', '.', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 52,	/* MTIPO_DOC */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 06803 */ HB_P_LINEOFFSET, 194,	/* 208 */
	HB_P_PUSHLOCALNEAR, 49,	/* MLIST_PRE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 114,	/* 114 (abs: 06926) */
/* 06814 */ HB_P_LINEOFFSET, 195,	/* 209 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'p', 'r', 'e', 's', 'e', 'n', 't', 'e', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'c', 'o', 'd', '_', 'p', 'r', 'e', 's', 'e', 'n', 't', 'e', ' ', '=', ' ', 39, '0', '0', '0', '0', '0', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06886 */ HB_P_LINEOFFSET, 196,	/* 210 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', '-', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'n', 'a', ' ', 'L', 'i', 's', 't', 'a', ' ', 'P', 'r', 'e', 's', 'e', 'n', 't', 'e', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 06926 */ HB_P_LINEOFFSET, 198,	/* 212 */
	HB_P_PUSHLOCALNEAR, 50,	/* MTIPO_ORDEM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 06975) */
/* 06937 */ HB_P_LINEOFFSET, 199,	/* 213 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ',', 'c', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 30,	/* 30 (abs: 07003) */
/* 06975 */ HB_P_LINEOFFSET, 201,	/* 215 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 07003 */ HB_P_LINEOFFSET, 203,	/* 217 */
	HB_P_MESSAGE, 48, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 49,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 40, 0,	/* CONS_MOV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 07024 */ HB_P_LINEOFFSET, 204,	/* 218 */
	HB_P_MESSAGE, 48, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 49,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 07048 */ HB_P_LINEOFFSET, 205,	/* 219 */
	HB_P_PUSHSYMNEAR, 50,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 07105) */
/* 07061 */ HB_P_LINEOFFSET, 206,	/* 220 */
	HB_P_PUSHSYMNEAR, 51,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'm', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 07105 */ HB_P_LINEOFFSET, 209,	/* 223 */
	HB_P_LOCALNEARSETINT, 19, 0, 0,	/* MCUSG_SAI 0*/
	HB_P_PUSHLOCALNEAR, 19,	/* MCUSG_SAI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* MCUS_SAI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* MVLRG_SAI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* MVLR_SAI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* MTOTG_SAI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* MTOT_SAI */
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 07131 */ HB_P_LINEOFFSET, 210,	/* 224 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MUF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 59,	/* 59 (abs: 07199) */
/* 07142 */ HB_P_LINEOFFSET, 211,	/* 225 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', 'e', ' ', 0, 
	HB_P_PUSHSYMNEAR, 52,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 't', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'd', 'o', ' ', 'E', 's', 't', 'a', 'd', 'o', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 27,	/* MUF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
	HB_P_JUMPNEAR, 38,	/* 38 (abs: 07235) */
/* 07199 */ HB_P_LINEOFFSET, 213,	/* 227 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', 'e', ' ', 0, 
	HB_P_PUSHSYMNEAR, 52,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 't', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 07235 */ HB_P_LINEOFFSET, 215,	/* 229 */
	HB_P_PUSHLOCALNEAR, 34,	/* MCUSTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 07273) */
/* 07246 */ HB_P_LINEOFFSET, 216,	/* 230 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'C', 'U', 'S', 'T', 'O', ' ', 'R', 'E', 'A', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
	HB_P_JUMPNEAR, 28,	/* 28 (abs: 07299) */
/* 07273 */ HB_P_LINEOFFSET, 218,	/* 232 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'C', 'U', 'S', 'T', 'O', ' ', 'M', 'E', 'R', 'C', '.', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 07299 */ HB_P_LINEOFFSET, 220,	/* 234 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'R', 'E', 'S', '_', 'M', 'O', 'V', '.', 'R', 'E', 'L', 0, 
	HB_P_POPVARIABLE, 10, 0,	/* MARQ */
/* 07318 */ HB_P_LINEOFFSET, 221,	/* 235 */
	HB_P_PUSHSYMNEAR, 53,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'R', 'E', 'S', '_', 'M', 'O', 'V', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 07348) */
	HB_P_JUMP, 224, 228,	/* -6944 (abs: 00401) */
/* 07348 */ HB_P_LINEOFFSET, 224,	/* 238 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 54, 0,	/* I_AUX */
	HB_P_POPLOCALNEAR, 5,	/* I */
/* 07357 */ HB_P_LINEOFFSET, 225,	/* 239 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHSYMNEAR, 50,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 174, 10,	/* 2734 (abs: 10107) */
/* 07376 */ HB_P_LINEOFFSET, 226,	/* 240 */
	HB_P_PUSHSYMNEAR, 55,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHSYMNEAR, 52,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 07398 */ HB_P_LINEOFFSET, 227,	/* 241 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 41,	/* CONS_MERC */
/* 07405 */ HB_P_LINEOFFSET, 228,	/* 242 */
	HB_P_MESSAGE, 48, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 49,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ',', 'e', 's', 'p', 'e', 'c', 'i', 'e', ',', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', ',', 'r', 'e', 'f', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 41, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 07506 */ HB_P_LINEOFFSET, 229,	/* 243 */
	HB_P_MESSAGE, 48, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 49,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 07530 */ HB_P_LINEOFFSET, 230,	/* 244 */
	HB_P_PUSHSYMNEAR, 50,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 169, 0,	/* 169 (abs: 07710) */
/* 07544 */ HB_P_LINEOFFSET, 231,	/* 245 */
	HB_P_PUSHSYMNEAR, 56,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* M_PROD */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 47,	/* MPONTO */
/* 07563 */ HB_P_LINEOFFSET, 232,	/* 246 */
	HB_P_PUSHLOCALNEAR, 47,	/* MPONTO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 07637) */
/* 07571 */ HB_P_LINEOFFSET, 233,	/* 247 */
	HB_P_PUSHLOCALNEAR, 45,	/* M_PROD_NAO */
	HB_P_PUSHLOCALNEAR, 47,	/* MPONTO */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 45,	/* M_PROD_NAO */
	HB_P_PUSHLOCALNEAR, 47,	/* MPONTO */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
/* 07598 */ HB_P_LINEOFFSET, 234,	/* 248 */
	HB_P_PUSHLOCALNEAR, 45,	/* M_PROD_NAO */
	HB_P_PUSHLOCALNEAR, 47,	/* MPONTO */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 45,	/* M_PROD_NAO */
	HB_P_PUSHLOCALNEAR, 47,	/* MPONTO */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPOP,
	HB_P_JUMP, 162, 9,	/* 2466 (abs: 10100) */
/* 07637 */ HB_P_LINEOFFSET, 236,	/* 250 */
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* M_PROD */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 07654 */ HB_P_LINEOFFSET, 237,	/* 251 */
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* M_PROD_NAO */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 89, 9,	/* 2393 (abs: 10100) */
/* 07710 */ HB_P_LINEOFFSET, 251,	/* 265 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 07729) */
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 7, 2,	/* 519 (abs: 08248) */
/* 07732 */ HB_P_LINEOFFSET, 252,	/* 266 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 48,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 07750) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 07761) */
	HB_P_PUSHLOCALNEAR, 48,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 231, 1,	/* 487 (abs: 08248) */
/* 07764 */ HB_P_LINEOFFSET, 253,	/* 267 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 07773 */ HB_P_LINEOFFSET, 254,	/* 268 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 07789) */
/* 07782 */ HB_P_LINEOFFSET, 255,	/* 269 */
	HB_P_PUSHSYMNEAR, 58,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07789 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 59,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 07808 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHSYMNEAR, 60,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 07823 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 07854 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'Q', 't', 'd', '.', 'S', 'a', 'i', 'd', 'a', 's', 0, 
	HB_P_DOSHORT, 1,
/* 07887 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHLOCALNEAR, 38,	/* MLUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 07940) */
/* 07899 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', ' ', 'V', 'l', 'r', '.', 'C', 'u', 's', 't', 'o', 's', 0, 
	HB_P_DOSHORT, 1,
/* 07940 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', ' ', 'V', 'l', 'r', '.', 'V', 'e', 'n', 'd', 'a', 's', 0, 
	HB_P_DOSHORT, 1,
/* 07981 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHLOCALNEAR, 38,	/* MLUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 79,	/* 79 (abs: 08070) */
/* 07993 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', ' ', ' ', ' ', 'L', 'u', 'c', 'r', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 08034 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'L', 'u', 'c', 'r', 'o', ' ', '%', 0, 
	HB_P_DOSHORT, 1,
/* 08070 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'R', 'e', 'f', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 08109 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 08134 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 104,	/* 104 (abs: 08248) */
/* 08146 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08200 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHSYMNEAR, 39,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 3,
/* 08223 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 08248 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 14,	/* MCODIGO */
/* 08261 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_POPVARIABLE, 54, 0,	/* I_AUX */
/* 08269 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* MPERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 77, 1,	/* 333 (abs: 08612) */
/* 08282 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHLOCALNEAR, 14,	/* MCODIGO */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 244, 0,	/* 244 (abs: 08540) */
/* 08299 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHSYMNEAR, 62,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'T', 'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 08329) */
	HB_P_JUMP, 191, 0,	/* 191 (abs: 08517) */
/* 08329 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHLOCALNEAR, 11,	/* MVLR_SAI */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* MVLR_SAI */
/* 08354 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHLOCALNEAR, 18,	/* MVLRG_SAI */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 18,	/* MVLRG_SAI */
/* 08379 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHLOCALNEAR, 12,	/* MCUS_SAI */
	HB_P_PUSHLOCALNEAR, 34,	/* MCUSTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 08412) */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_JUMPNEAR, 19,	/* 19 (abs: 08429) */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MCUS_SAI */
/* 08432 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHLOCALNEAR, 19,	/* MCUSG_SAI */
	HB_P_PUSHLOCALNEAR, 34,	/* MCUSTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 08465) */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_JUMPNEAR, 19,	/* 19 (abs: 08482) */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* MCUSG_SAI */
/* 08485 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_SAI */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 10,	/* MTOT_SAI */
/* 08501 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHLOCALNEAR, 17,	/* MTOTG_SAI */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 17,	/* MTOTG_SAI */
/* 08517 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* I 1*/
/* 08524 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHSYMNEAR, 50,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 1, 255,	/* -255 (abs: 08282) */
/* 08540 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHLOCALNEAR, 11,	/* MVLR_SAI */
	HB_P_PUSHLOCALNEAR, 12,	/* MCUS_SAI */
	HB_P_MINUS,
	HB_P_PUSHLOCALNEAR, 11,	/* MVLR_SAI */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 44,	/* MPERC_AUX */
/* 08556 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHLOCALNEAR, 44,	/* MPERC_AUX */
	HB_P_PUSHLOCALNEAR, 43,	/* MPERC */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08590) */
/* 08566 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* MCUS_SAI 0*/
	HB_P_PUSHLOCALNEAR, 12,	/* MCUS_SAI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* MVLR_SAI */
	HB_P_POPLOCALNEAR, 10,	/* MTOT_SAI */
/* 08580 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_LOCALNEARADDINT, 5, 255, 255,	/* I -1*/
	HB_P_JUMP, 233, 5,	/* 1513 (abs: 10100) */
/* 08590 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* MCUS_SAI 0*/
	HB_P_PUSHLOCALNEAR, 12,	/* MCUS_SAI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* MVLR_SAI */
	HB_P_POPLOCALNEAR, 10,	/* MTOT_SAI */
/* 08604 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_PUSHVARIABLE, 54, 0,	/* I_AUX */
	HB_P_POPLOCALNEAR, 5,	/* I */
/* 08612 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 14,	/* MCODIGO */
/* 08625 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHLOCALNEAR, 37,	/* MTIP_COD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 08703) */
/* 08637 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 08667 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 86,	/* 86 (abs: 08787) */
/* 08703 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 08747) */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 08754) */
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 08756 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 31, 0,	/* 31 */
	HB_P_DOSHORT, 1,
/* 08787 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHLOCALNEAR, 14,	/* MCODIGO */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 206, 2,	/* 718 (abs: 09519) */
/* 08804 */ HB_P_LINE, 79, 1,	/* 335 */
	HB_P_PUSHLOCALNEAR, 36,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 238, 1,	/* 494 (abs: 09308) */
/* 08817 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 63,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 08858 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_PUSHLOCALNEAR, 38,	/* MLUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 88,	/* 88 (abs: 08956) */
/* 08870 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 63,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MCUSTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 08922) */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 08930) */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 08956 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 63,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 09014 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHLOCALNEAR, 38,	/* MLUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 157, 0,	/* 157 (abs: 09181) */
/* 09027 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 63,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHLOCALNEAR, 34,	/* MCUSTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 09096) */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 09104) */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 09131 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* MPERC_AUX */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'K', 'L', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09181 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 17,	/* 17 (abs: 09215) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 09283) */
/* 09217 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'm', 'o', 'n', 't', 'a', 'd', 'o', 'r', 'e', 's', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09283 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 1,
/* 09308 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_PUSHLOCALNEAR, 11,	/* MVLR_SAI */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* MVLR_SAI */
/* 09333 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_PUSHLOCALNEAR, 18,	/* MVLRG_SAI */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 18,	/* MVLRG_SAI */
/* 09358 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_PUSHLOCALNEAR, 12,	/* MCUS_SAI */
	HB_P_PUSHLOCALNEAR, 34,	/* MCUSTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 09391) */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_JUMPNEAR, 19,	/* 19 (abs: 09408) */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MCUS_SAI */
/* 09411 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_PUSHLOCALNEAR, 19,	/* MCUSG_SAI */
	HB_P_PUSHLOCALNEAR, 34,	/* MCUSTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 09444) */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_JUMPNEAR, 19,	/* 19 (abs: 09461) */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* MCUSG_SAI */
/* 09464 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_SAI */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 10,	/* MTOT_SAI */
/* 09480 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_PUSHLOCALNEAR, 17,	/* MTOTG_SAI */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 17,	/* MTOTG_SAI */
/* 09496 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* I 1*/
/* 09503 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHSYMNEAR, 50,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 39, 253,	/* -729 (abs: 08787) */
/* 09519 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_LOCALNEARADDINT, 5, 255, 255,	/* I -1*/
/* 09526 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHLOCALNEAR, 36,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 20, 1,	/* 276 (abs: 09812) */
/* 09539 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 09572 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHLOCALNEAR, 38,	/* MLUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 09625) */
/* 09584 */ HB_P_LINE, 110, 1,	/* 366 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 09625 */ HB_P_LINE, 112, 1,	/* 368 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 09666 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHLOCALNEAR, 38,	/* MLUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 78,	/* 78 (abs: 09754) */
/* 09678 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 09719 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 09754 */ HB_P_LINE, 117, 1,	/* 373 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', ' ', 'O', ' ', 'T', ' ', 'A', ' ', 'L', ' ', ' ', ' ', 'D', ' ', 'O', ' ', ' ', ' ', 'P', ' ', 'R', ' ', 'O', ' ', 'D', ' ', 'U', ' ', 'T', ' ', 'O', ' ', ':', 0, 
	HB_P_DOSHORT, 1,
/* 09812 */ HB_P_LINE, 119, 1,	/* 375 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 63,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_SAI */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 09847 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_PUSHLOCALNEAR, 38,	/* MLUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 09902) */
/* 09859 */ HB_P_LINE, 121, 1,	/* 377 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 63,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MCUS_SAI */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 09902 */ HB_P_LINE, 123, 1,	/* 379 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 63,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MVLR_SAI */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 09945 */ HB_P_LINE, 125, 1,	/* 381 */
	HB_P_PUSHLOCALNEAR, 38,	/* MLUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 95,	/* 95 (abs: 10050) */
/* 09957 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 63,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MVLR_SAI */
	HB_P_PUSHLOCALNEAR, 12,	/* MCUS_SAI */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 10003 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 63,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MVLR_SAI */
	HB_P_PUSHLOCALNEAR, 12,	/* MCUS_SAI */
	HB_P_MINUS,
	HB_P_PUSHLOCALNEAR, 11,	/* MVLR_SAI */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 10050 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 10083 */ HB_P_LINE, 130, 1,	/* 386 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* MCUS_SAI 0*/
	HB_P_PUSHLOCALNEAR, 12,	/* MCUS_SAI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* MVLR_SAI */
	HB_P_POPLOCALNEAR, 10,	/* MTOT_SAI */
/* 10097 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* I 1*/
	HB_P_JUMP, 75, 245,	/* -2741 (abs: 07363) */
/* 10107 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 53,	/* 53 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 10157) */
/* 10120 */ HB_P_LINE, 133, 1,	/* 389 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 10130 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHSYMNEAR, 58,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10138 */ HB_P_LINE, 135, 1,	/* 391 */
	HB_P_PUSHSYMNEAR, 59,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 10157 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_PUSHSYMNEAR, 60,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 10172 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 10208 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_PUSHLOCALNEAR, 38,	/* MLUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 10261) */
/* 10220 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 10261 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 10302 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_PUSHLOCALNEAR, 38,	/* MLUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 78,	/* 78 (abs: 10390) */
/* 10314 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 10355 */ HB_P_LINE, 145, 1,	/* 401 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 10390 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'R', ' ', 'E', ' ', 'S', ' ', 'U', ' ', 'M', ' ', 'O', ' ', ' ', ' ', 'G', ' ', 'E', ' ', 'R', ' ', 'A', ' ', 'L', ':', 0, 
	HB_P_DOSHORT, 1,
/* 10439 */ HB_P_LINE, 148, 1,	/* 404 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MTOTG_SAI */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10481 */ HB_P_LINE, 149, 1,	/* 405 */
	HB_P_PUSHLOCALNEAR, 38,	/* MLUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 10542) */
/* 10493 */ HB_P_LINE, 150, 1,	/* 406 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCUSG_SAI */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10542 */ HB_P_LINE, 152, 1,	/* 408 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MVLRG_SAI */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10591 */ HB_P_LINE, 153, 1,	/* 409 */
	HB_P_PUSHLOCALNEAR, 38,	/* MLUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 105,	/* 105 (abs: 10706) */
/* 10603 */ HB_P_LINE, 154, 1,	/* 410 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MVLRG_SAI */
	HB_P_PUSHLOCALNEAR, 19,	/* MCUSG_SAI */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10655 */ HB_P_LINE, 156, 1,	/* 412 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MVLRG_SAI */
	HB_P_PUSHLOCALNEAR, 19,	/* MCUSG_SAI */
	HB_P_MINUS,
	HB_P_PUSHLOCALNEAR, 18,	/* MVLRG_SAI */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10706 */ HB_P_LINE, 158, 1,	/* 414 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 10733 */ HB_P_LINE, 159, 1,	/* 415 */
	HB_P_PUSHSYMNEAR, 58,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10741 */ HB_P_LINE, 160, 1,	/* 416 */
	HB_P_PUSHSYMNEAR, 50,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* M_PROD_NAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 158, 17,	/* 4510 (abs: 15263) */
/* 10756 */ HB_P_LINE, 161, 1,	/* 417 */
	HB_P_PUSHSYMNEAR, 59,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 10775 */ HB_P_LINE, 162, 1,	/* 418 */
	HB_P_PUSHSYMNEAR, 60,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 10790 */ HB_P_LINE, 163, 1,	/* 419 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 76,	/* 76 */
	'*', '*', '*', ' ', ' ', 'P', ' ', 'R', ' ', 'O', ' ', 'D', ' ', 'U', ' ', 'T', ' ', 'O', ' ', 'S', ' ', ' ', ' ', 'N', ' ', 'A', ' ', 'O', ' ', ' ', ' ', 'E', ' ', 'N', ' ', 'C', ' ', 'O', ' ', 'N', ' ', 'T', ' ', 'R', ' ', 'A', ' ', 'D', ' ', 'O', ' ', 'S', ' ', ' ', ' ', ' ', '(', 'E', ' ', 'X', ' ', 'C', ' ', 'L', ' ', 'U', ' ', 'I', ' ', 'D', ' ', 'O', ' ', 'S', ')', 0, 
	HB_P_DOSHORT, 1,
/* 10891 */ HB_P_LINE, 164, 1,	/* 420 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 10922 */ HB_P_LINE, 165, 1,	/* 421 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'Q', 't', 'd', '.', 'S', 'a', 'i', 'd', 'a', 's', 0, 
	HB_P_DOSHORT, 1,
/* 10955 */ HB_P_LINE, 166, 1,	/* 422 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', ' ', 'V', 'l', 'r', '.', 'V', 'e', 'n', 'd', 'a', 's', 0, 
	HB_P_DOSHORT, 1,
/* 10996 */ HB_P_LINE, 167, 1,	/* 423 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11029 */ HB_P_LINE, 168, 1,	/* 424 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* I 0*/
/* 11036 */ HB_P_LINE, 169, 1,	/* 425 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHSYMNEAR, 50,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* M_PROD_NAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 251, 1,	/* 507 (abs: 11560) */
/* 11056 */ HB_P_LINE, 170, 1,	/* 426 */
	HB_P_PUSHSYMNEAR, 55,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHLOCALNEAR, 46,	/* M_PROD */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 11073 */ HB_P_LINE, 171, 1,	/* 427 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 11093) */
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 48, 1,	/* 304 (abs: 11397) */
/* 11096 */ HB_P_LINE, 172, 1,	/* 428 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 11106 */ HB_P_LINE, 173, 1,	/* 429 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 11124) */
/* 11116 */ HB_P_LINE, 174, 1,	/* 430 */
	HB_P_PUSHSYMNEAR, 58,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 11124 */ HB_P_LINE, 176, 1,	/* 432 */
	HB_P_PUSHSYMNEAR, 59,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 11143 */ HB_P_LINE, 177, 1,	/* 433 */
	HB_P_PUSHSYMNEAR, 60,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 11158 */ HB_P_LINE, 178, 1,	/* 434 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 76,	/* 76 */
	'*', '*', '*', ' ', ' ', 'P', ' ', 'R', ' ', 'O', ' ', 'D', ' ', 'U', ' ', 'T', ' ', 'O', ' ', 'S', ' ', ' ', ' ', 'N', ' ', 'A', ' ', 'O', ' ', ' ', ' ', 'E', ' ', 'N', ' ', 'C', ' ', 'O', ' ', 'N', ' ', 'T', ' ', 'R', ' ', 'A', ' ', 'D', ' ', 'O', ' ', 'S', ' ', ' ', ' ', ' ', '(', 'E', ' ', 'X', ' ', 'C', ' ', 'L', ' ', 'U', ' ', 'I', ' ', 'D', ' ', 'O', ' ', 'S', ')', 0, 
	HB_P_DOSHORT, 1,
/* 11259 */ HB_P_LINE, 179, 1,	/* 435 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 11290 */ HB_P_LINE, 180, 1,	/* 436 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'Q', 't', 'd', '.', 'S', 'a', 'i', 'd', 'a', 's', 0, 
	HB_P_DOSHORT, 1,
/* 11323 */ HB_P_LINE, 181, 1,	/* 437 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', ' ', 'V', 'l', 'r', '.', 'V', 'e', 'n', 'd', 'a', 's', 0, 
	HB_P_DOSHORT, 1,
/* 11364 */ HB_P_LINE, 182, 1,	/* 438 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11397 */ HB_P_LINE, 184, 1,	/* 440 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* M_PROD_NAO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 11426 */ HB_P_LINE, 185, 1,	/* 441 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* M_PROD_NAO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 11460 */ HB_P_LINE, 186, 1,	/* 442 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 63,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* M_PROD_NAO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 11501 */ HB_P_LINE, 187, 1,	/* 443 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 63,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* M_PROD_NAO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 11550 */ HB_P_LINE, 188, 1,	/* 444 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* I 1*/
	HB_P_JUMP, 254, 253,	/* -514 (abs: 11043) */
/* 11560 */ HB_P_LINE, 189, 1,	/* 445 */
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 53,	/* 53 */
	HB_P_GREATER,
	HB_P_JUMPFALSE, 38, 1,	/* 294 (abs: 11865) */
/* 11574 */ HB_P_LINE, 190, 1,	/* 446 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 11584 */ HB_P_LINE, 191, 1,	/* 447 */
	HB_P_PUSHSYMNEAR, 58,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 11592 */ HB_P_LINE, 192, 1,	/* 448 */
	HB_P_PUSHSYMNEAR, 59,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 11611 */ HB_P_LINE, 193, 1,	/* 449 */
	HB_P_PUSHSYMNEAR, 60,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 11626 */ HB_P_LINE, 194, 1,	/* 450 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 76,	/* 76 */
	'*', '*', '*', ' ', ' ', 'P', ' ', 'R', ' ', 'O', ' ', 'D', ' ', 'U', ' ', 'T', ' ', 'O', ' ', 'S', ' ', ' ', ' ', 'N', ' ', 'A', ' ', 'O', ' ', ' ', ' ', 'E', ' ', 'N', ' ', 'C', ' ', 'O', ' ', 'N', ' ', 'T', ' ', 'R', ' ', 'A', ' ', 'D', ' ', 'O', ' ', 'S', ' ', ' ', ' ', ' ', '(', 'E', ' ', 'X', ' ', 'C', ' ', 'L', ' ', 'U', ' ', 'I', ' ', 'D', ' ', 'O', ' ', 'S', ')', 0, 
	HB_P_DOSHORT, 1,
/* 11727 */ HB_P_LINE, 195, 1,	/* 451 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 11758 */ HB_P_LINE, 196, 1,	/* 452 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'Q', 't', 'd', '.', 'S', 'a', 'i', 'd', 'a', 's', 0, 
	HB_P_DOSHORT, 1,
/* 11791 */ HB_P_LINE, 197, 1,	/* 453 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', ' ', 'V', 'l', 'r', '.', 'V', 'e', 'n', 'd', 'a', 's', 0, 
	HB_P_DOSHORT, 1,
/* 11832 */ HB_P_LINE, 198, 1,	/* 454 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11865 */ HB_P_LINE, 200, 1,	/* 456 */
	HB_P_PUSHSYMNEAR, 60,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 11880 */ HB_P_LINE, 201, 1,	/* 457 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 11916 */ HB_P_LINE, 202, 1,	/* 458 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 11957 */ HB_P_LINE, 203, 1,	/* 459 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 11984 */ HB_P_LINE, 204, 1,	/* 460 */
	HB_P_PUSHSYMNEAR, 58,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 199, 12,	/* 3271 (abs: 15263) */
/* 11995 */ HB_P_LINE, 207, 1,	/* 463 */
	HB_P_PUSHSYMNEAR, 53,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'R', 'E', 'S', '_', 'M', 'O', 'V', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 12026) */
	HB_P_JUMP, 154, 210,	/* -11622 (abs: 00401) */
/* 12026 */ HB_P_LINE, 210, 1,	/* 466 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MUF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 60,	/* 60 (abs: 12096) */
/* 12038 */ HB_P_LINE, 211, 1,	/* 467 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', 'e', ' ', 0, 
	HB_P_PUSHSYMNEAR, 52,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 't', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'd', 'o', ' ', 'E', 's', 't', 'a', 'd', 'o', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 27,	/* MUF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 12133) */
/* 12096 */ HB_P_LINE, 213, 1,	/* 469 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', 'e', ' ', 0, 
	HB_P_PUSHSYMNEAR, 52,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 't', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 12133 */ HB_P_LINE, 215, 1,	/* 471 */
	HB_P_PUSHLOCALNEAR, 34,	/* MCUSTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 12173) */
/* 12145 */ HB_P_LINE, 216, 1,	/* 472 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'C', 'U', 'S', 'T', 'O', ' ', 'R', 'E', 'A', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
	HB_P_JUMPNEAR, 29,	/* 29 (abs: 12200) */
/* 12173 */ HB_P_LINE, 218, 1,	/* 474 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'C', 'U', 'S', 'T', 'O', ' ', 'M', 'E', 'R', 'C', '.', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 12200 */ HB_P_LINE, 220, 1,	/* 476 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* I 0*/
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* MTOTG_SAI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* MCUSG_SAI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* MVLRG_SAI */
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 12221 */ HB_P_LINE, 221, 1,	/* 477 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 213, 9,	/* 2517 (abs: 14750) */
/* 12236 */ HB_P_LINE, 222, 1,	/* 478 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 40,	/* CONS_MOV */
/* 12244 */ HB_P_LINE, 223, 1,	/* 479 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'q', 'u', 'a', 'n', 't', 'd', ')', ',', 'S', 'U', 'M', '(', 'v', 'l', '_', 'v', 'e', 'n', 'd', '*', 'q', 'u', 'a', 'n', 't', 'd', ')', ',', 0, 
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 12292 */ HB_P_LINE, 224, 1,	/* 480 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHLOCALNEAR, 34,	/* MCUSTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12331) */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'S', 'U', 'M', '(', 'p', 'r', '_', 'u', 'n', 'i', 't', '*', 'q', 'u', 'a', 'n', 't', 'd', ')', 0, 
	HB_P_JUMPNEAR, 25,	/* 25 (abs: 12354) */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'S', 'U', 'M', '(', 'c', 'u', 's', 't', '_', 'm', 'e', 'r', '*', 'q', 'u', 'a', 'n', 't', 'd', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 12358 */ HB_P_LINE, 225, 1,	/* 481 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 90,	/* 90 */
	' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, '0', '2', 39, ' ', 'A', 'N', 'D', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', '=', ' ', 39, 'S', 39, ' ', 'A', 'N', 'D', ' ', 'd', 'e', 'v', 'o', 'l', 'u', 'c', 'a', 'o', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 12460 */ HB_P_LINE, 226, 1,	/* 482 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 81,	/* 81 */
	' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 39, 'C', 'U', 'P', 'O', 'M', 'E', 39, ' ', 'A', 'N', 'D', ' ', '(', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'l', 'i', 'k', 'e', ' ', 39, 'P', 'D', '%', 39, ' ', 'O', 'R', ' ', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'l', 'i', 'k', 'e', ' ', 39, 'C', 'P', '%', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 12553 */ HB_P_LINE, 227, 1,	/* 483 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'N', 'O', 'T', ' ', 'L', 'I', 'K', 'E', ' ', 39, 'T', 'R', '%', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 12620 */ HB_P_LINE, 230, 1,	/* 486 */
	HB_P_PUSHLOCALNEAR, 21,	/* MBALANCO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 12674) */
/* 12632 */ HB_P_LINE, 231, 1,	/* 487 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'A', 'N', 'D', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'N', 'O', 'T', ' ', 'L', 'I', 'K', 'E', ' ', 39, 'B', 'L', '%', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 12674 */ HB_P_LINE, 233, 1,	/* 489 */
	HB_P_PUSHLOCALNEAR, 42,	/* MVLR_ZERO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 12695) */
	HB_P_PUSHLOCALNEAR, 28,	/* MASS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 64,	/* 64 (abs: 12759) */
/* 12697 */ HB_P_LINE, 234, 1,	/* 490 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', '(', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'O', 'R', ' ', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 37,	/* 37 (abs: 12794) */
/* 12759 */ HB_P_LINE, 236, 1,	/* 492 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '>', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 12794 */ HB_P_LINE, 238, 1,	/* 494 */
	HB_P_PUSHLOCALNEAR, 42,	/* MVLR_ZERO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 12841) */
/* 12806 */ HB_P_LINE, 239, 1,	/* 495 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '>', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 12841 */ HB_P_LINE, 241, 1,	/* 497 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 54,	/* 54 (abs: 12906) */
/* 12854 */ HB_P_LINE, 242, 1,	/* 498 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MGRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 12906 */ HB_P_LINE, 244, 1,	/* 500 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MSUB_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 57,	/* 57 (abs: 12974) */
/* 12919 */ HB_P_LINE, 245, 1,	/* 501 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MGRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MSUB_GRUPO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 12974 */ HB_P_LINE, 247, 1,	/* 503 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 13023) */
/* 12987 */ HB_P_LINE, 248, 1,	/* 504 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 13023 */ HB_P_LINE, 250, 1,	/* 506 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 13078) */
/* 13035 */ HB_P_LINE, 251, 1,	/* 507 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 13078 */ HB_P_LINE, 253, 1,	/* 509 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 13126) */
/* 13090 */ HB_P_LINE, 254, 1,	/* 510 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 13126 */ HB_P_LINE, 0, 2,	/* 512 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MCOD_OPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 46,	/* 46 (abs: 13182) */
/* 13138 */ HB_P_LINE, 1, 2,	/* 513 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MCOD_OPE */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 13182 */ HB_P_LINE, 3, 2,	/* 515 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MCOD_MONT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 81,	/* 81 (abs: 13273) */
/* 13194 */ HB_P_LINE, 4, 2,	/* 516 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'n', 't', 'a', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MCOD_MONT */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'O', 'R', ' ', 'm', 'o', 'n', 't', 'a', 'd', 'o', 'r', '1', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MCOD_MONT */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 13273 */ HB_P_LINE, 6, 2,	/* 518 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 46,	/* 46 (abs: 13329) */
/* 13285 */ HB_P_LINE, 7, 2,	/* 519 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 13329 */ HB_P_LINE, 9, 2,	/* 521 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MCOD_ESPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 13384) */
/* 13341 */ HB_P_LINE, 10, 2,	/* 522 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 's', 'p', 'e', 'c', 'i', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 13384 */ HB_P_LINE, 12, 2,	/* 524 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 13432) */
/* 13396 */ HB_P_LINE, 13, 2,	/* 525 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 13432 */ HB_P_LINE, 15, 2,	/* 527 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 52,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 81,	/* 81 (abs: 13523) */
/* 13444 */ HB_P_LINE, 16, 2,	/* 528 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 52,	/* MTIPO_DOC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 13490 */ HB_P_LINE, 17, 2,	/* 529 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', '-', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', '.', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 52,	/* MTIPO_DOC */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 13523 */ HB_P_LINE, 19, 2,	/* 531 */
	HB_P_PUSHSYMNEAR, 62,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 66, 0,	/* MANO */
/* 13543 */ HB_P_LINE, 20, 2,	/* 532 */
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 67, 0,	/* MMES */
/* 13558 */ HB_P_LINE, 21, 2,	/* 533 */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 13574) */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 13583) */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 13592) */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 13601) */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 13610) */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 13619) */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 13634) */
/* 13621 */ HB_P_LINE, 22, 2,	/* 534 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'3', '1', 0, 
	HB_P_POPVARIABLE, 68, 0,	/* MDIA */
	HB_P_JUMPNEAR, 36,	/* 36 (abs: 13668) */
/* 13634 */ HB_P_LINE, 23, 2,	/* 535 */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 13657) */
/* 13644 */ HB_P_LINE, 24, 2,	/* 536 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'2', '8', 0, 
	HB_P_POPVARIABLE, 68, 0,	/* MDIA */
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 13668) */
/* 13657 */ HB_P_LINE, 26, 2,	/* 538 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'3', '0', 0, 
	HB_P_POPVARIABLE, 68, 0,	/* MDIA */
/* 13668 */ HB_P_LINE, 28, 2,	/* 540 */
	HB_P_PUSHSYMNEAR, 69,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '/', 0, 
	HB_P_PUSHVARIABLE, 67, 0,	/* MMES */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 66, 0,	/* MANO */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* MDATA1 */
/* 13697 */ HB_P_LINE, 29, 2,	/* 541 */
	HB_P_PUSHSYMNEAR, 69,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* MDIA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 67, 0,	/* MMES */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 66, 0,	/* MANO */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* MDATA2 */
/* 13728 */ HB_P_LINE, 31, 2,	/* 543 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', ' ', 'B', 'E', 'T', 'W', 'E', 'E', 'N', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 13789 */ HB_P_LINE, 32, 2,	/* 544 */
	HB_P_MESSAGE, 48, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 49,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 40, 0,	/* CONS_MOV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 13811 */ HB_P_LINE, 33, 2,	/* 545 */
	HB_P_MESSAGE, 48, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 49,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 13836 */ HB_P_LINE, 34, 2,	/* 546 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 13856) */
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 212, 1,	/* 468 (abs: 14324) */
/* 13859 */ HB_P_LINE, 36, 2,	/* 548 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 13869 */ HB_P_LINE, 37, 2,	/* 549 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 13887) */
/* 13879 */ HB_P_LINE, 38, 2,	/* 550 */
	HB_P_PUSHSYMNEAR, 58,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 13887 */ HB_P_LINE, 40, 2,	/* 552 */
	HB_P_PUSHSYMNEAR, 59,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 13906 */ HB_P_LINE, 41, 2,	/* 553 */
	HB_P_PUSHSYMNEAR, 60,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 13921 */ HB_P_LINE, 42, 2,	/* 554 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', 'M', 'e', 's', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 13955 */ HB_P_LINE, 43, 2,	/* 555 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', ' ', ' ', ' ', ' ', 'Q', 't', 'd', '.', 'S', 'a', 'i', 'd', 'a', 's', 0, 
	HB_P_DOSHORT, 1,
/* 13993 */ HB_P_LINE, 44, 2,	/* 556 */
	HB_P_PUSHLOCALNEAR, 38,	/* MLUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 14048) */
/* 14005 */ HB_P_LINE, 45, 2,	/* 557 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', ' ', 'V', 'l', 'r', '.', 'C', 'u', 's', 't', 'o', 's', 0, 
	HB_P_DOSHORT, 1,
/* 14048 */ HB_P_LINE, 48, 2,	/* 560 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', ' ', 'V', 'l', 'r', '.', 'V', 'e', 'n', 'd', 'a', 's', 0, 
	HB_P_DOSHORT, 1,
/* 14091 */ HB_P_LINE, 50, 2,	/* 562 */
	HB_P_PUSHLOCALNEAR, 38,	/* MLUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 84,	/* 84 (abs: 14185) */
/* 14103 */ HB_P_LINE, 51, 2,	/* 563 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', 'L', 'u', 'c', 'r', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 14147 */ HB_P_LINE, 52, 2,	/* 564 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', 'L', 'u', 'c', 'r', 'o', ' ', '%', 0, 
	HB_P_DOSHORT, 1,
/* 14185 */ HB_P_LINE, 54, 2,	/* 566 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 14210 */ HB_P_LINE, 55, 2,	/* 567 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 104,	/* 104 (abs: 14324) */
/* 14222 */ HB_P_LINE, 56, 2,	/* 568 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14276 */ HB_P_LINE, 57, 2,	/* 569 */
	HB_P_PUSHSYMNEAR, 39,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 3,
/* 14299 */ HB_P_LINE, 58, 2,	/* 570 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 14324 */ HB_P_LINE, 62, 2,	/* 574 */
	HB_P_PUSHSYMNEAR, 50,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 148, 1,	/* 404 (abs: 14740) */
/* 14339 */ HB_P_LINE, 63, 2,	/* 575 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* MES */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '2', '0', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 66, 0,	/* MANO */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14379 */ HB_P_LINE, 64, 2,	/* 576 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 14428 */ HB_P_LINE, 65, 2,	/* 577 */
	HB_P_PUSHLOCALNEAR, 38,	/* MLUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 57,	/* 57 (abs: 14495) */
/* 14440 */ HB_P_LINE, 66, 2,	/* 578 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 14495 */ HB_P_LINE, 68, 2,	/* 580 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 14550 */ HB_P_LINE, 69, 2,	/* 581 */
	HB_P_PUSHLOCALNEAR, 38,	/* MLUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 136, 0,	/* 136 (abs: 14696) */
/* 14563 */ HB_P_LINE, 70, 2,	/* 582 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 14627 */ HB_P_LINE, 71, 2,	/* 583 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 14696 */ HB_P_LINE, 73, 2,	/* 585 */
	HB_P_PUSHLOCALNEAR, 18,	/* MVLRG_SAI */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 18,	/* MVLRG_SAI */
/* 14711 */ HB_P_LINE, 74, 2,	/* 586 */
	HB_P_PUSHLOCALNEAR, 19,	/* MCUSG_SAI */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* MCUSG_SAI */
/* 14726 */ HB_P_LINE, 75, 2,	/* 587 */
	HB_P_PUSHLOCALNEAR, 17,	/* MTOTG_SAI */
	HB_P_PUSHLOCALNEAR, 40,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 17,	/* MTOTG_SAI */
/* 14740 */ HB_P_LINE, 79, 2,	/* 591 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* I 1*/
	HB_P_JUMP, 41, 246,	/* -2519 (abs: 12228) */
/* 14750 */ HB_P_LINE, 80, 2,	/* 592 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 14791 */ HB_P_LINE, 81, 2,	/* 593 */
	HB_P_PUSHLOCALNEAR, 38,	/* MLUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 14846) */
/* 14803 */ HB_P_LINE, 82, 2,	/* 594 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 14846 */ HB_P_LINE, 84, 2,	/* 596 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 14889 */ HB_P_LINE, 85, 2,	/* 597 */
	HB_P_PUSHLOCALNEAR, 38,	/* MLUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 84,	/* 84 (abs: 14983) */
/* 14901 */ HB_P_LINE, 86, 2,	/* 598 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 14945 */ HB_P_LINE, 87, 2,	/* 599 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 14983 */ HB_P_LINE, 90, 2,	/* 602 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MTOTG_SAI */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 15031 */ HB_P_LINE, 91, 2,	/* 603 */
	HB_P_PUSHLOCALNEAR, 38,	/* MLUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 15093) */
/* 15043 */ HB_P_LINE, 92, 2,	/* 604 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCUSG_SAI */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 15093 */ HB_P_LINE, 94, 2,	/* 606 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MVLRG_SAI */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 15143 */ HB_P_LINE, 95, 2,	/* 607 */
	HB_P_PUSHLOCALNEAR, 38,	/* MLUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 110,	/* 110 (abs: 15263) */
/* 15155 */ HB_P_LINE, 96, 2,	/* 608 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MVLRG_SAI */
	HB_P_PUSHLOCALNEAR, 19,	/* MCUSG_SAI */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 15209 */ HB_P_LINE, 97, 2,	/* 609 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MVLRG_SAI */
	HB_P_PUSHLOCALNEAR, 19,	/* MCUSG_SAI */
	HB_P_MINUS,
	HB_P_PUSHLOCALNEAR, 18,	/* MVLRG_SAI */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 15263 */ HB_P_LINE, 100, 2,	/* 612 */
	HB_P_PUSHSYMNEAR, 71,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 15273 */ HB_P_LINE, 101, 2,	/* 613 */
	HB_P_PUSHSYMNEAR, 72,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 72,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 72,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 15315 */ HB_P_LINE, 102, 2,	/* 614 */
	HB_P_PUSHSYMNEAR, 73,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MARQ */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 179, 197,	/* -14925 (abs: 00401) */
/* 15329 */ HB_P_LINE, 104, 2,	/* 616 */
	HB_P_PUSHSYMNEAR, 74,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 15337 */ HB_P_LINE, 105, 2,	/* 617 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 15343 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

