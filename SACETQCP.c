/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACETQCP.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SACETQCP.PRG /q /oC:\hti\SISCOM\SACETQCP.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.02 16:11:17 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACETQCP.PRG"

HB_FUNC( SACETQCP );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( SET_KEY );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( SAVESCREEN );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( RESTSCREEN );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACETQCP )
{ "SACETQCP", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACETQCP )}, NULL },
{ "MCLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MNUM_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTRANSP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MVOLUME", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "SET_KEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET_KEY )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "SAVESCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAVESCREEN )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "CFG", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "IMP_REL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "RESTSCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( RESTSCREEN )}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "PCOD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "PNUM_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "PPACOTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PPECAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PQUANTD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "NOME", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CIDADE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "RAZAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "COD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACETQCP )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACETQCP
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACETQCP = hb_vm_SymbolInit_SACETQCP;
   #pragma data_seg()
#endif

HB_FUNC( SACETQCP )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 14, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 10, 0,	/* 10 */
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', 'E', 'T', 'Q', 'C', 'P', 0, 
	HB_P_LOCALNEARSETINT, 14, 1, 0,	/* MQUANTD 1*/
/* 00023 */ HB_P_LINEOFFSET, 3,	/* 13 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 15,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 2,	/* MCGC */
	HB_P_PUSHSYMNEAR, 3,	/* MCPF */
	HB_P_PUSHSYMNEAR, 4,	/* MCOD_CLI */
	HB_P_PUSHSYMNEAR, 5,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 6,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 7,	/* MARQ */
	HB_P_PUSHSYMNEAR, 9,	/* MNUM_PED */
	HB_P_PUSHSYMNEAR, 10,	/* MTRANSP */
	HB_P_PUSHSYMNEAR, 11,	/* MVOLUME */
	HB_P_PUSHSYMNEAR, 12,	/* ALI */
	HB_P_PUSHSYMNEAR, 13,	/* MCOD */
	HB_P_PUSHSYMNEAR, 14,	/* CONS_CLI */
	HB_P_DOSHORT, 13,
	HB_P_POPVARIABLE, 14, 0,	/* CONS_CLI */
	HB_P_POPVARIABLE, 13, 0,	/* MCOD */
	HB_P_POPVARIABLE, 12, 0,	/* ALI */
	HB_P_POPVARIABLE, 11, 0,	/* MVOLUME */
	HB_P_POPVARIABLE, 9, 0,	/* MNUM_PED */
	HB_P_POPVARIABLE, 7, 0,	/* MARQ */
	HB_P_POPVARIABLE, 6, 0,	/* MIMP_TIPO */
/* 00102 */ HB_P_LINEOFFSET, 5,	/* 15 */
	HB_P_LOCALNEARSETINT, 4, 3, 0,	/* LC 3*/
/* 00108 */ HB_P_LINEOFFSET, 6,	/* 16 */
	HB_P_LOCALNEARSETINT, 5, 4, 0,	/* CC 4*/
/* 00114 */ HB_P_LINEOFFSET, 7,	/* 17 */
	HB_P_LOCALNEARSETINT, 6, 21, 0,	/* LB 21*/
/* 00120 */ HB_P_LINEOFFSET, 8,	/* 18 */
	HB_P_LOCALNEARSETINT, 7, 76, 0,	/* CB 76*/
/* 00126 */ HB_P_LINEOFFSET, 10,	/* 20 */
	HB_P_PUSHSYMNEAR, 16,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 17,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 18,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00148 */ HB_P_LINEOFFSET, 11,	/* 21 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00177) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00177 */ HB_P_LINEOFFSET, 12,	/* 22 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'A', 'C', 'C', 'E', 'P', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'E', 'P', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00204) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00204 */ HB_P_LINEOFFSET, 14,	/* 24 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'p', 'e', 'd', '_', 's', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 's', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00235) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00235 */ HB_P_LINEOFFSET, 15,	/* 25 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00262) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00262 */ HB_P_LINEOFFSET, 16,	/* 26 */
	HB_P_PUSHSYMNEAR, 20,	/* SET_KEY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 00279 */ HB_P_LINEOFFSET, 17,	/* 27 */
	HB_P_PUSHSYMNEAR, 17,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 21,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 1,
/* 00299 */ HB_P_LINEOFFSET, 18,	/* 28 */
	HB_P_PUSHSYMNEAR, 22,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00306 */ HB_P_LINEOFFSET, 21,	/* 31 */
	HB_P_PUSHSYMNEAR, 23,	/* SAVESCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 2,	/* TELA */
