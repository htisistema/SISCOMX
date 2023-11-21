/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5MIN.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC5MIN.PRG /q /oC:\hti\SISCOM\SAC5MIN.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.11.21 09:47:16 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5MIN.PRG"

HB_FUNC( SAC5MIN );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( JANELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_GRU );
HB_FUNC_EXTERN( VER_SGRU );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( VER_ESPE );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( MENSAGEM1 );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( DISPOUT );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( PRT_GRU );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5MIN )
{ "SAC5MIN", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5MIN )}, NULL },
{ "MTRACO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTOT_ITEM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TELAPRINT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_ESPE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFORNEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MUF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFORNECE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSUB_GRUPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "JANELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( JANELA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VER_GRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_GRU )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_SGRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SGRU )}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "VER_ESPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_ESPE )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "MENSAGEM1", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM1 )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "DISPOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPOUT )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "PRT_GRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( PRT_GRU )}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "MNOME_GRU", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5MIN )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5MIN
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5MIN = hb_vm_SymbolInit_SAC5MIN;
   #pragma data_seg()
#endif

HB_FUNC( SAC5MIN )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 31, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 12, 0,	/* 12 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', '5', 'M', 'I', 'N', 0, 
	HB_P_LOCALNEARSETINT, 21, 0, 0,	/* MTOT_FALTA 0*/
	HB_P_LOCALNEARSETINT, 22, 0, 0,	/* MSLD_FALTA 0*/
	HB_P_LOCALNEARSETINT, 23, 0, 0,	/* MSLD_IND 0*/
	HB_P_LOCALNEARSETINT, 24, 0, 0,	/* MTOT_IND 0*/
	HB_P_LOCALNEARSETSTR, 25, 2, 0,	/* MTIP_CUSTO 2*/
	' ', 0, 
	HB_P_LOCALNEARSETINT, 26, 0, 0,	/* MPERC_FAL 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 29,	/* CONS_MERC */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 30,	/* CONS_GRUPO */
	HB_P_LOCALNEARSETINT, 31, 0, 0,	/* CONT 0*/
/* 00063 */ HB_P_LINEOFFSET, 4,	/* 16 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 15,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 16,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MTRACO */
	HB_P_PUSHSYMNEAR, 2,	/* MTOT_ITEM */
	HB_P_PUSHSYMNEAR, 3,	/* TELAPRINT */
	HB_P_PUSHSYMNEAR, 4,	/* MTIT */
	HB_P_PUSHSYMNEAR, 5,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 6,	/* MPAG */
	HB_P_PUSHSYMNEAR, 7,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 8,	/* MCOD_ESPE */
	HB_P_PUSHSYMNEAR, 9,	/* MFORNEC */
	HB_P_PUSHSYMNEAR, 10,	/* MUF */
	HB_P_PUSHSYMNEAR, 11,	/* MFORNECE */
	HB_P_PUSHSYMNEAR, 12,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 13,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 14,	/* MARQ */
	HB_P_DOSHORT, 14,
	HB_P_POPVARIABLE, 14, 0,	/* MARQ */
	HB_P_POPVARIABLE, 13, 0,	/* MIMP_TIPO */
/* 00112 */ HB_P_LINEOFFSET, 6,	/* 18 */
	HB_P_PUSHSYMNEAR, 17,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'A', 'B', 'A', 'I', 'X', 'O', ' ', 'D', 'O', ' ', 'M', 'I', 'N', 'I', 'M', 'O', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'1', '4', '5', '6', 0, 
	HB_P_PUSHMEMVAR, 18, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00188) */
/* 00183 */ HB_P_LINEOFFSET, 7,	/* 19 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00188 */ HB_P_LINEOFFSET, 10,	/* 22 */
	HB_P_PUSHSYMNEAR, 19,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 1, 0,	/* MTRACO */
/* 00205 */ HB_P_LINEOFFSET, 12,	/* 24 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_POPLOCALNEAR, 3,	/* LCI */
/* 00215 */ HB_P_LINEOFFSET, 13,	/* 25 */
	HB_P_LOCALNEARSETINT, 5, 13, 0,	/* LBA 13*/
/* 00221 */ HB_P_LINEOFFSET, 14,	/* 26 */
	HB_P_LOCALNEARSETINT, 6, 75, 0,	/* CBA 75*/
/* 00227 */ HB_P_LINEOFFSET, 20,	/* 32 */
	HB_P_PUSHSYMNEAR, 20,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'g', 'r', 'u', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00257) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00257 */ HB_P_LINEOFFSET, 21,	/* 33 */
	HB_P_PUSHSYMNEAR, 20,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00286) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00286 */ HB_P_LINEOFFSET, 23,	/* 35 */
	HB_P_PUSHSYMNEAR, 21,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	' ', 'E', 's', 't', 'o', 'q', 'u', 'e', ' ', 'A', 'b', 'a', 'i', 'x', 'o', ' ', 'd', 'o', ' ', 'M', 'i', 'n', 'i', 'm', 'o', ' ', 'o', 'u', ' ', 'M', 'a', 'x', 'i', 'm', 'o', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00340 */ HB_P_LINEOFFSET, 25,	/* 37 */
	HB_P_PUSHSYMNEAR, 22,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 4,
/* 00353 */ HB_P_LINEOFFSET, 26,	/* 38 */
	HB_P_PUSHMEMVAR, 23, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 12, 0,	/* MTIPO_IMP */
/* 00366 */ HB_P_LINEOFFSET, 27,	/* 39 */
	HB_P_PUSHSYMNEAR, 15,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* MTIPO_TAB */
	HB_P_POPLOCALNEAR, 15,	/* MPROMOCAO */
/* 00379 */ HB_P_LINEOFFSET, 29,	/* 41 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* MQUANTD 0*/
	HB_P_PUSHLOCALNEAR, 12,	/* MQUANTD */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* MTOTAL_PRO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* MTOTAL */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 26,	/* MPERC_FAL */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 8, 0,	/* MCOD_ESPE */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 7, 0,	/* MCOD_FORN */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 2, 0,	/* MTOT_ITEM */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 24, 0,	/* MSUB_GRUPO */
	HB_P_POPLOCALNEAR, 7,	/* MGRUPO1 */
