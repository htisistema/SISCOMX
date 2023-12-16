/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <sacdbf.prg>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\sacdbf.prg /q /oC:\hti\SISCOM\sacdbf.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:40 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "sacdbf.prg"

HB_FUNC( SACDBF );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( FILE );
HB_FUNC_EXTERN( DBCREATE );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACDBF )
{ "SACDBF", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACDBF )}, NULL },
{ "COR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "F", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTCOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TELA_DBF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCAMINHO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIP_TERM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NMAXPSW", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MOP_TIP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "FILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILE )}, NULL },
{ "DBCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCREATE )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACDBF )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACDBF
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACDBF = hb_vm_SymbolInit_SACDBF;
   #pragma data_seg()
#endif

HB_FUNC( SACDBF )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 5, 3,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 4, 0,	/* 4 */
	HB_P_LOCALNEARSETSTR, 4, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', 'D', 'B', 'F', 0, 
	HB_P_LOCALNEARSETSTR, 6, 1, 0,	/* MLINHA 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 7, 1, 0,	/* MCOD_BC 1*/
	0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00032 */ HB_P_LINEOFFSET, 1,	/* 5 */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 9,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* COR */
	HB_P_PUSHSYMNEAR, 2,	/* F */
	HB_P_PUSHSYMNEAR, 3,	/* MTCOR */
	HB_P_PUSHSYMNEAR, 4,	/* TELA_DBF */
	HB_P_PUSHSYMNEAR, 5,	/* MCAMINHO */
	HB_P_PUSHSYMNEAR, 6,	/* MTIP_TERM */
	HB_P_PUSHSYMNEAR, 7,	/* NMAXPSW */
	HB_P_PUSHSYMNEAR, 8,	/* MOP_TIP */
	HB_P_DOSHORT, 8,
	HB_P_POPVARIABLE, 7, 0,	/* NMAXPSW */
	HB_P_POPVARIABLE, 3, 0,	/* MTCOR */
/* 00064 */ HB_P_LINEOFFSET, 2,	/* 6 */
	HB_P_PUSHSYMNEAR, 10,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 5, 0,	/* MCAMINHO */
/* 00076 */ HB_P_LINEOFFSET, 3,	/* 7 */
	HB_P_PUSHLOCALNEAR, 1,	/* MOP */
	HB_P_POPVARIABLE, 8, 0,	/* MOP_TIP */
/* 00083 */ HB_P_LINEOFFSET, 4,	/* 8 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_POPVARIABLE, 6, 0,	/* MTIP_TERM */
/* 00092 */ HB_P_LINEOFFSET, 5,	/* 9 */
	HB_P_PUSHLOCALNEAR, 2,	/* MARQUIVO */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 72,	/* 72 (abs: 00170) */
/* 00100 */ HB_P_LINEOFFSET, 6,	/* 10 */
	HB_P_PUSHSYMNEAR, 11,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', 's', ' ', 'D', 'B', 'F', 's', ',', ' ', 'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'm', 'o', 'm', 'e', 'n', 't', 'o', '.', '.', '.', '.', '.', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00170 */ HB_P_LINEOFFSET, 8,	/* 12 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 2, 0,	/* F */
/* 00176 */ HB_P_LINEOFFSET, 9,	/* 13 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00183 */ HB_P_LINEOFFSET, 10,	/* 14 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'c', 'o', 'd', '_', 'o', 'p', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_ARRAYGEN, 11, 0,	/* 11 */
	HB_P_DOSHORT, 2,
/* 00219 */ HB_P_LINEOFFSET, 11,	/* 15 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	's', 'n', 'o', 'm', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00246 */ HB_P_LINEOFFSET, 12,	/* 16 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	's', 't', 'i', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00272 */ HB_P_LINEOFFSET, 13,	/* 17 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	's', 't', 'i', 'p', 'o', '_', 's', 'i', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00302 */ HB_P_LINEOFFSET, 14,	/* 18 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 's', 'e', 'n', 'h', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00330 */ HB_P_LINEOFFSET, 15,	/* 19 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	's', 'd', 'a', 't', 'a', '_', 'c', 'a', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00361 */ HB_P_LINEOFFSET, 16,	/* 20 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	's', 'c', 'o', 'm', 'i', 's', 's', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00393 */ HB_P_LINEOFFSET, 17,	/* 21 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	's', 'c', 'o', 'm', '_', 'p', 'r', 'a', 'z', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00425 */ HB_P_LINEOFFSET, 18,	/* 22 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	's', 'c', 'o', 'm', '_', 'o', 'p', 'e', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00457 */ HB_P_LINEOFFSET, 19,	/* 23 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	's', 'c', 'o', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00485 */ HB_P_LINEOFFSET, 20,	/* 24 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'u', 'l', 't', '_', 'e', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00515 */ HB_P_LINEOFFSET, 21,	/* 25 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'u', 'l', 't', '_', 'f', 'i', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00545 */ HB_P_LINEOFFSET, 22,	/* 26 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'n', 'i', 'v', 'e', 'l', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00573 */ HB_P_LINEOFFSET, 23,	/* 27 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	's', 'h', 'o', 'r', 'a', '_', 'i', 'n', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00604 */ HB_P_LINEOFFSET, 24,	/* 28 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	's', 'h', 'o', 'r', 'a', '_', 'f', 'i', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00635 */ HB_P_LINEOFFSET, 25,	/* 29 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'u', 'l', 't', '_', 'e', '_', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00665 */ HB_P_LINEOFFSET, 26,	/* 30 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'h', '_', 'i', '_', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00693 */ HB_P_LINEOFFSET, 27,	/* 31 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'e', 'x', 'p', 'i', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00722 */ HB_P_LINEOFFSET, 28,	/* 32 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'c', 'o', 'd', '_', 'a', 'u', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00752 */ HB_P_LINEOFFSET, 29,	/* 33 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 's', 't', 'a', 't', 'u', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00780 */ HB_P_LINEOFFSET, 30,	/* 34 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	's', 'o', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00806 */ HB_P_LINEOFFSET, 31,	/* 35 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'c', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00836 */ HB_P_LINEOFFSET, 32,	/* 36 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'p', 'r', 'o', 'd', 'u', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00866 */ HB_P_LINEOFFSET, 33,	/* 37 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'v', 'a', 'l', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00895 */ HB_P_LINEOFFSET, 34,	/* 38 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	's', 'b', 'l', 'o', 'q', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00921 */ HB_P_LINEOFFSET, 35,	/* 39 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	's', 'm', 'e', 'n', 's', 'a', 'g', 'e', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHINT, 150, 0,	/* 150 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00953 */ HB_P_LINEOFFSET, 36,	/* 40 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	's', 'a', 'm', 'b', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 00984 */ HB_P_LINEOFFSET, 37,	/* 41 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'd', 'o', 'c', '_', 'a', 'p', 'a', 'g', 'a', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01015 */ HB_P_LINEOFFSET, 38,	/* 42 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'e', 's', 't', 'o', 'q', '_', 'm', 'i', 'n', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01045 */ HB_P_LINEOFFSET, 39,	/* 43 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'e', 's', 't', 'o', 'q', '_', 'm', 'e', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01076 */ HB_P_LINEOFFSET, 40,	/* 44 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	't', 'e', 'r', 'm', 'i', 'n', 'a', 'l', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01106 */ HB_P_LINEOFFSET, 41,	/* 45 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'd', 'a', 't', 'a', '_', 'a', 'c', 'e', 's', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01138 */ HB_P_LINEOFFSET, 42,	/* 46 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'h', 'o', 'r', 'a', '_', 'a', 'c', 'e', 's', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01170 */ HB_P_LINEOFFSET, 43,	/* 47 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'e', 'm', 'a', 'i', 'l', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01197 */ HB_P_LINEOFFSET, 44,	/* 48 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'a', 't', '_', 'a', 'n', 'i', 'v', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01226 */ HB_P_LINEOFFSET, 45,	/* 49 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'v', 'e', 'r', '_', 'p', 'o', 'c', 'k', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01257 */ HB_P_LINEOFFSET, 46,	/* 50 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'e', 'n', 'd', 'e', 'r', 'e', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01287 */ HB_P_LINEOFFSET, 47,	/* 51 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'n', 'u', 'm', 'e', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01315 */ HB_P_LINEOFFSET, 48,	/* 52 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'o', 'm', 'p', 'l', 'e', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01348 */ HB_P_LINEOFFSET, 49,	/* 53 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'b', 'a', 'i', 'r', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01376 */ HB_P_LINEOFFSET, 50,	/* 54 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'c', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01404 */ HB_P_LINEOFFSET, 51,	/* 55 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'u', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01428 */ HB_P_LINEOFFSET, 52,	/* 56 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'n', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01454 */ HB_P_LINEOFFSET, 53,	/* 57 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'p', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01479 */ HB_P_LINEOFFSET, 54,	/* 58 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'r', 'g', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01503 */ HB_P_LINEOFFSET, 55,	/* 59 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'I', 'N', 'S', 'O', 'P', 'E', 'R', 'A', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01571 */ HB_P_LINEOFFSET, 56,	/* 60 */
	HB_P_PUSHLOCALNEAR, 1,	/* MOP */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 01585) */
/* 01579 */ HB_P_LINEOFFSET, 57,	/* 61 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01585 */ HB_P_LINEOFFSET, 59,	/* 63 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'I', 'N', 'S', 'O', 'P', 'E', 'R', 'A', '.', 'D', 'B', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 31,	/* 31 (abs: 01638) */
/* 01609 */ HB_P_LINEOFFSET, 60,	/* 64 */
	HB_P_PUSHSYMNEAR, 17,	/* DBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'D', 'B', 'F', 'C', 'D', 'X', 0, 
	HB_P_DOSHORT, 3,
/* 01638 */ HB_P_LINEOFFSET, 63,	/* 67 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 01645 */ HB_P_LINEOFFSET, 64,	/* 68 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 'm', 'p', 'r', 'e', 's', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01674 */ HB_P_LINEOFFSET, 65,	/* 69 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01704 */ HB_P_LINEOFFSET, 66,	/* 70 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01735 */ HB_P_LINEOFFSET, 67,	/* 71 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'd', 'e', 's', 'c', 'r', 'i', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01764 */ HB_P_LINEOFFSET, 68,	/* 72 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', '3', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01795 */ HB_P_LINEOFFSET, 69,	/* 73 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'r', 'e', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01820 */ HB_P_LINEOFFSET, 70,	/* 74 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'g', 'r', 'u', '_', 's', 'u', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01849 */ HB_P_LINEOFFSET, 71,	/* 75 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_ARRAYGEN, 11, 0,	/* 11 */
	HB_P_DOSHORT, 2,
/* 01886 */ HB_P_LINEOFFSET, 72,	/* 76 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01912 */ HB_P_LINEOFFSET, 73,	/* 77 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	't', 'i', 'p', 'o', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01942 */ HB_P_LINEOFFSET, 74,	/* 78 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'b', 'a', 'l', 'a', 'n', 'c', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01970 */ HB_P_LINEOFFSET, 75,	/* 79 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'a', 't', 'a', '_', 'a', 't', 'u', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02000 */ HB_P_LINEOFFSET, 76,	/* 80 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'a', 't', 'a', '_', 'c', 'a', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02030 */ HB_P_LINEOFFSET, 77,	/* 81 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'u', 'n', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02059 */ HB_P_LINEOFFSET, 78,	/* 82 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 's', 'p', 'e', 'c', 'i', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02088 */ HB_P_LINEOFFSET, 79,	/* 83 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'p', 'e', 's', 'o', '_', 'l', 'i', 'q', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02119 */ HB_P_LINEOFFSET, 80,	/* 84 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'p', 'e', 's', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02146 */ HB_P_LINEOFFSET, 81,	/* 85 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'v', 'o', 'l', 'u', 'm', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02175 */ HB_P_LINEOFFSET, 82,	/* 86 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'e', 't', 'r', 'a', 'g', 'e', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02206 */ HB_P_LINEOFFSET, 83,	/* 87 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'p', 'a', 'c', 'o', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02235 */ HB_P_LINEOFFSET, 84,	/* 88 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'a', 'l', 'i', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02264 */ HB_P_LINEOFFSET, 85,	/* 89 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'p', '_', 'l', 'u', 'c', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02294 */ HB_P_LINEOFFSET, 86,	/* 90 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'p', 'r', 'o', 'm', 'o', 'c', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02325 */ HB_P_LINEOFFSET, 87,	/* 91 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'i', 's', 'p', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02350 */ HB_P_LINEOFFSET, 88,	/* 92 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'l', 'i', 'v', 'r', 'e', '_', 'd', 'e', 's', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02381 */ HB_P_LINEOFFSET, 89,	/* 93 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'm', 'i', 's', 's', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02412 */ HB_P_LINEOFFSET, 90,	/* 94 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'm', '_', 'm', 'o', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02443 */ HB_P_LINEOFFSET, 91,	/* 95 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 's', 't', '_', 'm', 'i', 'n', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02473 */ HB_P_LINEOFFSET, 92,	/* 96 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 's', 't', '_', 'm', 'a', 'x', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02503 */ HB_P_LINEOFFSET, 93,	/* 97 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'd', '_', 'f', 'a', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02532 */ HB_P_LINEOFFSET, 94,	/* 98 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'f', 'a', 'b', 'r', 'i', 'c', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02561 */ HB_P_LINEOFFSET, 95,	/* 99 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'a', 't', '_', 'u', 'l', 't', '_', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02592 */ HB_P_LINEOFFSET, 96,	/* 100 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'a', 't', '_', 'u', 'l', 't', '_', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02623 */ HB_P_LINEOFFSET, 97,	/* 101 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	's', 'a', 'l', 'd', 'o', '_', 'a', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02655 */ HB_P_LINEOFFSET, 98,	/* 102 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'a', '_', 'p', 'r', '_', 'u', 'n', 'i', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02687 */ HB_P_LINEOFFSET, 99,	/* 103 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'a', '_', 'v', 'l', 'r', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02720 */ HB_P_LINEOFFSET, 100,	/* 104 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'a', '_', 'c', 'u', 's', 't', '_', 'm', 'e', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02753 */ HB_P_LINEOFFSET, 101,	/* 105 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'a', '_', 'c', 'u', 's', 't', '_', 'r', 'e', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02786 */ HB_P_LINEOFFSET, 102,	/* 106 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'a', '_', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02819 */ HB_P_LINEOFFSET, 103,	/* 107 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'a', '_', 'p', 'r', '_', 'm', 'e', 'd', 'i', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02852 */ HB_P_LINEOFFSET, 104,	/* 108 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'p', 'r', '_', 'n', 'o', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02882 */ HB_P_LINEOFFSET, 105,	/* 109 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'p', 'r', '_', 'u', 'n', 'i', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02912 */ HB_P_LINEOFFSET, 106,	/* 110 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'v', 'l', 'r', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02943 */ HB_P_LINEOFFSET, 107,	/* 111 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'u', 's', 't', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 02975 */ HB_P_LINEOFFSET, 108,	/* 112 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'u', 's', 't', '_', 'r', 'e', 'a', 'l', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03007 */ HB_P_LINEOFFSET, 109,	/* 113 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03038 */ HB_P_LINEOFFSET, 110,	/* 114 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03070 */ HB_P_LINEOFFSET, 111,	/* 115 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'p', 'r', '_', 'm', 'e', 'd', 'i', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03101 */ HB_P_LINEOFFSET, 112,	/* 116 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'p', 'r', '_', 'f', 'a', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03130 */ HB_P_LINEOFFSET, 113,	/* 117 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'v', 'a', 'r', 'e', 'j', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03159 */ HB_P_LINEOFFSET, 114,	/* 118 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'u', 'l', '_', 'a', 'l', 't', '_', 'p', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03190 */ HB_P_LINEOFFSET, 115,	/* 119 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'o', 'p', 'e', 'r', 'a', '_', 'p', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03220 */ HB_P_LINEOFFSET, 116,	/* 120 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	't', 'i', 'p', 'o', '_', 'o', 'p', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03249 */ HB_P_LINEOFFSET, 117,	/* 121 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'h', 'o', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03275 */ HB_P_LINEOFFSET, 118,	/* 122 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	's', 'a', 'l', 'd', 'o', '_', 'f', 'i', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03307 */ HB_P_LINEOFFSET, 119,	/* 123 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03339 */ HB_P_LINEOFFSET, 120,	/* 124 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'l', 'd', 'o', '_', 'a', 'v', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03370 */ HB_P_LINEOFFSET, 121,	/* 125 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	's', 'a', 'l', 'd', 'o', '_', 'c', 'o', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03403 */ HB_P_LINEOFFSET, 122,	/* 126 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	's', 'a', 'l', 'd', 'o', '_', 'e', 's', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03435 */ HB_P_LINEOFFSET, 123,	/* 127 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'i', 'c', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03461 */ HB_P_LINEOFFSET, 124,	/* 128 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'i', 's', 'e', 'n', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03488 */ HB_P_LINEOFFSET, 125,	/* 129 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'b', 'e', 'b', 'i', 'd', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03517 */ HB_P_LINEOFFSET, 126,	/* 130 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'i', 'c', 'm', '_', 's', 'u', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03547 */ HB_P_LINEOFFSET, 127,	/* 131 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'c', 'm', '_', 's', 'u', 'b', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03578 */ HB_P_LINEOFFSET, 128,	/* 132 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'i', 'p', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03604 */ HB_P_LINEOFFSET, 129,	/* 133 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'd', '_', 'c', 'l', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03633 */ HB_P_LINEOFFSET, 130,	/* 134 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'd', '_', 'f', 'i', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03662 */ HB_P_LINEOFFSET, 131,	/* 135 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'i', 't', 't', 'r', 'i', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03691 */ HB_P_LINEOFFSET, 132,	/* 136 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'p', 'r', 'o', 'd', 'e', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03720 */ HB_P_LINEOFFSET, 133,	/* 137 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'n', 'b', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03745 */ HB_P_LINEOFFSET, 134,	/* 138 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'e', 's', 'c', '_', 'i', 'c', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03774 */ HB_P_LINEOFFSET, 135,	/* 139 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'e', 's', 'c', '_', 'i', 'c', 'm', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03806 */ HB_P_LINEOFFSET, 136,	/* 140 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'l', 'o', 'c', 'a', 'l', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03833 */ HB_P_LINEOFFSET, 137,	/* 141 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'g', 'r', 'a', 'm', 'a', 't', 'u', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03865 */ HB_P_LINEOFFSET, 138,	/* 142 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'r', 'a', 'z', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03892 */ HB_P_LINEOFFSET, 139,	/* 143 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'f', 'a', 't', 'c', 'o', 'n', 'v', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03922 */ HB_P_LINEOFFSET, 140,	/* 144 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'o', 'c', '_', 'e', 'n', 't', '_', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03953 */ HB_P_LINEOFFSET, 141,	/* 145 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'd', 'o', 'c', '_', 'e', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 03982 */ HB_P_LINEOFFSET, 142,	/* 146 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'e', 'n', 'v', 'e', 'l', 'o', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04012 */ HB_P_LINEOFFSET, 143,	/* 147 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'e', 's', 'c', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04044 */ HB_P_LINEOFFSET, 145,	/* 149 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'i', 'a', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04068 */ HB_P_LINEOFFSET, 146,	/* 150 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 'd', '_', 'i', 'c', 'm', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04098 */ HB_P_LINEOFFSET, 147,	/* 151 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'i', 't', '_', 't', 'r', 'i', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04127 */ HB_P_LINEOFFSET, 149,	/* 153 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'd', 'o', 'l', 'a', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04153 */ HB_P_LINEOFFSET, 150,	/* 154 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'a', 'p', 'l', 'i', 'c', '0', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04181 */ HB_P_LINEOFFSET, 151,	/* 155 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'a', 'p', 'l', 'i', 'c', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04209 */ HB_P_LINEOFFSET, 152,	/* 156 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'a', 'p', 'l', 'i', 'c', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04237 */ HB_P_LINEOFFSET, 153,	/* 157 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'a', 'p', 'l', 'i', 'c', '3', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04265 */ HB_P_LINEOFFSET, 154,	/* 158 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'a', 'p', 'l', 'i', 'c', '4', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04293 */ HB_P_LINEOFFSET, 155,	/* 159 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'a', 't', 'u', 'a', 'l', 'i', 'z', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04323 */ HB_P_LINEOFFSET, 156,	/* 160 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'i', 'p', 'p', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04349 */ HB_P_LINEOFFSET, 157,	/* 161 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'o', 'd', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04375 */ HB_P_LINEOFFSET, 158,	/* 162 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'o', 'd', '3', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04401 */ HB_P_LINEOFFSET, 159,	/* 163 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'o', 'd', '4', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04427 */ HB_P_LINEOFFSET, 160,	/* 164 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'd', 'a', 't', 'a', '_', 'f', 'a', 'l', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04459 */ HB_P_LINEOFFSET, 161,	/* 165 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'd', '_', 'f', 'a', 'l', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04490 */ HB_P_LINEOFFSET, 162,	/* 166 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'q', 't', 'd', '_', 'f', 'a', 'l', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04522 */ HB_P_LINEOFFSET, 163,	/* 167 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'p', 'o', 'c', 'k', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04549 */ HB_P_LINEOFFSET, 164,	/* 168 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'd', 'e', 's', 'c', 'r', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04577 */ HB_P_LINEOFFSET, 165,	/* 169 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04609 */ HB_P_LINEOFFSET, 166,	/* 170 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '3', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04641 */ HB_P_LINEOFFSET, 167,	/* 171 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '4', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04673 */ HB_P_LINEOFFSET, 168,	/* 172 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'l', 'd', '_', 'n', 'e', 'g', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04701 */ HB_P_LINEOFFSET, 169,	/* 173 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'd', 'e', 's', 'c', 'o', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04729 */ HB_P_LINEOFFSET, 170,	/* 174 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 's', 't', '_', 'p', 'i', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04758 */ HB_P_LINEOFFSET, 171,	/* 175 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 's', 't', '_', 'c', 'o', 'n', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04788 */ HB_P_LINEOFFSET, 172,	/* 176 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'h', 'v', '_', 'c', 'r', 'i', 'p', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHINT, 94, 1,	/* 350 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04820 */ HB_P_LINEOFFSET, 173,	/* 177 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'f', 'o', 'p', '_', 'f', 'o', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04851 */ HB_P_LINEOFFSET, 174,	/* 178 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'f', 'o', 'p', '_', 'd', 'e', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04882 */ HB_P_LINEOFFSET, 175,	/* 179 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'p', 'i', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04908 */ HB_P_LINEOFFSET, 176,	/* 180 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'c', 'o', 'n', 'f', 'i', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 04937 */ HB_P_LINEOFFSET, 177,	/* 181 */
	HB_P_PUSHLOCALNEAR, 2,	/* MARQUIVO */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 04960) */
