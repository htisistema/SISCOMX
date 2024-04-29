/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC341.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC341.PRG /q /oC:\hti\SISCOM\SAC341.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2024.04.26 15:27:01 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC341.PRG"

HB_FUNC( SAC341 );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( EMPTY );
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
HB_FUNC_EXTERN( VAL );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC341 )
{ "SAC341", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC341 )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
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
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
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
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "MNUM_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNUM_ORC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNUM_PEDP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC341 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC341
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC341 = hb_vm_SymbolInit_SAC341;
   #pragma data_seg()
#endif

HB_FUNC( SAC341 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 36, 3,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 10, 0,	/* 10 */
	HB_P_LOCALNEARSETSTR, 4, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '3', '4', '1', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* M_CODIGO */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 12,	/* M_POSICAO */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 30,	/* CONS_ARQ */
	HB_P_LOCALNEARSETINT, 31, 0, 0,	/* I 0*/
	HB_P_LOCALNEARSETSTR, 32, 2, 0,	/* MFECHA 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 33, 2, 0,	/* MPED_ORC 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 38, 1, 0,	/* MQTD_VIA 1*/
	0, 
	HB_P_LOCALNEARSETINT, 39, 0, 0,	/* MCONT_ITEM 0*/
/* 00057 */ HB_P_LINEOFFSET, 3,	/* 13 */
	HB_P_PUSHSYMNEAR, 1,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MPRG */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'C', 'O', 'N', 'S', 'U', 'L', 'T', 'A', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', 'P', 'E', 'D', 'E', 'N', 'T', 'E', 'S', ' ', '(', 'E', 'M', ' ', 'A', 'B', 'E', 'R', 'T', 'O', ')', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHVARIABLE, 2, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00130) */
/* 00125 */ HB_P_LINEOFFSET, 4,	/* 14 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00130 */ HB_P_LINEOFFSET, 6,	/* 16 */
	HB_P_LOCALNEARSETINT, 5, 42, 0,	/* LBA 42*/
/* 00136 */ HB_P_LINEOFFSET, 7,	/* 17 */
	HB_P_LOCALNEARSETINT, 6, 120, 0,	/* CBA 120*/
/* 00142 */ HB_P_LINEOFFSET, 8,	/* 18 */
	HB_P_PUSHSYMNEAR, 3,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* TIPO_ALI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 14,	/* 14 (abs: 00166) */
	HB_P_PUSHLOCALNEAR, 3,	/* TIPO_ALI */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'r', 'c', 'a', 'm', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 16,	/* 16 (abs: 00183) */
	HB_P_PUSHLOCALNEAR, 3,	/* TIPO_ALI */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'q', '_', 'o', 'r', 'c', 'a', 'm', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 81,	/* 81 (abs: 00264) */
/* 00185 */ HB_P_LINEOFFSET, 9,	/* 19 */
	HB_P_PUSHSYMNEAR, 4,	/* OP_TELA */
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
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00238) */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', 'A', 'G', 'O', 'S', 0, 
	HB_P_JUMPNEAR, 15,	/* 15 (abs: 00251) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'E', 'M', ' ', 'A', 'B', 'E', 'R', 'T', 'O', 'S', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 00256 */ HB_P_LINEOFFSET, 10,	/* 20 */
	HB_P_LOCALNEARSETINT, 33, 1, 0,	/* MPED_ORC 1*/
	HB_P_JUMPNEAR, 77,	/* 77 (abs: 00339) */
/* 00264 */ HB_P_LINEOFFSET, 12,	/* 22 */
	HB_P_PUSHSYMNEAR, 4,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'C', 'O', 'N', 'S', 'U', 'L', 'T', 'A', ' ', 'D', 'E', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MAB_PG */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00315) */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', 'A', 'G', 'O', 'S', 0, 
	HB_P_JUMPNEAR, 15,	/* 15 (abs: 00328) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'E', 'M', ' ', 'A', 'B', 'E', 'R', 'T', 'O', 'S', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 00333 */ HB_P_LINEOFFSET, 13,	/* 23 */
	HB_P_LOCALNEARSETINT, 33, 2, 0,	/* MPED_ORC 2*/
/* 00339 */ HB_P_LINEOFFSET, 15,	/* 25 */
	HB_P_PUSHSYMNEAR, 5,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 9,	/* MNUM_PEDIDO */