/* 00417 */ HB_P_LINEOFFSET, 30,	/* 42 */
	HB_P_PUSHSYMNEAR, 15,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 11, 0,	/* MFORNECE */
/* 00429 */ HB_P_LINEOFFSET, 31,	/* 43 */
	HB_P_PUSHSYMNEAR, 15,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 10, 0,	/* MUF */
/* 00441 */ HB_P_LINEOFFSET, 32,	/* 44 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_POPVARIABLE, 5, 0,	/* MTIPO */
/* 00450 */ HB_P_LINEOFFSET, 33,	/* 45 */
	HB_P_LOCALNEARSETSTR, 14, 2, 0,	/* MTECLA 2*/
	'A', 0, 
/* 00458 */ HB_P_LINEOFFSET, 34,	/* 46 */
	HB_P_LOCALNEARSETSTR, 25, 2, 0,	/* MTIP_CUSTO 2*/
	'C', 0, 
/* 00466 */ HB_P_LINEOFFSET, 35,	/* 47 */
	HB_P_PUSHSYMNEAR, 25,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 63,	/* 63 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', 'o', 'u', ' ', 'e', 'm', ' ', 'B', 'r', 'a', 'n', 'c', 'o', ' ', 'p', '/', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 't', 'o', 'd', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00538 */ HB_P_LINEOFFSET, 36,	/* 48 */
	HB_P_PUSHSYMNEAR, 26,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00560 */ HB_P_LINEOFFSET, 37,	/* 49 */
	HB_P_PUSHSYMNEAR, 26,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00582 */ HB_P_LINEOFFSET, 38,	/* 50 */
	HB_P_PUSHSYMNEAR, 27,	/* JANELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'P', 'r', 'o', 'c', 'e', 's', 's', 'a', 'd', 'o', 's', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 4,
/* 00616 */ HB_P_LINEOFFSET, 39,	/* 51 */
	HB_P_PUSHSYMNEAR, 27,	/* JANELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'o', 's', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 4,
/* 00648 */ HB_P_LINEOFFSET, 40,	/* 52 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00689 */ HB_P_LINEOFFSET, 41,	/* 53 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'S', 'u', 'b', '-', 'G', 'r', 'u', 'p', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00730 */ HB_P_LINEOFFSET, 42,	/* 54 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00771 */ HB_P_LINEOFFSET, 43,	/* 55 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'E', 's', 'p', 'e', 'c', 'i', 'e', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00812 */ HB_P_LINEOFFSET, 44,	/* 56 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'O', 'r', 'd', 'e', 'm', ' ', '[', 'A', ']', 'l', 'f', 'a', 'b', 'e', 't', 'i', 'c', 'a', ' ', '[', 'C', ']', 'o', 'd', 'i', 'g', 'o', ' ', '[', 'G', ']', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00879 */ HB_P_LINEOFFSET, 45,	/* 57 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'C', 'a', 'l', 'c', 'u', 'l', 'a', 'r', ' ', 'o', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'p', '/', '[', 'C', ']', 'u', 's', 't', 'o', ' ', 'm', 'e', 'r', 'c', '.', ' ', '[', 'R', ']', 'e', 'a', 'l', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00946 */ HB_P_LINEOFFSET, 46,	/* 58 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'P', 'e', 'r', 'c', 'e', 'n', 't', 'u', 'a', 'l', ' ', 'n', 'o', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'p', '/', 'C', 'a', 'l', 'c', 'u', 'l', 'a', 'r', ' ', 'F', 'a', 'l', 't', 'a', ' ', '(', '%', ')', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01013 */ HB_P_LINEOFFSET, 47,	/* 59 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', 's', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01054 */ HB_P_LINEOFFSET, 48,	/* 60 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01095 */ HB_P_LINEOFFSET, 49,	/* 61 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 12, 0,	/* 12*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', 's', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01136 */ HB_P_LINEOFFSET, 50,	/* 62 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 13, 0,	/* 13*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01177 */ HB_P_LINEOFFSET, 52,	/* 64 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MGRUPO1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01222) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01227) */
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
	7, 0,	/* MGRUPO1 */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01269) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 21,	/* 21 (abs: 01288) */
	HB_P_PUSHSYMNEAR, 35,	/* VER_GRU */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALREF, 255, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 23, 0,	/* 23*/
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01306 */ HB_P_LINEOFFSET, 53,	/* 65 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 's', 'u', 'b', '_', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 34, 0,	/* 34 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	7, 0,	/* MGRUPO1 */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 37,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MSUB_GRUPO */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 23, 0,	/* 23*/
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MGRUPO1 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01419 */ HB_P_LINEOFFSET, 54,	/* 66 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 38,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_FORN */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 24, 0,	/* 24*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01512 */ HB_P_LINEOFFSET, 55,	/* 67 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'e', 's', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 32, 0,	/* 32 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 39,	/* VER_ESPE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_ESPE */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 24, 0,	/* 24*/
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01607 */ HB_P_LINEOFFSET, 56,	/* 68 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 45, 0,	/* 45*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MTECLA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01652) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01657) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 't', 'e', 'c', 'l', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MTECLA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', ',', 'C', ',', 'G', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MGRUPO1 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01726 */ HB_P_LINEOFFSET, 57,	/* 69 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 45, 0,	/* 45*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	25, 0,	/* MTIP_CUSTO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01771) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01776) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 't', 'i', 'p', '_', 'c', 'u', 's', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	25, 0,	/* MTIP_CUSTO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', ',', 'R', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01831 */ HB_P_LINEOFFSET, 58,	/* 70 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 45, 0,	/* 45*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	26, 0,	/* MPERC_FAL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01876) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01881) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'p', 'e', 'r', 'c', '_', 'f', 'a', 'l', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01921 */ HB_P_LINEOFFSET, 59,	/* 71 */
	HB_P_PUSHSYMNEAR, 40,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 32, 0,	/* GETLIST */
/* 01943 */ HB_P_LINEOFFSET, 60,	/* 72 */
	HB_P_PUSHSYMNEAR, 41,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01958) */
	HB_P_JUMP, 1, 30,	/* 7681 (abs: 09636) */
