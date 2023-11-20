/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5291.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\hti\SISCOM\SAC5291.PRG /q /oC:\hti\SISCOM\SAC5291.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.29 11:53:22 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5291.PRG"

HB_FUNC( SAC5291 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_GRU );
HB_FUNC_EXTERN( VER_SGRU );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( DTOC );
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

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5291 )
{ "SAC5291", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5291 )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MTIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
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
{ "VER_GRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_GRU )}, NULL },
{ "VER_SGRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SGRU )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "CONS_MOV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "CONS_GRUPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
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
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5291 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5291
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5291 = hb_vm_SymbolInit_SAC5291;
   #pragma data_seg()
#endif

HB_FUNC( SAC5291 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 20, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 10, 0,	/* 10 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', '5', '2', '9', '1', 0, 
	HB_P_LOCALNEARSETINT, 17, 0, 0,	/* MTOT_CUSTO 0*/
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* MTOT_VENDA 0*/
	HB_P_LOCALNEARSETINT, 19, 0, 0,	/* MTOT_GRUPO 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 20,	/* MTOT_GERAL */
/* 00035 */ HB_P_LINEOFFSET, 3,	/* 13 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 8,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 2,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 3,	/* MARQ */
	HB_P_PUSHSYMNEAR, 5,	/* MTIT */
	HB_P_PUSHSYMNEAR, 6,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 7,	/* MPAG */
	HB_P_DOSHORT, 6,
	HB_P_POPVARIABLE, 3, 0,	/* MARQ */
	HB_P_POPVARIABLE, 2, 0,	/* MIMP_TIPO */
/* 00068 */ HB_P_LINEOFFSET, 5,	/* 15 */
	HB_P_LOCALNEARSETSTR, 2, 39, 0,	/* MTITULO 39*/
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'P', '/', 'M', 'E', 'S', 'E', 'S', 0, 
/* 00113 */ HB_P_LINEOFFSET, 6,	/* 16 */
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
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00148) */
/* 00143 */ HB_P_LINEOFFSET, 7,	/* 17 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00148 */ HB_P_LINEOFFSET, 10,	/* 20 */
	HB_P_PUSHSYMNEAR, 11,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MTRACO */
/* 00164 */ HB_P_LINEOFFSET, 12,	/* 22 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_POPLOCALNEAR, 4,	/* LCI */
/* 00174 */ HB_P_LINEOFFSET, 13,	/* 23 */
	HB_P_LOCALNEARSETINT, 6, 22, 0,	/* LBA 22*/
/* 00180 */ HB_P_LINEOFFSET, 14,	/* 24 */
	HB_P_LOCALNEARSETINT, 7, 70, 0,	/* CBA 70*/
/* 00186 */ HB_P_LINEOFFSET, 15,	/* 25 */
	HB_P_PUSHMEMVAR, 12, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 1, 0,	/* MTIPO_IMP */
/* 00199 */ HB_P_LINEOFFSET, 16,	/* 26 */
	HB_P_PUSHSYMNEAR, 13,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_DOSHORT, 5,
/* 00216 */ HB_P_LINEOFFSET, 18,	/* 28 */
	HB_P_PUSHSYMNEAR, 14,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_PUSHLOCALNEAR, 6,	/* LBA */
	HB_P_PUSHLOCALNEAR, 7,	/* CBA */
	HB_P_DOSHORT, 4,
/* 00231 */ HB_P_LINEOFFSET, 20,	/* 30 */
	HB_P_LOCALNEARSETINT, 19, 0, 0,	/* MTOT_GRUPO 0*/
	HB_P_PUSHLOCALNEAR, 19,	/* MTOT_GRUPO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* MTOT_VENDA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* MTOT_CUSTO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* MSUBGRUPO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* MCOD_FORN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* MCOD_VEN */
	HB_P_POPLOCALNEAR, 12,	/* MGRUPO */
/* 00256 */ HB_P_LINEOFFSET, 21,	/* 31 */
	HB_P_LOCALNEARSETSTR, 16, 2, 0,	/* MIMP_LUCRO 2*/
	'N', 0, 
/* 00264 */ HB_P_LINEOFFSET, 22,	/* 32 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 10,	/* MCONS_GRUPO */
/* 00271 */ HB_P_LINEOFFSET, 23,	/* 33 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* MCONS_MOV */
/* 00278 */ HB_P_LINEOFFSET, 24,	/* 34 */
	HB_P_PUSHSYMNEAR, 15,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* MDATA1 */
/* 00298 */ HB_P_LINEOFFSET, 25,	/* 35 */
	HB_P_PUSHSYMNEAR, 15,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 9,	/* MDATA2 */
/* 00318 */ HB_P_LINEOFFSET, 26,	/* 36 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00360 */ HB_P_LINEOFFSET, 27,	/* 37 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'c', 'i', 'a', 'l', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00403 */ HB_P_LINEOFFSET, 28,	/* 38 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00446 */ HB_P_LINEOFFSET, 29,	/* 39 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00489 */ HB_P_LINEOFFSET, 30,	/* 40 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'S', 'u', 'b', '-', 'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00532 */ HB_P_LINEOFFSET, 31,	/* 41 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00575 */ HB_P_LINEOFFSET, 32,	/* 42 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00618 */ HB_P_LINEOFFSET, 33,	/* 43 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'L', 'u', 'c', 'r', 'o', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00661 */ HB_P_LINEOFFSET, 35,	/* 45 */
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 22,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00706) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00711) */
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
	8, 0,	/* MDATA1 */
	HB_P_PUSHSYMNEAR, 23,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00743) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00744) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00762 */ HB_P_LINEOFFSET, 36,	/* 46 */
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 22,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00807) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00812) */
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
	8, 0,	/* MDATA1 */
	9, 0,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00844) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00845) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00863 */ HB_P_LINEOFFSET, 37,	/* 47 */
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 22,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MGRUPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00908) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00913) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 45, 0,	/* 45 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	12, 0,	/* MGRUPO */
	4, 0,	/* LCI */
	5, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 23,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00954) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 21,	/* 21 (abs: 00973) */
	HB_P_PUSHSYMNEAR, 25,	/* VER_GRU */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALREF, 255, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 26, 0,	/* 26*/
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00991 */ HB_P_LINEOFFSET, 38,	/* 48 */
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 22,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MSUBGRUPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01036) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01041) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 's', 'u', 'b', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 47, 0,	/* 47 */
	0, 0,	/* number of local parameters (0) */
	4, 0,	/* number of local variables (4) */
	13, 0,	/* MSUBGRUPO */
	12, 0,	/* MGRUPO */
	4, 0,	/* LCI */
	5, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 23,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01086) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 21,	/* 21 (abs: 01105) */
	HB_P_PUSHSYMNEAR, 26,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 252,	/* localvar4 */
	HB_P_ADDINT, 26, 0,	/* 26*/
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MGRUPO */
	HB_P_PUSHSYMNEAR, 23,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01140 */ HB_P_LINEOFFSET, 39,	/* 49 */
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 22,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MCOD_VEN */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01185) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01190) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 43, 0,	/* 43 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	14, 0,	/* MCOD_VEN */
	4, 0,	/* LCI */
	5, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 23,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01233) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 19,	/* 19 (abs: 01250) */
	HB_P_PUSHSYMNEAR, 27,	/* VEN */
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
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01268 */ HB_P_LINEOFFSET, 40,	/* 50 */
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 22,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MCOD_FORN */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01313) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01318) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 43, 0,	/* 43 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	15, 0,	/* MCOD_FORN */
	4, 0,	/* LCI */
	5, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 23,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01363) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 19,	/* 19 (abs: 01380) */
	HB_P_PUSHSYMNEAR, 28,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 26, 0,	/* 26*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01398 */ HB_P_LINEOFFSET, 41,	/* 51 */
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 22,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MIMP_LUCRO */
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
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'i', 'm', 'p', '_', 'l', 'u', 'c', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MIMP_LUCRO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01503 */ HB_P_LINEOFFSET, 42,	/* 52 */
	HB_P_PUSHSYMNEAR, 29,	/* READMODAL */
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
/* 01525 */ HB_P_LINEOFFSET, 43,	/* 53 */
	HB_P_PUSHSYMNEAR, 28,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MCOD_FORN */
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 26, 0,	/* 26*/
	HB_P_DOSHORT, 3,
