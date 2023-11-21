/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC524.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC524.PRG /q /oC:\hti\SISCOM\SAC524.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.11.21 09:47:26 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC524.PRG"

HB_FUNC( SAC524 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( SET_KEY );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( VER_COD );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( FIMSET );
HB_FUNC_EXTERN( __MVXRELEASE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC524 )
{ "SAC524", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC524 )}, NULL },
{ "MTRACO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TELAPRINT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCODIGO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MUF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFORNECE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "SET_KEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET_KEY )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_COD", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_COD )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "FIMSET", {HB_FS_PUBLIC}, {HB_FUNCNAME( FIMSET )}, NULL },
{ "__MVXRELEASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVXRELEASE )}, NULL },
{ "FORN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "RAZAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PRODUTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_MOV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC524 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC524
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC524 = hb_vm_SymbolInit_SAC524;
   #pragma data_seg()
#endif

HB_FUNC( SAC524 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 12, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 10, 0,	/* 10 */
	HB_P_LOCALNEARSETSTR, 2, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '5', '2', '4', 0, 
	HB_P_LOCALNEARSETSTR, 3, 33, 0,	/* MTITULO 33*/
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'P', '/', 'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', 0, 
	HB_P_LOCALNEARSETINT, 13, 0, 0,	/* I 0*/
/* 00058 */ HB_P_LINEOFFSET, 3,	/* 13 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 13,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 14,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MTRACO */
	HB_P_PUSHSYMNEAR, 2,	/* TELAPRINT */
	HB_P_PUSHSYMNEAR, 3,	/* MTIT */
	HB_P_PUSHSYMNEAR, 4,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 5,	/* MPAG */
	HB_P_PUSHSYMNEAR, 6,	/* MCODIGO */
	HB_P_PUSHSYMNEAR, 7,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 8,	/* MUF */
	HB_P_PUSHSYMNEAR, 9,	/* MFORNECE */
	HB_P_PUSHSYMNEAR, 10,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 11,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 12,	/* MARQ */
	HB_P_DOSHORT, 12,
	HB_P_POPVARIABLE, 12, 0,	/* MARQ */
	HB_P_POPVARIABLE, 11, 0,	/* MIMP_TIPO */
/* 00103 */ HB_P_LINEOFFSET, 5,	/* 15 */
	HB_P_PUSHSYMNEAR, 15,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 3,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 16, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00138) */
/* 00133 */ HB_P_LINEOFFSET, 6,	/* 16 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00138 */ HB_P_LINEOFFSET, 8,	/* 18 */
	HB_P_PUSHSYMNEAR, 17,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 1, 0,	/* MTRACO */
/* 00155 */ HB_P_LINEOFFSET, 10,	/* 20 */
	HB_P_PUSHSYMNEAR, 18,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00184) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00184 */ HB_P_LINEOFFSET, 11,	/* 21 */
	HB_P_PUSHSYMNEAR, 18,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00213) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00213 */ HB_P_LINEOFFSET, 13,	/* 23 */
	HB_P_PUSHSYMNEAR, 19,	/* SET_KEY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_DOSHORT, 1,
/* 00227 */ HB_P_LINEOFFSET, 14,	/* 24 */
	HB_P_PUSHSYMNEAR, 20,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_PUSHLOCALNEAR, 3,	/* MTITULO */
	HB_P_DOSHORT, 5,
/* 00244 */ HB_P_LINEOFFSET, 16,	/* 26 */
	HB_P_PUSHLOCALNEAR, 1,	/* MFOR */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00261) */
/* 00252 */ HB_P_LINEOFFSET, 17,	/* 27 */
	HB_P_PUSHLOCALNEAR, 1,	/* MFOR */
	HB_P_POPVARIABLE, 7, 0,	/* MCOD_FORN */
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 00267) */
/* 00261 */ HB_P_LINEOFFSET, 19,	/* 29 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 7, 0,	/* MCOD_FORN */
/* 00267 */ HB_P_LINEOFFSET, 21,	/* 31 */
	HB_P_PUSHMEMVAR, 21, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 10, 0,	/* MTIPO_IMP */
/* 00280 */ HB_P_LINEOFFSET, 22,	/* 32 */
	HB_P_LOCALNEARSETSTR, 12, 2, 0,	/* MENT_SAI 2*/
	'E', 0, 
