/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <sacdepe.prg>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\sacdepe.prg /q /oC:\hti\SISCOM\sacdepe.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:45 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "sacdepe.prg"

HB_FUNC( SACDEPE );
HB_FUNC( SACDEP1 );
HB_FUNC( SACDEP2 );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( ATENCAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACDEPE )
{ "SACDEPE", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACDEPE )}, NULL },
{ "CONS_DEPE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "ACHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACHOICE )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SACDEP1", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SACDEP1 )}, NULL },
{ "SACDEP2", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SACDEP2 )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "OPCAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_DEP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACDEPE )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACDEPE
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACDEPE = hb_vm_SymbolInit_SACDEPE;
   #pragma data_seg()
#endif

HB_FUNC( SACDEPE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 11, 0,	/* 11 */
	HB_P_LOCALNEARSETSTR, 2, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', 'D', 'E', 'P', 'E', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* M_DEPE */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* POINT 0*/
/* 00027 */ HB_P_LINEOFFSET, 1,	/* 12 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 2,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* CONS_DEPE */
	HB_P_DOSHORT, 1,
	HB_P_POPVARIABLE, 1, 0,	/* CONS_DEPE */
/* 00042 */ HB_P_LINEOFFSET, 4,	/* 15 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00050 */ HB_P_LINEOFFSET, 5,	/* 16 */
	HB_P_PUSHSYMNEAR, 4,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'D', 'E', 'P', 'E', 'N', 'D', 'E', 'N', 'T', 'E', ' ', 'D', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 5,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MCOD */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 5,
/* 00100 */ HB_P_LINEOFFSET, 12,	/* 23 */
	HB_P_PUSHSYMNEAR, 6,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00109 */ HB_P_LINEOFFSET, 13,	/* 24 */
	HB_P_PUSHSYMNEAR, 7,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	'[', 'E', 'N', 'T', 'E', 'R', ']', ' ', 'p', '/', 'A', 'l', 't', 'e', 'r', 'a', 'r', ' ', 'o', 'u', ' ', 'E', 'x', 'c', 'l', 'u', 'i', 'r', ' ', 'o', 'u', ' ', '[', 'E', 'S', 'C', ']', 'p', '/', 'I', 'n', 'c', 'l', 'u', 'i', 'r', ' ', 'o', 'u', ' ', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00173 */ HB_P_LINEOFFSET, 14,	/* 25 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00182 */ HB_P_LINEOFFSET, 15,	/* 26 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 88,	/* 88 */
	'D', 'e', 'p', 'e', 'n', 'd', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'D', 'a', 't', 'a', ' ', 'N', 'a', 's', 'c', '.', ' ', ' ', 'P', 'a', 'r', 'e', 'n', 't', 'e', 's', 'c', 'o', ' ', ' ', ' ', 'D', 't', 'a', '.', 'O', 'b', 'i', 't', '.', ' ', 'D', 'a', 't', 'a', ' ', 'C', 'a', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00286 */ HB_P_LINEOFFSET, 16,	/* 27 */
	HB_P_PUSHSYMNEAR, 10,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00299 */ HB_P_LINEOFFSET, 17,	/* 28 */
	HB_P_PUSHSYMNEAR, 10,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00314 */ HB_P_LINEOFFSET, 18,	/* 29 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'E', 'P', 'E', 'N', 'D', 'E', 'N', 'T', 'E', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00352 */ HB_P_LINEOFFSET, 19,	/* 30 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00360 */ HB_P_LINEOFFSET, 20,	/* 31 */
	HB_P_PUSHSYMNEAR, 11,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 99,	/* 99 */
	HB_P_DOSHORT, 4,
/* 00374 */ HB_P_LINEOFFSET, 21,	/* 32 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', 'd', 'e', 'p', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MCOD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'd', 'e', 'p', ' ', '=', ' ', 39, '0', '0', '0', 39, 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CCOMM */
/* 00454 */ HB_P_LINEOFFSET, 22,	/* 33 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 1, 0,	/* CONS_DEPE */
/* 00462 */ HB_P_LINEOFFSET, 23,	/* 34 */
	HB_P_MESSAGE, 13, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 14,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 3,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 1, 0,	/* CONS_DEPE */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00482 */ HB_P_LINEOFFSET, 24,	/* 35 */
	HB_P_MESSAGE, 13, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 14,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00506 */ HB_P_LINEOFFSET, 25,	/* 36 */
	HB_P_PUSHSYMNEAR, 15,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* CONS_DEPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 58, 1,	/* 314 (abs: 00832) */
/* 00521 */ HB_P_LINEOFFSET, 38,	/* 49 */
	HB_P_MESSAGE, 13, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 14,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 120,	/* 120 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 'l', 'i', 'd', 'e', 'p', 'e', ' ', '(', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'c', 'o', 'd', '_', 'd', 'e', 'p', ',', 'd', 'e', 'p', 'e', 'n', 'd', 'e', 'n', 't', 'e', ',', 'd', 'a', 't', 'a', '_', 'n', 'a', 's', 'c', ',', 'p', 'a', 'r', 'e', 'n', 't', 'e', 's', 'c', 'o', ',', 'd', 'a', 't', 'a', '_', 'o', 'b', ',', 'd', 'a', 't', 'a', '_', 'c', 'a', 'd', ',', 'o', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ' ', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MCOD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '0', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'T', 'I', 'T', 'U', 'L', 'A', 'R', ' ', 'D', 'O', ' ', 'P', 'L', 'A', 'N', 'O', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'T', 'I', 'T', 'U', 'L', 'A', 'R', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
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
/* 00808 */ HB_P_LINEOFFSET, 39,	/* 50 */
	HB_P_MESSAGE, 13, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 14,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00832 */ HB_P_LINEOFFSET, 41,	/* 52 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', 'd', 'e', 'p', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MCOD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', '_', 'd', 'e', 'p', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CCOMM */
/* 00909 */ HB_P_LINEOFFSET, 42,	/* 53 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* M_DEPE */
/* 00916 */ HB_P_LINEOFFSET, 43,	/* 54 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 1, 0,	/* CONS_DEPE */
/* 00924 */ HB_P_LINEOFFSET, 44,	/* 55 */
	HB_P_MESSAGE, 13, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 14,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 3,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 1, 0,	/* CONS_DEPE */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00944 */ HB_P_LINEOFFSET, 45,	/* 56 */
	HB_P_MESSAGE, 13, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 14,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00968 */ HB_P_LINEOFFSET, 46,	/* 57 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* CONS_DEPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 00999 */ HB_P_LINEOFFSET, 47,	/* 58 */
	HB_P_PUSHSYMNEAR, 15,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* CONS_DEPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 202, 0,	/* 202 (abs: 01213) */
/* 01014 */ HB_P_LINEOFFSET, 48,	/* 59 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 19, 0,	/* I */
/* 01020 */ HB_P_LINEOFFSET, 49,	/* 60 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 19, 0,	/* I */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_PUSHSYMNEAR, 15,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* CONS_DEPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 138, 0,	/* 138 (abs: 01176) */
/* 01041 */ HB_P_LINEOFFSET, 55,	/* 66 */
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* M_DEPE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHMEMVAR, 1, 0,	/* CONS_DEPE */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 1, 0,	/* CONS_DEPE */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 1, 0,	/* CONS_DEPE */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 1, 0,	/* CONS_DEPE */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 1, 0,	/* CONS_DEPE */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 1, 0,	/* CONS_DEPE */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01164 */ HB_P_LINEOFFSET, 56,	/* 67 */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 19, 0,	/* I */
	HB_P_JUMP, 109, 255,	/* -147 (abs: 01026) */
/* 01176 */ HB_P_LINEOFFSET, 57,	/* 68 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 22,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHLOCALNEAR, 4,	/* M_DEPE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* POINT */
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPLOCALNEAR, 5,	/* POINT */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 01221) */
/* 01213 */ HB_P_LINEOFFSET, 59,	/* 70 */
	HB_P_PUSHSYMNEAR, 23,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 01221 */ HB_P_LINEOFFSET, 62,	/* 73 */
	HB_P_PUSHSYMNEAR, 24,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 01244) */
