/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5ROM6.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC5ROM6.PRG /q /oC:\hti\SISCOM\SAC5ROM6.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:52 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5ROM6.PRG"

HB_FUNC( SAC5ROM6 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5ROM6 )
{ "SAC5ROM6", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5ROM6 )}, NULL },
{ "MTRACO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_PROM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5ROM6 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5ROM6
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5ROM6 = hb_vm_SymbolInit_SAC5ROM6;
   #pragma data_seg()
#endif

HB_FUNC( SAC5ROM6 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 9, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 9, 0,	/* 9 */
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', '5', 'R', 'O', 'M', '6', 0, 
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* MQTD_TOT 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* CONS_ROM */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 9,	/* CONS_PED */
/* 00033 */ HB_P_LINEOFFSET, 2,	/* 11 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 9,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MTRACO */
	HB_P_PUSHSYMNEAR, 2,	/* MTIT */
	HB_P_PUSHSYMNEAR, 3,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 4,	/* MPAG */
	HB_P_PUSHSYMNEAR, 5,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 6,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 7,	/* MARQ */
	HB_P_DOSHORT, 7,
	HB_P_POPVARIABLE, 7, 0,	/* MARQ */
	HB_P_POPVARIABLE, 6, 0,	/* MIMP_TIPO */
/* 00068 */ HB_P_LINEOFFSET, 4,	/* 13 */
	HB_P_PUSHSYMNEAR, 10,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'P', 'E', 'D', 'I', 'D', 'O', ' ', 'P', '/', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 11, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00133) */
/* 00128 */ HB_P_LINEOFFSET, 5,	/* 14 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00133 */ HB_P_LINEOFFSET, 8,	/* 17 */
	HB_P_PUSHSYMNEAR, 12,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 1, 0,	/* MTRACO */
/* 00150 */ HB_P_LINEOFFSET, 10,	/* 19 */
	HB_P_PUSHSYMNEAR, 13,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '/', 'R', 'O', 'M', 'A', 'N', 'E', 'I', 'O', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00194 */ HB_P_LINEOFFSET, 12,	/* 21 */
	HB_P_PUSHSYMNEAR, 14,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00203 */ HB_P_LINEOFFSET, 14,	/* 23 */
	HB_P_PUSHMEMVAR, 15, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 5, 0,	/* MTIPO_IMP */
/* 00216 */ HB_P_LINEOFFSET, 16,	/* 25 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 16, 0,	/* MCOD_PROM */
	HB_P_POPLOCALNEAR, 2,	/* OPCAO */
/* 00225 */ HB_P_LINEOFFSET, 17,	/* 26 */
	HB_P_PUSHMEMVAR, 15, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 5, 0,	/* MTIPO_IMP */
/* 00238 */ HB_P_LINEOFFSET, 18,	/* 27 */
	HB_P_PUSHMEMVAR, 17, 0,	/* MDATA_SIS */
	HB_P_ADDINT, 226, 255,	/* -30*/
	HB_P_POPLOCALNEAR, 3,	/* MDATA1 */
/* 00248 */ HB_P_LINEOFFSET, 19,	/* 28 */
	HB_P_PUSHMEMVAR, 17, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 4,	/* MDATA2 */
/* 00255 */ HB_P_LINEOFFSET, 20,	/* 29 */
	HB_P_PUSHSYMNEAR, 18,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00297 */ HB_P_LINEOFFSET, 21,	/* 30 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00331 */ HB_P_LINEOFFSET, 22,	/* 31 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00366 */ HB_P_LINEOFFSET, 23,	/* 32 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'P', 'r', 'o', 'm', 'o', 't', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00401 */ HB_P_LINEOFFSET, 24,	/* 33 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00439) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00444) */
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
	3, 0,	/* MDATA1 */
	HB_P_PUSHSYMNEAR, 25,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00486) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00487) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00505 */ HB_P_LINEOFFSET, 25,	/* 34 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00544) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00549) */
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
	4, 0,	/* MDATA2 */
	3, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00591) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00592) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00610 */ HB_P_LINEOFFSET, 26,	/* 35 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'm', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 28,	/* 28 */
	HB_P_PUSHSYMNEAR, 25,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* MCOD_PROM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00664) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 14,	/* 14 (abs: 00676) */
	HB_P_PUSHSYMNEAR, 27,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* MCOD_PROM */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00694 */ HB_P_LINEOFFSET, 27,	/* 36 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 23, 0,	/* GETLIST */