/* 00288 */ HB_P_LINEOFFSET, 23,	/* 33 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 6, 0,	/* MCODIGO */
/* 00294 */ HB_P_LINEOFFSET, 24,	/* 34 */
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* MDATA1 */
/* 00314 */ HB_P_LINEOFFSET, 25,	/* 35 */
	HB_P_PUSHMEMVAR, 23, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 7,	/* MDATA2 */
/* 00321 */ HB_P_LINEOFFSET, 26,	/* 36 */
	HB_P_PUSHSYMNEAR, 13,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* MCOD_OP */
/* 00332 */ HB_P_LINEOFFSET, 27,	/* 37 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* MQUANTD 0*/
/* 00338 */ HB_P_LINEOFFSET, 28,	/* 38 */
	HB_P_PUSHSYMNEAR, 24,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00380 */ HB_P_LINEOFFSET, 29,	/* 39 */
	HB_P_PUSHSYMNEAR, 25,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 5,
/* 00396 */ HB_P_LINEOFFSET, 30,	/* 40 */
	HB_P_PUSHSYMNEAR, 25,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00411 */ HB_P_LINEOFFSET, 31,	/* 41 */
	HB_P_PUSHSYMNEAR, 25,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 5,
/* 00427 */ HB_P_LINEOFFSET, 32,	/* 42 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'd', '.', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00466 */ HB_P_LINEOFFSET, 33,	/* 43 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'd', '.', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00506 */ HB_P_LINEOFFSET, 34,	/* 44 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'd', '.', 'O', 'p', 'e', 'r', 'a', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00546 */ HB_P_LINEOFFSET, 35,	/* 45 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00586 */ HB_P_LINEOFFSET, 36,	/* 46 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00626 */ HB_P_LINEOFFSET, 37,	/* 47 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'[', 'E', ']', 'n', 't', 'r', 'a', 'd', 'a', 's', ' ', ' ', '[', 'S', ']', 'a', 'i', 'd', 'a', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00666 */ HB_P_LINEOFFSET, 39,	/* 49 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 27,	/* 27 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00720) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 00731) */
	HB_P_PUSHSYMNEAR, 33,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_FORN */
	HB_P_ONE,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 34, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00749 */ HB_P_LINEOFFSET, 40,	/* 50 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 17,	/* 17 */
	HB_P_PUSHSYMNEAR, 35,	/* VER_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCODIGO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 34, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00822 */ HB_P_LINEOFFSET, 41,	/* 51 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MCOD_OP */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00861) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00866) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', '_', 'o', 'p', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 27, 0,	/* 27 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MCOD_OP */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'0', '1', ',', '0', '2', ',', '0', '3', ',', '0', '4', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 34, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00926 */ HB_P_LINEOFFSET, 42,	/* 52 */
	HB_P_PUSHSYMNEAR, 36,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 30, 0,	/* GETLIST */
/* 00948 */ HB_P_LINEOFFSET, 43,	/* 53 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00987) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00992) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '1', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MDATA1 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01034) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01035) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 34, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01053 */ HB_P_LINEOFFSET, 44,	/* 54 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01092) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01097) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '2', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	7, 0,	/* MDATA2 */
	6, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01139) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01140) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 34, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01158 */ HB_P_LINEOFFSET, 45,	/* 55 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MENT_SAI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01197) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01202) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'e', 'n', 't', '_', 's', 'a', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MENT_SAI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'E', ',', 'S', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 34, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01255 */ HB_P_LINEOFFSET, 46,	/* 56 */
	HB_P_PUSHSYMNEAR, 36,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 30, 0,	/* GETLIST */
/* 01277 */ HB_P_LINEOFFSET, 47,	/* 57 */
	HB_P_PUSHSYMNEAR, 37,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 101,	/* 101 (abs: 01388) */
/* 01289 */ HB_P_LINEOFFSET, 48,	/* 58 */
	HB_P_PUSHSYMNEAR, 38,	/* FIMSET */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01296 */ HB_P_LINEOFFSET, 49,	/* 59 */
	HB_P_PUSHSYMNEAR, 39,	/* __MVXRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 't', 'r', 'a', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	't', 'e', 'l', 'a', 'p', 'r', 'i', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 't', 'i', 't', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 't', 'i', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'p', 'a', 'g', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'm', 'u', 'f', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'f', 'o', 'r', 'n', 'e', 'c', 'e', 0, 
	HB_P_DOSHORT, 9,
	HB_P_JUMP, 201, 12,	/* 3273 (abs: 04658) */
