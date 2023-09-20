/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC55.PRG>
 * Command: C:\xharbour997\bin\harbour.exe C:\helio\siachb\SAC55.PRG /q /oC:\helio\siachb\SAC55.c /M /N /B 
 * Created: 2018.04.09 19:28:42 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC55.PRG"

HB_FUNC( SAC55 );
HB_FUNC_INITLINES();
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( ABRIARQ );
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
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( ASORT );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( __DBGENTRY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC55 )
{ "SAC55", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC55 )}, NULL },
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
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
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
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "CONS_PRODU", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "CONS_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "ASORT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASORT )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "__DBGENTRY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGENTRY )}, NULL },
{ "(_INITLINES)", {HB_FS_INITEXIT}, {hb_INITLINES}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC55 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC55
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC55 = hb_vm_SymbolInit_SAC55;
   #pragma data_seg()
#endif

HB_FUNC( SAC55 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 21, 0,	/* locals, params */
	HB_P_MODULENAME,	/* SAC55.PRG:SAC55 */
 'S', 'A', 'C', '5', '5', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '5', '5', 0,
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC55.PRG: */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '5', '5', '.', 'P', 'R', 'G', ':', 0,
/* 00048 */ HB_P_BASELINE, 11, 0,	/* 11 */
	HB_P_LOCALNAME, 1, 0,	/* MPRG */
 'M', 'P', 'R', 'G', 0,
	HB_P_LOCALNEARSETSTR, 1, 6, 0,	/* MPRG 6*/
	'S', 'A', 'C', '5', '5', 0, 
	HB_P_LOCALNAME, 2, 0,	/* MTITULO */
 'M', 'T', 'I', 'T', 'U', 'L', 'O', 0,
	HB_P_LOCALNEARSETSTR, 2, 40, 0,	/* MTITULO 40*/
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'P', 'R', 'O', 'D', 'U', 'C', 'A', 'O', 0, 
	HB_P_LOCALNAME, 3, 0,	/* LCI */
 'L', 'C', 'I', 0,
	HB_P_LOCALNAME, 4, 0,	/* CCI */
 'C', 'C', 'I', 0,
	HB_P_LOCALNAME, 5, 0,	/* LBA */
 'L', 'B', 'A', 0,
	HB_P_LOCALNAME, 6, 0,	/* CBA */
 'C', 'B', 'A', 0,
	HB_P_LOCALNAME, 7, 0,	/* OPCAO */
 'O', 'P', 'C', 'A', 'O', 0,
	HB_P_LOCALNAME, 8, 0,	/* I */
 'I', 0,
	HB_P_LOCALNAME, 9, 0,	/* MTECLA */
 'M', 'T', 'E', 'C', 'L', 'A', 0,
	HB_P_LOCALNAME, 10, 0,	/* MDATA1 */
 'M', 'D', 'A', 'T', 'A', '1', 0,
	HB_P_LOCALNAME, 11, 0,	/* MDATA2 */
 'M', 'D', 'A', 'T', 'A', '2', 0,
	HB_P_LOCALNAME, 12, 0,	/* MCOD_VEN */
 'M', 'C', 'O', 'D', '_', 'V', 'E', 'N', 0,
	HB_P_LOCALNAME, 13, 0,	/* MGRUPO */
 'M', 'G', 'R', 'U', 'P', 'O', 0,
	HB_P_LOCALNAME, 14, 0,	/* MSUB_GRUPO */
 'M', 'S', 'U', 'B', '_', 'G', 'R', 'U', 'P', 'O', 0,
	HB_P_LOCALNAME, 15, 0,	/* MCOD_CLI */
 'M', 'C', 'O', 'D', '_', 'C', 'L', 'I', 0,
	HB_P_LOCALNAME, 16, 0,	/* MCOD_OPE */
 'M', 'C', 'O', 'D', '_', 'O', 'P', 'E', 0,
	HB_P_LOCALNAME, 17, 0,	/* MCOD_VEND */
 'M', 'C', 'O', 'D', '_', 'V', 'E', 'N', 'D', 0,
	HB_P_LOCALNAME, 18, 0,	/* CONS_MOV */
 'C', 'O', 'N', 'S', '_', 'M', 'O', 'V', 0,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 18,	/* CONS_MOV */
	HB_P_LOCALNAME, 19, 0,	/* MCODEMP */
 'M', 'C', 'O', 'D', 'E', 'M', 'P', 0,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 19,	/* MCODEMP */
	HB_P_LOCALNAME, 20, 0,	/* MTOT_ENT */
 'M', 'T', 'O', 'T', '_', 'E', 'N', 'T', 0,
	HB_P_LOCALNEARSETINT, 20, 0, 0,	/* MTOT_ENT 0*/
	HB_P_LOCALNAME, 21, 0,	/* MTOT_SAI */
 'M', 'T', 'O', 'T', '_', 'S', 'A', 'I', 0,
	HB_P_LOCALNEARSETINT, 21, 0, 0,	/* MTOT_SAI 0*/
/* 00338 */ HB_P_LINEOFFSET, 3,	/* 14 */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 11,	/* __MVPRIVATE */
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
	HB_P_DOSHORT, 9,
	HB_P_POPVARIABLE, 10, 0,	/* MARQ */
	HB_P_POPVARIABLE, 9, 0,	/* MIMP_TIPO */
	HB_P_POPVARIABLE, 7, 0,	/* MCOD_MERC */
/* 00381 */ HB_P_LINEOFFSET, 5,	/* 16 */
	HB_P_PUSHSYMNEAR, 12,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 13, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00416) */
/* 00411 */ HB_P_LINEOFFSET, 6,	/* 17 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00416 */ HB_P_LINEOFFSET, 9,	/* 20 */
	HB_P_PUSHSYMNEAR, 14,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 2, 0,	/* MTRACO */
/* 00433 */ HB_P_LINEOFFSET, 11,	/* 22 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_POPLOCALNEAR, 3,	/* LCI */
/* 00443 */ HB_P_LINEOFFSET, 12,	/* 23 */
	HB_P_LOCALNEARSETINT, 5, 20, 0,	/* LBA 20*/
/* 00449 */ HB_P_LINEOFFSET, 13,	/* 24 */
	HB_P_LOCALNEARSETINT, 6, 70, 0,	/* CBA 70*/
/* 00455 */ HB_P_LINEOFFSET, 15,	/* 26 */
	HB_P_PUSHSYMNEAR, 15,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00484) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00484 */ HB_P_LINEOFFSET, 16,	/* 27 */
	HB_P_PUSHSYMNEAR, 15,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'e', 's', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'e', 's', 'p', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00513) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00513 */ HB_P_LINEOFFSET, 17,	/* 28 */
	HB_P_PUSHSYMNEAR, 15,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 's', 'e', 't', 'u', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 't', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00542) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00542 */ HB_P_LINEOFFSET, 18,	/* 29 */
	HB_P_PUSHSYMNEAR, 15,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00571) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00571 */ HB_P_LINEOFFSET, 19,	/* 30 */
	HB_P_PUSHSYMNEAR, 15,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'g', 'r', 'u', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00601) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00601 */ HB_P_LINEOFFSET, 20,	/* 31 */
	HB_P_PUSHSYMNEAR, 15,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00630) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00630 */ HB_P_LINEOFFSET, 22,	/* 33 */
	HB_P_PUSHMEMVAR, 16, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 8, 0,	/* MTIPO_IMP */
