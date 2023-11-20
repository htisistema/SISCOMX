/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SMEDALBUM.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\hti\SISCOM\SMEDALBUM.PRG /q /oC:\hti\SISCOM\SMEDALBUM.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.29 11:54:02 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SMEDALBUM.PRG"

HB_FUNC( SMEDALBUM );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( SELECT );
HB_FUNC_EXTERN( INDEXORD );
HB_FUNC_EXTERN( DBUSEAREA );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( BLOQREG );
HB_FUNC_EXTERN( __DBZAP );
HB_FUNC_EXTERN( DBUNLOCK );
HB_FUNC_EXTERN( DIRECTORY );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ADIREG );
HB_FUNC_EXTERN( DBCOMMIT );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( LASTREC );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( WVW_SETMOUSEPOS );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( TBROWSEDB );
HB_FUNC_EXTERN( TBCOLUMNNEW );
HB_FUNC_EXTERN( WVW_SETMOUSEMOVE );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( WVW_DRAWIMAGE );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( MYRUN );
HB_FUNC_EXTERN( GENKEY );
HB_FUNC_EXTERN( DBCLOSEAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( __MVXRELEASE );
HB_FUNC_EXTERN( READKILL );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SMEDALBUM )
{ "SMEDALBUM", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SMEDALBUM )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SELECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SELECT )}, NULL },
{ "INDEXORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( INDEXORD )}, NULL },
{ "DBUSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUSEAREA )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "BLOQREG", {HB_FS_PUBLIC}, {HB_FUNCNAME( BLOQREG )}, NULL },
{ "__DBZAP", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBZAP )}, NULL },
{ "DBUNLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUNLOCK )}, NULL },
{ "DIRECTORY", {HB_FS_PUBLIC}, {HB_FUNCNAME( DIRECTORY )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "M_AUX1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_AUX2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADIREG", {HB_FS_PUBLIC}, {HB_FUNCNAME( ADIREG )}, NULL },
{ "SMENU", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SNOME", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBCOMMIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCOMMIT )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "LASTREC", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTREC )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "WVW_SETMOUSEPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_SETMOUSEPOS )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "TBROWSEDB", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBROWSEDB )}, NULL },
{ "TBCOLUMNNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBCOLUMNNEW )}, NULL },
{ "ADDCOLUMN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVW_SETMOUSEMOVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_SETMOUSEMOVE )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "FORCESTABLE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVW_DRAWIMAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_DRAWIMAGE )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "MYRUN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYRUN )}, NULL },
{ "GENKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( GENKEY )}, NULL },
{ "OCOLPROD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBCLOSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "__MVXRELEASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVXRELEASE )}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SMEDALBUM )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SMEDALBUM
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SMEDALBUM = hb_vm_SymbolInit_SMEDALBUM;
   #pragma data_seg()
#endif

HB_FUNC( SMEDALBUM )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 13, 5,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 6, 0,	/* 6 */
	HB_P_ONE,
	HB_P_ARRAYDIM, 1, 0,	/* 1 */
	HB_P_POPLOCALNEAR, 12,	/* COLPROD */
	HB_P_LOCALNEARSETSTR, 18, 2, 0,	/* STOP 2*/
	' ', 0, 
/* 00018 */ HB_P_LINEOFFSET, 2,	/* 8 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 5,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 2,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 3,	/* MARQ */
	HB_P_DOSHORT, 3,
	HB_P_POPVARIABLE, 3, 0,	/* MARQ */
	HB_P_POPVARIABLE, 2, 0,	/* MIMP_TIPO */
/* 00045 */ HB_P_LINEOFFSET, 4,	/* 10 */
	HB_P_PUSHMEMVAR, 6, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 1, 0,	/* MTIPO_IMP */
/* 00058 */ HB_P_LINEOFFSET, 6,	/* 12 */
	HB_P_LOCALNEARSETINT, 6, 22, 0,	/* ALB_LBA 22*/
/* 00064 */ HB_P_LINEOFFSET, 7,	/* 13 */
	HB_P_LOCALNEARSETINT, 7, 15, 0,	/* ALB_CBA 15*/
