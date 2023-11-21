/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5ETQ3.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC5ETQ3.PRG /q /oC:\hti\SISCOM\SAC5ETQ3.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.11.21 09:47:15 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5ETQ3.PRG"

HB_FUNC( SAC5ETQ3 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( SET_KEY );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_FAB );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VERDESP );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( RANGECHECK );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5ETQ3 )
{ "SAC5ETQ3", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5ETQ3 )}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "CONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "SET_KEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET_KEY )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_FAB", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_FAB )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "RAZAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VERDESP", {HB_FS_PUBLIC}, {HB_FUNCNAME( VERDESP )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "RANGECHECK", {HB_FS_PUBLIC}, {HB_FUNCNAME( RANGECHECK )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "COD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "DATA_CAD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENDERECO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BAIRRO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CIDADE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CEP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5ETQ3 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5ETQ3
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5ETQ3 = hb_vm_SymbolInit_SAC5ETQ3;
   #pragma data_seg()
#endif

HB_FUNC( SAC5ETQ3 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 22, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 12, 0,	/* 12 */
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', 'E', 'T', 'Q', '_', 'C', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 21,	/* M_ETQ */
	HB_P_LOCALNEARSETINT, 22, 1, 0,	/* MQUANTD 1*/
/* 00028 */ HB_P_LINEOFFSET, 2,	/* 14 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 5,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 7,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 2,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 3,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 4,	/* MARQ */
	HB_P_PUSHSYMNEAR, 6,	/* CONS_CLI */
	HB_P_DOSHORT, 5,
	HB_P_POPVARIABLE, 6, 0,	/* CONS_CLI */
	HB_P_POPVARIABLE, 4, 0,	/* MARQ */
	HB_P_POPVARIABLE, 3, 0,	/* MIMP_TIPO */
/* 00065 */ HB_P_LINEOFFSET, 4,	/* 16 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* CC 0*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_POPLOCALNEAR, 4,	/* LC */
/* 00075 */ HB_P_LINEOFFSET, 5,	/* 17 */
	HB_P_LOCALNEARSETINT, 6, 20, 0,	/* LB 20*/
/* 00081 */ HB_P_LINEOFFSET, 6,	/* 18 */
	HB_P_LOCALNEARSETINT, 7, 76, 0,	/* CB 76*/
/* 00087 */ HB_P_LINEOFFSET, 8,	/* 20 */
	HB_P_PUSHSYMNEAR, 8,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 9,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 10,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00109 */ HB_P_LINEOFFSET, 9,	/* 21 */
	HB_P_PUSHSYMNEAR, 11,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00138) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00138 */ HB_P_LINEOFFSET, 10,	/* 22 */
	HB_P_PUSHSYMNEAR, 11,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'A', 'C', 'C', 'E', 'P', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'E', 'P', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00165) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00165 */ HB_P_LINEOFFSET, 11,	/* 23 */
	HB_P_PUSHSYMNEAR, 11,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00194) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00194 */ HB_P_LINEOFFSET, 12,	/* 24 */
	HB_P_PUSHSYMNEAR, 11,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'e', 's', 'p', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'c', 'd', 'e', 's', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00224) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00224 */ HB_P_LINEOFFSET, 13,	/* 25 */
	HB_P_PUSHSYMNEAR, 12,	/* SET_KEY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 00241 */ HB_P_LINEOFFSET, 14,	/* 26 */
	HB_P_PUSHSYMNEAR, 9,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 13,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 1,
/* 00262 */ HB_P_LINEOFFSET, 15,	/* 27 */
	HB_P_PUSHSYMNEAR, 14,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00269 */ HB_P_LINEOFFSET, 17,	/* 29 */
	HB_P_PUSHSYMNEAR, 15,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_PUSHLOCALNEAR, 6,	/* LB */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 7,	/* CB */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	' ', 'O', 'p', 'c', 'o', 'e', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', ' ', 'D', 'E', ' ', 'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00327 */ HB_P_LINEOFFSET, 20,	/* 32 */
	HB_P_PUSHSYMNEAR, 16,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00336 */ HB_P_LINEOFFSET, 22,	/* 34 */
	HB_P_PUSHMEMVAR, 17, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 2, 0,	/* MTIPO_IMP */