/* 01544 */ HB_P_LINEOFFSET, 44,	/* 54 */
	HB_P_PUSHSYMNEAR, 30,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01559) */
	HB_P_JUMP, 18, 15,	/* 3858 (abs: 05414) */
/* 01559 */ HB_P_LINEOFFSET, 47,	/* 57 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'E', 's', 'p', 'e', 'r', 'e', ' ', 'o', ' ', 'F', 'i', 'n', 'a', 'l', ' ', 'd', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'O', 'K', ' ', '-', ' ', '[', 'E', 'S', 'C', ']', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 01611 */ HB_P_LINEOFFSET, 48,	/* 58 */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'S', 'T', '_', 'G', 'R', 'U', 'P', 'O', '.', 'R', 'E', 'L', 0, 
	HB_P_POPVARIABLE, 3, 0,	/* MARQ */
/* 01632 */ HB_P_LINEOFFSET, 49,	/* 59 */
	HB_P_PUSHSYMNEAR, 31,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'S', 'T', '_', 'G', 'R', 'U', 'P', 'O', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_FUNCTIONSHORT, 8,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01673) */
	HB_P_JUMP, 82, 250,	/* -1454 (abs: 00216) */
/* 01673 */ HB_P_LINEOFFSET, 52,	/* 62 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 32, 0,	/* CONS_MOV */
/* 01681 */ HB_P_LINEOFFSET, 53,	/* 63 */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '*', ' ', 'q', 'u', 'a', 'n', 't', 'd', ')', ',', 'S', 'U', 'M', '(', 'p', 'r', '_', 'u', 'n', 'i', 't', ' ', '*', ' ', 'q', 'u', 'a', 'n', 't', 'd', ')', ' ', 0, 
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 01740 */ HB_P_LINEOFFSET, 54,	/* 64 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 01764 */ HB_P_LINEOFFSET, 55,	/* 65 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', ' ', 'B', 'E', 'T', 'W', 'E', 'E', 'N', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 01825 */ HB_P_LINEOFFSET, 56,	/* 66 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	' ', 'A', 'N', 'D', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'i', 's', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, '0', '2', 39, ' ', 'A', 'N', 'D', ' ', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '>', ' ', '0', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 01888 */ HB_P_LINEOFFSET, 57,	/* 67 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 95,	/* 95 */
	' ', 'A', 'N', 'D', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', '=', 39, 'S', 39, ' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 39, 'C', 'U', 'P', 'O', 'M', 'E', 39, ' ', 'A', 'N', 'D', ' ', '(', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'l', 'i', 'k', 'e', ' ', 39, 'P', 'D', '%', 39, ' ', 'O', 'R', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'l', 'i', 'k', 'e', ' ', 39, 'C', 'P', '%', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 01994 */ HB_P_LINEOFFSET, 58,	/* 68 */
	HB_P_MESSAGE, 35, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 36,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 32, 0,	/* CONS_MOV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02015 */ HB_P_LINEOFFSET, 59,	/* 69 */
	HB_P_MESSAGE, 35, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 36,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02039 */ HB_P_LINEOFFSET, 60,	/* 70 */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 02103) */
