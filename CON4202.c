/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON4202.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\CON4202.PRG /q /oC:\hti\SISCOM\CON4202.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:34:55 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON4202.PRG"

HB_FUNC( CON4202 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __SETCENTURY );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( DTOS );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( DBGOTO );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( QOUT );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON4202 )
{ "CON4202", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON4202 )}, NULL },
{ "MNOME_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOM_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCOD_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__SETCENTURY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETCENTURY )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "DUPR", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "DTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOS )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "DATPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "TIP_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NUM_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "DBGOTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTO )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "QOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( QOUT )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "FORNEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "CLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DUPLICATA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "VLPAGO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON4202 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON4202
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON4202 = hb_vm_SymbolInit_CON4202;
   #pragma data_seg()
#endif

HB_FUNC( CON4202 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 16, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 11, 0,	/* 11 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'C', 'O', 'N', '4', '2', '0', '2', 0, 
	HB_P_LOCALNEARSETSTR, 10, 2, 0,	/* MTIPO_CLI 2*/
	' ', 0, 
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* MTOT_CLI 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 16,	/* M_CLIENTE */
/* 00033 */ HB_P_LINEOFFSET, 3,	/* 14 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 9,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 11,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MNOME_VEND */
	HB_P_PUSHSYMNEAR, 2,	/* MCOM_VEND */
	HB_P_PUSHSYMNEAR, 3,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 4,	/* MCGC */
	HB_P_PUSHSYMNEAR, 5,	/* MCPF */
	HB_P_PUSHSYMNEAR, 6,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 7,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 8,	/* MARQ */
	HB_P_PUSHSYMNEAR, 10,	/* MCOD_VEND */
	HB_P_DOSHORT, 9,
	HB_P_POPVARIABLE, 8, 0,	/* MARQ */
	HB_P_POPVARIABLE, 7, 0,	/* MIMP_TIPO */
/* 00072 */ HB_P_LINEOFFSET, 5,	/* 16 */
	HB_P_PUSHSYMNEAR, 12,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 'S', ' ', 'C', 'O', 'M', ' ', 'P', 'E', 'D', 'I', 'D', 'O', ' ', 'Q', 'U', 'I', 'T', 'A', 'D', 'O', ')', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '6', 0, 
	HB_P_PUSHMEMVAR, 13, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00154) */
/* 00149 */ HB_P_LINEOFFSET, 6,	/* 17 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00154 */ HB_P_LINEOFFSET, 10,	/* 21 */
	HB_P_PUSHSYMNEAR, 14,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00183) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00183 */ HB_P_LINEOFFSET, 11,	/* 22 */
	HB_P_PUSHSYMNEAR, 14,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00210) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00210 */ HB_P_LINEOFFSET, 12,	/* 23 */
	HB_P_PUSHSYMNEAR, 14,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'r', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00239) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00239 */ HB_P_LINEOFFSET, 15,	/* 26 */
	HB_P_PUSHSYMNEAR, 15,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 16,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00258 */ HB_P_LINEOFFSET, 17,	/* 28 */
	HB_P_PUSHSYMNEAR, 17,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 's', 'e', 'm', ' ', 'D', 'E', 'B', 'I', 'T', 'O', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00297 */ HB_P_LINEOFFSET, 18,	/* 29 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00348 */ HB_P_LINEOFFSET, 19,	/* 30 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00399 */ HB_P_LINEOFFSET, 20,	/* 31 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00451 */ HB_P_LINEOFFSET, 21,	/* 32 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00503 */ HB_P_LINEOFFSET, 22,	/* 33 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00555 */ HB_P_LINEOFFSET, 23,	/* 34 */
	HB_P_PUSHMEMVAR, 20, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 6, 0,	/* MTIPO_IMP */
/* 00568 */ HB_P_LINEOFFSET, 25,	/* 36 */
	HB_P_PUSHSYMNEAR, 21,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* M_CLIENTE */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00578 */ HB_P_LINEOFFSET, 26,	/* 37 */
	HB_P_PUSHSYMNEAR, 9,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 15,	/* MTIPO_DOC */
/* 00589 */ HB_P_LINEOFFSET, 27,	/* 38 */
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* MTOT_CLI 0*/
/* 00595 */ HB_P_LINEOFFSET, 28,	/* 39 */
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* MDATA2 */
	HB_P_POPLOCALNEAR, 12,	/* MDATA1 */