/* 01233 */ HB_P_LINEOFFSET, 63,	/* 74 */
	HB_P_PUSHSYMNEAR, 25,	/* SACDEP1 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MCOD */
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 32,	/* 32 (abs: 01274) */
/* 01244 */ HB_P_LINEOFFSET, 65,	/* 76 */
	HB_P_PUSHSYMNEAR, 24,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 126, 251,	/* -1154 (abs: 00100) */
/* 01257 */ HB_P_LINEOFFSET, 66,	/* 77 */
	HB_P_PUSHSYMNEAR, 26,	/* SACDEP2 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MCOD */
	HB_P_PUSHLOCALNEAR, 4,	/* M_DEPE */
	HB_P_PUSHLOCALNEAR, 5,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 109, 251,	/* -1171 (abs: 00100) */
/* 01274 */ HB_P_LINEOFFSET, 69,	/* 80 */
	HB_P_PUSHSYMNEAR, 27,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01281 */ HB_P_LINEOFFSET, 70,	/* 81 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01286 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SACDEP1 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 5, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 87, 0,	/* 87 */
	HB_P_LOCALNEARSETSTR, 2, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', 'D', 'E', 'P', '1', 0, 
/* 00018 */ HB_P_LINEOFFSET, 3,	/* 90 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00026 */ HB_P_LINEOFFSET, 4,	/* 91 */
	HB_P_PUSHSYMNEAR, 4,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'I', 'N', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'D', 'E', 'P', 'E', 'N', 'D', 'E', 'N', 'T', 'E', ' ', 'N', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 5,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MCOD */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 5,
