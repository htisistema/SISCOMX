/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON4205.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\hti\SISCOM\CON4205.PRG /q /oC:\hti\SISCOM\CON4205.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.29 11:53:24 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON4205.PRG"

HB_FUNC( CON4205 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON4205 )
{ "CON4205", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON4205 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MNOME_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOM_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MQ_DIAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MQ_DOC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "CONS_DUPR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON4205 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON4205
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON4205 = hb_vm_SymbolInit_CON4205;
   #pragma data_seg()
#endif

HB_FUNC( CON4205 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 14, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 9, 0,	/* 9 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'C', 'O', 'N', '4', '2', '0', '5', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MAREA */
	HB_P_LOCALNEARSETSTR, 11, 2, 0,	/* MTIPO_CLI 2*/
	' ', 0, 
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* MTOT_CLI 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 14,	/* CONS_CLI */
/* 00042 */ HB_P_LINEOFFSET, 3,	/* 12 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 13,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MNOME_VEND */
	HB_P_PUSHSYMNEAR, 3,	/* MCOM_VEND */
	HB_P_PUSHSYMNEAR, 4,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 5,	/* MCGC */
	HB_P_PUSHSYMNEAR, 6,	/* MCPF */
	HB_P_PUSHSYMNEAR, 7,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 8,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 9,	/* MARQ */
	HB_P_PUSHSYMNEAR, 10,	/* MCOD_VEND */
	HB_P_PUSHSYMNEAR, 11,	/* MQ_DIAS */
	HB_P_PUSHSYMNEAR, 12,	/* MQ_DOC */
	HB_P_DOSHORT, 11,
	HB_P_POPVARIABLE, 12, 0,	/* MQ_DOC */
	HB_P_POPVARIABLE, 11, 0,	/* MQ_DIAS */
	HB_P_POPVARIABLE, 9, 0,	/* MARQ */
	HB_P_POPVARIABLE, 8, 0,	/* MIMP_TIPO */
/* 00093 */ HB_P_LINEOFFSET, 5,	/* 14 */
	HB_P_PUSHSYMNEAR, 14,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 'S', ' ', 'C', 'O', 'M', ' ', 'L', 'I', 'M', 'I', 'T', 'E', ' ', 'E', 'S', 'T', 'O', 'U', 'R', 'A', 'D', 'O', ')', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '6', 0, 
	HB_P_PUSHMEMVAR, 15, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00177) */
/* 00172 */ HB_P_LINEOFFSET, 6,	/* 15 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00177 */ HB_P_LINEOFFSET, 11,	/* 20 */
	HB_P_PUSHSYMNEAR, 16,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00206) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00206 */ HB_P_LINEOFFSET, 12,	/* 21 */
	HB_P_PUSHSYMNEAR, 16,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00233) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00233 */ HB_P_LINEOFFSET, 13,	/* 22 */
	HB_P_PUSHSYMNEAR, 16,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'r', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00262) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00262 */ HB_P_LINEOFFSET, 15,	/* 24 */
	HB_P_PUSHSYMNEAR, 17,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 's', 'e', 'm', ' ', 'D', 'E', 'B', 'I', 'T', 'O', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00301 */ HB_P_LINEOFFSET, 16,	/* 25 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00352 */ HB_P_LINEOFFSET, 17,	/* 26 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00403 */ HB_P_LINEOFFSET, 18,	/* 27 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'n', 'o', 'm', 'e', ' ', 'd', 'a', ' ', 'C', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00455 */ HB_P_LINEOFFSET, 19,	/* 28 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'A', 'r', 'e', 'a', ' ', 'D', 'e', 's', 'e', 'j', 'a', 'd', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00507 */ HB_P_LINEOFFSET, 20,	/* 29 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'n', 'o', 'm', 'e', ' ', 'd', 'o', ' ', 'B', 'a', 'i', 'r', 'r', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00559 */ HB_P_LINEOFFSET, 21,	/* 30 */
	HB_P_PUSHMEMVAR, 20, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 7, 0,	/* MTIPO_IMP */