/* 01958 */ HB_P_LINEOFFSET, 64,	/* 76 */
	HB_P_PUSHSYMNEAR, 42,	/* MENSAGEM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', '[', 'A', ']', 'b', 'a', 'i', 'x', 'o', ' ', 'd', 'o', ' ', 'm', 'i', 'n', 'i', 'm', 'o', ' ', '-', ' ', '[', 'M', ']', 'A', 'b', 'a', 'i', 'x', 'o', ' ', 'd', 'o', ' ', 'M', 'a', 'x', 'i', 'm', 'o', ':', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'A', ',', 'M', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 20,	/* MTIPO_REL */
/* 02039 */ HB_P_LINEOFFSET, 65,	/* 77 */
	HB_P_PUSHSYMNEAR, 43,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'P', 'R', 'O', '_', 'A', 'B', 'A', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 02070) */
	HB_P_JUMP, 65, 249,	/* -1727 (abs: 00340) */
/* 02070 */ HB_P_LINEOFFSET, 68,	/* 80 */
	HB_P_PUSHLOCALNEAR, 14,	/* MTECLA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 02091) */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_OR,
	HB_P_JUMPFALSE, 138, 1,	/* 394 (abs: 02485) */
/* 02094 */ HB_P_LINEOFFSET, 69,	/* 81 */
	HB_P_LOCALNEARSETSTR, 14, 2, 0,	/* MTECLA 2*/
	'G', 0, 
/* 02102 */ HB_P_LINEOFFSET, 70,	/* 82 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 30,	/* CONS_GRUPO */
/* 02109 */ HB_P_LINEOFFSET, 71,	/* 83 */
	HB_P_LOCALNEARSETSTR, 27, 49, 0,	/* CCOMM 49*/
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'g', 'r', 'u', 'p', 'o', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
/* 02164 */ HB_P_LINEOFFSET, 72,	/* 84 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 02186) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MSUB_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 100,	/* 100 (abs: 02286) */
/* 02188 */ HB_P_LINEOFFSET, 73,	/* 85 */
	HB_P_PUSHLOCALNEAR, 27,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* CCOMM */
/* 02234 */ HB_P_LINEOFFSET, 74,	/* 86 */
	HB_P_PUSHLOCALNEAR, 27,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'O', 'R', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MSUB_GRUPO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* CCOMM */
	HB_P_JUMPNEAR, 61,	/* 61 (abs: 02345) */
/* 02286 */ HB_P_LINEOFFSET, 75,	/* 87 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 50,	/* 50 (abs: 02345) */
/* 02297 */ HB_P_LINEOFFSET, 76,	/* 88 */
	HB_P_PUSHLOCALNEAR, 27,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* CCOMM */
/* 02345 */ HB_P_LINEOFFSET, 78,	/* 90 */
	HB_P_PUSHLOCALNEAR, 27,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* CCOMM */
/* 02371 */ HB_P_LINEOFFSET, 79,	/* 91 */
	HB_P_MESSAGE, 46, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 47,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 27,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 30, 0,	/* CONS_GRUPO */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02391 */ HB_P_LINEOFFSET, 80,	/* 92 */
	HB_P_MESSAGE, 46, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 47,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02415 */ HB_P_LINEOFFSET, 81,	/* 93 */
	HB_P_PUSHSYMNEAR, 48,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 74, 2,	/* 586 (abs: 03012) */
/* 02429 */ HB_P_LINEOFFSET, 82,	/* 94 */
	HB_P_PUSHSYMNEAR, 49,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'G', 'R', 'U', 'P', 'O', ' ', 'p', 'a', 'r', 'a', ' ', 's', 'e', 'r', ' ', 'l', 'i', 's', 't', 'a', 'd', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 162, 247,	/* -2142 (abs: 00340) */
/* 02485 */ HB_P_LINEOFFSET, 86,	/* 98 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 28,	/* CONS_ABAIXO */
/* 02492 */ HB_P_LINEOFFSET, 87,	/* 99 */
	HB_P_LOCALNEARSETSTR, 27, 49, 0,	/* CCOMM 49*/
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
/* 02547 */ HB_P_LINEOFFSET, 88,	/* 100 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 55,	/* 55 (abs: 02611) */
/* 02558 */ HB_P_LINEOFFSET, 89,	/* 101 */
	HB_P_PUSHLOCALNEAR, 27,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* CCOMM */
/* 02611 */ HB_P_LINEOFFSET, 91,	/* 103 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_ESPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 02664) */
/* 02623 */ HB_P_LINEOFFSET, 92,	/* 104 */
	HB_P_PUSHLOCALNEAR, 27,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 's', 'p', 'e', 'c', 'i', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* CCOMM */
/* 02664 */ HB_P_LINEOFFSET, 94,	/* 106 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 02717) */
/* 02676 */ HB_P_LINEOFFSET, 95,	/* 107 */
	HB_P_PUSHLOCALNEAR, 27,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* CCOMM */
/* 02717 */ HB_P_LINEOFFSET, 97,	/* 109 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MSUB_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 52,	/* 52 (abs: 02779) */
/* 02729 */ HB_P_LINEOFFSET, 98,	/* 110 */
	HB_P_PUSHLOCALNEAR, 27,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 51,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MSUB_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* CCOMM */
/* 02779 */ HB_P_LINEOFFSET, 100,	/* 112 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 55,	/* 55 (abs: 02843) */
/* 02790 */ HB_P_LINEOFFSET, 101,	/* 113 */
	HB_P_PUSHLOCALNEAR, 27,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '<', '=', ' ', 'e', 's', 't', '_', 'm', 'i', 'n', ' ', 'A', 'N', 'D', ' ', 'e', 's', 't', '_', 'm', 'i', 'n', ' ', '>', ' ', '0', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* CCOMM */
	HB_P_JUMPNEAR, 53,	/* 53 (abs: 02894) */