/* 00089 */ HB_P_LINEOFFSET, 6,	/* 93 */
	HB_P_PUSHSYMNEAR, 6,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00098 */ HB_P_LINEOFFSET, 7,	/* 94 */
	HB_P_PUSHSYMNEAR, 7,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'c', 'a', 'm', 'p', 'o', 's', ' ', 'n', 'e', 'c', 'e', 's', 's', 'a', 'r', 'i', 'o', ' ', '-', ' ', '[', 'E', 'S', 'C', ']', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00151 */ HB_P_LINEOFFSET, 8,	/* 95 */
	HB_P_PUSHSYMNEAR, 28,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* MDEPENDENTE */
/* 00162 */ HB_P_LINEOFFSET, 9,	/* 96 */
	HB_P_PUSHSYMNEAR, 29,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 6,	/* MDATA_OBITO */
	HB_P_POPLOCALNEAR, 4,	/* MDATA_NASC */
/* 00185 */ HB_P_LINEOFFSET, 10,	/* 97 */
	HB_P_PUSHSYMNEAR, 28,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* MPARENTESCO */
/* 00196 */ HB_P_LINEOFFSET, 11,	/* 98 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00204 */ HB_P_LINEOFFSET, 12,	/* 99 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'N', 'o', 'm', 'e', ' ', 'd', 'o', ' ', 'D', 'e', 'p', 'e', 'n', 'd', 'e', 'n', 't', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00240 */ HB_P_LINEOFFSET, 13,	/* 100 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'd', 'e', ' ', 'N', 'a', 's', 'c', 'i', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00276 */ HB_P_LINEOFFSET, 14,	/* 101 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'P', 'a', 'r', 'e', 'n', 't', 'e', 's', 'c', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00313 */ HB_P_LINEOFFSET, 15,	/* 102 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'd', 'e', ' ', 'O', 'b', 'i', 't', 'o', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00350 */ HB_P_LINEOFFSET, 16,	/* 103 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* MDEPENDENTE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00388) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00393) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'd', 'e', 'p', 'e', 'n', 'd', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00431 */ HB_P_LINEOFFSET, 17,	/* 104 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MDATA_NASC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00469) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00474) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'd', 'a', 't', 'a', '_', 'n', 'a', 's', 'c', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00507 */ HB_P_LINEOFFSET, 18,	/* 105 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MPARENTESCO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00546) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00551) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'p', 'a', 'r', 'e', 'n', 't', 'e', 's', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00589 */ HB_P_LINEOFFSET, 19,	/* 106 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MDATA_OBITO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00628) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00633) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'd', 'a', 't', 'a', '_', 'o', 'b', 'i', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00671 */ HB_P_LINEOFFSET, 20,	/* 107 */
	HB_P_PUSHSYMNEAR, 34,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 31, 0,	/* GETLIST */
/* 00693 */ HB_P_LINEOFFSET, 21,	/* 108 */
	HB_P_PUSHSYMNEAR, 24,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00708) */
	HB_P_JUMP, 154, 1,	/* 410 (abs: 01115) */