/* 00350 */ HB_P_LINEOFFSET, 16,	/* 26 */
	HB_P_PUSHSYMNEAR, 6,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 7, 0,	/* GETLIST */
/* 00364 */ HB_P_LINEOFFSET, 18,	/* 28 */
	HB_P_PUSHSYMNEAR, 8,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00373 */ HB_P_LINEOFFSET, 19,	/* 29 */
	HB_P_LOCALNEARSETSTR, 23, 4, 0,	/* MCODEMP 4*/
	' ', ' ', ' ', 0, 
/* 00383 */ HB_P_LINEOFFSET, 20,	/* 30 */
	HB_P_LOCALNEARSETINT, 14, 0, 0,	/* MTOT_PED 0*/
/* 00389 */ HB_P_LINEOFFSET, 21,	/* 31 */
	HB_P_PUSHSYMNEAR, 9,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00398 */ HB_P_LINEOFFSET, 22,	/* 32 */
	HB_P_PUSHSYMNEAR, 10,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00413 */ HB_P_LINEOFFSET, 23,	/* 33 */
	HB_P_PUSHSYMNEAR, 10,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00428 */ HB_P_LINEOFFSET, 24,	/* 34 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'N', 'o', '.', 'P', 'e', 'd', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00452 */ HB_P_LINEOFFSET, 25,	/* 35 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 00477 */ HB_P_LINEOFFSET, 26,	/* 36 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'V', 'n', 'd', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00499 */ HB_P_LINEOFFSET, 27,	/* 37 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 13,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', ' ', ' ', 'D', 'a', 't', 'a', ' ', '-', ' ', 'H', 'o', 'r', 'a', 's', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00541 */ HB_P_LINEOFFSET, 28,	/* 38 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 13,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00574 */ HB_P_LINEOFFSET, 30,	/* 40 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 13,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'T', 'p', 0, 
	HB_P_DOSHORT, 1,
/* 00601 */ HB_P_LINEOFFSET, 31,	/* 41 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 13,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'p', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00628 */ HB_P_LINEOFFSET, 34,	/* 44 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 13,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', 'N', 'o', '.', 'A', 'p', 'p', 0, 
	HB_P_DOSHORT, 1,
/* 00659 */ HB_P_LINEOFFSET, 35,	/* 45 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 13,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'F', 'l', 'g', 0, 
	HB_P_DOSHORT, 1,
/* 00686 */ HB_P_LINEOFFSET, 37,	/* 47 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 13,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'I', 'm', 'p', '.', 'V', 'i', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 00717 */ HB_P_LINEOFFSET, 38,	/* 48 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 13,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'Q', 't', 'd', '.', 'I', 't', 'e', 'm', 0, 
	HB_P_DOSHORT, 1,
/* 00749 */ HB_P_LINEOFFSET, 39,	/* 49 */
	HB_P_PUSHVARIABLE, 14, 0,	/* MMULT_EMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 167, 0,	/* 167 (abs: 00926) */
/* 00762 */ HB_P_LINEOFFSET, 40,	/* 50 */
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMPRESA */
	HB_P_POPLOCALNEAR, 23,	/* MCODEMP */
/* 00769 */ HB_P_LINEOFFSET, 41,	/* 51 */
	HB_P_PUSHSYMNEAR, 9,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00777 */ HB_P_LINEOFFSET, 42,	/* 52 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'E', 'm', 'p', 'r', 'e', 's', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00803 */ HB_P_LINEOFFSET, 43,	/* 53 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 18,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MCODEMP */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00841) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00846) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'e', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 24, 0,	/* 24 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MCODEMP */
	HB_P_PUSHSYMNEAR, 19,	/* VER_EMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
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
	HB_P_MESSAGE, 20, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 7, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00904 */ HB_P_LINEOFFSET, 44,	/* 54 */
	HB_P_PUSHSYMNEAR, 21,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 7, 0,	/* GETLIST */
/* 00926 */ HB_P_LINEOFFSET, 46,	/* 56 */
	HB_P_PUSHSYMNEAR, 22,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 64,	/* 64 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'm', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'c', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'a', 'c', 'o', 'e', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'a', ' ', 'c', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', 'O', 'K', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00999 */ HB_P_LINEOFFSET, 47,	/* 57 */
	HB_P_PUSHLOCALNEAR, 33,	/* MPED_ORC */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 240, 2,	/* 752 (abs: 01758) */