/* 00070 */ HB_P_LINEOFFSET, 9,	/* 15 */
	HB_P_PUSHSYMNEAR, 7,	/* SELECT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 8,	/* ALB_MSELE */
/* 00079 */ HB_P_LINEOFFSET, 10,	/* 16 */
	HB_P_PUSHSYMNEAR, 8,	/* INDEXORD */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 9,	/* ALB_MORDE */
/* 00088 */ HB_P_LINEOFFSET, 11,	/* 17 */
	HB_P_PUSHSYMNEAR, 9,	/* DBUSEAREA */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'D', 'B', 'F', 'C', 'D', 'X', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'e', 'n', 'u', 'f', 'o', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	's', 'm', 'e', 'n', 'u', 0, 
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 8,
/* 00128 */ HB_P_LINEOFFSET, 13,	/* 19 */
	HB_P_PUSHSYMNEAR, 10,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	's', 'm', 'e', 'n', 'u', 0, 
	HB_P_DOSHORT, 1,
/* 00143 */ HB_P_LINEOFFSET, 14,	/* 20 */
	HB_P_PUSHSYMNEAR, 11,	/* BLOQREG */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00150 */ HB_P_LINEOFFSET, 15,	/* 21 */
	HB_P_PUSHSYMNEAR, 12,	/* __DBZAP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00157 */ HB_P_LINEOFFSET, 16,	/* 22 */
	HB_P_PUSHSYMNEAR, 13,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00164 */ HB_P_LINEOFFSET, 18,	/* 24 */
	HB_P_PUSHSYMNEAR, 14,	/* DIRECTORY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MCAM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 1,	/* MLETRA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* MCODFOTO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'*', '.', 'j', 'p', 'g', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 16, 0,	/* M_AUX1 */
/* 00200 */ HB_P_LINEOFFSET, 19,	/* 25 */
	HB_P_PUSHSYMNEAR, 14,	/* DIRECTORY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MCAM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 1,	/* MLETRA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* MCODFOTO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'*', '.', 'b', 'm', 'p', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 17, 0,	/* M_AUX2 */
/* 00236 */ HB_P_LINEOFFSET, 20,	/* 26 */
	HB_P_PUSHSYMNEAR, 18,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* M_AUX1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 18,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* M_AUX2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 232, 0,	/* 232 (abs: 00489) */
/* 00260 */ HB_P_LINEOFFSET, 21,	/* 27 */
	HB_P_PUSHSYMNEAR, 14,	/* DIRECTORY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCAM1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 1,	/* MLETRA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* MCODFOTO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'*', '.', 'j', 'p', 'g', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 16, 0,	/* M_AUX1 */
/* 00296 */ HB_P_LINEOFFSET, 22,	/* 28 */
	HB_P_PUSHSYMNEAR, 14,	/* DIRECTORY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCAM1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 1,	/* MLETRA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* MCODFOTO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'*', '.', 'b', 'm', 'p', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 17, 0,	/* M_AUX2 */
/* 00332 */ HB_P_LINEOFFSET, 23,	/* 29 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 19, 0,	/* I */
/* 00338 */ HB_P_LINEOFFSET, 24,	/* 30 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 19, 0,	/* I */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_PUSHSYMNEAR, 18,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* M_AUX1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 00409) */
/* 00358 */ HB_P_LINEOFFSET, 25,	/* 31 */
	HB_P_PUSHSYMNEAR, 20,	/* ADIREG */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00365 */ HB_P_LINEOFFSET, 26,	/* 32 */
	HB_P_PUSHLOCALNEAR, 5,	/* MCAM1 */
	HB_P_PUSHMEMVAR, 16, 0,	/* M_AUX1 */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SMENU */
	HB_P_POPALIASEDFIELDNEAR, 21,	/* SMENU */
/* 00383 */ HB_P_LINEOFFSET, 27,	/* 33 */
	HB_P_PUSHMEMVAR, 16, 0,	/* M_AUX1 */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 21,	/* SMENU */
	HB_P_POPALIASEDFIELDNEAR, 22,	/* SNOME */
/* 00398 */ HB_P_LINEOFFSET, 28,	/* 34 */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 19, 0,	/* I */
	HB_P_JUMPNEAR, 193,	/* -63 (abs: 00344) */