/* 00349 */ HB_P_LINEOFFSET, 24,	/* 36 */
	HB_P_LOCALNEARSETSTR, 10, 2, 0,	/* MCOD 2*/
	'S', 0, 
/* 00357 */ HB_P_LINEOFFSET, 25,	/* 37 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 1, 0,	/* MCOD_FORN */
/* 00363 */ HB_P_LINEOFFSET, 26,	/* 38 */
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* MCODIGO 0*/
/* 00369 */ HB_P_LINEOFFSET, 27,	/* 39 */
	HB_P_LOCALNEARSETSTR, 9, 2, 0,	/* MCLASSIF 2*/
	'2', 0, 
/* 00377 */ HB_P_LINEOFFSET, 28,	/* 40 */
	HB_P_PUSHSYMNEAR, 18,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 19,	/* MDATA_INI */
/* 00397 */ HB_P_LINEOFFSET, 29,	/* 41 */
	HB_P_PUSHSYMNEAR, 18,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 20,	/* MDATA_FIM */
/* 00417 */ HB_P_LINEOFFSET, 30,	/* 42 */
	HB_P_LOCALNEARSETSTR, 14, 5, 0,	/* MCODCONTA 5*/
	' ', ' ', ' ', ' ', 0, 
/* 00428 */ HB_P_LINEOFFSET, 31,	/* 43 */
	HB_P_LOCALNEARSETINT, 15, 11, 0,	/* MESPACO 11*/
/* 00434 */ HB_P_LINEOFFSET, 32,	/* 44 */
	HB_P_LOCALNEARSETINT, 16, 2, 0,	/* MLINHAS 2*/
/* 00440 */ HB_P_LINEOFFSET, 33,	/* 45 */
	HB_P_LOCALNEARSETINT, 17, 2, 0,	/* MFILA 2*/
/* 00446 */ HB_P_LINEOFFSET, 34,	/* 46 */
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* MCONTADOR 0*/
/* 00452 */ HB_P_LINEOFFSET, 35,	/* 47 */
	HB_P_LOCALNEARSETINT, 12, 20, 0,	/* MQTD_ETQ 20*/
/* 00458 */ HB_P_LINEOFFSET, 36,	/* 48 */
	HB_P_LOCALNEARSETINT, 22, 1, 0,	/* MQUANTD 1*/