/* 00321 */ HB_P_LINEOFFSET, 23,	/* 33 */
	HB_P_PUSHSYMNEAR, 24,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00330 */ HB_P_LINEOFFSET, 25,	/* 35 */
	HB_P_PUSHSYMNEAR, 25,	/* CFG */
	HB_P_PUSHALIASEDFIELDNEAR, 26,	/* IMP_REL */
	HB_P_POPVARIABLE, 5, 0,	/* MTIPO_IMP */
/* 00339 */ HB_P_LINEOFFSET, 27,	/* 37 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 10, 0,	/* MTRANSP */
/* 00351 */ HB_P_LINEOFFSET, 28,	/* 38 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 11, 0,	/* MVOLUME */
	HB_P_POPVARIABLE, 9, 0,	/* MNUM_PED */
/* 00365 */ HB_P_LINEOFFSET, 29,	/* 39 */
	HB_P_LOCALNEARSETINT, 12, 2, 0,	/* MLINHAS 2*/
/* 00371 */ HB_P_LINEOFFSET, 30,	/* 40 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* MCONTADOR 0*/
/* 00377 */ HB_P_LINEOFFSET, 31,	/* 41 */
	HB_P_LOCALNEARSETINT, 9, 20, 0,	/* MQTD_ETQ 20*/
/* 00383 */ HB_P_LINEOFFSET, 32,	/* 42 */
	HB_P_LOCALNEARSETINT, 14, 1, 0,	/* MQUANTD 1*/
/* 00389 */ HB_P_LINEOFFSET, 33,	/* 43 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_POPVARIABLE, 13, 0,	/* MCOD */
/* 00398 */ HB_P_LINEOFFSET, 34,	/* 44 */
	HB_P_PUSHSYMNEAR, 27,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_PUSHLOCALNEAR, 6,	/* LB */
	HB_P_PUSHLOCALNEAR, 7,	/* CB */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', 'O', 'p', 'c', 'o', 'e', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', ' ', 'D', 'E', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 'S', ' ', 0, 
	HB_P_DOSHORT, 6,
/* 00452 */ HB_P_LINEOFFSET, 35,	/* 45 */
	HB_P_PUSHSYMNEAR, 28,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00460 */ HB_P_LINEOFFSET, 36,	/* 46 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'N', 'u', 'm', 'e', 'r', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00500 */ HB_P_LINEOFFSET, 37,	/* 47 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00540 */ HB_P_LINEOFFSET, 38,	/* 48 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'C', 'i', 'd', 'a', 'd', 'e', ' ', 'e', ' ', 'U', 'F', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00580 */ HB_P_LINEOFFSET, 39,	/* 49 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'T', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', 'a', 'd', 'o', 'r', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00620 */ HB_P_LINEOFFSET, 40,	/* 50 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'V', 'o', 'l', 'u', 'm', 'e', 's', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00660 */ HB_P_LINEOFFSET, 41,	/* 51 */
	HB_P_PUSHSYMNEAR, 31,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 7,	/* CB */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00688 */ HB_P_LINEOFFSET, 42,	/* 52 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'L', 'i', 'n', 'h', 'a', 's', ' ', 'e', 'n', 't', 'r', 'e', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00749 */ HB_P_LINEOFFSET, 43,	/* 53 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', 'p', '/', 'p', 'a', 'g', 'i', 'n', 'a', 's', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00810 */ HB_P_LINEOFFSET, 44,	/* 54 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', '[', 'S', '/', 'n', ']', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00871 */ HB_P_LINEOFFSET, 45,	/* 55 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00932 */ HB_P_LINEOFFSET, 46,	/* 56 */
	HB_P_PUSHSYMNEAR, 32,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', '-', ' ', '[', 'E', 'S', 'C', ']', ' ', 'p', '/', ' ', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00984 */ HB_P_LINEOFFSET, 47,	/* 57 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'n', 'u', 'm', '_', 'p', 'e', 'd', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 37, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01049 */ HB_P_LINEOFFSET, 48,	/* 58 */
	HB_P_PUSHSYMNEAR, 38,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 35, 0,	/* GETLIST */
/* 01071 */ HB_P_LINEOFFSET, 49,	/* 59 */
	HB_P_PUSHSYMNEAR, 39,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 01125) */
/* 01083 */ HB_P_LINEOFFSET, 50,	/* 60 */
	HB_P_PUSHSYMNEAR, 40,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 2,	/* TELA */
	HB_P_DOSHORT, 5,