/* 00572 */ HB_P_LINEOFFSET, 23,	/* 32 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* MTOT_CLI 0*/
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CLI */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 10, 0,	/* MCOD_VEND */
	HB_P_POPLOCALNEAR, 4,	/* PAG */
/* 00586 */ HB_P_LINEOFFSET, 24,	/* 33 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 4, 0,	/* MCLIENTE */
/* 00598 */ HB_P_LINEOFFSET, 25,	/* 34 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* MBAIRRO */
	HB_P_POPLOCALNEAR, 9,	/* MCIDADE */
/* 00612 */ HB_P_LINEOFFSET, 26,	/* 35 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MAREA */
/* 00623 */ HB_P_LINEOFFSET, 27,	/* 36 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MTIPO_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00661) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00666) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00702 */ HB_P_LINEOFFSET, 28,	/* 37 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 14,	/* 14 */
	HB_P_PUSHSYMNEAR, 26,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCOD_VEND */
	HB_P_ONE,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00771 */ HB_P_LINEOFFSET, 29,	/* 38 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MCIDADE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00810) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00815) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00849 */ HB_P_LINEOFFSET, 30,	/* 39 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MAREA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00888) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00893) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'a', 'r', 'e', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00925 */ HB_P_LINEOFFSET, 31,	/* 40 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MBAIRRO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00964) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00969) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'b', 'a', 'i', 'r', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01003 */ HB_P_LINEOFFSET, 32,	/* 41 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
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
/* 01025 */ HB_P_LINEOFFSET, 33,	/* 42 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01040) */
	HB_P_JUMP, 229, 6,	/* 1765 (abs: 02802) */
/* 01040 */ HB_P_LINEOFFSET, 36,	/* 45 */
	HB_P_PUSHSYMNEAR, 29,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', 's', ' ', 'D', 'a', 'd', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'o', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 7,	/* OPCAO */
/* 01091 */ HB_P_LINEOFFSET, 37,	/* 46 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 01112) */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01117) */
	HB_P_JUMP, 226, 253,	/* -542 (abs: 00572) */
/* 01117 */ HB_P_LINEOFFSET, 40,	/* 49 */
	HB_P_PUSHSYMNEAR, 30,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'm', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'c', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'o', ' ', 'r', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 01178 */ HB_P_LINEOFFSET, 41,	/* 50 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 14,	/* CONS_CLI */
/* 01185 */ HB_P_LINEOFFSET, 42,	/* 51 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'N', 'O', 'T', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'E', 39, 0, 
	HB_P_POPVARIABLE, 31, 0,	/* CCOMM */
/* 01234 */ HB_P_LINEOFFSET, 43,	/* 52 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MBAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 01279) */
/* 01245 */ HB_P_LINEOFFSET, 44,	/* 53 */
	HB_P_PUSHVARIABLE, 31, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'r', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MBAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 31, 0,	/* CCOMM */
/* 01279 */ HB_P_LINEOFFSET, 46,	/* 55 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 01322) */
/* 01290 */ HB_P_LINEOFFSET, 47,	/* 56 */
	HB_P_PUSHVARIABLE, 31, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 31, 0,	/* CCOMM */
/* 01322 */ HB_P_LINEOFFSET, 49,	/* 58 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 01377) */
/* 01334 */ HB_P_LINEOFFSET, 50,	/* 59 */
	HB_P_PUSHVARIABLE, 31, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', 'v', 'e', 'n', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 31, 0,	/* CCOMM */
/* 01377 */ HB_P_LINEOFFSET, 52,	/* 61 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 01420) */
/* 01388 */ HB_P_LINEOFFSET, 53,	/* 62 */
	HB_P_PUSHVARIABLE, 31, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 'a', 'r', 'e', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 31, 0,	/* CCOMM */
/* 01420 */ HB_P_LINEOFFSET, 55,	/* 64 */
	HB_P_PUSHLOCALNEAR, 11,	/* MTIPO_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 01463) */
/* 01431 */ HB_P_LINEOFFSET, 56,	/* 65 */
	HB_P_PUSHVARIABLE, 31, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 'c', 'g', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 31, 0,	/* CCOMM */
/* 01463 */ HB_P_LINEOFFSET, 58,	/* 67 */
	HB_P_PUSHLOCALNEAR, 11,	/* MTIPO_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'F', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 01517) */