/* 00464 */ HB_P_LINEOFFSET, 37,	/* 49 */
	HB_P_PUSHSYMNEAR, 19,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00474 */ HB_P_LINEOFFSET, 39,	/* 51 */
	HB_P_PUSHSYMNEAR, 20,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00483 */ HB_P_LINEOFFSET, 40,	/* 52 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', 'I', 'N', 'D', 'I', 'V', 'I', 'D', 'U', 'A', 'L', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00528 */ HB_P_LINEOFFSET, 41,	/* 53 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'O', 'P', 'C', 'O', 'E', 'S', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00560 */ HB_P_LINEOFFSET, 42,	/* 54 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'L', 'A', 'S', 'S', 'I', 'F', 'I', 'C', 'A', 'C', 'A', 'O', ':', ' ', '[', ' ', ']', 0, 
	HB_P_DOSHORT, 1,
/* 00603 */ HB_P_LINEOFFSET, 43,	/* 55 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 47, 0,	/* 47*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'*', '*', ' ', 'D', 'a', 't', 'a', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', ' ', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 00647 */ HB_P_LINEOFFSET, 44,	/* 56 */
	HB_P_PUSHSYMNEAR, 20,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00655 */ HB_P_LINEOFFSET, 45,	/* 57 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00692 */ HB_P_LINEOFFSET, 46,	/* 58 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'[', ' ', ' ', ' ', ' ', ']', ' ', 'C', 'o', 'n', 't', 'a', ' ', 'D', 'e', 's', 'p', 'e', 's', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 00737 */ HB_P_LINEOFFSET, 47,	/* 59 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'o', 'd', '.', 'U', 'l', 't', '.', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00786 */ HB_P_LINEOFFSET, 48,	/* 60 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'[', '1', ']', ' ', 'M', 'a', 't', 'r', 'i', 'c', 'u', 'l', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 00824 */ HB_P_LINEOFFSET, 49,	/* 61 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'[', '2', ']', ' ', 'A', 'l', 'f', 'a', 'b', 'e', 't', 'i', 'c', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 00863 */ HB_P_LINEOFFSET, 50,	/* 62 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00901 */ HB_P_LINEOFFSET, 51,	/* 63 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 26, 0,	/* 26*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00937 */ HB_P_LINEOFFSET, 52,	/* 64 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 12, 0,	/* 12*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'E', 's', 'p', 'a', 'c', 'o', ' ', 'e', 'n', 't', 'r', 'e', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00998 */ HB_P_LINEOFFSET, 53,	/* 65 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 13, 0,	/* 13*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'L', 'i', 'n', 'h', 'a', 's', ' ', 'e', 'n', 't', 'r', 'e', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01059 */ HB_P_LINEOFFSET, 54,	/* 66 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 14, 0,	/* 14*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'F', 'i', 'l', 'e', 'i', 'r', 'a', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', ' ', '[', '1', ',', '2', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01120 */ HB_P_LINEOFFSET, 55,	/* 67 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', 'p', '/', 'p', 'a', 'g', 'i', 'n', 'a', 's', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01181 */ HB_P_LINEOFFSET, 56,	/* 68 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 16, 0,	/* 16*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', '[', 'S', '/', 'n', ']', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01242 */ HB_P_LINEOFFSET, 57,	/* 69 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01303 */ HB_P_LINEOFFSET, 58,	/* 70 */
	HB_P_PUSHSYMNEAR, 23,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'm', 'a', 't', 'r', 'i', 'c', 'u', 'l', 'a', ' ', 'o', 'u', ' ', 'e', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'a', 's', ' ', 'o', 'p', 'c', 'o', 'e', 's', ' ', '-', ' ', '[', 'E', 'S', 'C', ']', ' ', 'p', '/', ' ', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 01368 */ HB_P_LINEOFFSET, 60,	/* 72 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 22, 0,	/* 22*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	4, 0,	/* LC */
	5, 0,	/* CC */
	HB_P_PUSHSYMNEAR, 28,	/* VER_FAB */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FORN */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 29, 0,	/* 29*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01461 */ HB_P_LINEOFFSET, 61,	/* 73 */
	HB_P_PUSHSYMNEAR, 30,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 26, 0,	/* GETLIST */
/* 01483 */ HB_P_LINEOFFSET, 62,	/* 74 */
	HB_P_PUSHSYMNEAR, 31,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 01520) */
/* 01495 */ HB_P_LINEOFFSET, 63,	/* 75 */
	HB_P_PUSHSYMNEAR, 8,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 9,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 10,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 108, 16,	/* 4204 (abs: 05721) */
/* 01520 */ HB_P_LINEOFFSET, 66,	/* 78 */
	HB_P_PUSHSYMNEAR, 20,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01529 */ HB_P_LINEOFFSET, 67,	/* 79 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 01573) */
/* 01541 */ HB_P_LINEOFFSET, 68,	/* 80 */
	HB_P_LOCALNEARSETINT, 17, 1, 0,	/* MFILA 1*/
/* 01547 */ HB_P_LINEOFFSET, 69,	/* 81 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 29, 0,	/* 29*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 34,	/* RAZAO */
	HB_P_DOSHORT, 1,
