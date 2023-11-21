/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <sacseri4.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\sacseri4.PRG /q /oC:\hti\SISCOM\sacseri4.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.11.21 09:47:38 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "sacseri4.PRG"

HB_FUNC( SACSERI4 );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( MENSAGEM );
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
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( TIME );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACSERI4 )
{ "SACSERI4", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACSERI4 )}, NULL },
{ "MCOD_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNUM_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
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
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACSERI4 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACSERI4
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACSERI4 = hb_vm_SymbolInit_SACSERI4;
   #pragma data_seg()
#endif

HB_FUNC( SACSERI4 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 9, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', 'S', 'E', 'R', 'I', '4', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* CONS_SERI */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* CONS_PED */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 6,	/* M_SERIAL */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* I 0*/
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* MSALDO 0*/
/* 00042 */ HB_P_LINEOFFSET, 2,	/* 9 */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 's', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MCOD_MERC */
	HB_P_PUSHSYMNEAR, 2,	/* MNUM_PED */
	HB_P_PUSHSYMNEAR, 3,	/* ALI */
	HB_P_DOSHORT, 3,
	HB_P_POPVARIABLE, 3, 0,	/* ALI */
	HB_P_POPVARIABLE, 2, 0,	/* MNUM_PED */
	HB_P_POPVARIABLE, 1, 0,	/* MCOD_MERC */
/* 00074 */ HB_P_LINEOFFSET, 4,	/* 11 */
	HB_P_PUSHSYMNEAR, 5,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'O', 'N', 'T', 'R', 'O', 'L', 'E', ' ', 'D', 'E', ' ', 'S', 'E', 'R', 'I', 'A', 'L', ' ', '(', 'B', 'A', 'I', 'X', 'A', ')', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHVARIABLE, 6, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00136) */
/* 00131 */ HB_P_LINEOFFSET, 5,	/* 12 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00136 */ HB_P_LINEOFFSET, 8,	/* 15 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'O', 'N', 'T', 'R', 'O', 'L', 'E', ' ', 'D', 'E', ' ', 'S', 'E', 'R', 'I', 'A', 'L', ' ', '(', 'B', 'A', 'I', 'X', 'A', ')', 0, 
	HB_P_DOSHORT, 5,
/* 00180 */ HB_P_LINEOFFSET, 10,	/* 17 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 1, 0,	/* MCOD_MERC */
/* 00186 */ HB_P_LINEOFFSET, 11,	/* 18 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 9,	/* MOBS */
/* 00197 */ HB_P_LINEOFFSET, 12,	/* 19 */
	HB_P_PUSHSYMNEAR, 9,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', 'd', 'o', ' ', 'p', 'e', 'd', 'i', 'd', 'o', ' ', '-', ' ', '<', 'F', '1', '>', ' ', 'p', 'a', 'r', 'a', ' ', 'c', 'o', 'n', 's', 'u', 'l', 't', 'a', 'r', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00268 */ HB_P_LINEOFFSET, 13,	/* 20 */
	HB_P_PUSHSYMNEAR, 10,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DOSHORT, 4,
/* 00281 */ HB_P_LINEOFFSET, 14,	/* 21 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'N', 'u', 'm', 'e', 'r', 'o', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00317 */ HB_P_LINEOFFSET, 15,	/* 22 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00353 */ HB_P_LINEOFFSET, 16,	/* 23 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'O', 'b', 's', 'e', 'r', 'v', 'a', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00390 */ HB_P_LINEOFFSET, 17,	/* 24 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'S', 'a', 'l', 'd', 'o', ' ', 'd', 'e', ' ', 'S', 'e', 'r', 'i', 'a', 'i', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00425 */ HB_P_LINEOFFSET, 18,	/* 25 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'S', 'e', 'r', 'i', 'a', 'l', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00462 */ HB_P_LINEOFFSET, 19,	/* 26 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'Q', 'u', 'a', 'n', 't', '.', ' ', 'S', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'd', 'a', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00499 */ HB_P_LINEOFFSET, 20,	/* 27 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'Q', 'u', 'a', 'n', 't', '.', ' ', 'D', 'i', 'g', 'i', 't', 'a', 'd', 'a', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00536 */ HB_P_LINEOFFSET, 21,	/* 28 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'R', 'E', 'S', 'T', 'A', 'N', 'T', 'E', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00573 */ HB_P_LINEOFFSET, 22,	/* 29 */
	HB_P_PUSHSYMNEAR, 13,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 16,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'n', 'u', 'm', '_', 'p', 'e', 'd', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 14,	/* 14 */
	HB_P_PUSHSYMNEAR, 17,	/* VER_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00644 */ HB_P_LINEOFFSET, 23,	/* 30 */
	HB_P_PUSHSYMNEAR, 19,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 15, 0,	/* GETLIST */
/* 00666 */ HB_P_LINEOFFSET, 24,	/* 31 */
	HB_P_PUSHSYMNEAR, 20,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00690) */
