/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <sacseri1.prg>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\sacseri1.prg /q /oC:\hti\SISCOM\sacseri1.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:26 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "sacseri1.prg"

HB_FUNC( SACSERI1 );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_COD );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( TIME );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACSERI1 )
{ "SACSERI1", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACSERI1 )}, NULL },
{ "MCOD_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MOBS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_COD", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_COD )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACSERI1 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACSERI1
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACSERI1 = hb_vm_SymbolInit_SACSERI1;
   #pragma data_seg()
#endif

HB_FUNC( SACSERI1 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 6, 0,	/* 6 */
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', 'S', 'E', 'R', 'I', '1', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* CONS_SERI */
/* 00024 */ HB_P_LINEOFFSET, 1,	/* 7 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 3,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MCOD_MERC */
	HB_P_PUSHSYMNEAR, 2,	/* MOBS */
	HB_P_DOSHORT, 2,
	HB_P_POPVARIABLE, 1, 0,	/* MCOD_MERC */
/* 00039 */ HB_P_LINEOFFSET, 3,	/* 9 */
	HB_P_PUSHSYMNEAR, 4,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'C', 'O', 'N', 'T', 'R', 'O', 'L', 'E', ' ', 'D', 'E', ' ', 'S', 'E', 'R', 'I', 'A', 'L', ' ', '(', 'I', 'N', 'C', 'L', 'U', 'S', 'A', 'O', ')', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHVARIABLE, 5, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00104) */
/* 00099 */ HB_P_LINEOFFSET, 4,	/* 10 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00104 */ HB_P_LINEOFFSET, 7,	/* 13 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'C', 'O', 'N', 'T', 'R', 'O', 'L', 'E', ' ', 'D', 'E', ' ', 'S', 'E', 'R', 'I', 'A', 'L', ' ', '(', 'I', 'N', 'C', 'L', 'U', 'S', 'A', 'O', ')', 0, 
	HB_P_DOSHORT, 5,
/* 00151 */ HB_P_LINEOFFSET, 9,	/* 15 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 1, 0,	/* MCOD_MERC */
/* 00157 */ HB_P_LINEOFFSET, 10,	/* 16 */
	HB_P_PUSHSYMNEAR, 7,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DOSHORT, 4,
/* 00170 */ HB_P_LINEOFFSET, 11,	/* 17 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00206 */ HB_P_LINEOFFSET, 12,	/* 18 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'S', 'e', 'r', 'i', 'a', 'l', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00242 */ HB_P_LINEOFFSET, 13,	/* 19 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'O', 'b', 's', 'e', 'r', 'v', 'a', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00279 */ HB_P_LINEOFFSET, 14,	/* 20 */
	HB_P_PUSHSYMNEAR, 10,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 13,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 14,	/* 14 */
	HB_P_PUSHSYMNEAR, 14,	/* VER_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 15, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 12, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00350 */ HB_P_LINEOFFSET, 15,	/* 21 */
	HB_P_PUSHSYMNEAR, 16,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 12, 0,	/* GETLIST */
/* 00372 */ HB_P_LINEOFFSET, 16,	/* 22 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00396) */
/* 00384 */ HB_P_LINEOFFSET, 17,	/* 23 */
	HB_P_PUSHSYMNEAR, 18,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00391 */ HB_P_LINEOFFSET, 18,	/* 24 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00396 */ HB_P_LINEOFFSET, 21,	/* 27 */
	HB_P_PUSHSYMNEAR, 19,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* MSERIAL */
/* 00407 */ HB_P_LINEOFFSET, 22,	/* 28 */
	HB_P_PUSHSYMNEAR, 19,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 2, 0,	/* MOBS */
/* 00419 */ HB_P_LINEOFFSET, 23,	/* 29 */
	HB_P_PUSHSYMNEAR, 10,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 13,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* MSERIAL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00457) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00462) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 's', 'e', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 15, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 12, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00492 */ HB_P_LINEOFFSET, 24,	/* 30 */
	HB_P_PUSHSYMNEAR, 10,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 13,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'o', 'b', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 15, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 12, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00543 */ HB_P_LINEOFFSET, 25,	/* 31 */
	HB_P_PUSHSYMNEAR, 16,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 12, 0,	/* GETLIST */
/* 00565 */ HB_P_LINEOFFSET, 26,	/* 32 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00580) */
	HB_P_JUMP, 86, 254,	/* -426 (abs: 00151) */
/* 00580 */ HB_P_LINEOFFSET, 29,	/* 35 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* CONS_SERI */
/* 00587 */ HB_P_LINEOFFSET, 30,	/* 36 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 's', 'e', 'r', 'i', 'a', 'l', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 21, 0,	/* CCOMM */
/* 00645 */ HB_P_LINEOFFSET, 31,	/* 37 */
	HB_P_PUSHVARIABLE, 21, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 's', 'e', 'r', 'i', 'a', 'l', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MSERIAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 21, 0,	/* CCOMM */
/* 00679 */ HB_P_LINEOFFSET, 32,	/* 38 */
	HB_P_PUSHVARIABLE, 21, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 'b', 'a', 'i', 'x', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 21, 0,	/* CCOMM */
/* 00713 */ HB_P_LINEOFFSET, 33,	/* 39 */
	HB_P_MESSAGE, 22, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 23,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 21, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 4, 0,	/* CONS_SERI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00734 */ HB_P_LINEOFFSET, 34,	/* 40 */
	HB_P_MESSAGE, 22, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 23,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00758 */ HB_P_LINEOFFSET, 35,	/* 41 */
	HB_P_PUSHSYMNEAR, 24,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_SERI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 00834) */
/* 00771 */ HB_P_LINEOFFSET, 36,	/* 42 */
	HB_P_PUSHSYMNEAR, 25,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'E', 'S', 'T', 'A', ' ', 'S', 'E', 'R', 'I', 'A', 'L', ' ', 'J', 'A', ' ', 'E', 'S', 'T', 'A', 'R', ' ', 'C', 'A', 'D', 'A', 'S', 'T', 'R', 'O', ' ', 'C', 'O', 'M', ' ', 'E', 'S', 'T', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 77, 254,	/* -435 (abs: 00396) */
/* 00834 */ HB_P_LINEOFFSET, 39,	/* 45 */
	HB_P_PUSHSYMNEAR, 26,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'a', ' ', 'S', 'e', 'r', 'i', 'a', 'l', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OPCAO */
/* 00880 */ HB_P_LINEOFFSET, 40,	/* 46 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 00901) */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00906) */
	HB_P_JUMP, 5, 254,	/* -507 (abs: 00396) */
/* 00906 */ HB_P_LINEOFFSET, 57,	/* 63 */
	HB_P_MESSAGE, 22, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 23,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 101,	/* 101 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 's', 'e', 'r', 'i', 'a', 'l', ' ', '(', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', 's', 'e', 'r', 'i', 'a', 'l', ',', 'd', 'a', 't', 'a', '_', 'i', 'n', 'c', 'l', ',', 'h', 'o', 'r', 'a', '_', 'i', 'n', 'c', 'l', ',', 'o', 'p', 'e', 'r', '_', 'i', 'n', 'c', 'l', ',', 'o', 'b', 's', '_', 'i', 'n', 'c', 'l', ' ', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ' ', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MSERIAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MOBS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01124 */ HB_P_LINEOFFSET, 58,	/* 64 */
	HB_P_MESSAGE, 22, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 23,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 16, 253,	/* -752 (abs: 00396) */
	HB_P_ENDPROC
/* 01152 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