/* 00716 */ HB_P_LINEOFFSET, 28,	/* 37 */
	HB_P_PUSHSYMNEAR, 29,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00731) */
	HB_P_JUMP, 117, 6,	/* 1653 (abs: 02381) */
/* 00731 */ HB_P_LINEOFFSET, 31,	/* 40 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* CONS_ROM */
/* 00738 */ HB_P_LINEOFFSET, 32,	/* 41 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'n', 'u', 'm', '_', 'p', 'e', 'd', ',', 'n', 'u', 'm', '_', 'r', 'o', 'm', 'a', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'r', 'o', 'm', 'a', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', '_', 'r', 'o', 'm', 'a', ' ', 'B', 'E', 'T', 'W', 'E', 'E', 'N', ' ', 0, 
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	' ', 'A', 'N', 'D', ' ', '(', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', '=', ' ', 39, 39, ')', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'a', 't', '_', 'r', 'o', 'm', 'a', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 8, 0,	/* CONS_ROM */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00902 */ HB_P_LINEOFFSET, 33,	/* 42 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00926 */ HB_P_LINEOFFSET, 34,	/* 43 */
	HB_P_PUSHSYMNEAR, 33,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* CONS_ROM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 00987) */
/* 00939 */ HB_P_LINEOFFSET, 35,	/* 44 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'm', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'e', ' ', 'R', 'O', 'M', 'A', 'N', 'E', 'I', 'O', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 234, 252,	/* -790 (abs: 00194) */
/* 00987 */ HB_P_LINEOFFSET, 38,	/* 47 */
	HB_P_PUSHSYMNEAR, 35,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'R', 'O', 'M', '_', 'P', 'R', 'O', 'M', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01018) */
	HB_P_JUMP, 203, 252,	/* -821 (abs: 00194) */
/* 01018 */ HB_P_LINEOFFSET, 41,	/* 50 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 36, 0,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 7,	/* MQTD_TOT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 5,	/* MTOT_GERAL */
	HB_P_POPVARIABLE, 4, 0,	/* MPAG */
/* 01034 */ HB_P_LINEOFFSET, 42,	/* 51 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 36, 0,	/* I */
	HB_P_PUSHVARIABLE, 36, 0,	/* I */
	HB_P_PUSHSYMNEAR, 33,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* CONS_ROM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 19, 4,	/* 1043 (abs: 02094) */
/* 01054 */ HB_P_LINEOFFSET, 43,	/* 52 */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'd', 'e', ' ', 'R', 'O', 'M', 'A', 'N', 'E', 'I', 'O', '/', 'P', 'R', 'O', 'M', 'O', 'T', 'O', 'R', 0, 
	HB_P_POPVARIABLE, 2, 0,	/* MTIT */
/* 01092 */ HB_P_LINEOFFSET, 44,	/* 53 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'P', 'e', 'r', 'i', 'o', 'd', 'o', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHSYMNEAR, 37,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIPO */
/* 01134 */ HB_P_LINEOFFSET, 45,	/* 54 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 9,	/* CONS_PED */
/* 01141 */ HB_P_LINEOFFSET, 46,	/* 55 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 207,	/* 207 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ',', 'p', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ',', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ',', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', ' ', '*', ' ', 'p', 'v', 'l', 'r', '_', 'f', 'a', 't', ')', ',', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', '(', 's', 'e', 'l', 'e', 'c', 't', ' ', 'n', 'o', 'm', 'e', ' ', 'f', 'r', 'o', 'm', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'w', 'h', 'e', 'r', 'e', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ')', ',', '(', 's', 'e', 'l', 'e', 'c', 't', ' ', 'p', 'r', 'o', 'm', 'o', 't', 'o', 'r', ' ', 'f', 'r', 'o', 'm', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'w', 'h', 'e', 'r', 'e', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ')', ' ', 'F', 'R', 'O', 'M', ' ', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* CONS_ROM */
	HB_P_PUSHVARIABLE, 36, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'A', 'N', 'D', ' ', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ' ', ' ', 'B', 'E', 'T', 'W', 'E', 'E', 'N', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ',', 'p', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ',', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ',', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 9, 0,	/* CONS_PED */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01484 */ HB_P_LINEOFFSET, 47,	/* 56 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01508 */ HB_P_LINEOFFSET, 48,	/* 57 */
	HB_P_PUSHSYMNEAR, 33,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 51, 2,	/* 563 (abs: 02082) */
