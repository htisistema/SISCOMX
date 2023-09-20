/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <saclistpre.prg>
 * Command: C:\xharbour997\bin\harbour.exe C:\helio\siachb\saclistpre.prg /q /oC:\helio\siachb\saclistpre.c /M /N /B 
 * Created: 2018.04.09 19:28:43 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "saclistpre.prg"

HB_FUNC( SACLISTPRE );
HB_FUNC_INITLINES();
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
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( __MVXRELEASE );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( ASORT );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( __DBGENTRY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACLISTPRE )
{ "SACLISTPRE", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACLISTPRE )}, NULL },
{ "MPRG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTRACO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "CONS_PRESE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "__MVXRELEASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVXRELEASE )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "MTIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "ASORT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASORT )}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "__DBGENTRY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGENTRY )}, NULL },
{ "(_INITLINES)", {HB_FS_INITEXIT}, {hb_INITLINES}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACLISTPRE )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACLISTPRE
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACLISTPRE = hb_vm_SymbolInit_SACLISTPRE;
   #pragma data_seg()
#endif

HB_FUNC( SACLISTPRE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 18, 0,	/* locals, params */
	HB_P_MODULENAME,	/* saclistpre.prg:SACLISTPRE */
 's', 'a', 'c', 'l', 'i', 's', 't', 'p', 'r', 'e', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'L', 'I', 'S', 'T', 'P', 'R', 'E', 0,
	HB_P_MODULENAME,	/* C:\helio\siachb\saclistpre.prg: */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 'l', 'i', 's', 't', 'p', 'r', 'e', '.', 'p', 'r', 'g', ':', 0,
/* 00063 */ HB_P_BASELINE, 10, 0,	/* 10 */
	HB_P_LOCALNAME, 1, 0,	/* TELA */
 'T', 'E', 'L', 'A', 0,
	HB_P_LOCALNAME, 2, 0,	/* LCI */
 'L', 'C', 'I', 0,
	HB_P_LOCALNAME, 3, 0,	/* CCI */
 'C', 'C', 'I', 0,
	HB_P_LOCALNAME, 4, 0,	/* LBA */
 'L', 'B', 'A', 0,
	HB_P_LOCALNAME, 5, 0,	/* CBA */
 'C', 'B', 'A', 0,
	HB_P_LOCALNAME, 6, 0,	/* OPCAO */
 'O', 'P', 'C', 'A', 'O', 0,
	HB_P_LOCALNAME, 7, 0,	/* I */
 'I', 0,
	HB_P_LOCALNAME, 8, 0,	/* PAG */
 'P', 'A', 'G', 0,
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* PAG 0*/
	HB_P_LOCALNAME, 9, 0,	/* MTIPO */
 'M', 'T', 'I', 'P', 'O', 0,
	HB_P_LOCALNEARSETSTR, 9, 1, 0,	/* MTIPO 1*/
	0, 
	HB_P_LOCALNAME, 10, 0,	/* CONS_MERC */
 'C', 'O', 'N', 'S', '_', 'M', 'E', 'R', 'C', 0,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 10,	/* CONS_MERC */
	HB_P_LOCALNAME, 11, 0,	/* MTIPO_ORDEM */
 'M', 'T', 'I', 'P', 'O', '_', 'O', 'R', 'D', 'E', 'M', 0,
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* MTIPO_ORDEM 0*/
	HB_P_LOCALNAME, 12, 0,	/* M_IMPRIMIR */
 'M', '_', 'I', 'M', 'P', 'R', 'I', 'M', 'I', 'R', 0,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 12,	/* M_IMPRIMIR */
	HB_P_LOCALNAME, 13, 0,	/* MOP_ACRES */
 'M', 'O', 'P', '_', 'A', 'C', 'R', 'E', 'S', 0,
	HB_P_LOCALNAME, 14, 0,	/* MOP_EXCL */
 'M', 'O', 'P', '_', 'E', 'X', 'C', 'L', 0,
	HB_P_LOCALNAME, 15, 0,	/* MOP_SALDO */
 'M', 'O', 'P', '_', 'S', 'A', 'L', 'D', 'O', 0,
	HB_P_LOCALNAME, 16, 0,	/* MTOT_ITEM */
 'M', 'T', 'O', 'T', '_', 'I', 'T', 'E', 'M', 0,
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* MTOT_ITEM 0*/
	HB_P_LOCALNAME, 17, 0,	/* MSALDO_MER */
 'M', 'S', 'A', 'L', 'D', 'O', '_', 'M', 'E', 'R', 0,
	HB_P_LOCALNAME, 18, 0,	/* CONS_MOV */
 'C', 'O', 'N', 'S', '_', 'M', 'O', 'V', 0,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 18,	/* CONS_MOV */
/* 00283 */ HB_P_LINEOFFSET, 3,	/* 13 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'S', 'A', 'C', 'L', 'I', 'S', 'T', 'P', 'R', 'E', 0, 
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 6,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 10,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MPRG */
	HB_P_PUSHSYMNEAR, 2,	/* MTRACO */
	HB_P_PUSHSYMNEAR, 3,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 4,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 5,	/* MARQ */
	HB_P_PUSHSYMNEAR, 7,	/* CONS_PRESE */
	HB_P_PUSHSYMNEAR, 8,	/* CONS_CLI */
	HB_P_PUSHSYMNEAR, 9,	/* MCOD_CLI */
	HB_P_DOSHORT, 8,
	HB_P_POPVARIABLE, 9, 0,	/* MCOD_CLI */
	HB_P_POPVARIABLE, 8, 0,	/* CONS_CLI */
	HB_P_POPVARIABLE, 7, 0,	/* CONS_PRESE */
	HB_P_POPVARIABLE, 5, 0,	/* MARQ */
	HB_P_POPVARIABLE, 4, 0,	/* MIMP_TIPO */
	HB_P_POPVARIABLE, 1, 0,	/* MPRG */
/* 00352 */ HB_P_LINEOFFSET, 5,	/* 15 */
	HB_P_PUSHSYMNEAR, 11,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'L', 'I', 'S', 'T', 'A', ' ', 'D', 'E', ' ', 'P', 'R', 'E', 'S', 'E', 'N', 'T', 'E', 'S', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '6', 0, 
	HB_P_PUSHMEMVAR, 12, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00418) */