/* 01388 */ HB_P_LINEOFFSET, 52,	/* 62 */
	HB_P_PUSHSYMNEAR, 40,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 41,	/* RAZAO */
	HB_P_POPVARIABLE, 9, 0,	/* MFORNECE */
/* 01397 */ HB_P_LINEOFFSET, 53,	/* 63 */
	HB_P_PUSHLOCALNEAR, 12,	/* MENT_SAI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 254, 0,	/* 254 (abs: 01660) */
/* 01409 */ HB_P_LINEOFFSET, 54,	/* 64 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCODIGO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 140, 0,	/* 140 (abs: 01559) */
/* 01422 */ HB_P_LINEOFFSET, 55,	/* 65 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ':', 0, 
	HB_P_PUSHSYMNEAR, 42,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 9, 0,	/* MFORNECE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', '(', 'E', 'N', 'T', 'R', 'A', 'D', 'A', 'S', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 01476 */ HB_P_LINEOFFSET, 56,	/* 66 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'M', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 43,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 't', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 43,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', '-', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCODIGO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 44,	/* MERC */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
	HB_P_JUMP, 92, 1,	/* 348 (abs: 01904) */
/* 01559 */ HB_P_LINEOFFSET, 58,	/* 68 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ':', 0, 
	HB_P_PUSHSYMNEAR, 42,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 9, 0,	/* MFORNECE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', '(', 'E', 'N', 'T', 'R', 'A', 'D', 'A', 'S', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 01613 */ HB_P_LINEOFFSET, 59,	/* 69 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'M', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 43,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 't', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 43,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
	HB_P_JUMP, 247, 0,	/* 247 (abs: 01904) */
/* 01660 */ HB_P_LINEOFFSET, 62,	/* 72 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCODIGO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 137, 0,	/* 137 (abs: 01807) */
/* 01673 */ HB_P_LINEOFFSET, 63,	/* 73 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ':', 0, 
	HB_P_PUSHSYMNEAR, 42,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 9, 0,	/* MFORNECE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '(', 'S', 'A', 'I', 'D', 'A', 'S', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 01725 */ HB_P_LINEOFFSET, 64,	/* 74 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'M', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 43,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 't', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 43,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', '-', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCODIGO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 45,	/* PRODUTO */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
	HB_P_JUMPNEAR, 99,	/* 99 (abs: 01904) */
/* 01807 */ HB_P_LINEOFFSET, 66,	/* 76 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ':', 0, 
	HB_P_PUSHSYMNEAR, 42,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 9, 0,	/* MFORNECE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', '(', 'S', 'A', 'I', 'D', 'A', 'S', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 01860 */ HB_P_LINEOFFSET, 67,	/* 77 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'M', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 43,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 't', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 43,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 01904 */ HB_P_LINEOFFSET, 70,	/* 80 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 46, 0,	/* CONS_MOV */
/* 01912 */ HB_P_LINEOFFSET, 71,	/* 81 */
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_OP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'0', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 189, 0,	/* 189 (abs: 02111) */
/* 01925 */ HB_P_LINEOFFSET, 72,	/* 82 */
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', ' ', 'B', 'E', 'T', 'W', 'E', 'E', 'N', ' ', 0, 
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02003 */ HB_P_LINEOFFSET, 73,	/* 83 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	' ', 'A', 'N', 'D', ' ', '(', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, '0', '1', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, '0', '3', 39, ')', ' ', 'A', 'N', 'D', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02067 */ HB_P_LINEOFFSET, 74,	/* 84 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'A', 'N', 'D', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'N', 'O', 'T', ' ', 'L', 'I', 'K', 'E', ' ', 39, 'T', 'R', '%', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
	HB_P_JUMP, 202, 0,	/* 202 (abs: 02310) */