/* 02053 */ HB_P_LINEOFFSET, 61,	/* 71 */
	HB_P_PUSHSYMNEAR, 38,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'm', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'P', 'E', 'R', 'I', 'O', 'D', 'O', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 164, 248,	/* -1884 (abs: 00216) */
/* 02103 */ HB_P_LINEOFFSET, 64,	/* 74 */
	HB_P_PUSHMEMVAR, 32, 0,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 18,	/* MTOT_VENDA */
/* 02114 */ HB_P_LINEOFFSET, 65,	/* 75 */
	HB_P_PUSHMEMVAR, 32, 0,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 17,	/* MTOT_CUSTO */
/* 02126 */ HB_P_LINEOFFSET, 66,	/* 76 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 39, 0,	/* CONS_GRUPO */
/* 02134 */ HB_P_LINEOFFSET, 67,	/* 77 */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ',', 'm', 'e', 'r', 'c', ',', '0', ',', '0', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 02179 */ HB_P_LINEOFFSET, 68,	/* 78 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 23,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 02200) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 23,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MSUBGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 111,	/* 111 (abs: 02311) */
/* 02202 */ HB_P_LINEOFFSET, 69,	/* 79 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', '(', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MGRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 40,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MSUBGRUPO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 02257 */ HB_P_LINEOFFSET, 70,	/* 80 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'O', 'R', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MGRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 65,	/* 65 (abs: 02374) */
/* 02311 */ HB_P_LINEOFFSET, 71,	/* 81 */
	HB_P_PUSHSYMNEAR, 23,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 54,	/* 54 (abs: 02374) */