/* 00413 */ HB_P_LINEOFFSET, 6,	/* 16 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00418 */ HB_P_LINEOFFSET, 8,	/* 18 */
	HB_P_PUSHSYMNEAR, 13,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 2, 0,	/* MTRACO */
/* 00435 */ HB_P_LINEOFFSET, 9,	/* 19 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_POPLOCALNEAR, 2,	/* LCI */
/* 00445 */ HB_P_LINEOFFSET, 10,	/* 20 */
	HB_P_LOCALNEARSETINT, 4, 22, 0,	/* LBA 22*/
/* 00451 */ HB_P_LINEOFFSET, 11,	/* 21 */
	HB_P_LOCALNEARSETINT, 5, 70, 0,	/* CBA 70*/
/* 00457 */ HB_P_LINEOFFSET, 13,	/* 23 */
	HB_P_PUSHSYMNEAR, 14,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'L', 'I', 'S', 'T', 'A', ' ', 'D', 'E', ' ', 'P', 'R', 'E', 'S', 'E', 'N', 'T', 'E', 0, 
	HB_P_DOSHORT, 5,
/* 00492 */ HB_P_LINEOFFSET, 15,	/* 25 */
/* 00494 */ HB_P_LINEOFFSET, 17,	/* 27 */
	HB_P_PUSHMEMVAR, 15, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 3, 0,	/* MTIPO_IMP */
/* 00507 */ HB_P_LINEOFFSET, 19,	/* 29 */
	HB_P_PUSHSYMNEAR, 16,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DOSHORT, 4,
/* 00520 */ HB_P_LINEOFFSET, 20,	/* 30 */
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* MTIPO_ORDEM 0*/
	HB_P_PUSHLOCALNEAR, 11,	/* MTIPO_ORDEM */
	HB_P_POPVARIABLE, 9, 0,	/* MCOD_CLI */
/* 00531 */ HB_P_LINEOFFSET, 21,	/* 31 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* MTOT_ITEM 0*/
/* 00537 */ HB_P_LINEOFFSET, 22,	/* 32 */
	HB_P_LOCALNEARSETSTR, 14, 2, 0,	/* MOP_EXCL 2*/
	'N', 0, 
	HB_P_PUSHLOCALNEAR, 14,	/* MOP_EXCL */
	HB_P_POPLOCALNEAR, 13,	/* MOP_ACRES */
/* 00549 */ HB_P_LINEOFFSET, 23,	/* 33 */
	HB_P_LOCALNEARSETSTR, 17, 2, 0,	/* MSALDO_MER 2*/
	' ', 0, 
	HB_P_PUSHLOCALNEAR, 17,	/* MSALDO_MER */
	HB_P_POPLOCALNEAR, 15,	/* MOP_SALDO */
