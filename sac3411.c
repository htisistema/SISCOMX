/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <sac3411.prg>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\sac3411.prg /q /oC:\hti\SISCOM\sac3411.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.11.21 09:47:41 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "sac3411.prg"

HB_FUNC( SAC3411 );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_EMP );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SAC23PD1 );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC3411 )
{ "SAC3411", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC3411 )}, NULL },
{ "MNUM_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "MPED_ORC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MNUM_ORCIDO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MCODEMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTOT_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "MMULT_EMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCODEMPRESA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_EMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_EMP )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "MQUANTD_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "ALI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACHOICE )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SAC23PD1", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC23PD1 )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC3411 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC3411
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC3411 = hb_vm_SymbolInit_SAC3411;
   #pragma data_seg()
#endif

HB_FUNC( SAC3411 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 12, 3,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_LOCALNEARSETSTR, 4, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', '3', '4', '1', '1', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 10,	/* M_CODIGO */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* M_POSICAO */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 14,	/* CONS_ARQ */
	HB_P_LOCALNEARSETINT, 15, 0, 0,	/* I 0*/
/* 00037 */ HB_P_LINEOFFSET, 2,	/* 9 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 2,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MNUM_PED */
	HB_P_DOSHORT, 1,
	HB_P_POPVARIABLE, 1, 0,	/* MNUM_PED */
/* 00050 */ HB_P_LINEOFFSET, 4,	/* 11 */
	HB_P_PUSHSYMNEAR, 3,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MPRG */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'C', 'O', 'N', 'S', 'U', 'L', 'T', 'A', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'P', 'E', 'D', 'E', 'N', 'T', 'E', 'S', ' ', '(', 'E', 'M', ' ', 'A', 'B', 'E', 'R', 'T', 'O', ')', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHVARIABLE, 4, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00126) */
/* 00121 */ HB_P_LINEOFFSET, 5,	/* 12 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00126 */ HB_P_LINEOFFSET, 7,	/* 14 */
	HB_P_LOCALNEARSETINT, 5, 42, 0,	/* LBA 42*/
/* 00132 */ HB_P_LINEOFFSET, 8,	/* 15 */
	HB_P_LOCALNEARSETINT, 6, 120, 0,	/* CBA 120*/
/* 00138 */ HB_P_LINEOFFSET, 9,	/* 16 */
	HB_P_PUSHSYMNEAR, 5,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'C', 'O', 'N', 'S', 'U', 'L', 'T', 'A', ' ', 'D', 'E', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MAB_PG */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00191) */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', 'A', 'G', 'O', 'S', 0, 
	HB_P_JUMPNEAR, 15,	/* 15 (abs: 00204) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'E', 'M', ' ', 'A', 'B', 'E', 'R', 'T', 'O', 'S', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 00212 */ HB_P_LINEOFFSET, 10,	/* 17 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 6, 0,	/* MPED_ORC */
/* 00218 */ HB_P_LINEOFFSET, 11,	/* 18 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 8, 0,	/* MNUM_ORCIDO */
/* 00230 */ HB_P_LINEOFFSET, 12,	/* 19 */
	HB_P_PUSHSYMNEAR, 9,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 10, 0,	/* GETLIST */
/* 00244 */ HB_P_LINEOFFSET, 14,	/* 21 */
	HB_P_PUSHSYMNEAR, 11,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00253 */ HB_P_LINEOFFSET, 15,	/* 22 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_POPVARIABLE, 12, 0,	/* MCODEMP */
