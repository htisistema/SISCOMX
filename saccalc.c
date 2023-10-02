/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <saccalc.prg>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\saccalc.prg /q /oC:\hti\SISCOM\saccalc.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.02 16:11:24 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "saccalc.prg"

HB_FUNC( SACCALC );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC_EXTERN( FECHA_TELA );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACCALC )
{ "SACCALC", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACCALC )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "ACHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACHOICE )}, NULL },
{ "FECHA_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( FECHA_TELA )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACCALC )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACCALC
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACCALC = hb_vm_SymbolInit_SACCALC;
   #pragma data_seg()
#endif

HB_FUNC( SACCALC )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 5, 0,	/* 5 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* M_CALC */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* POINT 0*/
/* 00015 */ HB_P_LINEOFFSET, 2,	/* 7 */
	HB_P_PUSHSYMNEAR, 1,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	223, 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* MTRACO */
/* 00030 */ HB_P_LINEOFFSET, 3,	/* 8 */
	HB_P_PUSHSYMNEAR, 1,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	223, 0, 
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MTRACO1 */
/* 00045 */ HB_P_LINEOFFSET, 4,	/* 9 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	' ', 'F', 'O', 'R', 'M', 'U', 'L', 'A', ' ', 'D', 'O', ' ', 'C', 'A', 'L', 'C', 'U', 'L', 'O', ' ', 'D', 'E', ' ', 'C', 'U', 'S', 'T', 'O', ' ', 'D', 'A', ' ', 'M', 'E', 'R', 'C', 'A', 'D', 'O', 'R', 'I', 'A', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 00108 */ HB_P_LINEOFFSET, 5,	/* 10 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHLOCALNEAR, 3,	/* MTRACO1 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'L', ' ', 'E', ' ', 'G', ' ', 'E', ' ', 'N', ' ', 'D', ' ', 'A', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* MTRACO1 */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00141 */ HB_P_LINEOFFSET, 6,	/* 11 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 74,	/* 74 */
	' ', ' ', '*', ' ', 'I', 'C', 'M', ' ', 'd', 'a', ' ', 'f', 'i', 'r', 'm', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 'I', 'C', 'M', ' ', ' ', ' ', ' ', ' ', 179, ' ', ' ', ' ', ' ', '*', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', '1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 'D', 'C', '1', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 00226 */ HB_P_LINEOFFSET, 7,	/* 12 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 74,	/* 74 */
	' ', ' ', '*', ' ', 'I', 'C', 'M', ' ', 'd', 'e', ' ', 'o', 'r', 'i', 'g', 'e', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 'I', 'C', 'M', 'O', ' ', ' ', ' ', ' ', 179, ' ', ' ', ' ', ' ', '*', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', '1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 'D', 'C', '2', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 00311 */ HB_P_LINEOFFSET, 8,	/* 13 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 74,	/* 74 */
	' ', ' ', '*', ' ', 'P', 'e', 'r', 'c', 'e', 'n', 't', 'u', 'a', 'l', ' ', 'd', 'e', ' ', 'l', 'u', 'c', 'r', 'o', ' ', ' ', ' ', ' ', '=', ' ', 'P', 'L', ' ', ' ', ' ', ' ', ' ', ' ', 179, ' ', ' ', ' ', ' ', '*', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', '1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 'D', 'C', '3', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 00396 */ HB_P_LINEOFFSET, 9,	/* 14 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 74,	/* 74 */
	' ', ' ', '*', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 'Q', 'T', 'D', ' ', ' ', ' ', ' ', ' ', 179, ' ', ' ', ' ', ' ', '*', ' ', 'D', 'e', 's', 'p', 'e', 's', 'a', ' ', 'A', 'c', 'e', 's', 's', 'o', 'r', 'i', 'a', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 'D', 'A', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 00481 */ HB_P_LINEOFFSET, 10,	/* 15 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 74,	/* 74 */
	' ', ' ', '*', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'a', 't', 'u', 'a', 'l', ' ', 'm', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', '=', ' ', 'S', 'L', 'D', ' ', ' ', ' ', ' ', ' ', 179, ' ', ' ', ' ', ' ', '*', ' ', 'E', 'n', 'c', 'a', 'r', 'g', 'o', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'o', ' ', ' ', ' ', ' ', ' ', '=', ' ', 'E', 'F', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 00566 */ HB_P_LINEOFFSET, 11,	/* 16 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 74,	/* 74 */
	' ', ' ', '*', ' ', 'P', 'r', 'e', 'c', 'o', ' ', 'u', 'n', 'i', 't', 'a', 'r', 'i', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 'P', 'U', ' ', ' ', ' ', ' ', ' ', ' ', 179, ' ', ' ', ' ', ' ', '*', ' ', 'F', 'r', 'e', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 'F', 'R', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 00651 */ HB_P_LINEOFFSET, 12,	/* 17 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 74,	/* 74 */
	' ', ' ', '*', ' ', 'P', 'r', 'e', 'c', 'o', ' ', 'm', 'e', 'd', 'i', 'o', ' ', 'a', 'n', 't', 'e', 'r', 'i', 'o', 'r', ' ', ' ', ' ', '=', ' ', 'P', 'M', 'A', ' ', ' ', ' ', ' ', ' ', 179, ' ', ' ', ' ', ' ', '*', ' ', 'I', 'm', 'p', 'o', 's', 't', 'o', ' ', 'a', 'd', 'i', 'c', 'i', 'o', 'n', 'a', 'i', 's', ' ', ' ', ' ', ' ', ' ', '=', ' ', 'I', 'M', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 00736 */ HB_P_LINEOFFSET, 13,	/* 18 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHLOCALNEAR, 2,	/* MTRACO */
	HB_P_DOSHORT, 2,
/* 00747 */ HB_P_LINEOFFSET, 14,	/* 19 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '>', '>', '>', '>', ' ', 'V', 'a', 'l', 'o', 'r', 'e', 's', ' ', 'a', ' ', 's', 'e', 'r', ' ', 'C', 'A', 'L', 'C', 'U', 'L', 'A', 'D', 'O', 'S', ' ', '<', '<', '<', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 00833 */ HB_P_LINEOFFSET, 15,	/* 20 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 00919 */ HB_P_LINEOFFSET, 16,	/* 21 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', '*', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'd', 'a', ' ', 'm', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', ' ', ' ', ' ', '=', ' ', 'V', 'M', ' ', ' ', ' ', ' ', ' ', ' ', 179, ' ', ' ', ' ', ' ', '*', ' ', 'C', 'u', 's', 't', 'o', ' ', 'M', 'e', 'd', 'i', 'o', ' ', 'm', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', '=', ' ', 'C', 'M', 'M', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 01005 */ HB_P_LINEOFFSET, 17,	/* 22 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', '*', ' ', 'C', 'u', 's', 't', 'o', ' ', 'd', 'a', ' ', 'm', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', ' ', ' ', ' ', '=', ' ', 'C', 'M', ' ', ' ', ' ', ' ', ' ', ' ', 179, ' ', ' ', ' ', ' ', '*', ' ', 'P', 'r', 'e', 'c', 'o', ' ', 'd', 'e', ' ', 'v', 'e', 'n', 'd', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 'P', 'V', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 01091 */ HB_P_LINEOFFSET, 18,	/* 23 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', '*', ' ', 'C', 'u', 's', 't', 'o', ' ', 'R', 'e', 'a', 'l', ' ', 'm', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', ' ', '=', ' ', 'C', 'R', ' ', ' ', ' ', ' ', ' ', ' ', 179, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 01177 */ HB_P_LINEOFFSET, 19,	/* 24 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHLOCALNEAR, 2,	/* MTRACO */
	HB_P_DOSHORT, 2,
/* 01188 */ HB_P_LINEOFFSET, 20,	/* 25 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHLOCALNEAR, 3,	/* MTRACO1 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'O', ' ', 'B', ' ', 'S', ' ', 'E', ' ', 'R', ' ', 'V', ' ', 'A', ' ', 'C', ' ', 'A', ' ', 'O', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* MTRACO1 */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01227 */ HB_P_LINEOFFSET, 21,	/* 26 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', 'O', 'B', 'S', '.', ':', ' ', '*', ' ', 'S', 'e', ' ', 'a', ' ', 'm', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', 'f', 'o', 'r', ' ', 'I', 'S', 'E', 'N', 'T', 'A', ':', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 01313 */ HB_P_LINEOFFSET, 22,	/* 27 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'I', 'C', 'M', ' ', ' ', ' ', ' ', '=', ' ', '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 01399 */ HB_P_LINEOFFSET, 23,	/* 28 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'I', 'C', 'M', 'O', ' ', ' ', ' ', '=', ' ', '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 01485 */ HB_P_LINEOFFSET, 24,	/* 29 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'P', 'I', 'S', ' ', ' ', ' ', ' ', '=', ' ', '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 01571 */ HB_P_LINEOFFSET, 25,	/* 30 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'O', 'N', 'F', 'I', 'S', ' ', '=', ' ', '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 01657 */ HB_P_LINEOFFSET, 26,	/* 31 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 01743 */ HB_P_LINEOFFSET, 27,	/* 32 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', 'S', 'e', ' ', 'a', ' ', 'm', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', 't', 'i', 'v', 'e', 'r', ' ', 'I', 'C', 'M', 39, 'S', ' ', 'D', 'I', 'F', 'E', 'R', 'E', 'N', 'C', 'I', 'A', 'D', 'O', ':', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 01829 */ HB_P_LINEOFFSET, 28,	/* 33 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'I', 'C', 'M', ' ', '=', ' ', 'I', 'C', 'M', ' ', 'D', 'I', 'F', 'E', 'R', 'E', 'N', 'C', 'I', 'A', 'D', 'O', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 01915 */ HB_P_LINEOFFSET, 29,	/* 34 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHLOCALNEAR, 2,	/* MTRACO */
	HB_P_DOSHORT, 2,
/* 01926 */ HB_P_LINEOFFSET, 30,	/* 35 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', '-', '>', ' ', ' ', 'C', 'a', 'l', 'c', 'u', 'l', 'o', ' ', 'd', 'o', ' ', 'V', 'A', 'L', 'O', 'R', ' ', 'D', 'A', ' ', 'M', 'E', 'R', 'C', 'A', 'D', 'O', 'R', 'I', 'A', ' ', '(', 'V', 'M', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 02012 */ HB_P_LINEOFFSET, 31,	/* 36 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHLOCALNEAR, 2,	/* MTRACO */
	HB_P_DOSHORT, 2,
/* 02023 */ HB_P_LINEOFFSET, 32,	/* 37 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'M', ' ', '=', ' ', 'P', 'U', ' ', '-', ' ', '(', 'P', 'U', ' ', 'x', ' ', '(', 'D', 'C', '1', '/', '1', '0', '0', ')', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 02109 */ HB_P_LINEOFFSET, 33,	/* 38 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'M', ' ', '=', ' ', 'V', 'M', ' ', '+', ' ', '(', '(', 'V', 'M', ' ', 'x', ' ', 'E', 'F', ')', ' ', '+', ' ', '(', 'V', 'M', ' ', 'x', ' ', 'F', 'R', ')', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 02195 */ HB_P_LINEOFFSET, 34,	/* 39 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHLOCALNEAR, 2,	/* MTRACO */
	HB_P_DOSHORT, 2,
/* 02206 */ HB_P_LINEOFFSET, 35,	/* 40 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', '-', '>', ' ', 'C', 'a', 'l', 'c', 'u', 'l', 'o', ' ', 'd', 'o', ' ', 'C', 'U', 'S', 'T', 'O', ' ', 'D', 'A', ' ', 'M', 'E', 'R', 'C', 'A', 'D', 'O', 'R', 'I', 'A', ' ', '(', 'C', 'M', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 02292 */ HB_P_LINEOFFSET, 36,	/* 41 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHLOCALNEAR, 2,	/* MTRACO */
	HB_P_DOSHORT, 2,
/* 02303 */ HB_P_LINEOFFSET, 37,	/* 42 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 02389 */ HB_P_LINEOFFSET, 38,	/* 43 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', 'S', 'e', ' ', 'I', 'P', 'I', ' ', '>', ' ', '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 02475 */ HB_P_LINEOFFSET, 39,	/* 44 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'M', ' ', '=', ' ', 'V', 'M', ' ', '+', ' ', '(', 'V', 'M', ' ', 'x', ' ', '(', 'I', 'P', 'I', '/', '1', '0', '0', ')', ')', ' ', '-', ' ', '(', 'V', 'M', ' ', 'x', ' ', '(', 'I', 'C', 'M', 'O', '/', '1', '0', '0', ')', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 02561 */ HB_P_LINEOFFSET, 40,	/* 45 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', 'S', 'e', ' ', 'n', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 02647 */ HB_P_LINEOFFSET, 41,	/* 46 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'M', ' ', '=', ' ', 'V', 'M', ' ', 'x', ' ', '(', '1', '0', '0', ' ', '-', ' ', 'I', 'C', 'M', 'O', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 02733 */ HB_P_LINEOFFSET, 42,	/* 47 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'M', ' ', '=', ' ', 'C', 'M', ' ', '/', ' ', '1', '0', '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 02819 */ HB_P_LINEOFFSET, 43,	/* 48 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 02905 */ HB_P_LINEOFFSET, 44,	/* 49 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', 'S', 'e', ' ', 'D', 'A', ' ', '>', ' ', '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 02991 */ HB_P_LINEOFFSET, 45,	/* 50 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'M', ' ', '=', ' ', 'C', 'M', ' ', '+', ' ', '(', 'V', 'M', ' ', 'x', ' ', 'D', 'A', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03077 */ HB_P_LINEOFFSET, 46,	/* 51 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHLOCALNEAR, 2,	/* MTRACO */
	HB_P_DOSHORT, 2,
/* 03088 */ HB_P_LINEOFFSET, 47,	/* 52 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', '-', '>', ' ', 'C', 'a', 'l', 'c', 'u', 'l', 'o', ' ', 'd', 'o', ' ', 'C', 'U', 'S', 'T', 'O', ' ', 'D', 'A', ' ', 'R', 'E', 'A', 'L', ' ', '(', 'C', 'R', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03174 */ HB_P_LINEOFFSET, 48,	/* 53 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHLOCALNEAR, 2,	/* MTRACO */
	HB_P_DOSHORT, 2,
/* 03185 */ HB_P_LINEOFFSET, 49,	/* 54 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'R', ' ', '=', ' ', '(', 'C', 'M', ' ', '/', ' ', '(', '1', '0', '0', ' ', '-', ' ', '(', 'I', 'C', 'M', ' ', '+', ' ', 'P', 'I', 'S', ' ', '+', ' ', 'C', 'O', 'N', 'F', 'I', 'S', ' ', '+', ' ', 'I', 'M', ')', ')', ')', ' ', 'x', ' ', '1', '0', '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03271 */ HB_P_LINEOFFSET, 50,	/* 55 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHLOCALNEAR, 2,	/* MTRACO */
	HB_P_DOSHORT, 2,
/* 03282 */ HB_P_LINEOFFSET, 51,	/* 56 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', '-', '>', ' ', 'C', 'a', 'l', 'c', 'u', 'l', 'o', ' ', 'd', 'o', ' ', 'C', 'U', 'S', 'T', 'O', ' ', 'M', 'E', 'D', 'I', 'O', ' ', 'D', 'A', ' ', 'M', 'E', 'R', 'C', 'A', 'D', 'O', 'R', 'I', 'A', ' ', '(', 'C', 'M', 'M', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03368 */ HB_P_LINEOFFSET, 52,	/* 57 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHLOCALNEAR, 2,	/* MTRACO */
	HB_P_DOSHORT, 2,
/* 03379 */ HB_P_LINEOFFSET, 53,	/* 58 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03465 */ HB_P_LINEOFFSET, 54,	/* 59 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', 'S', 'e', ' ', 's', 'a', 'l', 'd', 'o', ' ', 'a', 't', 'u', 'a', 'l', ' ', 'd', 'a', ' ', 'm', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', '>', ' ', '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03551 */ HB_P_LINEOFFSET, 55,	/* 60 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'M', 'M', ' ', '=', ' ', '(', '(', 'Q', 'T', 'D', ' ', 'x', ' ', 'C', 'R', ')', ' ', '+', ' ', '(', 'S', 'L', 'D', ' ', 'x', ' ', 'P', 'M', 'A', ')', ')', ' ', '/', ' ', '(', 'Q', 'T', 'D', ' ', '+', ' ', 'S', 'L', 'D', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03637 */ HB_P_LINEOFFSET, 56,	/* 61 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', 'S', 'e', ' ', 'n', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03723 */ HB_P_LINEOFFSET, 57,	/* 62 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'M', 'M', ' ', '=', ' ', 'C', 'R', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03809 */ HB_P_LINEOFFSET, 58,	/* 63 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHLOCALNEAR, 2,	/* MTRACO */
	HB_P_DOSHORT, 2,
/* 03820 */ HB_P_LINEOFFSET, 59,	/* 64 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', '-', '>', ' ', 'C', 'a', 'l', 'c', 'u', 'l', 'o', ' ', 'd', 'o', ' ', 'P', 'R', 'E', 'C', 'O', ' ', 'V', 'E', 'N', 'D', 'A', ' ', '(', 'P', 'V', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03906 */ HB_P_LINEOFFSET, 60,	/* 65 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHLOCALNEAR, 2,	/* MTRACO */
	HB_P_DOSHORT, 2,
/* 03917 */ HB_P_LINEOFFSET, 61,	/* 66 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 04003 */ HB_P_LINEOFFSET, 62,	/* 67 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', '>', '>', '>', ' ', 'P', 'e', 'l', 'o', ' ', 'C', 'U', 'S', 'T', 'O', ' ', 'R', 'E', 'A', 'L', ' ', '<', '<', '<', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 04089 */ HB_P_LINEOFFSET, 63,	/* 68 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 04175 */ HB_P_LINEOFFSET, 64,	/* 69 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', 'S', 'e', ' ', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'c', 'a', 'l', 'c', 'u', 'l', 'o', ' ', 'f', 'o', 'r', ' ', 'e', 'm', ' ', 'P', 'E', 'R', 'C', 'E', 'N', 'T', 'U', 'A', 'L', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 04261 */ HB_P_LINEOFFSET, 65,	/* 70 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'P', 'V', ' ', '=', ' ', 'C', 'R', ' ', '*', ' ', '(', '(', 'P', 'L', ' ', '/', ' ', '1', '0', '0', ')', ' ', '+', ' ', '1', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 04347 */ HB_P_LINEOFFSET, 66,	/* 71 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', 'S', 'e', ' ', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'c', 'a', 'l', 'c', 'u', 'l', 'o', ' ', 'f', 'o', 'r', ' ', 'e', 'm', ' ', 'F', 'A', 'T', 'O', 'R', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 04433 */ HB_P_LINEOFFSET, 67,	/* 72 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'P', 'V', ' ', '=', ' ', '(', 'C', 'R', ' ', '/', ' ', '(', '1', '0', '0', ' ', '-', ' ', 'P', 'L', ')', ')', ' ', 'x', ' ', '1', '0', '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 04519 */ HB_P_LINEOFFSET, 68,	/* 73 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 04605 */ HB_P_LINEOFFSET, 69,	/* 74 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', '>', '>', '>', ' ', 'P', 'e', 'l', 'o', ' ', 'C', 'U', 'S', 'T', 'O', ' ', 'M', 'E', 'D', 'I', 'O', ' ', '<', '<', '<', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 04691 */ HB_P_LINEOFFSET, 70,	/* 75 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 04777 */ HB_P_LINEOFFSET, 71,	/* 76 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', 'S', 'e', ' ', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'c', 'a', 'l', 'c', 'u', 'l', 'o', ' ', 'f', 'o', 'r', ' ', 'e', 'm', ' ', 'P', 'E', 'R', 'C', 'E', 'N', 'T', 'U', 'A', 'L', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 04863 */ HB_P_LINEOFFSET, 72,	/* 77 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'P', 'V', ' ', '=', ' ', 'C', 'M', 'M', ' ', '*', ' ', '(', '(', 'P', 'L', ' ', '/', ' ', '1', '0', '0', ')', ' ', '+', ' ', '1', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 04949 */ HB_P_LINEOFFSET, 73,	/* 78 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', 'S', 'e', ' ', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'c', 'a', 'l', 'c', 'u', 'l', 'o', ' ', 'f', 'o', 'r', ' ', 'e', 'm', ' ', 'F', 'A', 'T', 'O', 'R', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 05035 */ HB_P_LINEOFFSET, 74,	/* 79 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'P', 'V', ' ', '=', ' ', '(', 'C', 'M', 'M', ' ', '/', ' ', '(', '1', '0', '0', ' ', '-', ' ', 'P', 'L', ')', ')', ' ', 'x', ' ', '1', '0', '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 05121 */ HB_P_LINEOFFSET, 75,	/* 80 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 05207 */ HB_P_LINEOFFSET, 76,	/* 81 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', '>', '>', '>', ' ', 'O', 'U', 'T', 'R', 'O', ' ', 'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'C', 'A', 'L', 'C', 'U', 'L', 'O', ' ', '<', '<', '<', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 05293 */ HB_P_LINEOFFSET, 77,	/* 82 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 05379 */ HB_P_LINEOFFSET, 78,	/* 83 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'P', 'V', ' ', '=', ' ', '(', 'C', 'M', ' ', '/', ' ', '(', '1', '0', '0', ' ', '-', ' ', '(', 'I', 'C', 'M', ' ', '+', ' ', 'P', 'I', 'S', ' ', '+', ' ', 'C', 'O', 'N', 'F', 'I', 'S', ' ', '+', ' ', 'I', 'M', 'P', ' ', '+', ' ', 'P', 'L', ')', ')', ')', ' ', 'x', ' ', '1', '0', '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 05465 */ HB_P_LINEOFFSET, 79,	/* 84 */
	HB_P_PUSHSYMNEAR, 3,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHLOCALNEAR, 2,	/* MTRACO */
	HB_P_DOSHORT, 2,
/* 05476 */ HB_P_LINEOFFSET, 81,	/* 86 */
	HB_P_PUSHSYMNEAR, 4,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', ' ', ' ', '-', ' ', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', ' ', 'p', '/', 'R', 'e', 's', 'u', 'm', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 05520 */ HB_P_LINEOFFSET, 82,	/* 87 */
	HB_P_PUSHSYMNEAR, 5,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHLOCALNEAR, 1,	/* M_CALC */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* POINT */
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPLOCALNEAR, 4,	/* POINT */
	HB_P_PUSHSYMNEAR, 5,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 05554 */ HB_P_LINEOFFSET, 83,	/* 88 */
	HB_P_PUSHSYMNEAR, 7,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05561 */ HB_P_LINEOFFSET, 84,	/* 89 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 05566 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