/* 00643 */ HB_P_LINEOFFSET, 23,	/* 34 */
	HB_P_PUSHSYMNEAR, 17,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_DOSHORT, 5,
/* 00660 */ HB_P_LINEOFFSET, 24,	/* 35 */
/* 00662 */ HB_P_LINEOFFSET, 25,	/* 36 */
	HB_P_PUSHMEMVAR, 18, 0,	/* MDATA_SIS */
	HB_P_ADDINT, 226, 255,	/* -30*/
	HB_P_POPLOCALNEAR, 10,	/* MDATA1 */
/* 00672 */ HB_P_LINEOFFSET, 26,	/* 37 */
	HB_P_PUSHMEMVAR, 18, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 11,	/* MDATA2 */
/* 00679 */ HB_P_LINEOFFSET, 27,	/* 38 */
	HB_P_LOCALNEARSETINT, 21, 0, 0,	/* MTOT_SAI 0*/
	HB_P_PUSHLOCALNEAR, 21,	/* MTOT_SAI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* MTOT_ENT */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 7, 0,	/* MCOD_MERC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* MCOD_CLI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* MCOD_OPE */
	HB_P_POPLOCALNEAR, 17,	/* MCOD_VEND */
/* 00702 */ HB_P_LINEOFFSET, 28,	/* 39 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 19,	/* MCODEMP */
/* 00713 */ HB_P_LINEOFFSET, 29,	/* 40 */
	HB_P_PUSHSYMNEAR, 19,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_DOSHORT, 4,