/* 04954 */ HB_P_LINEOFFSET, 178,	/* 182 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 04960 */ HB_P_LINEOFFSET, 180,	/* 184 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'A', 'C', 'M', 'E', 'R', 'C', '.', 'D', 'B', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 30,	/* 30 (abs: 05011) */
/* 04983 */ HB_P_LINEOFFSET, 181,	/* 185 */
	HB_P_PUSHSYMNEAR, 17,	/* DBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'D', 'B', 'F', 'C', 'D', 'X', 0, 
	HB_P_DOSHORT, 3,
/* 05011 */ HB_P_LINEOFFSET, 184,	/* 188 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'C', 'L', 'I', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05079 */ HB_P_LINEOFFSET, 185,	/* 189 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05086 */ HB_P_LINEOFFSET, 186,	/* 190 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 'm', 'p', 'r', 'e', 's', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05115 */ HB_P_LINEOFFSET, 187,	/* 191 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_ARRAYGEN, 11, 0,	/* 11 */
	HB_P_DOSHORT, 2,
/* 05151 */ HB_P_LINEOFFSET, 188,	/* 192 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'r', 'a', 'z', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05178 */ HB_P_LINEOFFSET, 189,	/* 193 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'n', 'o', 'm', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05204 */ HB_P_LINEOFFSET, 190,	/* 194 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'a', 't', 'a', '_', 'c', 'a', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05234 */ HB_P_LINEOFFSET, 191,	/* 195 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'a', 't', 'a', '_', 'a', 't', 'u', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05264 */ HB_P_LINEOFFSET, 192,	/* 196 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'a', 'd', 'a', 's', 't', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05293 */ HB_P_LINEOFFSET, 193,	/* 197 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	't', 'i', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05318 */ HB_P_LINEOFFSET, 194,	/* 198 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'n', 'a', 's', 'c', 'i', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05350 */ HB_P_LINEOFFSET, 195,	/* 199 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'n', 'u', 'm', '_', 'p', 'e', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05379 */ HB_P_LINEOFFSET, 196,	/* 200 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'u', 'l', 't', '_', 'c', 'o', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05409 */ HB_P_LINEOFFSET, 197,	/* 201 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'v', 'l', 'r', '_', 'c', 'o', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05440 */ HB_P_LINEOFFSET, 198,	/* 202 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'a', 'n', 't', '_', 'p', 'e', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05469 */ HB_P_LINEOFFSET, 199,	/* 203 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'd', 'a', 't', '_', 'a', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05498 */ HB_P_LINEOFFSET, 200,	/* 204 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'v', 'l', 'r', '_', 'a', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05528 */ HB_P_LINEOFFSET, 201,	/* 205 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'n', 'u', 'm', 'p', 'e', 'd', '_', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05558 */ HB_P_LINEOFFSET, 202,	/* 206 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'u', 'l', 't', 'c', 'o', 'm', 'p', '_', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05589 */ HB_P_LINEOFFSET, 203,	/* 207 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'v', 'l', 'r', 'c', 'o', 'm', 'p', '_', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05621 */ HB_P_LINEOFFSET, 204,	/* 208 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	't', 'o', 't', '_', 'c', 'o', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05652 */ HB_P_LINEOFFSET, 205,	/* 209 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'u', 'l', 't', '_', 'o', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05681 */ HB_P_LINEOFFSET, 206,	/* 210 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'e', 'n', 'd', 'e', 'r', 'e', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05711 */ HB_P_LINEOFFSET, 207,	/* 211 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'b', 'a', 'i', 'r', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05739 */ HB_P_LINEOFFSET, 208,	/* 212 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'c', 'o', 'd', 'c', 'i', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05767 */ HB_P_LINEOFFSET, 209,	/* 213 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'c', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05795 */ HB_P_LINEOFFSET, 210,	/* 214 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'u', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05819 */ HB_P_LINEOFFSET, 211,	/* 215 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'e', 'p', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05844 */ HB_P_LINEOFFSET, 212,	/* 216 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'e', 'm', 'a', 'i', 'l', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHINT, 150, 0,	/* 150 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05872 */ HB_P_LINEOFFSET, 213,	/* 217 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'r', 'o', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05898 */ HB_P_LINEOFFSET, 214,	/* 218 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	't', 'e', 'l', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05924 */ HB_P_LINEOFFSET, 215,	/* 219 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	't', 'e', 'l', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05950 */ HB_P_LINEOFFSET, 216,	/* 220 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'f', 'a', 'x', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 05975 */ HB_P_LINEOFFSET, 217,	/* 221 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'g', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06000 */ HB_P_LINEOFFSET, 218,	/* 222 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'i', 'n', 's', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06026 */ HB_P_LINEOFFSET, 219,	/* 223 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'p', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06051 */ HB_P_LINEOFFSET, 220,	/* 224 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'r', 'g', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06075 */ HB_P_LINEOFFSET, 221,	/* 225 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'r', 'g', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06102 */ HB_P_LINEOFFSET, 222,	/* 226 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'd', 'a', 't', '_', 'e', 'm', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06131 */ HB_P_LINEOFFSET, 223,	/* 227 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'm', 'p', 'r', 'a', 'd', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06161 */ HB_P_LINEOFFSET, 224,	/* 228 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'n', 't', 'a', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06190 */ HB_P_LINEOFFSET, 225,	/* 229 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'p', 'r', 'a', 'z', 'o', '_', 'p', 'a', 'g', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06221 */ HB_P_LINEOFFSET, 226,	/* 230 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'b', 'l', 'o', 'q', 'u', 'e', 'i', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06250 */ HB_P_LINEOFFSET, 227,	/* 231 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'p', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06274 */ HB_P_LINEOFFSET, 228,	/* 232 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'a', 'r', 'e', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06300 */ HB_P_LINEOFFSET, 229,	/* 233 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'l', 'i', 'm', 'i', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06329 */ HB_P_LINEOFFSET, 230,	/* 234 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'a', 't', 'a', 'c', '_', 'v', 'a', 'r', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06359 */ HB_P_LINEOFFSET, 231,	/* 235 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'i', 'a', '_', 'a', 't', 'r', 'a', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06391 */ HB_P_LINEOFFSET, 232,	/* 236 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'q', 't', 'd', '_', 'd', 'o', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06421 */ HB_P_LINEOFFSET, 233,	/* 237 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'o', 'b', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06446 */ HB_P_LINEOFFSET, 234,	/* 238 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'n', 'o', 'm', 'e', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06473 */ HB_P_LINEOFFSET, 235,	/* 239 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'a', 't', 'a', '_', 'n', 'a', 's', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06504 */ HB_P_LINEOFFSET, 236,	/* 240 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'n', 'o', 'm', 'e', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06531 */ HB_P_LINEOFFSET, 237,	/* 241 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'a', 't', 'a', '_', 'n', 'a', 's', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06562 */ HB_P_LINEOFFSET, 238,	/* 242 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'n', 'o', 'm', 'e', '3', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06589 */ HB_P_LINEOFFSET, 239,	/* 243 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'a', 't', 'a', '_', 'n', 'a', 's', '3', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06620 */ HB_P_LINEOFFSET, 240,	/* 244 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'n', 'o', 'm', 'e', '4', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06647 */ HB_P_LINEOFFSET, 241,	/* 245 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'a', 't', 'a', '_', 'n', 'a', 's', '4', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06678 */ HB_P_LINEOFFSET, 242,	/* 246 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'n', 'o', 'm', 'e', '5', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06705 */ HB_P_LINEOFFSET, 243,	/* 247 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'a', 't', 'a', '_', 'n', 'a', 's', '5', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06736 */ HB_P_LINEOFFSET, 244,	/* 248 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'e', 's', 'c', 'o', 'n', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06767 */ HB_P_LINEOFFSET, 245,	/* 249 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'i', 'a', '1', '_', 'i', 'n', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06797 */ HB_P_LINEOFFSET, 246,	/* 250 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'i', 'a', '1', '_', 'f', 'i', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06827 */ HB_P_LINEOFFSET, 247,	/* 251 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'v', 'e', 'n', 'c', '1', '_', 'd', 'u', 'p', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06858 */ HB_P_LINEOFFSET, 248,	/* 252 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'i', 'a', '2', '_', 'i', 'n', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06888 */ HB_P_LINEOFFSET, 249,	/* 253 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'i', 'a', '2', '_', 'f', 'i', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06918 */ HB_P_LINEOFFSET, 250,	/* 254 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'v', 'e', 'n', 'c', '2', '_', 'd', 'u', 'p', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06949 */ HB_P_LINEOFFSET, 252,	/* 256 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 'm', 'p', 'r', 'e', '_', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 06978 */ HB_P_LINEOFFSET, 253,	/* 257 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'a', 'r', 'g', 'o', '_', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07007 */ HB_P_LINEOFFSET, 254,	/* 258 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	's', 'a', 'l', 'a', 'r', 'i', 'o', '_', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07039 */ HB_P_LINEOFFSET, 255,	/* 259 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'e', 'n', 'd', '_', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07066 */ HB_P_LINE, 4, 1,	/* 260 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'b', 'a', 'i', 'r', 'r', 'o', '_', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07097 */ HB_P_LINE, 5, 1,	/* 261 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'i', 'd', 'a', 'd', 'e', '_', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07128 */ HB_P_LINE, 6, 1,	/* 262 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'u', 'f', '_', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07155 */ HB_P_LINE, 7, 1,	/* 263 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'c', 'e', 'p', '_', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07183 */ HB_P_LINE, 8, 1,	/* 264 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'f', 'o', 'n', 'e', '_', 'c', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07213 */ HB_P_LINE, 9, 1,	/* 265 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'f', 'o', 'n', 'e', '_', 'c', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07243 */ HB_P_LINE, 10, 1,	/* 266 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'l', 'o', 'j', 'a', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07271 */ HB_P_LINE, 11, 1,	/* 267 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	't', 'e', 'l', '_', 'l', 'o', 'j', 'a', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07303 */ HB_P_LINE, 12, 1,	/* 268 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'd', 'e', 's', 'd', 'e', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07332 */ HB_P_LINE, 13, 1,	/* 269 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'l', 'o', 'j', 'a', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07360 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	't', 'e', 'l', '_', 'l', 'o', 'j', 'a', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07392 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'd', 'e', 's', 'd', 'e', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07421 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'n', 'o', 'm', 'e', '_', 'r', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07451 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'f', 'o', 'n', 'e', '_', 'r', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07481 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'n', 'o', 'm', 'e', '_', 'r', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07511 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'f', 'o', 'n', 'e', '_', 'r', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07541 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'b', 'a', 'n', 'c', 'o', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07570 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'a', 'g', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07596 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'c', 'o', 'n', 't', 'a', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07625 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'b', 'a', 'n', 'c', 'o', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07654 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'a', 'g', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07680 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'c', 'o', 'n', 't', 'a', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07709 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'a', 'r', 't', 'a', 'o', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07739 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'n', 'o', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07765 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'v', 'e', 'n', 'c', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07793 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'a', 'r', 't', 'a', 'o', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07823 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'n', 'o', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07849 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'v', 'e', 'n', 'c', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07877 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'p', 'a', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07903 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'm', 'a', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07929 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 'n', 'd', '_', 'c', 'o', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07959 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'b', 'a', 'i', 'r', 'r', 'o', '_', 'c', 'o', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 07992 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'c', 'i', 'd', 'a', 'd', 'e', '_', 'c', 'o', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08025 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'u', 'f', '_', 'c', 'o', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08054 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'e', 'p', '_', 'c', 'o', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08084 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'f', 'o', 'n', 'e', '_', 'c', 'o', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08115 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'd', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08145 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'd', 'o', 'p', 'e', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08175 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'd', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08205 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'r', 'e', 'g', 'i', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08234 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'a', 't', 'i', 'v', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08266 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'q', 't', 'd', 'v', 'i', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08295 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'u', 'v', 'i', 's', 'i', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08325 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'l', '_', 'o', 'b', 's', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08354 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'l', '_', 'o', 'b', 's', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08383 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'l', '_', 'o', 'b', 's', '3', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08412 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'n', 'a', 't', 'u', 'r', 'a', 'l', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08447 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'l', '_', 'o', 'b', 's', '5', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08476 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'l', '_', 'o', 'b', 's', '6', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08505 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'l', '_', 'o', 'b', 's', '7', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08534 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'l', '_', 'o', 'b', 's', '8', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08563 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'l', '_', 'o', 'b', 's', '9', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08592 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'l', '_', 'o', 'b', 's', '1', '0', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08622 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'l', '_', 'o', 'b', 's', '1', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08652 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'l', '_', 'o', 'b', 's', '1', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08682 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'l', '_', 'o', 'b', 's', '1', '3', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08712 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'l', '_', 'o', 'b', 's', '1', '4', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08742 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'l', '_', 'o', 'b', 's', '1', '5', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08772 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'l', '_', 'o', 'b', 's', '1', '6', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08802 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'l', '_', 'o', 'b', 's', '1', '7', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08832 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'l', '_', 'o', 'b', 's', '1', '8', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08862 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'l', '_', 'o', 'b', 's', '1', '9', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08892 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'l', '_', 'o', 'b', 's', '2', '0', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08922 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'd', '_', 'c', 'o', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08953 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'p', 'o', 'c', 'k', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 08981 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'd', '_', 'p', 'r', 'o', 'f', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09013 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'n', 'u', 'm', 'e', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09042 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'o', 'm', 'p', 'l', 'e', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09076 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'a', 't', 'a', '_', 'b', 'l', 'o', 'q', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09108 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'o', 'b', 's', '_', 'b', 'l', 'o', 'q', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09139 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'r', 'o', 't', 'a', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09167 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'e', 'm', 'a', 'i', 'l', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09196 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'e', 'm', 'a', 'i', 'l', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09225 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'e', 'm', 'a', 'i', 'l', '3', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09254 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'l', 'i', 'm', '_', 'a', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09285 */ HB_P_LINE, 79, 1,	/* 335 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'S', 'A', 'C', 'C', 'L', 'I', '.', 'D', 'B', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 30,	/* 30 (abs: 09336) */
/* 09308 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHSYMNEAR, 17,	/* DBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'A', 'C', 'C', 'L', 'I', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'D', 'B', 'F', 'C', 'D', 'X', 0, 
	HB_P_DOSHORT, 3,
/* 09336 */ HB_P_LINE, 83, 1,	/* 339 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'M', 'O', 'V', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09405 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 09413 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 'm', 'p', 'r', 'e', 's', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09443 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09475 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 'j', 'u', 'n', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09506 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	's', 'e', 'r', 'i', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09534 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'o', 'd', 'e', 'l', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09563 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'n', 'u', 'm', '_', 'p', 'e', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09593 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'p', 'e', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09624 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'a', 't', 'a', '_', 'p', 'e', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09655 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'g', 'r', 'u', '_', 's', 'u', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09685 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'c', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09714 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'p', 'r', 'o', 'd', 'u', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09744 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 's', 'p', 'e', 'c', 'i', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09774 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'd', '_', 'f', 'a', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09804 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'f', 'a', 'b', 'r', 'i', 'c', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09834 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'u', 'n', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09864 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'a', 't', 'a', '_', 's', '_', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09895 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 'n', 't', '_', 's', 'a', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09924 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	's', 'a', 'l', 'd', 'o', '_', 'a', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09957 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'q', 'u', 'a', 'n', 't', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 09987 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'q', 'u', 'a', 'n', 't', 'd', '_', 'a', 'u', 'x', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10021 */ HB_P_LINE, 105, 1,	/* 361 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10054 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10086 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'v', 'l', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10117 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'v', 'l', '_', 'f', 'a', 't', 'u', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10150 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'p', 'r', '_', 'u', 'n', 'i', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10181 */ HB_P_LINE, 110, 1,	/* 366 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'u', 's', 't', '_', 'm', 'e', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10213 */ HB_P_LINE, 111, 1,	/* 367 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'v', 'l', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10244 */ HB_P_LINE, 112, 1,	/* 368 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10275 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'm', 'i', 's', 's', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10307 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10338 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'm', '_', 'o', 'p', 'e', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10370 */ HB_P_LINE, 116, 1,	/* 372 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'o', 'n', 't', 'a', 'd', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10401 */ HB_P_LINE, 117, 1,	/* 373 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'm', '_', 'm', 'o', 'n', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10434 */ HB_P_LINE, 118, 1,	/* 374 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'o', 'n', 't', 'a', 'd', 'o', 'r', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10466 */ HB_P_LINE, 119, 1,	/* 375 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'c', 'o', 'm', '_', 'm', 'o', 'n', 't', 'a', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10500 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10530 */ HB_P_LINE, 121, 1,	/* 377 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10560 */ HB_P_LINE, 122, 1,	/* 378 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'i', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10590 */ HB_P_LINE, 123, 1,	/* 379 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'u', 'f', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10619 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10650 */ HB_P_LINE, 125, 1,	/* 381 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'f', 'o', 'r', 'n', 'e', 'c', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10680 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'c', 'm', '_', 'a', 'l', 'i', 'q', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10712 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'i', 'c', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10739 */ HB_P_LINE, 128, 1,	/* 384 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'i', 'c', 'm', '_', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10768 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'i', 'c', 'm', '_', 's', 'u', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10799 */ HB_P_LINE, 130, 1,	/* 386 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'f', 'o', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10824 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'i', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10849 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'i', 'a', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10876 */ HB_P_LINE, 133, 1,	/* 389 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'i', 'a', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10903 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'i', 'a', '3', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10930 */ HB_P_LINE, 135, 1,	/* 391 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'e', 'm', 'b', 'a', 'r', 'q', 'u', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10961 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 'm', 'i', 's', 's', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 10991 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	's', 'a', 'i', 'd', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11019 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'h', 'e', 'g', 'a', 'd', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11049 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'f', 'r', 'e', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11078 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'e', 'n', 'c', 'a', 'r', 'g', 'o', '_', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11111 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'i', 's', 'p', '_', 'a', 's', 's', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11144 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'd', 'e', 's', 'c', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11173 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'd', 'e', 's', 'c', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11202 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'd', 'e', 's', 'c', '3', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11231 */ HB_P_LINE, 145, 1,	/* 401 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'p', 'i', '_', 'a', 'l', 'i', 'q', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11263 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'i', 'p', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11290 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'p', 'e', 's', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11318 */ HB_P_LINE, 148, 1,	/* 404 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'p', 'e', 's', 'o', '_', 'l', 'i', 'q', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11350 */ HB_P_LINE, 149, 1,	/* 405 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'a', 'l', 'i', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11380 */ HB_P_LINE, 150, 1,	/* 406 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'b', 'e', 'b', 'i', 'd', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11410 */ HB_P_LINE, 151, 1,	/* 407 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	't', 'i', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11437 */ HB_P_LINE, 152, 1,	/* 408 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'i', 's', 'e', 'n', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11465 */ HB_P_LINE, 153, 1,	/* 409 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'i', 't', 't', 'r', 'i', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11495 */ HB_P_LINE, 154, 1,	/* 410 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	't', 'p', '_', 'v', 'e', 'n', 'd', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11526 */ HB_P_LINE, 155, 1,	/* 411 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'c', 'o', 'n', 'd', '_', 'v', 'e', 'z', 'e', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11559 */ HB_P_LINE, 156, 1,	/* 412 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'c', 'o', 'n', 'd', '_', 'i', 'n', 't', 'e', 'v', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11592 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'd', '_', 'n', 'a', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11622 */ HB_P_LINE, 158, 1,	/* 414 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'h', 'a', 's', 's', 'i', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11652 */ HB_P_LINE, 159, 1,	/* 415 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'd', 'e', 's', 'c', 'r', 'i', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11682 */ HB_P_LINE, 160, 1,	/* 416 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'd', 'e', 's', 'c', 'r', 'i', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11712 */ HB_P_LINE, 161, 1,	/* 417 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'd', 'e', 's', 'c', 'r', 'i', '3', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11742 */ HB_P_LINE, 162, 1,	/* 418 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'd', 'e', 's', 'c', 'r', 'i', '4', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11772 */ HB_P_LINE, 163, 1,	/* 419 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'd', 'e', 's', 'c', 'r', 'i', '5', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11802 */ HB_P_LINE, 164, 1,	/* 420 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'c', 'a', 'n', 'c', 'e', 'l', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11830 */ HB_P_LINE, 165, 1,	/* 421 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11857 */ HB_P_LINE, 166, 1,	/* 422 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11884 */ HB_P_LINE, 167, 1,	/* 423 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '3', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11911 */ HB_P_LINE, 168, 1,	/* 424 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '4', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11938 */ HB_P_LINE, 169, 1,	/* 425 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '5', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11965 */ HB_P_LINE, 170, 1,	/* 426 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '6', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 11992 */ HB_P_LINE, 171, 1,	/* 427 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'd', '_', 'n', 'o', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12022 */ HB_P_LINE, 172, 1,	/* 428 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'p', 'r', 'o', 'd', 'u', 'c', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12053 */ HB_P_LINE, 173, 1,	/* 429 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'v', 'l', 'r', '_', 'i', 'c', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12084 */ HB_P_LINE, 174, 1,	/* 430 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'b', 'a', 's', 'e', '_', 'i', 'c', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12116 */ HB_P_LINE, 175, 1,	/* 431 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'e', 'v', 'o', 'l', 'u', 'c', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12147 */ HB_P_LINE, 176, 1,	/* 432 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'c', 'o', 'd', '_', 'p', 'r', 'e', 's', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12182 */ HB_P_LINE, 177, 1,	/* 433 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'n', 'o', 'r', 'm', '_', 'e', 'l', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12212 */ HB_P_LINE, 178, 1,	/* 434 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 'v', 'i', 'd', 'a', 'd', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12244 */ HB_P_LINE, 179, 1,	/* 435 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'h', 'o', 'r', 'a', '_', 'm', 'o', 'v', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12275 */ HB_P_LINE, 180, 1,	/* 436 */
	HB_P_PUSHLOCALNEAR, 2,	/* MARQUIVO */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'm', 'o', 'v', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 12299) */