/* 02322 */ HB_P_LINEOFFSET, 72,	/* 82 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MGRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 02374 */ HB_P_LINEOFFSET, 74,	/* 84 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 02403 */ HB_P_LINEOFFSET, 75,	/* 85 */
	HB_P_MESSAGE, 35, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 36,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 39, 0,	/* CONS_GRUPO */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02424 */ HB_P_LINEOFFSET, 76,	/* 86 */
	HB_P_MESSAGE, 35, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 36,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02448 */ HB_P_LINEOFFSET, 77,	/* 87 */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 39, 0,	/* CONS_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 02501) */
/* 02462 */ HB_P_LINEOFFSET, 78,	/* 88 */
	HB_P_PUSHSYMNEAR, 38,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'G', 'R', 'U', 'P', 'O', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 22, 247,	/* -2282 (abs: 00216) */
/* 02501 */ HB_P_LINEOFFSET, 81,	/* 91 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 41, 0,	/* I */
/* 02507 */ HB_P_LINEOFFSET, 82,	/* 92 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 41, 0,	/* I */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 39, 0,	/* CONS_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 198, 4,	/* 1222 (abs: 03747) */
/* 02528 */ HB_P_LINEOFFSET, 83,	/* 93 */
	HB_P_PUSHSYMNEAR, 42,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 02547 */ HB_P_LINEOFFSET, 84,	/* 94 */
	HB_P_PUSHSYMNEAR, 23,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 81, 2,	/* 593 (abs: 03163) */
/* 02573 */ HB_P_LINEOFFSET, 85,	/* 95 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 32, 0,	/* CONS_MOV */
/* 02581 */ HB_P_LINEOFFSET, 86,	/* 96 */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '*', ' ', 'q', 'u', 'a', 'n', 't', 'd', ')', ',', 'S', 'U', 'M', '(', 'p', 'r', '_', 'u', 'n', 'i', 't', ' ', '*', ' ', 'q', 'u', 'a', 'n', 't', 'd', ')', ' ', 0, 
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 02640 */ HB_P_LINEOFFSET, 87,	/* 97 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 02664 */ HB_P_LINEOFFSET, 88,	/* 98 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', ' ', 'B', 'E', 'T', 'W', 'E', 'E', 'N', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 02725 */ HB_P_LINEOFFSET, 89,	/* 99 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	' ', 'A', 'N', 'D', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'i', 's', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, '0', '2', 39, ' ', 'A', 'N', 'D', ' ', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '>', ' ', '0', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 02788 */ HB_P_LINEOFFSET, 90,	/* 100 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 95,	/* 95 */
	' ', 'A', 'N', 'D', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', '=', 39, 'S', 39, ' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 39, 'C', 'U', 'P', 'O', 'M', 'E', 39, ' ', 'A', 'N', 'D', ' ', '(', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'l', 'i', 'k', 'e', ' ', 39, 'P', 'D', '%', 39, ' ', 'O', 'R', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'l', 'i', 'k', 'e', ' ', 39, 'C', 'P', '%', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 02894 */ HB_P_LINEOFFSET, 91,	/* 101 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 02952 */ HB_P_LINEOFFSET, 100,	/* 110 */
	HB_P_PUSHSYMNEAR, 23,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 03006) */