/* 00561 */ HB_P_LINEOFFSET, 24,	/* 34 */
	HB_P_PUSHSYMNEAR, 17,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00616 */ HB_P_LINEOFFSET, 25,	/* 35 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00669 */ HB_P_LINEOFFSET, 26,	/* 36 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'O', 'r', 'd', 'e', 'm', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00725 */ HB_P_LINEOFFSET, 27,	/* 37 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'S', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', 'E', 'x', 'c', 'l', 'u', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00781 */ HB_P_LINEOFFSET, 28,	/* 38 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'S', 'o', ' ', 'P', 'r', 'o', 'd', '.', '[', 'C', ']', 'o', 'm', ' ', '[', 'S', ']', 'e', 'm', ' ', 'S', 'A', 'L', 'D', 'O', ' ', 'L', 'i', 's', 't', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00837 */ HB_P_LINEOFFSET, 29,	/* 39 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'S', 'o', ' ', 'P', 'r', 'o', 'd', '.', '[', 'C', ']', 'o', 'm', ' ', '[', 'S', ']', 'e', 'm', ' ', 'S', 'A', 'L', 'D', 'O', ' ', 'E', 's', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00893 */ HB_P_LINEOFFSET, 31,	/* 41 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 34, 0,	/* 34*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00954 */ HB_P_LINEOFFSET, 32,	/* 42 */
	HB_P_PUSHSYMNEAR, 25,	/* READMODAL */
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
/* 00976 */ HB_P_LINEOFFSET, 33,	/* 43 */
	HB_P_PUSHSYMNEAR, 26,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 01014) */
/* 00988 */ HB_P_LINEOFFSET, 34,	/* 44 */
	HB_P_PUSHSYMNEAR, 27,	/* __MVXRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'p', 'r', 'g', 0, 
	HB_P_DOSHORT, 1,
/* 01002 */ HB_P_LINEOFFSET, 35,	/* 45 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01009 */ HB_P_LINEOFFSET, 36,	/* 46 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01014 */ HB_P_LINEOFFSET, 38,	/* 48 */
	HB_P_PUSHSYMNEAR, 29,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 212, 0,	/* 212 (abs: 01236) */
/* 01027 */ HB_P_LINEOFFSET, 39,	/* 49 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 8, 0,	/* CONS_CLI */
/* 01035 */ HB_P_LINEOFFSET, 40,	/* 50 */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 31,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 32, 0,	/* CCOMM */
/* 01096 */ HB_P_LINEOFFSET, 41,	/* 51 */
	HB_P_MESSAGE, 33, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 34,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 32, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 8, 0,	/* CONS_CLI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01117 */ HB_P_LINEOFFSET, 42,	/* 52 */
	HB_P_PUSHSYMNEAR, 35,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 01185) */
/* 01131 */ HB_P_LINEOFFSET, 43,	/* 53 */
	HB_P_PUSHSYMNEAR, 36,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'r', ' ', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01180 */ HB_P_LINEOFFSET, 44,	/* 54 */
	HB_P_JUMP, 78, 253,	/* -690 (abs: 00492) */
/* 01185 */ HB_P_LINEOFFSET, 46,	/* 56 */
	HB_P_PUSHSYMNEAR, 37,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01194 */ HB_P_LINEOFFSET, 47,	/* 57 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 40, 0,	/* 40*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01228 */ HB_P_LINEOFFSET, 48,	/* 58 */
	HB_P_PUSHSYMNEAR, 37,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01236 */ HB_P_LINEOFFSET, 50,	/* 60 */
	HB_P_PUSHSYMNEAR, 38,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'L', 'F', 'A', 'B', 'E', 'T', 'I', 'C', 'A', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01267 */ HB_P_LINEOFFSET, 51,	/* 61 */
	HB_P_PUSHSYMNEAR, 38,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 39,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', ' ', 'P', 'R', 'E', 'C', 'O', ' ', 'D', 'E', ' ', 'V', 'E', 'N', 'D', 'A', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01310 */ HB_P_LINEOFFSET, 52,	/* 62 */
	HB_P_PUSHSYMNEAR, 40,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 01324 */ HB_P_LINEOFFSET, 53,	/* 63 */
	HB_P_PUSHSYMNEAR, 41,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 95, 0,	/* 95 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MTIPO_ORDEM */
	HB_P_MODULENAME,	/* C:\helio\siachb\saclistpre.prg:SACLISTPRE */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 'l', 'i', 's', 't', 'p', 'r', 'e', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'L', 'I', 'S', 'T', 'P', 'R', 'E', 0,
	HB_P_LOCALNAME, 255, 255,	/* MTIPO_ORDEM */
 'M', 'T', 'I', 'P', 'O', '_', 'O', 'R', 'D', 'E', 'M', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
/* 01402 */ HB_P_LINE, 63, 0,	/* 63 */
	HB_P_PUSHSYMNEAR, 42,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01418) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01423) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 't', 'i', 'p', 'o', '_', 'o', 'r', 'd', 'e', 'm', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 11,	/* MTIPO_ORDEM */