/* 01573 */ HB_P_LINEOFFSET, 71,	/* 83 */
	HB_P_PUSHSYMNEAR, 20,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01581 */ HB_P_LINEOFFSET, 72,	/* 84 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MCODCONTA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01626) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01631) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', 'c', 'o', 'n', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'@', '!', ' ', '9', '.', '9', '9', 0, 
	HB_P_PUSHBLOCK, 40, 0,	/* 40 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	14, 0,	/* MCODCONTA */
	4, 0,	/* LC */
	5, 0,	/* CC */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 35,	/* VERDESP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 01693) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 36,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 75, 0,	/* 75 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	4, 0,	/* LC */
	5, 0,	/* CC */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FORN */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 57,	/* 57 (abs: 01768) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 37,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'C', 'o', 'n', 't', 'a', ' ', 'D', 'e', 's', 'p', 'e', 's', 'a', ' ', 'o', 'u', ' ', '<', 'F', '1', '>', 'A', 'j', 'u', 'd', 'a', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01785 */ HB_P_LINEOFFSET, 73,	/* 85 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 33, 0,	/* 33*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	18, 0,	/* MCODIGO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01830) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01835) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 40, 0,	/* 40 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	18, 0,	/* MCODIGO */
	4, 0,	/* LC */
	5, 0,	/* CC */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 38,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 01893) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 36,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 108, 0,	/* 108 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	4, 0,	/* LC */
	5, 0,	/* CC */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FORN */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 90,	/* 90 (abs: 02001) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 37,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHSTRSHORT, 70,	/* 70 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'u', 'l', 't', 'i', 'm', 'o', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'f', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'o', ' ', 'o', 'u', ' ', 'n', 'a', 'o', ' ', 'p', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'p', '/', 'T', 'O', 'D', 'O', 'S', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02018 */ HB_P_LINEOFFSET, 74,	/* 86 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MCLASSIF */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02063) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02068) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'l', 'a', 's', 's', 'i', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MCLASSIF */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', ',', '2', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FORN */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02127 */ HB_P_LINEOFFSET, 75,	/* 87 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MDATA_INI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02172) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02177) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FORN */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02226 */ HB_P_LINEOFFSET, 76,	/* 88 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 38, 0,	/* 38*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	20, 0,	/* MDATA_FIM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02271) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02276) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'd', 'a', 't', 'a', '_', 'f', 'i', 'm', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	20, 0,	/* MDATA_FIM */
	19, 0,	/* MDATA_INI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02321) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02322) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MDATA_INI */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02357 */ HB_P_LINEOFFSET, 77,	/* 89 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 12, 0,	/* 12*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 38, 0,	/* 38*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MESPACO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02402) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02407) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'e', 's', 'p', 'a', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 20, 0,	/* 20 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MESPACO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02441) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02442) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FORN */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02467 */ HB_P_LINEOFFSET, 78,	/* 90 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 13, 0,	/* 13*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MLINHAS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02512) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02517) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'l', 'i', 'n', 'h', 'a', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02550 */ HB_P_LINEOFFSET, 79,	/* 91 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 14, 0,	/* 14*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MFILA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02595) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02600) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'f', 'i', 'l', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 39,	/* RANGECHECK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FORN */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02656 */ HB_P_LINEOFFSET, 80,	/* 92 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MQTD_ETQ */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02701) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02706) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'q', 't', 'd', '_', 'e', 't', 'q', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02741 */ HB_P_LINEOFFSET, 81,	/* 93 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 16, 0,	/* 16*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCOD */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02786) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02791) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'c', 'o', 'd', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCOD */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02840 */ HB_P_LINEOFFSET, 82,	/* 94 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MQUANTD */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02885) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02890) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'q', 'u', 'a', 'n', 't', 'd', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 12,	/* 12 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02935 */ HB_P_LINEOFFSET, 83,	/* 95 */
	HB_P_PUSHSYMNEAR, 30,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 26, 0,	/* GETLIST */
/* 02957 */ HB_P_LINEOFFSET, 84,	/* 96 */
	HB_P_PUSHSYMNEAR, 31,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02972) */
	HB_P_JUMP, 192, 10,	/* 2752 (abs: 05721) */
/* 02972 */ HB_P_LINEOFFSET, 88,	/* 100 */
	HB_P_PUSHSYMNEAR, 40,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'E', 'T', 'Q', '_', 'F', 'O', 'R', 'N', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 03003) */
	HB_P_JUMP, 143, 245,	/* -2673 (abs: 00327) */
/* 03003 */ HB_P_LINEOFFSET, 91,	/* 103 */
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* MCONTADOR 0*/
/* 03009 */ HB_P_LINEOFFSET, 92,	/* 104 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 57, 5,	/* 1337 (abs: 04356) */
/* 03022 */ HB_P_LINEOFFSET, 94,	/* 106 */
	HB_P_PUSHSYMNEAR, 9,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 13,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCLASSIF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 03048 */ HB_P_LINEOFFSET, 96,	/* 108 */
	HB_P_PUSHSYMNEAR, 14,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03055 */ HB_P_LINEOFFSET, 97,	/* 109 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MCODIGO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 03102) */