/* 00731 */ HB_P_LINEOFFSET, 30,	/* 41 */
	HB_P_PUSHSYMNEAR, 20,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00778 */ HB_P_LINEOFFSET, 31,	/* 42 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00818 */ HB_P_LINEOFFSET, 32,	/* 43 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00861 */ HB_P_LINEOFFSET, 33,	/* 44 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00904 */ HB_P_LINEOFFSET, 34,	/* 45 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00947 */ HB_P_LINEOFFSET, 35,	/* 46 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00990 */ HB_P_LINEOFFSET, 36,	/* 47 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01033 */ HB_P_LINEOFFSET, 37,	/* 48 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01076 */ HB_P_LINEOFFSET, 38,	/* 49 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 75, 0,	/* 75 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MCODEMP */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC55.PRG:SAC55 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '5', '5', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '5', '5', 0,
	HB_P_LOCALNAME, 255, 255,	/* MCODEMP */
 'M', 'C', 'O', 'D', 'E', 'M', 'P', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01168) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01173) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'e', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 94, 0,	/* 94 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	19, 0,	/* MCODEMP */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC55.PRG:SAC55 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '5', '5', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '5', '5', 0,
	HB_P_LOCALNAME, 255, 255,	/* MCODEMP */
 'M', 'C', 'O', 'D', 'E', 'M', 'P', 0,
	HB_P_LOCALNAME, 254, 255,	/* LCI */
 'L', 'C', 'I', 0,
	HB_P_LOCALNAME, 253, 255,	/* CCI */
 'C', 'C', 'I', 0,
/* 01261 */ HB_P_LINE, 49, 0,	/* 49 */
	HB_P_PUSHSYMNEAR, 27,	/* VER_EMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 25, 0,	/* 25*/
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 47,	/* 47 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC55.PRG:SAC55 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '5', '5', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '5', '5', 0,
/* 01319 */ HB_P_LINE, 49, 0,	/* 49 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MMULT_EMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
/* 01335 */ HB_P_LINEOFFSET, 38,	/* 49 */
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01349 */ HB_P_LINEOFFSET, 39,	/* 50 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 74, 0,	/* 74 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MDATA1 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC55.PRG:SAC55 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '5', '5', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '5', '5', 0,
	HB_P_LOCALNAME, 255, 255,	/* MDATA1 */
 'M', 'D', 'A', 'T', 'A', '1', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01443) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01448) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '1', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHBLOCK, 69, 0,	/* 69 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MDATA1 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC55.PRG:SAC55 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '5', '5', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '5', '5', 0,
	HB_P_LOCALNAME, 255, 255,	/* MDATA1 */
 'M', 'D', 'A', 'T', 'A', '1', 0,
/* 01521 */ HB_P_LINE, 50, 0,	/* 50 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01536) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01537) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
/* 01543 */ HB_P_LINEOFFSET, 39,	/* 50 */
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01557 */ HB_P_LINEOFFSET, 40,	/* 51 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 74, 0,	/* 74 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MDATA2 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC55.PRG:SAC55 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '5', '5', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '5', '5', 0,
	HB_P_LOCALNAME, 255, 255,	/* MDATA2 */
 'M', 'D', 'A', 'T', 'A', '2', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01651) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01656) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '2', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHBLOCK, 79, 0,	/* 79 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	11, 0,	/* MDATA2 */
	10, 0,	/* MDATA1 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC55.PRG:SAC55 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '5', '5', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '5', '5', 0,
	HB_P_LOCALNAME, 255, 255,	/* MDATA2 */
 'M', 'D', 'A', 'T', 'A', '2', 0,
	HB_P_LOCALNAME, 254, 255,	/* MDATA1 */
 'M', 'D', 'A', 'T', 'A', '1', 0,
/* 01741 */ HB_P_LINE, 51, 0,	/* 51 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01754) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01755) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
/* 01761 */ HB_P_LINEOFFSET, 40,	/* 51 */
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01775 */ HB_P_LINEOFFSET, 41,	/* 52 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 79, 0,	/* 79 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC55.PRG:SAC55 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '5', '5', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '5', '5', 0,
	HB_P_LOCALNAME, 255, 255,	/* LCI */
 'L', 'C', 'I', 0,
	HB_P_LOCALNAME, 254, 255,	/* CCI */
 'C', 'C', 'I', 0,
	HB_P_PUSHSYMNEAR, 31,	/* VER_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_MERC */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