/* 01098 */ HB_P_LINEOFFSET, 51,	/* 61 */
	HB_P_PUSHSYMNEAR, 16,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 17,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 18,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 01120 */ HB_P_LINEOFFSET, 52,	/* 62 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01125 */ HB_P_LINEOFFSET, 55,	/* 65 */
	HB_P_PUSHSYMNEAR, 17,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 's', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 21,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01146 */ HB_P_LINEOFFSET, 56,	/* 66 */
	HB_P_PUSHSYMNEAR, 22,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01153 */ HB_P_LINEOFFSET, 58,	/* 68 */
	HB_P_PUSHALIAS,
	HB_P_PUSHVARIABLE, 12, 0,	/* ALI */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 41,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MNUM_PED */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SWAPALIAS,
	HB_P_JUMPTRUENEAR, 50,	/* 50 (abs: 01226) */
/* 01178 */ HB_P_LINEOFFSET, 59,	/* 69 */
	HB_P_PUSHSYMNEAR, 43,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'r', ' ', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 149, 0,	/* 149 (abs: 01372) */
/* 01226 */ HB_P_LINEOFFSET, 61,	/* 71 */
	HB_P_PUSHSYMNEAR, 44,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* ALI */
	HB_P_PUSHALIASEDVAR, 45, 0,	/* PCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 4, 0,	/* MCOD_CLI */
/* 01242 */ HB_P_LINEOFFSET, 62,	/* 72 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 46,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 20,	/* 20 (abs: 01270) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 42,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MNUM_PED */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHVARIABLE, 12, 0,	/* ALI */
	HB_P_PUSHALIASEDVAR, 47, 0,	/* PNUM_PED */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 102,	/* 102 (abs: 01372) */
/* 01272 */ HB_P_LINEOFFSET, 63,	/* 73 */
	HB_P_PUSHSYMNEAR, 48,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* ALI */
	HB_P_PUSHALIASEDVAR, 49, 0,	/* PPACOTE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 15,	/* 15 (abs: 01302) */
	HB_P_PUSHSYMNEAR, 48,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* ALI */
	HB_P_PUSHALIASEDVAR, 50, 0,	/* PPECAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 01347) */
/* 01304 */ HB_P_LINEOFFSET, 64,	/* 74 */
	HB_P_PUSHVARIABLE, 11, 0,	/* MVOLUME */
	HB_P_PUSHVARIABLE, 12, 0,	/* ALI */
	HB_P_PUSHALIASEDVAR, 49, 0,	/* PPACOTE */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 11, 0,	/* MVOLUME */
/* 01319 */ HB_P_LINEOFFSET, 65,	/* 75 */
	HB_P_PUSHSYMNEAR, 48,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* ALI */
	HB_P_PUSHALIASEDVAR, 50, 0,	/* PPECAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 30,	/* 30 (abs: 01362) */
/* 01334 */ HB_P_LINEOFFSET, 66,	/* 76 */
	HB_P_PUSHVARIABLE, 11, 0,	/* MVOLUME */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_POPVARIABLE, 11, 0,	/* MVOLUME */
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 01362) */
/* 01347 */ HB_P_LINEOFFSET, 69,	/* 79 */
	HB_P_PUSHVARIABLE, 11, 0,	/* MVOLUME */
	HB_P_PUSHVARIABLE, 12, 0,	/* ALI */
	HB_P_PUSHALIASEDVAR, 51, 0,	/* PQUANTD */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 11, 0,	/* MVOLUME */
/* 01362 */ HB_P_LINEOFFSET, 71,	/* 81 */
	HB_P_PUSHSYMNEAR, 52,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 128,	/* -128 (abs: 01242) */
/* 01372 */ HB_P_LINEOFFSET, 74,	/* 84 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	4, 0,	/* LC */
	5, 0,	/* CC */
	HB_P_PUSHSYMNEAR, 53,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 24, 0,	/* 24*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 37, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01465 */ HB_P_LINEOFFSET, 75,	/* 85 */
	HB_P_PUSHSYMNEAR, 38,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 35, 0,	/* GETLIST */
/* 01487 */ HB_P_LINEOFFSET, 76,	/* 86 */
	HB_P_PUSHSYMNEAR, 39,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01502) */
	HB_P_JUMP, 102, 251,	/* -1178 (abs: 00321) */
/* 01502 */ HB_P_LINEOFFSET, 79,	/* 89 */
	HB_P_PUSHSYMNEAR, 28,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01511 */ HB_P_LINEOFFSET, 80,	/* 90 */
	HB_P_LOCALNEARSETINT, 13, 1, 0,	/* MFILA 1*/
/* 01517 */ HB_P_LINEOFFSET, 81,	/* 91 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* NOME */
	HB_P_DOSHORT, 1,
