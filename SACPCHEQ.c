/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACPCHEQ.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SACPCHEQ.PRG /q /oC:\hti\SISCOM\SACPCHEQ.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.11.21 09:47:33 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACPCHEQ.PRG"

HB_FUNC( SACPCHEQ );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( JANELA );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( NMES );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( EXTENSO );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( MLCOUNT );
HB_FUNC_EXTERN( MEMOLINE );
HB_FUNC_EXTERN( ROW );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACPCHEQ )
{ "SACPCHEQ", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACPCHEQ )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "JANELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( JANELA )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "NMES", {HB_FS_PUBLIC}, {HB_FUNCNAME( NMES )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "EXTENSO", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXTENSO )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "MLCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MLCOUNT )}, NULL },
{ "MEMOLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOLINE )}, NULL },
{ "ROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( ROW )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACPCHEQ )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACPCHEQ
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACPCHEQ = hb_vm_SymbolInit_SACPCHEQ;
   #pragma data_seg()
#endif

HB_FUNC( SACPCHEQ )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 19, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 9, 0,	/* 9 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* LINHAS 0*/
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* LINHA 0*/
/* 00014 */ HB_P_LINEOFFSET, 2,	/* 11 */
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
/* 00041 */ HB_P_LINEOFFSET, 4,	/* 13 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* LCI 0*/
/* 00047 */ HB_P_LINEOFFSET, 5,	/* 14 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* CCI 0*/
/* 00053 */ HB_P_LINEOFFSET, 6,	/* 15 */
	HB_P_LOCALNEARSETINT, 4, 15, 0,	/* LBA 15*/
/* 00059 */ HB_P_LINEOFFSET, 7,	/* 16 */
	HB_P_LOCALNEARSETINT, 5, 66, 0,	/* CBA 66*/
/* 00065 */ HB_P_LINEOFFSET, 8,	/* 17 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 12,	/* OPCAO */
/* 00075 */ HB_P_LINEOFFSET, 9,	/* 18 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_PUSHLOCALNEAR, 4,	/* LBA */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CBA */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', 'P', 'R', 'E', 'E', 'N', 'C', 'H', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'D', 'E', ' ', 'C', 'H', 'E', 'Q', 'U', 'E', 'S', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00122 */ HB_P_LINEOFFSET, 12,	/* 21 */
	HB_P_PUSHMEMVAR, 7, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 1, 0,	/* MTIPO_IMP */
/* 00135 */ HB_P_LINEOFFSET, 14,	/* 23 */
	HB_P_PUSHSYMNEAR, 8,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'c', 'a', 'm', 'p', 'o', 's', ' ', ' ', '-', ' ', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00184 */ HB_P_LINEOFFSET, 15,	/* 24 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 15,	/* MNOME */
/* 00195 */ HB_P_LINEOFFSET, 16,	/* 25 */
	HB_P_PUSHMEMVAR, 9, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 16,	/* MDATA */
/* 00202 */ HB_P_LINEOFFSET, 17,	/* 26 */
	HB_P_LOCALNEARSETINT, 17, 0, 0,	/* MVALOR 0*/
/* 00208 */ HB_P_LINEOFFSET, 18,	/* 27 */
	HB_P_PUSHSYMNEAR, 10,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 5,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00230 */ HB_P_LINEOFFSET, 19,	/* 28 */
	HB_P_PUSHSYMNEAR, 11,	/* JANELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 5,	/* CBA */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', 'D', 'E', 'M', 'O', 'N', 'S', 'T', 'R', 'A', 'T', 'I', 'V', 'O', ' ', 'D', 'O', ' ', 'C', 'H', 'E', 'Q', 'U', 'E', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 4,
/* 00276 */ HB_P_LINEOFFSET, 20,	/* 29 */
	HB_P_PUSHSYMNEAR, 12,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 00290 */ HB_P_LINEOFFSET, 21,	/* 30 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'V', 'a', 'l', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00330 */ HB_P_LINEOFFSET, 22,	/* 31 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'N', 'o', 'm', 'i', 'n', 'a', 'l', ' ', 'a', ' ', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00370 */ HB_P_LINEOFFSET, 23,	/* 32 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'C', 'h', 'e', 'q', 'u', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00410 */ HB_P_LINEOFFSET, 24,	/* 33 */
	HB_P_PUSHSYMNEAR, 15,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 18,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MVALOR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00455) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00460) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'v', 'a', 'l', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 19, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00505 */ HB_P_LINEOFFSET, 25,	/* 34 */
	HB_P_PUSHSYMNEAR, 15,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 18,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MNOME */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00550) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00555) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'n', 'o', 'm', 'e', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 19, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00583 */ HB_P_LINEOFFSET, 26,	/* 35 */
	HB_P_PUSHSYMNEAR, 15,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 18,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MDATA */
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
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'd', 'a', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 19, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00671 */ HB_P_LINEOFFSET, 27,	/* 36 */
	HB_P_PUSHSYMNEAR, 20,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 17, 0,	/* GETLIST */