/* 00708 */ HB_P_LINEOFFSET, 24,	/* 111 */
	HB_P_PUSHSYMNEAR, 35,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'D', 'E', 'P', 'E', 'N', 'D', 'E', 'N', 'T', 'E', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 36, 0,	/* OPCAO */
/* 00765 */ HB_P_LINEOFFSET, 25,	/* 112 */
	HB_P_PUSHVARIABLE, 36, 0,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 82, 253,	/* -686 (abs: 00089) */
/* 00778 */ HB_P_LINEOFFSET, 38,	/* 125 */
	HB_P_MESSAGE, 13, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 14,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 120,	/* 120 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 'l', 'i', 'd', 'e', 'p', 'e', ' ', '(', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'c', 'o', 'd', '_', 'd', 'e', 'p', ',', 'd', 'e', 'p', 'e', 'n', 'd', 'e', 'n', 't', 'e', ',', 'd', 'a', 't', 'a', '_', 'n', 'a', 's', 'c', ',', 'p', 'a', 'r', 'e', 'n', 't', 'e', 's', 'c', 'o', ',', 'd', 'a', 't', 'a', '_', 'o', 'b', ',', 'd', 'a', 't', 'a', '_', 'c', 'a', 'd', ',', 'o', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ' ', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MCOD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* CONS_DEPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MDEPENDENTE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MDATA_NASC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 00983) */
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MDATA_NASC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 00990) */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MPARENTESCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA_OBITO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 01027) */
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA_OBITO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 01034) */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
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
/* 01088 */ HB_P_LINEOFFSET, 39,	/* 126 */
	HB_P_MESSAGE, 13, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 14,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 1, 252,	/* -1023 (abs: 00089) */
/* 01115 */ HB_P_LINEOFFSET, 42,	/* 129 */
	HB_P_PUSHSYMNEAR, 27,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01122 */ HB_P_LINEOFFSET, 43,	/* 130 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01127 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SACDEP2 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 136, 0,	/* 136 */
	HB_P_LOCALNEARSETSTR, 3, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', 'D', 'E', 'P', '2', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MCONS_DEP */
/* 00023 */ HB_P_LINEOFFSET, 3,	/* 139 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00031 */ HB_P_LINEOFFSET, 4,	/* 140 */
	HB_P_PUSHSYMNEAR, 4,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'A', 'L', 'T', 'E', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'E', ' ', 'D', 'E', 'P', 'E', 'N', 'D', 'E', 'N', 'T', 'E', ' ', 'N', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 5,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MCOD */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 5,
/* 00095 */ HB_P_LINEOFFSET, 6,	/* 142 */
	HB_P_PUSHSYMNEAR, 6,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00104 */ HB_P_LINEOFFSET, 7,	/* 143 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', 'd', 'e', 'p', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MCOD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'd', 'e', 'p', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* M_MAT */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 39, 0,	/* CCOMM */
/* 00197 */ HB_P_LINEOFFSET, 8,	/* 144 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 40, 0,	/* CONS_DEP */
/* 00205 */ HB_P_LINEOFFSET, 9,	/* 145 */
	HB_P_MESSAGE, 13, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 14,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 39, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 40, 0,	/* CONS_DEP */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00226 */ HB_P_LINEOFFSET, 10,	/* 146 */
	HB_P_MESSAGE, 13, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 14,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00250 */ HB_P_LINEOFFSET, 11,	/* 147 */
	HB_P_PUSHSYMNEAR, 15,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* CONS_DEP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 00315) */
/* 00264 */ HB_P_LINEOFFSET, 12,	/* 148 */
	HB_P_PUSHSYMNEAR, 41,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', ' ', 'e', 's', 't', 'e', ' ', 'D', 'E', 'P', 'E', 'N', 'D', 'E', 'N', 'T', 'E', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 169, 3,	/* 937 (abs: 01249) */
/* 00315 */ HB_P_LINEOFFSET, 16,	/* 152 */
	HB_P_PUSHSYMNEAR, 7,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'c', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '[', 'E', 'S', 'C', ']', ' ', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00358 */ HB_P_LINEOFFSET, 17,	/* 153 */
	HB_P_PUSHMEMVAR, 40, 0,	/* CONS_DEP */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 4,	/* MDEPENDENTE */