/* 00678 */ HB_P_LINEOFFSET, 25,	/* 32 */
	HB_P_PUSHSYMNEAR, 21,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00685 */ HB_P_LINEOFFSET, 26,	/* 33 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00690 */ HB_P_LINEOFFSET, 28,	/* 35 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* CONS_PED */
/* 00697 */ HB_P_LINEOFFSET, 29,	/* 36 */
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 23,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MNUM_PED */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* CCOMM */
/* 00782 */ HB_P_LINEOFFSET, 30,	/* 37 */
	HB_P_MESSAGE, 25, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 26,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 24, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 5, 0,	/* CONS_PED */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00803 */ HB_P_LINEOFFSET, 31,	/* 38 */
	HB_P_MESSAGE, 25, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 26,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00827 */ HB_P_LINEOFFSET, 32,	/* 39 */
	HB_P_PUSHSYMNEAR, 27,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 00878) */
/* 00840 */ HB_P_LINEOFFSET, 33,	/* 40 */
	HB_P_PUSHSYMNEAR, 28,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'P', 'E', 'D', 'I', 'D', 'O', ' ', 'N', 'A', 'O', ' ', 'E', 'N', 'C', 'O', 'N', 'T', 'R', 'A', 'D', 'O', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 73, 253,	/* -695 (abs: 00180) */
/* 00878 */ HB_P_LINEOFFSET, 36,	/* 43 */
	HB_P_PUSHSYMNEAR, 9,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 63,	/* 63 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', '-', ' ', '<', 'F', '1', '>', ' ', 'p', 'a', 'r', 'a', ' ', 'c', 'o', 'n', 's', 'u', 'l', 't', 'a', 'r', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00950 */ HB_P_LINEOFFSET, 37,	/* 44 */
	HB_P_PUSHSYMNEAR, 13,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 16,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 14,	/* 14 */
	HB_P_PUSHSYMNEAR, 17,	/* VER_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_ONE,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01021 */ HB_P_LINEOFFSET, 38,	/* 45 */
	HB_P_PUSHSYMNEAR, 19,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 15, 0,	/* GETLIST */
/* 01043 */ HB_P_LINEOFFSET, 39,	/* 46 */
	HB_P_PUSHSYMNEAR, 20,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01067) */
/* 01055 */ HB_P_LINEOFFSET, 40,	/* 47 */
	HB_P_PUSHSYMNEAR, 21,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01062 */ HB_P_LINEOFFSET, 41,	/* 48 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01067 */ HB_P_LINEOFFSET, 43,	/* 50 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* CONS_PED */
/* 01074 */ HB_P_LINEOFFSET, 44,	/* 51 */
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 23,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MNUM_PED */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* CCOMM */
/* 01159 */ HB_P_LINEOFFSET, 45,	/* 52 */
	HB_P_PUSHVARIABLE, 24, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* CCOMM */
/* 01197 */ HB_P_LINEOFFSET, 46,	/* 53 */
	HB_P_MESSAGE, 25, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 26,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 24, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 5, 0,	/* CONS_PED */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01218 */ HB_P_LINEOFFSET, 47,	/* 54 */
	HB_P_MESSAGE, 25, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 26,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01242 */ HB_P_LINEOFFSET, 48,	/* 55 */
	HB_P_PUSHSYMNEAR, 27,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 54,	/* 54 (abs: 01307) */
/* 01255 */ HB_P_LINEOFFSET, 49,	/* 56 */
	HB_P_PUSHSYMNEAR, 28,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'N', 'A', 'O', ' ', 'E', 'N', 'C', 'O', 'N', 'T', 'R', 'A', 'D', 'O', ' ', 'N', 'E', 'S', 'T', 'E', ' ', 'P', 'E', 'D', 'I', 'D', 'O', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 156, 251,	/* -1124 (abs: 00180) */