/* 00409 */ HB_P_LINEOFFSET, 29,	/* 35 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 19, 0,	/* I */
/* 00415 */ HB_P_LINEOFFSET, 30,	/* 36 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 19, 0,	/* I */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_PUSHSYMNEAR, 18,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* M_AUX2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 212, 0,	/* 212 (abs: 00645) */
/* 00436 */ HB_P_LINEOFFSET, 31,	/* 37 */
	HB_P_PUSHSYMNEAR, 20,	/* ADIREG */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00443 */ HB_P_LINEOFFSET, 32,	/* 38 */
	HB_P_PUSHLOCALNEAR, 5,	/* MCAM1 */
	HB_P_PUSHMEMVAR, 16, 0,	/* M_AUX1 */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SMENU */
	HB_P_POPALIASEDFIELDNEAR, 21,	/* SMENU */
/* 00462 */ HB_P_LINEOFFSET, 33,	/* 39 */
	HB_P_PUSHMEMVAR, 16, 0,	/* M_AUX1 */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 21,	/* SMENU */
	HB_P_POPALIASEDFIELDNEAR, 22,	/* SNOME */
/* 00478 */ HB_P_LINEOFFSET, 34,	/* 40 */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 19, 0,	/* I */
	HB_P_JUMPNEAR, 190,	/* -66 (abs: 00421) */
/* 00489 */ HB_P_LINEOFFSET, 36,	/* 42 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 19, 0,	/* I */
/* 00495 */ HB_P_LINEOFFSET, 37,	/* 43 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 19, 0,	/* I */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_PUSHSYMNEAR, 18,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* M_AUX1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 00566) */
/* 00515 */ HB_P_LINEOFFSET, 38,	/* 44 */
	HB_P_PUSHSYMNEAR, 20,	/* ADIREG */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00522 */ HB_P_LINEOFFSET, 39,	/* 45 */
	HB_P_PUSHLOCALNEAR, 4,	/* MCAM */
	HB_P_PUSHMEMVAR, 16, 0,	/* M_AUX1 */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SMENU */
	HB_P_POPALIASEDFIELDNEAR, 21,	/* SMENU */
/* 00540 */ HB_P_LINEOFFSET, 40,	/* 46 */
	HB_P_PUSHMEMVAR, 16, 0,	/* M_AUX1 */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 21,	/* SMENU */
	HB_P_POPALIASEDFIELDNEAR, 22,	/* SNOME */
/* 00555 */ HB_P_LINEOFFSET, 41,	/* 47 */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 19, 0,	/* I */
	HB_P_JUMPNEAR, 193,	/* -63 (abs: 00501) */
/* 00566 */ HB_P_LINEOFFSET, 42,	/* 48 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 19, 0,	/* I */
/* 00572 */ HB_P_LINEOFFSET, 43,	/* 49 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 19, 0,	/* I */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_PUSHSYMNEAR, 18,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* M_AUX2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 55,	/* 55 (abs: 00645) */
/* 00592 */ HB_P_LINEOFFSET, 44,	/* 50 */
	HB_P_PUSHSYMNEAR, 20,	/* ADIREG */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00599 */ HB_P_LINEOFFSET, 45,	/* 51 */
	HB_P_PUSHLOCALNEAR, 4,	/* MCAM */
	HB_P_PUSHMEMVAR, 16, 0,	/* M_AUX1 */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SMENU */
	HB_P_POPALIASEDFIELDNEAR, 21,	/* SMENU */
/* 00618 */ HB_P_LINEOFFSET, 46,	/* 52 */
	HB_P_PUSHMEMVAR, 16, 0,	/* M_AUX1 */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 21,	/* SMENU */
	HB_P_POPALIASEDFIELDNEAR, 22,	/* SNOME */
/* 00634 */ HB_P_LINEOFFSET, 47,	/* 53 */
	HB_P_PUSHVARIABLE, 19, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 19, 0,	/* I */
	HB_P_JUMPNEAR, 191,	/* -65 (abs: 00578) */