/* 00370 */ HB_P_LINEOFFSET, 18,	/* 154 */
	HB_P_PUSHMEMVAR, 40, 0,	/* CONS_DEP */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 5,	/* MDATA_NASC */
/* 00382 */ HB_P_LINEOFFSET, 19,	/* 155 */
	HB_P_PUSHMEMVAR, 40, 0,	/* CONS_DEP */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 7,	/* MDATA_OBITO */
/* 00394 */ HB_P_LINEOFFSET, 20,	/* 156 */
	HB_P_PUSHMEMVAR, 40, 0,	/* CONS_DEP */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 6,	/* MPARENTESCO */
/* 00406 */ HB_P_LINEOFFSET, 21,	/* 157 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00414 */ HB_P_LINEOFFSET, 22,	/* 158 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'N', 'o', 'm', 'e', ' ', 'd', 'o', ' ', 'D', 'e', 'p', 'e', 'n', 'd', 'e', 'n', 't', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00450 */ HB_P_LINEOFFSET, 23,	/* 159 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'd', 'e', ' ', 'N', 'a', 's', 'c', 'i', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00486 */ HB_P_LINEOFFSET, 24,	/* 160 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'P', 'a', 'r', 'e', 'n', 't', 'e', 's', 'c', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00523 */ HB_P_LINEOFFSET, 25,	/* 161 */
	HB_P_PUSHSYMNEAR, 8,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 9,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'd', 'e', ' ', 'O', 'b', 'i', 't', 'o', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00560 */ HB_P_LINEOFFSET, 26,	/* 162 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MDEPENDENTE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00598) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00603) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'd', 'e', 'p', 'e', 'n', 'd', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00641 */ HB_P_LINEOFFSET, 27,	/* 163 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MDATA_NASC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00679) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00684) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'd', 'a', 't', 'a', '_', 'n', 'a', 's', 'c', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00717 */ HB_P_LINEOFFSET, 28,	/* 164 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MPARENTESCO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00756) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00761) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'p', 'a', 'r', 'e', 'n', 't', 'e', 's', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00799 */ HB_P_LINEOFFSET, 29,	/* 165 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MDATA_OBITO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00838) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00843) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'd', 'a', 't', 'a', '_', 'o', 'b', 'i', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00881 */ HB_P_LINEOFFSET, 30,	/* 166 */
	HB_P_PUSHSYMNEAR, 34,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 31, 0,	/* GETLIST */
/* 00903 */ HB_P_LINEOFFSET, 31,	/* 167 */
	HB_P_PUSHSYMNEAR, 24,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00918) */
	HB_P_JUMP, 78, 1,	/* 334 (abs: 01249) */
/* 00918 */ HB_P_LINEOFFSET, 34,	/* 170 */
	HB_P_PUSHSYMNEAR, 35,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'D', 'E', 'P', 'E', 'N', 'D', 'E', 'N', 'T', 'E', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 36, 0,	/* OPCAO */
/* 00975 */ HB_P_LINEOFFSET, 35,	/* 171 */
	HB_P_PUSHVARIABLE, 36, 0,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 134, 252,	/* -890 (abs: 00095) */
/* 00988 */ HB_P_LINEOFFSET, 40,	/* 176 */
	HB_P_MESSAGE, 13, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 14,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'c', 'l', 'i', 'd', 'e', 'p', 'e', ' ', 'S', 'E', 'T', ' ', 'd', 'e', 'p', 'e', 'n', 'd', 'e', 'n', 't', 'e', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MDEPENDENTE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'a', 't', 'a', '_', 'n', 'a', 's', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MDATA_NASC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 01079) */
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MDATA_NASC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 01086) */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'p', 'a', 'r', 'e', 'n', 't', 'e', 's', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MPARENTESCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'd', 'a', 't', 'a', '_', 'o', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA_OBITO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 01146) */
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA_OBITO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 01153) */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MCOD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'd', 'e', 'p', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* M_MAT */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01225 */ HB_P_LINEOFFSET, 41,	/* 177 */
	HB_P_MESSAGE, 13, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 14,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01249 */ HB_P_LINEOFFSET, 45,	/* 181 */
	HB_P_PUSHSYMNEAR, 27,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01256 */ HB_P_LINEOFFSET, 46,	/* 182 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01261 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