/* 03066 */ HB_P_LINEOFFSET, 98,	/* 110 */
	HB_P_PUSHSYMNEAR, 42,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MCODIGO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 43,	/* COD_FORN */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03094) */
/* 03084 */ HB_P_LINEOFFSET, 99,	/* 111 */
	HB_P_PUSHSYMNEAR, 44,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 230,	/* -26 (abs: 03066) */
/* 03094 */ HB_P_LINEOFFSET, 101,	/* 113 */
	HB_P_PUSHSYMNEAR, 44,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 03102 */ HB_P_LINEOFFSET, 103,	/* 115 */
	HB_P_PUSHSYMNEAR, 45,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUE, 163, 8,	/* 2211 (abs: 05320) */
/* 03112 */ HB_P_LINEOFFSET, 104,	/* 116 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MDATA_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 03155) */
/* 03123 */ HB_P_LINEOFFSET, 105,	/* 117 */
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 46,	/* DATA_CAD */
	HB_P_PUSHLOCALNEAR, 19,	/* MDATA_INI */
	HB_P_LESS,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 03143) */
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 46,	/* DATA_CAD */
	HB_P_PUSHLOCALNEAR, 20,	/* MDATA_FIM */
	HB_P_GREATER,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03155) */
/* 03145 */ HB_P_LINEOFFSET, 106,	/* 118 */
	HB_P_PUSHSYMNEAR, 44,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 205,	/* -51 (abs: 03102) */
/* 03155 */ HB_P_LINEOFFSET, 110,	/* 122 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MCODCONTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 03175) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 14,	/* MCODCONTA */
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* TIPO */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03187) */
/* 03177 */ HB_P_LINEOFFSET, 111,	/* 123 */
	HB_P_PUSHSYMNEAR, 44,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 173,	/* -83 (abs: 03102) */
/* 03187 */ HB_P_LINEOFFSET, 114,	/* 126 */
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 34,	/* RAZAO */
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 48,	/* ENDERECO */
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 49,	/* BAIRRO */
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 50,	/* CIDADE */
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 51,	/* UF */
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 52,	/* CEP */
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 43,	/* COD_FORN */
	HB_P_ARRAYGEN, 7, 0,	/* 7 */
	HB_P_DOSHORT, 2,
/* 03227 */ HB_P_LINEOFFSET, 115,	/* 127 */
	HB_P_PUSHLOCALNEAR, 17,	/* MFILA */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 213, 2,	/* 725 (abs: 03958) */
/* 03236 */ HB_P_LINEOFFSET, 116,	/* 128 */
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 187, 2,	/* 699 (abs: 03947) */
/* 03251 */ HB_P_LINEOFFSET, 117,	/* 129 */
	HB_P_LOCALNEARSETINT, 13, 0, 0,	/* I 0*/
/* 03257 */ HB_P_LINEOFFSET, 118,	/* 130 */
	HB_P_LOCALNEARSETINT, 13, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 152, 2,	/* 664 (abs: 03937) */
/* 03276 */ HB_P_LINEOFFSET, 119,	/* 131 */
	HB_P_PUSHSYMNEAR, 54,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03290 */ HB_P_LINEOFFSET, 120,	/* 132 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03318 */ HB_P_LINEOFFSET, 121,	/* 133 */
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 03372) */
/* 03329 */ HB_P_LINEOFFSET, 122,	/* 134 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 56,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 03405) */
/* 03372 */ HB_P_LINEOFFSET, 124,	/* 136 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 56,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 03405 */ HB_P_LINEOFFSET, 126,	/* 138 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 56,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 15,	/* MESPACO */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03449) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 03482) */
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03484 */ HB_P_LINEOFFSET, 127,	/* 139 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03513 */ HB_P_LINEOFFSET, 128,	/* 140 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHLOCALNEAR, 15,	/* MESPACO */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03554) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 03565) */
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03567 */ HB_P_LINEOFFSET, 129,	/* 141 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03643 */ HB_P_LINEOFFSET, 130,	/* 142 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHLOCALNEAR, 15,	/* MESPACO */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03684) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_JUMPNEAR, 66,	/* 66 (abs: 03748) */
	HB_P_PUSHSYMNEAR, 57,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03750 */ HB_P_LINEOFFSET, 131,	/* 143 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'E', 'P', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03788 */ HB_P_LINEOFFSET, 132,	/* 144 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHLOCALNEAR, 15,	/* MESPACO */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03829) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_JUMPNEAR, 22,	/* 22 (abs: 03849) */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'E', 'P', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03851 */ HB_P_LINEOFFSET, 133,	/* 145 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 16,	/* MLINHAS */
	HB_P_PLUS,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 03876 */ HB_P_LINEOFFSET, 134,	/* 146 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* I 1*/