/* 01442 */ HB_P_LINEOFFSET, 54,	/* 64 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 34, 0,	/* 34*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 86, 0,	/* 86 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MOP_EXCL */
	HB_P_MODULENAME,	/* C:\helio\siachb\saclistpre.prg:SACLISTPRE */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 'l', 'i', 's', 't', 'p', 'r', 'e', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'L', 'I', 'S', 'T', 'P', 'R', 'E', 0,
	HB_P_LOCALNAME, 255, 255,	/* MOP_EXCL */
 'M', 'O', 'P', '_', 'E', 'X', 'C', 'L', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01548) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01553) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'o', 'p', '_', 'e', 'x', 'c', 'l', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 77, 0,	/* 77 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MOP_EXCL */
	HB_P_MODULENAME,	/* C:\helio\siachb\saclistpre.prg:SACLISTPRE */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 'l', 'i', 's', 't', 'p', 'r', 'e', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'L', 'I', 'S', 'T', 'P', 'R', 'E', 0,
	HB_P_LOCALNAME, 255, 255,	/* MOP_EXCL */
 'M', 'O', 'P', '_', 'E', 'X', 'C', 'L', 0,
/* 01634 */ HB_P_LINE, 64, 0,	/* 64 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
/* 01652 */ HB_P_LINEOFFSET, 54,	/* 64 */
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01666 */ HB_P_LINEOFFSET, 55,	/* 65 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 34, 0,	/* 34*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 87, 0,	/* 87 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MOP_SALDO */
	HB_P_MODULENAME,	/* C:\helio\siachb\saclistpre.prg:SACLISTPRE */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 'l', 'i', 's', 't', 'p', 'r', 'e', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'L', 'I', 'S', 'T', 'P', 'R', 'E', 0,
	HB_P_LOCALNAME, 255, 255,	/* MOP_SALDO */
 'M', 'O', 'P', '_', 'S', 'A', 'L', 'D', 'O', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01773) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01778) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'o', 'p', '_', 's', 'a', 'l', 'd', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 80, 0,	/* 80 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MOP_SALDO */
	HB_P_MODULENAME,	/* C:\helio\siachb\saclistpre.prg:SACLISTPRE */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 'l', 'i', 's', 't', 'p', 'r', 'e', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'L', 'I', 'S', 'T', 'P', 'R', 'E', 0,
	HB_P_LOCALNAME, 255, 255,	/* MOP_SALDO */
 'M', 'O', 'P', '_', 'S', 'A', 'L', 'D', 'O', 0,
/* 01861 */ HB_P_LINE, 65, 0,	/* 65 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', ',', 'S', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
/* 01881 */ HB_P_LINEOFFSET, 55,	/* 65 */
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01895 */ HB_P_LINEOFFSET, 56,	/* 66 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 34, 0,	/* 34*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 88, 0,	/* 88 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MSALDO_MER */
	HB_P_MODULENAME,	/* C:\helio\siachb\saclistpre.prg:SACLISTPRE */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 'l', 'i', 's', 't', 'p', 'r', 'e', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'L', 'I', 'S', 'T', 'P', 'R', 'E', 0,
	HB_P_LOCALNAME, 255, 255,	/* MSALDO_MER */
 'M', 'S', 'A', 'L', 'D', 'O', '_', 'M', 'E', 'R', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02003) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02008) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 81, 0,	/* 81 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MSALDO_MER */
	HB_P_MODULENAME,	/* C:\helio\siachb\saclistpre.prg:SACLISTPRE */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 'l', 'i', 's', 't', 'p', 'r', 'e', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'L', 'I', 'S', 'T', 'P', 'R', 'E', 0,
	HB_P_LOCALNAME, 255, 255,	/* MSALDO_MER */
 'M', 'S', 'A', 'L', 'D', 'O', '_', 'M', 'E', 'R', 0,
/* 02093 */ HB_P_LINE, 66, 0,	/* 66 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', ',', 'S', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
/* 02113 */ HB_P_LINEOFFSET, 56,	/* 66 */
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02127 */ HB_P_LINEOFFSET, 58,	/* 68 */
	HB_P_PUSHSYMNEAR, 25,	/* READMODAL */
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
/* 02149 */ HB_P_LINEOFFSET, 59,	/* 69 */
	HB_P_PUSHSYMNEAR, 26,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 02166) */
/* 02161 */ HB_P_LINEOFFSET, 60,	/* 70 */
	HB_P_JUMP, 121, 249,	/* -1671 (abs: 00492) */
/* 02166 */ HB_P_LINEOFFSET, 62,	/* 72 */
	HB_P_PUSHSYMNEAR, 43,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 6,	/* OPCAO */
/* 02201 */ HB_P_LINEOFFSET, 63,	/* 73 */
	HB_P_PUSHLOCALNEAR, 6,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 02222) */
	HB_P_PUSHSYMNEAR, 26,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 02229) */