/* 00645 */ HB_P_LINEOFFSET, 50,	/* 56 */
	HB_P_PUSHSYMNEAR, 23,	/* DBCOMMIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00652 */ HB_P_LINEOFFSET, 51,	/* 57 */
	HB_P_PUSHSYMNEAR, 13,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00659 */ HB_P_LINEOFFSET, 53,	/* 59 */
	HB_P_PUSHSYMNEAR, 10,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	's', 'm', 'e', 'n', 'u', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 24,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00679 */ HB_P_LINEOFFSET, 55,	/* 61 */
	HB_P_PUSHSYMNEAR, 25,	/* LASTREC */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 88,	/* 88 (abs: 00776) */
/* 00690 */ HB_P_LINEOFFSET, 56,	/* 62 */
	HB_P_PUSHSYMNEAR, 26,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 59,	/* 59 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'd', 'e', ' ', 'f', 'o', 't', 'o', 's', ' ', 'n', 'e', 's', 't', 'e', ' ', 'C', 'a', 'm', 'i', 'n', 'h', 'o', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 4,	/* MCAM */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* MLETRA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* MCODFOTO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'*', '.', 'j', 'p', 'g', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00776 */ HB_P_LINEOFFSET, 58,	/* 64 */
	HB_P_PUSHSYMNEAR, 27,	/* WVW_SETMOUSEPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 3,
/* 00786 */ HB_P_LINEOFFSET, 59,	/* 65 */
	HB_P_PUSHLOCALNEAR, 1,	/* MLETRA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 00871) */
/* 00797 */ HB_P_LINEOFFSET, 60,	/* 66 */
	HB_P_PUSHSYMNEAR, 28,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'A', 'L', 'B', 'U', 'M', ' ', 'D', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* MCODFOTO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* MNOMEFOTO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', '-', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SMENU */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* SMENU */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
	HB_P_JUMP, 60, 1,	/* 316 (abs: 01184) */
/* 00871 */ HB_P_LINEOFFSET, 61,	/* 67 */
	HB_P_PUSHLOCALNEAR, 1,	/* MLETRA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 77,	/* 77 (abs: 00957) */
/* 00882 */ HB_P_LINEOFFSET, 62,	/* 68 */
	HB_P_PUSHSYMNEAR, 28,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'A', 'L', 'B', 'U', 'M', ' ', 'D', 'O', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* MCODFOTO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* MNOMEFOTO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', '-', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SMENU */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* SMENU */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
	HB_P_JUMP, 230, 0,	/* 230 (abs: 01184) */
/* 00957 */ HB_P_LINEOFFSET, 63,	/* 69 */
	HB_P_PUSHLOCALNEAR, 1,	/* MLETRA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 73,	/* 73 (abs: 01039) */
/* 00968 */ HB_P_LINEOFFSET, 64,	/* 70 */
	HB_P_PUSHSYMNEAR, 28,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'A', 'L', 'B', 'U', 'M', ' ', 'D', 'A', ' ', 'R', 'A', 'C', 'A', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* MCODFOTO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* MNOMEFOTO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', '-', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SMENU */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* SMENU */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
	HB_P_JUMP, 148, 0,	/* 148 (abs: 01184) */
/* 01039 */ HB_P_LINEOFFSET, 65,	/* 71 */
	HB_P_PUSHLOCALNEAR, 1,	/* MLETRA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 01124) */
/* 01050 */ HB_P_LINEOFFSET, 66,	/* 72 */
	HB_P_PUSHSYMNEAR, 28,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'A', 'L', 'B', 'U', 'M', ' ', 'D', 'O', 'S', ' ', 'A', 'N', 'I', 'M', 'A', 'I', 'S', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* MCODFOTO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* MNOMEFOTO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', '-', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SMENU */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* SMENU */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
	HB_P_JUMPNEAR, 62,	/* 62 (abs: 01184) */
/* 01124 */ HB_P_LINEOFFSET, 68,	/* 74 */
	HB_P_PUSHSYMNEAR, 28,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'A', 'L', 'B', 'U', 'M', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* MCODFOTO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* MNOMEFOTO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', '-', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SMENU */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* SMENU */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 01184 */ HB_P_LINEOFFSET, 70,	/* 76 */
	HB_P_PUSHSYMNEAR, 29,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 6,	/* ALB_LBA */
	HB_P_PUSHLOCALNEAR, 7,	/* ALB_CBA */
	HB_P_DOSHORT, 4,