/* 02843 */ HB_P_LINEOFFSET, 103,	/* 115 */
	HB_P_PUSHLOCALNEAR, 27,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '<', '=', ' ', 'e', 's', 't', '_', 'm', 'a', 'x', ' ', 'A', 'N', 'D', ' ', 'e', 's', 't', '_', 'm', 'a', 'x', ' ', '>', ' ', '0', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* CCOMM */
/* 02894 */ HB_P_LINEOFFSET, 105,	/* 117 */
	HB_P_PUSHLOCALNEAR, 14,	/* MTECLA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02929) */
/* 02905 */ HB_P_LINEOFFSET, 106,	/* 118 */
	HB_P_PUSHLOCALNEAR, 27,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'm', 'e', 'r', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* CCOMM */
/* 02929 */ HB_P_LINEOFFSET, 108,	/* 120 */
	HB_P_PUSHLOCALNEAR, 14,	/* MTECLA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 02968) */
/* 02940 */ HB_P_LINEOFFSET, 109,	/* 121 */
	HB_P_PUSHLOCALNEAR, 27,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* CCOMM */
/* 02968 */ HB_P_LINEOFFSET, 111,	/* 123 */
	HB_P_MESSAGE, 46, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 47,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 27,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 28, 0,	/* CONS_ABAIXO */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02988 */ HB_P_LINEOFFSET, 112,	/* 124 */
	HB_P_MESSAGE, 46, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 47,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03012 */ HB_P_LINEOFFSET, 114,	/* 126 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 6, 0,	/* MPAG */
/* 03018 */ HB_P_LINEOFFSET, 115,	/* 127 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 03066) */
/* 03029 */ HB_P_LINEOFFSET, 116,	/* 128 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', 'a', 'b', 'a', 'i', 'x', 'o', ' ', 'd', 'o', ' ', 'M', 'I', 'N', 'I', 'M', 'O', 0, 
	HB_P_POPVARIABLE, 4, 0,	/* MTIT */
	HB_P_JUMPNEAR, 37,	/* 37 (abs: 03101) */
/* 03066 */ HB_P_LINEOFFSET, 118,	/* 130 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', 'a', 'b', 'a', 'i', 'x', 'o', ' ', 'd', 'o', ' ', 'M', 'A', 'X', 'I', 'M', 'O', 0, 
	HB_P_POPVARIABLE, 4, 0,	/* MTIT */
/* 03101 */ HB_P_LINEOFFSET, 120,	/* 132 */
	HB_P_PUSHLOCALNEAR, 26,	/* MPERC_FAL */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 63,	/* 63 (abs: 03170) */
/* 03109 */ HB_P_LINEOFFSET, 121,	/* 133 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIT */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'c', 'o', 'm', ' ', 'm', 'a', 'i', 's', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MPERC_FAL */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', '%', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'q', 'u', 'e', ' ', 'F', 'a', 'l', 't', 'a', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIT */
/* 03170 */ HB_P_LINEOFFSET, 123,	/* 135 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 27,	/* 27 (abs: 03206) */
/* 03181 */ HB_P_LINEOFFSET, 124,	/* 136 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'G', 'r', 'u', 'p', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 45,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* MTIPO */
/* 03206 */ HB_P_LINEOFFSET, 126,	/* 138 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MSUB_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 32,	/* 32 (abs: 03248) */
/* 03218 */ HB_P_LINEOFFSET, 127,	/* 139 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'S', 'u', 'b', '-', 'g', 'r', 'u', 'p', 'o', ':', 0, 
	HB_P_PUSHSYMNEAR, 45,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MSUB_GRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* MTIPO */
/* 03248 */ HB_P_LINEOFFSET, 129,	/* 141 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_ESPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 41,	/* 41 (abs: 03299) */
/* 03260 */ HB_P_LINEOFFSET, 130,	/* 142 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', '-', ' ', 'C', 'o', 'd', '.', 'E', 's', 'p', 'e', 'c', 'i', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 45,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* MTIPO */
/* 03299 */ HB_P_LINEOFFSET, 132,	/* 144 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 03352) */
/* 03311 */ HB_P_LINEOFFSET, 133,	/* 145 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', '-', ' ', 'C', 'o', 'd', '.', 'F', 'a', 'b', 'r', 'i', 'c', 'a', 't', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 45,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* MTIPO */
/* 03352 */ HB_P_LINEOFFSET, 135,	/* 147 */
	HB_P_PUSHLOCALNEAR, 14,	/* MTECLA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 220, 9,	/* 2524 (abs: 05885) */
/* 03364 */ HB_P_LINEOFFSET, 136,	/* 148 */
	HB_P_LOCALNEARSETINT, 13, 0, 0,	/* I 0*/
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 23,	/* MSLD_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 22,	/* MSLD_FALTA */
	HB_P_POPLOCALNEAR, 21,	/* MTOT_FALTA */
/* 03380 */ HB_P_LINEOFFSET, 137,	/* 149 */
	HB_P_LOCALNEARSETINT, 13, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_PUSHSYMNEAR, 48,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 18, 6,	/* 1554 (abs: 04950) */
/* 03399 */ HB_P_LINEOFFSET, 138,	/* 150 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* DISPOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03443 */ HB_P_LINEOFFSET, 139,	/* 151 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* DISPOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03474 */ HB_P_LINEOFFSET, 140,	/* 152 */
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 03493) */
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 49, 2,	/* 561 (abs: 04054) */
/* 03496 */ HB_P_LINEOFFSET, 141,	/* 153 */
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 6, 0,	/* MPAG */
/* 03505 */ HB_P_LINEOFFSET, 142,	/* 154 */
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 03521) */
/* 03514 */ HB_P_LINEOFFSET, 143,	/* 155 */
	HB_P_PUSHSYMNEAR, 55,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03521 */ HB_P_LINEOFFSET, 145,	/* 157 */
	HB_P_PUSHSYMNEAR, 56,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 03537 */ HB_P_LINEOFFSET, 146,	/* 158 */
	HB_P_PUSHSYMNEAR, 57,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03551 */ HB_P_LINEOFFSET, 147,	/* 159 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03579 */ HB_P_LINEOFFSET, 148,	/* 160 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03610 */ HB_P_LINEOFFSET, 149,	/* 161 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 03634 */ HB_P_LINEOFFSET, 150,	/* 162 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03670 */ HB_P_LINEOFFSET, 151,	/* 163 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 03719) */