/* 00264 */ HB_P_LINEOFFSET, 16,	/* 23 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 13, 0,	/* MTOT_PED */
/* 00270 */ HB_P_LINEOFFSET, 17,	/* 24 */
	HB_P_PUSHSYMNEAR, 14,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00279 */ HB_P_LINEOFFSET, 18,	/* 25 */
	HB_P_PUSHSYMNEAR, 15,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00294 */ HB_P_LINEOFFSET, 19,	/* 26 */
	HB_P_PUSHSYMNEAR, 15,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00309 */ HB_P_LINEOFFSET, 20,	/* 27 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 'N', 'o', '.', 'P', 'e', 'd', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00334 */ HB_P_LINEOFFSET, 21,	/* 28 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'd', '.', 'C', 'l', 'i', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00359 */ HB_P_LINEOFFSET, 22,	/* 29 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'V', 'e', 'n', 'd', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00382 */ HB_P_LINEOFFSET, 23,	/* 30 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00410 */ HB_P_LINEOFFSET, 24,	/* 31 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'H', 'r', '.', 'O', 'r', 'c', 'a', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00441 */ HB_P_LINEOFFSET, 25,	/* 32 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00470 */ HB_P_LINEOFFSET, 26,	/* 33 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'T', 'p', 0, 
	HB_P_DOSHORT, 1,
/* 00490 */ HB_P_LINEOFFSET, 27,	/* 34 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'O', 'p', 'e', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00512 */ HB_P_LINEOFFSET, 28,	/* 35 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'E', 'm', 'p', 0, 
	HB_P_DOSHORT, 1,
/* 00533 */ HB_P_LINEOFFSET, 29,	/* 36 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 18,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'L', 'i', 'b', 0, 
	HB_P_DOSHORT, 1,
/* 00560 */ HB_P_LINEOFFSET, 30,	/* 37 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 18,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'E', 'x', 'p', 0, 
	HB_P_DOSHORT, 1,
/* 00587 */ HB_P_LINEOFFSET, 31,	/* 38 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'A', 'P', 'P', '/', 'N', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00611 */ HB_P_LINEOFFSET, 32,	/* 39 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 97,	/* 97 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'a', 't', 'a', ' ', 'A', 'P', 'P', 0, 
	HB_P_DOSHORT, 1,
/* 00637 */ HB_P_LINEOFFSET, 33,	/* 40 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 18,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'F', 'l', 'g', 0, 
	HB_P_DOSHORT, 1,
/* 00664 */ HB_P_LINEOFFSET, 35,	/* 42 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MMULT_EMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 138, 0,	/* 138 (abs: 00812) */
/* 00677 */ HB_P_LINEOFFSET, 36,	/* 43 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MCODEMPRESA */
	HB_P_POPVARIABLE, 12, 0,	/* MCODEMP */
/* 00685 */ HB_P_LINEOFFSET, 37,	/* 44 */
	HB_P_PUSHSYMNEAR, 14,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00693 */ HB_P_LINEOFFSET, 38,	/* 45 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'E', 'm', 'p', 'r', 'e', 's', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00719 */ HB_P_LINEOFFSET, 39,	/* 46 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'e', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 18,	/* 18 */
	HB_P_PUSHSYMNEAR, 24,	/* VER_EMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MCODEMP */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 10, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00790 */ HB_P_LINEOFFSET, 40,	/* 47 */
	HB_P_PUSHSYMNEAR, 26,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 10, 0,	/* GETLIST */
/* 00812 */ HB_P_LINEOFFSET, 42,	/* 49 */
	HB_P_PUSHSYMNEAR, 27,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_DOSHORT, 4,
/* 00832 */ HB_P_LINEOFFSET, 43,	/* 50 */
	HB_P_PUSHSYMNEAR, 28,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 64,	/* 64 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'm', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'c', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'a', 'c', 'o', 'e', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'a', ' ', 'c', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', 'O', 'K', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00905 */ HB_P_LINEOFFSET, 44,	/* 51 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 14,	/* CONS_ARQ */
/* 00912 */ HB_P_LINEOFFSET, 46,	/* 53 */
	HB_P_MESSAGE, 29, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 30,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTR, 156, 1,	/* 412 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ',', 'p', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ',', 'p', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ',', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ',', 'd', 'a', 't', 'a', '_', 'a', 'p', 'p', ',', 'p', 'h', 'o', 'r', 'a', ',', 'p', 't', 'p', '_', 'v', 'e', 'n', 'd', ',', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'p', 'e', 'm', 'p', 'r', 'e', 's', 'a', ',', 'p', 'e', 'x', 'p', '_', 'p', 'o', 'r', ',', 'p', 'l', 'i', 'b', '_', 'p', 'o', 'r', ',', 'p', 'o', 's', ',', 'p', 'f', 'e', 'c', 'h', 'a', ',', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', ' ', '*', ' ', 'p', 'v', 'l', 'r', '_', 'f', 'a', 't', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'o', 'r', 'c', 'a', 'm', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', '(', 'p', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, ' ', 39, ')', ' ', 'A', 'N', 'D', ' ', 'p', 'o', 's', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'p', 'o', 's', ' ', '=', ' ', 39, '0', '0', '0', '0', '0', '0', 39, ' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'p', 'o', 's', ' ', '=', ' ', 39, ' ', ' ', ' ', ' ', ' ', ' ', 39, ' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ',', 'p', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ',', 'p', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ',', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ',', 'd', 'a', 't', 'a', '_', 'a', 'p', 'p', ',', 'p', 'h', 'o', 'r', 'a', ',', 'p', 't', 'p', '_', 'v', 'e', 'n', 'd', ',', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'p', 'e', 'm', 'p', 'r', 'e', 's', 'a', ',', 'p', 'e', 'x', 'p', '_', 'p', 'o', 'r', ',', 'p', 'l', 'i', 'b', '_', 'p', 'o', 'r', ',', 'p', 'o', 's', ',', 'p', 'f', 'e', 'c', 'h', 'a', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 14, 0,	/* CONS_ARQ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01345 */ HB_P_LINEOFFSET, 47,	/* 54 */
	HB_P_MESSAGE, 29, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 30,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01369 */ HB_P_LINEOFFSET, 48,	/* 55 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 10,	/* M_CODIGO */