/* 02224 */ HB_P_LINEOFFSET, 64,	/* 74 */
	HB_P_JUMP, 58, 249,	/* -1734 (abs: 00492) */
/* 02229 */ HB_P_LINEOFFSET, 66,	/* 76 */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'L', 'I', 'S', 'T', 'A', ' ', 'D', 'E', ' ', 'P', 'R', 'E', 'S', 'E', 'N', 'T', 'E', 0, 
	HB_P_POPVARIABLE, 44, 0,	/* MTIT */
/* 02254 */ HB_P_LINEOFFSET, 67,	/* 77 */
	HB_P_PUSHSYMNEAR, 17,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 63,	/* 63 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'm', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'c', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 02326 */ HB_P_LINEOFFSET, 68,	/* 78 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 7, 0,	/* CONS_PRESE */
/* 02334 */ HB_P_LINEOFFSET, 69,	/* 79 */
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'r', 'e', 's', 'e', 'n', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'c', 'l', 'i', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_POPVARIABLE, 32, 0,	/* CCOMM */
/* 02390 */ HB_P_LINEOFFSET, 70,	/* 80 */
	HB_P_PUSHLOCALNEAR, 15,	/* MOP_SALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 02429) */
/* 02401 */ HB_P_LINEOFFSET, 71,	/* 81 */
	HB_P_PUSHVARIABLE, 32, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'q', 't', 'd', ' ', '>', ' ', 39, '0', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 32, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 40,	/* 40 (abs: 02467) */
/* 02429 */ HB_P_LINEOFFSET, 72,	/* 82 */
	HB_P_PUSHLOCALNEAR, 15,	/* MOP_SALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 02467) */
/* 02440 */ HB_P_LINEOFFSET, 73,	/* 83 */
	HB_P_PUSHVARIABLE, 32, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'q', 't', 'd', ' ', '<', '=', ' ', 39, '0', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 32, 0,	/* CCOMM */
/* 02467 */ HB_P_LINEOFFSET, 75,	/* 85 */
	HB_P_PUSHSYMNEAR, 29,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 02521) */
/* 02479 */ HB_P_LINEOFFSET, 76,	/* 86 */
	HB_P_PUSHVARIABLE, 32, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 31,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 32, 0,	/* CCOMM */
/* 02521 */ HB_P_LINEOFFSET, 79,	/* 89 */
	HB_P_PUSHLOCALNEAR, 14,	/* MOP_EXCL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 70,	/* 70 (abs: 02600) */
/* 02532 */ HB_P_LINEOFFSET, 80,	/* 90 */
	HB_P_PUSHVARIABLE, 44, 0,	/* MTIT */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'E', 'X', 'C', 'L', 'U', 'I', 'D', 'O', 'S', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 44, 0,	/* MTIT */
/* 02563 */ HB_P_LINEOFFSET, 81,	/* 91 */
	HB_P_PUSHVARIABLE, 32, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', 'A', 'N', 'D', ' ', 'e', 'x', 'c', 'l', 'u', 'i', 'd', 'o', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 32, 0,	/* CCOMM */
/* 02600 */ HB_P_LINEOFFSET, 83,	/* 93 */
	HB_P_MESSAGE, 33, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 34,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 32, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 7, 0,	/* CONS_PRESE */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02621 */ HB_P_LINEOFFSET, 84,	/* 94 */
	HB_P_PUSHSYMNEAR, 35,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* CONS_PRESE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 63,	/* 63 (abs: 02696) */
/* 02635 */ HB_P_LINEOFFSET, 85,	/* 95 */
	HB_P_PUSHSYMNEAR, 36,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 'e', 's', 't', 'e', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02691 */ HB_P_LINEOFFSET, 86,	/* 96 */
	HB_P_JUMP, 103, 247,	/* -2201 (abs: 00492) */
/* 02696 */ HB_P_LINEOFFSET, 88,	/* 98 */
	HB_P_PUSHLOCALNEAR, 15,	/* MOP_SALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 02740) */
/* 02707 */ HB_P_LINEOFFSET, 89,	/* 99 */
	HB_P_PUSHVARIABLE, 44, 0,	/* MTIT */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'C', 'O', 'M', ' ', 'S', 'A', 'L', 'D', 'O', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 44, 0,	/* MTIT */
	HB_P_JUMPNEAR, 44,	/* 44 (abs: 02782) */
/* 02740 */ HB_P_LINEOFFSET, 90,	/* 100 */
	HB_P_PUSHLOCALNEAR, 15,	/* MOP_SALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 02782) */
/* 02751 */ HB_P_LINEOFFSET, 91,	/* 101 */
	HB_P_PUSHVARIABLE, 44, 0,	/* MTIT */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'S', 'E', 'M', ' ', 'S', 'A', 'L', 'D', 'O', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 44, 0,	/* MTIT */