/* 03882 */ HB_P_LINEOFFSET, 135,	/* 147 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 03928) */
/* 03894 */ HB_P_LINEOFFSET, 136,	/* 148 */
	HB_P_LOCALNEARADDINT, 11, 1, 0,	/* MCONTADOR 1*/
/* 03900 */ HB_P_LINEOFFSET, 137,	/* 149 */
	HB_P_LOCALNEARADDINT, 11, 1, 0,	/* MCONTADOR 1*/
/* 03906 */ HB_P_LINEOFFSET, 138,	/* 150 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCONTADOR */
	HB_P_PUSHLOCALNEAR, 12,	/* MQTD_ETQ */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 03928) */
/* 03915 */ HB_P_LINEOFFSET, 139,	/* 151 */
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* MCONTADOR 0*/
/* 03921 */ HB_P_LINEOFFSET, 140,	/* 152 */
	HB_P_PUSHSYMNEAR, 58,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03928 */ HB_P_LINEOFFSET, 143,	/* 155 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* I 1*/
	HB_P_JUMP, 97, 253,	/* -671 (abs: 03263) */
/* 03937 */ HB_P_LINEOFFSET, 144,	/* 156 */
	HB_P_PUSHSYMNEAR, 19,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 03947 */ HB_P_LINEOFFSET, 146,	/* 158 */
	HB_P_PUSHSYMNEAR, 44,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 171, 252,	/* -853 (abs: 03102) */
/* 03958 */ HB_P_LINEOFFSET, 148,	/* 160 */
	HB_P_LOCALNEARSETINT, 13, 0, 0,	/* I 0*/
/* 03964 */ HB_P_LINEOFFSET, 149,	/* 161 */
	HB_P_LOCALNEARSETINT, 13, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 99, 1,	/* 355 (abs: 04335) */
/* 03983 */ HB_P_LINEOFFSET, 150,	/* 162 */
	HB_P_PUSHSYMNEAR, 54,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03997 */ HB_P_LINEOFFSET, 151,	/* 163 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04025 */ HB_P_LINEOFFSET, 152,	/* 164 */
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 04079) */
/* 04036 */ HB_P_LINEOFFSET, 153,	/* 165 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 56,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 04112) */
/* 04079 */ HB_P_LINEOFFSET, 155,	/* 167 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 56,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 04112 */ HB_P_LINEOFFSET, 157,	/* 169 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04141 */ HB_P_LINEOFFSET, 158,	/* 170 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04217 */ HB_P_LINEOFFSET, 159,	/* 171 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'E', 'P', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04255 */ HB_P_LINEOFFSET, 160,	/* 172 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 16,	/* MLINHAS */
	HB_P_PLUS,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 04280 */ HB_P_LINEOFFSET, 161,	/* 173 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 04326) */
/* 04292 */ HB_P_LINEOFFSET, 162,	/* 174 */
	HB_P_LOCALNEARADDINT, 11, 1, 0,	/* MCONTADOR 1*/
/* 04298 */ HB_P_LINEOFFSET, 163,	/* 175 */
	HB_P_LOCALNEARADDINT, 11, 1, 0,	/* MCONTADOR 1*/
/* 04304 */ HB_P_LINEOFFSET, 164,	/* 176 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCONTADOR */
	HB_P_PUSHLOCALNEAR, 12,	/* MQTD_ETQ */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 04326) */
/* 04313 */ HB_P_LINEOFFSET, 165,	/* 177 */
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* MCONTADOR 0*/
/* 04319 */ HB_P_LINEOFFSET, 166,	/* 178 */
	HB_P_PUSHSYMNEAR, 58,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04326 */ HB_P_LINEOFFSET, 169,	/* 181 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* I 1*/
	HB_P_JUMP, 150, 254,	/* -362 (abs: 03970) */