/* 01906 */ HB_P_LINEOFFSET, 41,	/* 52 */
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01920 */ HB_P_LINEOFFSET, 42,	/* 53 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 25, 0,	/* GETLIST */
/* 01942 */ HB_P_LINEOFFSET, 43,	/* 54 */
	HB_P_PUSHSYMNEAR, 33,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 01959) */
/* 01954 */ HB_P_LINEOFFSET, 44,	/* 55 */
	HB_P_JUMP, 140, 14,	/* 3724 (abs: 05680) */
/* 01959 */ HB_P_LINEOFFSET, 46,	/* 57 */
	HB_P_PUSHSYMNEAR, 31,	/* VER_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 5,
/* 01981 */ HB_P_LINEOFFSET, 47,	/* 58 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 77, 0,	/* 77 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MCOD_VEND */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC55.PRG:SAC55 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '5', '5', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '5', '5', 0,
	HB_P_LOCALNAME, 255, 255,	/* MCOD_VEND */
 'M', 'C', 'O', 'D', '_', 'V', 'E', 'N', 'D', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02078) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02083) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 106, 0,	/* 106 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	17, 0,	/* MCOD_VEND */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC55.PRG:SAC55 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '5', '5', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '5', '5', 0,
	HB_P_LOCALNAME, 255, 255,	/* MCOD_VEND */
 'M', 'C', 'O', 'D', '_', 'V', 'E', 'N', 'D', 0,
	HB_P_LOCALNAME, 254, 255,	/* LCI */
 'L', 'C', 'I', 0,
	HB_P_LOCALNAME, 253, 255,	/* CCI */
 'C', 'C', 'I', 0,
/* 02175 */ HB_P_LINE, 58, 0,	/* 58 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02190) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 19,	/* 19 (abs: 02207) */
	HB_P_PUSHSYMNEAR, 34,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 26, 0,	/* 26*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
/* 02213 */ HB_P_LINEOFFSET, 47,	/* 58 */
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02227 */ HB_P_LINEOFFSET, 48,	/* 59 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 76, 0,	/* 76 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MCOD_OPE */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC55.PRG:SAC55 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '5', '5', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '5', '5', 0,
	HB_P_LOCALNAME, 255, 255,	/* MCOD_OPE */
 'M', 'C', 'O', 'D', '_', 'O', 'P', 'E', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02323) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02328) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'o', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 105, 0,	/* 105 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	16, 0,	/* MCOD_OPE */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC55.PRG:SAC55 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '5', '5', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '5', '5', 0,
	HB_P_LOCALNAME, 255, 255,	/* MCOD_OPE */
 'M', 'C', 'O', 'D', '_', 'O', 'P', 'E', 0,
	HB_P_LOCALNAME, 254, 255,	/* LCI */
 'L', 'C', 'I', 0,
	HB_P_LOCALNAME, 253, 255,	/* CCI */
 'C', 'C', 'I', 0,
/* 02418 */ HB_P_LINE, 59, 0,	/* 59 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02433) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 19,	/* 19 (abs: 02450) */
	HB_P_PUSHSYMNEAR, 34,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 26, 0,	/* 26*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
/* 02456 */ HB_P_LINEOFFSET, 48,	/* 59 */
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02470 */ HB_P_LINEOFFSET, 49,	/* 60 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 76, 0,	/* 76 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MCOD_CLI */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC55.PRG:SAC55 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '5', '5', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '5', '5', 0,
	HB_P_LOCALNAME, 255, 255,	/* MCOD_CLI */
 'M', 'C', 'O', 'D', '_', 'C', 'L', 'I', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02566) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02571) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 93, 0,	/* 93 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	15, 0,	/* MCOD_CLI */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC55.PRG:SAC55 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '5', '5', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '5', '5', 0,
	HB_P_LOCALNAME, 255, 255,	/* MCOD_CLI */
 'M', 'C', 'O', 'D', '_', 'C', 'L', 'I', 0,
	HB_P_LOCALNAME, 254, 255,	/* LCI */
 'L', 'C', 'I', 0,
	HB_P_LOCALNAME, 253, 255,	/* CCI */
 'C', 'C', 'I', 0,
/* 02663 */ HB_P_LINE, 60, 0,	/* 60 */
	HB_P_PUSHSYMNEAR, 35,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