/* 01307 */ HB_P_LINEOFFSET, 52,	/* 59 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* CONS_SERI */
/* 01314 */ HB_P_LINEOFFSET, 53,	/* 60 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 's', 'e', 'r', 'i', 'a', 'l', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* CCOMM */
/* 01372 */ HB_P_LINEOFFSET, 54,	/* 61 */
	HB_P_PUSHVARIABLE, 24, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 'b', 'a', 'i', 'x', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* CCOMM */
/* 01406 */ HB_P_LINEOFFSET, 55,	/* 62 */
	HB_P_MESSAGE, 25, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 26,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 24, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 4, 0,	/* CONS_SERI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01427 */ HB_P_LINEOFFSET, 56,	/* 63 */
	HB_P_MESSAGE, 25, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 26,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01451 */ HB_P_LINEOFFSET, 57,	/* 64 */
	HB_P_PUSHSYMNEAR, 27,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_SERI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 62,	/* 62 (abs: 01524) */
/* 01464 */ HB_P_LINEOFFSET, 58,	/* 65 */
	HB_P_PUSHSYMNEAR, 28,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'N', 'A', 'O', ' ', 'E', 'X', 'I', 'S', 'T', 'E', ' ', 'N', 'E', 'N', 'H', 'U', 'M', 'A', ' ', 'S', 'E', 'R', 'I', 'A', 'L', ' ', 'P', 'A', 'R', 'A', ' ', 'E', 'S', 'T', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 195, 250,	/* -1341 (abs: 00180) */
/* 01524 */ HB_P_LINEOFFSET, 61,	/* 68 */
	HB_P_PUSHSYMNEAR, 27,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_SERI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* MSALDO */
/* 01535 */ HB_P_LINEOFFSET, 62,	/* 69 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* CONS_SERI */
/* 01542 */ HB_P_LINEOFFSET, 63,	/* 70 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 's', 'e', 'r', 'i', 'a', 'l', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* CCOMM */
/* 01600 */ HB_P_LINEOFFSET, 64,	/* 71 */
	HB_P_PUSHVARIABLE, 24, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'n', '_', 'p', 'e', 'd', 'i', 'd', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 23,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MNUM_PED */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* CCOMM */
/* 01644 */ HB_P_LINEOFFSET, 65,	/* 72 */
	HB_P_MESSAGE, 25, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 26,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 24, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 4, 0,	/* CONS_SERI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01665 */ HB_P_LINEOFFSET, 66,	/* 73 */
	HB_P_MESSAGE, 25, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 26,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01689 */ HB_P_LINEOFFSET, 67,	/* 74 */
	HB_P_PUSHSYMNEAR, 27,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_SERI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 60,	/* 60 (abs: 01760) */
/* 01702 */ HB_P_LINEOFFSET, 68,	/* 75 */
	HB_P_PUSHSYMNEAR, 28,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'J', 'A', ' ', 'F', 'O', 'I', ' ', 'P', 'R', 'O', 'C', 'E', 'S', 'S', 'A', 'D', 'O', ' ', 'A', 'S', ' ', 'S', 'E', 'R', 'I', 'A', 'L', ' ', 'D', 'E', 'S', 'T', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 215, 249,	/* -1577 (abs: 00180) */
/* 01760 */ HB_P_LINEOFFSET, 72,	/* 79 */
	HB_P_PUSHSYMNEAR, 29,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01769 */ HB_P_LINEOFFSET, 73,	/* 80 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01806 */ HB_P_LINEOFFSET, 74,	/* 81 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01848 */ HB_P_LINEOFFSET, 75,	/* 82 */
	HB_P_PUSHSYMNEAR, 29,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01856 */ HB_P_LINEOFFSET, 76,	/* 83 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 6,	/* M_SERIAL */
/* 01863 */ HB_P_LINEOFFSET, 78,	/* 85 */
	HB_P_PUSHSYMNEAR, 9,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'S', 'e', 'r', 'i', 'a', 'l', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'F', 'i', 'n', 'a', 'n', 'l', 'i', 'z', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 01908 */ HB_P_LINEOFFSET, 79,	/* 86 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* MSERIAL */
/* 01919 */ HB_P_LINEOFFSET, 80,	/* 87 */
	HB_P_PUSHSYMNEAR, 13,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 16,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* MSERIAL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01958) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01963) */
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
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01993 */ HB_P_LINEOFFSET, 81,	/* 88 */
	HB_P_PUSHSYMNEAR, 19,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 15, 0,	/* GETLIST */