/* 12292 */ HB_P_LINE, 181, 1,	/* 437 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 12299 */ HB_P_LINE, 183, 1,	/* 439 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'S', 'A', 'C', 'M', 'O', 'V', '.', 'D', 'B', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 30,	/* 30 (abs: 12350) */
/* 12322 */ HB_P_LINE, 184, 1,	/* 440 */
	HB_P_PUSHSYMNEAR, 17,	/* DBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'A', 'C', 'M', 'O', 'V', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'D', 'B', 'F', 'C', 'D', 'X', 0, 
	HB_P_DOSHORT, 3,
/* 12350 */ HB_P_LINE, 187, 1,	/* 443 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 12358 */ HB_P_LINE, 188, 1,	/* 444 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 'm', 'p', 'r', 'e', 's', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12388 */ HB_P_LINE, 189, 1,	/* 445 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	't', 'i', 'p', '_', 's', 'e', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12418 */ HB_P_LINE, 190, 1,	/* 446 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	't', 'i', 'p', 'o', '_', 'n', 'o', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12449 */ HB_P_LINE, 191, 1,	/* 447 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'd', '_', 'n', 'o', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12479 */ HB_P_LINE, 192, 1,	/* 448 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12511 */ HB_P_LINE, 193, 1,	/* 449 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	's', 'e', 'r', 'i', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12539 */ HB_P_LINE, 194, 1,	/* 450 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'o', 'd', 'e', 'l', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12568 */ HB_P_LINE, 195, 1,	/* 451 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'a', 'u', 'x', 'i', 'l', 'i', 'a', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12599 */ HB_P_LINE, 196, 1,	/* 452 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'n', 'u', 'm', '_', 'p', 'e', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12629 */ HB_P_LINE, 197, 1,	/* 453 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 'm', 'i', 's', 's', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12659 */ HB_P_LINE, 198, 1,	/* 454 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 'n', 't', '_', 's', 'a', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12688 */ HB_P_LINE, 199, 1,	/* 455 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12718 */ HB_P_LINE, 200, 1,	/* 456 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12748 */ HB_P_LINE, 201, 1,	/* 457 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'i', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12778 */ HB_P_LINE, 202, 1,	/* 458 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'u', 'f', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12807 */ HB_P_LINE, 203, 1,	/* 459 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'c', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12838 */ HB_P_LINE, 204, 1,	/* 460 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'g', 'c', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12868 */ HB_P_LINE, 205, 1,	/* 461 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'p', 'f', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12898 */ HB_P_LINE, 206, 1,	/* 462 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12929 */ HB_P_LINE, 207, 1,	/* 463 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'v', 'l', '_', 'b', 'a', 's', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12960 */ HB_P_LINE, 208, 1,	/* 464 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'v', 'l', '_', 'i', 'c', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 12990 */ HB_P_LINE, 209, 1,	/* 465 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'v', 'l', '_', 'i', 'c', 'm', 's', 'u', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13022 */ HB_P_LINE, 210, 1,	/* 466 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'v', 'l', 'r', '_', 'i', 'c', 'm', 's', 'u', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13056 */ HB_P_LINE, 211, 1,	/* 467 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'b', 'a', 's', 'e', '_', 'i', 'c', 'm', 's', 'u', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13090 */ HB_P_LINE, 212, 1,	/* 468 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'e', 's', 'c', '_', 'i', 'c', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13122 */ HB_P_LINE, 213, 1,	/* 469 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'a', 'l', 'i', 'q', '_', 'i', 'c', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13154 */ HB_P_LINE, 214, 1,	/* 470 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'v', 'l', '_', 'n', 'o', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13185 */ HB_P_LINE, 215, 1,	/* 471 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'v', 'l', '_', 'p', 'r', 'o', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13216 */ HB_P_LINE, 216, 1,	/* 472 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'p', 'e', 's', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13244 */ HB_P_LINE, 217, 1,	/* 473 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'p', 'e', 's', 'o', '_', 'l', 'i', 'q', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13276 */ HB_P_LINE, 218, 1,	/* 474 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	't', 'i', 'p', '_', 'f', 'r', 'e', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13307 */ HB_P_LINE, 219, 1,	/* 475 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'f', 'r', 'e', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13336 */ HB_P_LINE, 220, 1,	/* 476 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'e', 'n', 'c', 'a', 'r', 'g', 'o', '_', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13369 */ HB_P_LINE, 221, 1,	/* 477 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'i', 's', 'p', '_', 'a', 's', 's', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13402 */ HB_P_LINE, 222, 1,	/* 478 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'i', 'p', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13429 */ HB_P_LINE, 223, 1,	/* 479 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'd', '_', 'n', 'a', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13459 */ HB_P_LINE, 224, 1,	/* 480 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'c', 'a', 'n', 'c', 'e', 'l', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13487 */ HB_P_LINE, 225, 1,	/* 481 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13514 */ HB_P_LINE, 226, 1,	/* 482 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13541 */ HB_P_LINE, 227, 1,	/* 483 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '3', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13568 */ HB_P_LINE, 228, 1,	/* 484 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '4', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13595 */ HB_P_LINE, 229, 1,	/* 485 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '5', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13622 */ HB_P_LINE, 230, 1,	/* 486 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '6', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13649 */ HB_P_LINE, 231, 1,	/* 487 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'n', 'u', 'm', '_', 'c', 'o', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13680 */ HB_P_LINE, 232, 1,	/* 488 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'c', 'h', 'n', 'f', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13708 */ HB_P_LINE, 233, 1,	/* 489 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'c', 'a', 'm', 'n', 'f', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13737 */ HB_P_LINE, 234, 1,	/* 490 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '7', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13764 */ HB_P_LINE, 235, 1,	/* 491 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '8', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13791 */ HB_P_LINE, 236, 1,	/* 492 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '9', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13818 */ HB_P_LINE, 237, 1,	/* 493 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'b', 's', '1', '0', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13846 */ HB_P_LINE, 238, 1,	/* 494 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'b', 's', '1', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13874 */ HB_P_LINE, 239, 1,	/* 495 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'b', 's', '1', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13902 */ HB_P_LINE, 240, 1,	/* 496 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'b', 's', '1', '3', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13930 */ HB_P_LINE, 241, 1,	/* 497 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'b', 's', '1', '4', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13958 */ HB_P_LINE, 242, 1,	/* 498 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'b', 's', '1', '5', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 13986 */ HB_P_LINE, 243, 1,	/* 499 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'b', 's', '1', '6', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14014 */ HB_P_LINE, 244, 1,	/* 500 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'b', 's', '1', '7', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14042 */ HB_P_LINE, 245, 1,	/* 501 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'b', 's', '1', '8', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14070 */ HB_P_LINE, 246, 1,	/* 502 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'b', 's', '1', '9', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14098 */ HB_P_LINE, 247, 1,	/* 503 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'b', 's', '2', '0', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14126 */ HB_P_LINE, 248, 1,	/* 504 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'n', 'o', 'r', 'm', '_', 'e', 'l', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14156 */ HB_P_LINE, 250, 1,	/* 506 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'T', 'O', 'T', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14223 */ HB_P_LINE, 251, 1,	/* 507 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'S', 'A', 'C', 'T', 'O', 'T', 'N', 'T', '.', 'D', 'B', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 32,	/* 32 (abs: 14278) */
/* 14248 */ HB_P_LINE, 252, 1,	/* 508 */
	HB_P_PUSHSYMNEAR, 17,	/* DBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'A', 'C', 'T', 'O', 'T', 'N', 'T', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'D', 'B', 'F', 'C', 'D', 'X', 0, 
	HB_P_DOSHORT, 3,
/* 14278 */ HB_P_LINE, 255, 1,	/* 511 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'C', 'A', 'I', 'X', 'A', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14347 */ HB_P_LINE, 0, 2,	/* 512 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 14355 */ HB_P_LINE, 1, 2,	/* 513 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 'm', 'p', 'r', 'e', 's', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14385 */ HB_P_LINE, 2, 2,	/* 514 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	't', 'i', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14412 */ HB_P_LINE, 3, 2,	/* 515 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'a', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14439 */ HB_P_LINE, 4, 2,	/* 516 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'n', 'o', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14466 */ HB_P_LINE, 5, 2,	/* 517 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'n', 'u', 'm', '_', 'd', 'u', 'p', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14496 */ HB_P_LINE, 6, 2,	/* 518 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'n', 'u', 'm', '_', 'b', 'a', 'n', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14526 */ HB_P_LINE, 7, 2,	/* 519 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'c', 'o', 'd', '_', 'c', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14555 */ HB_P_LINE, 8, 2,	/* 520 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14587 */ HB_P_LINE, 9, 2,	/* 521 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'v', 'e', 'n', 'c', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14615 */ HB_P_LINE, 10, 2,	/* 522 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'v', 'a', 'l', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14644 */ HB_P_LINE, 11, 2,	/* 523 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	't', 'i', 'p', 'o', '_', 'c', 'o', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14676 */ HB_P_LINE, 12, 2,	/* 524 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'd', 'd', 'e', 's', 'p', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14706 */ HB_P_LINE, 13, 2,	/* 525 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'd', 'e', 's', 'c', 'r', 'i', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14736 */ HB_P_LINE, 14, 2,	/* 526 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'd', 'e', 's', 'c', 'r', 'i', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14766 */ HB_P_LINE, 15, 2,	/* 527 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14797 */ HB_P_LINE, 16, 2,	/* 528 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14827 */ HB_P_LINE, 17, 2,	/* 529 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14859 */ HB_P_LINE, 18, 2,	/* 530 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'n', 'g', 'r', 'i', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14888 */ HB_P_LINE, 19, 2,	/* 531 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', '_', 'p', 'g', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14916 */ HB_P_LINE, 20, 2,	/* 532 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'p', 'g', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14940 */ HB_P_LINE, 21, 2,	/* 533 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'h', 'o', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14967 */ HB_P_LINE, 22, 2,	/* 534 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'a', 'u', 't', 'o', 'r', 'i', 'z', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 14997 */ HB_P_LINE, 23, 2,	/* 535 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'v', 'a', 'l', 'o', 'r', '_', 'c', 'o', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15030 */ HB_P_LINE, 24, 2,	/* 536 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'm', 'i', 's', 's', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15062 */ HB_P_LINE, 25, 2,	/* 537 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	't', 'p', '_', 'd', 'e', 's', 'p', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15091 */ HB_P_LINE, 26, 2,	/* 538 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'n', 'u', 'm', '_', 'p', 'd', 'v', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15121 */ HB_P_LINE, 27, 2,	/* 539 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'n', 'u', 'm', '_', 'c', 'u', 'p', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15151 */ HB_P_LINE, 28, 2,	/* 540 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'f', 'e', 'c', 'h', 'a', 'd', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15181 */ HB_P_LINE, 29, 2,	/* 541 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	't', 'p', '_', 'm', 'o', 'v', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15209 */ HB_P_LINE, 30, 2,	/* 542 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	't', 'e', 'r', 'm', 'i', 'n', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15239 */ HB_P_LINE, 31, 2,	/* 543 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', '_', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15264 */ HB_P_LINE, 32, 2,	/* 544 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'o', 'b', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15290 */ HB_P_LINE, 33, 2,	/* 545 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'S', 'A', 'C', 'C', 'A', 'I', 'X', 'A', '.', 'D', 'B', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 32,	/* 32 (abs: 15345) */
/* 15315 */ HB_P_LINE, 34, 2,	/* 546 */
	HB_P_PUSHSYMNEAR, 17,	/* DBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'c', 'a', 'i', 'x', 'a', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'D', 'B', 'F', 'C', 'D', 'X', 0, 
	HB_P_DOSHORT, 3,
/* 15345 */ HB_P_LINE, 37, 2,	/* 549 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'C', 'A', 'R', 'T', 'A', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 15414 */ HB_P_LINE, 38, 2,	/* 550 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 15422 */ HB_P_LINE, 39, 2,	/* 551 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'c', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_ARRAYGEN, 11, 0,	/* 11 */
	HB_P_DOSHORT, 2,