/* 02111 */ HB_P_LINEOFFSET, 76,	/* 86 */
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', ' ', 'B', 'E', 'T', 'W', 'E', 'E', 'N', ' ', 0, 
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02189 */ HB_P_LINEOFFSET, 77,	/* 87 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 69,	/* 69 */
	' ', 'A', 'N', 'D', ' ', '(', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, '0', '1', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, '0', '2', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ')', ' ', 'A', 'N', 'D', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02269 */ HB_P_LINEOFFSET, 78,	/* 88 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'A', 'N', 'D', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'N', 'O', 'T', ' ', 'L', 'I', 'K', 'E', ' ', 39, 'T', 'R', '%', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02310 */ HB_P_LINEOFFSET, 94,	/* 104 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCODIGO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 02364) */
/* 02322 */ HB_P_LINEOFFSET, 95,	/* 105 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCODIGO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02364 */ HB_P_LINEOFFSET, 97,	/* 107 */
	HB_P_PUSHLOCALNEAR, 12,	/* MENT_SAI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 78,	/* 78 (abs: 02451) */
/* 02375 */ HB_P_LINEOFFSET, 98,	/* 108 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', '=', ' ', 39, 'E', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02405 */ HB_P_LINEOFFSET, 99,	/* 109 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 75,	/* 75 (abs: 02524) */
/* 02451 */ HB_P_LINEOFFSET, 101,	/* 111 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', '=', ' ', 39, 'S', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02481 */ HB_P_LINEOFFSET, 102,	/* 112 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02524 */ HB_P_LINEOFFSET, 104,	/* 114 */
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 48, 0,	/* CCOMM */
/* 02554 */ HB_P_LINEOFFSET, 105,	/* 115 */
	HB_P_MESSAGE, 49, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 50,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 48, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 46, 0,	/* CONS_MOV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02575 */ HB_P_LINEOFFSET, 106,	/* 116 */
	HB_P_MESSAGE, 49, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 50,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02599 */ HB_P_LINEOFFSET, 107,	/* 117 */
	HB_P_PUSHSYMNEAR, 51,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 46, 0,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 02660) */
/* 02613 */ HB_P_LINEOFFSET, 108,	/* 118 */
	HB_P_PUSHSYMNEAR, 52,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'm', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 147, 246,	/* -2413 (abs: 00244) */
/* 02660 */ HB_P_LINEOFFSET, 111,	/* 121 */
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* MENT_BAL 0*/
	HB_P_PUSHLOCALNEAR, 11,	/* MENT_BAL */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* MVLR_ENT */
	HB_P_POPLOCALNEAR, 9,	/* MTOT_ENT */
/* 02673 */ HB_P_LINEOFFSET, 112,	/* 122 */
	HB_P_PUSHSYMNEAR, 24,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'E', 's', 'p', 'e', 'r', 'e', ' ', 'o', ' ', 'F', 'i', 'n', 'a', 'l', ' ', 'd', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'O', 'K', ' ', '-', ' ', '[', 'E', 'S', 'C', ']', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 02725 */ HB_P_LINEOFFSET, 113,	/* 123 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 02731 */ HB_P_LINEOFFSET, 114,	/* 124 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'M', 'O', 'V', '_', 'F', 'O', 'R', 'N', '.', 'R', 'E', 'L', 0, 
	HB_P_POPVARIABLE, 12, 0,	/* MARQ */
/* 02751 */ HB_P_LINEOFFSET, 115,	/* 125 */
	HB_P_PUSHSYMNEAR, 53,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'M', 'O', 'V', '_', 'F', 'O', 'R', 'N', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 02782) */
	HB_P_JUMP, 25, 246,	/* -2535 (abs: 00244) */
/* 02782 */ HB_P_LINEOFFSET, 118,	/* 128 */
	HB_P_PUSHSYMNEAR, 54,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 02800 */ HB_P_LINEOFFSET, 119,	/* 129 */
	HB_P_PUSHSYMNEAR, 55,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 02814 */ HB_P_LINEOFFSET, 120,	/* 130 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 02843 */ HB_P_LINEOFFSET, 121,	/* 131 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02869 */ HB_P_LINEOFFSET, 122,	/* 132 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 02900 */ HB_P_LINEOFFSET, 123,	/* 133 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'o', 'c', '.', '(', 'N', 'F', ')', 0, 
	HB_P_DOSHORT, 1,
/* 02930 */ HB_P_LINEOFFSET, 124,	/* 134 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'Q', 'u', 'a', 'n', 't', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02959 */ HB_P_LINEOFFSET, 125,	/* 135 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 82,	/* 82 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'V', 'a', 'l', 'o', 'r', ' ', 'U', 'n', 'i', 't', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02992 */ HB_P_LINEOFFSET, 126,	/* 136 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 96,	/* 96 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'V', 'a', 'l', 'o', 'r', ' ', 'P', 'r', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03026 */ HB_P_LINEOFFSET, 127,	/* 137 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 57,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'N', 'o', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 03066 */ HB_P_LINEOFFSET, 128,	/* 138 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 03090 */ HB_P_LINEOFFSET, 129,	/* 139 */
	HB_P_LOCALNEARSETINT, 13, 0, 0,	/* I 0*/