/* 02782 */ HB_P_LINEOFFSET, 93,	/* 103 */
	HB_P_PUSHSYMNEAR, 45,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'L', 'I', 'S', 'T', '_', 'P', 'R', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 02815) */
/* 02810 */ HB_P_LINEOFFSET, 94,	/* 104 */
	HB_P_JUMP, 240, 246,	/* -2320 (abs: 00492) */
/* 02815 */ HB_P_LINEOFFSET, 96,	/* 106 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 12,	/* M_IMPRIMIR */
/* 02822 */ HB_P_LINEOFFSET, 97,	/* 107 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* I 0*/
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_POPLOCALNEAR, 8,	/* PAG */
/* 02832 */ HB_P_LINEOFFSET, 98,	/* 108 */
	HB_P_LOCALNEARSETINT, 7, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_PUSHSYMNEAR, 35,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* CONS_PRESE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 51, 3,	/* 819 (abs: 03668) */
/* 02852 */ HB_P_LINEOFFSET, 99,	/* 109 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 10,	/* CONS_MERC */
/* 02859 */ HB_P_LINEOFFSET, 100,	/* 110 */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ',', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 7, 0,	/* CONS_PRESE */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 32, 0,	/* CCOMM */
/* 02938 */ HB_P_LINEOFFSET, 101,	/* 111 */
	HB_P_MESSAGE, 33, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 34,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 32, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 10, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02959 */ HB_P_LINEOFFSET, 102,	/* 112 */
	HB_P_PUSHSYMNEAR, 35,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 02977) */
/* 02972 */ HB_P_LINEOFFSET, 103,	/* 113 */
	HB_P_JUMP, 175, 2,	/* 687 (abs: 03661) */
/* 02977 */ HB_P_LINEOFFSET, 105,	/* 115 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 17,	/* MSALDO_MER */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 02999) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 03006) */
/* 03001 */ HB_P_LINEOFFSET, 106,	/* 116 */
	HB_P_JUMP, 146, 2,	/* 658 (abs: 03661) */
/* 03006 */ HB_P_LINEOFFSET, 107,	/* 117 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 17,	/* MSALDO_MER */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03028) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 03035) */
/* 03030 */ HB_P_LINEOFFSET, 108,	/* 118 */
	HB_P_JUMP, 117, 2,	/* 629 (abs: 03661) */
/* 03035 */ HB_P_LINEOFFSET, 110,	/* 120 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 18,	/* CONS_MOV */
/* 03042 */ HB_P_LINEOFFSET, 111,	/* 121 */
	HB_P_PUSHSTRSHORT, 136,	/* 136 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'q', 'u', 'a', 'n', 't', 'd', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'a', 'c', 'm', 'o', 'v', '.', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, '0', '2', 39, ' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'm', 'o', 'v', '.', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'm', 'o', 'v', '.', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', '=', ' ', 39, 'S', 39, ' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'm', 'o', 'v', '.', 'd', 'e', 'v', 'o', 'l', 'u', 'c', 'a', 'o', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_POPVARIABLE, 32, 0,	/* CCOMM */
/* 03185 */ HB_P_LINEOFFSET, 112,	/* 122 */
	HB_P_PUSHVARIABLE, 32, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 125,	/* 125 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'm', 'o', 'v', '.', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '>', ' ', '0', ' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 's', 'a', 'c', 'm', 'o', 'v', '.', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 39, 'C', 'U', 'P', 'O', 'M', 'E', 39, ' ', 'A', 'N', 'D', ' ', '(', ' ', 's', 'a', 'c', 'm', 'o', 'v', '.', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'l', 'i', 'k', 'e', ' ', 39, 'P', 'D', '%', 39, ' ', 'O', 'R', ' ', ' ', 's', 'a', 'c', 'm', 'o', 'v', '.', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'l', 'i', 'k', 'e', ' ', 39, 'C', 'P', '%', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 32, 0,	/* CCOMM */
/* 03321 */ HB_P_LINEOFFSET, 113,	/* 123 */
	HB_P_PUSHVARIABLE, 32, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 69,	/* 69 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'm', 'o', 'v', '.', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'N', 'O', 'T', ' ', 'L', 'I', 'K', 'E', ' ', 39, 'T', 'R', '%', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 32, 0,	/* CCOMM */
/* 03401 */ HB_P_LINEOFFSET, 114,	/* 124 */
	HB_P_PUSHVARIABLE, 32, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'm', 'o', 'v', '.', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '>', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 32, 0,	/* CCOMM */
/* 03442 */ HB_P_LINEOFFSET, 115,	/* 125 */
	HB_P_PUSHVARIABLE, 32, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'm', 'o', 'v', '.', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 7, 0,	/* CONS_PRESE */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 32, 0,	/* CCOMM */