/* 01376 */ HB_P_LINEOFFSET, 49,	/* 56 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* M_POSICAO */
/* 01383 */ HB_P_LINEOFFSET, 50,	/* 57 */
	HB_P_LOCALNEARSETINT, 15, 0, 0,	/* I 0*/
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_GER */
	HB_P_POPVARIABLE, 31, 0,	/* MQUANTD_PED */
/* 01397 */ HB_P_LINEOFFSET, 51,	/* 58 */
	HB_P_LOCALNEARSETINT, 15, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_PUSHSYMNEAR, 32,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_ARQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 56, 1,	/* 312 (abs: 01725) */
/* 01416 */ HB_P_LINEOFFSET, 52,	/* 59 */
	HB_P_PUSHSYMNEAR, 33,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 01432 */ HB_P_LINEOFFSET, 53,	/* 60 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_GER */
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_GER */
/* 01447 */ HB_P_LINEOFFSET, 55,	/* 62 */
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_CODIGO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01700 */ HB_P_LINEOFFSET, 58,	/* 65 */
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_POSICAO */
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 01716 */ HB_P_LINEOFFSET, 59,	/* 66 */
	HB_P_LOCALNEARADDINT, 15, 1, 0,	/* I 1*/
	HB_P_JUMP, 193, 254,	/* -319 (abs: 01403) */
/* 01725 */ HB_P_LINEOFFSET, 60,	/* 67 */
	HB_P_PUSHSYMNEAR, 32,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_CODIGO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 59,	/* 59 (abs: 01795) */
/* 01738 */ HB_P_LINEOFFSET, 61,	/* 68 */
	HB_P_PUSHSYMNEAR, 37,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'N', 'e', 'n', 'h', 'u', 'm', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'P', 'e', 'd', 'e', 'n', 't', 'e', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01776 */ HB_P_LINEOFFSET, 62,	/* 69 */
	HB_P_PUSHSYMNEAR, 38,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01783 */ HB_P_LINEOFFSET, 63,	/* 70 */
	HB_P_PUSHLOCALNEAR, 3,	/* TIPO_ALI */
	HB_P_POPMEMVAR, 39, 0,	/* ALI */
/* 01790 */ HB_P_LINEOFFSET, 64,	/* 71 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01795 */ HB_P_LINEOFFSET, 67,	/* 74 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* POINT 0*/
/* 01801 */ HB_P_LINEOFFSET, 68,	/* 75 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'O', 'r', 'c', 'a', 'm', 'e', 'n', 't', 'o', 's', ' ', 'e', 'm', ' ', 'A', 'b', 'e', 'r', 't', 'o', ':', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MQUANTD_PED */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_GER */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01908 */ HB_P_LINEOFFSET, 69,	/* 76 */
	HB_P_PUSHSYMNEAR, 28,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', ' ', '-', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', 'p', '/', 'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 01951 */ HB_P_LINEOFFSET, 70,	/* 77 */
	HB_P_PUSHSYMNEAR, 14,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 40,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 10,	/* M_CODIGO */
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 7,	/* POINT */
	HB_P_PUSHSYMNEAR, 14,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01988 */ HB_P_LINEOFFSET, 71,	/* 78 */
	HB_P_PUSHSYMNEAR, 41,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 02019) */
/* 02000 */ HB_P_LINEOFFSET, 72,	/* 79 */
	HB_P_PUSHSYMNEAR, 38,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02007 */ HB_P_LINEOFFSET, 73,	/* 80 */
	HB_P_PUSHLOCALNEAR, 3,	/* TIPO_ALI */
	HB_P_POPMEMVAR, 39, 0,	/* ALI */
/* 02014 */ HB_P_LINEOFFSET, 74,	/* 81 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02019 */ HB_P_LINEOFFSET, 76,	/* 83 */
	HB_P_PUSHSYMNEAR, 41,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 22, 255,	/* -234 (abs: 01795) */
/* 02032 */ HB_P_LINEOFFSET, 77,	/* 84 */
	HB_P_PUSHSYMNEAR, 42,	/* SAC23PD1 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_POSICAO */
	HB_P_PUSHLOCALNEAR, 7,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 248, 248,	/* -1800 (abs: 00244) */
	HB_P_ENDPROC
/* 02048 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