/* 00693 */ HB_P_LINEOFFSET, 28,	/* 37 */
	HB_P_PUSHSYMNEAR, 21,	/* NMES */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 18,	/* MMES */
/* 00704 */ HB_P_LINEOFFSET, 29,	/* 38 */
	HB_P_PUSHSYMNEAR, 22,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00728) */
/* 00716 */ HB_P_LINEOFFSET, 30,	/* 39 */
	HB_P_PUSHSYMNEAR, 23,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00723 */ HB_P_LINEOFFSET, 31,	/* 40 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00728 */ HB_P_LINEOFFSET, 33,	/* 42 */
	HB_P_PUSHSYMNEAR, 21,	/* NMES */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 18,	/* MMES */
/* 00739 */ HB_P_LINEOFFSET, 34,	/* 43 */
	HB_P_PUSHSYMNEAR, 24,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00748 */ HB_P_LINEOFFSET, 36,	/* 45 */
	HB_P_PUSHSYMNEAR, 24,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00756 */ HB_P_LINEOFFSET, 37,	/* 46 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTIPO */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 00808) */
/* 00764 */ HB_P_LINEOFFSET, 38,	/* 47 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'(', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 26,	/* EXTENSO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MVALOR */
	HB_P_TRUE,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'r', 'e', 'a', 'l', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'r', 'e', 'a', 'i', 's', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* MEXTENSO */
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 00845) */
/* 00808 */ HB_P_LINEOFFSET, 40,	/* 49 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'(', 0, 
	HB_P_PUSHSYMNEAR, 26,	/* EXTENSO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MVALOR */
	HB_P_TRUE,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'r', 'e', 'a', 'l', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'r', 'e', 'a', 'i', 's', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* MEXTENSO */
/* 00845 */ HB_P_LINEOFFSET, 43,	/* 52 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'V', 'a', 'l', 'o', 'r', ':', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 27,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MVALOR */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00913 */ HB_P_LINEOFFSET, 45,	/* 54 */
	HB_P_PUSHSYMNEAR, 29,	/* MLCOUNT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MEXTENSO */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 10,	/* LINHAS */
/* 00926 */ HB_P_LINEOFFSET, 47,	/* 56 */
	HB_P_PUSHSYMNEAR, 30,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MEXTENSO */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 6,	/* LIN */
/* 00943 */ HB_P_LINEOFFSET, 49,	/* 58 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 31,	/* ROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LIN */
	HB_P_DOSHORT, 1,
/* 00970 */ HB_P_LINEOFFSET, 50,	/* 59 */
	HB_P_LOCALNEARSETINT, 11, 1, 0,	/* LINHA 1*/
/* 00976 */ HB_P_LINEOFFSET, 51,	/* 60 */
	HB_P_LOCALNEARSETINT, 11, 2, 0,	/* LINHA 2*/
	HB_P_PUSHLOCALNEAR, 11,	/* LINHA */
	HB_P_PUSHLOCALNEAR, 10,	/* LINHAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 55,	/* 55 (abs: 01042) */
/* 00989 */ HB_P_LINEOFFSET, 52,	/* 61 */
	HB_P_PUSHSYMNEAR, 30,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MEXTENSO */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_PUSHLOCALNEAR, 11,	/* LINHA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 6,	/* LIN */
/* 01007 */ HB_P_LINEOFFSET, 53,	/* 62 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 31,	/* ROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LIN */
	HB_P_DOSHORT, 1,
/* 01034 */ HB_P_LINEOFFSET, 55,	/* 64 */
	HB_P_LOCALNEARADDINT, 11, 1, 0,	/* LINHA 1*/
	HB_P_JUMPNEAR, 198,	/* -58 (abs: 00982) */
