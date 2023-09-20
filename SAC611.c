/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC611.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC611.PRG /q /oC:\hti\SISCOM\SAC611.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.20 11:14:55 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC611.PRG"

HB_FUNC( SAC611 );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( PADC );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( FECHA_TELA );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( __GETA );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( TRACELOG );
HB_FUNC_EXTERN( VALTOPRG );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC611 )
{ "SAC611", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC611 )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "PADC", {HB_FS_PUBLIC}, {HB_FUNCNAME( PADC )}, NULL },
{ "M_CFG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "ACHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACHOICE )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "FECHA_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( FECHA_TELA )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "__GETA", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GETA )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "TRACELOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRACELOG )}, NULL },
{ "VALTOPRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTOPRG )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC611 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC611
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC611 = hb_vm_SymbolInit_SAC611;
   #pragma data_seg()
#endif

HB_FUNC( SAC611 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 10, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 9, 0,	/* 9 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '6', '1', '1', 0, 
	HB_P_LOCALNEARSETSTR, 2, 35, 0,	/* MTITULO 35*/
	'C', 'O', 'N', 'F', 'I', 'G', 'U', 'R', 'A', 'C', 'A', 'O', ' ', 'I', 'N', 'D', 'I', 'V', 'I', 'D', 'U', 'A', 'L', ' ', 'D', 'O', ' ', 'S', 'I', 'S', 'T', 'E', 'M', 'A', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* POINT 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 6,	/* M_INDIV */
	HB_P_LOCALNEARSETSTR, 7, 1, 0,	/* MOP 1*/
	0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 9,	/* MENU_SET */
	HB_P_LOCALNEARSETSTR, 10, 1, 0,	/* MTERMINAL 1*/
	0, 
/* 00085 */ HB_P_LINEOFFSET, 2,	/* 11 */
	HB_P_PUSHSYMNEAR, 1,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHVARIABLE, 2, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00119) */
/* 00114 */ HB_P_LINEOFFSET, 3,	/* 12 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00119 */ HB_P_LINEOFFSET, 5,	/* 14 */
	HB_P_PUSHSYMNEAR, 3,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 00133 */ HB_P_LINEOFFSET, 7,	/* 16 */
	HB_P_PUSHSYMNEAR, 5,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00142 */ HB_P_LINEOFFSET, 8,	/* 17 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 6,	/* M_INDIV */
/* 00149 */ HB_P_LINEOFFSET, 9,	/* 18 */
	HB_P_MESSAGE, 6, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 7,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 6, 0,	/* M_INDIV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00192 */ HB_P_LINEOFFSET, 10,	/* 19 */
	HB_P_MESSAGE, 6, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 7,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00216 */ HB_P_LINEOFFSET, 11,	/* 20 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'T', ' ', 'E', ' ', 'R', ' ', 'M', ' ', 'I', ' ', 'N', ' ', 'A', ' ', 'I', ' ', 'S', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 00253 */ HB_P_LINEOFFSET, 12,	/* 21 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 11,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'[', ' ', 0, 
	HB_P_PUSHMEMVAR, 12, 0,	/* M_CFG */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ']', 0, 
	HB_P_PLUS,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 00291 */ HB_P_LINEOFFSET, 13,	/* 22 */
	HB_P_PUSHSYMNEAR, 13,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00306 */ HB_P_LINEOFFSET, 14,	/* 23 */
	HB_P_PUSHSYMNEAR, 14,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'o', ' ', 't', 'e', 'r', 'm', 'i', 'n', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 00334 */ HB_P_LINEOFFSET, 15,	/* 24 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* PT_MENU 0*/
	HB_P_PUSHLOCALNEAR, 8,	/* PT_MENU */
	HB_P_POPVARIABLE, 15, 0,	/* I */
/* 00345 */ HB_P_LINEOFFSET, 16,	/* 25 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 9,	/* MENU_SET */
/* 00352 */ HB_P_LINEOFFSET, 17,	/* 26 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 15, 0,	/* I */
	HB_P_PUSHVARIABLE, 15, 0,	/* I */
	HB_P_PUSHSYMNEAR, 16,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 00404) */
/* 00371 */ HB_P_LINEOFFSET, 18,	/* 27 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MENU_SET */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_PUSHVARIABLE, 15, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00393 */ HB_P_LINEOFFSET, 19,	/* 28 */
	HB_P_PUSHVARIABLE, 15, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 15, 0,	/* I */
	HB_P_JUMPNEAR, 212,	/* -44 (abs: 00358) */
/* 00404 */ HB_P_LINEOFFSET, 20,	/* 29 */
	HB_P_PUSHSYMNEAR, 18,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 19,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_PUSHLOCALNEAR, 9,	/* MENU_SET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PT_MENU */
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPLOCALNEAR, 8,	/* PT_MENU */
	HB_P_PUSHSYMNEAR, 18,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00439 */ HB_P_LINEOFFSET, 22,	/* 31 */
	HB_P_PUSHSYMNEAR, 20,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 186, 0,	/* 186 (abs: 00635) */
/* 00452 */ HB_P_LINEOFFSET, 23,	/* 32 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00459 */ HB_P_LINEOFFSET, 24,	/* 33 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 6,	/* M_INDIV */
/* 00466 */ HB_P_LINEOFFSET, 25,	/* 34 */
	HB_P_MESSAGE, 6, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 7,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'i', 'n', 'd', 'i', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 't', 'e', 'r', 'm', 'i', 'n', 'a', 'l', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 23,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MENU_SET */
	HB_P_PUSHLOCALNEAR, 8,	/* PT_MENU */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 6, 0,	/* M_INDIV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00543 */ HB_P_LINEOFFSET, 26,	/* 35 */
	HB_P_MESSAGE, 6, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 7,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00567 */ HB_P_LINEOFFSET, 27,	/* 36 */
	HB_P_PUSHSYMNEAR, 16,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 00619) */
/* 00580 */ HB_P_LINEOFFSET, 28,	/* 37 */
	HB_P_PUSHSYMNEAR, 24,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'r', 'e', 'g', 'i', 's', 't', 'r', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00619 */ HB_P_LINEOFFSET, 30,	/* 39 */
	HB_P_PUSHSYMNEAR, 23,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MENU_SET */
	HB_P_PUSHLOCALNEAR, 8,	/* PT_MENU */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MTERMINAL */
	HB_P_JUMPNEAR, 24,	/* 24 (abs: 00657) */
/* 00635 */ HB_P_LINEOFFSET, 31,	/* 40 */
	HB_P_PUSHSYMNEAR, 20,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00657) */
/* 00647 */ HB_P_LINEOFFSET, 32,	/* 41 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 88, 75,	/* 19288 (abs: 19942) */
/* 00657 */ HB_P_LINEOFFSET, 35,	/* 44 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', '-', ' ', '{', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'}', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 00690 */ HB_P_LINEOFFSET, 37,	/* 46 */
	HB_P_PUSHSYMNEAR, 18,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00698 */ HB_P_LINEOFFSET, 38,	/* 47 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* DEMO_SET */