/* 03490 */ HB_P_LINEOFFSET, 116,	/* 126 */
	HB_P_PUSHVARIABLE, 32, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'p', 'r', 'e', 's', 'e', 'n', 't', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 7, 0,	/* CONS_PRESE */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 32, 0,	/* CCOMM */
/* 03544 */ HB_P_LINEOFFSET, 117,	/* 127 */
	HB_P_MESSAGE, 33, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 34,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 32, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 18, 0,	/* CONS_MOV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03565 */ HB_P_LINEOFFSET, 120,	/* 130 */
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_IMPRIMIR */
	HB_P_PUSHMEMVAR, 7, 0,	/* CONS_PRESE */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 7, 0,	/* CONS_PRESE */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 7, 0,	/* CONS_PRESE */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 7, 0,	/* CONS_PRESE */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 7, 0,	/* CONS_PRESE */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 7, 0,	/* CONS_PRESE */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 7, 0,	/* CONS_PRESE */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 18,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 10, 0,	/* 10 */
	HB_P_DOSHORT, 2,
/* 03659 */ HB_P_LINEOFFSET, 121,	/* 131 */
	HB_P_LOCALNEARADDINT, 7, 1, 0,	/* I 1*/
	HB_P_JUMP, 197, 252,	/* -827 (abs: 02838) */
/* 03668 */ HB_P_LINEOFFSET, 122,	/* 132 */
	HB_P_PUSHLOCALNEAR, 11,	/* MTIPO_ORDEM */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 90,	/* 90 (abs: 03764) */
/* 03676 */ HB_P_LINEOFFSET, 123,	/* 133 */
	HB_P_PUSHSYMNEAR, 46,	/* ASORT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_IMPRIMIR */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 75, 0,	/* 75 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_MODULENAME,	/* C:\helio\siachb\saclistpre.prg:SACLISTPRE */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 'l', 'i', 's', 't', 'p', 'r', 'e', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'L', 'I', 'S', 'T', 'P', 'R', 'E', 0,
	HB_P_LOCALNAME, 1, 0,	/* X */
 'X', 0,
	HB_P_LOCALNAME, 2, 0,	/* Y */
 'Y', 0,
/* 03745 */ HB_P_LINE, 133, 0,	/* 133 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_LESS,
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 88,	/* 88 (abs: 03850) */
/* 03764 */ HB_P_LINEOFFSET, 125,	/* 135 */
	HB_P_PUSHSYMNEAR, 46,	/* ASORT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_IMPRIMIR */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 75, 0,	/* 75 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_MODULENAME,	/* C:\helio\siachb\saclistpre.prg:SACLISTPRE */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 's', 'a', 'c', 'l', 'i', 's', 't', 'p', 'r', 'e', '.', 'p', 'r', 'g', ':', 'S', 'A', 'C', 'L', 'I', 'S', 'T', 'P', 'R', 'E', 0,
	HB_P_LOCALNAME, 1, 0,	/* X */
 'X', 0,
	HB_P_LOCALNAME, 2, 0,	/* Y */
 'Y', 0,
/* 03833 */ HB_P_LINE, 135, 0,	/* 135 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_LESS,
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 4,
/* 03850 */ HB_P_LINEOFFSET, 127,	/* 137 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* I 0*/
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_POPLOCALNEAR, 8,	/* PAG */
/* 03860 */ HB_P_LINEOFFSET, 128,	/* 138 */
	HB_P_LOCALNEARSETINT, 7, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_PUSHSYMNEAR, 35,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_IMPRIMIR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 117, 3,	/* 885 (abs: 04761) */
/* 03879 */ HB_P_LINEOFFSET, 129,	/* 139 */
	HB_P_PUSHSYMNEAR, 47,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_PUSHLOCALNEAR, 12,	/* M_IMPRIMIR */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 03895 */ HB_P_LINEOFFSET, 130,	/* 140 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 03913) */
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 74, 2,	/* 586 (abs: 04499) */
/* 03916 */ HB_P_LINEOFFSET, 131,	/* 141 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 03922 */ HB_P_LINEOFFSET, 132,	/* 142 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 03937) */
/* 03930 */ HB_P_LINEOFFSET, 133,	/* 143 */
	HB_P_PUSHSYMNEAR, 49,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03937 */ HB_P_LINEOFFSET, 135,	/* 145 */
	HB_P_PUSHSYMNEAR, 50,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHVARIABLE, 44, 0,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 9,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 03954 */ HB_P_LINEOFFSET, 136,	/* 146 */
	HB_P_PUSHSYMNEAR, 51,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03968 */ HB_P_LINEOFFSET, 137,	/* 147 */
	HB_P_PUSHSYMNEAR, 29,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 32, 1,	/* 288 (abs: 04266) */