/* 03681 */ HB_P_LINEOFFSET, 152,	/* 164 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'l', 'd', '.', 'M', 'I', 'N', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 38,	/* 38 (abs: 03755) */
/* 03719 */ HB_P_LINEOFFSET, 154,	/* 166 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'l', 'd', '.', 'M', 'A', 'X', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03755 */ HB_P_LINEOFFSET, 156,	/* 168 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'U', 'l', 't', '.', 'C', 'o', 'm', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03791 */ HB_P_LINEOFFSET, 157,	/* 169 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'r', '.', 'U', 'l', 't', '.', 'C', 'o', 'm', 0, 
	HB_P_DOSHORT, 1,
/* 03829 */ HB_P_LINEOFFSET, 158,	/* 170 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'u', 's', 't', 'o', ' ', 'R', 'e', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 03867 */ HB_P_LINEOFFSET, 159,	/* 171 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'P', 'r', 'c', '.', 'V', 'e', 'n', 'd', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 03905 */ HB_P_LINEOFFSET, 160,	/* 172 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'S', 'l', 'd', '.', 'F', 'a', 'l', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 03942 */ HB_P_LINEOFFSET, 161,	/* 173 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'V', 'l', 'r', '.', 'F', 'a', 'l', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 03980 */ HB_P_LINEOFFSET, 162,	/* 174 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 04004 */ HB_P_LINEOFFSET, 163,	/* 175 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 41,	/* 41 (abs: 04054) */
/* 04015 */ HB_P_LINEOFFSET, 164,	/* 176 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 04040 */ HB_P_LINEOFFSET, 165,	/* 177 */
	HB_P_PUSHSYMNEAR, 59,	/* PRT_GRU */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 04054 */ HB_P_LINEOFFSET, 168,	/* 180 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 04106) */
/* 04065 */ HB_P_LINEOFFSET, 169,	/* 181 */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_GREATEREQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 16,	/* 16 (abs: 04101) */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 04147) */
	HB_P_JUMP, 72, 3,	/* 840 (abs: 04943) */
/* 04106 */ HB_P_LINEOFFSET, 173,	/* 185 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 20,	/* 20 (abs: 04142) */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04147) */
	HB_P_JUMP, 31, 3,	/* 799 (abs: 04943) */
/* 04147 */ HB_P_LINEOFFSET, 177,	/* 189 */
	HB_P_PUSHSYMNEAR, 57,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 04161 */ HB_P_LINEOFFSET, 178,	/* 190 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04190 */ HB_P_LINEOFFSET, 179,	/* 191 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04217 */ HB_P_LINEOFFSET, 180,	/* 192 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04244 */ HB_P_LINEOFFSET, 181,	/* 193 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04293 */ HB_P_LINEOFFSET, 182,	/* 194 */
	HB_P_LOCALNEARSETINT, 23, 0, 0,	/* MSLD_IND 0*/
/* 04299 */ HB_P_LINEOFFSET, 183,	/* 195 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 74,	/* 74 (abs: 04382) */
/* 04310 */ HB_P_LINEOFFSET, 184,	/* 196 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04359 */ HB_P_LINEOFFSET, 185,	/* 197 */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 23,	/* MSLD_IND */
	HB_P_JUMPNEAR, 72,	/* 72 (abs: 04452) */
/* 04382 */ HB_P_LINEOFFSET, 187,	/* 199 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04431 */ HB_P_LINEOFFSET, 188,	/* 200 */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 23,	/* MSLD_IND */
/* 04452 */ HB_P_LINEOFFSET, 190,	/* 202 */
	HB_P_PUSHLOCALNEAR, 26,	/* MPERC_FAL */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 04475) */
/* 04460 */ HB_P_LINEOFFSET, 191,	/* 203 */
	HB_P_PUSHLOCALNEAR, 23,	/* MSLD_IND */
	HB_P_PUSHLOCALNEAR, 26,	/* MPERC_FAL */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 23,	/* MSLD_IND */
/* 04475 */ HB_P_LINEOFFSET, 193,	/* 205 */
	HB_P_PUSHLOCALNEAR, 22,	/* MSLD_FALTA */
	HB_P_PUSHLOCALNEAR, 23,	/* MSLD_IND */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 22,	/* MSLD_FALTA */
/* 04484 */ HB_P_LINEOFFSET, 194,	/* 206 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04517 */ HB_P_LINEOFFSET, 195,	/* 207 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04563 */ HB_P_LINEOFFSET, 196,	/* 208 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04609 */ HB_P_LINEOFFSET, 197,	/* 209 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04655 */ HB_P_LINEOFFSET, 198,	/* 210 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MSLD_IND */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04699 */ HB_P_LINEOFFSET, 199,	/* 211 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP_CUSTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 04784) */
/* 04710 */ HB_P_LINEOFFSET, 200,	/* 212 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MSLD_IND */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04764 */ HB_P_LINEOFFSET, 201,	/* 213 */
	HB_P_PUSHLOCALNEAR, 21,	/* MTOT_FALTA */
	HB_P_PUSHLOCALNEAR, 23,	/* MSLD_IND */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 21,	/* MTOT_FALTA */
	HB_P_JUMPNEAR, 74,	/* 74 (abs: 04856) */
/* 04784 */ HB_P_LINEOFFSET, 203,	/* 215 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MSLD_IND */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04838 */ HB_P_LINEOFFSET, 204,	/* 216 */
	HB_P_PUSHLOCALNEAR, 21,	/* MTOT_FALTA */
	HB_P_PUSHLOCALNEAR, 23,	/* MSLD_IND */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 21,	/* MTOT_FALTA */
/* 04856 */ HB_P_LINEOFFSET, 206,	/* 218 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MTOT_ITEM */
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* MTOT_ITEM */
/* 04865 */ HB_P_LINEOFFSET, 207,	/* 219 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 12, 0,	/* 12*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* DISPOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04909 */ HB_P_LINEOFFSET, 208,	/* 220 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 13, 0,	/* 13*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* DISPOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTOT_ITEM */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04941 */ HB_P_LINEOFFSET, 209,	/* 221 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* I 1*/
	HB_P_JUMP, 231, 249,	/* -1561 (abs: 03386) */