/* 01009 */ HB_P_LINEOFFSET, 48,	/* 58 */
	HB_P_PUSHLOCALNEAR, 1,	/* MAB_PG */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 109, 1,	/* 365 (abs: 01380) */
/* 01018 */ HB_P_LINEOFFSET, 51,	/* 61 */
	HB_P_LOCALNEARSETSTR, 34, 97, 1,	/* CCOMM 353*/
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'e', 'm', 'p', 'r', 'e', 's', 'a', ',', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ',', ' ', 'm', 'a', 'x', '(', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ')', ',', ' ', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', ' ', 'm', 'a', 'x', '(', 'p', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ')', ',', ' ', ' ', 'm', 'a', 'x', '(', 'p', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ')', ',', ' ', 'p', 't', 'p', '_', 'v', 'e', 'n', 'd', ',', ' ', 'm', 'a', 'x', '(', 'p', 'h', 'o', 'r', 'a', ')', ',', ' ', 'p', 'o', 's', ',', ' ', 'p', 'f', 'e', 'c', 'h', 'a', ',', ' ', 'm', 'a', 'x', '(', 'q', 't', 'd', '_', 'v', 'i', 'a', ')', ',', ' ', '(', 'S', 'E', 'L', 'E', 'C', 'T', ' ', 'r', 'a', 'z', 'a', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'l', 'i', '.', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 'o', 'r', 'c', '.', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ')', ' ', 'r', 'a', 'z', 'a', 'o', ',', ' ', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', ' ', '*', ' ', 'p', 'v', 'l', 'r', '_', 'f', 'a', 't', ')', ',', ' ', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', ' ', '*', ' ', 'p', 'p', 'r', 'e', '_', 'v', 'e', 'n', 'd', 'a', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'o', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, '*', 39, ' ', 'g', 'r', 'o', 'u', 'p', ' ', 'b', 'y', ' ', '1', ',', '2', ',', '4', ',', '7', ',', '9', ',', ' ', '1', '0', ' ', 'o', 'r', 'd', 'e', 'r', ' ', 'b', 'y', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', 0, 
	HB_P_JUMP, 105, 4,	/* 1129 (abs: 02506) */
/* 01380 */ HB_P_LINEOFFSET, 55,	/* 65 */
	HB_P_LOCALNEARSETSTR, 34, 113, 1,	/* CCOMM 369*/
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'e', 'm', 'p', 'r', 'e', 's', 'a', ',', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ',', ' ', 'm', 'a', 'x', '(', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ')', ',', ' ', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', ' ', 'm', 'a', 'x', '(', 'p', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ')', ',', ' ', 'm', 'a', 'x', '(', 'p', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ')', ',', ' ', 'p', 't', 'p', '_', 'v', 'e', 'n', 'd', ',', ' ', 'm', 'a', 'x', '(', 'p', 'h', 'o', 'r', 'a', ')', ',', ' ', 'p', 'o', 's', ',', ' ', 'p', 'f', 'e', 'c', 'h', 'a', ',', ' ', 'm', 'a', 'x', '(', 'q', 't', 'd', '_', 'v', 'i', 'a', ')', ',', ' ', '(', 'S', 'E', 'L', 'E', 'C', 'T', ' ', 'r', 'a', 'z', 'a', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'l', 'i', '.', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 'o', 'r', 'c', '.', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ')', ' ', 'r', 'a', 'z', 'a', 'o', ',', ' ', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', ' ', '*', ' ', 'p', 'v', 'l', 'r', '_', 'f', 'a', 't', ')', ',', ' ', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', ' ', '*', ' ', 'p', 'p', 'r', 'e', '_', 'v', 'e', 'n', 'd', 'a', ')', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'o', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', '(', 'p', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, ' ', 39, ')', ' ', 'g', 'r', 'o', 'u', 'p', ' ', 'b', 'y', ' ', '1', ',', '2', ',', '4', ',', '7', ',', '9', ',', ' ', '1', '0', ' ', 'o', 'r', 'd', 'e', 'r', ' ', 'b', 'y', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', 0, 
	HB_P_JUMP, 239, 2,	/* 751 (abs: 02506) */
/* 01758 */ HB_P_LINEOFFSET, 60,	/* 70 */
	HB_P_PUSHLOCALNEAR, 1,	/* MAB_PG */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 109, 1,	/* 365 (abs: 02129) */