/* 04335 */ HB_P_LINEOFFSET, 170,	/* 182 */
	HB_P_PUSHSYMNEAR, 19,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 04345 */ HB_P_LINEOFFSET, 171,	/* 183 */
	HB_P_PUSHSYMNEAR, 44,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 29, 251,	/* -1251 (abs: 03102) */
/* 04356 */ HB_P_LINEOFFSET, 175,	/* 187 */
	HB_P_PUSHLOCALNEAR, 17,	/* MFILA */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 103, 2,	/* 615 (abs: 04977) */
/* 04365 */ HB_P_LINEOFFSET, 176,	/* 188 */
	HB_P_LOCALNEARSETINT, 13, 0, 0,	/* I 0*/
/* 04371 */ HB_P_LINEOFFSET, 177,	/* 189 */
	HB_P_LOCALNEARSETINT, 13, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_PUSHLOCALNEAR, 22,	/* MQUANTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 170, 3,	/* 938 (abs: 05320) */
/* 04385 */ HB_P_LINEOFFSET, 178,	/* 190 */
	HB_P_PUSHSYMNEAR, 54,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 04399 */ HB_P_LINEOFFSET, 179,	/* 191 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 34,	/* RAZAO */
	HB_P_DOSHORT, 1,
/* 04424 */ HB_P_LINEOFFSET, 180,	/* 192 */
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 04474) */
/* 04435 */ HB_P_LINEOFFSET, 181,	/* 193 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 56,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 43,	/* COD_FORN */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 04507) */
/* 04474 */ HB_P_LINEOFFSET, 183,	/* 195 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 56,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 04507 */ HB_P_LINEOFFSET, 185,	/* 197 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 56,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 15,	/* MESPACO */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 04551) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_JUMPNEAR, 28,	/* 28 (abs: 04577) */
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 43,	/* COD_FORN */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04579 */ HB_P_LINEOFFSET, 186,	/* 198 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 48,	/* ENDERECO */
	HB_P_DOSHORT, 1,
/* 04604 */ HB_P_LINEOFFSET, 187,	/* 199 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHLOCALNEAR, 15,	/* MESPACO */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 04645) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 04649) */
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 48,	/* ENDERECO */
	HB_P_DOSHORT, 1,
/* 04651 */ HB_P_LINEOFFSET, 188,	/* 200 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 49,	/* BAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 50,	/* CIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 51,	/* UF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04715 */ HB_P_LINEOFFSET, 189,	/* 201 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHLOCALNEAR, 15,	/* MESPACO */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 04756) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 04799) */
	HB_P_PUSHSYMNEAR, 57,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 49,	/* BAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 50,	/* CIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 51,	/* UF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04801 */ HB_P_LINEOFFSET, 190,	/* 202 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'E', 'P', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 52,	/* CEP */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04835 */ HB_P_LINEOFFSET, 191,	/* 203 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHLOCALNEAR, 15,	/* MESPACO */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 04876) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_JUMPNEAR, 15,	/* 15 (abs: 04889) */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'E', 'P', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 52,	/* CEP */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04891 */ HB_P_LINEOFFSET, 192,	/* 204 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 16,	/* MLINHAS */
	HB_P_PLUS,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 04916 */ HB_P_LINEOFFSET, 193,	/* 205 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* I 1*/
/* 04922 */ HB_P_LINEOFFSET, 194,	/* 206 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 04968) */
/* 04934 */ HB_P_LINEOFFSET, 195,	/* 207 */
	HB_P_LOCALNEARADDINT, 11, 1, 0,	/* MCONTADOR 1*/
/* 04940 */ HB_P_LINEOFFSET, 196,	/* 208 */
	HB_P_LOCALNEARADDINT, 11, 1, 0,	/* MCONTADOR 1*/
/* 04946 */ HB_P_LINEOFFSET, 197,	/* 209 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCONTADOR */
	HB_P_PUSHLOCALNEAR, 12,	/* MQTD_ETQ */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 04968) */
/* 04955 */ HB_P_LINEOFFSET, 198,	/* 210 */
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* MCONTADOR 0*/
/* 04961 */ HB_P_LINEOFFSET, 199,	/* 211 */
	HB_P_PUSHSYMNEAR, 58,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04968 */ HB_P_LINEOFFSET, 202,	/* 214 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* I 1*/
	HB_P_JUMP, 171, 253,	/* -597 (abs: 04377) */