/* 01198 */ HB_P_LINEOFFSET, 72,	/* 78 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'A', 'R', 'Q', 'U', 'I', 'V', 'O', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 01223 */ HB_P_LINEOFFSET, 74,	/* 80 */
	HB_P_PUSHSYMNEAR, 32,	/* TBROWSEDB */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 6,	/* ALB_LBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 7,	/* ALB_CBA */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 11,	/* OCPROD */
/* 01242 */ HB_P_LINEOFFSET, 75,	/* 81 */
	HB_P_PUSHSYMNEAR, 33,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 21,	/* SMENU */
	HB_P_PUSHALIASEDFIELDNEAR, 22,	/* SNOME */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 12, 0,	/* COLPROD */
	HB_P_ONE,
	HB_P_ARRAYPOP,
/* 01264 */ HB_P_LINEOFFSET, 76,	/* 82 */
	HB_P_LOCALNEARSETINT, 13, 0, 0,	/* ALB_I 0*/
/* 01270 */ HB_P_LINEOFFSET, 77,	/* 83 */
	HB_P_LOCALNEARSETINT, 13, 1, 0,	/* ALB_I 1*/
	HB_P_PUSHLOCALNEAR, 13,	/* ALB_I */
	HB_P_PUSHSYMNEAR, 18,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* COLPROD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 01311) */
/* 01288 */ HB_P_LINEOFFSET, 78,	/* 84 */
	HB_P_MESSAGE, 34, 0,	/* ADDCOLUMN */
	HB_P_PUSHLOCALNEAR, 11,	/* OCPROD */
	HB_P_PUSHLOCALNEAR, 12,	/* COLPROD */
	HB_P_PUSHLOCALNEAR, 13,	/* ALB_I */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 01303 */ HB_P_LINEOFFSET, 79,	/* 85 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* ALB_I 1*/
	HB_P_JUMPNEAR, 223,	/* -33 (abs: 01276) */
/* 01311 */ HB_P_LINEOFFSET, 80,	/* 86 */
	HB_P_PUSHSYMNEAR, 27,	/* WVW_SETMOUSEPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 3,
/* 01321 */ HB_P_LINEOFFSET, 81,	/* 87 */
	HB_P_PUSHSYMNEAR, 35,	/* WVW_SETMOUSEMOVE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_DOSHORT, 2,
/* 01330 */ HB_P_LINEOFFSET, 83,	/* 89 */
	HB_P_PUSHSYMNEAR, 36,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'S', 'M', 'E', 'D', 'A', 'L', 'B', 'U', 'M', 0, 
	HB_P_DOSHORT, 1,
/* 01349 */ HB_P_LINEOFFSET, 84,	/* 90 */
	HB_P_PUSHSYMNEAR, 37,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'<', 'E', 'S', 'C', '>', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 01372 */ HB_P_LINEOFFSET, 85,	/* 91 */
	HB_P_LOCALNEARSETINT, 14, 0, 0,	/* ALB_NKEY 0*/
/* 01378 */ HB_P_LINEOFFSET, 86,	/* 92 */
	HB_P_PUSHLOCALNEAR, 14,	/* ALB_NKEY */
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 198, 0,	/* 198 (abs: 01582) */
/* 01387 */ HB_P_LINEOFFSET, 87,	/* 93 */
	HB_P_MESSAGE, 38, 0,	/* FORCESTABLE */
	HB_P_PUSHLOCALNEAR, 11,	/* OCPROD */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01397 */ HB_P_LINEOFFSET, 88,	/* 94 */
	HB_P_PUSHSYMNEAR, 29,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_PUSHBYTE, 119,	/* 119 */
	HB_P_DOSHORT, 4,
/* 01411 */ HB_P_LINEOFFSET, 89,	/* 95 */
	HB_P_PUSHSYMNEAR, 39,	/* WVW_DRAWIMAGE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_PUSHBYTE, 119,	/* 119 */
	HB_P_PUSHSYMNEAR, 15,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 21,	/* SMENU */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* SMENU */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 15,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 21,	/* SMENU */
	HB_P_PUSHALIASEDFIELDNEAR, 22,	/* SNOME */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_TRUE,
	HB_P_FALSE,
	HB_P_DOSHORT, 8,