/* 01474 */ HB_P_LINEOFFSET, 59,	/* 68 */
	HB_P_PUSHVARIABLE, 31, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', 'A', 'N', 'D', ' ', '(', 'c', 'g', 'c', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'c', 'g', 'c', ' ', '=', ' ', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 31, 0,	/* CCOMM */
/* 01517 */ HB_P_LINEOFFSET, 61,	/* 70 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 01562) */
/* 01528 */ HB_P_LINEOFFSET, 62,	/* 71 */
	HB_P_PUSHVARIABLE, 31, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'i', 'd', 'a', 'd', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 31, 0,	/* CCOMM */
/* 01562 */ HB_P_LINEOFFSET, 64,	/* 73 */
	HB_P_PUSHVARIABLE, 31, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'l', 'i', 'm', 'i', 't', 'e', ' ', '>', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 31, 0,	/* CCOMM */
/* 01595 */ HB_P_LINEOFFSET, 65,	/* 74 */
	HB_P_PUSHVARIABLE, 31, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'r', 'a', 'z', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 31, 0,	/* CCOMM */
/* 01622 */ HB_P_LINEOFFSET, 66,	/* 75 */
	HB_P_MESSAGE, 35, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 36,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 31, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 14, 0,	/* CONS_CLI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01643 */ HB_P_LINEOFFSET, 67,	/* 76 */
	HB_P_MESSAGE, 35, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 36,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01667 */ HB_P_LINEOFFSET, 68,	/* 77 */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 01743) */
/* 01680 */ HB_P_LINEOFFSET, 69,	/* 78 */
	HB_P_PUSHSYMNEAR, 38,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'c', 'o', 'm', ' ', 'e', 's', 's', 'a', 's', ' ', 'c', 'a', 'r', 'a', 'c', 't', 'e', 'r', 'i', 's', 't', 'i', 'c', 'a', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 112, 251,	/* -1168 (abs: 00572) */
/* 01743 */ HB_P_LINEOFFSET, 72,	/* 81 */
	HB_P_LOCALNEARSETSTR, 5, 40, 0,	/* MTIT 40*/
	'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
/* 01789 */ HB_P_LINEOFFSET, 73,	/* 82 */
	HB_P_LOCALNEARSETSTR, 6, 49, 0,	/* MTIPO 49*/
	'C', 'L', 'I', 'E', 'N', 'T', 'E', 'S', ' ', 'C', 'O', 'M', ' ', 'L', 'I', 'M', 'I', 'T', 'E', ' ', 'E', 'S', 'T', 'O', 'U', 'R', 'A', 'D', 'O', ' ', '(', 'O', 'r', 'd', 'e', 'm', ' ', 'A', 'l', 'f', 'a', 'b', 'e', 't', 'i', 'c', 'a', ')', 0, 
/* 01844 */ HB_P_LINEOFFSET, 74,	/* 83 */
	HB_P_PUSHSYMNEAR, 39,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'L', 'I', '_', 'D', 'E', 'B', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01875) */
	HB_P_JUMP, 236, 250,	/* -1300 (abs: 00572) */
/* 01875 */ HB_P_LINEOFFSET, 77,	/* 86 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 40, 0,	/* I */
	HB_P_PUSHVARIABLE, 40, 0,	/* I */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 145, 2,	/* 657 (abs: 02549) */
/* 01895 */ HB_P_LINEOFFSET, 78,	/* 87 */
	HB_P_PUSHSYMNEAR, 41,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* I */
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 40, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 40, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01931 */ HB_P_LINEOFFSET, 79,	/* 88 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 42, 0,	/* CONS_DUPR */
/* 01939 */ HB_P_LINEOFFSET, 81,	/* 90 */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'v', 'a', 'l', 'o', 'r', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 40, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 31, 0,	/* CCOMM */
/* 02031 */ HB_P_LINEOFFSET, 82,	/* 91 */
	HB_P_MESSAGE, 35, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 36,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 31, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 42, 0,	/* CONS_DUPR */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02052 */ HB_P_LINEOFFSET, 83,	/* 92 */
	HB_P_MESSAGE, 35, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 36,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02076 */ HB_P_LINEOFFSET, 89,	/* 98 */
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 40, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02100) */
	HB_P_JUMP, 186, 1,	/* 442 (abs: 02539) */