/* 03096 */ HB_P_LINEOFFSET, 130,	/* 140 */
	HB_P_LOCALNEARSETINT, 13, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_PUSHSYMNEAR, 51,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 46, 0,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 191, 3,	/* 959 (abs: 04072) */
/* 03116 */ HB_P_LINEOFFSET, 131,	/* 141 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03146 */ HB_P_LINEOFFSET, 132,	/* 142 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03174 */ HB_P_LINEOFFSET, 133,	/* 143 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03202 */ HB_P_LINEOFFSET, 134,	/* 144 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03230 */ HB_P_LINEOFFSET, 135,	/* 145 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 69,	/* 69 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 58,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03269 */ HB_P_LINEOFFSET, 136,	/* 146 */
	HB_P_PUSHSYMNEAR, 59,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'B', 'L', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 03315) */
/* 03296 */ HB_P_LINEOFFSET, 137,	/* 147 */
	HB_P_PUSHLOCALNEAR, 11,	/* MENT_BAL */
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* MENT_BAL */
	HB_P_JUMP, 156, 1,	/* 412 (abs: 03724) */
/* 03315 */ HB_P_LINEOFFSET, 139,	/* 149 */
	HB_P_PUSHLOCALNEAR, 12,	/* MENT_SAI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 203, 0,	/* 203 (abs: 03527) */
/* 03327 */ HB_P_LINEOFFSET, 140,	/* 150 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 58,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03370 */ HB_P_LINEOFFSET, 141,	/* 151 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 93,	/* 93 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 58,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03423 */ HB_P_LINEOFFSET, 142,	/* 152 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 57,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 58,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03482 */ HB_P_LINEOFFSET, 143,	/* 153 */
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_ENT */
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* MTOT_ENT */
/* 03498 */ HB_P_LINEOFFSET, 144,	/* 154 */
	HB_P_PUSHLOCALNEAR, 10,	/* MVLR_ENT */
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 10,	/* MVLR_ENT */
	HB_P_JUMP, 200, 0,	/* 200 (abs: 03724) */
/* 03527 */ HB_P_LINEOFFSET, 146,	/* 156 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 58,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03570 */ HB_P_LINEOFFSET, 147,	/* 157 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 93,	/* 93 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 58,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03623 */ HB_P_LINEOFFSET, 148,	/* 158 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 57,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 58,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03682 */ HB_P_LINEOFFSET, 149,	/* 159 */
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_ENT */
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* MTOT_ENT */
/* 03698 */ HB_P_LINEOFFSET, 150,	/* 160 */
	HB_P_PUSHLOCALNEAR, 10,	/* MVLR_ENT */
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 13,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 10,	/* MVLR_ENT */
/* 03724 */ HB_P_LINEOFFSET, 153,	/* 163 */
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 73, 1,	/* 329 (abs: 04063) */
/* 03737 */ HB_P_LINEOFFSET, 154,	/* 164 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 03746 */ HB_P_LINEOFFSET, 155,	/* 165 */
	HB_P_PUSHSYMNEAR, 60,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03753 */ HB_P_LINEOFFSET, 156,	/* 166 */
	HB_P_PUSHSYMNEAR, 54,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 03771 */ HB_P_LINEOFFSET, 157,	/* 167 */
	HB_P_PUSHSYMNEAR, 55,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03785 */ HB_P_LINEOFFSET, 158,	/* 168 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 03814 */ HB_P_LINEOFFSET, 159,	/* 169 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03840 */ HB_P_LINEOFFSET, 160,	/* 170 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03871 */ HB_P_LINEOFFSET, 161,	/* 171 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'o', 'c', '.', '(', 'N', 'F', ')', 0, 
	HB_P_DOSHORT, 1,
/* 03901 */ HB_P_LINEOFFSET, 162,	/* 172 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'Q', 'u', 'a', 'n', 't', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03930 */ HB_P_LINEOFFSET, 163,	/* 173 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 82,	/* 82 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'V', 'a', 'l', 'o', 'r', ' ', 'U', 'n', 'i', 't', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03963 */ HB_P_LINEOFFSET, 164,	/* 174 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 96,	/* 96 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'V', 'a', 'l', 'o', 'r', ' ', 'P', 'r', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03997 */ HB_P_LINEOFFSET, 165,	/* 175 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 57,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'N', 'o', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 04037 */ HB_P_LINEOFFSET, 166,	/* 176 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 04065) */
/* 04063 */ HB_P_LINEOFFSET, 169,	/* 179 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* I 1*/
	HB_P_JUMP, 57, 252,	/* -967 (abs: 03102) */