/* 00705 */ HB_P_LINEOFFSET, 39,	/* 48 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 00763 */ HB_P_LINEOFFSET, 40,	/* 49 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	' ', ' ', ' ', ' ', 'C', ' ', 'O', ' ', 'N', ' ', 'F', ' ', 'I', ' ', 'G', ' ', 'U', ' ', 'R', ' ', 'A', ' ', 'C', ' ', 'A', ' ', 'O', ' ', ' ', ' ', 'I', ' ', 'N', ' ', 'D', ' ', 'I', ' ', 'V', ' ', 'I', ' ', 'D', ' ', 'U', ' ', 'A', ' ', 'L', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 00828 */ HB_P_LINEOFFSET, 41,	/* 50 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 00886 */ HB_P_LINEOFFSET, 42,	/* 51 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '3', ' ', '-', ' ', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'G', 'E', 'R', 'A', 'L', ' ', 'D', 'O', ' ', 'T', 'E', 'R', 'M', 'I', 'N', 'A', 'L', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00967 */ HB_P_LINEOFFSET, 43,	/* 52 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '4', ' ', '-', ' ', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', 'A', 'R', 'A', ' ', 'I', 'M', 'P', 'O', 'R', 'T', 'A', 'R', ' ', 'E', ' ', 'E', 'X', 'P', 'O', 'R', 'T', 'A', 'R', ' ', 'A', 'R', 'Q', '.', ' ', 'P', '/', 'A', 'P', 'P', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01048 */ HB_P_LINEOFFSET, 44,	/* 53 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '5', ' ', '-', ' ', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', 'A', 'R', 'A', ' ', 'L', 'O', 'C', 'A', 'L', ' ', '(', 'E', 'X', '.', 'D', 'O', 'S', 'P', 'R', 'I', 'N', 'T', 'E', 'R', ',', 'C', 'a', 'p', 't', 'c', 'h', 'a', ')', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01129 */ HB_P_LINEOFFSET, 45,	/* 54 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '6', ' ', '-', ' ', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', 'A', 'R', 'A', ' ', 'C', 'F', 'G', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01210 */ HB_P_LINEOFFSET, 46,	/* 55 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '8', ' ', '-', ' ', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'F', 'O', 'T', 'O', 'S', ' ', 'D', 'O', 'S', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01291 */ HB_P_LINEOFFSET, 47,	/* 56 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '9', ' ', '-', ' ', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'F', 'O', 'T', 'O', 'S', ' ', 'D', 'O', 'S', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01372 */ HB_P_LINEOFFSET, 48,	/* 57 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '3', '0', ' ', '-', ' ', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'F', 'O', 'T', 'O', 'S', ' ', 'D', 'O', 'S', ' ', 'A', 'N', 'I', 'M', 'A', 'I', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01453 */ HB_P_LINEOFFSET, 49,	/* 58 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '3', '1', ' ', '-', ' ', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'F', 'O', 'T', 'O', 'S', ' ', 'D', 'O', 'S', ' ', 'U', 'S', 'U', 'A', 'R', 'I', 'O', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01534 */ HB_P_LINEOFFSET, 50,	/* 59 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '3', '2', ' ', '-', ' ', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'F', 'O', 'T', 'O', 'S', ' ', 'D', 'O', 'S', ' ', 'R', 'A', 'C', 'A', 'S', ' ', 'D', 'O', 'S', ' ', 'A', 'N', 'I', 'M', 'A', 'I', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01615 */ HB_P_LINEOFFSET, 51,	/* 60 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '6', ' ', '-', ' ', 'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', ' ', 'D', 'E', ' ', 'L', 'I', 'N', 'H', 'A', 'S', ' ', 'P', 'A', 'R', 'A', ' ', 'A', 'V', 'A', 'N', 'C', 'A', 'R', ' ', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01707 */ HB_P_LINEOFFSET, 52,	/* 61 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '5', '2', ' ', '-', ' ', 'G', 'E', 'R', 'E', 'N', 'C', 'I', 'A', 'R', ' ', 'O', 'S', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', 'D', 'O', ' ', 'A', 'P', 'P', ' ', '(', 'A', 'p', 'l', 'i', 'c', 'a', 't', 'i', 'v', 'o', ')', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01788 */ HB_P_LINEOFFSET, 53,	/* 62 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '4', '4', ' ', '-', ' ', 'C', 'O', 'R', ' ', 'D', 'O', ' ', 'S', 'I', 'S', 'T', 'E', 'M', 'A', ' ', '1', ' ', '-', ' ', 'N', 'O', 'R', 'M', 'A', 'L', ' ', 'O', 'U', ' ', '2', ' ', '-', ' ', 'E', 'S', 'C', 'U', 'R', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01869 */ HB_P_LINEOFFSET, 54,	/* 63 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 01927 */ HB_P_LINEOFFSET, 55,	/* 64 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	' ', ' ', ' ', ' ', 'C', ' ', 'O', ' ', 'N', ' ', 'F', ' ', 'I', ' ', 'G', ' ', 'U', ' ', 'R', ' ', 'A', ' ', 'C', ' ', 'A', ' ', 'O', ' ', ' ', ' ', 'P', ' ', 'E', ' ', 'D', ' ', 'I', ' ', 'D', ' ', 'O', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 01984 */ HB_P_LINEOFFSET, 56,	/* 65 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 02042 */ HB_P_LINEOFFSET, 57,	/* 66 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '7', ' ', '-', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'T', 'E', 'R', 'M', 'I', 'C', 'A', ' ', '-', '>', '(', '4', '2', '0', '0', ')', ' ', '-', ' ', 'L', 'X', '3', '0', '0', ' ', '-', '>', '(', 'L', 'X', ')', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02123 */ HB_P_LINEOFFSET, 58,	/* 67 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '8', ' ', '-', ' ', 'N', 'O', 'M', 'E', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02204 */ HB_P_LINEOFFSET, 59,	/* 68 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '9', ' ', '-', ' ', 'T', 'I', 'P', 'O', ' ', 'D', 'O', ' ', 'F', 'O', 'R', 'M', 'U', 'L', 'A', 'R', 'I', 'O', ' ', 'D', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02285 */ HB_P_LINEOFFSET, 60,	/* 69 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '0', ' ', '-', ' ', 'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', 'F', 'A', 'U', 'L', 'T', ' ', 'P', 'A', 'R', 'A', ' ', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02366 */ HB_P_LINEOFFSET, 61,	/* 70 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '1', ' ', '-', ' ', 'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', ' ', 'D', 'E', ' ', 'C', 'O', 'P', 'I', 'A', 'S', ' ', 'P', 'A', 'R', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02458 */ HB_P_LINEOFFSET, 62,	/* 71 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '6', ' ', '-', ' ', 'T', 'E', 'R', 'M', 'I', 'N', 'A', 'L', ' ', 'U', 'T', 'I', 'L', 'I', 'Z', 'A', 'R', ' ', 'A', 'U', 'T', 'O', 'C', 'A', 'I', 'X', 'A', ' ', '[', 'S', '/', 'N', '/', 'T', '/', 'P', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02539 */ HB_P_LINEOFFSET, 63,	/* 72 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 02597 */ HB_P_LINEOFFSET, 64,	/* 73 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	' ', ' ', ' ', ' ', 'C', ' ', 'O', ' ', 'N', ' ', 'F', ' ', 'I', ' ', 'G', ' ', 'U', ' ', 'R', ' ', 'A', ' ', 'C', ' ', 'A', ' ', 'O', ' ', ' ', ' ', 'O', ' ', 'R', ' ', 'C', ' ', 'A', ' ', 'M', ' ', 'E', ' ', 'N', ' ', 'T', ' ', 'O', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 02660 */ HB_P_LINEOFFSET, 65,	/* 74 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 02718 */ HB_P_LINEOFFSET, 66,	/* 75 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '2', ' ', '-', ' ', '1', 'a', '.', 'N', 'O', 'M', 'E', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'O', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', 'S', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02799 */ HB_P_LINEOFFSET, 67,	/* 76 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '3', ' ', '-', ' ', '2', 'a', '.', 'N', 'O', 'M', 'E', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'O', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', 'S', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02880 */ HB_P_LINEOFFSET, 68,	/* 77 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '4', ' ', '-', ' ', 'T', 'I', 'P', 'O', ' ', 'D', 'O', ' ', 'F', 'O', 'R', 'M', 'U', 'L', 'A', 'R', 'I', 'O', ' ', 'D', 'O', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02961 */ HB_P_LINEOFFSET, 69,	/* 78 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '5', ' ', '-', ' ', 'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', ' ', 'D', 'E', ' ', 'C', 'O', 'P', 'I', 'A', 'S', ' ', 'P', 'A', 'R', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 03053 */ HB_P_LINEOFFSET, 70,	/* 79 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03111 */ HB_P_LINEOFFSET, 71,	/* 80 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	' ', ' ', ' ', ' ', 'C', ' ', 'O', ' ', 'N', ' ', 'F', ' ', 'I', ' ', 'G', ' ', 'U', ' ', 'R', ' ', 'A', ' ', 'C', ' ', 'A', ' ', 'O', ' ', ' ', ' ', 'D', ' ', 'U', ' ', 'P', ' ', 'L', ' ', 'I', ' ', 'C', ' ', 'A', ' ', 'T', ' ', 'A', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03171 */ HB_P_LINEOFFSET, 72,	/* 81 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03229 */ HB_P_LINEOFFSET, 73,	/* 82 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '0', ' ', '-', ' ', 'N', 'O', 'M', 'E', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', '(', 'C', 'A', 'R', 'N', 'E', ' ', 'E', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 03310 */ HB_P_LINEOFFSET, 74,	/* 83 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '1', ' ', '-', ' ', 'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', 'F', 'A', 'U', 'L', 'T', ' ', '(', 'C', 'A', 'R', 'N', 'E', ' ', 'E', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', ')', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 03391 */ HB_P_LINEOFFSET, 75,	/* 84 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '2', ' ', '-', ' ', 'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', ' ', 'D', 'E', ' ', 'C', 'O', 'P', 'I', 'A', 'S', ' ', 'P', 'A', 'R', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 03483 */ HB_P_LINEOFFSET, 76,	/* 85 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '4', ' ', '-', ' ', 'N', 'O', 'M', 'E', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'B', 'O', 'L', 'E', 'T', 'O', 'S', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 03564 */ HB_P_LINEOFFSET, 77,	/* 86 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '5', ' ', '-', ' ', 'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', 'F', 'A', 'U', 'L', 'T', ' ', 'P', 'A', 'R', 'A', ' ', 'O', ' ', 'B', 'O', 'L', 'E', 'T', 'O', 'S', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 03645 */ HB_P_LINEOFFSET, 78,	/* 87 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '5', '1', ' ', '-', ' ', 'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'O', ' ', 'C', 'A', 'R', 'N', 'E', ' ', '[', 'F', ']', 'O', 'R', 'M', 'U', 'L', 'A', 'R', 'I', 'O', ' ', '[', 'B', ']', 'O', 'B', 'I', 'N', 'A', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 03726 */ HB_P_LINEOFFSET, 79,	/* 88 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03784 */ HB_P_LINEOFFSET, 80,	/* 89 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	' ', ' ', ' ', ' ', 'C', ' ', 'O', ' ', 'N', ' ', 'F', ' ', 'I', ' ', 'G', ' ', 'U', ' ', 'R', ' ', 'A', ' ', 'C', ' ', 'A', ' ', 'O', ' ', ' ', ' ', 'R', ' ', 'E', ' ', 'L', ' ', 'A', ' ', 'T', ' ', 'O', ' ', 'R', ' ', 'I', ' ', 'O', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03847 */ HB_P_LINEOFFSET, 81,	/* 90 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03905 */ HB_P_LINEOFFSET, 82,	/* 91 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '7', ' ', '-', ' ', 'N', 'O', 'M', 'E', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'O', 'S', ' ', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', 'S', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 03986 */ HB_P_LINEOFFSET, 83,	/* 92 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '8', ' ', '-', ' ', 'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', 'F', 'A', 'U', 'L', 'T', ' ', 'P', 'A', 'R', 'A', ' ', 'O', 'S', ' ', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', 'S', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04067 */ HB_P_LINEOFFSET, 84,	/* 93 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '7', ' ', '-', ' ', 'T', 'I', 'P', 'O', ' ', 'D', 'O', ' ', 'F', 'O', 'R', 'M', 'U', 'L', 'A', 'R', 'I', 'O', ' ', 'D', 'O', ' ', 'O', 'R', 'D', 'E', 'M', ' ', 'D', 'E', ' ', 'S', 'E', 'R', 'V', 'I', 'C', 'O', 'S', ' ', '(', 'O', 'S', ')', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04148 */ HB_P_LINEOFFSET, 85,	/* 94 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '4', '8', ' ', '-', ' ', 'T', 'A', 'M', 'A', 'N', 'H', 'O', ' ', 'D', 'A', ' ', 'P', 'A', 'G', 'I', 'N', 'A', ' ', '[', 'A', '4', ']', ' ', '[', 'C', 'T', ']', 'C', 'A', 'R', 'T', 'A', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04229 */ HB_P_LINEOFFSET, 86,	/* 95 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '2', ' ', '-', ' ', 'N', 'O', 'M', 'E', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', ' ', 'C', 'O', 'D', 'I', 'G', 'O', ' ', 'B', 'A', 'R', 'R', 'A', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04310 */ HB_P_LINEOFFSET, 87,	/* 96 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 04368 */ HB_P_LINEOFFSET, 93,	/* 102 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 04426 */ HB_P_LINEOFFSET, 94,	/* 103 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', ' ', ' ', 'C', ' ', 'O', ' ', 'N', ' ', 'F', ' ', 'I', ' ', 'G', ' ', 'U', ' ', 'R', ' ', 'A', ' ', 'C', ' ', 'A', ' ', 'O', ' ', ' ', ' ', 'T', ' ', 'E', ' ', 'F', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 04477 */ HB_P_LINEOFFSET, 95,	/* 104 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 04535 */ HB_P_LINEOFFSET, 96,	/* 105 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '4', '1', ' ', '-', ' ', 'G', 'E', 'R', 'E', 'N', 'C', 'I', 'A', 'D', 'O', 'R', ' ', '(', 'P', 'A', 'Y', 'G', 'O', ',', 'V', 'S', 'P', 'A', 'G', 'U', 'E', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04616 */ HB_P_LINEOFFSET, 97,	/* 106 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '3', '5', ' ', '-', ' ', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'R', 'E', 'Q', 'U', 'I', 'S', 'I', 'C', 'A', 'O', ' ', 'D', 'O', ' ', 'T', 'E', 'F', ' ', '(', 'R', 'E', 'Q', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04697 */ HB_P_LINEOFFSET, 98,	/* 107 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '3', '6', ' ', '-', ' ', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'R', 'E', 'S', 'P', 'O', 'S', 'T', 'A', ' ', 'D', 'O', ' ', 'T', 'E', 'F', ' ', '(', 'R', 'E', 'S', 'P', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04778 */ HB_P_LINEOFFSET, 99,	/* 108 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '3', ' ', '-', ' ', 'N', 'O', 'M', 'E', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'P', 'A', 'R', 'A', ' ', 'C', 'O', 'M', 'P', 'R', 'O', 'V', 'A', 'N', 'T', 'E', ' ', 'T', 'E', 'F', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04859 */ HB_P_LINEOFFSET, 102,	/* 111 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 04917 */ HB_P_LINEOFFSET, 103,	/* 112 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	' ', ' ', ' ', ' ', 'C', ' ', 'O', ' ', 'N', ' ', 'F', ' ', 'I', ' ', 'G', ' ', 'U', ' ', 'R', ' ', 'A', ' ', 'C', ' ', 'A', ' ', 'O', ' ', ' ', ' ', 'A', ' ', 'C', ' ', 'B', ' ', 'R', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 04970 */ HB_P_LINEOFFSET, 104,	/* 113 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 05028 */ HB_P_LINEOFFSET, 105,	/* 114 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '3', '7', ' ', '-', ' ', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'O', ' ', 'A', 'C', 'B', 'R', 'M', 'O', 'N', 'I', 'T', 'O', 'R', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05109 */ HB_P_LINEOFFSET, 106,	/* 115 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '4', '3', ' ', '-', ' ', 'I', 'P', ' ', 'D', 'O', ' ', 'A', 'C', 'B', 'R', 'N', 'F', 'E', ' ', '(', 'E', 'x', '.', ':', ' ', '1', '9', '2', '.', '1', '6', '8', '.', '0', '.', '4', ':', '3', '4', '3', '6', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05190 */ HB_P_LINEOFFSET, 107,	/* 116 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '2', ' ', '-', ' ', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'O', ' ', 'P', 'A', 'S', 'T', 'A', ' ', 34, 'T', 'E', 'M', 'P', 34, ' ', 'A', 'C', 'B', 'R', 'M', 'O', 'N', 'I', 'T', 'O', 'R', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05271 */ HB_P_LINEOFFSET, 108,	/* 117 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '3', '8', ' ', '-', ' ', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'O', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'O', ' ', 'R', 'E', 'M', 'E', 'S', 'S', 'A', ' ', 'D', 'O', ' ', 'B', 'O', 'L', 'E', 'T', 'O', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05352 */ HB_P_LINEOFFSET, 109,	/* 118 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '4', '2', ' ', '-', ' ', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'O', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'O', ' ', 'R', 'E', 'T', 'O', 'R', 'N', 'O', ' ', 'D', 'O', ' ', 'B', 'O', 'L', 'E', 'T', 'O', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05433 */ HB_P_LINEOFFSET, 110,	/* 119 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '3', '9', ' ', '-', ' ', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'O', ' ', 'P', 'D', 'F', ' ', 'D', 'O', 'S', ' ', 'B', 'O', 'L', 'E', 'T', 'O', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05514 */ HB_P_LINEOFFSET, 111,	/* 120 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '4', '0', ' ', '-', ' ', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', ' ', 'N', 'F', 'E', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05595 */ HB_P_LINEOFFSET, 112,	/* 121 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '4', '9', ' ', '-', ' ', 'U', 't', 'i', 'l', 'i', 'z', 'a', ' ', 'a', 'b', 'e', 'r', 't', 'u', 'r', 'a', ' ', 'd', 'e', ' ', 'G', 'A', 'V', 'E', 'T', 'A', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05676 */ HB_P_LINEOFFSET, 113,	/* 122 */
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '5', '0', ' ', '-', ' ', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'O', ' ', 'X', 'M', 'L', ' ', 'd', 'e', ' ', 'E', 'n', 't', 'r', 'a', 'd', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05757 */ HB_P_LINEOFFSET, 114,	/* 123 */
	HB_P_PUSHSYMNEAR, 14,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', ' ', ' ', '-', ' ', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', ' ', 'p', '/', 'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 05804 */ HB_P_LINEOFFSET, 115,	/* 124 */
	HB_P_PUSHSYMNEAR, 18,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 05813 */ HB_P_LINEOFFSET, 116,	/* 125 */
	HB_P_PUSHSYMNEAR, 18,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 19,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_PUSHBYTE, 119,	/* 119 */
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* POINT */
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPLOCALNEAR, 5,	/* POINT */
	HB_P_PUSHSYMNEAR, 18,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 05847 */ HB_P_LINEOFFSET, 117,	/* 126 */
	HB_P_PUSHSYMNEAR, 18,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 05855 */ HB_P_LINEOFFSET, 119,	/* 128 */
	HB_P_PUSHSYMNEAR, 20,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 19, 48,	/* 12307 (abs: 18172) */