/* 02015 */ HB_P_LINEOFFSET, 82,	/* 89 */
	HB_P_PUSHSYMNEAR, 20,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02030) */
	HB_P_JUMP, 28, 2,	/* 540 (abs: 02567) */
/* 02030 */ HB_P_LINEOFFSET, 85,	/* 92 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* CONS_SERI */
/* 02037 */ HB_P_LINEOFFSET, 86,	/* 93 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 's', 'e', 'r', 'i', 'a', 'l', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* CCOMM */
/* 02095 */ HB_P_LINEOFFSET, 87,	/* 94 */
	HB_P_PUSHVARIABLE, 24, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 's', 'e', 'r', 'i', 'a', 'l', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MSERIAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* CCOMM */
/* 02129 */ HB_P_LINEOFFSET, 88,	/* 95 */
	HB_P_PUSHVARIABLE, 24, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 'b', 'a', 'i', 'x', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* CCOMM */
/* 02163 */ HB_P_LINEOFFSET, 89,	/* 96 */
	HB_P_MESSAGE, 25, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 26,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 24, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 4, 0,	/* CONS_SERI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02184 */ HB_P_LINEOFFSET, 90,	/* 97 */
	HB_P_MESSAGE, 25, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 26,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02208 */ HB_P_LINEOFFSET, 91,	/* 98 */
	HB_P_PUSHSYMNEAR, 27,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_SERI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 70,	/* 70 (abs: 02289) */
/* 02221 */ HB_P_LINEOFFSET, 92,	/* 99 */
	HB_P_PUSHSYMNEAR, 28,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	'E', 'S', 'T', 'A', ' ', 'S', 'E', 'R', 'I', 'A', 'L', ' ', 'N', 'A', 'O', ' ', 'F', 'O', 'I', ' ', 'E', 'N', 'C', 'O', 'N', 'T', 'R', 'A', 'D', 'A', ' ', 'O', 'U', ' ', 'J', 'A', ' ', 'F', 'O', 'I', ' ', 'S', 'O', 'L', 'I', 'C', 'I', 'T', 'A', 'D', 'A', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 89, 254,	/* -423 (abs: 01863) */
/* 02289 */ HB_P_LINEOFFSET, 95,	/* 102 */
	HB_P_PUSHSYMNEAR, 31,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_SERIAL */
	HB_P_PUSHLOCALNEAR, 3,	/* MSERIAL */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 70,	/* 70 (abs: 02372) */
/* 02304 */ HB_P_LINEOFFSET, 96,	/* 103 */
	HB_P_PUSHSYMNEAR, 28,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	'E', 'S', 'T', 'A', ' ', 'S', 'E', 'R', 'I', 'A', 'L', ' ', 'N', 'A', 'O', ' ', 'F', 'O', 'I', ' ', 'E', 'N', 'C', 'O', 'N', 'T', 'R', 'A', 'D', 'A', ' ', 'O', 'U', ' ', 'J', 'A', ' ', 'F', 'O', 'I', ' ', 'S', 'O', 'L', 'I', 'C', 'I', 'T', 'A', 'D', 'A', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 6, 254,	/* -506 (abs: 01863) */
/* 02372 */ HB_P_LINEOFFSET, 99,	/* 106 */
	HB_P_PUSHSYMNEAR, 32,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'a', ' ', 'S', 'e', 'r', 'i', 'a', 'l', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OPCAO */
/* 02418 */ HB_P_LINEOFFSET, 100,	/* 107 */
	HB_P_PUSHSYMNEAR, 20,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 02439) */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02444) */
	HB_P_JUMP, 190, 253,	/* -578 (abs: 01863) */
/* 02444 */ HB_P_LINEOFFSET, 103,	/* 110 */
	HB_P_PUSHSYMNEAR, 14,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_SERIAL */
	HB_P_PUSHLOCALNEAR, 3,	/* MSERIAL */
	HB_P_DOSHORT, 2,
/* 02455 */ HB_P_LINEOFFSET, 104,	/* 111 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 27,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_SERIAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02497 */ HB_P_LINEOFFSET, 105,	/* 112 */
	HB_P_PUSHSYMNEAR, 11,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 27,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_SERIAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02547 */ HB_P_LINEOFFSET, 106,	/* 113 */
	HB_P_PUSHLOCALNEAR, 5,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 27,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_SERIAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 67, 253,	/* -701 (abs: 01863) */