/* 04977 */ HB_P_LINEOFFSET, 204,	/* 216 */
	HB_P_LOCALNEARSETINT, 13, 0, 0,	/* I 0*/
/* 04983 */ HB_P_LINEOFFSET, 205,	/* 217 */
	HB_P_LOCALNEARSETINT, 13, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_PUSHLOCALNEAR, 22,	/* MQUANTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 26, 1,	/* 282 (abs: 05276) */
/* 04997 */ HB_P_LINEOFFSET, 206,	/* 218 */
	HB_P_PUSHSYMNEAR, 54,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 05011 */ HB_P_LINEOFFSET, 207,	/* 219 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 34,	/* RAZAO */
	HB_P_DOSHORT, 1,
/* 05036 */ HB_P_LINEOFFSET, 208,	/* 220 */
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 05086) */
/* 05047 */ HB_P_LINEOFFSET, 209,	/* 221 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 56,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 43,	/* COD_FORN */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 05119) */
/* 05086 */ HB_P_LINEOFFSET, 211,	/* 223 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 56,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 05119 */ HB_P_LINEOFFSET, 213,	/* 225 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 48,	/* ENDERECO */
	HB_P_DOSHORT, 1,
/* 05144 */ HB_P_LINEOFFSET, 214,	/* 226 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 49,	/* BAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 50,	/* CIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 51,	/* UF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05208 */ HB_P_LINEOFFSET, 215,	/* 227 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'E', 'P', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 52,	/* CEP */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05242 */ HB_P_LINEOFFSET, 216,	/* 228 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 16,	/* MLINHAS */
	HB_P_PLUS,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 05267 */ HB_P_LINEOFFSET, 217,	/* 229 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* I 1*/
	HB_P_JUMP, 228, 254,	/* -284 (abs: 04989) */
/* 05276 */ HB_P_LINEOFFSET, 218,	/* 230 */
	HB_P_PUSHSYMNEAR, 59,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 59,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 59,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 130, 236,	/* -4990 (abs: 00327) */
/* 05320 */ HB_P_LINEOFFSET, 223,	/* 235 */
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 47, 1,	/* 303 (abs: 05634) */
/* 05334 */ HB_P_LINEOFFSET, 224,	/* 236 */
	HB_P_PUSHSYMNEAR, 54,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 05348 */ HB_P_LINEOFFSET, 225,	/* 237 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05375 */ HB_P_LINEOFFSET, 226,	/* 238 */
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 05428) */
/* 05386 */ HB_P_LINEOFFSET, 227,	/* 239 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 56,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 05461) */
/* 05428 */ HB_P_LINEOFFSET, 229,	/* 241 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 56,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 05461 */ HB_P_LINEOFFSET, 231,	/* 243 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05489 */ HB_P_LINEOFFSET, 232,	/* 244 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05562 */ HB_P_LINEOFFSET, 233,	/* 245 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'E', 'P', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05599 */ HB_P_LINEOFFSET, 234,	/* 246 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 16,	/* MLINHAS */
	HB_P_PLUS,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 05624 */ HB_P_LINEOFFSET, 235,	/* 247 */
	HB_P_PUSHSYMNEAR, 19,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_ETQ */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 05634 */ HB_P_LINEOFFSET, 237,	/* 249 */
	HB_P_PUSHSYMNEAR, 54,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 05648 */ HB_P_LINEOFFSET, 238,	/* 250 */
	HB_P_PUSHSYMNEAR, 58,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05655 */ HB_P_LINEOFFSET, 239,	/* 251 */
	HB_P_PUSHSYMNEAR, 59,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 59,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 59,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 05696 */ HB_P_LINEOFFSET, 240,	/* 252 */
	HB_P_PUSHSYMNEAR, 60,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'E', 'T', 'Q', '_', 'F', 'O', 'R', 'N', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 241, 234,	/* -5391 (abs: 00327) */
/* 05721 */ HB_P_LINEOFFSET, 242,	/* 254 */
	HB_P_PUSHSYMNEAR, 61,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05728 */ HB_P_LINEOFFSET, 243,	/* 255 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 05733 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