/* 01447 */ HB_P_LINEOFFSET, 90,	/* 96 */
	HB_P_PUSHSYMNEAR, 40,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01455 */ HB_P_LINEOFFSET, 91,	/* 97 */
	HB_P_PUSHSYMNEAR, 37,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 105,	/* 105 */
	'U', 't', 'i', 'l', 'i', 'z', 'e', ' ', 'a', 's', ' ', 'S', 'e', 't', 'a', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'B', 'A', 'I', 'X', 'O', '-', '(', 'p', 'r', 'o', 'x', 'i', 'm', 'a', ' ', 'f', 'o', 't', 'o', ')', ' ', 'o', 'u', ' ', 'p', '/', 'C', 'I', 'M', 'A', '-', '(', 'r', 'e', 't', 'o', 'r', 'n', 'a', ' ', 'f', 'o', 't', 'o', ')', ' ', '-', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', ' ', 'p', '/', 'I', 'M', 'P', 'R', 'M', 'I', 'R', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 01569 */ HB_P_LINEOFFSET, 92,	/* 98 */
	HB_P_PUSHSYMNEAR, 41,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 14,	/* ALB_NKEY */
	HB_P_JUMP, 55, 255,	/* -201 (abs: 01378) */
/* 01582 */ HB_P_LINEOFFSET, 94,	/* 100 */
	HB_P_PUSHLOCALNEAR, 14,	/* ALB_NKEY */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01594) */
	HB_P_JUMP, 184, 0,	/* 184 (abs: 01775) */
/* 01594 */ HB_P_LINEOFFSET, 96,	/* 102 */
	HB_P_PUSHLOCALNEAR, 14,	/* ALB_NKEY */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 01644) */
/* 01603 */ HB_P_LINEOFFSET, 97,	/* 103 */
	HB_P_PUSHSYMNEAR, 42,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'M', 'S', 'P', 'A', 'I', 'N', 'T', ' ', 0, 
	HB_P_PUSHSYMNEAR, 15,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 21,	/* SMENU */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* SMENU */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 15,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 21,	/* SMENU */
	HB_P_PUSHALIASEDFIELDNEAR, 22,	/* SNOME */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 201, 254,	/* -311 (abs: 01330) */
/* 01644 */ HB_P_LINEOFFSET, 99,	/* 105 */
	HB_P_PUSHSYMNEAR, 43,	/* GENKEY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* OCPROD */
	HB_P_PUSHLOCALNEAR, 14,	/* ALB_NKEY */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	's', 'm', 'e', 'n', 'u', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSE, 179, 254,	/* -333 (abs: 01330) */
/* 01666 */ HB_P_LINEOFFSET, 100,	/* 106 */
	HB_P_PUSHSYMNEAR, 32,	/* TBROWSEDB */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 6,	/* ALB_LBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 7,	/* ALB_CBA */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 11,	/* OCPROD */
/* 01685 */ HB_P_LINEOFFSET, 101,	/* 107 */
	HB_P_PUSHSYMNEAR, 33,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'A', 'r', 'q', 'u', 'i', 'v', 'o', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 21,	/* SMENU */
	HB_P_PUSHALIASEDFIELDNEAR, 22,	/* SNOME */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 12, 0,	/* COLPROD */
	HB_P_ONE,
	HB_P_ARRAYPOP,
/* 01714 */ HB_P_LINEOFFSET, 102,	/* 108 */
	HB_P_LOCALNEARSETINT, 13, 0, 0,	/* ALB_I 0*/
/* 01720 */ HB_P_LINEOFFSET, 103,	/* 109 */
	HB_P_LOCALNEARSETINT, 13, 1, 0,	/* ALB_I 1*/
	HB_P_PUSHLOCALNEAR, 13,	/* ALB_I */
	HB_P_PUSHSYMNEAR, 18,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 44, 0,	/* OCOLPROD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 01762) */