/* 01767 */ HB_P_LINEOFFSET, 64,	/* 74 */
	HB_P_LOCALNEARSETSTR, 34, 97, 1,	/* CCOMM 353*/
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'e', 'm', 'p', 'r', 'e', 's', 'a', ',', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ',', ' ', 'm', 'a', 'x', '(', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ')', ',', ' ', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', ' ', 'm', 'a', 'x', '(', 'p', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ')', ',', ' ', ' ', 'm', 'a', 'x', '(', 'p', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ')', ',', ' ', 'p', 't', 'p', '_', 'v', 'e', 'n', 'd', ',', ' ', 'm', 'a', 'x', '(', 'p', 'h', 'o', 'r', 'a', ')', ',', ' ', 'p', 'o', 's', ',', ' ', 'p', 'f', 'e', 'c', 'h', 'a', ',', ' ', 'm', 'a', 'x', '(', 'q', 't', 'd', '_', 'v', 'i', 'a', ')', ',', ' ', '(', 'S', 'E', 'L', 'E', 'C', 'T', ' ', 'r', 'a', 'z', 'a', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'l', 'i', '.', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 'o', 'r', 'c', '.', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ')', ' ', 'r', 'a', 'z', 'a', 'o', ',', ' ', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', ' ', '*', ' ', 'p', 'v', 'l', 'r', '_', 'f', 'a', 't', ')', ',', ' ', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', ' ', '*', ' ', 'p', 'p', 'r', 'e', '_', 'v', 'e', 'n', 'd', 'a', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'o', 'r', 'c', 'a', 'm', ' ', 'o', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, '*', 39, ' ', 'g', 'r', 'o', 'u', 'p', ' ', 'b', 'y', ' ', '1', ',', '2', ',', '4', ',', '7', ',', '9', ',', ' ', '1', '0', ' ', 'o', 'r', 'd', 'e', 'r', ' ', 'b', 'y', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', 0, 
	HB_P_JUMP, 124, 1,	/* 380 (abs: 02506) */
/* 02129 */ HB_P_LINEOFFSET, 69,	/* 79 */
	HB_P_LOCALNEARSETSTR, 34, 115, 1,	/* CCOMM 371*/
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'e', 'm', 'p', 'r', 'e', 's', 'a', ',', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ',', ' ', 'm', 'a', 'x', '(', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ')', ',', ' ', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', ' ', 'm', 'a', 'x', '(', 'p', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ')', ',', ' ', ' ', 'm', 'a', 'x', '(', 'p', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ')', ',', ' ', 'p', 't', 'p', '_', 'v', 'e', 'n', 'd', ',', ' ', 'm', 'a', 'x', '(', 'p', 'h', 'o', 'r', 'a', ')', ',', ' ', 'p', 'o', 's', ',', ' ', 'p', 'f', 'e', 'c', 'h', 'a', ',', ' ', 'm', 'a', 'x', '(', 'q', 't', 'd', '_', 'v', 'i', 'a', ')', ',', ' ', '(', 'S', 'E', 'L', 'E', 'C', 'T', ' ', 'r', 'a', 'z', 'a', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'l', 'i', '.', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 'o', 'r', 'c', '.', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ')', ' ', 'r', 'a', 'z', 'a', 'o', ',', ' ', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', ' ', '*', ' ', 'p', 'v', 'l', 'r', '_', 'f', 'a', 't', ')', ',', ' ', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', ' ', '*', ' ', 'p', 'p', 'r', 'e', '_', 'v', 'e', 'n', 'd', 'a', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'o', 'r', 'c', 'a', 'm', ' ', 'o', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', '(', 'p', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, ' ', 39, ')', ' ', 'g', 'r', 'o', 'u', 'p', ' ', 'b', 'y', ' ', '1', ',', '2', ',', '4', ',', '7', ',', '9', ',', ' ', '1', '0', ' ', 'o', 'r', 'd', 'e', 'r', ' ', 'b', 'y', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', 0, 
/* 02506 */ HB_P_LINEOFFSET, 76,	/* 86 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 30,	/* CONS_ARQ */
/* 02513 */ HB_P_LINEOFFSET, 77,	/* 87 */
	HB_P_MESSAGE, 23, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 24,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 34,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 30, 0,	/* CONS_ARQ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02533 */ HB_P_LINEOFFSET, 78,	/* 88 */
	HB_P_MESSAGE, 23, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 24,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02557 */ HB_P_LINEOFFSET, 79,	/* 89 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* M_CODIGO */