/* 01543 */ HB_P_LINEOFFSET, 82,	/* 92 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 56,	/* CIDADE */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 54,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* UF */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01581 */ HB_P_LINEOFFSET, 83,	/* 93 */
	HB_P_PUSHSYMNEAR, 28,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01589 */ HB_P_LINEOFFSET, 84,	/* 94 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 't', 'r', 'a', 'n', 's', 'p', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 37, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01645 */ HB_P_LINEOFFSET, 85,	/* 95 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'v', 'o', 'l', 'u', 'm', 'e', 0, 
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 37, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01714 */ HB_P_LINEOFFSET, 86,	/* 96 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MLINHAS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01759) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01764) */
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
	HB_P_MESSAGE, 37, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01797 */ HB_P_LINEOFFSET, 87,	/* 97 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MQTD_ETQ */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01842) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01847) */
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
	HB_P_MESSAGE, 37, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01882 */ HB_P_LINEOFFSET, 88,	/* 98 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'c', 'o', 'd', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 13, 0,	/* MCOD */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 37, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01951 */ HB_P_LINEOFFSET, 89,	/* 99 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MQUANTD */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01996) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02001) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'q', 'u', 'a', 'n', 't', 'd', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 37, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02035 */ HB_P_LINEOFFSET, 90,	/* 100 */
	HB_P_PUSHSYMNEAR, 38,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 35, 0,	/* GETLIST */
/* 02057 */ HB_P_LINEOFFSET, 91,	/* 101 */
	HB_P_PUSHSYMNEAR, 39,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 02087) */
/* 02069 */ HB_P_LINEOFFSET, 92,	/* 102 */
	HB_P_PUSHSYMNEAR, 40,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 2,	/* TELA */
	HB_P_DOSHORT, 5,
	HB_P_JUMP, 215, 1,	/* 471 (abs: 02555) */
/* 02087 */ HB_P_LINEOFFSET, 95,	/* 105 */
	HB_P_PUSHSYMNEAR, 58,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'E', 'T', 'Q', '_', 'C', 'L', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 02117) */
	HB_P_JUMP, 255, 248,	/* -1793 (abs: 00321) */
/* 02117 */ HB_P_LINEOFFSET, 98,	/* 108 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* I 0*/
	HB_P_PUSHLOCALNEAR, 10,	/* I */
	HB_P_POPLOCALNEAR, 8,	/* MCONTADOR */
/* 02127 */ HB_P_LINEOFFSET, 99,	/* 109 */
	HB_P_LOCALNEARSETINT, 10, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 10,	/* I */
	HB_P_PUSHLOCALNEAR, 14,	/* MQUANTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 96, 1,	/* 352 (abs: 02490) */
/* 02141 */ HB_P_LINEOFFSET, 100,	/* 110 */
	HB_P_PUSHSYMNEAR, 59,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 02155 */ HB_P_LINEOFFSET, 101,	/* 111 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 61,	/* RAZAO */
	HB_P_DOSHORT, 1,
/* 02180 */ HB_P_LINEOFFSET, 102,	/* 112 */
	HB_P_PUSHVARIABLE, 13, 0,	/* MCOD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 02238) */
/* 02192 */ HB_P_LINEOFFSET, 103,	/* 113 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 63,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 64,	/* COD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 02271) */
/* 02238 */ HB_P_LINEOFFSET, 105,	/* 115 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 02271 */ HB_P_LINEOFFSET, 107,	/* 117 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 56,	/* CIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 54,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* UF */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02313 */ HB_P_LINEOFFSET, 108,	/* 118 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'N', 'o', '.', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ':', 0, 
	HB_P_PUSHSYMNEAR, 42,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MNUM_PED */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02359 */ HB_P_LINEOFFSET, 109,	/* 119 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'T', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', '.', ':', 0, 
	HB_P_PUSHVARIABLE, 10, 0,	/* MTRANSP */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02398 */ HB_P_LINEOFFSET, 110,	/* 120 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'V', 'o', 'l', 'u', 'm', 'e', 's', '.', '.', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MVOLUME */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02456 */ HB_P_LINEOFFSET, 111,	/* 121 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 12,	/* MLINHAS */
	HB_P_PLUS,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 02481 */ HB_P_LINEOFFSET, 112,	/* 122 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* I 1*/
	HB_P_JUMP, 158, 254,	/* -354 (abs: 02133) */
/* 02490 */ HB_P_LINEOFFSET, 113,	/* 123 */
	HB_P_PUSHSYMNEAR, 67,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 67,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 67,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 02531 */ HB_P_LINEOFFSET, 114,	/* 124 */
	HB_P_PUSHSYMNEAR, 68,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'E', 'T', 'Q', '_', 'C', 'L', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 73, 247,	/* -2231 (abs: 00321) */
/* 02555 */ HB_P_LINEOFFSET, 116,	/* 126 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02560 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