/* 01042 */ HB_P_LINEOFFSET, 57,	/* 66 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 31,	/* ROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'N', 'o', 'm', 'i', 'n', 'a', 'l', ' ', 'a', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 15,	/* MNOME */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01083 */ HB_P_LINEOFFSET, 58,	/* 67 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 31,	/* ROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', 'd', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 25,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MMES */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', 'd', 'e', ' ', '2', '0', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01164 */ HB_P_LINEOFFSET, 59,	/* 68 */
	HB_P_PUSHSYMNEAR, 8,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'P', 'r', 'e', 's', 's', 'i', 'o', 'n', 'e', ' ', 'q', 'u', 'a', 'l', 'q', 'u', 'e', 'r', ' ', 't', 'e', 'c', 'l', 'a', ' ', 'p', 'a', 'r', 'a', ' ', 'c', 'o', 'n', 't', 'i', 'n', 'u', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 01213 */ HB_P_LINEOFFSET, 60,	/* 69 */
	HB_P_PUSHSYMNEAR, 34,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 01221 */ HB_P_LINEOFFSET, 61,	/* 70 */
	HB_P_PUSHSYMNEAR, 35,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'H', 'E', 'Q', 'U', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01250) */
	HB_P_JUMP, 155, 251,	/* -1125 (abs: 00122) */
/* 01250 */ HB_P_LINEOFFSET, 64,	/* 73 */
	HB_P_PUSHSYMNEAR, 36,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 01264 */ HB_P_LINEOFFSET, 65,	/* 74 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'(', 0, 
	HB_P_PUSHSYMNEAR, 27,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MVALOR */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01325 */ HB_P_LINEOFFSET, 67,	/* 76 */
	HB_P_PUSHSYMNEAR, 29,	/* MLCOUNT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MEXTENSO */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 10,	/* LINHAS */
/* 01338 */ HB_P_LINEOFFSET, 69,	/* 78 */
	HB_P_PUSHSYMNEAR, 30,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MEXTENSO */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 6,	/* LIN */
/* 01355 */ HB_P_LINEOFFSET, 70,	/* 79 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 01384 */ HB_P_LINEOFFSET, 71,	/* 80 */
	HB_P_LOCALNEARSETINT, 11, 1, 0,	/* LINHA 1*/
/* 01390 */ HB_P_LINEOFFSET, 72,	/* 81 */
	HB_P_LOCALNEARSETINT, 11, 2, 0,	/* LINHA 2*/
	HB_P_PUSHLOCALNEAR, 11,	/* LINHA */
	HB_P_PUSHLOCALNEAR, 10,	/* LINHAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 57,	/* 57 (abs: 01458) */
/* 01403 */ HB_P_LINEOFFSET, 73,	/* 82 */
	HB_P_PUSHSYMNEAR, 30,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MEXTENSO */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_PUSHLOCALNEAR, 11,	/* LINHA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 6,	/* LIN */
/* 01421 */ HB_P_LINEOFFSET, 74,	/* 83 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 01450 */ HB_P_LINEOFFSET, 75,	/* 84 */
	HB_P_LOCALNEARADDINT, 11, 1, 0,	/* LINHA 1*/
	HB_P_JUMPNEAR, 196,	/* -60 (abs: 01396) */
/* 01458 */ HB_P_LINEOFFSET, 77,	/* 86 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTIPO */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 01486) */
/* 01466 */ HB_P_LINEOFFSET, 78,	/* 87 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MNOME */
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 20,	/* 20 (abs: 01504) */
/* 01486 */ HB_P_LINEOFFSET, 80,	/* 89 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MNOME */
	HB_P_DOSHORT, 1,
/* 01504 */ HB_P_LINEOFFSET, 82,	/* 91 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 134, 0,	/* 134 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 01540 */ HB_P_LINEOFFSET, 83,	/* 92 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 01574 */ HB_P_LINEOFFSET, 84,	/* 93 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MMES */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 01600 */ HB_P_LINEOFFSET, 85,	/* 94 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'2', '0', 0, 
	HB_P_PUSHSYMNEAR, 32,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01639 */ HB_P_LINEOFFSET, 86,	/* 95 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTIPO */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 01673) */
/* 01647 */ HB_P_LINEOFFSET, 87,	/* 96 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 26,	/* 26 (abs: 01697) */
/* 01673 */ HB_P_LINEOFFSET, 89,	/* 98 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 1,
/* 01697 */ HB_P_LINEOFFSET, 91,	/* 100 */
	HB_P_PUSHSYMNEAR, 39,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 01706 */ HB_P_LINEOFFSET, 92,	/* 101 */
	HB_P_PUSHSYMNEAR, 12,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 01747 */ HB_P_LINEOFFSET, 93,	/* 102 */
	HB_P_PUSHSYMNEAR, 40,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'H', 'E', 'Q', 'U', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 147, 249,	/* -1645 (abs: 00122) */
	HB_P_ENDPROC
/* 01771 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