/* 00618 */ HB_P_LINEOFFSET, 29,	/* 40 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 10, 0,	/* MCOD_VEND */
/* 00624 */ HB_P_LINEOFFSET, 30,	/* 41 */
	HB_P_PUSHSYMNEAR, 9,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 3, 0,	/* MCLIENTE */
/* 00636 */ HB_P_LINEOFFSET, 31,	/* 42 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MTIPO_DOC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00674) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00679) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'd', 'o', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00715 */ HB_P_LINEOFFSET, 32,	/* 43 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00753) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00758) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '1', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00787 */ HB_P_LINEOFFSET, 33,	/* 44 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00826) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00831) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '2', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	13, 0,	/* MDATA2 */
	12, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00863) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00864) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00882 */ HB_P_LINEOFFSET, 34,	/* 45 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MTIPO_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00921) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00926) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 28,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 161,	/* 161 */
	HB_P_PUSHSYMNEAR, 29,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHSTRSHORT, 147,	/* 147 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ':', ' ', '<', 'C', '>', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', '<', 'R', '>', 'R', 'e', 'v', 'e', 'n', 'd', 'a', ' ', '<', 'P', '>', 'o', 't', 'e', 'n', 'c', 'i', 'a', 'l', ' ', '<', 'F', '>', 'i', 'l', 'i', 'a', 'l', ' ', '<', 'U', '>', 'F', 'u', 'n', 'c', 'i', 'o', 'n', 'a', 'r', 'i', 'o', 's', ' ', '<', 'A', '>', 's', 's', 'o', 'c', 'i', 'a', 'd', 'o', ' ', '<', 'O', '>', 'O', 'u', 't', 'r', 'o', 's', ' ', '<', 'E', '>', 'x', 'c', 'l', 'u', 'i', 'd', 'o', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'B', 'R', 'A', 'N', 'C', 'O', ' ', 'p', '/', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01129 */ HB_P_LINEOFFSET, 35,	/* 46 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 30,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01200 */ HB_P_LINEOFFSET, 36,	/* 47 */
	HB_P_PUSHSYMNEAR, 31,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 25, 0,	/* GETLIST */
/* 01222 */ HB_P_LINEOFFSET, 37,	/* 48 */
	HB_P_PUSHSYMNEAR, 32,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01237) */
	HB_P_JUMP, 254, 4,	/* 1278 (abs: 02512) */
/* 01237 */ HB_P_LINEOFFSET, 40,	/* 51 */
	HB_P_LOCALNEARSETSTR, 5, 40, 0,	/* MTIT 40*/
	'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
/* 01283 */ HB_P_LINEOFFSET, 41,	/* 52 */
	HB_P_LOCALNEARSETSTR, 6, 40, 0,	/* MTIPO 40*/
	'C', 'L', 'I', 'E', 'N', 'T', 'E', 'S', ' ', 'S', 'E', 'M', ' ', 'D', 'E', 'B', 'I', 'T', 'O', 'S', ' ', '(', 'O', 'r', 'd', 'e', 'm', ' ', 'A', 'l', 'f', 'a', 'b', 'e', 't', 'i', 'c', 'a', ')', 0, 
/* 01329 */ HB_P_LINEOFFSET, 42,	/* 53 */
	HB_P_PUSHSYMNEAR, 33,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'L', 'I', '_', 'D', 'E', 'B', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01360) */
	HB_P_JUMP, 235, 252,	/* -789 (abs: 00568) */
/* 01360 */ HB_P_LINEOFFSET, 45,	/* 56 */
	HB_P_PUSHSYMNEAR, 34,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 01374 */ HB_P_LINEOFFSET, 46,	/* 57 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* PAG 0*/
/* 01380 */ HB_P_LINEOFFSET, 47,	/* 58 */
	HB_P_PUSHSYMNEAR, 34,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHSYMNEAR, 35,	/* __SETCENTURY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 01409) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 'y', 'y', 0, 
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 01420) */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 0, 
	HB_P_DOSHORT, 2,
/* 01422 */ HB_P_LINEOFFSET, 49,	/* 60 */
	HB_P_PUSHSYMNEAR, 15,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 16,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01443 */ HB_P_LINEOFFSET, 50,	/* 61 */
	HB_P_PUSHSYMNEAR, 36,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01450 */ HB_P_LINEOFFSET, 52,	/* 63 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 37,	/* DUPR */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 38,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* DTOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
	HB_P_POPALIAS,
/* 01470 */ HB_P_LINEOFFSET, 53,	/* 64 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 40,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 01488) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 37,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 41,	/* DATPAG */
	HB_P_PUSHLOCALNEAR, 13,	/* MDATA2 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 18, 3,	/* 786 (abs: 02274) */