/* 03981 */ HB_P_LINEOFFSET, 138,	/* 148 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04040 */ HB_P_LINEOFFSET, 139,	/* 149 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04083 */ HB_P_LINEOFFSET, 140,	/* 150 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'E', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04126 */ HB_P_LINEOFFSET, 141,	/* 151 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'B', 'a', 'i', 'r', 'r', 'o', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', '-', ' ', 'C', 'i', 'd', 'a', 'd', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', '-', ' ', 'U', 'F', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04213 */ HB_P_LINEOFFSET, 142,	/* 152 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'C', 'a', 's', 'a', 'm', 'e', 'n', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 52,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_IMPRIMIR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04266 */ HB_P_LINEOFFSET, 144,	/* 154 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 13,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04299 */ HB_P_LINEOFFSET, 145,	/* 155 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 97,	/* 97 */
	'C', 'o', 'd', '.', ' ', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'S', 'l', 'd', '.', 'L', 'i', 's', 't', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'S', 'l', 'd', '.', 'E', 's', 't', 'o', 'q', '.', ' ', ' ', ' ', 'Q', 't', 'd', '.', 'V', 'e', 'n', 'd', 'i', 'd', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 04419 */ HB_P_LINEOFFSET, 146,	/* 156 */
	HB_P_PUSHSYMNEAR, 29,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 04466) */
/* 04431 */ HB_P_LINEOFFSET, 147,	/* 157 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 53,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 04466 */ HB_P_LINEOFFSET, 149,	/* 159 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 13,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04499 */ HB_P_LINEOFFSET, 151,	/* 161 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_IMPRIMIR */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* M_IMPRIMIR */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 54,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_IMPRIMIR */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 54,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_IMPRIMIR */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 54,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_IMPRIMIR */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* M_IMPRIMIR */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 04661) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 04665) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 54,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_IMPRIMIR */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04701 */ HB_P_LINEOFFSET, 152,	/* 162 */
	HB_P_PUSHSYMNEAR, 29,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 04746) */
/* 04713 */ HB_P_LINEOFFSET, 153,	/* 163 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 53,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_IMPRIMIR */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04746 */ HB_P_LINEOFFSET, 155,	/* 165 */
	HB_P_LOCALNEARADDINT, 16, 1, 0,	/* MTOT_ITEM 1*/
/* 04752 */ HB_P_LINEOFFSET, 156,	/* 166 */
	HB_P_LOCALNEARADDINT, 7, 1, 0,	/* I 1*/
	HB_P_JUMP, 132, 252,	/* -892 (abs: 03866) */
/* 04761 */ HB_P_LINEOFFSET, 157,	/* 167 */
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 04803) */
/* 04773 */ HB_P_LINEOFFSET, 158,	/* 168 */
	HB_P_PUSHSYMNEAR, 49,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04780 */ HB_P_LINEOFFSET, 159,	/* 169 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 04786 */ HB_P_LINEOFFSET, 160,	/* 170 */
	HB_P_PUSHSYMNEAR, 50,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHVARIABLE, 44, 0,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 9,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 04803 */ HB_P_LINEOFFSET, 162,	/* 172 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 04847 */ HB_P_LINEOFFSET, 163,	/* 173 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'I', 't', 'e', 'm', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 54,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MTOT_ITEM */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04905 */ HB_P_LINEOFFSET, 164,	/* 174 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 04931 */ HB_P_LINEOFFSET, 165,	/* 175 */
	HB_P_PUSHSYMNEAR, 49,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04938 */ HB_P_LINEOFFSET, 166,	/* 176 */
	HB_P_PUSHSYMNEAR, 40,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 40,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 40,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 04979 */ HB_P_LINEOFFSET, 167,	/* 177 */
	HB_P_PUSHSYMNEAR, 56,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'L', 'I', 'S', 'T', '_', 'P', 'R', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 99, 238,	/* -4509 (abs: 00492) */
	HB_P_ENDPROC
/* 05005 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_INITLINES()
{
   static const BYTE pcode[] =
   {
	HB_P_MODULENAME,	/* saclistpre */
 's', 'a', 'c', 'l', 'i', 's', 't', 'p', 'r', 'e', 0,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', ':', 92, 'h', 'e', 'l', 'i', 'o', 92, 's', 'i', 'a', 'c', 'h', 'b', 92, 's', 'a', 'c', 'l', 'i', 's', 't', 'p', 'r', 'e', '.', 'p', 'r', 'g', 0, 
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 164, 189, 234, 255, '~', 127, 247, 'w', 247, 'o', 238, 189, 253, '{', 255, 188, 254, 254, 189, 238, 247, 27, 0, 
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00080 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