/* 02689 */ HB_P_LINEOFFSET, 49,	/* 60 */
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02703 */ HB_P_LINEOFFSET, 50,	/* 61 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 25, 0,	/* GETLIST */
/* 02725 */ HB_P_LINEOFFSET, 51,	/* 62 */
	HB_P_PUSHSYMNEAR, 33,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 02742) */
/* 02737 */ HB_P_LINEOFFSET, 52,	/* 63 */
	HB_P_JUMP, 125, 11,	/* 2941 (abs: 05680) */
/* 02742 */ HB_P_LINEOFFSET, 54,	/* 65 */
	HB_P_PUSHSYMNEAR, 20,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'm', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'c', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', '/', 'o', ' ', 'r', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 02800 */ HB_P_LINEOFFSET, 55,	/* 66 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 36, 0,	/* CONS_PRODU */
/* 02808 */ HB_P_LINEOFFSET, 56,	/* 67 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'e', 'n', 't', 'p', 'r', 'o', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 37,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 38, 0,	/* CCOMM */
/* 02888 */ HB_P_LINEOFFSET, 57,	/* 68 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 37,	/* 37 (abs: 02934) */
/* 02899 */ HB_P_LINEOFFSET, 58,	/* 69 */
	HB_P_PUSHVARIABLE, 38, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 38, 0,	/* CCOMM */
/* 02934 */ HB_P_LINEOFFSET, 60,	/* 71 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 46,	/* 46 (abs: 02990) */
/* 02946 */ HB_P_LINEOFFSET, 61,	/* 72 */
	HB_P_PUSHVARIABLE, 38, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 38, 0,	/* CCOMM */
/* 02990 */ HB_P_LINEOFFSET, 63,	/* 74 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 03043) */
/* 03001 */ HB_P_LINEOFFSET, 64,	/* 75 */
	HB_P_PUSHVARIABLE, 38, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 38, 0,	/* CCOMM */
/* 03043 */ HB_P_LINEOFFSET, 66,	/* 77 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MCOD_OPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 03097) */
/* 03054 */ HB_P_LINEOFFSET, 67,	/* 78 */
	HB_P_PUSHVARIABLE, 38, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MCOD_OPE */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 38, 0,	/* CCOMM */
/* 03097 */ HB_P_LINEOFFSET, 69,	/* 80 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 03151) */
/* 03108 */ HB_P_LINEOFFSET, 70,	/* 81 */
	HB_P_PUSHVARIABLE, 38, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 38, 0,	/* CCOMM */
/* 03151 */ HB_P_LINEOFFSET, 72,	/* 83 */
	HB_P_PUSHVARIABLE, 38, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'a', 't', 'a', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 38, 0,	/* CCOMM */
/* 03177 */ HB_P_LINEOFFSET, 73,	/* 84 */
	HB_P_MESSAGE, 40, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 41,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 38, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 36, 0,	/* CONS_PRODU */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03198 */ HB_P_LINEOFFSET, 75,	/* 86 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 42, 0,	/* CONS_PED */
/* 03206 */ HB_P_LINEOFFSET, 76,	/* 87 */
	HB_P_PUSHSTRSHORT, 93,	/* 93 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'e', 'm', 'p', 'r', 'e', 's', 'a', ',', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ',', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ',', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'p', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ',', 'p', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ',', 'p', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ',', 'p', 'm', 'e', 'r', 'c', ',', 'p', 'q', 'u', 'a', 'n', 't', 'd', ',', 'p', 'p', 'a', 'g', ' ', 0, 
	HB_P_POPVARIABLE, 38, 0,	/* CCOMM */
/* 03306 */ HB_P_LINEOFFSET, 77,	/* 88 */
	HB_P_PUSHVARIABLE, 38, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ' ', '>', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 38, 0,	/* CCOMM */
/* 03409 */ HB_P_LINEOFFSET, 78,	/* 89 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 03456) */
/* 03420 */ HB_P_LINEOFFSET, 79,	/* 90 */
	HB_P_PUSHVARIABLE, 38, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'p', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 38, 0,	/* CCOMM */
/* 03456 */ HB_P_LINEOFFSET, 81,	/* 92 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 47,	/* 47 (abs: 03513) */
/* 03468 */ HB_P_LINEOFFSET, 82,	/* 93 */
	HB_P_PUSHVARIABLE, 38, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 38, 0,	/* CCOMM */
/* 03513 */ HB_P_LINEOFFSET, 84,	/* 95 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 03567) */
/* 03524 */ HB_P_LINEOFFSET, 85,	/* 96 */
	HB_P_PUSHVARIABLE, 38, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 38, 0,	/* CCOMM */