/* 04072 */ HB_P_LINEOFFSET, 170,	/* 180 */
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 60,	/* 60 (abs: 04142) */
/* 04084 */ HB_P_LINEOFFSET, 171,	/* 181 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 04093 */ HB_P_LINEOFFSET, 172,	/* 182 */
	HB_P_PUSHSYMNEAR, 60,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04100 */ HB_P_LINEOFFSET, 173,	/* 183 */
	HB_P_PUSHSYMNEAR, 54,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 04118 */ HB_P_LINEOFFSET, 174,	/* 184 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 04142 */ HB_P_LINEOFFSET, 176,	/* 186 */
	HB_P_PUSHSYMNEAR, 55,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 04156 */ HB_P_LINEOFFSET, 177,	/* 187 */
	HB_P_PUSHLOCALNEAR, 12,	/* MENT_SAI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 04230) */
/* 04167 */ HB_P_LINEOFFSET, 178,	/* 188 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'R', ' ', 'E', ' ', 'S', ' ', 'U', ' ', 'M', ' ', 'O', ' ', ' ', ' ', 'D', ' ', 'A', ' ', 'S', ' ', ' ', ' ', 'E', ' ', 'N', ' ', 'T', ' ', 'R', ' ', 'A', ' ', 'D', ' ', 'A', ' ', 'S', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 59,	/* 59 (abs: 04287) */
/* 04230 */ HB_P_LINEOFFSET, 180,	/* 190 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'R', ' ', 'E', ' ', 'S', ' ', 'U', ' ', 'M', ' ', 'O', ' ', ' ', ' ', 'D', ' ', 'A', ' ', 'S', ' ', ' ', ' ', 'S', ' ', 'A', ' ', 'I', ' ', 'D', ' ', 'A', ' ', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 04287 */ HB_P_LINEOFFSET, 182,	/* 192 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04331 */ HB_P_LINEOFFSET, 183,	/* 193 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'(', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_ENT */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04384 */ HB_P_LINEOFFSET, 184,	/* 194 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 57,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', '-', ' ', ' ', 'R', '$', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04416 */ HB_P_LINEOFFSET, 185,	/* 195 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 57,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 58,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MVLR_ENT */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04460 */ HB_P_LINEOFFSET, 186,	/* 196 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'B', 'A', 'L', 'A', 'N', 'C', 'O', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04504 */ HB_P_LINEOFFSET, 187,	/* 197 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'(', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MENT_BAL */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04557 */ HB_P_LINEOFFSET, 188,	/* 198 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 04583 */ HB_P_LINEOFFSET, 189,	/* 199 */
	HB_P_PUSHSYMNEAR, 55,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 04597 */ HB_P_LINEOFFSET, 190,	/* 200 */
	HB_P_PUSHSYMNEAR, 60,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04604 */ HB_P_LINEOFFSET, 191,	/* 201 */
	HB_P_PUSHSYMNEAR, 64,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 64,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 64,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 04645 */ HB_P_LINEOFFSET, 192,	/* 202 */
	HB_P_PUSHSYMNEAR, 65,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MARQ */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 197, 238,	/* -4411 (abs: 00244) */
/* 04658 */ HB_P_LINEOFFSET, 194,	/* 204 */
	HB_P_PUSHSYMNEAR, 66,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04665 */ HB_P_LINEOFFSET, 195,	/* 205 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 04670 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