/* 04950 */ HB_P_LINEOFFSET, 210,	/* 222 */
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 246, 1,	/* 502 (abs: 05462) */
/* 04963 */ HB_P_LINEOFFSET, 211,	/* 223 */
	HB_P_PUSHSYMNEAR, 55,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04970 */ HB_P_LINEOFFSET, 212,	/* 224 */
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 6, 0,	/* MPAG */
/* 04979 */ HB_P_LINEOFFSET, 213,	/* 225 */
	HB_P_PUSHSYMNEAR, 56,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 04995 */ HB_P_LINEOFFSET, 214,	/* 226 */
	HB_P_PUSHSYMNEAR, 57,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 05009 */ HB_P_LINEOFFSET, 215,	/* 227 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 05037 */ HB_P_LINEOFFSET, 216,	/* 228 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 05068 */ HB_P_LINEOFFSET, 217,	/* 229 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 05092 */ HB_P_LINEOFFSET, 218,	/* 230 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 05128 */ HB_P_LINEOFFSET, 219,	/* 231 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 05177) */
/* 05139 */ HB_P_LINEOFFSET, 220,	/* 232 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'l', 'd', '.', 'M', 'I', 'N', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 38,	/* 38 (abs: 05213) */
/* 05177 */ HB_P_LINEOFFSET, 222,	/* 234 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'l', 'd', '.', 'M', 'A', 'X', '.', 0, 
	HB_P_DOSHORT, 1,
/* 05213 */ HB_P_LINEOFFSET, 224,	/* 236 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'U', 'l', 't', '.', 'C', 'o', 'm', '.', 0, 
	HB_P_DOSHORT, 1,
/* 05249 */ HB_P_LINEOFFSET, 225,	/* 237 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'r', '.', 'U', 'l', 't', '.', 'C', 'o', 'm', 0, 
	HB_P_DOSHORT, 1,
/* 05287 */ HB_P_LINEOFFSET, 226,	/* 238 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'u', 's', 't', 'o', ' ', 'R', 'e', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 05325 */ HB_P_LINEOFFSET, 227,	/* 239 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'P', 'r', 'c', '.', 'V', 'e', 'n', 'd', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 05363 */ HB_P_LINEOFFSET, 228,	/* 240 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'S', 'l', 'd', '.', 'F', 'a', 'l', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 05400 */ HB_P_LINEOFFSET, 229,	/* 241 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'V', 'l', 'r', '.', 'F', 'a', 'l', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 05438 */ HB_P_LINEOFFSET, 230,	/* 242 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 05462 */ HB_P_LINEOFFSET, 232,	/* 244 */
	HB_P_PUSHSYMNEAR, 57,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 05476 */ HB_P_LINEOFFSET, 233,	/* 245 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'I', 't', 'e', 'm', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05524 */ HB_P_LINEOFFSET, 234,	/* 246 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTOT_ITEM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 05577 */ HB_P_LINEOFFSET, 235,	/* 247 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'S', 'a', 'l', 'd', 'o', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'q', 'u', 'e', ' ', 'F', 'a', 'l', 't', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05625 */ HB_P_LINEOFFSET, 236,	/* 248 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MSLD_FALTA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 05677 */ HB_P_LINEOFFSET, 237,	/* 249 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'q', 'u', 'e', ' ', 'F', 'a', 'l', 't', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05725 */ HB_P_LINEOFFSET, 238,	/* 250 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MTOT_FALTA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 05777 */ HB_P_LINEOFFSET, 239,	/* 251 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 05803 */ HB_P_LINEOFFSET, 240,	/* 252 */
	HB_P_PUSHSYMNEAR, 55,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05810 */ HB_P_LINEOFFSET, 241,	/* 253 */
	HB_P_PUSHSYMNEAR, 63,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 05819 */ HB_P_LINEOFFSET, 242,	/* 254 */
	HB_P_PUSHSYMNEAR, 64,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 64,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 64,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 05860 */ HB_P_LINEOFFSET, 243,	/* 255 */
	HB_P_PUSHSYMNEAR, 65,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'P', 'R', 'O', '_', 'A', 'B', 'A', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 90, 234,	/* -5542 (abs: 00340) */
/* 05885 */ HB_P_LINEOFFSET, 245,	/* 257 */
	HB_P_LOCALNEARSETINT, 31, 0, 0,	/* CONT 0*/
/* 05891 */ HB_P_LINEOFFSET, 246,	/* 258 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 2, 0,	/* MTOT_ITEM */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 23,	/* MSLD_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 22,	/* MSLD_FALTA */
	HB_P_POPLOCALNEAR, 21,	/* MTOT_FALTA */
/* 05906 */ HB_P_LINEOFFSET, 247,	/* 259 */
	HB_P_PUSHSYMNEAR, 15,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 66, 0,	/* MNOME_GRU */
/* 05918 */ HB_P_LINEOFFSET, 248,	/* 260 */
	HB_P_LOCALNEARSETINT, 31, 1, 0,	/* CONT 1*/
	HB_P_PUSHLOCALNEAR, 31,	/* CONT */
	HB_P_PUSHSYMNEAR, 48,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 176, 10,	/* 2736 (abs: 08670) */
/* 05937 */ HB_P_LINEOFFSET, 249,	/* 261 */
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 05956) */
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 13, 2,	/* 525 (abs: 06481) */
/* 05959 */ HB_P_LINEOFFSET, 250,	/* 262 */
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 6, 0,	/* MPAG */
/* 05968 */ HB_P_LINEOFFSET, 251,	/* 263 */
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 05984) */
/* 05977 */ HB_P_LINEOFFSET, 252,	/* 264 */
	HB_P_PUSHSYMNEAR, 55,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05984 */ HB_P_LINEOFFSET, 254,	/* 266 */
	HB_P_PUSHSYMNEAR, 56,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 06000 */ HB_P_LINEOFFSET, 255,	/* 267 */
	HB_P_PUSHSYMNEAR, 57,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 06014 */ HB_P_LINE, 12, 1,	/* 268 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 06043 */ HB_P_LINE, 13, 1,	/* 269 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 06075 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 06100 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 06137 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 06188) */