/* 02963 */ HB_P_LINEOFFSET, 101,	/* 111 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 03006 */ HB_P_LINEOFFSET, 103,	/* 113 */
	HB_P_PUSHSYMNEAR, 23,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 03059) */
/* 03017 */ HB_P_LINEOFFSET, 104,	/* 114 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 03059 */ HB_P_LINEOFFSET, 106,	/* 116 */
	HB_P_MESSAGE, 35, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 36,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 32, 0,	/* CONS_MOV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03080 */ HB_P_LINEOFFSET, 107,	/* 117 */
	HB_P_MESSAGE, 35, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 36,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03104 */ HB_P_LINEOFFSET, 108,	/* 118 */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03121) */
	HB_P_JUMP, 107, 2,	/* 619 (abs: 03737) */
/* 03121 */ HB_P_LINEOFFSET, 111,	/* 121 */
	HB_P_PUSHMEMVAR, 32, 0,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
/* 03140 */ HB_P_LINEOFFSET, 112,	/* 122 */
	HB_P_PUSHMEMVAR, 32, 0,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPOP,
	HB_P_JUMP, 63, 2,	/* 575 (abs: 03735) */
/* 03163 */ HB_P_LINEOFFSET, 114,	/* 124 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 32, 0,	/* CONS_MOV */
/* 03171 */ HB_P_LINEOFFSET, 115,	/* 125 */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '*', ' ', 'q', 'u', 'a', 'n', 't', 'd', ')', ',', 'S', 'U', 'M', '(', 'p', 'r', '_', 'u', 'n', 'i', 't', ' ', '*', ' ', 'q', 'u', 'a', 'n', 't', 'd', ')', ' ', 0, 
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 03230 */ HB_P_LINEOFFSET, 116,	/* 126 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 03254 */ HB_P_LINEOFFSET, 117,	/* 127 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', ' ', 'B', 'E', 'T', 'W', 'E', 'E', 'N', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 03315 */ HB_P_LINEOFFSET, 118,	/* 128 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	' ', 'A', 'N', 'D', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'i', 's', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, '0', '2', 39, ' ', 'A', 'N', 'D', ' ', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '>', ' ', '0', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 03378 */ HB_P_LINEOFFSET, 119,	/* 129 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 96,	/* 96 */
	' ', ' ', 'A', 'N', 'D', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', '=', 39, 'S', 39, ' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 39, 'C', 'U', 'P', 'O', 'M', 'E', 39, ' ', 'A', 'N', 'D', ' ', '(', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'l', 'i', 'k', 'e', ' ', 39, 'P', 'D', '%', 39, ' ', 'O', 'R', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'l', 'i', 'k', 'e', ' ', 39, 'C', 'P', '%', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 03485 */ HB_P_LINEOFFSET, 120,	/* 130 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', ' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 03528 */ HB_P_LINEOFFSET, 124,	/* 134 */
	HB_P_PUSHSYMNEAR, 23,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 03582) */
/* 03539 */ HB_P_LINEOFFSET, 125,	/* 135 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 03582 */ HB_P_LINEOFFSET, 127,	/* 137 */
	HB_P_PUSHSYMNEAR, 23,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 03635) */
/* 03593 */ HB_P_LINEOFFSET, 128,	/* 138 */
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 33, 0,	/* CCOMM */
/* 03635 */ HB_P_LINEOFFSET, 130,	/* 140 */
	HB_P_MESSAGE, 35, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 36,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 33, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 32, 0,	/* CONS_MOV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03656 */ HB_P_LINEOFFSET, 131,	/* 141 */
	HB_P_MESSAGE, 35, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 36,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03680 */ HB_P_LINEOFFSET, 132,	/* 142 */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 03696) */
	HB_P_JUMPNEAR, 43,	/* 43 (abs: 03737) */