/* 01739 */ HB_P_LINEOFFSET, 104,	/* 110 */
	HB_P_MESSAGE, 34, 0,	/* ADDCOLUMN */
	HB_P_PUSHLOCALNEAR, 11,	/* OCPROD */
	HB_P_PUSHLOCALNEAR, 12,	/* COLPROD */
	HB_P_PUSHLOCALNEAR, 13,	/* ALB_I */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 01754 */ HB_P_LINEOFFSET, 105,	/* 111 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* ALB_I 1*/
	HB_P_JUMPNEAR, 222,	/* -34 (abs: 01726) */
/* 01762 */ HB_P_LINEOFFSET, 106,	/* 112 */
	HB_P_MESSAGE, 38, 0,	/* FORCESTABLE */
	HB_P_PUSHLOCALNEAR, 11,	/* OCPROD */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMP, 70, 254,	/* -442 (abs: 01330) */
/* 01775 */ HB_P_LINEOFFSET, 110,	/* 116 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 21,	/* SMENU */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 45,	/* DBCLOSEAREA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_POPALIAS,
/* 01787 */ HB_P_LINEOFFSET, 111,	/* 117 */
	HB_P_PUSHSYMNEAR, 10,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* ALB_MSELE */
	HB_P_DOSHORT, 1,
	HB_P_PUSHLOCALNEAR, 9,	/* ALB_MORDE */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 01811) */
	HB_P_PUSHSYMNEAR, 46,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* ALB_MORDE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01812) */
	HB_P_PUSHNIL,
	HB_P_POP,
/* 01813 */ HB_P_LINEOFFSET, 112,	/* 118 */
	HB_P_PUSHSYMNEAR, 47,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01820 */ HB_P_LINEOFFSET, 113,	/* 119 */
	HB_P_PUSHSYMNEAR, 35,	/* WVW_SETMOUSEMOVE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
/* 01829 */ HB_P_LINEOFFSET, 114,	/* 120 */
	HB_P_PUSHLOCALNEAR, 14,	/* ALB_NKEY */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 122,	/* 122 (abs: 01958) */
/* 01838 */ HB_P_LINEOFFSET, 115,	/* 121 */
	HB_P_PUSHSYMNEAR, 48,	/* __MVXRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'a', 'l', 'b', '_', 'l', 'b', 'a', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'a', 'l', 'b', '_', 'c', 'b', 'a', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'a', 'l', 'b', '_', 'm', 's', 'e', 'l', 'e', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'a', 'l', 'b', '_', 'm', 'o', 'r', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'a', 'l', 'b', '_', 'm', 'e', 'n', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'o', 'c', 'p', 'r', 'o', 'd', 0, 
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'o', 'c', 'o', 'l', 'p', 'r', 'o', 'd', '[', '8', ']', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'a', 'l', 'b', '_', 'i', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'a', 'l', 'b', '_', 'n', 'k', 'e', 'y', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'a', 'l', 'b', '_', 'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 10,
/* 01953 */ HB_P_LINEOFFSET, 116,	/* 122 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01958 */ HB_P_LINEOFFSET, 118,	/* 124 */
	HB_P_PUSHSYMNEAR, 48,	/* __MVXRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'a', 'l', 'b', '_', 'l', 'b', 'a', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'a', 'l', 'b', '_', 'c', 'b', 'a', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'a', 'l', 'b', '_', 'm', 's', 'e', 'l', 'e', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'a', 'l', 'b', '_', 'm', 'o', 'r', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'a', 'l', 'b', '_', 'm', 'e', 'n', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'o', 'c', 'p', 'r', 'o', 'd', 0, 
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'o', 'c', 'o', 'l', 'p', 'r', 'o', 'd', '[', '8', ']', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'a', 'l', 'b', '_', 'i', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'a', 'l', 'b', '_', 'n', 'k', 'e', 'y', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'a', 'l', 'b', '_', 'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 10,
/* 02073 */ HB_P_LINEOFFSET, 119,	/* 125 */
	HB_P_PUSHSYMNEAR, 49,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 50, 0,	/* GETLIST */
/* 02087 */ HB_P_LINEOFFSET, 120,	/* 126 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02092 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