/* 06149 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'l', 'd', '.', 'M', 'I', 'N', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 06225) */
/* 06188 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'l', 'd', '.', 'M', 'A', 'X', '.', 0, 
	HB_P_DOSHORT, 1,
/* 06225 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'U', 'l', 't', '.', 'C', 'o', 'm', '.', 0, 
	HB_P_DOSHORT, 1,
/* 06262 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'r', '.', 'U', 'l', 't', '.', 'C', 'o', 'm', 0, 
	HB_P_DOSHORT, 1,
/* 06301 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'u', 's', 't', 'o', ' ', 'R', 'e', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 06340 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'P', 'r', 'c', '.', 'V', 'e', 'n', 'd', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 06379 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'S', 'l', 'd', '.', 'F', 'a', 'l', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 06417 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'V', 'l', 'r', '.', 'F', 'a', 'l', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 06456 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 06481 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 48,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_GRUPO */
	HB_P_PUSHLOCALNEAR, 31,	/* CONT */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 06538) */
/* 06506 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_GRUPO */
	HB_P_PUSHLOCALNEAR, 31,	/* CONT */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_GRUPO */
	HB_P_PUSHLOCALNEAR, 31,	/* CONT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* MNOME_GRU */
	HB_P_JUMP, 80, 8,	/* 2128 (abs: 08663) */
/* 06538 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 28,	/* CONS_ABAIXO */
/* 06546 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_LOCALNEARSETSTR, 27, 49, 0,	/* CCOMM 49*/
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
/* 06602 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHLOCALNEAR, 27,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_GRUPO */
	HB_P_PUSHLOCALNEAR, 31,	/* CONT */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* CCOMM */
/* 06641 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 06707) */
/* 06653 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHLOCALNEAR, 27,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '<', '=', ' ', 'e', 's', 't', '_', 'm', 'i', 'n', ' ', 'A', 'N', 'D', ' ', 'e', 's', 't', '_', 'm', 'i', 'n', ' ', '>', ' ', '0', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* CCOMM */
	HB_P_JUMPNEAR, 54,	/* 54 (abs: 06759) */
/* 06707 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHLOCALNEAR, 27,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '<', '=', ' ', 'e', 's', 't', '_', 'm', 'a', 'x', ' ', 'A', 'N', 'D', ' ', 'e', 's', 't', '_', 'm', 'a', 'x', ' ', '>', ' ', '0', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* CCOMM */
/* 06759 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHLOCALNEAR, 27,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ',', 'm', 'e', 'r', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* CCOMM */
/* 06792 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_MESSAGE, 46, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 47,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 27,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 28, 0,	/* CONS_ABAIXO */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 06813 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_MESSAGE, 46, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 47,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 06838 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHSYMNEAR, 48,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 176, 0,	/* 176 (abs: 07026) */
/* 06853 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHSYMNEAR, 57,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', '+', 0, 
	HB_P_DOSHORT, 2,
/* 06869 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHSYMNEAR, 57,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'W', '1', 0, 
	HB_P_DOSHORT, 2,
/* 06885 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'G', ' ', 'R', ' ', 'U', ' ', 'P', ' ', 'O', ':', ' ', 0, 
	HB_P_PUSHVARIABLE, 66, 0,	/* MNOME_GRU */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06925 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'U', 'B', '-', 'G', 'R', 'U', 'P', 'O', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 67,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_GRUPO */
	HB_P_PUSHLOCALNEAR, 31,	/* CONT */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_GRUPO */
	HB_P_PUSHLOCALNEAR, 31,	/* CONT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06994 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHSYMNEAR, 57,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', '-', 0, 
	HB_P_DOSHORT, 2,
/* 07010 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHSYMNEAR, 57,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'W', '0', 0, 
	HB_P_DOSHORT, 2,
/* 07026 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_LOCALNEARSETINT, 13, 0, 0,	/* I 0*/
/* 07033 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_LOCALNEARSETINT, 13, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_PUSHSYMNEAR, 48,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 74, 6,	/* 1610 (abs: 08660) */
/* 07053 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* DISPOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07098 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* DISPOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07130 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 07150) */
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 71, 2,	/* 583 (abs: 07733) */
/* 07153 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 6, 0,	/* MPAG */
/* 07163 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 07181) */
/* 07173 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHSYMNEAR, 55,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07181 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHSYMNEAR, 56,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 07198 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_PUSHSYMNEAR, 57,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 07213 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 07242 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 07274 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 07299 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 07336 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 07387) */
/* 07348 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'l', 'd', '.', 'M', 'I', 'N', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 07424) */
/* 07387 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'l', 'd', '.', 'M', 'A', 'X', '.', 0, 
	HB_P_DOSHORT, 1,
/* 07424 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'U', 'l', 't', '.', 'C', 'o', 'm', '.', 0, 
	HB_P_DOSHORT, 1,
/* 07461 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'r', '.', 'U', 'l', 't', '.', 'C', 'o', 'm', 0, 
	HB_P_DOSHORT, 1,
/* 07500 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'u', 's', 't', 'o', ' ', 'R', 'e', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 07539 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'P', 'r', 'c', '.', 'V', 'e', 'n', 'd', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 07578 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'S', 'l', 'd', '.', 'F', 'a', 'l', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 07616 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'V', 'l', 'r', '.', 'F', 'a', 'l', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 07655 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 07680 */ HB_P_LINE, 79, 1,	/* 335 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 07733) */
/* 07692 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 07718 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_PUSHSYMNEAR, 59,	/* PRT_GRU */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 07733 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 07787) */
/* 07745 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_GREATEREQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 16,	/* 16 (abs: 07782) */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 07829) */
	HB_P_JUMP, 101, 3,	/* 869 (abs: 08653) */
/* 07787 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 20,	/* 20 (abs: 07824) */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 07829) */
	HB_P_JUMP, 59, 3,	/* 827 (abs: 08653) */