/* 03567 */ HB_P_LINEOFFSET, 87,	/* 98 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MCOD_OPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 46,	/* 46 (abs: 03622) */
/* 03578 */ HB_P_LINEOFFSET, 88,	/* 99 */
	HB_P_PUSHVARIABLE, 38, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MCOD_OPE */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 38, 0,	/* CCOMM */
/* 03622 */ HB_P_LINEOFFSET, 90,	/* 101 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 46,	/* 46 (abs: 03677) */
/* 03633 */ HB_P_LINEOFFSET, 91,	/* 102 */
	HB_P_PUSHVARIABLE, 38, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 38, 0,	/* CCOMM */
/* 03677 */ HB_P_LINEOFFSET, 93,	/* 104 */
	HB_P_PUSHVARIABLE, 38, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 38, 0,	/* CCOMM */
/* 03707 */ HB_P_LINEOFFSET, 94,	/* 105 */
	HB_P_MESSAGE, 40, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 41,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 38, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 42, 0,	/* CONS_PED */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03728 */ HB_P_LINEOFFSET, 95,	/* 106 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* I 0*/
/* 03734 */ HB_P_LINEOFFSET, 96,	/* 107 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 18,	/* CONS_MOV */
/* 03741 */ HB_P_LINEOFFSET, 97,	/* 108 */
	HB_P_LOCALNEARSETINT, 8, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_PUSHSYMNEAR, 43,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 36, 0,	/* CONS_PRODU */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 111,	/* 111 (abs: 03869) */
/* 03760 */ HB_P_LINEOFFSET, 98,	/* 109 */
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* CONS_MOV */
	HB_P_PUSHMEMVAR, 36, 0,	/* CONS_PRODU */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 36, 0,	/* CONS_PRODU */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 36, 0,	/* CONS_PRODU */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 36, 0,	/* CONS_PRODU */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 36, 0,	/* CONS_PRODU */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 36, 0,	/* CONS_PRODU */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 36, 0,	/* CONS_PRODU */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 36, 0,	/* CONS_PRODU */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 36, 0,	/* CONS_PRODU */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 36, 0,	/* CONS_PRODU */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 10, 0,	/* 10 */
	HB_P_DOSHORT, 2,
/* 03861 */ HB_P_LINEOFFSET, 99,	/* 110 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 136,	/* -120 (abs: 03747) */
/* 03869 */ HB_P_LINEOFFSET, 100,	/* 111 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* I 0*/
/* 03875 */ HB_P_LINEOFFSET, 101,	/* 112 */
	HB_P_LOCALNEARSETINT, 8, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_PUSHSYMNEAR, 43,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 111,	/* 111 (abs: 04003) */
/* 03894 */ HB_P_LINEOFFSET, 102,	/* 113 */
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* CONS_MOV */
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 10, 0,	/* 10 */
	HB_P_DOSHORT, 2,
/* 03995 */ HB_P_LINEOFFSET, 103,	/* 114 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 136,	/* -120 (abs: 03881) */
/* 04003 */ HB_P_LINEOFFSET, 104,	/* 115 */
	HB_P_PUSHSYMNEAR, 43,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 59,	/* 59 (abs: 04073) */
/* 04016 */ HB_P_LINEOFFSET, 105,	/* 116 */
	HB_P_PUSHSYMNEAR, 44,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 04068 */ HB_P_LINEOFFSET, 106,	/* 117 */
	HB_P_JUMP, 174, 242,	/* -3410 (abs: 00660) */
/* 04073 */ HB_P_LINEOFFSET, 108,	/* 119 */
	HB_P_PUSHSYMNEAR, 45,	/* ASORT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* CONS_MOV */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 65, 0,	/* 65 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC55.PRG:SAC55 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '5', '5', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '5', '5', 0,
	HB_P_LOCALNAME, 1, 0,	/* X */
 'X', 0,
	HB_P_LOCALNAME, 2, 0,	/* Y */
 'Y', 0,
/* 04132 */ HB_P_LINE, 119, 0,	/* 119 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_LESS,
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 4,
/* 04149 */ HB_P_LINEOFFSET, 110,	/* 121 */
	HB_P_PUSHSYMNEAR, 46,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'R', 'E', 'S', '_', 'M', 'O', 'V', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 04181) */
/* 04176 */ HB_P_LINEOFFSET, 110,	/* 121 */
	HB_P_JUMP, 66, 242,	/* -3518 (abs: 00660) */
