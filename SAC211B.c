/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC211B.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC211B.PRG /q /oC:\hti\SISCOM\SAC211B.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.20 11:15:09 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC211B.PRG"

HB_FUNC( SAC211B );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( AUT_SEN );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC211B )
{ "SAC211B", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC211B )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "AUT_SEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( AUT_SEN )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC211B )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC211B
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC211B = hb_vm_SymbolInit_SAC211B;
   #pragma data_seg()
#endif

HB_FUNC( SAC211B )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_LOCALNEARSETSTR, 2, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', '2', '1', '1', 'B', 0, 
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'U', 'L', 'T', 'I', 'M', 'O', ' ', 'N', 'U', 'M', 'E', 'R', 'O', ' ', 'D', 'A', ' ', 'N', 'O', 'T', 'A', ' ', 'F', 'I', 'S', 'C', 'A', 'L', ' ', '(', 'A', 'L', 'T', 'E', 'R', 'A', 'C', 'A', 'O', ')', ' ', '[', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MTIPO_NF */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	']', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* MMODULO */
/* 00073 */ HB_P_LINEOFFSET, 2,	/* 9 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHLOCALNEAR, 3,	/* MMODULO */
	HB_P_DOSHORT, 5,
/* 00090 */ HB_P_LINEOFFSET, 4,	/* 11 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* M_NUMERO */
/* 00097 */ HB_P_LINEOFFSET, 5,	/* 12 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTIPO_NF */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', 'F', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 72,	/* 72 (abs: 00179) */
/* 00109 */ HB_P_LINEOFFSET, 6,	/* 13 */
	HB_P_MESSAGE, 2, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 3,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'n', 'o', 't', 'a', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 39, '1', 39, 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 5, 0,	/* M_NUMERO */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
	HB_P_JUMPNEAR, 71,	/* 71 (abs: 00248) */
/* 00179 */ HB_P_LINEOFFSET, 8,	/* 15 */
	HB_P_MESSAGE, 2, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 3,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'n', 'o', 'n', 'f', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 39, '1', 39, 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 5, 0,	/* M_NUMERO */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00248 */ HB_P_LINEOFFSET, 10,	/* 17 */
	HB_P_MESSAGE, 2, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 3,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00272 */ HB_P_LINEOFFSET, 11,	/* 18 */
	HB_P_PUSHSYMNEAR, 4,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* M_NUMERO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00293) */
/* 00285 */ HB_P_LINEOFFSET, 12,	/* 19 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* MNUMERO 0*/
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 00308) */
/* 00293 */ HB_P_LINEOFFSET, 14,	/* 21 */
	HB_P_PUSHSYMNEAR, 5,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* M_NUMERO */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* MNUMERO */
/* 00308 */ HB_P_LINEOFFSET, 16,	/* 23 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'U', 'l', 't', 'i', 'm', 'o', ' ', 'N', 'o', '.', 'd', 'a', ' ', 'N', 'o', 't', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00343 */ HB_P_LINEOFFSET, 17,	/* 24 */
	HB_P_PUSHSYMNEAR, 8,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 9,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 12,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MNUMERO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00387) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00392) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'n', 'u', 'm', 'e', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 13, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00430 */ HB_P_LINEOFFSET, 18,	/* 25 */
	HB_P_PUSHSYMNEAR, 14,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 11, 0,	/* GETLIST */
/* 00452 */ HB_P_LINEOFFSET, 19,	/* 26 */
	HB_P_PUSHSYMNEAR, 15,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00467) */
	HB_P_JUMP, 50, 1,	/* 306 (abs: 00770) */
/* 00467 */ HB_P_LINEOFFSET, 22,	/* 29 */
	HB_P_PUSHSYMNEAR, 16,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MNUMERO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALNEAR, 5,	/* M_NUMERO */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 117, 254,	/* -395 (abs: 00090) */
/* 00488 */ HB_P_LINEOFFSET, 23,	/* 30 */
	HB_P_PUSHSYMNEAR, 17,	/* AUT_SEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'L', 'I', 'B', 'E', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'A', ' ', 'A', 'L', 'T', 'E', 'R', 'A', 'C', 'A', 'O', ' ', 'N', 'O', ' ', 'N', 'U', 'M', 'E', 'R', 'O', ' ', 'N', 'O', 'T', 'A', ' ', 'F', 'I', 'S', 'C', 'A', 'L', ':', 0, 
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'L', 'I', 'B', '_', 'N', '_', 'N', 'O', 'T', 'A', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00561) */
	HB_P_JUMP, 44, 254,	/* -468 (abs: 00090) */
/* 00561 */ HB_P_LINEOFFSET, 26,	/* 33 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTIPO_NF */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', 'F', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 89,	/* 89 (abs: 00660) */
/* 00573 */ HB_P_LINEOFFSET, 27,	/* 34 */
	HB_P_MESSAGE, 2, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 3,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'n', 'o', 't', 'a', ' ', 'S', 'E', 'T', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 18,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MNUMERO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', '=', ' ', '1', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMPNEAR, 88,	/* 88 (abs: 00746) */
/* 00660 */ HB_P_LINEOFFSET, 29,	/* 36 */
	HB_P_MESSAGE, 2, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 3,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'n', 'o', 'n', 'f', 'c', ' ', 'S', 'E', 'T', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 18,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MNUMERO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', '=', ' ', '1', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00746 */ HB_P_LINEOFFSET, 31,	/* 38 */
	HB_P_MESSAGE, 2, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 3,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00770 */ HB_P_LINEOFFSET, 35,	/* 42 */
	HB_P_PUSHSYMNEAR, 19,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00777 */ HB_P_LINEOFFSET, 36,	/* 43 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00782 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