/* 01491 */ HB_P_LINEOFFSET, 54,	/* 65 */
	HB_P_PUSHSYMNEAR, 42,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 01503 */ HB_P_LINEOFFSET, 60,	/* 71 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 01523) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 10,	/* MTIPO_CLI */
	HB_P_PUSHSYMNEAR, 37,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 45,	/* TIP_CLI */
	HB_P_NOTEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 01536) */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 46,	/* NUM_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 13,	/* 13 (abs: 01550) */
	HB_P_PUSHSYMNEAR, 37,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* TIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 13,	/* 13 (abs: 01564) */
	HB_P_PUSHSYMNEAR, 37,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* TIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 13,	/* 13 (abs: 01578) */
	HB_P_PUSHSYMNEAR, 37,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* TIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'T', 'R', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 01600) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 01599) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 15,	/* MTIPO_DOC */
	HB_P_PUSHSYMNEAR, 37,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* TIPO */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 01613) */
/* 01602 */ HB_P_LINEOFFSET, 61,	/* 72 */
	HB_P_PUSHSYMNEAR, 48,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 116, 255,	/* -140 (abs: 01470) */
/* 01613 */ HB_P_LINEOFFSET, 64,	/* 75 */
	HB_P_PUSHSYMNEAR, 43,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 14,	/* MPOINT */
/* 01622 */ HB_P_LINEOFFSET, 65,	/* 76 */
	HB_P_PUSHSYMNEAR, 37,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 46,	/* NUM_PED */
	HB_P_POPLOCALNEAR, 9,	/* MNUM_PED */
/* 01630 */ HB_P_LINEOFFSET, 67,	/* 78 */
	HB_P_PUSHSYMNEAR, 15,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 16,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 1,
/* 01651 */ HB_P_LINEOFFSET, 68,	/* 79 */
	HB_P_PUSHSYMNEAR, 36,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01658 */ HB_P_LINEOFFSET, 70,	/* 81 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 37,	/* DUPR */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 38,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MNUM_PED */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SWAPALIAS,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 01720) */
/* 01679 */ HB_P_LINEOFFSET, 72,	/* 83 */
	HB_P_PUSHSYMNEAR, 15,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 16,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01700 */ HB_P_LINEOFFSET, 73,	/* 84 */
	HB_P_PUSHSYMNEAR, 49,	/* DBGOTO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MPOINT */
	HB_P_DOSHORT, 1,
/* 01709 */ HB_P_LINEOFFSET, 75,	/* 86 */
	HB_P_PUSHSYMNEAR, 48,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 9, 255,	/* -247 (abs: 01470) */
/* 01720 */ HB_P_LINEOFFSET, 78,	/* 89 */
	HB_P_PUSHSYMNEAR, 50,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* M_CLIENTE */
	HB_P_PUSHSYMNEAR, 37,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 46,	/* NUM_PED */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 242, 1,	/* 498 (abs: 02233) */
/* 01738 */ HB_P_LINEOFFSET, 79,	/* 90 */
	HB_P_PUSHLOCALNEAR, 4,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 01756) */
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 228, 0,	/* 228 (abs: 01984) */
/* 01759 */ HB_P_LINEOFFSET, 80,	/* 91 */
	HB_P_LOCALNEARADDINT, 4, 1, 0,	/* PAG 1*/
/* 01765 */ HB_P_LINEOFFSET, 81,	/* 92 */
	HB_P_PUSHLOCALNEAR, 4,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 01780) */
/* 01773 */ HB_P_LINEOFFSET, 82,	/* 93 */
	HB_P_PUSHSYMNEAR, 52,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01780 */ HB_P_LINEOFFSET, 84,	/* 95 */
	HB_P_PUSHSYMNEAR, 53,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* PAG */
	HB_P_PUSHLOCALNEAR, 5,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 6,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 01795 */ HB_P_LINEOFFSET, 85,	/* 96 */
	HB_P_PUSHSYMNEAR, 54,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 01809 */ HB_P_LINEOFFSET, 86,	/* 97 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MCOD_VEND */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 58,	/* 58 (abs: 01874) */