/* 03696 */ HB_P_LINEOFFSET, 135,	/* 145 */
	HB_P_PUSHMEMVAR, 32, 0,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
/* 03715 */ HB_P_LINEOFFSET, 136,	/* 146 */
	HB_P_PUSHMEMVAR, 32, 0,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPOP,
/* 03735 */ HB_P_LINEOFFSET, 138,	/* 148 */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 41, 0,	/* I */
	HB_P_JUMP, 49, 251,	/* -1231 (abs: 02513) */
/* 03747 */ HB_P_LINEOFFSET, 140,	/* 150 */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'L', 'i', 's', 't', 'a', 'g', 'e', 'm', ' ', 'd', 'e', ' ', 'E', 's', 't', 'a', 't', 'i', 's', 't', 'i', 'c', 'a', ' ', 'd', 'e', ' ', 'G', 'r', 'u', 'p', 'o', 's', 0, 
	HB_P_POPVARIABLE, 5, 0,	/* MTIT */
/* 03788 */ HB_P_LINEOFFSET, 141,	/* 151 */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'P', 'e', 'r', 'i', 'o', 'd', 'o', ' ', 'd', 'e', ' ', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 44,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 6, 0,	/* MTIPO */
/* 03832 */ HB_P_LINEOFFSET, 142,	/* 152 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 41, 0,	/* I */
	HB_P_POPVARIABLE, 7, 0,	/* MPAG */
/* 03842 */ HB_P_LINEOFFSET, 143,	/* 153 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 41, 0,	/* I */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 39, 0,	/* CONS_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 215, 4,	/* 1239 (abs: 05099) */
/* 03863 */ HB_P_LINEOFFSET, 144,	/* 154 */
	HB_P_PUSHVARIABLE, 7, 0,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 03882) */
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 03925) */
/* 03884 */ HB_P_LINEOFFSET, 145,	/* 155 */
	HB_P_PUSHVARIABLE, 7, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 7, 0,	/* MPAG */
/* 03893 */ HB_P_LINEOFFSET, 146,	/* 156 */
	HB_P_PUSHVARIABLE, 7, 0,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 03907) */
	HB_P_PUSHSYMNEAR, 46,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03907 */ HB_P_LINEOFFSET, 147,	/* 157 */
	HB_P_PUSHSYMNEAR, 47,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 6, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 03925 */ HB_P_LINEOFFSET, 149,	/* 159 */
	HB_P_PUSHSYMNEAR, 48,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03939 */ HB_P_LINEOFFSET, 150,	/* 160 */
	HB_P_PUSHSYMNEAR, 23,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 107, 4,	/* 1131 (abs: 05087) */
/* 03959 */ HB_P_LINEOFFSET, 151,	/* 161 */
	HB_P_PUSHSYMNEAR, 23,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 13, 2,	/* 525 (abs: 04507) */
/* 03985 */ HB_P_LINEOFFSET, 152,	/* 162 */
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 19,	/* MTOT_GRUPO */
/* 03999 */ HB_P_LINEOFFSET, 153,	/* 163 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 04022 */ HB_P_LINEOFFSET, 154,	/* 164 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'G', 'R', 'U', 'P', 'O', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04063 */ HB_P_LINEOFFSET, 155,	/* 165 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 49,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04105 */ HB_P_LINEOFFSET, 156,	/* 166 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 49,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'P', 'r', 'c', '.', 'V', 'e', 'n', 'd', 'a', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04177 */ HB_P_LINEOFFSET, 157,	/* 167 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 49,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'P', 'a', 'r', 't', '.', 'n', 'o', ' ', 'G', 'e', 'r', 'a', 'l', ' ', '%', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 18,	/* MTOT_VENDA */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04254 */ HB_P_LINEOFFSET, 158,	/* 168 */
	HB_P_PUSHLOCALNEAR, 16,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 56, 3,	/* 824 (abs: 05087) */