/* 02564 */ HB_P_LINEOFFSET, 80,	/* 90 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 12,	/* M_POSICAO */
/* 02571 */ HB_P_LINEOFFSET, 81,	/* 91 */
	HB_P_LOCALNEARSETINT, 31, 0, 0,	/* I 0*/
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MTOT_PV */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 28,	/* MTOT_GER */
	HB_P_POPLOCALNEAR, 29,	/* MQUANTD_PED */
/* 02587 */ HB_P_LINEOFFSET, 82,	/* 92 */
	HB_P_LOCALNEARSETINT, 31, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_PUSHSYMNEAR, 25,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_ARQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 126, 1,	/* 382 (abs: 02985) */
/* 02606 */ HB_P_LINEOFFSET, 83,	/* 93 */
	HB_P_PUSHSYMNEAR, 26,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 02623 */ HB_P_LINEOFFSET, 92,	/* 102 */
	HB_P_LOCALNEARSETINT, 39, 0, 0,	/* MCONT_ITEM 0*/
/* 02629 */ HB_P_LINEOFFSET, 93,	/* 103 */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 22,	/* MCOD_EMP */
/* 02640 */ HB_P_LINEOFFSET, 94,	/* 104 */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 9,	/* MNUM_PEDIDO */
/* 02652 */ HB_P_LINEOFFSET, 95,	/* 105 */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 16,	/* MDATA_PED */
/* 02664 */ HB_P_LINEOFFSET, 96,	/* 106 */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 21,	/* MCOD_CLI */
/* 02676 */ HB_P_LINEOFFSET, 97,	/* 107 */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 15,	/* MCOD_VEND */
/* 02688 */ HB_P_LINEOFFSET, 98,	/* 108 */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 20,	/* MCOD_OP */
/* 02700 */ HB_P_LINEOFFSET, 99,	/* 109 */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 19,	/* MTIPO_VENDA */
/* 02712 */ HB_P_LINEOFFSET, 100,	/* 110 */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 18,	/* MHORA */
/* 02724 */ HB_P_LINEOFFSET, 101,	/* 111 */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 27,	/* MNUM_OS */
/* 02736 */ HB_P_LINEOFFSET, 102,	/* 112 */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 32,	/* MFECHA */
/* 02748 */ HB_P_LINEOFFSET, 103,	/* 113 */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 38,	/* MQTD_VIA */
/* 02760 */ HB_P_LINEOFFSET, 106,	/* 116 */
	HB_P_LOCALNEARSETINT, 37, 0, 0,	/* MDESC_P 0*/
	HB_P_PUSHLOCALNEAR, 37,	/* MDESC_P */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 36,	/* MDESC_R */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MTOT_PV */
	HB_P_POPLOCALNEAR, 14,	/* MTOT_PED */
/* 02776 */ HB_P_LINEOFFSET, 108,	/* 118 */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 14,	/* MTOT_PED */
/* 02788 */ HB_P_LINEOFFSET, 140,	/* 150 */
	HB_P_PUSHLOCALNEAR, 28,	/* MTOT_GER */
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_PED */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 28,	/* MTOT_GER */
/* 02797 */ HB_P_LINEOFFSET, 141,	/* 151 */
	HB_P_LOCALNEARADDINT, 29, 1, 0,	/* MQUANTD_PED 1*/
/* 02803 */ HB_P_LINEOFFSET, 144,	/* 154 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_CODIGO */
	HB_P_PUSHLOCALNEAR, 9,	/* MNUM_PEDIDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 27,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_ARQ */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 22, 0,	/* 22 */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 15,	/* MCOD_VEND */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MDATA_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 18,	/* MHORA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_PED */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 19,	/* MTIPO_VENDA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 20,	/* MCOD_OP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 27,	/* MNUM_OS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 32,	/* MFECHA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 38,	/* MQTD_VIA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 27,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MCONT_ITEM */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02965 */ HB_P_LINEOFFSET, 147,	/* 157 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_POSICAO */
	HB_P_PUSHLOCALNEAR, 9,	/* MNUM_PEDIDO */
	HB_P_DOSHORT, 2,
/* 02976 */ HB_P_LINEOFFSET, 151,	/* 161 */
	HB_P_LOCALNEARADDINT, 31, 1, 0,	/* I 1*/
	HB_P_JUMP, 123, 254,	/* -389 (abs: 02593) */
/* 02985 */ HB_P_LINEOFFSET, 152,	/* 162 */
	HB_P_PUSHSYMNEAR, 25,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_CODIGO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 03052) */