/* 01818 */ HB_P_LINEOFFSET, 87,	/* 98 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 55,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 1, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01874 */ HB_P_LINEOFFSET, 89,	/* 100 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 82,	/* 82 */
	'C', 'o', 'd', '.', ' ', ' ', 'R', 'a', 'z', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', 'P', 'e', 'd', ' ', ' ', 'U', 'l', 't', '.', 'D', 'o', 'c', '.', ' ', 'D', 'a', 't', '.', 'P', 'a', 'g', '.', ' ', 'V', 'l', 'r', '.', 'P', 'a', 'g', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 01965 */ HB_P_LINEOFFSET, 90,	/* 101 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01984 */ HB_P_LINEOFFSET, 93,	/* 104 */
	HB_P_PUSHSYMNEAR, 15,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 16,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 02005 */ HB_P_LINEOFFSET, 94,	/* 105 */
	HB_P_PUSHSYMNEAR, 49,	/* DBGOTO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MPOINT */
	HB_P_DOSHORT, 1,
/* 02014 */ HB_P_LINEOFFSET, 96,	/* 107 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* FORNEC */
	HB_P_DOSHORT, 1,
/* 02039 */ HB_P_LINEOFFSET, 97,	/* 108 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 59,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 60,	/* CLIENTE */
	HB_P_DOSHORT, 1,
/* 02068 */ HB_P_LINEOFFSET, 98,	/* 109 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 59,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 46,	/* NUM_PED */
	HB_P_DOSHORT, 1,
/* 02097 */ HB_P_LINEOFFSET, 99,	/* 110 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 59,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* TIPO */
	HB_P_PUSHSYMNEAR, 37,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 61,	/* DUPLICATA */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02131 */ HB_P_LINEOFFSET, 100,	/* 111 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 59,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 41,	/* DATPAG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 02165 */ HB_P_LINEOFFSET, 101,	/* 112 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 59,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 64,	/* VLPAGO */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02212 */ HB_P_LINEOFFSET, 102,	/* 113 */
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* M_CLIENTE */
	HB_P_PUSHSYMNEAR, 37,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 46,	/* NUM_PED */
	HB_P_DOSHORT, 2,
/* 02225 */ HB_P_LINEOFFSET, 103,	/* 114 */
	HB_P_LOCALNEARADDINT, 11, 1, 0,	/* MTOT_CLI 1*/
	HB_P_JUMPNEAR, 32,	/* 32 (abs: 02263) */
/* 02233 */ HB_P_LINEOFFSET, 106,	/* 117 */
	HB_P_PUSHSYMNEAR, 15,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 16,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 02254 */ HB_P_LINEOFFSET, 107,	/* 118 */
	HB_P_PUSHSYMNEAR, 49,	/* DBGOTO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MPOINT */
	HB_P_DOSHORT, 1,
/* 02263 */ HB_P_LINEOFFSET, 111,	/* 122 */
	HB_P_PUSHSYMNEAR, 48,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 223, 252,	/* -801 (abs: 01470) */
/* 02274 */ HB_P_LINEOFFSET, 113,	/* 124 */
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 02312) */
/* 02286 */ HB_P_LINEOFFSET, 114,	/* 125 */
	HB_P_PUSHSYMNEAR, 52,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02293 */ HB_P_LINEOFFSET, 115,	/* 126 */
	HB_P_LOCALNEARADDINT, 4, 1, 0,	/* PAG 1*/
/* 02299 */ HB_P_LINEOFFSET, 116,	/* 127 */
	HB_P_PUSHSYMNEAR, 53,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* PAG */
	HB_P_PUSHLOCALNEAR, 5,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 6,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 02312 */ HB_P_LINEOFFSET, 118,	/* 129 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02319 */ HB_P_LINEOFFSET, 119,	/* 130 */
	HB_P_PUSHSYMNEAR, 54,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 02333 */ HB_P_LINEOFFSET, 120,	/* 131 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 02363 */ HB_P_LINEOFFSET, 121,	/* 132 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CLI */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02414 */ HB_P_LINEOFFSET, 122,	/* 133 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02421 */ HB_P_LINEOFFSET, 123,	/* 134 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 02433 */ HB_P_LINEOFFSET, 124,	/* 135 */
	HB_P_PUSHSYMNEAR, 52,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02440 */ HB_P_LINEOFFSET, 125,	/* 136 */
	HB_P_PUSHSYMNEAR, 66,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 02449 */ HB_P_LINEOFFSET, 126,	/* 137 */
	HB_P_PUSHSYMNEAR, 34,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 02490 */ HB_P_LINEOFFSET, 127,	/* 138 */
	HB_P_PUSHSYMNEAR, 67,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'L', 'I', '_', 'D', 'E', 'B', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 02512 */ HB_P_LINEOFFSET, 139,	/* 150 */
	HB_P_PUSHSYMNEAR, 68,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02519 */ HB_P_LINEOFFSET, 140,	/* 151 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02524 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

