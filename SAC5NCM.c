/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5NCM.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC5NCM.PRG /q /oC:\hti\SISCOM\SAC5NCM.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.11.21 09:48:03 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5NCM.PRG"

HB_FUNC( SAC5NCM );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5NCM )
{ "SAC5NCM", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5NCM )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "MTIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "MTIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTOT_NCM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5NCM )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5NCM
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5NCM = hb_vm_SymbolInit_SAC5NCM;
   #pragma data_seg()
#endif

HB_FUNC( SAC5NCM )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', '5', 'N', 'C', 'M', 0, 
/* 00018 */ HB_P_LINEOFFSET, 2,	/* 9 */
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
/* 00045 */ HB_P_LINEOFFSET, 4,	/* 11 */
	HB_P_PUSHMEMVAR, 6, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 1, 0,	/* MTIPO_IMP */
/* 00058 */ HB_P_LINEOFFSET, 5,	/* 12 */
	HB_P_PUSHSYMNEAR, 7,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00097 */ HB_P_LINEOFFSET, 6,	/* 13 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'N', 'C', 'M', 0, 
	HB_P_DOSHORT, 5,
/* 00131 */ HB_P_LINEOFFSET, 8,	/* 15 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00162 */ HB_P_LINEOFFSET, 9,	/* 16 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00194 */ HB_P_LINEOFFSET, 10,	/* 17 */
	HB_P_PUSHMEMVAR, 11, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 3,	/* T_INI */
/* 00201 */ HB_P_LINEOFFSET, 11,	/* 18 */
	HB_P_PUSHMEMVAR, 11, 0,	/* MDATA_SIS */
	HB_P_ADDINT, 30, 0,	/* 30*/
	HB_P_POPLOCALNEAR, 4,	/* T_FIM */
/* 00211 */ HB_P_LINEOFFSET, 12,	/* 19 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* T_INI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00249) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00254) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', '_', 'i', 'n', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* T_INI */
	HB_P_PUSHSYMNEAR, 16,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00285) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00286) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 17, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00304 */ HB_P_LINEOFFSET, 13,	/* 20 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* T_FIM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00343) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00348) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', '_', 'f', 'i', 'm', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* T_FIM */
	HB_P_PUSHSYMNEAR, 16,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00379) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00380) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 17, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00398 */ HB_P_LINEOFFSET, 14,	/* 21 */
	HB_P_PUSHSYMNEAR, 18,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 14, 0,	/* GETLIST */
/* 00420 */ HB_P_LINEOFFSET, 15,	/* 22 */
	HB_P_PUSHSYMNEAR, 19,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00435) */
	HB_P_JUMP, 185, 4,	/* 1209 (abs: 01641) */
/* 00435 */ HB_P_LINEOFFSET, 18,	/* 25 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 6,	/* REL_NCM */
/* 00442 */ HB_P_LINEOFFSET, 19,	/* 26 */
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'm', 'e', 'r', 'c', '.', 'n', 'b', 'm', ',', ' ', 'S', 'U', 'M', '(', 'm', 'o', 'v', '.', 'q', 'u', 'a', 'n', 't', 'd', ' ', '*', ' ', 'm', 'o', 'v', '.', 'v', 'l', '_', 'f', 'a', 't', 'u', 'r', 'a', ')', 0, 
	HB_P_POPVARIABLE, 20, 0,	/* CCOMM */
/* 00498 */ HB_P_LINEOFFSET, 20,	/* 27 */
	HB_P_PUSHVARIABLE, 20, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', 'n', 't', ' ', 'm', 'o', 'v', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 20, 0,	/* CCOMM */
/* 00529 */ HB_P_LINEOFFSET, 21,	/* 28 */
	HB_P_PUSHVARIABLE, 20, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	' ', 'J', 'O', 'I', 'N', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'm', 'e', 'r', 'c', ' ', 'O', 'N', ' ', 'm', 'e', 'r', 'c', '.', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 'm', 'o', 'v', '.', 'c', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 20, 0,	/* CCOMM */
/* 00589 */ HB_P_LINEOFFSET, 22,	/* 29 */
	HB_P_PUSHVARIABLE, 20, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'w', 'h', 'e', 'r', 'e', ' ', 'm', 'o', 'v', '.', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', ' ', 'B', 'E', 'T', 'W', 'E', 'E', 'N', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 20, 0,	/* CCOMM */
/* 00655 */ HB_P_LINEOFFSET, 23,	/* 30 */
	HB_P_PUSHVARIABLE, 20, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	' ', 'A', 'N', 'D', ' ', '(', 'm', 'o', 'v', '.', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'o', 'r', ' ', 'm', 'o', 'v', '.', 'c', 'a', 'n', 'c', 'e', 'l', ' ', '=', ' ', 39, 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 20, 0,	/* CCOMM */
/* 00711 */ HB_P_LINEOFFSET, 24,	/* 31 */
	HB_P_PUSHVARIABLE, 20, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '.', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'N', 'O', 'T', ' ', 'L', 'I', 'K', 'E', ' ', 39, 'T', 'R', '%', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 20, 0,	/* CCOMM */
/* 00756 */ HB_P_LINEOFFSET, 25,	/* 32 */
	HB_P_PUSHVARIABLE, 20, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '.', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'N', 'O', 'T', ' ', 'L', 'I', 'K', 'E', ' ', 39, 'B', 'L', '%', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 20, 0,	/* CCOMM */
/* 00801 */ HB_P_LINEOFFSET, 26,	/* 33 */
	HB_P_PUSHVARIABLE, 20, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '.', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', '=', ' ', 39, 'S', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 20, 0,	/* CCOMM */