/* 04181 */ HB_P_LINEOFFSET, 111,	/* 122 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'R', 'E', 'S', '_', 'M', 'O', 'V', '.', 'R', 'E', 'L', 0, 
	HB_P_POPVARIABLE, 10, 0,	/* MARQ */
/* 04200 */ HB_P_LINEOFFSET, 112,	/* 123 */
	HB_P_LOCALNEARSETINT, 20, 0, 0,	/* MTOT_ENT 0*/
	HB_P_PUSHLOCALNEAR, 20,	/* MTOT_ENT */
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 04211 */ HB_P_LINEOFFSET, 113,	/* 124 */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'L', 'i', 's', 't', 'a', 'g', 'e', 'm', ' ', 'd', 'e', ' ', 'M', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'P', 'R', 'O', 'D', 'U', 'C', 'A', 'O', 0, 
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 04249 */ HB_P_LINEOFFSET, 114,	/* 125 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 04294) */
/* 04260 */ HB_P_LINEOFFSET, 115,	/* 126 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', '-', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 39,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 04294 */ HB_P_LINEOFFSET, 117,	/* 128 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MCOD_OPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 04339) */
/* 04305 */ HB_P_LINEOFFSET, 118,	/* 129 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', '-', ' ', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 39,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MCOD_OPE */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 04339 */ HB_P_LINEOFFSET, 120,	/* 131 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', 'e', ' ', 0, 
	HB_P_PUSHSYMNEAR, 47,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 't', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 04375 */ HB_P_LINEOFFSET, 121,	/* 132 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* I 0*/
/* 04381 */ HB_P_LINEOFFSET, 122,	/* 133 */
	HB_P_LOCALNEARSETINT, 8, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_PUSHSYMNEAR, 43,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 41, 3,	/* 809 (abs: 05206) */
/* 04400 */ HB_P_LINEOFFSET, 123,	/* 134 */
	HB_P_PUSHSYMNEAR, 48,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_PUSHSYMNEAR, 47,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 04422 */ HB_P_LINEOFFSET, 124,	/* 135 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 04441) */
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 105, 1,	/* 361 (abs: 04802) */
/* 04444 */ HB_P_LINEOFFSET, 125,	/* 136 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 04453 */ HB_P_LINEOFFSET, 126,	/* 137 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 04469) */
/* 04462 */ HB_P_LINEOFFSET, 127,	/* 138 */
	HB_P_PUSHSYMNEAR, 50,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04469 */ HB_P_LINEOFFSET, 129,	/* 140 */
	HB_P_PUSHSYMNEAR, 51,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 04487 */ HB_P_LINEOFFSET, 130,	/* 141 */
	HB_P_PUSHSYMNEAR, 52,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 04501 */ HB_P_LINEOFFSET, 131,	/* 142 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 04533 */ HB_P_LINEOFFSET, 132,	/* 143 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 53,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 04566 */ HB_P_LINEOFFSET, 133,	/* 144 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 53,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04611 */ HB_P_LINEOFFSET, 134,	/* 145 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 53,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 04649 */ HB_P_LINEOFFSET, 135,	/* 146 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 53,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'V', 'n', 'd', 0, 
	HB_P_DOSHORT, 1,
/* 04680 */ HB_P_LINEOFFSET, 136,	/* 147 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 53,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'p', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 04711 */ HB_P_LINEOFFSET, 137,	/* 148 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 53,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'C', 'l', 'i', '.', 0, 
	HB_P_DOSHORT, 1,
/* 04744 */ HB_P_LINEOFFSET, 138,	/* 149 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 53,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'N', 'o', '.', 'P', 'e', 'd', 0, 
	HB_P_DOSHORT, 1,
/* 04778 */ HB_P_LINEOFFSET, 139,	/* 150 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 04802 */ HB_P_LINEOFFSET, 141,	/* 152 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04831 */ HB_P_LINEOFFSET, 142,	/* 153 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 53,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04864 */ HB_P_LINEOFFSET, 143,	/* 154 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 53,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04897 */ HB_P_LINEOFFSET, 144,	/* 155 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 53,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04948 */ HB_P_LINEOFFSET, 145,	/* 156 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 53,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04981 */ HB_P_LINEOFFSET, 146,	/* 157 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 53,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05014 */ HB_P_LINEOFFSET, 147,	/* 158 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 53,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05047 */ HB_P_LINEOFFSET, 148,	/* 159 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 53,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05080 */ HB_P_LINEOFFSET, 149,	/* 160 */
	HB_P_PUSHLOCALNEAR, 18,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 54,	/* 54 (abs: 05149) */