/* 05868 */ HB_P_LINEOFFSET, 120,	/* 129 */
	HB_P_PUSHSYMNEAR, 26,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DEMO_SET */
	HB_P_PUSHLOCALNEAR, 5,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 7,	/* MOP */
/* 05885 */ HB_P_LINEOFFSET, 121,	/* 130 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 225, 0,	/* 225 (abs: 06121) */
/* 05899 */ HB_P_LINEOFFSET, 122,	/* 131 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'O', ' ', 'P', 'A', 'S', 'T', 'A', ' ', 34, 'T', 'E', 'M', 'P', 34, ' ', 'A', 'C', 'B', 'R', 'M', 'O', 'N', 'I', 'T', 'O', 'R', 0, 
	HB_P_DOSHORT, 5,
/* 05952 */ HB_P_LINEOFFSET, 123,	/* 132 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'O', ' ', 'P', 'A', 'S', 'T', 'A', ' ', 34, 'T', 'E', 'M', 'P', 34, ' ', 'A', 'C', 'B', 'R', 'M', 'O', 'N', 'I', 'T', 'O', 'R', ':', 0, 
	HB_P_DOSHORT, 1,
/* 06005 */ HB_P_LINEOFFSET, 124,	/* 133 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '4', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06089 */ HB_P_LINEOFFSET, 125,	/* 134 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 06111 */ HB_P_LINEOFFSET, 126,	/* 135 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 204, 234,	/* -5428 (abs: 00690) */
/* 06121 */ HB_P_LINEOFFSET, 128,	/* 137 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 205, 0,	/* 205 (abs: 06337) */
/* 06135 */ HB_P_LINEOFFSET, 129,	/* 138 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'G', 'E', 'R', 'A', 'L', ' ', 'D', 'O', ' ', 'T', 'E', 'R', 'M', 'I', 'N', 'A', 'L', 0, 
	HB_P_DOSHORT, 5,
/* 06178 */ HB_P_LINEOFFSET, 130,	/* 139 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'G', 'E', 'R', 'A', 'L', ' ', 'D', 'O', ' ', 'T', 'E', 'R', 'M', 'I', 'N', 'A', 'L', ':', 0, 
	HB_P_DOSHORT, 1,
/* 06221 */ HB_P_LINEOFFSET, 131,	/* 140 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '4', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06305 */ HB_P_LINEOFFSET, 132,	/* 141 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 06327 */ HB_P_LINEOFFSET, 133,	/* 142 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 244, 233,	/* -5644 (abs: 00690) */
/* 06337 */ HB_P_LINEOFFSET, 135,	/* 144 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 247, 0,	/* 247 (abs: 06595) */
/* 06351 */ HB_P_LINEOFFSET, 136,	/* 145 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', 'A', 'R', 'A', ' ', 'I', 'M', 'P', 'O', 'R', 'T', 'A', 'R', ' ', 'E', ' ', 'E', 'X', 'P', 'O', 'R', 'T', 'A', 'R', ' ', 'A', 'R', 'Q', '.', ' ', 'P', '/', 'A', 'P', 'P', '.', '.', '.', 0, 
	HB_P_DOSHORT, 5,
/* 06415 */ HB_P_LINEOFFSET, 137,	/* 146 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', 'A', 'R', 'A', ' ', 'I', 'M', 'P', 'O', 'R', 'T', 'A', 'R', ' ', 'E', ' ', 'E', 'X', 'P', 'O', 'R', 'T', 'A', 'R', ' ', 'A', 'R', 'Q', '.', ' ', 'P', '/', 'A', 'P', 'P', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 06479 */ HB_P_LINEOFFSET, 138,	/* 147 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '4', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06563 */ HB_P_LINEOFFSET, 139,	/* 148 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 06585 */ HB_P_LINEOFFSET, 140,	/* 149 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 242, 232,	/* -5902 (abs: 00690) */
/* 06595 */ HB_P_LINEOFFSET, 142,	/* 151 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 201, 0,	/* 201 (abs: 06807) */
/* 06609 */ HB_P_LINEOFFSET, 143,	/* 152 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', 'A', 'R', 'A', ' ', 'D', 'O', 'S', 'P', 'R', 'I', 'N', 'T', 'E', 'R', 0, 
	HB_P_DOSHORT, 5,
/* 06650 */ HB_P_LINEOFFSET, 144,	/* 153 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', 'A', 'R', 'A', ' ', 'D', 'O', 'S', 'P', 'R', 'I', 'N', 'T', 'E', 'R', ':', 0, 
	HB_P_DOSHORT, 1,
/* 06691 */ HB_P_LINEOFFSET, 145,	/* 154 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '4', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06775 */ HB_P_LINEOFFSET, 146,	/* 155 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 06797 */ HB_P_LINEOFFSET, 147,	/* 156 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 30, 232,	/* -6114 (abs: 00690) */
/* 06807 */ HB_P_LINEOFFSET, 149,	/* 158 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 187, 0,	/* 187 (abs: 07005) */
/* 06821 */ HB_P_LINEOFFSET, 150,	/* 159 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', 'A', 'R', 'A', ' ', 'C', 'F', 'G', 0, 
	HB_P_DOSHORT, 5,
/* 06855 */ HB_P_LINEOFFSET, 151,	/* 160 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', 'A', 'R', 'A', ' ', 'C', 'F', 'G', ':', 0, 
	HB_P_DOSHORT, 1,
/* 06889 */ HB_P_LINEOFFSET, 152,	/* 161 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '4', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06973 */ HB_P_LINEOFFSET, 153,	/* 162 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 06995 */ HB_P_LINEOFFSET, 154,	/* 163 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 88, 231,	/* -6312 (abs: 00690) */
/* 07005 */ HB_P_LINEOFFSET, 156,	/* 165 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 220, 0,	/* 220 (abs: 07236) */
/* 07019 */ HB_P_LINEOFFSET, 157,	/* 166 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'0', '0', '7', ' ', '-', ' ', 'M', 'O', 'D', 'E', 'L', 'O', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'T', 'E', 'R', 'M', 'I', 'C', 'A', 0, 
	HB_P_DOSHORT, 5,
/* 07071 */ HB_P_LINEOFFSET, 158,	/* 167 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'0', '0', '7', ' ', '-', ' ', 'M', 'O', 'D', 'E', 'L', 'O', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'T', 'E', 'R', 'M', 'I', 'C', 'A', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07123 */ HB_P_LINEOFFSET, 159,	/* 168 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07204 */ HB_P_LINEOFFSET, 160,	/* 169 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 07226 */ HB_P_LINEOFFSET, 161,	/* 170 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 113, 230,	/* -6543 (abs: 00690) */
/* 07236 */ HB_P_LINEOFFSET, 163,	/* 172 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 1, 1,	/* 257 (abs: 07504) */
/* 07250 */ HB_P_LINEOFFSET, 164,	/* 173 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'N', 'O', 'M', 'E', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 07311 */ HB_P_LINEOFFSET, 165,	/* 174 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 64,	/* 64 */
	'N', 'O', 'M', 'E', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', ' ', '(', 34, 'P', 'A', 'D', 'R', 'A', 'O', 34, ' ', 'p', 'a', 'r', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'o', 'r', 'a', ' ', 'P', 'A', 'D', 'R', 'A', 'O', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07391 */ HB_P_LINEOFFSET, 166,	/* 175 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07472 */ HB_P_LINEOFFSET, 167,	/* 176 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 07494 */ HB_P_LINEOFFSET, 168,	/* 177 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 101, 229,	/* -6811 (abs: 00690) */
/* 07504 */ HB_P_LINEOFFSET, 170,	/* 179 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 26, 1,	/* 282 (abs: 07797) */
/* 07518 */ HB_P_LINEOFFSET, 171,	/* 180 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'I', 'P', 'O', ' ', 'D', 'O', ' ', 'F', 'O', 'R', 'M', 'U', 'L', 'A', 'R', 'I', 'O', ' ', 'D', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_DOSHORT, 5,
/* 07564 */ HB_P_LINEOFFSET, 172,	/* 181 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'T', 'I', 'P', 'O', ' ', 'F', 'O', 'R', 'M', 'U', 'L', 'A', 'R', 'I', 'O', ' ', 'D', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', ' ', '[', 'F', ']', 'o', 'r', 'm', '.', ' ', '[', 'B', ']', 'o', 'b', 'i', 'n', 'a', ' ', '[', 'A', ']', 'p', 'p', ' ', 'H', 'T', 'I', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07634 */ HB_P_LINEOFFSET, 173,	/* 182 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 51, 0,	/* 51 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	6, 0,	/* M_INDIV */
	7, 0,	/* MOP */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'B', '2', ',', 'B', ' ', ',', 'F', ' ', ',', 'G', ' ', ',', 'P', ' ', ',', 'T', ' ', ',', 'L', ' ', ',', 'A', ' ', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07765 */ HB_P_LINEOFFSET, 174,	/* 183 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 07787 */ HB_P_LINEOFFSET, 175,	/* 184 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 64, 228,	/* -7104 (abs: 00690) */
/* 07797 */ HB_P_LINEOFFSET, 177,	/* 186 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 14, 1,	/* 270 (abs: 08078) */
/* 07811 */ HB_P_LINEOFFSET, 178,	/* 187 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', 'F', 'A', 'U', 'L', 'T', ' ', 'P', 'A', 'R', 'A', ' ', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_DOSHORT, 5,
/* 07869 */ HB_P_LINEOFFSET, 179,	/* 188 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', 'F', 'A', 'U', 'L', 'T', ' ', 'P', 'A', 'R', 'A', ' ', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07935 */ HB_P_LINEOFFSET, 180,	/* 189 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 31, 0,	/* 31 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	6, 0,	/* M_INDIV */
	7, 0,	/* MOP */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'M', ',', 'J', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08046 */ HB_P_LINEOFFSET, 181,	/* 190 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 08068 */ HB_P_LINEOFFSET, 182,	/* 191 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 39, 227,	/* -7385 (abs: 00690) */
/* 08078 */ HB_P_LINEOFFSET, 184,	/* 193 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 242, 0,	/* 242 (abs: 08331) */
/* 08092 */ HB_P_LINEOFFSET, 185,	/* 194 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', ' ', 'D', 'E', ' ', 'C', 'O', 'P', 'I', 'A', 'S', ' ', 'P', 'A', 'R', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_DOSHORT, 5,
/* 08152 */ HB_P_LINEOFFSET, 186,	/* 195 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', ' ', 'D', 'E', ' ', 'C', 'O', 'P', 'I', 'A', 'S', ' ', 'P', 'A', 'R', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08218 */ HB_P_LINEOFFSET, 187,	/* 196 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08299 */ HB_P_LINEOFFSET, 188,	/* 197 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 08321 */ HB_P_LINEOFFSET, 189,	/* 198 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 42, 226,	/* -7638 (abs: 00690) */
/* 08331 */ HB_P_LINEOFFSET, 191,	/* 200 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 18, 1,	/* 274 (abs: 08616) */
/* 08345 */ HB_P_LINEOFFSET, 192,	/* 201 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'N', 'O', 'M', 'E', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'O', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', 'S', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 08410 */ HB_P_LINEOFFSET, 193,	/* 202 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 81,	/* 81 */
	'N', 'O', 'M', 'E', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'O', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', 'S', ' ', '(', 34, 'P', 'A', 'D', 'R', 'A', 'O', 34, ' ', 'p', 'a', 'r', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'o', 'r', 'a', ' ', 'P', 'A', 'D', 'R', 'A', 'O', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08507 */ HB_P_LINEOFFSET, 194,	/* 203 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08584 */ HB_P_LINEOFFSET, 195,	/* 204 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 08606 */ HB_P_LINEOFFSET, 196,	/* 205 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 13, 225,	/* -7923 (abs: 00690) */
/* 08616 */ HB_P_LINEOFFSET, 198,	/* 207 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 1, 1,	/* 257 (abs: 08884) */
/* 08630 */ HB_P_LINEOFFSET, 199,	/* 208 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'2', 'a', '.', ' ', 'P', 'O', 'R', 'T', 'A', ' ', 'P', 'A', 'R', 'A', ' ', 'E', 'M', 'I', 'S', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', 'S', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 08686 */ HB_P_LINEOFFSET, 200,	/* 209 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 69,	/* 69 */
	'2', 'a', '.', ' ', 'N', 'O', 'M', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', 'S', ' ', '(', 34, 'P', 'A', 'D', 'R', 'A', 'O', 34, ' ', 'p', 'a', 'r', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'o', 'r', 'a', ' ', 'P', 'A', 'D', 'R', 'A', 'O', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08771 */ HB_P_LINEOFFSET, 201,	/* 210 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08852 */ HB_P_LINEOFFSET, 202,	/* 211 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 08874 */ HB_P_LINEOFFSET, 203,	/* 212 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 1, 224,	/* -8191 (abs: 00690) */
/* 08884 */ HB_P_LINEOFFSET, 205,	/* 214 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 22, 1,	/* 278 (abs: 09173) */
/* 08898 */ HB_P_LINEOFFSET, 206,	/* 215 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'T', 'I', 'P', 'O', ' ', 'D', 'O', ' ', 'F', 'O', 'R', 'M', 'U', 'L', 'A', 'R', 'I', 'O', ' ', 'D', 'O', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', 0, 
	HB_P_DOSHORT, 5,
/* 08947 */ HB_P_LINEOFFSET, 207,	/* 216 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'T', 'I', 'P', 'O', ' ', 'D', 'O', ' ', 'F', 'O', 'R', 'M', 'U', 'L', 'A', 'R', 'I', 'O', ' ', 'D', 'O', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 09013 */ HB_P_LINEOFFSET, 208,	/* 217 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 48, 0,	/* 48 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	6, 0,	/* M_INDIV */
	7, 0,	/* MOP */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'B', '2', ',', 'B', ' ', ',', 'F', ' ', ',', 'G', ' ', ',', 'P', ' ', ',', 'T', ' ', ',', 'L', ' ', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09141 */ HB_P_LINEOFFSET, 209,	/* 218 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 09163 */ HB_P_LINEOFFSET, 210,	/* 219 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 224, 222,	/* -8480 (abs: 00690) */
/* 09173 */ HB_P_LINEOFFSET, 212,	/* 221 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 245, 0,	/* 245 (abs: 09429) */
/* 09187 */ HB_P_LINEOFFSET, 213,	/* 222 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', ' ', 'D', 'E', ' ', 'C', 'O', 'P', 'I', 'A', 'S', ' ', 'P', 'A', 'R', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', 0, 
	HB_P_DOSHORT, 5,
/* 09250 */ HB_P_LINEOFFSET, 214,	/* 223 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', ' ', 'D', 'E', ' ', 'C', 'O', 'P', 'I', 'A', 'S', ' ', 'P', 'A', 'R', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 09316 */ HB_P_LINEOFFSET, 215,	/* 224 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09397 */ HB_P_LINEOFFSET, 216,	/* 225 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 09419 */ HB_P_LINEOFFSET, 217,	/* 226 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 224, 221,	/* -8736 (abs: 00690) */
/* 09429 */ HB_P_LINEOFFSET, 219,	/* 228 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 246, 0,	/* 246 (abs: 09686) */
/* 09443 */ HB_P_LINEOFFSET, 220,	/* 229 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', ' ', 'D', 'E', ' ', 'L', 'I', 'N', 'H', 'A', 'S', ' ', 'P', 'A', 'R', 'A', ' ', 'A', 'V', 'N', 'A', 'C', 'A', 'R', ' ', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', 0, 
	HB_P_DOSHORT, 5,
/* 09507 */ HB_P_LINEOFFSET, 221,	/* 230 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', ' ', 'D', 'E', ' ', 'L', 'I', 'N', 'H', 'A', 'S', ' ', 'P', 'A', 'R', 'A', ' ', 'A', 'V', 'N', 'A', 'C', 'A', 'R', ' ', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 09573 */ HB_P_LINEOFFSET, 222,	/* 231 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09654 */ HB_P_LINEOFFSET, 223,	/* 232 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 09676 */ HB_P_LINEOFFSET, 224,	/* 233 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 223, 220,	/* -8993 (abs: 00690) */
/* 09686 */ HB_P_LINEOFFSET, 226,	/* 235 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 24, 1,	/* 280 (abs: 09977) */
/* 09700 */ HB_P_LINEOFFSET, 227,	/* 236 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'N', 'O', 'M', 'E', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'O', 'S', ' ', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', 'S', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 09766 */ HB_P_LINEOFFSET, 228,	/* 237 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 82,	/* 82 */
	'N', 'O', 'M', 'E', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'O', 'S', ' ', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', 'S', ' ', '(', 34, 'P', 'A', 'D', 'R', 'A', 'O', 34, ' ', 'p', 'a', 'r', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'o', 'r', 'a', ' ', 'P', 'A', 'D', 'R', 'A', 'O', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 09864 */ HB_P_LINEOFFSET, 229,	/* 238 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09945 */ HB_P_LINEOFFSET, 230,	/* 239 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 09967 */ HB_P_LINEOFFSET, 231,	/* 240 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 188, 219,	/* -9284 (abs: 00690) */
/* 09977 */ HB_P_LINEOFFSET, 233,	/* 242 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 20, 1,	/* 276 (abs: 10264) */
/* 09991 */ HB_P_LINEOFFSET, 234,	/* 243 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', 'F', 'A', 'U', 'L', 'T', ' ', 'P', 'A', 'R', 'A', ' ', 'O', 'S', ' ', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 10054 */ HB_P_LINEOFFSET, 235,	/* 244 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', 'F', 'A', 'U', 'L', 'T', ' ', 'P', 'A', 'R', 'A', ' ', 'O', 'S', ' ', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', 'S', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 10121 */ HB_P_LINEOFFSET, 236,	/* 245 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 31, 0,	/* 31 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	6, 0,	/* M_INDIV */
	7, 0,	/* MOP */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'M', ',', 'J', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 10232 */ HB_P_LINEOFFSET, 237,	/* 246 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 10254 */ HB_P_LINEOFFSET, 238,	/* 247 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 157, 218,	/* -9571 (abs: 00690) */
/* 10264 */ HB_P_LINEOFFSET, 240,	/* 249 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 24, 1,	/* 280 (abs: 10555) */
/* 10278 */ HB_P_LINEOFFSET, 241,	/* 250 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'N', 'O', 'M', 'E', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'A', 'S', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 10344 */ HB_P_LINEOFFSET, 242,	/* 251 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 82,	/* 82 */
	'N', 'O', 'M', 'E', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'A', 'S', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', ' ', '(', 34, 'P', 'A', 'D', 'R', 'A', 'O', 34, ' ', 'p', 'a', 'r', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'o', 'r', 'a', ' ', 'P', 'A', 'D', 'R', 'A', 'O', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 10442 */ HB_P_LINEOFFSET, 243,	/* 252 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 10523 */ HB_P_LINEOFFSET, 244,	/* 253 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 10545 */ HB_P_LINEOFFSET, 245,	/* 254 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 122, 217,	/* -9862 (abs: 00690) */
/* 10555 */ HB_P_LINEOFFSET, 247,	/* 256 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 18, 1,	/* 274 (abs: 10840) */
/* 10569 */ HB_P_LINEOFFSET, 248,	/* 257 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', 'F', 'A', 'U', 'L', 'T', ' ', 'P', 'A', 'R', 'A', ' ', 'O', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 10631 */ HB_P_LINEOFFSET, 249,	/* 258 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', 'F', 'A', 'U', 'L', 'T', ' ', 'P', 'A', 'R', 'A', ' ', 'O', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 10697 */ HB_P_LINEOFFSET, 250,	/* 259 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 31, 0,	/* 31 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	6, 0,	/* M_INDIV */
	7, 0,	/* MOP */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'M', ',', 'J', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 10808 */ HB_P_LINEOFFSET, 251,	/* 260 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 10830 */ HB_P_LINEOFFSET, 252,	/* 261 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 93, 216,	/* -10147 (abs: 00690) */
/* 10840 */ HB_P_LINEOFFSET, 254,	/* 263 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 250, 0,	/* 250 (abs: 11101) */
/* 10854 */ HB_P_LINEOFFSET, 255,	/* 264 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', ' ', 'D', 'E', ' ', 'C', 'O', 'P', 'I', 'A', 'S', ' ', 'P', 'A', 'R', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 10918 */ HB_P_LINE, 9, 1,	/* 265 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', ' ', 'D', 'E', ' ', 'C', 'O', 'P', 'I', 'A', 'S', ' ', 'P', 'A', 'R', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 10985 */ HB_P_LINE, 10, 1,	/* 266 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 11067 */ HB_P_LINE, 11, 1,	/* 267 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 11090 */ HB_P_LINE, 12, 1,	/* 268 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 88, 215,	/* -10408 (abs: 00690) */
/* 11101 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 15, 1,	/* 271 (abs: 11384) */
/* 11116 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'N', 'O', 'M', 'E', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'P', 'A', 'R', 'A', ' ', 'C', 'O', 'M', 'P', 'R', 'O', 'V', 'A', 'N', 'T', 'E', ' ', 'T', 'E', 'F', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 11176 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	'N', 'O', 'M', 'E', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'P', 'A', 'R', 'A', ' ', 'C', 'O', 'M', 'P', 'R', 'O', 'V', 'A', 'N', 'T', 'E', ' ', 'T', 'E', 'F', ' ', '(', 34, 'P', 'A', 'D', 'R', 'A', 'O', 34, ' ', 'p', 'a', 'r', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'o', 'r', 'a', ' ', 'P', 'A', 'D', 'R', 'A', 'O', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 11268 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 11350 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 11373 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 61, 214,	/* -10691 (abs: 00690) */
/* 11384 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 21, 1,	/* 277 (abs: 11673) */
/* 11399 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'N', 'O', 'M', 'E', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'B', 'O', 'L', 'E', 'T', 'O', 'S', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 11462 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 78,	/* 78 */
	'N', 'O', 'M', 'E', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'B', 'O', 'L', 'E', 'T', 'O', 'S', ' ', '(', 34, 'P', 'A', 'D', 'R', 'A', 'O', 34, ' ', 'p', 'a', 'r', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'o', 'r', 'a', ' ', 'P', 'A', 'D', 'R', 'A', 'O', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 11557 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 11639 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 11662 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 28, 213,	/* -10980 (abs: 00690) */
/* 11673 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 20, 1,	/* 276 (abs: 11961) */
/* 11688 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', 'F', 'A', 'U', 'L', 'T', ' ', 'P', 'A', 'R', 'A', ' ', 'O', ' ', 'B', 'O', 'L', 'E', 'T', 'O', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 11748 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'D', 'E', 'F', 'A', 'U', 'L', 'T', ' ', 'P', 'A', 'R', 'A', ' ', 'O', ' ', 'B', 'O', 'L', 'E', 'T', 'O', 'S', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 11815 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 31, 0,	/* 31 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	6, 0,	/* M_INDIV */
	7, 0,	/* MOP */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'M', ',', 'J', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 11927 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 11950 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 252, 211,	/* -11268 (abs: 00690) */
/* 11961 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 16, 1,	/* 272 (abs: 12245) */
/* 11976 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'T', 'E', 'R', 'M', 'I', 'N', 'A', 'L', ' ', 'U', 'T', 'I', 'L', 'I', 'Z', 'A', 'R', ' ', 'A', 'U', 'T', 'O', 'C', 'A', 'I', 'X', 'A', 0, 
	HB_P_DOSHORT, 5,
/* 12022 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	'T', 'E', 'R', 'M', 'I', 'N', 'A', 'L', ' ', 'U', 'T', 'I', 'L', 'I', 'Z', 'A', 'R', ' ', 'A', 'U', 'T', 'O', 'C', 'A', 'I', 'X', 'A', ' ', '[', 'S', ']', 'i', 'm', ' ', '[', 'N', ']', 'a', 'o', ' ', '[', 'T', ']', 'o', 't', 'a', 'l', ' ', '[', 'P', ']', 'D', 'V', ' ', ':', 0, 
	HB_P_DOSHORT, 1,
/* 12095 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 35, 0,	/* 35 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	6, 0,	/* M_INDIV */
	7, 0,	/* MOP */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'S', ',', 'N', ',', 'T', ',', 'P', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 12211 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 12234 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 224, 210,	/* -11552 (abs: 00690) */
/* 12245 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 23, 1,	/* 279 (abs: 12536) */
/* 12260 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'T', 'I', 'P', 'O', ' ', 'D', 'O', ' ', 'F', 'O', 'R', 'M', 'U', 'L', 'A', 'R', 'I', 'O', ' ', 'D', 'O', ' ', 'O', 'R', 'D', 'E', 'M', ' ', 'D', 'E', ' ', 'S', 'E', 'R', 'V', 'I', 'C', 'O', 'S', ' ', '(', 'O', 'S', ')', 0, 
	HB_P_DOSHORT, 5,
/* 12323 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'T', 'I', 'P', 'O', ' ', 'D', 'O', ' ', 'F', 'O', 'R', 'M', 'U', 'L', 'A', 'R', 'I', 'O', ' ', 'D', 'O', ' ', 'O', 'R', 'D', 'E', 'M', ' ', 'D', 'E', ' ', 'S', 'E', 'R', 'V', 'I', 'C', 'O', 'S', ' ', '(', 'O', 'S', ')', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 12390 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 31, 0,	/* 31 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	6, 0,	/* M_INDIV */
	7, 0,	/* MOP */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'F', ',', 'B', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 12502 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 12525 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 189, 209,	/* -11843 (abs: 00690) */
/* 12536 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 220, 0,	/* 220 (abs: 12768) */
/* 12551 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'F', 'O', 'T', 'O', 'S', ' ', 'D', 'O', 'S', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 12600 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'F', 'O', 'T', 'O', 'S', ' ', 'D', 'O', 'S', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 'S', ':', 0, 
	HB_P_DOSHORT, 1,
/* 12649 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '4', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 12734 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 12757 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 213, 208,	/* -12075 (abs: 00690) */
/* 12768 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 220, 0,	/* 220 (abs: 13000) */
/* 12783 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'F', 'O', 'T', 'O', 'S', ' ', 'D', 'O', 'S', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 12832 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'F', 'O', 'T', 'O', 'S', ' ', 'D', 'O', 'S', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ':', 0, 
	HB_P_DOSHORT, 1,
/* 12881 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '4', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 12966 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 12989 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 237, 207,	/* -12307 (abs: 00690) */
/* 13000 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 218, 0,	/* 218 (abs: 13230) */
/* 13015 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'F', 'O', 'T', 'O', 'S', ' ', 'D', 'O', 'S', ' ', 'A', 'N', 'I', 'M', 'A', 'I', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 13063 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'F', 'O', 'T', 'O', 'S', ' ', 'D', 'O', 'S', ' ', 'A', 'N', 'I', 'M', 'A', 'I', 'S', ':', 0, 
	HB_P_DOSHORT, 1,
/* 13111 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '4', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 13196 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 13219 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 7, 207,	/* -12537 (abs: 00690) */
/* 13230 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 220, 0,	/* 220 (abs: 13462) */
/* 13245 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'F', 'O', 'T', 'O', 'S', ' ', 'D', 'O', 'S', ' ', 'U', 'S', 'U', 'A', 'R', 'I', 'O', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 13294 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'F', 'O', 'T', 'O', 'S', ' ', 'D', 'O', 'S', ' ', 'U', 'S', 'U', 'A', 'R', 'I', 'O', 'S', ':', 0, 
	HB_P_DOSHORT, 1,
/* 13343 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '4', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 13428 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 13451 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 31, 206,	/* -12769 (abs: 00690) */
/* 13462 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 238, 0,	/* 238 (abs: 13712) */
/* 13477 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'F', 'O', 'T', 'O', 'S', ' ', 'D', 'O', 'S', ' ', 'R', 'A', 'C', 'A', 'S', ' ', 'D', 'O', 'S', ' ', 'A', 'N', 'I', 'M', 'A', 'I', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 13535 */ HB_P_LINE, 79, 1,	/* 335 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'F', 'O', 'T', 'O', 'S', ' ', 'D', 'O', 'S', ' ', 'R', 'A', 'C', 'A', 'S', ' ', 'D', 'O', 'S', ' ', 'A', 'N', 'I', 'M', 'A', 'I', 'S', ':', 0, 
	HB_P_DOSHORT, 1,
/* 13593 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '4', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 13678 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 13701 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 37, 205,	/* -13019 (abs: 00690) */
/* 13712 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 234, 0,	/* 234 (abs: 13958) */
/* 13727 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'R', 'E', 'Q', 'U', 'I', 'S', 'I', 'C', 'A', 'O', ' ', 'D', 'O', ' ', 'H', 'I', 'P', 'E', 'R', ' ', '(', 'R', 'E', 'Q', ')', 0, 
	HB_P_DOSHORT, 5,
/* 13783 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'R', 'E', 'Q', 'U', 'I', 'S', 'I', 'C', 'A', 'O', ' ', 'D', 'O', ' ', 'H', 'I', 'P', 'E', 'R', ' ', '(', 'R', 'E', 'Q', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 13839 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '4', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 13924 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 13947 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 47, 204,	/* -13265 (abs: 00690) */
/* 13958 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 232, 0,	/* 232 (abs: 14202) */
/* 13973 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'R', 'E', 'S', 'P', 'O', 'S', 'T', 'A', ' ', 'D', 'O', ' ', 'H', 'I', 'P', 'E', 'R', ' ', '(', 'R', 'E', 'S', 'P', ')', 0, 
	HB_P_DOSHORT, 5,
/* 14028 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'R', 'E', 'S', 'P', 'O', 'S', 'T', 'A', ' ', 'D', 'O', ' ', 'H', 'I', 'P', 'E', 'R', ' ', '(', 'R', 'E', 'S', 'P', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 14083 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '4', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 14168 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 14191 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 59, 203,	/* -13509 (abs: 00690) */
/* 14202 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 230, 0,	/* 230 (abs: 14444) */
/* 14217 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'R', 'E', 'Q', 'U', 'I', 'S', 'I', 'C', 'A', 'O', ' ', 'D', 'O', ' ', 'T', 'E', 'F', ' ', '(', 'R', 'E', 'Q', ')', 0, 
	HB_P_DOSHORT, 5,
/* 14271 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'R', 'E', 'Q', 'U', 'I', 'S', 'I', 'C', 'A', 'O', ' ', 'D', 'O', ' ', 'T', 'E', 'F', ' ', '(', 'R', 'E', 'Q', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 14325 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '4', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 14410 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 14433 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 73, 202,	/* -13751 (abs: 00690) */
/* 14444 */ HB_P_LINE, 105, 1,	/* 361 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 228, 0,	/* 228 (abs: 14684) */
/* 14459 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'R', 'E', 'S', 'P', 'O', 'S', 'T', 'A', ' ', 'D', 'O', ' ', 'T', 'E', 'F', ' ', '(', 'R', 'E', 'S', 'P', ')', 0, 
	HB_P_DOSHORT, 5,
/* 14512 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', 'S', ' ', 'R', 'E', 'S', 'P', 'O', 'S', 'T', 'A', ' ', 'D', 'O', ' ', 'T', 'E', 'F', ' ', '(', 'R', 'E', 'S', 'P', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 14565 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '4', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 14650 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 14673 */ HB_P_LINE, 110, 1,	/* 366 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 89, 201,	/* -13991 (abs: 00690) */
/* 14684 */ HB_P_LINE, 112, 1,	/* 368 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 204, 0,	/* 204 (abs: 14900) */
/* 14699 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'O', ' ', 'A', 'C', 'B', 'R', 'M', 'O', 'N', 'I', 'T', 'O', 'R', 0, 
	HB_P_DOSHORT, 5,
/* 14740 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'O', ' ', 'A', 'C', 'B', 'R', 'M', 'O', 'N', 'I', 'T', 'O', 'R', ':', 0, 
	HB_P_DOSHORT, 1,
/* 14781 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '4', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 14866 */ HB_P_LINE, 116, 1,	/* 372 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 14889 */ HB_P_LINE, 117, 1,	/* 373 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 129, 200,	/* -14207 (abs: 00690) */
/* 14900 */ HB_P_LINE, 119, 1,	/* 375 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 234, 0,	/* 234 (abs: 15146) */
/* 14915 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'O', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'O', ' ', 'R', 'E', 'M', 'E', 'S', 'S', 'A', ' ', 'D', 'O', ' ', 'B', 'O', 'L', 'E', 'T', 'O', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 14971 */ HB_P_LINE, 121, 1,	/* 377 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'O', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'O', ' ', 'R', 'E', 'M', 'E', 'S', 'S', 'A', ' ', 'D', 'O', ' ', 'B', 'O', 'L', 'E', 'T', 'O', 'S', ':', 0, 
	HB_P_DOSHORT, 1,
/* 15027 */ HB_P_LINE, 122, 1,	/* 378 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '4', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 15112 */ HB_P_LINE, 123, 1,	/* 379 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 15135 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 139, 199,	/* -14453 (abs: 00690) */
/* 15146 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 228, 0,	/* 228 (abs: 15386) */
/* 15161 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'O', ' ', 'P', 'D', 'F', ' ', 'D', 'O', 'S', ' ', 'B', 'O', 'L', 'E', 'T', 'O', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 15214 */ HB_P_LINE, 128, 1,	/* 384 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'O', ' ', 'P', 'D', 'F', ' ', 'D', 'O', 'S', ' ', 'B', 'O', 'L', 'E', 'T', 'O', 'S', ':', 0, 
	HB_P_DOSHORT, 1,
/* 15267 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '4', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 15352 */ HB_P_LINE, 130, 1,	/* 386 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 15375 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 155, 198,	/* -14693 (abs: 00690) */
/* 15386 */ HB_P_LINE, 133, 1,	/* 389 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 188, 0,	/* 188 (abs: 15586) */
/* 15401 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', ' ', 'N', 'F', 'E', 0, 
	HB_P_DOSHORT, 5,
/* 15434 */ HB_P_LINE, 135, 1,	/* 391 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', ' ', 'N', 'F', 'E', ':', 0, 
	HB_P_DOSHORT, 1,
/* 15467 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '4', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 15552 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 15575 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 211, 197,	/* -14893 (abs: 00690) */
/* 15586 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 42, 1,	/* 298 (abs: 15896) */
/* 15601 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'G', 'E', 'R', 'E', 'N', 'C', 'I', 'A', 'D', 'O', 'R', ' ', 'P', 'A', 'D', 'R', 'A', 'O', 0, 
	HB_P_DOSHORT, 5,
/* 15646 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'G', 'E', 'R', 'E', 'N', 'C', 'I', 'A', 'D', 'O', 'R', ' ', 'P', 'A', 'D', 'R', 'A', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 15713 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '4', '0', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 33,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 58,	/* 58 */
	HB_P_PUSHSYMNEAR, 34,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ':', ' ', 'P', 'A', 'Y', 'G', 'O', ' ', '-', ' ', 'P', 'A', 'Y', 'G', 'O', 'M', 'U', 'L', 'T', ' ', '-', ' ', 'P', 'A', 'D', 'R', 'A', 'O', ' ', '-', ' ', 'V', 'S', 'P', 'A', 'G', 'U', 'E', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 15862 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 15885 */ HB_P_LINE, 145, 1,	/* 401 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 157, 196,	/* -15203 (abs: 00690) */
/* 15896 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 227, 0,	/* 227 (abs: 16135) */
/* 15911 */ HB_P_LINE, 148, 1,	/* 404 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'O', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'O', ' ', 'R', 'E', 'T', 'O', 'R', 'N', 'O', ' ', 'D', 'O', ' ', 'B', 'O', 'L', 'E', 'T', 'O', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 15967 */ HB_P_LINE, 149, 1,	/* 405 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'O', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'O', ' ', 'R', 'E', 'T', 'O', 'R', 'N', 'O', ' ', 'D', 'O', ' ', 'B', 'O', 'L', 'E', 'T', 'O', 'S', ':', 0, 
	HB_P_DOSHORT, 1,
/* 16023 */ HB_P_LINE, 150, 1,	/* 406 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 16101 */ HB_P_LINE, 151, 1,	/* 407 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 16124 */ HB_P_LINE, 152, 1,	/* 408 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 174, 195,	/* -15442 (abs: 00690) */
/* 16135 */ HB_P_LINE, 154, 1,	/* 410 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 227, 0,	/* 227 (abs: 16374) */
/* 16150 */ HB_P_LINE, 155, 1,	/* 411 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'I', 'P', ' ', 'D', 'O', ' ', 'A', 'C', 'B', 'R', 'N', 'F', 'E', ' ', '(', 'E', 'x', '.', ':', ' ', '1', '9', '2', '.', '1', '6', '8', '.', '0', '.', '4', ':', '3', '4', '3', '6', ')', 0, 
	HB_P_DOSHORT, 5,
/* 16206 */ HB_P_LINE, 156, 1,	/* 412 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'I', 'P', ' ', 'D', 'O', ' ', 'A', 'C', 'B', 'R', 'N', 'F', 'E', ' ', '(', 'E', 'x', '.', ':', ' ', '1', '9', '2', '.', '1', '6', '8', '.', '0', '.', '4', ':', '3', '4', '3', '6', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 16262 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 16340 */ HB_P_LINE, 158, 1,	/* 414 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 16363 */ HB_P_LINE, 159, 1,	/* 415 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 191, 194,	/* -15681 (abs: 00690) */
/* 16374 */ HB_P_LINE, 161, 1,	/* 417 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 19, 1,	/* 275 (abs: 16661) */
/* 16389 */ HB_P_LINE, 162, 1,	/* 418 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'C', 'O', 'R', ' ', 'D', 'O', ' ', 'S', 'I', 'S', 'T', 'E', 'M', 'A', ' ', '1', ' ', '-', ' ', 'N', 'O', 'R', 'M', 'A', 'L', ' ', 'O', 'U', ' ', '2', ' ', '-', ' ', 'E', 'S', 'C', 'U', 'R', 'O', 0, 
	HB_P_DOSHORT, 5,
/* 16447 */ HB_P_LINE, 163, 1,	/* 419 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'C', 'O', 'R', ' ', 'D', 'O', ' ', 'S', 'I', 'S', 'T', 'E', 'M', 'A', ' ', '1', ' ', '-', ' ', 'N', 'O', 'R', 'M', 'A', 'L', ' ', 'O', 'U', ' ', '2', ' ', '-', ' ', 'E', 'S', 'C', 'U', 'R', 'O', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 16506 */ HB_P_LINE, 164, 1,	/* 420 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCK, 41, 0,	/* 41 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	6, 0,	/* M_INDIV */
	7, 0,	/* MOP */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'1', ' ', ' ', ' ', ' ', ' ', ',', '2', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 16627 */ HB_P_LINE, 165, 1,	/* 421 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 16650 */ HB_P_LINE, 166, 1,	/* 422 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 160, 193,	/* -15968 (abs: 00690) */
/* 16661 */ HB_P_LINE, 168, 1,	/* 424 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 220, 0,	/* 220 (abs: 16893) */
/* 16676 */ HB_P_LINE, 169, 1,	/* 425 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'M', 'A', 'R', 'C', 'A', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'F', 'I', 'S', 'C', 'A', 'L', 0, 
	HB_P_DOSHORT, 5,
/* 16721 */ HB_P_LINE, 170, 1,	/* 426 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'M', 'A', 'R', 'C', 'A', ' ', 'D', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'F', 'I', 'S', 'C', 'A', 'L', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 16777 */ HB_P_LINE, 171, 1,	/* 427 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 16859 */ HB_P_LINE, 172, 1,	/* 428 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 16882 */ HB_P_LINE, 173, 1,	/* 429 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 184, 192,	/* -16200 (abs: 00690) */
/* 16893 */ HB_P_LINE, 175, 1,	/* 431 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 8, 1,	/* 264 (abs: 17169) */
/* 16908 */ HB_P_LINE, 176, 1,	/* 432 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'T', 'A', 'M', 'A', 'N', 'H', 'O', ' ', 'D', 'A', ' ', 'P', 'A', 'G', 'I', 'N', 'A', ' ', '[', 'A', '4', ']', ' ', '[', 'C', 'T', ']', 'C', 'A', 'R', 'T', 'A', 0, 
	HB_P_DOSHORT, 5,
/* 16959 */ HB_P_LINE, 177, 1,	/* 433 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'T', 'A', 'M', 'A', 'N', 'H', 'O', ' ', 'D', 'A', ' ', 'P', 'A', 'G', 'I', 'N', 'A', ' ', '[', 'A', '4', ']', ' ', '[', 'C', 'T', ']', 'C', 'A', 'R', 'T', 'A', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 17021 */ HB_P_LINE, 178, 1,	/* 434 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 33, 0,	/* 33 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	6, 0,	/* M_INDIV */
	7, 0,	/* MOP */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', '4', ',', 'C', 'T', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 17135 */ HB_P_LINE, 179, 1,	/* 435 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 17158 */ HB_P_LINE, 180, 1,	/* 436 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 164, 191,	/* -16476 (abs: 00690) */
/* 17169 */ HB_P_LINE, 182, 1,	/* 438 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 1, 1,	/* 257 (abs: 17438) */
/* 17184 */ HB_P_LINE, 183, 1,	/* 439 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'U', 'T', 'I', 'L', 'I', 'Z', 'A', 'R', ' ', 'A', 'B', 'E', 'R', 'T', 'U', 'R', 'A', ' ', 'D', 'E', ' ', 'G', 'A', 'V', 'E', 'T', 'A', 0, 
	HB_P_DOSHORT, 5,
/* 17230 */ HB_P_LINE, 184, 1,	/* 440 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'U', 't', 'i', 'l', 'i', 'z', 'a', ' ', 'a', 'b', 'e', 'r', 't', 'u', 'r', 'a', ' ', 'd', 'e', ' ', 'A', 'G', 'V', 'E', 'T', 'A', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 17292 */ HB_P_LINE, 185, 1,	/* 441 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 31, 0,	/* 31 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	6, 0,	/* M_INDIV */
	7, 0,	/* MOP */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 17404 */ HB_P_LINE, 186, 1,	/* 442 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 17427 */ HB_P_LINE, 187, 1,	/* 443 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 151, 190,	/* -16745 (abs: 00690) */
/* 17438 */ HB_P_LINE, 189, 1,	/* 445 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '5', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 218, 0,	/* 218 (abs: 17668) */
/* 17453 */ HB_P_LINE, 190, 1,	/* 446 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'O', ' ', 'X', 'M', 'L', ' ', 'd', 'e', ' ', 'E', 'n', 't', 'r', 'a', 'd', 'a', 0, 
	HB_P_DOSHORT, 5,
/* 17497 */ HB_P_LINE, 191, 1,	/* 447 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'O', ' ', 'X', 'M', 'L', ' ', 'd', 'e', ' ', 'E', 'n', 't', 'r', 'a', 'd', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 17552 */ HB_P_LINE, 192, 1,	/* 448 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 17634 */ HB_P_LINE, 193, 1,	/* 449 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 17657 */ HB_P_LINE, 194, 1,	/* 450 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 177, 189,	/* -16975 (abs: 00690) */
/* 17668 */ HB_P_LINE, 196, 1,	/* 452 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '5', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 231, 0,	/* 231 (abs: 17911) */
/* 17683 */ HB_P_LINE, 197, 1,	/* 453 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'O', ' ', 'C', 'A', 'R', 'N', 'E', 0, 
	HB_P_DOSHORT, 5,
/* 17728 */ HB_P_LINE, 198, 1,	/* 454 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'O', ' ', 'C', 'A', 'R', 'N', 'E', ' ', '[', 'F', ']', 'O', 'R', 'M', 'U', 'L', 'A', 'R', 'I', 'O', ' ', '[', 'B', ']', 'O', 'B', 'I', 'N', 'A', ':', 0, 
	HB_P_DOSHORT, 1,
/* 17795 */ HB_P_LINE, 199, 1,	/* 455 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 17877 */ HB_P_LINE, 200, 1,	/* 456 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 17900 */ HB_P_LINE, 201, 1,	/* 457 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 190, 188,	/* -17218 (abs: 00690) */
/* 17911 */ HB_P_LINE, 203, 1,	/* 459 */
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '5', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 224, 7,	/* 2016 (abs: 19939) */
/* 17926 */ HB_P_LINE, 204, 1,	/* 460 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'0', '5', '2', ' ', '-', ' ', 'G', 'E', 'R', 'E', 'N', 'C', 'I', 'A', 'R', ' ', 'O', 'S', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', 'D', 'O', ' ', 'A', 'P', 'P', ' ', '(', 'A', 'p', 'l', 'i', 'c', 'a', 't', 'i', 'v', 'o', ')', 0, 
	HB_P_DOSHORT, 5,
/* 17991 */ HB_P_LINE, 205, 1,	/* 461 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'G', 'E', 'R', 'E', 'N', 'C', 'I', 'A', 'R', ' ', 'O', 'S', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', 'D', 'O', ' ', 'A', 'P', 'P', ' ', '(', 'A', 'p', 'l', 'i', 'c', 'a', 't', 'i', 'v', 'o', ')', ' ', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 18056 */ HB_P_LINE, 206, 1,	/* 462 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 28,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* M_INDIV */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'i', 'n', 'd', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 31, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 4, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 18138 */ HB_P_LINE, 207, 1,	/* 463 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 18161 */ HB_P_LINE, 208, 1,	/* 464 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 185, 187,	/* -17479 (abs: 00690) */
/* 18172 */ HB_P_LINE, 215, 1,	/* 471 */
	HB_P_PUSHSYMNEAR, 20,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 171, 187,	/* -17493 (abs: 00690) */
/* 18186 */ HB_P_LINE, 216, 1,	/* 472 */
	HB_P_PUSHSYMNEAR, 35,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', 's', ' ', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 'c', 'o', 'e', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 57, 6,	/* 1593 (abs: 19825) */
/* 18235 */ HB_P_LINE, 11, 2,	/* 523 */
	HB_P_MESSAGE, 6, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 7,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'i', 'n', 'd', 'i', 'v', ' ', 'S', 'E', 'T', ' ', 'm', 'd', '5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'a', 'm', '_', 'g', 'e', 'r', 'a', 'l', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'a', 'm', '_', 'p', 'o', 'c', 'k', 'e', 't', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'a', 'm', '_', 'd', 'o', 's', 'p', 'r', 't', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'a', 'm', '_', 'c', 'f', 'g', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'p', 'r', 't', '_', 'p', 'e', 'd', '1', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'p', 'r', 't', '_', 'p', 'e', 'd', '2', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'f', 'o', 'r', 'm', '_', 'p', 'e', 'd', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 't', 'p', '_', 'i', 'm', 'p', 'p', 'e', 'd', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'q', 't', 'd', '_', 'c', 'o', 'p', '_', 'p', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'p', 'r', 't', '_', 'o', 'r', 'c', '1', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'p', 'r', 't', '_', 'o', 'r', 'c', '2', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'f', 'o', 'r', 'm', '_', 'o', 'r', 'c', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'q', 't', 'd', '_', 'c', 'o', 'p', '_', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'q', 't', 'd', '_', 'l', 'i', 'n', '_', 'a', 'v', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'p', 'r', 't', '_', 'r', 'e', 'l', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 't', 'p', '_', 'i', 'm', 'p', 'r', 'e', 'l', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'p', 'r', 't', '_', 'd', 'u', 'p', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 't', 'p', '_', 'i', 'm', 'p', 'd', 'u', 'p', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'q', 't', 'd', '_', 'c', 'p', '_', 'd', 'u', 'p', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'p', 'r', 't', '_', 'n', 'f', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'p', 'r', 't', '_', 'b', 'o', 'l', 'e', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 't', 'p', '_', 'i', 'm', 'p', 'b', 'o', 'l', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'a', 'u', 't', 'o', 'c', 'a', 'i', 'x', 'a', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'f', 'o', 'r', 'm', '_', 'o', 's', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'a', 'm', '_', 'f', 't', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'a', 'm', '_', 'f', 't', '_', 'p', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'a', 'm', '_', 'f', 't', '_', 'a', 'n', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'a', 'm', '_', 'f', 't', '_', 'u', 's', 'u', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'a', 'm', '_', 'f', 't', '_', 'r', 'a', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'h', 'i', 'p', 'e', 'r', '_', 'r', 'e', 'q', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'h', 'i', 'p', 'e', 'r', '_', 'r', 'e', 's', 'p', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'd', 'i', 'a', 'l', '_', 'r', 'e', 'q', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'd', 'i', 'a', 'l', '_', 'r', 'e', 's', 'p', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'a', 'm', '_', 'a', 'c', 'b', 'r', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'a', 'm', '_', 'r', 'e', 'm', 'e', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'a', 'm', '_', 'b', 'o', 'l', 'e', 't', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'a', 'm', '_', 'n', 'f', 'e', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'i', 'p', '_', 'a', 'c', 'b', 'r', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'i', 'p', '_', 'a', 'c', 'b', 'r', 'n', 'f', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'o', 'd', '_', 'e', 'c', 'f', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'm', 'a', 'r', 'c', 'a', '_', 'i', 'm', 'p', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 't', 'a', 'm', '_', 'p', 'a', 'g', 'i', 'n', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'g', 'a', 'v', 'e', 't', 'a', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'a', 'm', '_', 'x', 'm', 'l', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 't', 'p', '_', 'c', 'a', 'r', 'n', 'e', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'g', 'e', 'r', '_', 'a', 'p', 'p', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 't', 'e', 'r', 'm', 'i', 'n', 'a', 'l', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MTERMINAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 19787 */ HB_P_LINE, 12, 2,	/* 524 */
	HB_P_MESSAGE, 6, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 7,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 19812 */ HB_P_LINE, 13, 2,	/* 525 */
	HB_P_PUSHSYMNEAR, 36,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 19825 */ HB_P_LINE, 16, 2,	/* 528 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 6,	/* M_INDIV */
/* 19833 */ HB_P_LINE, 17, 2,	/* 529 */
	HB_P_MESSAGE, 6, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 7,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'i', 'n', 'd', 'i', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 't', 'e', 'r', 'm', 'i', 'n', 'a', 'l', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MTERMINAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 6, 0,	/* M_INDIV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 19903 */ HB_P_LINE, 18, 2,	/* 530 */
	HB_P_MESSAGE, 6, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 7,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 19928 */ HB_P_LINE, 19, 2,	/* 531 */
	HB_P_PUSHSYMNEAR, 21,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 165, 178,	/* -19803 (abs: 00133) */
	HB_P_JUMP, 207, 180,	/* -19249 (abs: 00690) */
/* 19942 */ HB_P_LINE, 24, 2,	/* 536 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 19948 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