/* 04266 */ HB_P_LINEOFFSET, 159,	/* 169 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'P', 'r', 'c', '.', 'C', 'u', 's', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04335 */ HB_P_LINEOFFSET, 160,	/* 170 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 49,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'L', 'u', 'c', 'r', 'o', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04416 */ HB_P_LINEOFFSET, 161,	/* 171 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 49,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'L', 'u', 'c', 'r', 'o', ' ', '%', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 71, 2,	/* 583 (abs: 05087) */
/* 04507 */ HB_P_LINEOFFSET, 165,	/* 175 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'U', 'B', '-', 'G', 'R', 'U', 'P', 'O', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 43,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04559 */ HB_P_LINEOFFSET, 166,	/* 176 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 49,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04601 */ HB_P_LINEOFFSET, 167,	/* 177 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 49,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'P', 'r', 'c', '.', 'V', 'e', 'n', 'd', 'a', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04672 */ HB_P_LINEOFFSET, 168,	/* 178 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 49,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'P', 'a', 'r', 't', '.', 'n', 'o', ' ', 'G', 'r', 'u', 'p', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 19,	/* MTOT_GRUPO */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04753 */ HB_P_LINEOFFSET, 169,	/* 179 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 49,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'P', 'a', 'r', 't', '.', 'n', 'o', ' ', 'G', 'e', 'r', 'a', 'l', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 18,	/* MTOT_VENDA */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04834 */ HB_P_LINEOFFSET, 170,	/* 180 */
	HB_P_PUSHLOCALNEAR, 16,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 244, 0,	/* 244 (abs: 05087) */
/* 04846 */ HB_P_LINEOFFSET, 171,	/* 181 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'P', 'r', 'c', '.', 'C', 'u', 's', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04914 */ HB_P_LINEOFFSET, 172,	/* 182 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 49,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'L', 'u', 'c', 'r', 'o', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04995 */ HB_P_LINEOFFSET, 173,	/* 183 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 49,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'L', 'u', 'c', 'r', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHMEMVAR, 39, 0,	/* CONS_GRUPO */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05087 */ HB_P_LINEOFFSET, 177,	/* 187 */
	HB_P_PUSHVARIABLE, 41, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 41, 0,	/* I */
	HB_P_JUMP, 32, 251,	/* -1248 (abs: 03848) */
/* 05099 */ HB_P_LINEOFFSET, 179,	/* 189 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 05122 */ HB_P_LINEOFFSET, 180,	/* 190 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'R', 'E', 'S', 'U', 'M', 'O', ' ', 'G', 'E', 'R', 'A', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 05158 */ HB_P_LINEOFFSET, 181,	/* 191 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'T', 'O', 'T', 'A', 'L', ' ', 'A', ' ', 'P', 'R', 'E', 'C', 'O', ' ', 'D', 'E', ' ', 'C', 'U', 'S', 'T', 'O', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MTOT_CUSTO */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05231 */ HB_P_LINEOFFSET, 182,	/* 192 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'T', 'O', 'T', 'A', 'L', ' ', 'A', ' ', 'P', 'R', 'E', 'C', 'O', ' ', 'D', 'E', ' ', 'V', 'E', 'N', 'D', 'A', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MTOT_VENDA */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05304 */ HB_P_LINEOFFSET, 183,	/* 193 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 05330 */ HB_P_LINEOFFSET, 184,	/* 194 */
	HB_P_PUSHSYMNEAR, 48,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 05344 */ HB_P_LINEOFFSET, 185,	/* 195 */
	HB_P_PUSHSYMNEAR, 46,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05351 */ HB_P_LINEOFFSET, 186,	/* 196 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 05360 */ HB_P_LINEOFFSET, 187,	/* 197 */
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
/* 05401 */ HB_P_LINEOFFSET, 188,	/* 198 */
	HB_P_PUSHSYMNEAR, 54,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* MARQ */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 181, 235,	/* -5195 (abs: 00216) */
/* 05414 */ HB_P_LINEOFFSET, 199,	/* 209 */
	HB_P_PUSHSYMNEAR, 55,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05421 */ HB_P_LINEOFFSET, 200,	/* 210 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 05426 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