/* 05097 */ HB_P_LINEOFFSET, 150,	/* 161 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTOT_ENT */
	HB_P_PUSHLOCALNEAR, 18,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* MTOT_ENT */
/* 05112 */ HB_P_LINEOFFSET, 151,	/* 162 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 53,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'E', 'N', 'T', 'R', 'A', 'D', 'A', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 50,	/* 50 (abs: 05197) */
/* 05149 */ HB_P_LINEOFFSET, 153,	/* 164 */
	HB_P_PUSHLOCALNEAR, 21,	/* MTOT_SAI */
	HB_P_PUSHLOCALNEAR, 18,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 21,	/* MTOT_SAI */
/* 05164 */ HB_P_LINEOFFSET, 154,	/* 165 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 53,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', 'A', 'I', 'D', 'A', 0, 
	HB_P_DOSHORT, 1,
/* 05197 */ HB_P_LINEOFFSET, 156,	/* 167 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* I 1*/
	HB_P_JUMP, 208, 252,	/* -816 (abs: 04387) */
/* 05206 */ HB_P_LINEOFFSET, 157,	/* 168 */
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 53,	/* 53 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 05252) */
/* 05218 */ HB_P_LINEOFFSET, 158,	/* 169 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 05227 */ HB_P_LINEOFFSET, 159,	/* 170 */
	HB_P_PUSHSYMNEAR, 50,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05234 */ HB_P_LINEOFFSET, 160,	/* 171 */
	HB_P_PUSHSYMNEAR, 51,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 05252 */ HB_P_LINEOFFSET, 162,	/* 173 */
	HB_P_PUSHSYMNEAR, 52,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 05266 */ HB_P_LINEOFFSET, 163,	/* 174 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'R', ' ', 'E', ' ', 'S', ' ', 'U', ' ', 'M', ' ', 'O', ' ', ' ', ' ', 'G', ' ', 'E', ' ', 'R', ' ', 'A', ' ', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 05313 */ HB_P_LINEOFFSET, 164,	/* 175 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'E', 'N', 'T', 'R', 'A', 'D', 'A', 'S', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 54,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MTOT_ENT */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05380 */ HB_P_LINEOFFSET, 165,	/* 176 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'S', 'A', 'I', 'D', 'A', 'S', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 54,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MTOT_SAI */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05447 */ HB_P_LINEOFFSET, 166,	/* 177 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 05503 */ HB_P_LINEOFFSET, 167,	/* 178 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'S', 'a', 'l', 'd', 'o', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 54,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MTOT_ENT */
	HB_P_PUSHLOCALNEAR, 21,	/* MTOT_SAI */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05573 */ HB_P_LINEOFFSET, 168,	/* 179 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 05599 */ HB_P_LINEOFFSET, 169,	/* 180 */
	HB_P_PUSHSYMNEAR, 50,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05606 */ HB_P_LINEOFFSET, 170,	/* 181 */
	HB_P_PUSHSYMNEAR, 56,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 05615 */ HB_P_LINEOFFSET, 171,	/* 182 */
	HB_P_PUSHSYMNEAR, 57,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 57,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 57,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 05656 */ HB_P_LINEOFFSET, 172,	/* 183 */
	HB_P_PUSHSYMNEAR, 58,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'R', 'E', 'S', '_', 'M', 'O', 'V', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 103, 236,	/* -5017 (abs: 00660) */
/* 05680 */ HB_P_LINEOFFSET, 183,	/* 194 */
	HB_P_PUSHSYMNEAR, 59,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05687 */ HB_P_LINEOFFSET, 184,	/* 195 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 05692 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_INITLINES()
{
   static const BYTE pcode[] =
   {
	HB_P_MODULENAME,	/* SAC55 */
 'S', 'A', 'C', '5', '5', 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', ':', 92, 'h', 'e', 'l', 'i', 'o', 92, 's', 'i', 'a', 'c', 'h', 'b', 92, 'S', 'A', 'C', '5', '5', '.', 'P', 'R', 'G', 0, 
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	16, 'H', 211, 253, 254, 255, 255, 254, 190, 'm', 219, 183, 'm', 255, 191, '~', 251, 247, 127, 255, 183, 239, 255, 0, 12, 0, 
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00072 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