/* 01522 */ HB_P_LINEOFFSET, 49,	/* 58 */
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 38,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* MCOD_PROM */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_EQUAL,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01547) */
	HB_P_JUMP, 28, 2,	/* 540 (abs: 02084) */
/* 01547 */ HB_P_LINEOFFSET, 52,	/* 61 */
	HB_P_PUSHSYMNEAR, 39,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 36, 0,	/* I */
	HB_P_DOSHORT, 1,
/* 01557 */ HB_P_LINEOFFSET, 53,	/* 62 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MPAG */
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 01576) */
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 59, 1,	/* 315 (abs: 01891) */
/* 01579 */ HB_P_LINEOFFSET, 54,	/* 63 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MPAG */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_POPVARIABLE, 4, 0,	/* MPAG */
/* 01590 */ HB_P_LINEOFFSET, 55,	/* 64 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 01606) */
/* 01599 */ HB_P_LINEOFFSET, 56,	/* 65 */
	HB_P_PUSHSYMNEAR, 41,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01606 */ HB_P_LINEOFFSET, 58,	/* 67 */
	HB_P_PUSHSYMNEAR, 42,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 01624 */ HB_P_LINEOFFSET, 59,	/* 68 */
	HB_P_PUSHSYMNEAR, 43,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 01638 */ HB_P_LINEOFFSET, 60,	/* 69 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 01669 */ HB_P_LINEOFFSET, 61,	/* 70 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 01700 */ HB_P_LINEOFFSET, 62,	/* 71 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'N', 'o', '.', 'P', 'e', 'd', 'i', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 01731 */ HB_P_LINEOFFSET, 63,	/* 72 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 74,	/* 74 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'P', 'e', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01766 */ HB_P_LINEOFFSET, 64,	/* 73 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', ' ', 'V', 'e', 'n', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01795 */ HB_P_LINEOFFSET, 65,	/* 74 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'P', 'r', 'o', 'm', 'o', 't', 'o', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 01831 */ HB_P_LINEOFFSET, 66,	/* 75 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'N', 'o', '.', 'R', 'o', 'm', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01867 */ HB_P_LINEOFFSET, 67,	/* 76 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 01891 */ HB_P_LINEOFFSET, 69,	/* 78 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 8,	/* CONS_ROM */
	HB_P_PUSHVARIABLE, 36, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02062 */ HB_P_LINEOFFSET, 70,	/* 79 */
	HB_P_LOCALNEARADDINT, 7, 1, 0,	/* MQTD_TOT 1*/
/* 02068 */ HB_P_LINEOFFSET, 71,	/* 80 */
	HB_P_PUSHLOCALNEAR, 5,	/* MTOT_GERAL */
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 5,	/* MTOT_GERAL */
/* 02082 */ HB_P_LINEOFFSET, 73,	/* 82 */
	HB_P_PUSHVARIABLE, 36, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 36, 0,	/* I */
	HB_P_JUMP, 229, 251,	/* -1051 (abs: 01040) */
/* 02094 */ HB_P_LINEOFFSET, 74,	/* 83 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 130, 0,	/* 130 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02127 */ HB_P_LINEOFFSET, 75,	/* 84 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 46,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MQTD_TOT */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02195 */ HB_P_LINEOFFSET, 76,	/* 85 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', 's', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 46,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MTOT_GERAL */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02266 */ HB_P_LINEOFFSET, 77,	/* 86 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 130, 0,	/* 130 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02299 */ HB_P_LINEOFFSET, 78,	/* 87 */
	HB_P_PUSHSYMNEAR, 41,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02306 */ HB_P_LINEOFFSET, 79,	/* 88 */
	HB_P_PUSHSYMNEAR, 47,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 02315 */ HB_P_LINEOFFSET, 80,	/* 89 */
	HB_P_PUSHSYMNEAR, 48,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 48,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 48,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 02356 */ HB_P_LINEOFFSET, 81,	/* 90 */
	HB_P_PUSHSYMNEAR, 49,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'R', 'O', 'M', '_', 'P', 'R', 'O', 'M', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 120, 247,	/* -2184 (abs: 00194) */
/* 02381 */ HB_P_LINEOFFSET, 84,	/* 93 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02388 */ HB_P_LINEOFFSET, 85,	/* 94 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02393 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