/* 02567 */ HB_P_LINEOFFSET, 110,	/* 117 */
	HB_P_PUSHSYMNEAR, 27,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_SERIAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 162, 246,	/* -2398 (abs: 00180) */
/* 02581 */ HB_P_LINEOFFSET, 111,	/* 118 */
	HB_P_PUSHSYMNEAR, 32,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 't', 'o', 'd', 'o', ' ', 'o', ' ', 'P', 'r', 'o', 'c', 'e', 's', 's', 'o', ' ', 'd', 'a', 's', ' ', 'S', 'e', 'r', 'i', 'a', 'i', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OPCAO */
/* 02634 */ HB_P_LINEOFFSET, 112,	/* 119 */
	HB_P_PUSHSYMNEAR, 20,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 02655) */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02660) */
	HB_P_JUMP, 83, 246,	/* -2477 (abs: 00180) */
/* 02660 */ HB_P_LINEOFFSET, 115,	/* 122 */
	HB_P_PUSHSYMNEAR, 9,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'M', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'o', ' ', 'f', 'i', 'n', 'a', 'l', ' ', 'd', 'o', ' ', 'p', 'r', 'o', 'c', 'e', 's', 's', 'o', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02712 */ HB_P_LINEOFFSET, 116,	/* 123 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* I 0*/
/* 02718 */ HB_P_LINEOFFSET, 117,	/* 124 */
	HB_P_LOCALNEARSETINT, 7, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_PUSHSYMNEAR, 27,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_SERIAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 90, 1,	/* 346 (abs: 03080) */
/* 02737 */ HB_P_LINEOFFSET, 118,	/* 125 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* CONS_SERI */
/* 02744 */ HB_P_LINEOFFSET, 119,	/* 126 */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 's', 'e', 'r', 'i', 'a', 'l', ' ', 'S', 'E', 'T', ' ', 'n', '_', 'p', 'e', 'd', 'i', 'd', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 23,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MNUM_PED */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* CCOMM */
/* 02800 */ HB_P_LINEOFFSET, 120,	/* 127 */
	HB_P_PUSHVARIABLE, 24, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ',', 'd', 'a', 't', 'a', '_', 'b', 'a', 'i', 'x', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* CCOMM */
/* 02835 */ HB_P_LINEOFFSET, 121,	/* 128 */
	HB_P_PUSHVARIABLE, 24, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ',', 'h', 'o', 'r', 'a', '_', 'b', 'a', 'i', 'x', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* CCOMM */
/* 02872 */ HB_P_LINEOFFSET, 122,	/* 129 */
	HB_P_PUSHVARIABLE, 24, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ',', 'o', 'p', 'e', 'r', '_', 'b', 'a', 'i', 'x', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 35, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* CCOMM */
/* 02907 */ HB_P_LINEOFFSET, 123,	/* 130 */
	HB_P_PUSHVARIABLE, 24, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', ',', 'o', 'b', 's', '_', 'b', 'a', 'i', 'x', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MOBS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* CCOMM */
/* 02940 */ HB_P_LINEOFFSET, 124,	/* 131 */
	HB_P_PUSHVARIABLE, 24, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* CCOMM */
/* 02979 */ HB_P_LINEOFFSET, 125,	/* 132 */
	HB_P_PUSHVARIABLE, 24, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 's', 'e', 'r', 'i', 'a', 'l', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 22,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_SERIAL */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* CCOMM */
/* 03016 */ HB_P_LINEOFFSET, 126,	/* 133 */
	HB_P_PUSHVARIABLE, 24, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 'b', 'a', 'i', 'x', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* CCOMM */
/* 03050 */ HB_P_LINEOFFSET, 127,	/* 134 */
	HB_P_MESSAGE, 25, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 26,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 24, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 4, 0,	/* CONS_SERI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03071 */ HB_P_LINEOFFSET, 128,	/* 135 */
	HB_P_LOCALNEARADDINT, 7, 1, 0,	/* I 1*/
	HB_P_JUMP, 159, 254,	/* -353 (abs: 02724) */
/* 03080 */ HB_P_LINEOFFSET, 129,	/* 136 */
	HB_P_MESSAGE, 25, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 26,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 148, 244,	/* -2924 (abs: 00180) */
	HB_P_ENDPROC
/* 03108 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