/* 02100 */ HB_P_LINEOFFSET, 92,	/* 101 */
	HB_P_PUSHLOCALNEAR, 4,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 02118) */
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 247, 0,	/* 247 (abs: 02365) */
/* 02121 */ HB_P_LINEOFFSET, 93,	/* 102 */
	HB_P_LOCALNEARADDINT, 4, 1, 0,	/* PAG 1*/
/* 02127 */ HB_P_LINEOFFSET, 94,	/* 103 */
	HB_P_PUSHLOCALNEAR, 4,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 02142) */
/* 02135 */ HB_P_LINEOFFSET, 95,	/* 104 */
	HB_P_PUSHSYMNEAR, 44,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02142 */ HB_P_LINEOFFSET, 97,	/* 106 */
	HB_P_PUSHSYMNEAR, 45,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* PAG */
	HB_P_PUSHLOCALNEAR, 5,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 6,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 02157 */ HB_P_LINEOFFSET, 98,	/* 107 */
	HB_P_PUSHSYMNEAR, 46,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 02171 */ HB_P_LINEOFFSET, 99,	/* 108 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 58,	/* 58 (abs: 02239) */
/* 02183 */ HB_P_LINEOFFSET, 100,	/* 109 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 2, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02239 */ HB_P_LINEOFFSET, 102,	/* 111 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 71,	/* 71 */
	'C', 'o', 'd', '.', ' ', ' ', 'R', 'a', 'z', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'L', 'i', 'm', 'i', 't', 'e', ' ', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'D', 'e', 'v', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02333 */ HB_P_LINEOFFSET, 103,	/* 112 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02365 */ HB_P_LINEOFFSET, 105,	/* 114 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 40, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02395 */ HB_P_LINEOFFSET, 106,	/* 115 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 48,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 40, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02429 */ HB_P_LINEOFFSET, 108,	/* 117 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 48,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 40, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02481 */ HB_P_LINEOFFSET, 109,	/* 118 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 48,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02531 */ HB_P_LINEOFFSET, 110,	/* 119 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* MTOT_CLI 1*/
/* 02537 */ HB_P_LINEOFFSET, 111,	/* 120 */
	HB_P_PUSHVARIABLE, 40, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 40, 0,	/* I */
	HB_P_JUMP, 103, 253,	/* -665 (abs: 01881) */
/* 02549 */ HB_P_LINEOFFSET, 112,	/* 121 */
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 02589) */
/* 02561 */ HB_P_LINEOFFSET, 113,	/* 122 */
	HB_P_PUSHSYMNEAR, 44,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02568 */ HB_P_LINEOFFSET, 114,	/* 123 */
	HB_P_LOCALNEARADDINT, 4, 1, 0,	/* PAG 1*/
/* 02574 */ HB_P_LINEOFFSET, 115,	/* 124 */
	HB_P_PUSHSYMNEAR, 45,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* PAG */
	HB_P_PUSHLOCALNEAR, 5,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 6,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 02589 */ HB_P_LINEOFFSET, 117,	/* 126 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 02633 */ HB_P_LINEOFFSET, 118,	/* 127 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 49,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CLI */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02697 */ HB_P_LINEOFFSET, 119,	/* 128 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 02723 */ HB_P_LINEOFFSET, 120,	/* 129 */
	HB_P_PUSHSYMNEAR, 44,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02730 */ HB_P_LINEOFFSET, 121,	/* 130 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 02739 */ HB_P_LINEOFFSET, 122,	/* 131 */
	HB_P_PUSHSYMNEAR, 52,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 02780 */ HB_P_LINEOFFSET, 123,	/* 132 */
	HB_P_PUSHSYMNEAR, 53,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'L', 'I', '_', 'D', 'E', 'B', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 02802 */ HB_P_LINEOFFSET, 135,	/* 144 */
	HB_P_PUSHSYMNEAR, 54,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02809 */ HB_P_LINEOFFSET, 136,	/* 145 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02814 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