/* 00835 */ HB_P_LINEOFFSET, 27,	/* 34 */
	HB_P_PUSHVARIABLE, 20, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'g', 'r', 'o', 'u', 'p', ' ', 'b', 'y', ' ', 'm', 'e', 'r', 'c', '.', 'n', 'b', 'm', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 20, 0,	/* CCOMM */
/* 00865 */ HB_P_LINEOFFSET, 28,	/* 35 */
	HB_P_MESSAGE, 22, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 23,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 20, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 6, 0,	/* REL_NCM */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00886 */ HB_P_LINEOFFSET, 29,	/* 36 */
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
/* 00910 */ HB_P_LINEOFFSET, 31,	/* 38 */
	HB_P_PUSHSYMNEAR, 24,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* REL_NCM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 00970) */
/* 00923 */ HB_P_LINEOFFSET, 32,	/* 39 */
	HB_P_PUSHSYMNEAR, 25,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'n', 'e', 's', 't', 'e', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 162, 2,	/* 674 (abs: 01641) */
/* 00970 */ HB_P_LINEOFFSET, 35,	/* 42 */
	HB_P_PUSHSYMNEAR, 26,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'P', 'A', 'G', 'A', 'S', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01002) */
	HB_P_JUMP, 130, 2,	/* 642 (abs: 01641) */
/* 01002 */ HB_P_LINEOFFSET, 38,	/* 45 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'N', 'C', 'M', 0, 
	HB_P_POPVARIABLE, 27, 0,	/* MTIT */
/* 01026 */ HB_P_LINEOFFSET, 39,	/* 46 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 28,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 29, 0,	/* MTIPO */
/* 01066 */ HB_P_LINEOFFSET, 40,	/* 47 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* PAG 0*/
	HB_P_PUSHLOCALNEAR, 7,	/* PAG */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 30, 0,	/* MTOT_NCM */
	HB_P_POPVARIABLE, 31, 0,	/* I */
/* 01081 */ HB_P_LINEOFFSET, 41,	/* 48 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 31, 0,	/* I */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_PUSHSYMNEAR, 24,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* REL_NCM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 35, 1,	/* 291 (abs: 01389) */
/* 01101 */ HB_P_LINEOFFSET, 42,	/* 49 */
	HB_P_PUSHLOCALNEAR, 7,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 01119) */
	HB_P_PUSHSYMNEAR, 32,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 154, 0,	/* 154 (abs: 01273) */
/* 01122 */ HB_P_LINEOFFSET, 43,	/* 50 */
	HB_P_LOCALNEARADDINT, 7, 1, 0,	/* PAG 1*/
/* 01128 */ HB_P_LINEOFFSET, 44,	/* 51 */
	HB_P_PUSHLOCALNEAR, 7,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 01143) */
/* 01136 */ HB_P_LINEOFFSET, 45,	/* 52 */
	HB_P_PUSHSYMNEAR, 33,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01143 */ HB_P_LINEOFFSET, 47,	/* 54 */
	HB_P_PUSHSYMNEAR, 34,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* PAG */
	HB_P_PUSHVARIABLE, 27, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 29, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 01160 */ HB_P_LINEOFFSET, 48,	/* 55 */
	HB_P_PUSHSYMNEAR, 35,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 01174 */ HB_P_LINEOFFSET, 49,	/* 56 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'C', 'M', 0, 
	HB_P_DOSHORT, 1,
/* 01201 */ HB_P_LINEOFFSET, 50,	/* 57 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 36,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 01240 */ HB_P_LINEOFFSET, 51,	/* 58 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01273 */ HB_P_LINEOFFSET, 53,	/* 60 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* REL_NCM */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01302 */ HB_P_LINEOFFSET, 54,	/* 61 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 36,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* REL_NCM */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01359 */ HB_P_LINEOFFSET, 55,	/* 62 */
	HB_P_PUSHVARIABLE, 30, 0,	/* MTOT_NCM */
	HB_P_PUSHLOCALNEAR, 6,	/* REL_NCM */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 30, 0,	/* MTOT_NCM */
/* 01377 */ HB_P_LINEOFFSET, 56,	/* 63 */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 31, 0,	/* I */
	HB_P_JUMP, 213, 254,	/* -299 (abs: 01087) */
/* 01389 */ HB_P_LINEOFFSET, 57,	/* 64 */
	HB_P_PUSHSYMNEAR, 35,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 01403 */ HB_P_LINEOFFSET, 58,	/* 65 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'*', '*', '*', '*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', '*', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 01454 */ HB_P_LINEOFFSET, 59,	/* 66 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', 's', ' ', 'N', 'C', 'M', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 38,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTOT_NCM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01532 */ HB_P_LINEOFFSET, 60,	/* 67 */
	HB_P_PUSHSYMNEAR, 9,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 10,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 01558 */ HB_P_LINEOFFSET, 61,	/* 68 */
	HB_P_PUSHSYMNEAR, 33,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01565 */ HB_P_LINEOFFSET, 62,	/* 69 */
	HB_P_PUSHSYMNEAR, 40,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 01574 */ HB_P_LINEOFFSET, 63,	/* 70 */
	HB_P_PUSHSYMNEAR, 41,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 41,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 41,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 01615 */ HB_P_LINEOFFSET, 64,	/* 71 */
	HB_P_PUSHSYMNEAR, 42,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'P', 'A', 'G', 'A', 'S', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 29, 250,	/* -1507 (abs: 00131) */
/* 01641 */ HB_P_LINEOFFSET, 66,	/* 73 */
	HB_P_PUSHSYMNEAR, 43,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01648 */ HB_P_LINEOFFSET, 67,	/* 74 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01653 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