/* 07829 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_PUSHSYMNEAR, 57,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 07844 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 07874 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 07902 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 07930 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07980 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_LOCALNEARSETINT, 23, 0, 0,	/* MSLD_IND 0*/
/* 07987 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 08073) */
/* 07999 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08049 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 23,	/* MSLD_IND */
	HB_P_JUMPNEAR, 74,	/* 74 (abs: 08145) */
/* 08073 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08123 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 23,	/* MSLD_IND */
/* 08145 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_PUSHLOCALNEAR, 26,	/* MPERC_FAL */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 08170) */
/* 08154 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHLOCALNEAR, 23,	/* MSLD_IND */
	HB_P_PUSHLOCALNEAR, 26,	/* MPERC_FAL */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 23,	/* MSLD_IND */
/* 08170 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHLOCALNEAR, 22,	/* MSLD_FALTA */
	HB_P_PUSHLOCALNEAR, 23,	/* MSLD_IND */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 22,	/* MSLD_FALTA */
/* 08180 */ HB_P_LINE, 110, 1,	/* 366 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 08214 */ HB_P_LINE, 111, 1,	/* 367 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 08261 */ HB_P_LINE, 112, 1,	/* 368 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 08308 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 08355 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MSLD_IND */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08400 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP_CUSTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 78,	/* 78 (abs: 08488) */
/* 08412 */ HB_P_LINE, 116, 1,	/* 372 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MSLD_IND */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08467 */ HB_P_LINE, 117, 1,	/* 373 */
	HB_P_PUSHLOCALNEAR, 21,	/* MTOT_FALTA */
	HB_P_PUSHLOCALNEAR, 23,	/* MSLD_IND */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 21,	/* MTOT_FALTA */
	HB_P_JUMPNEAR, 76,	/* 76 (abs: 08562) */
/* 08488 */ HB_P_LINE, 119, 1,	/* 375 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MSLD_IND */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08543 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_PUSHLOCALNEAR, 21,	/* MTOT_FALTA */
	HB_P_PUSHLOCALNEAR, 23,	/* MSLD_IND */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 21,	/* MTOT_FALTA */
/* 08562 */ HB_P_LINE, 122, 1,	/* 378 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MTOT_ITEM */
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* MTOT_ITEM */
/* 08572 */ HB_P_LINE, 123, 1,	/* 379 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 12, 0,	/* 12*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* DISPOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_ABAIXO */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08617 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 13, 0,	/* 13*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* DISPOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTOT_ITEM */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08650 */ HB_P_LINE, 125, 1,	/* 381 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* I 1*/
	HB_P_JUMP, 175, 249,	/* -1617 (abs: 07040) */
/* 08660 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_LOCALNEARADDINT, 31, 1, 0,	/* CONT 1*/
	HB_P_JUMP, 73, 245,	/* -2743 (abs: 05924) */
/* 08670 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 8, 2,	/* 520 (abs: 09201) */
/* 08684 */ HB_P_LINE, 128, 1,	/* 384 */
	HB_P_PUSHSYMNEAR, 55,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08692 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 6, 0,	/* MPAG */
/* 08702 */ HB_P_LINE, 130, 1,	/* 386 */
	HB_P_PUSHSYMNEAR, 56,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 08719 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_PUSHSYMNEAR, 57,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 08734 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 08763 */ HB_P_LINE, 133, 1,	/* 389 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 08795 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 08820 */ HB_P_LINE, 135, 1,	/* 391 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 08857 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 08908) */
/* 08869 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'l', 'd', '.', 'M', 'I', 'N', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 08945) */
/* 08908 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'l', 'd', '.', 'M', 'A', 'X', '.', 0, 
	HB_P_DOSHORT, 1,
/* 08945 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'U', 'l', 't', '.', 'C', 'o', 'm', '.', 0, 
	HB_P_DOSHORT, 1,
/* 08982 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'r', '.', 'U', 'l', 't', '.', 'C', 'o', 'm', 0, 
	HB_P_DOSHORT, 1,
/* 09021 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'u', 's', 't', 'o', ' ', 'R', 'e', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 09060 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'P', 'r', 'c', '.', 'V', 'e', 'n', 'd', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 09099 */ HB_P_LINE, 145, 1,	/* 401 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'S', 'l', 'd', '.', 'F', 'a', 'l', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 09137 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'V', 'l', 'r', '.', 'F', 'a', 'l', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 09176 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 09201 */ HB_P_LINE, 149, 1,	/* 405 */
	HB_P_PUSHSYMNEAR, 57,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 09216 */ HB_P_LINE, 150, 1,	/* 406 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'I', 't', 'e', 'm', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 09265 */ HB_P_LINE, 151, 1,	/* 407 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTOT_ITEM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 09319 */ HB_P_LINE, 152, 1,	/* 408 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'S', 'a', 'l', 'd', 'o', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'q', 'u', 'e', ' ', 'F', 'a', 'l', 't', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 09368 */ HB_P_LINE, 153, 1,	/* 409 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MSLD_FALTA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 09421 */ HB_P_LINE, 154, 1,	/* 410 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'q', 'u', 'e', ' ', 'F', 'a', 'l', 't', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 09470 */ HB_P_LINE, 155, 1,	/* 411 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MTOT_FALTA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 09523 */ HB_P_LINE, 156, 1,	/* 412 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 09550 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_PUSHSYMNEAR, 55,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 09558 */ HB_P_LINE, 158, 1,	/* 414 */
	HB_P_PUSHSYMNEAR, 63,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 09568 */ HB_P_LINE, 159, 1,	/* 415 */
	HB_P_PUSHSYMNEAR, 64,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 64,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 64,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 09610 */ HB_P_LINE, 160, 1,	/* 416 */
	HB_P_PUSHSYMNEAR, 65,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'P', 'R', 'O', '_', 'A', 'B', 'A', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 179, 219,	/* -9293 (abs: 00340) */
/* 09636 */ HB_P_LINE, 163, 1,	/* 419 */
	HB_P_PUSHSYMNEAR, 68,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 09644 */ HB_P_LINE, 164, 1,	/* 420 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 09650 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