/* 02998 */ HB_P_LINEOFFSET, 153,	/* 163 */
	HB_P_PUSHSYMNEAR, 30,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'N', 'e', 'n', 'h', 'u', 'm', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', 'P', 'e', 'd', 'e', 'n', 't', 'e', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 03033 */ HB_P_LINEOFFSET, 154,	/* 164 */
	HB_P_PUSHSYMNEAR, 31,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03040 */ HB_P_LINEOFFSET, 155,	/* 165 */
	HB_P_PUSHLOCALNEAR, 3,	/* TIPO_ALI */
	HB_P_POPMEMVAR, 32, 0,	/* ALI */
/* 03047 */ HB_P_LINEOFFSET, 156,	/* 166 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 03052 */ HB_P_LINEOFFSET, 159,	/* 169 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* POINT 0*/
/* 03058 */ HB_P_LINEOFFSET, 160,	/* 170 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', 'e', 'm', ' ', 'A', 'b', 'e', 'r', 't', 'o', ':', 0, 
	HB_P_PUSHSYMNEAR, 29,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MQUANTD_PED */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* MTOT_GER */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03161 */ HB_P_LINEOFFSET, 161,	/* 171 */
	HB_P_PUSHSYMNEAR, 22,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', ' ', '-', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', 'p', '/', 'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 03204 */ HB_P_LINEOFFSET, 162,	/* 172 */
	HB_P_PUSHSYMNEAR, 9,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 33,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 11,	/* M_CODIGO */
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 7,	/* POINT */
	HB_P_PUSHSYMNEAR, 9,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 03241 */ HB_P_LINEOFFSET, 164,	/* 174 */
	HB_P_PUSHSYMNEAR, 34,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 03272) */
/* 03253 */ HB_P_LINEOFFSET, 166,	/* 176 */
	HB_P_PUSHSYMNEAR, 31,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03260 */ HB_P_LINEOFFSET, 167,	/* 177 */
	HB_P_PUSHLOCALNEAR, 3,	/* TIPO_ALI */
	HB_P_POPMEMVAR, 32, 0,	/* ALI */
/* 03267 */ HB_P_LINEOFFSET, 168,	/* 178 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 03272 */ HB_P_LINEOFFSET, 170,	/* 180 */
	HB_P_PUSHSYMNEAR, 34,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 26, 255,	/* -230 (abs: 03052) */
/* 03285 */ HB_P_LINEOFFSET, 171,	/* 181 */
	HB_P_PUSHSYMNEAR, 9,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 03293 */ HB_P_LINEOFFSET, 172,	/* 182 */
	HB_P_PUSHSYMNEAR, 31,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03300 */ HB_P_LINEOFFSET, 173,	/* 183 */
	HB_P_PUSHLOCALNEAR, 3,	/* TIPO_ALI */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'r', 'c', 'a', 'm', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 03348) */
/* 03315 */ HB_P_LINEOFFSET, 174,	/* 184 */
	HB_P_PUSHSYMNEAR, 35,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_POSICAO */
	HB_P_PUSHLOCALNEAR, 7,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPMEMVAR, 36, 0,	/* MNUM_PED */
	HB_P_POPMEMVAR, 37, 0,	/* MNUM_ORC */
/* 03334 */ HB_P_LINEOFFSET, 175,	/* 185 */
	HB_P_PUSHLOCALNEAR, 3,	/* TIPO_ALI */
	HB_P_POPMEMVAR, 32, 0,	/* ALI */
/* 03341 */ HB_P_LINEOFFSET, 176,	/* 186 */
	HB_P_PUSHMEMVAR, 37, 0,	/* MNUM_ORC */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 03348 */ HB_P_LINEOFFSET, 178,	/* 188 */
	HB_P_PUSHSYMNEAR, 35,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_POSICAO */
	HB_P_PUSHLOCALNEAR, 7,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPMEMVAR, 38, 0,	/* MNUM_PEDP */
	HB_P_POPMEMVAR, 36, 0,	/* MNUM_PED */
/* 03367 */ HB_P_LINEOFFSET, 179,	/* 189 */
	HB_P_PUSHLOCALNEAR, 3,	/* TIPO_ALI */
	HB_P_POPMEMVAR, 32, 0,	/* ALI */
/* 03374 */ HB_P_LINEOFFSET, 180,	/* 190 */
	HB_P_PUSHMEMVAR, 36, 0,	/* MNUM_PED */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 03381 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