/* 15458 */ HB_P_LINE, 40, 2,	/* 552 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'c', 'a', 'r', 't', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15487 */ HB_P_LINE, 41, 2,	/* 553 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	's', 'i', 'g', 'l', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15515 */ HB_P_LINE, 42, 2,	/* 554 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'r', 'a', 'z', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15543 */ HB_P_LINE, 43, 2,	/* 555 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'e', 's', 'c', 'o', 'n', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15575 */ HB_P_LINE, 44, 2,	/* 556 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15606 */ HB_P_LINE, 45, 2,	/* 557 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	't', 'i', 'p', 'o', '_', 'c', 'o', 'n', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15639 */ HB_P_LINE, 46, 2,	/* 558 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	't', 'i', 'p', 'o', '_', 'v', 'e', 'n', 'd', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15671 */ HB_P_LINE, 47, 2,	/* 559 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	't', 'e', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15696 */ HB_P_LINE, 48, 2,	/* 560 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'S', 'A', 'C', 'C', 'A', 'R', 'T', 'A', '.', 'D', 'B', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 32,	/* 32 (abs: 15751) */
/* 15721 */ HB_P_LINE, 49, 2,	/* 561 */
	HB_P_PUSHSYMNEAR, 17,	/* DBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'A', 'C', 'C', 'A', 'R', 'T', 'A', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'D', 'B', 'F', 'C', 'D', 'X', 0, 
	HB_P_DOSHORT, 3,
/* 15751 */ HB_P_LINE, 52, 2,	/* 564 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 15759 */ HB_P_LINE, 53, 2,	/* 565 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 'm', 'p', 'r', 'e', 's', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15789 */ HB_P_LINE, 54, 2,	/* 566 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	't', 'i', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15816 */ HB_P_LINE, 55, 2,	/* 567 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'n', 'u', 'm', 'e', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15845 */ HB_P_LINE, 56, 2,	/* 568 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15877 */ HB_P_LINE, 57, 2,	/* 569 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'v', 'a', 'l', 'o', 'r', '_', 'd', 'u', 'p', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15910 */ HB_P_LINE, 58, 2,	/* 570 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	't', 'i', 'p', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15939 */ HB_P_LINE, 59, 2,	/* 571 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'f', 'o', 'r', 'n', 'e', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15968 */ HB_P_LINE, 60, 2,	/* 572 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 15998 */ HB_P_LINE, 61, 2,	/* 573 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', '_', 'c', 'p', 'f', 'c', 'n', 'p', 'j', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16030 */ HB_P_LINE, 62, 2,	/* 574 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 'm', 'i', 's', 's', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16060 */ HB_P_LINE, 63, 2,	/* 575 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'v', 'e', 'n', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16087 */ HB_P_LINE, 64, 2,	/* 576 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'v', 'e', 'n', 'c', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16115 */ HB_P_LINE, 65, 2,	/* 577 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'd', 'a', 't', 'p', 'a', 'g', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16144 */ HB_P_LINE, 66, 2,	/* 578 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'd', 'a', 't', 't', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16173 */ HB_P_LINE, 67, 2,	/* 579 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'd', 'a', 't', 'o', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16202 */ HB_P_LINE, 68, 2,	/* 580 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'b', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16229 */ HB_P_LINE, 69, 2,	/* 581 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'a', 'g', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16259 */ HB_P_LINE, 70, 2,	/* 582 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', '_', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16285 */ HB_P_LINE, 71, 2,	/* 583 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'v', 'a', 'l', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16314 */ HB_P_LINE, 72, 2,	/* 584 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'v', 'l', 'p', 'a', 'g', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16344 */ HB_P_LINE, 73, 2,	/* 585 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'v', 'l', '_', 'i', 'p', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16374 */ HB_P_LINE, 74, 2,	/* 586 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'e', 's', 'c', 'o', 'n', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16406 */ HB_P_LINE, 75, 2,	/* 587 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'j', 'u', 'r', 'o', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16435 */ HB_P_LINE, 76, 2,	/* 588 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'j', 'u', 'r', 'o', 's', '_', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16466 */ HB_P_LINE, 77, 2,	/* 589 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'p', 'a', 'g', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16492 */ HB_P_LINE, 78, 2,	/* 590 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	't', 'i', 'p', '_', 'p', 'g', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16521 */ HB_P_LINE, 79, 2,	/* 591 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'o', 'v', '_', 'c', 'x', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16549 */ HB_P_LINE, 80, 2,	/* 592 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'c', 'o', 'n', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16576 */ HB_P_LINE, 81, 2,	/* 593 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'c', 'h', 'e', 'q', 'u', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16605 */ HB_P_LINE, 82, 2,	/* 594 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16636 */ HB_P_LINE, 83, 2,	/* 595 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'n', 'u', 'm', '_', 'p', 'e', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16666 */ HB_P_LINE, 84, 2,	/* 596 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'm', 'i', 's', 's', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16698 */ HB_P_LINE, 85, 2,	/* 597 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'm', 'i', 's', 's', 'a', 'o', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16731 */ HB_P_LINE, 86, 2,	/* 598 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'v', 'l', 'r', '_', 't', 'a', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16762 */ HB_P_LINE, 87, 2,	/* 599 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'o', 'p', 'e', 'r', 'a', 'd', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16793 */ HB_P_LINE, 88, 2,	/* 600 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'a', 'l', 't', '_', 'o', 'p', 'e', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16824 */ HB_P_LINE, 89, 2,	/* 601 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'o', 'c', '_', 't', 'r', 'a', 'n', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16855 */ HB_P_LINE, 90, 2,	/* 602 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'a', 't', '_', 't', 'r', 'a', 'n', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16886 */ HB_P_LINE, 91, 2,	/* 603 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16917 */ HB_P_LINE, 92, 2,	/* 604 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'f', 'o', 'r', 'n', '_', 'd', 'e', 's', 'p', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16949 */ HB_P_LINE, 93, 2,	/* 605 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 16981 */ HB_P_LINE, 94, 2,	/* 606 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'o', 'p', 'e', 'r', '_', 'p', 'a', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17013 */ HB_P_LINE, 95, 2,	/* 607 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'a', 't', 'a', '_', 'f', 'u', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17045 */ HB_P_LINE, 96, 2,	/* 608 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'o', 't', 'i', 'v', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17074 */ HB_P_LINE, 97, 2,	/* 609 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'd', '_', 'i', 'n', 'c', 'l', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17105 */ HB_P_LINE, 98, 2,	/* 610 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'o', 'b', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17131 */ HB_P_LINE, 99, 2,	/* 611 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17158 */ HB_P_LINE, 100, 2,	/* 612 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'r', 'r', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17189 */ HB_P_LINE, 101, 2,	/* 613 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'p', 'f', 'c', 'n', 'p', 'j', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17219 */ HB_P_LINE, 102, 2,	/* 614 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'a', 't', 'c', 'o', 'b', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17250 */ HB_P_LINE, 103, 2,	/* 615 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'd', 'a', 't', 'p', 'r', 'e', 'v', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17280 */ HB_P_LINE, 104, 2,	/* 616 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'd', 'a', 't', 'p', 'r', 'o', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17310 */ HB_P_LINE, 105, 2,	/* 617 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'o', 'p', 'e', 'p', 'r', 'o', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17340 */ HB_P_LINE, 106, 2,	/* 618 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'o', 'p', 'e', '_', 'v', 'e', 'n', 'd', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17372 */ HB_P_LINE, 107, 2,	/* 619 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'o', 'p', 'e', '_', 'c', 'o', 'm', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17404 */ HB_P_LINE, 108, 2,	/* 620 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'p', 'g', '_', 'c', 'o', 'm', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17434 */ HB_P_LINE, 109, 2,	/* 621 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'o', 'p', 'e', '_', 'p', 'g', 'c', 'o', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17466 */ HB_P_LINE, 110, 2,	/* 622 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'l', 'i', 'n', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17493 */ HB_P_LINE, 111, 2,	/* 623 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'l', 'i', 'n', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17520 */ HB_P_LINE, 112, 2,	/* 624 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'l', 'i', 'n', '3', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17547 */ HB_P_LINE, 113, 2,	/* 625 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'l', 'i', 'n', '4', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17574 */ HB_P_LINE, 114, 2,	/* 626 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'l', 'i', 'n', '5', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17601 */ HB_P_LINE, 115, 2,	/* 627 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'h', 'o', 'r', 'a', '_', 'b', 'x', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17631 */ HB_P_LINE, 116, 2,	/* 628 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'm', '_', 's', 'e', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17660 */ HB_P_LINE, 117, 2,	/* 629 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'D', 'U', 'P', 'R', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17729 */ HB_P_LINE, 118, 2,	/* 630 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'A', 'C', 'D', 'U', 'P', 'R', '.', 'D', 'B', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 31,	/* 31 (abs: 17782) */
/* 17753 */ HB_P_LINE, 119, 2,	/* 631 */
	HB_P_PUSHSYMNEAR, 17,	/* DBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'S', 'A', 'C', 'D', 'U', 'P', 'R', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'D', 'B', 'F', 'C', 'D', 'X', 0, 
	HB_P_DOSHORT, 3,
/* 17782 */ HB_P_LINE, 122, 2,	/* 634 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'M', 'O', 'V', 'N', 'T', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17851 */ HB_P_LINE, 123, 2,	/* 635 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 17859 */ HB_P_LINE, 124, 2,	/* 636 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 'm', 'p', 'r', 'e', 's', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17889 */ HB_P_LINE, 125, 2,	/* 637 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	't', 'i', 'p', 'o', '_', 'n', 'o', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17920 */ HB_P_LINE, 126, 2,	/* 638 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17952 */ HB_P_LINE, 127, 2,	/* 639 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 'j', 'u', 'n', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 17983 */ HB_P_LINE, 128, 2,	/* 640 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	's', 'e', 'r', 'i', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18011 */ HB_P_LINE, 129, 2,	/* 641 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'o', 'd', 'e', 'l', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18040 */ HB_P_LINE, 130, 2,	/* 642 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'n', 'u', 'm', '_', 'e', 'c', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18070 */ HB_P_LINE, 131, 2,	/* 643 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'n', 'u', 'm', '_', 'p', 'e', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18100 */ HB_P_LINE, 132, 2,	/* 644 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 'm', 'i', 's', 's', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18130 */ HB_P_LINE, 133, 2,	/* 645 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'g', 'r', 'u', '_', 's', 'u', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18160 */ HB_P_LINE, 134, 2,	/* 646 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'c', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18189 */ HB_P_LINE, 135, 2,	/* 647 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'p', 'r', 'o', 'd', 'u', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18219 */ HB_P_LINE, 136, 2,	/* 648 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 's', 'p', 'e', 'c', 'i', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18249 */ HB_P_LINE, 137, 2,	/* 649 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'd', '_', 'f', 'a', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18279 */ HB_P_LINE, 138, 2,	/* 650 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'f', 'a', 'b', 'r', 'i', 'c', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18309 */ HB_P_LINE, 139, 2,	/* 651 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'u', 'n', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18339 */ HB_P_LINE, 140, 2,	/* 652 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'a', 't', 'a', '_', 's', '_', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18370 */ HB_P_LINE, 141, 2,	/* 653 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'e', 'n', 't', '_', 's', 'a', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18399 */ HB_P_LINE, 142, 2,	/* 654 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'q', 'u', 'a', 'n', 't', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18429 */ HB_P_LINE, 143, 2,	/* 655 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18461 */ HB_P_LINE, 144, 2,	/* 656 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'v', 'l', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18492 */ HB_P_LINE, 145, 2,	/* 657 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'v', 'l', '_', 'f', 'a', 't', 'u', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18525 */ HB_P_LINE, 146, 2,	/* 658 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'p', 'r', '_', 'u', 'n', 'i', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18556 */ HB_P_LINE, 147, 2,	/* 659 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'u', 's', 't', '_', 'm', 'e', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18588 */ HB_P_LINE, 148, 2,	/* 660 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'v', 'l', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18619 */ HB_P_LINE, 149, 2,	/* 661 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18650 */ HB_P_LINE, 150, 2,	/* 662 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18681 */ HB_P_LINE, 151, 2,	/* 663 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'm', 'i', 's', 's', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18713 */ HB_P_LINE, 152, 2,	/* 664 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'o', 'n', 't', 'a', 'd', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18744 */ HB_P_LINE, 153, 2,	/* 665 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'o', 'n', 't', 'a', 'd', 'o', 'r', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18776 */ HB_P_LINE, 154, 2,	/* 666 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18806 */ HB_P_LINE, 155, 2,	/* 667 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18836 */ HB_P_LINE, 156, 2,	/* 668 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'i', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18866 */ HB_P_LINE, 157, 2,	/* 669 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'u', 'f', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18895 */ HB_P_LINE, 158, 2,	/* 670 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'c', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18926 */ HB_P_LINE, 159, 2,	/* 671 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'g', 'c', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18956 */ HB_P_LINE, 160, 2,	/* 672 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'p', 'f', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 18986 */ HB_P_LINE, 161, 2,	/* 673 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'i', 'c', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19013 */ HB_P_LINE, 162, 2,	/* 674 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'i', 'c', 'm', '_', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19042 */ HB_P_LINE, 163, 2,	/* 675 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'i', 'c', 'm', '_', 's', 'u', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19073 */ HB_P_LINE, 164, 2,	/* 676 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'v', 'l', 'r', '_', 'i', 'c', 'm', 's', 'u', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19107 */ HB_P_LINE, 165, 2,	/* 677 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'b', 'a', 's', 'e', '_', 'i', 'c', 'm', 's', 'u', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19141 */ HB_P_LINE, 166, 2,	/* 678 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'e', 's', 'c', '_', 'i', 'c', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19173 */ HB_P_LINE, 167, 2,	/* 679 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'i', 'a', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19200 */ HB_P_LINE, 168, 2,	/* 680 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'i', 'a', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19227 */ HB_P_LINE, 169, 2,	/* 681 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'i', 'a', '3', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19254 */ HB_P_LINE, 170, 2,	/* 682 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'f', 'r', 'e', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19283 */ HB_P_LINE, 171, 2,	/* 683 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'e', 'n', 'c', 'a', 'r', 'g', 'o', '_', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19316 */ HB_P_LINE, 172, 2,	/* 684 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'd', 'i', 's', 'p', '_', 'a', 's', 's', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19349 */ HB_P_LINE, 173, 2,	/* 685 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'd', 'e', 's', 'c', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19378 */ HB_P_LINE, 174, 2,	/* 686 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'd', 'e', 's', 'c', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19407 */ HB_P_LINE, 175, 2,	/* 687 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'd', 'e', 's', 'c', '3', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19436 */ HB_P_LINE, 176, 2,	/* 688 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'p', 'i', '_', 'a', 'l', 'i', 'q', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19468 */ HB_P_LINE, 177, 2,	/* 689 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'i', 'p', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19495 */ HB_P_LINE, 178, 2,	/* 690 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'p', 'e', 's', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19523 */ HB_P_LINE, 179, 2,	/* 691 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'p', 'e', 's', 'o', '_', 'l', 'i', 'q', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19555 */ HB_P_LINE, 180, 2,	/* 692 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'a', 'l', 'i', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19585 */ HB_P_LINE, 181, 2,	/* 693 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'b', 'e', 'b', 'i', 'd', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19615 */ HB_P_LINE, 182, 2,	/* 694 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	't', 'i', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19642 */ HB_P_LINE, 183, 2,	/* 695 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'i', 's', 'e', 'n', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19670 */ HB_P_LINE, 184, 2,	/* 696 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'i', 't', 't', 'r', 'i', 'b', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19700 */ HB_P_LINE, 185, 2,	/* 697 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	't', 'p', '_', 'v', 'e', 'n', 'd', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19731 */ HB_P_LINE, 186, 2,	/* 698 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'c', 'o', 'n', 'd', '_', 'v', 'e', 'z', 'e', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19764 */ HB_P_LINE, 187, 2,	/* 699 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'c', 'o', 'n', 'd', '_', 'i', 'n', 't', 'e', 'v', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19797 */ HB_P_LINE, 188, 2,	/* 700 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'd', '_', 'n', 'a', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19827 */ HB_P_LINE, 189, 2,	/* 701 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'h', 'a', 's', 's', 'i', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19857 */ HB_P_LINE, 190, 2,	/* 702 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'd', 'e', 's', 'c', 'r', 'i', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19887 */ HB_P_LINE, 191, 2,	/* 703 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'd', 'e', 's', 'c', 'r', 'i', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19917 */ HB_P_LINE, 192, 2,	/* 704 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'd', 'e', 's', 'c', 'r', 'i', '3', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19947 */ HB_P_LINE, 193, 2,	/* 705 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'd', 'e', 's', 'c', 'r', 'i', '4', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 19977 */ HB_P_LINE, 194, 2,	/* 706 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'd', 'e', 's', 'c', 'r', 'i', '5', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20007 */ HB_P_LINE, 195, 2,	/* 707 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'c', 'a', 'n', 'c', 'e', 'l', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20035 */ HB_P_LINE, 196, 2,	/* 708 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20062 */ HB_P_LINE, 197, 2,	/* 709 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '2', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20089 */ HB_P_LINE, 198, 2,	/* 710 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '3', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20116 */ HB_P_LINE, 199, 2,	/* 711 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '4', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20143 */ HB_P_LINE, 200, 2,	/* 712 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '5', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20170 */ HB_P_LINE, 201, 2,	/* 713 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'b', 's', '6', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20197 */ HB_P_LINE, 202, 2,	/* 714 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'd', '_', 'n', 'o', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20227 */ HB_P_LINE, 203, 2,	/* 715 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'v', 'l', 'r', '_', 'i', 'c', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20258 */ HB_P_LINE, 204, 2,	/* 716 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'b', 'a', 's', 'e', '_', 'i', 'c', 'm', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20290 */ HB_P_LINE, 205, 2,	/* 717 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'n', 'o', 'r', 'm', '_', 'e', 'l', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20320 */ HB_P_LINE, 206, 2,	/* 718 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'h', 'o', 'r', 'a', '_', 'm', 'o', 'v', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20351 */ HB_P_LINE, 207, 2,	/* 719 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'S', 'A', 'C', 'M', 'O', 'V', 'N', 'T', '.', 'D', 'B', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 32,	/* 32 (abs: 20406) */
/* 20376 */ HB_P_LINE, 208, 2,	/* 720 */
	HB_P_PUSHSYMNEAR, 17,	/* DBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'A', 'C', 'M', 'O', 'V', 'N', 'T', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'D', 'B', 'F', 'C', 'D', 'X', 0, 
	HB_P_DOSHORT, 3,
/* 20406 */ HB_P_LINE, 211, 2,	/* 723 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 20414 */ HB_P_LINE, 212, 2,	/* 724 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20444 */ HB_P_LINE, 213, 2,	/* 725 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'n', 'j', 'u', 'g', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20474 */ HB_P_LINE, 214, 2,	/* 726 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 'j', '_', 'n', 'a', 's', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20506 */ HB_P_LINE, 215, 2,	/* 727 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 'j', '_', 'c', 'p', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20537 */ HB_P_LINE, 216, 2,	/* 728 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'n', 'j', '_', 'r', 'g', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20567 */ HB_P_LINE, 217, 2,	/* 729 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'c', 'o', 'n', 'j', '_', 'e', 'm', 'p', 'r', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20600 */ HB_P_LINE, 218, 2,	/* 730 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'c', 'o', 'n', 'j', '_', 'c', 'a', 'r', 'g', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20633 */ HB_P_LINE, 219, 2,	/* 731 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'c', 'o', 'n', 'j', '_', 's', 'a', 'l', 'a', 'r', 'i', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20669 */ HB_P_LINE, 220, 2,	/* 732 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 'j', '_', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20700 */ HB_P_LINE, 221, 2,	/* 733 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'o', 'n', 'j', '_', 'b', 'a', 'i', 'r', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20734 */ HB_P_LINE, 222, 2,	/* 734 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'o', 'n', 'j', '_', 'c', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20768 */ HB_P_LINE, 223, 2,	/* 735 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'o', 'n', 'j', '_', 'u', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20798 */ HB_P_LINE, 224, 2,	/* 736 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 'j', '_', 'c', 'e', 'p', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20829 */ HB_P_LINE, 225, 2,	/* 737 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 'j', '_', 'f', 'o', 'n', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20861 */ HB_P_LINE, 226, 2,	/* 738 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 'j', '_', 'o', 'b', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20892 */ HB_P_LINE, 228, 2,	/* 740 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'a', 'v', 'a', 'l', 'i', 's', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20923 */ HB_P_LINE, 229, 2,	/* 741 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'a', 'v', 'a', 'l', '_', 's', 'e', 'x', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20954 */ HB_P_LINE, 230, 2,	/* 742 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'a', 'v', 'a', 'l', '_', 'c', 'i', 'v', 'i', 'l', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 20986 */ HB_P_LINE, 231, 2,	/* 743 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'a', 'v', 'a', 'l', '_', 'n', 'a', 's', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21018 */ HB_P_LINE, 232, 2,	/* 744 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'a', 'v', 'a', 'l', '_', 'c', 'p', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21049 */ HB_P_LINE, 233, 2,	/* 745 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'a', 'v', 'a', 'l', '_', 'r', 'g', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21079 */ HB_P_LINE, 234, 2,	/* 746 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'a', 'v', 'a', 'l', '_', 'e', 'm', 'p', 'r', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21112 */ HB_P_LINE, 235, 2,	/* 747 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'a', 'v', 'a', 'l', '_', 'c', 'a', 'r', 'g', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21145 */ HB_P_LINE, 236, 2,	/* 748 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'a', 'v', 'a', 'l', '_', 's', 'a', 'l', 'a', 'r', 'i', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21181 */ HB_P_LINE, 237, 2,	/* 749 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'a', 'v', 'a', 'l', '_', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21212 */ HB_P_LINE, 238, 2,	/* 750 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'a', 'v', 'a', 'l', '_', 'b', 'a', 'i', 'r', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21246 */ HB_P_LINE, 239, 2,	/* 751 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'a', 'v', 'a', 'l', '_', 'c', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21280 */ HB_P_LINE, 240, 2,	/* 752 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'a', 'v', 'a', 'l', '_', 'u', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21310 */ HB_P_LINE, 241, 2,	/* 753 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'a', 'v', 'a', 'l', '_', 'c', 'e', 'p', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21341 */ HB_P_LINE, 242, 2,	/* 754 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'a', 'v', 'a', 'l', '_', 'f', 'o', 'n', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21373 */ HB_P_LINE, 243, 2,	/* 755 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'a', 'v', 'a', 'l', '_', 'o', 'b', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21404 */ HB_P_LINE, 244, 2,	/* 756 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'S', 'A', 'C', 'C', 'L', 'I', 'A', 'U', 'X', '.', 'D', 'B', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 33,	/* 33 (abs: 21461) */
/* 21430 */ HB_P_LINE, 245, 2,	/* 757 */
	HB_P_PUSHSYMNEAR, 17,	/* DBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'S', 'A', 'C', 'C', 'L', 'I', 'A', 'U', 'X', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'D', 'B', 'F', 'C', 'D', 'X', 0, 
	HB_P_DOSHORT, 3,
/* 21461 */ HB_P_LINE, 248, 2,	/* 760 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 21469 */ HB_P_LINE, 249, 2,	/* 761 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'N', 'U', 'M', 'E', 'R', 'O', '_', 'F', 'A', 'B', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21504 */ HB_P_LINE, 250, 2,	/* 762 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'M', 'F', '_', 'A', 'D', 'I', 'C', 'I', 'O', 'N', 'A', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21538 */ HB_P_LINE, 251, 2,	/* 763 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'I', 'P', 'O', '_', 'E', 'C', 'F', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21573 */ HB_P_LINE, 252, 2,	/* 764 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'M', 'A', 'R', 'C', 'A', '_', 'E', 'C', 'F', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21608 */ HB_P_LINE, 253, 2,	/* 765 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'M', 'O', 'D', 'E', 'L', 'O', '_', 'E', 'C', 'F', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21643 */ HB_P_LINE, 254, 2,	/* 766 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'V', 'E', 'R', 'S', 'A', 'O', '_', 'S', 'B', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21678 */ HB_P_LINE, 255, 2,	/* 767 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'A', 'T', 'A', '_', 'I', 'N', 'S', 'T', 'S', 'B', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21713 */ HB_P_LINE, 0, 3,	/* 768 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'H', 'O', 'R', 'A', '_', 'I', 'N', 'S', 'T', 'S', 'B', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21748 */ HB_P_LINE, 1, 3,	/* 769 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'N', 'U', 'M', '_', 'S', 'E', 'Q', '_', 'E', 'C', 'F', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21783 */ HB_P_LINE, 2, 3,	/* 770 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'C', 'N', 'P', 'J', '_', 'U', 'S', 'U', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21814 */ HB_P_LINE, 3, 3,	/* 771 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'I', 'N', 'S', 'C', '_', 'U', 'S', 'U', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21845 */ HB_P_LINE, 4, 3,	/* 772 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'N', 'P', 'J', '_', 'D', 'E', 'S', 'E', 'N', 'V', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21879 */ HB_P_LINE, 5, 3,	/* 773 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'I', 'N', 'S', 'C', '_', 'M', 'U', 'N', 'D', 'E', 'S', 'E', 'N', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21915 */ HB_P_LINE, 6, 3,	/* 774 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'E', 'N', 'O', 'M', 'I', '_', 'D', 'E', 'S', 'E', 'N', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21950 */ HB_P_LINE, 7, 3,	/* 775 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'N', 'O', 'M', 'E', '_', 'P', 'A', 'F', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 21981 */ HB_P_LINE, 8, 3,	/* 776 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'E', 'R', 'S', 'A', 'O', '_', 'P', 'A', 'F', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22014 */ HB_P_LINE, 9, 3,	/* 777 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'O', 'D', '_', 'M', 'D', '5', '_', 'P', 'A', 'F', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22048 */ HB_P_LINE, 10, 3,	/* 778 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'A', 'T', 'A', '_', 'I', 'N', 'I', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22079 */ HB_P_LINE, 11, 3,	/* 779 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'D', 'A', 'T', 'A', '_', 'F', 'I', 'N', 'A', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22112 */ HB_P_LINE, 12, 3,	/* 780 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'V', 'E', 'R', 'S', 'A', 'O', '_', 'E', 'R', '_', 'P', 'A', 'F', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22148 */ HB_P_LINE, 13, 3,	/* 781 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'C', 'H', 'V', '_', 'C', 'R', 'I', 'P', 'T', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHINT, 232, 3,	/* 1000 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22181 */ HB_P_LINE, 14, 3,	/* 782 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'I', 'N', 'S', 'C', '_', 'E', 'S', 'T', 'D', 'E', 'S', 'E', 'N', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22217 */ HB_P_LINE, 15, 3,	/* 783 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'R', '1', '.', 'D', 'B', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 26,	/* 26 (abs: 22260) */
/* 22236 */ HB_P_LINE, 16, 3,	/* 784 */
	HB_P_PUSHSYMNEAR, 17,	/* DBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'R', '1', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'D', 'B', 'F', 'C', 'D', 'X', 0, 
	HB_P_DOSHORT, 3,
/* 22260 */ HB_P_LINE, 19, 3,	/* 787 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 22268 */ HB_P_LINE, 20, 3,	/* 788 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'N', 'U', 'M', 'E', 'R', 'O', '_', 'F', 'A', 'B', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22301 */ HB_P_LINE, 21, 3,	/* 789 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'M', 'F', '_', 'A', 'D', 'I', 'C', 'I', 'O', 'N', 'A', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22335 */ HB_P_LINE, 22, 3,	/* 790 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'M', 'O', 'D', 'E', 'L', 'O', '_', 'E', 'C', 'F', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22368 */ HB_P_LINE, 23, 3,	/* 791 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'N', 'U', 'M', 'E', 'R', 'O', '_', 'U', 'S', 'U', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22401 */ HB_P_LINE, 24, 3,	/* 792 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'R', 'Z', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22427 */ HB_P_LINE, 25, 3,	/* 793 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'O', 'O', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22453 */ HB_P_LINE, 26, 3,	/* 794 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'R', 'O', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22479 */ HB_P_LINE, 27, 3,	/* 795 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'A', 'T', 'A', '_', 'E', 'M', 'I', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22510 */ HB_P_LINE, 28, 3,	/* 796 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'H', 'O', 'R', 'A', '_', 'E', 'M', 'I', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22541 */ HB_P_LINE, 29, 3,	/* 797 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'V', 'E', 'N', 'D', 'A', '_', 'B', 'R', 'U', 'T', 'A', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22575 */ HB_P_LINE, 30, 3,	/* 798 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'A', 'R', 'A', 'M', 'E', 'T', 'R', 'O', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22606 */ HB_P_LINE, 31, 3,	/* 799 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'O', 'O', '_', 'I', 'N', 'I', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22636 */ HB_P_LINE, 32, 3,	/* 800 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'O', 'O', '_', 'F', 'I', 'M', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22666 */ HB_P_LINE, 33, 3,	/* 801 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'A', 'T', 'A', '_', 'M', 'O', 'V', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22697 */ HB_P_LINE, 34, 3,	/* 802 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'C', 'H', 'V', '_', 'C', 'R', 'I', 'P', 'T', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHINT, 94, 1,	/* 350 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22730 */ HB_P_LINE, 35, 3,	/* 803 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'R', '2', '.', 'D', 'B', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 26,	/* 26 (abs: 22773) */
/* 22749 */ HB_P_LINE, 36, 3,	/* 804 */
	HB_P_PUSHSYMNEAR, 17,	/* DBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'R', '2', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'D', 'B', 'F', 'C', 'D', 'X', 0, 
	HB_P_DOSHORT, 3,
/* 22773 */ HB_P_LINE, 39, 3,	/* 807 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 22781 */ HB_P_LINE, 40, 3,	/* 808 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'N', 'U', 'M', 'E', 'R', 'O', '_', 'F', 'A', 'B', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22814 */ HB_P_LINE, 41, 3,	/* 809 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'M', 'F', '_', 'A', 'D', 'I', 'C', 'I', 'O', 'N', 'A', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22848 */ HB_P_LINE, 42, 3,	/* 810 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'M', 'O', 'D', 'E', 'L', 'O', '_', 'E', 'C', 'F', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22881 */ HB_P_LINE, 43, 3,	/* 811 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'N', 'U', 'M', 'E', 'R', 'O', '_', 'U', 'S', 'U', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22914 */ HB_P_LINE, 44, 3,	/* 812 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'R', 'Z', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22940 */ HB_P_LINE, 45, 3,	/* 813 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'T', 'O', 'T', 'A', 'L', '_', 'P', 'A', 'R', 'C', 'I', 'A', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 22976 */ HB_P_LINE, 46, 3,	/* 814 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'V', 'A', 'L', 'O', 'R', '_', 'A', 'C', 'U', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23008 */ HB_P_LINE, 47, 3,	/* 815 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'A', 'T', 'A', '_', 'M', 'O', 'V', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23039 */ HB_P_LINE, 48, 3,	/* 816 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'C', 'H', 'V', '_', 'C', 'R', 'I', 'P', 'T', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHINT, 94, 1,	/* 350 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23072 */ HB_P_LINE, 49, 3,	/* 817 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'R', '3', '.', 'D', 'B', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 26,	/* 26 (abs: 23115) */
/* 23091 */ HB_P_LINE, 50, 3,	/* 818 */
	HB_P_PUSHSYMNEAR, 17,	/* DBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'R', '3', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'D', 'B', 'F', 'C', 'D', 'X', 0, 
	HB_P_DOSHORT, 3,
/* 23115 */ HB_P_LINE, 53, 3,	/* 821 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 23123 */ HB_P_LINE, 54, 3,	/* 822 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'N', 'U', 'M', 'E', 'R', 'O', '_', 'F', 'A', 'B', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23164 */ HB_P_LINE, 55, 3,	/* 823 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'M', 'F', '_', 'A', 'D', 'I', 'C', 'I', 'O', 'N', 'A', 'L', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23204 */ HB_P_LINE, 56, 3,	/* 824 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'M', 'O', 'D', 'E', 'L', 'O', '_', 'E', 'C', 'F', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23245 */ HB_P_LINE, 57, 3,	/* 825 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'N', 'U', 'M', 'E', 'R', 'O', '_', 'U', 'S', 'U', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23286 */ HB_P_LINE, 58, 3,	/* 826 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'C', 'F', '_', 'C', 'V', 'C', '_', 'C', 'B', 'P', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23327 */ HB_P_LINE, 59, 3,	/* 827 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'O', 'O', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23368 */ HB_P_LINE, 60, 3,	/* 828 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'D', 'A', 'T', 'A', '_', 'I', 'N', 'I', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23409 */ HB_P_LINE, 61, 3,	/* 829 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'S', 'U', 'B', '_', 'T', 'O', 'T', 'A', 'L', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23450 */ HB_P_LINE, 62, 3,	/* 830 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'D', 'E', 'S', 'C', 'O', 'N', 'T', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23491 */ HB_P_LINE, 63, 3,	/* 831 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'I', 'N', 'D', '_', 'D', 'E', 'S', 'C', 'O', 'N', 'T', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23531 */ HB_P_LINE, 64, 3,	/* 832 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'A', 'C', 'R', 'E', 'S', '_', 'S', 'U', 'B', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23572 */ HB_P_LINE, 65, 3,	/* 833 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'I', 'N', 'D', '_', 'A', 'C', 'R', 'E', 'S', 'C', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23612 */ HB_P_LINE, 66, 3,	/* 834 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'V', 'L', 'R', '_', 'L', 'I', 'Q', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23653 */ HB_P_LINE, 67, 3,	/* 835 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'I', 'N', 'D', '_', 'C', 'A', 'N', 'C', 'E', 'L', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23693 */ HB_P_LINE, 68, 3,	/* 836 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'A', 'N', 'C', 'E', 'L', '_', 'A', 'C', 'R', 'E', 'S', 'C', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23734 */ HB_P_LINE, 69, 3,	/* 837 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'O', 'R', 'D', '_', 'D', 'E', 'S', 'C', '_', 'A', 'C', 'R', 'E', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23774 */ HB_P_LINE, 70, 3,	/* 838 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'N', 'O', 'M', 'E', '_', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23815 */ HB_P_LINE, 71, 3,	/* 839 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'N', 'P', 'J', '_', 'C', 'P', 'F', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23856 */ HB_P_LINE, 72, 3,	/* 840 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'D', 'A', 'T', 'A', '_', 'M', 'O', 'V', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23897 */ HB_P_LINE, 73, 3,	/* 841 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'H', 'V', '_', 'C', 'R', 'I', 'P', 'T', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHINT, 88, 2,	/* 600 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 23939 */ HB_P_LINE, 74, 3,	/* 842 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'R', '4', '.', 'D', 'B', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 26,	/* 26 (abs: 23982) */
/* 23958 */ HB_P_LINE, 75, 3,	/* 843 */
	HB_P_PUSHSYMNEAR, 17,	/* DBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'R', '4', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'D', 'B', 'F', 'C', 'D', 'X', 0, 
	HB_P_DOSHORT, 3,
/* 23982 */ HB_P_LINE, 78, 3,	/* 846 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 23990 */ HB_P_LINE, 79, 3,	/* 847 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'N', 'U', 'M', 'E', 'R', 'O', '_', 'F', 'A', 'B', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24026 */ HB_P_LINE, 80, 3,	/* 848 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'M', 'F', '_', 'A', 'D', 'I', 'C', 'I', 'O', 'N', 'A', 'L', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24061 */ HB_P_LINE, 81, 3,	/* 849 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'M', 'O', 'D', 'E', 'L', 'O', '_', 'E', 'C', 'F', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24097 */ HB_P_LINE, 82, 3,	/* 850 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'N', 'U', 'M', 'E', 'R', 'O', '_', 'U', 'S', 'U', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24133 */ HB_P_LINE, 83, 3,	/* 851 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'O', 'O', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24169 */ HB_P_LINE, 84, 3,	/* 852 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'C', 'F', '_', 'C', 'V', 'C', '_', 'C', 'B', 'P', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24205 */ HB_P_LINE, 85, 3,	/* 853 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'N', 'U', 'M', '_', 'I', 'T', 'E', 'M', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24241 */ HB_P_LINE, 86, 3,	/* 854 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'O', 'D', '_', 'P', 'R', 'O', 'D', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24277 */ HB_P_LINE, 87, 3,	/* 855 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'E', 'S', 'C', 'R', 'I', 'C', 'A', 'O', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24313 */ HB_P_LINE, 88, 3,	/* 856 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24349 */ HB_P_LINE, 89, 3,	/* 857 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'U', 'N', 'I', 'D', 'A', 'D', 'E', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24385 */ HB_P_LINE, 90, 3,	/* 858 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'V', 'L', 'R', '_', 'U', 'N', 'I', 'T', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24421 */ HB_P_LINE, 91, 3,	/* 859 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'E', 'S', 'C', 'O', 'N', '_', 'I', 'T', 'E', 'M', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24457 */ HB_P_LINE, 92, 3,	/* 860 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'A', 'C', 'R', 'E', 'S', 'C', '_', 'I', 'T', 'E', 'M', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24493 */ HB_P_LINE, 93, 3,	/* 861 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'V', 'L', 'R', '_', 'L', 'I', 'Q', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24529 */ HB_P_LINE, 94, 3,	/* 862 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'T', 'O', 'T', 'A', 'L', '_', 'P', 'A', 'R', 'C', 'I', 'A', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24565 */ HB_P_LINE, 95, 3,	/* 863 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'I', 'N', 'D', '_', 'C', 'A', 'N', 'C', 'E', 'L', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24600 */ HB_P_LINE, 96, 3,	/* 864 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'Q', 'U', 'A', 'N', 'T', '_', 'C', 'A', 'N', 'C', 'E', 'L', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24636 */ HB_P_LINE, 97, 3,	/* 865 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'V', 'L', 'R', '_', 'C', 'A', 'N', 'C', 'E', 'L', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24672 */ HB_P_LINE, 98, 3,	/* 866 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'A', 'N', 'C', 'E', 'L', '_', 'A', 'C', 'R', 'E', 'S', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24708 */ HB_P_LINE, 99, 3,	/* 867 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'I', 'A', 'T', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24743 */ HB_P_LINE, 100, 3,	/* 868 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'I', 'P', 'P', 'T', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24778 */ HB_P_LINE, 101, 3,	/* 869 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'A', 'S', 'A', 'S', 'D', 'E', 'C', 'Q', 'T', 'D', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24811 */ HB_P_LINE, 102, 3,	/* 870 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'A', 'S', 'A', 'S', 'D', 'E', 'C', 'U', 'N', 'I', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24844 */ HB_P_LINE, 103, 3,	/* 871 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'A', 'T', 'A', '_', 'M', 'O', 'V', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24875 */ HB_P_LINE, 104, 3,	/* 872 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'H', 'V', '_', 'C', 'R', 'I', 'P', 'T', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHINT, 132, 3,	/* 900 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24912 */ HB_P_LINE, 105, 3,	/* 873 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'R', '5', '.', 'D', 'B', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 26,	/* 26 (abs: 24955) */
/* 24931 */ HB_P_LINE, 106, 3,	/* 874 */
	HB_P_PUSHSYMNEAR, 17,	/* DBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'R', '5', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'D', 'B', 'F', 'C', 'D', 'X', 0, 
	HB_P_DOSHORT, 3,
/* 24955 */ HB_P_LINE, 109, 3,	/* 877 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 24963 */ HB_P_LINE, 110, 3,	/* 878 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'N', 'U', 'M', 'E', 'R', 'O', '_', 'F', 'A', 'B', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 24998 */ HB_P_LINE, 111, 3,	/* 879 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'M', 'F', '_', 'A', 'D', 'I', 'C', 'I', 'O', 'N', 'A', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25032 */ HB_P_LINE, 112, 3,	/* 880 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'M', 'O', 'D', 'E', 'L', 'O', '_', 'E', 'C', 'F', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25067 */ HB_P_LINE, 113, 3,	/* 881 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'N', 'U', 'M', 'E', 'R', 'O', '_', 'U', 'S', 'U', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25102 */ HB_P_LINE, 114, 3,	/* 882 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'O', 'O', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25137 */ HB_P_LINE, 115, 3,	/* 883 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'G', 'N', 'F', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25172 */ HB_P_LINE, 116, 3,	/* 884 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'G', 'R', 'G', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25207 */ HB_P_LINE, 117, 3,	/* 885 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'D', 'C', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25242 */ HB_P_LINE, 118, 3,	/* 886 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'E', 'N', 'O', 'M', 'I', 'C', 'A', 'O', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25277 */ HB_P_LINE, 119, 3,	/* 887 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'A', 'T', 'A', '_', 'F', 'I', 'N', 'A', 'L', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25312 */ HB_P_LINE, 120, 3,	/* 888 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'H', 'O', 'R', 'A', '_', 'F', 'I', 'N', 'A', 'L', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25347 */ HB_P_LINE, 121, 3,	/* 889 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'A', 'T', 'A', '_', 'M', 'O', 'V', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25382 */ HB_P_LINE, 122, 3,	/* 890 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'H', 'V', '_', 'C', 'R', 'I', 'P', 'T', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHINT, 94, 1,	/* 350 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25418 */ HB_P_LINE, 123, 3,	/* 891 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'R', '6', '.', 'D', 'B', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 26,	/* 26 (abs: 25461) */
/* 25437 */ HB_P_LINE, 124, 3,	/* 892 */
	HB_P_PUSHSYMNEAR, 17,	/* DBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'R', '6', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'D', 'B', 'F', 'C', 'D', 'X', 0, 
	HB_P_DOSHORT, 3,
/* 25461 */ HB_P_LINE, 127, 3,	/* 895 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 25469 */ HB_P_LINE, 128, 3,	/* 896 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'N', 'U', 'M', 'E', 'R', 'O', '_', 'F', 'A', 'B', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25504 */ HB_P_LINE, 129, 3,	/* 897 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'M', 'F', '_', 'A', 'D', 'I', 'C', 'I', 'O', 'N', 'A', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25538 */ HB_P_LINE, 130, 3,	/* 898 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'M', 'O', 'D', 'E', 'L', 'O', '_', 'E', 'C', 'F', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25573 */ HB_P_LINE, 131, 3,	/* 899 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'N', 'U', 'M', 'E', 'R', 'O', '_', 'U', 'S', 'U', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25608 */ HB_P_LINE, 132, 3,	/* 900 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'O', 'O', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25643 */ HB_P_LINE, 133, 3,	/* 901 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'C', 'F', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25678 */ HB_P_LINE, 134, 3,	/* 902 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'G', 'N', 'F', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25713 */ HB_P_LINE, 135, 3,	/* 903 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'M', 'E', 'I', 'O', '_', 'P', 'A', 'G', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25748 */ HB_P_LINE, 136, 3,	/* 904 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'V', 'L', 'R', '_', 'P', 'A', 'G', 'O', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25783 */ HB_P_LINE, 137, 3,	/* 905 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'I', 'N', 'D', '_', 'E', 'S', 'T', 'O', 'R', 'N', 'O', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25817 */ HB_P_LINE, 138, 3,	/* 906 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'V', 'L', 'R', '_', 'E', 'S', 'T', 'O', 'R', 'N', 'O', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25852 */ HB_P_LINE, 139, 3,	/* 907 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'A', 'T', 'A', '_', 'M', 'O', 'V', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25887 */ HB_P_LINE, 140, 3,	/* 908 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'H', 'V', '_', 'C', 'R', 'I', 'P', 'T', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHINT, 94, 1,	/* 350 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 25923 */ HB_P_LINE, 141, 3,	/* 909 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'R', '7', '.', 'D', 'B', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 26,	/* 26 (abs: 25966) */
/* 25942 */ HB_P_LINE, 142, 3,	/* 910 */
	HB_P_PUSHSYMNEAR, 17,	/* DBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'R', '7', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'D', 'B', 'F', 'C', 'D', 'X', 0, 
	HB_P_DOSHORT, 3,
/* 25966 */ HB_P_LINE, 145, 3,	/* 913 */
	HB_P_PUSHSYMNEAR, 18,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 25974 */ HB_P_LINE, 146, 3,	/* 914 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 25980 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

