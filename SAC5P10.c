/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5P10.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC5P10.PRG /q /oC:\hti\SISCOM\SAC5P10.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.20 11:14:23 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5P10.PRG"

HB_FUNC( SAC5P10 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( VER_SERIE );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( V_UF );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( MENSAGEM1 );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( DTOS );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( SAC5PE21 );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5P10 )
{ "SAC5P10", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5P10 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MTRACO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TELAPRINT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_DIA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "VER_SERIE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SERIE )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "V_UF", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_UF )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "ESPE", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "COD_ESPE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESCRI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "MENSAGEM1", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM1 )}, NULL },
{ "PED_S", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "DTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOS )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "SAC5PE21", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5PE21 )}, NULL },
{ "PDAT_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "PCOD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PENTREG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PPRODUCAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "PCOD_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "PNUM_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PVENDEDOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PCOD_OPER", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "PESPECIE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PQUANTD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PVLR_FAT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PPESO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "PDATAPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5P10 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5P10
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5P10 = hb_vm_SymbolInit_SAC5P10;
   #pragma data_seg()
#endif

HB_FUNC( SAC5P10 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 33, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 13, 0,	/* 13 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', '5', 'P', '1', '0', 0, 
	HB_P_LOCALNEARSETSTR, 22, 2, 0,	/* MCLI_VEN 2*/
	'N', 0, 
	HB_P_LOCALNEARSETINT, 25, 0, 0,	/* MTOT_PESO 0*/
	HB_P_LOCALNEARSETSTR, 26, 2, 0,	/* MPRODUCAO 2*/
	' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 27,	/* M_ESPE */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 29,	/* M_ESPETOT */
	HB_P_LOCALNEARSETINT, 30, 0, 0,	/* MPONTO 0*/
	HB_P_LOCALNEARSETINT, 31, 0, 0,	/* I 0*/
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 32,	/* MTOTALIZA */
	HB_P_LOCALNEARSETSTR, 33, 2, 0,	/* MTIPO_PED 2*/
	'T', 0, 
/* 00071 */ HB_P_LINEOFFSET, 3,	/* 16 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 17,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MTRACO */
	HB_P_PUSHSYMNEAR, 3,	/* TELAPRINT */
	HB_P_PUSHSYMNEAR, 4,	/* MTIT */
	HB_P_PUSHSYMNEAR, 5,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 6,	/* MPAG */
	HB_P_PUSHSYMNEAR, 7,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 8,	/* MCGC */
	HB_P_PUSHSYMNEAR, 9,	/* MCPF */
	HB_P_PUSHSYMNEAR, 10,	/* MDATA1 */
	HB_P_PUSHSYMNEAR, 11,	/* MDATA2 */
	HB_P_PUSHSYMNEAR, 12,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 13,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 14,	/* MARQ */
	HB_P_PUSHSYMNEAR, 15,	/* MDATA_DIA */
	HB_P_PUSHSYMNEAR, 16,	/* CONS_CLI */
	HB_P_DOSHORT, 15,
	HB_P_POPVARIABLE, 16, 0,	/* CONS_CLI */
	HB_P_POPVARIABLE, 14, 0,	/* MARQ */
	HB_P_POPVARIABLE, 13, 0,	/* MIMP_TIPO */
/* 00128 */ HB_P_LINEOFFSET, 5,	/* 18 */
	HB_P_PUSHSYMNEAR, 18,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'P', '/', 'P', 'E', 'D', 'I', 'D', 'O', ' ', '(', 'E', 'S', 'P', 'E', 'C', 'I', 'E', ')', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'1', '4', '5', '6', 0, 
	HB_P_PUSHMEMVAR, 19, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00204) */
/* 00199 */ HB_P_LINEOFFSET, 6,	/* 19 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00204 */ HB_P_LINEOFFSET, 9,	/* 22 */
	HB_P_PUSHSYMNEAR, 20,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 2, 0,	/* MTRACO */
/* 00221 */ HB_P_LINEOFFSET, 11,	/* 24 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_POPLOCALNEAR, 3,	/* LCI */
/* 00231 */ HB_P_LINEOFFSET, 12,	/* 25 */
	HB_P_LOCALNEARSETINT, 5, 12, 0,	/* LBA 12*/
/* 00237 */ HB_P_LINEOFFSET, 13,	/* 26 */
	HB_P_LOCALNEARSETINT, 6, 55, 0,	/* CBA 55*/
/* 00243 */ HB_P_LINEOFFSET, 15,	/* 28 */
	HB_P_PUSHSYMNEAR, 21,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 22,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 23,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00265 */ HB_P_LINEOFFSET, 16,	/* 29 */
	HB_P_PUSHSYMNEAR, 24,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'e', 's', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'e', 's', 'p', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00294) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00294 */ HB_P_LINEOFFSET, 17,	/* 30 */
	HB_P_PUSHSYMNEAR, 24,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'r', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00323) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00323 */ HB_P_LINEOFFSET, 18,	/* 31 */
	HB_P_PUSHSYMNEAR, 24,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'm', 'o', 'v', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'm', 'o', 'v', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00350) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00350 */ HB_P_LINEOFFSET, 19,	/* 32 */
	HB_P_PUSHSYMNEAR, 24,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'p', 'e', 'd', '_', 's', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 's', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00381) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00381 */ HB_P_LINEOFFSET, 20,	/* 33 */
	HB_P_PUSHSYMNEAR, 24,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00408) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00408 */ HB_P_LINEOFFSET, 22,	/* 35 */
	HB_P_PUSHSYMNEAR, 25,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'P', '/', 'P', 'E', 'D', 'I', 'D', 'O', ' ', '(', 'E', 'S', 'P', 'E', 'C', 'I', 'E', ')', 0, 
	HB_P_DOSHORT, 5,
/* 00467 */ HB_P_LINEOFFSET, 24,	/* 37 */
	HB_P_PUSHSYMNEAR, 26,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* M_ESPE */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00477 */ HB_P_LINEOFFSET, 25,	/* 38 */
	HB_P_PUSHSYMNEAR, 26,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00487 */ HB_P_LINEOFFSET, 26,	/* 39 */
	HB_P_PUSHSYMNEAR, 26,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* M_ESPETOT */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00497 */ HB_P_LINEOFFSET, 27,	/* 40 */
	HB_P_PUSHMEMVAR, 27, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 12, 0,	/* MTIPO_IMP */
/* 00510 */ HB_P_LINEOFFSET, 28,	/* 41 */
	HB_P_PUSHMEMVAR, 28, 0,	/* MDATA_SIS */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 11, 0,	/* MDATA2 */
	HB_P_POPVARIABLE, 10, 0,	/* MDATA1 */
/* 00522 */ HB_P_LINEOFFSET, 29,	/* 42 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* MCANCEL */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 32,	/* MTOTALIZA */
	HB_P_POPLOCALNEAR, 26,	/* MPRODUCAO */
/* 00538 */ HB_P_LINEOFFSET, 30,	/* 43 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 18,	/* MTP */
/* 00548 */ HB_P_LINEOFFSET, 31,	/* 44 */
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* MCOD_CLI 0*/
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_CLI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* MCOD_VEND */
	HB_P_POPLOCALNEAR, 7,	/* OPCAO */
/* 00561 */ HB_P_LINEOFFSET, 32,	/* 45 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 24,	/* MUF */
/* 00572 */ HB_P_LINEOFFSET, 33,	/* 46 */
	HB_P_LOCALNEARSETSTR, 33, 2, 0,	/* MTIPO_PED 2*/
	'T', 0, 
/* 00580 */ HB_P_LINEOFFSET, 34,	/* 47 */
	HB_P_PUSHSYMNEAR, 29,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00622 */ HB_P_LINEOFFSET, 35,	/* 48 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00663 */ HB_P_LINEOFFSET, 36,	/* 49 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00704 */ HB_P_LINEOFFSET, 37,	/* 50 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'i', 'g', 'l', 'a', ' ', 'd', 'o', ' ', 'E', 's', 't', 'a', 'd', 'o', ' ', 'q', 'u', 'e', ' ', 'D', 'e', 's', 'e', 'j', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00767 */ HB_P_LINEOFFSET, 38,	/* 51 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'R', 'e', 'l', 'a', 'c', 'i', 'o', 'n', 'a', 'd', 'o', ' ', 'c', '/', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', '[', 's', '/', 'N', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00830 */ HB_P_LINEOFFSET, 39,	/* 52 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00871 */ HB_P_LINEOFFSET, 40,	/* 53 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00912 */ HB_P_LINEOFFSET, 41,	/* 54 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'T', 'o', 't', 'a', 'l', 'i', 'z', 'a', 'r', ' ', 'p', '/', 'd', 'i', 'a', ':', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00954 */ HB_P_LINEOFFSET, 42,	/* 55 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', '[', 'E', ']', 'n', 't', 'r', 'e', 'g', 'u', 'e', ' ', '[', 'N', ']', 'a', 'o', ' ', 'e', 'n', 't', 'r', '.', '[', 'T', ']', 'o', 'd', 'o', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01017 */ HB_P_LINEOFFSET, 43,	/* 56 */
	HB_P_PUSHSYMNEAR, 32,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 01045 */ HB_P_LINEOFFSET, 44,	/* 57 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 01089 */ HB_P_LINEOFFSET, 45,	/* 58 */
	HB_P_PUSHSYMNEAR, 33,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '1', '2', '8', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 64,	/* 64 (abs: 01170) */
/* 01108 */ HB_P_LINEOFFSET, 46,	/* 59 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'[', 'P', ']', 'r', 'o', 'd', 'u', 'c', 'a', 'o', ' ', '[', 'N', ']', 'a', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'o', 'u', ' ', 'B', 'r', 'a', 'n', 'c', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01170 */ HB_P_LINEOFFSET, 48,	/* 61 */
	HB_P_PUSHSYMNEAR, 34,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01178 */ HB_P_LINEOFFSET, 49,	/* 62 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MCOD_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01223) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01228) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 40, 0,	/* 40 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	11, 0,	/* MCOD_CLI */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 39,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 01287) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 40,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 23, 0,	/* 23*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 100, 0,	/* 100 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	19, 0,	/* MCOD_VEND */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 81,	/* 81 (abs: 01387) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 41,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 23, 0,	/* 23*/
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'o', 'u', ' ', 'n', 'a', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'p', '/', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01404 */ HB_P_LINEOFFSET, 50,	/* 63 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MCOD_VEND */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01449) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01454) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 40, 0,	/* 40 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	19, 0,	/* MCOD_VEND */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 43,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 23, 0,	/* 23*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 01512) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 39,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 99, 0,	/* 99 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	11, 0,	/* MCOD_CLI */
	3, 0,	/* LCI */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 79,	/* 79 (abs: 01611) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 41,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'o', 'u', ' ', 'n', 'a', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'p', '/', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01628 */ HB_P_LINEOFFSET, 51,	/* 64 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 40, 0,	/* 40*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	24, 0,	/* MUF */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01673) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01678) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'm', 'u', 'f', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 26, 0,	/* 26 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	24, 0,	/* MUF */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 39,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 01715) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* V_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 117, 0,	/* 117 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	19, 0,	/* MCOD_VEND */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 95,	/* 95 (abs: 01832) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 41,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 40, 0,	/* 40*/
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'S', 'i', 'g', 'l', 'a', ' ', 'd', 'o', ' ', 'E', 's', 't', 'a', 'd', 'o', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'B', 'R', 'A', 'N', 'C', 'O', ' ', 'p', 'a', 'r', 'a', ' ', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01849 */ HB_P_LINEOFFSET, 52,	/* 65 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 40, 0,	/* 40*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MCLI_VEN */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01894) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01899) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'l', 'i', '_', 'v', 'e', 'n', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MCLI_VEN */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MCOD_VEND */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01969 */ HB_P_LINEOFFSET, 53,	/* 66 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '1', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 17,	/* 17 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02031) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02032) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02050 */ HB_P_LINEOFFSET, 54,	/* 67 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '2', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 16,	/* 16 */
	HB_P_PUSHVARIABLE, 11, 0,	/* MDATA2 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MDATA1 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02111) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02112) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02130 */ HB_P_LINEOFFSET, 55,	/* 68 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	32, 0,	/* MTOTALIZA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02175) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02180) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'o', 't', 'a', 'l', 'i', 'z', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	32, 0,	/* MTOTALIZA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02234 */ HB_P_LINEOFFSET, 56,	/* 69 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 40, 0,	/* 40*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	33, 0,	/* MTIPO_PED */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02279) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02284) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'p', 'e', 'd', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	33, 0,	/* MTIPO_PED */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'E', ',', 'N', ',', 'T', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02340 */ HB_P_LINEOFFSET, 57,	/* 70 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 40, 0,	/* 40*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	26, 0,	/* MPRODUCAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02385) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02390) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'p', 'r', 'o', 'd', 'u', 'c', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	26, 0,	/* MPRODUCAO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', ',', 'N', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 18,	/* 18 */
	HB_P_PUSHSYMNEAR, 33,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '1', '2', '8', '7', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02463 */ HB_P_LINEOFFSET, 58,	/* 71 */
	HB_P_PUSHSYMNEAR, 46,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 37, 0,	/* GETLIST */
/* 02485 */ HB_P_LINEOFFSET, 59,	/* 72 */
	HB_P_PUSHSYMNEAR, 47,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02500) */
	HB_P_JUMP, 245, 27,	/* 7157 (abs: 09654) */
/* 02500 */ HB_P_LINEOFFSET, 62,	/* 75 */
	HB_P_PUSHSYMNEAR, 34,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 02509 */ HB_P_LINEOFFSET, 63,	/* 76 */
	HB_P_PUSHSYMNEAR, 48,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 'A', 'b', 'e', 'r', 't', 'o', ' ', 0, 
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'*', '*', ' ', 'L', 'i', 's', 't', 'a', 'g', 'e', 'm', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', 'e', 'm', ' ', 'A', 'b', 'e', 'r', 't', 'o', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 02593 */ HB_P_LINEOFFSET, 64,	/* 77 */
	HB_P_PUSHSYMNEAR, 48,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHSYMNEAR, 49,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', 'P', 'a', 'g', 'o', 's', ' ', 0, 
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'*', '*', ' ', 'L', 'i', 's', 't', 'a', 'g', 'e', 'm', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', 'P', 'a', 'g', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 02675 */ HB_P_LINEOFFSET, 65,	/* 78 */
	HB_P_PUSHSYMNEAR, 48,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHSYMNEAR, 49,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', 'G', 'e', 'r', 'a', 'l', ' ', 0, 
	HB_P_PUSHSTRSHORT, 69,	/* 69 */
	'*', '*', ' ', 'L', 'i', 's', 't', 'a', 'g', 'e', 'm', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', 'e', 'm', ' ', 'G', 'e', 'r', 'a', 'l', ' ', '(', 'A', 'b', 'e', 'r', 't', 'o', ' ', 'e', ' ', 'P', 'a', 'g', 'o', 's', ')', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 02777 */ HB_P_LINEOFFSET, 67,	/* 80 */
	HB_P_PUSHSYMNEAR, 50,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 02791 */ HB_P_LINEOFFSET, 68,	/* 81 */
	HB_P_PUSHSYMNEAR, 51,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 52,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02818) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02823) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 7,	/* OPCAO */
/* 02836 */ HB_P_LINEOFFSET, 69,	/* 82 */
	HB_P_PUSHSYMNEAR, 34,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 02844 */ HB_P_LINEOFFSET, 71,	/* 84 */
	HB_P_PUSHSYMNEAR, 47,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02859) */
	HB_P_JUMP, 171, 246,	/* -2389 (abs: 00467) */
/* 02859 */ HB_P_LINEOFFSET, 75,	/* 88 */
	HB_P_PUSHSYMNEAR, 22,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'e', 's', 'p', 'e', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 53,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 02879 */ HB_P_LINEOFFSET, 76,	/* 89 */
	HB_P_PUSHSYMNEAR, 54,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02886 */ HB_P_LINEOFFSET, 78,	/* 91 */
	HB_P_PUSHSYMNEAR, 55,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 59,	/* 59 (abs: 02952) */
/* 02895 */ HB_P_LINEOFFSET, 79,	/* 92 */
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* M_ESPE */
	HB_P_PUSHSYMNEAR, 56,	/* ESPE */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* COD_ESPE */
	HB_P_DOSHORT, 2,
/* 02908 */ HB_P_LINEOFFSET, 80,	/* 93 */
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_PUSHSYMNEAR, 56,	/* ESPE */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* DESCRI */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_DOSHORT, 2,
/* 02925 */ HB_P_LINEOFFSET, 81,	/* 94 */
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* M_ESPETOT */
	HB_P_PUSHSYMNEAR, 56,	/* ESPE */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* DESCRI */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_DOSHORT, 2,
/* 02942 */ HB_P_LINEOFFSET, 82,	/* 95 */
	HB_P_PUSHSYMNEAR, 59,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 192,	/* -64 (abs: 02886) */
/* 02952 */ HB_P_LINEOFFSET, 85,	/* 98 */
	HB_P_PUSHSYMNEAR, 22,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 's', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 53,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 1,
/* 02974 */ HB_P_LINEOFFSET, 86,	/* 99 */
	HB_P_PUSHSYMNEAR, 54,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02981 */ HB_P_LINEOFFSET, 88,	/* 101 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 03038) */
/* 02989 */ HB_P_LINEOFFSET, 89,	/* 102 */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'M', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '(', 'A', 'B', 'E', 'R', 'T', 'O', ')', ' ', 'p', '/', 'E', 'S', 'P', 'E', 'C', 'I', 'E', 0, 
	HB_P_POPVARIABLE, 4, 0,	/* MTIT */
	HB_P_JUMP, 81, 1,	/* 337 (abs: 03372) */
/* 03038 */ HB_P_LINEOFFSET, 90,	/* 103 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 17, 1,	/* 273 (abs: 03318) */
/* 03048 */ HB_P_LINEOFFSET, 91,	/* 104 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'M', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '(', 'P', 'A', 'G', 'O', 'S', ')', 0, 
	HB_P_POPVARIABLE, 4, 0,	/* MTIT */
/* 03083 */ HB_P_LINEOFFSET, 92,	/* 105 */
	HB_P_PUSHSYMNEAR, 60,	/* MENSAGEM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'O', 'p', 'c', 'o', 'e', 's', ' ', 'p', 'e', 'l', 'a', ' ', '[', 'E', ']', 'm', 'i', 's', 's', 'a', 'o', ' ', 'o', 'u', ' ', '[', 'P', ']', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'E', ',', 'P', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 18,	/* MTP */
/* 03142 */ HB_P_LINEOFFSET, 93,	/* 106 */
	HB_P_PUSHSYMNEAR, 47,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03157) */
	HB_P_JUMP, 129, 245,	/* -2687 (abs: 00467) */
/* 03157 */ HB_P_LINEOFFSET, 96,	/* 109 */
	HB_P_PUSHLOCALNEAR, 18,	/* MTP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 60,	/* 60 (abs: 03226) */
/* 03168 */ HB_P_LINEOFFSET, 97,	/* 110 */
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'M', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '(', 'P', 'A', 'G', 'O', 'S', ')', ' ', 'p', '/', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'p', '/', 'E', 'S', 'P', 'E', 'C', 'I', 'E', 0, 
	HB_P_POPVARIABLE, 4, 0,	/* MTIT */
	HB_P_JUMP, 149, 0,	/* 149 (abs: 03372) */
/* 03226 */ HB_P_LINEOFFSET, 99,	/* 112 */
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'M', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '(', 'P', 'A', 'G', 'O', 'S', ')', ' ', 'p', '/', 'D', 'a', 't', 'a', ' ', 'P', 'a', 'g', 'e', 'm', 'n', 't', 'o', ' ', 'p', '/', 'E', 'S', 'P', 'E', 'C', 'I', 'E', 0, 
	HB_P_POPVARIABLE, 4, 0,	/* MTIT */
/* 03287 */ HB_P_LINEOFFSET, 101,	/* 114 */
	HB_P_PUSHSYMNEAR, 22,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 's', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 53,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_DOSHORT, 1,
/* 03309 */ HB_P_LINEOFFSET, 102,	/* 115 */
	HB_P_PUSHSYMNEAR, 54,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 56,	/* 56 (abs: 03372) */
/* 03318 */ HB_P_LINEOFFSET, 105,	/* 118 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 03372) */
/* 03327 */ HB_P_LINEOFFSET, 106,	/* 119 */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'M', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '(', 'G', 'E', 'R', 'A', 'L', ')', ' ', 'p', '/', 'E', 'S', 'P', 'E', 'C', 'I', 'E', 0, 
	HB_P_POPVARIABLE, 4, 0,	/* MTIT */
/* 03372 */ HB_P_LINEOFFSET, 110,	/* 123 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 62,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* DTOS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
	HB_P_POPALIAS,
/* 03393 */ HB_P_LINEOFFSET, 111,	/* 124 */
	HB_P_PUSHSYMNEAR, 55,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 03453) */
/* 03402 */ HB_P_LINEOFFSET, 112,	/* 125 */
	HB_P_PUSHSYMNEAR, 64,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'm', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 89, 244,	/* -2983 (abs: 00467) */
/* 03453 */ HB_P_LINEOFFSET, 115,	/* 128 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'R', 'E', 'S', '_', 'P', 'E', 'D', '.', 'R', 'E', 'L', 0, 
	HB_P_POPVARIABLE, 14, 0,	/* MARQ */
/* 03472 */ HB_P_LINEOFFSET, 116,	/* 129 */
	HB_P_PUSHSYMNEAR, 65,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'P', 'E', 'D', '_', 'E', 'S', 'P', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 03503) */
	HB_P_JUMP, 39, 244,	/* -3033 (abs: 00467) */
/* 03503 */ HB_P_LINEOFFSET, 119,	/* 132 */
	HB_P_PUSHLOCALNEAR, 17,	/* MCANCEL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03524) */
/* 03514 */ HB_P_LINEOFFSET, 120,	/* 133 */
	HB_P_PUSHSYMNEAR, 66,	/* SAC5PE21 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 18, 244,	/* -3054 (abs: 00467) */
/* 03524 */ HB_P_LINEOFFSET, 123,	/* 136 */
	HB_P_PUSHLOCALNEAR, 18,	/* MTP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 03555) */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 18,	/* MTP */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03554) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_LESS,
	HB_P_OR,
	HB_P_JUMPFALSE, 142, 11,	/* 2958 (abs: 06513) */
/* 03558 */ HB_P_LINEOFFSET, 124,	/* 137 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 6, 0,	/* MPAG */
/* 03564 */ HB_P_LINEOFFSET, 125,	/* 138 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* MTOT_GERAL 0*/
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_GERAL */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 8,	/* MTOT_PED */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 9,	/* MTOT_DIA */
	HB_P_POPLOCALNEAR, 16,	/* MTOT_VOL */
/* 03580 */ HB_P_LINEOFFSET, 126,	/* 139 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 67,	/* PDAT_PED */
	HB_P_POPVARIABLE, 15, 0,	/* MDATA_DIA */
/* 03589 */ HB_P_LINEOFFSET, 127,	/* 140 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MUF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 61,	/* 61 (abs: 03659) */
/* 03600 */ HB_P_LINEOFFSET, 128,	/* 141 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', 'e', ' ', 0, 
	HB_P_PUSHSYMNEAR, 68,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 't', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'd', 'o', ' ', 'E', 's', 't', 'a', 'd', 'o', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 24,	/* MUF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* MTIPO */
	HB_P_JUMPNEAR, 40,	/* 40 (abs: 03697) */
/* 03659 */ HB_P_LINEOFFSET, 130,	/* 143 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', 'e', ' ', 0, 
	HB_P_PUSHSYMNEAR, 68,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 't', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* MTIPO */
/* 03697 */ HB_P_LINEOFFSET, 132,	/* 145 */
	HB_P_PUSHSYMNEAR, 69,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 03715 */ HB_P_LINEOFFSET, 133,	/* 146 */
	HB_P_PUSHSYMNEAR, 70,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03729 */ HB_P_LINEOFFSET, 134,	/* 147 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 03758 */ HB_P_LINEOFFSET, 135,	/* 148 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'E', 's', 'p', 'e', 'c', 'i', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 03787 */ HB_P_LINEOFFSET, 136,	/* 149 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 03823 */ HB_P_LINEOFFSET, 137,	/* 150 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 03847 */ HB_P_LINEOFFSET, 138,	/* 151 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 67,	/* PDAT_PED */
	HB_P_PUSHVARIABLE, 11, 0,	/* MDATA2 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 03867) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 55,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 254, 4,	/* 1278 (abs: 05145) */
/* 03870 */ HB_P_LINEOFFSET, 139,	/* 152 */
	HB_P_PUSHSYMNEAR, 40,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 73,	/* PCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 4,
/* 03889 */ HB_P_LINEOFFSET, 145,	/* 158 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 33,	/* MTIPO_PED */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03911) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 74,	/* PENTREG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 23,	/* 23 (abs: 03935) */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 33,	/* MTIPO_PED */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03934) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 74,	/* PENTREG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 03957) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MPRODUCAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 03956) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 26,	/* MPRODUCAO */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* PPRODUCAO */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 28,	/* 28 (abs: 03986) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 17,	/* 17 (abs: 03985) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 76,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* PCOD_VEND */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 32,	/* 32 (abs: 04019) */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 22,	/* MCLI_VEN */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 04018) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 106,	/* 106 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 76,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 04041) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 04040) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 73,	/* PCOD_CLI */
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_CLI */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 04054) */
/* 04043 */ HB_P_LINEOFFSET, 146,	/* 159 */
	HB_P_PUSHSYMNEAR, 59,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 52, 255,	/* -204 (abs: 03847) */
/* 04054 */ HB_P_LINEOFFSET, 149,	/* 162 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MUF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 50,	/* 50 (abs: 04113) */
/* 04065 */ HB_P_LINEOFFSET, 151,	/* 164 */
	HB_P_PUSHSYMNEAR, 40,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 73,	/* PCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 4,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 14,	/* 14 (abs: 04100) */
	HB_P_PUSHLOCALNEAR, 24,	/* MUF */
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 04113) */
/* 04102 */ HB_P_LINEOFFSET, 152,	/* 165 */
	HB_P_PUSHSYMNEAR, 59,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 249, 254,	/* -263 (abs: 03847) */
/* 04113 */ HB_P_LINEOFFSET, 156,	/* 169 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 04158) */
/* 04121 */ HB_P_LINEOFFSET, 157,	/* 170 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 78,	/* PPAG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 04145) */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 78,	/* PPAG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 92,	/* 92 (abs: 04237) */
/* 04147 */ HB_P_LINEOFFSET, 158,	/* 171 */
	HB_P_PUSHSYMNEAR, 59,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 204, 254,	/* -308 (abs: 03847) */
/* 04158 */ HB_P_LINEOFFSET, 161,	/* 174 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 04204) */
/* 04167 */ HB_P_LINEOFFSET, 162,	/* 175 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 78,	/* PPAG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 04191) */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 78,	/* PPAG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 04237) */
/* 04193 */ HB_P_LINEOFFSET, 163,	/* 176 */
	HB_P_PUSHSYMNEAR, 59,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 158, 254,	/* -354 (abs: 03847) */
/* 04204 */ HB_P_LINEOFFSET, 166,	/* 179 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04237) */
/* 04213 */ HB_P_LINEOFFSET, 167,	/* 180 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 78,	/* PPAG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 04237) */
/* 04226 */ HB_P_LINEOFFSET, 168,	/* 181 */
	HB_P_PUSHSYMNEAR, 59,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 125, 254,	/* -387 (abs: 03847) */
/* 04237 */ HB_P_LINEOFFSET, 172,	/* 185 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 15, 0,	/* MDATA_DIA */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 67,	/* PDAT_PED */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 04258) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 32,	/* MTOTALIZA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 82, 1,	/* 338 (abs: 04596) */
/* 04261 */ HB_P_LINEOFFSET, 173,	/* 186 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_DIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 55, 1,	/* 311 (abs: 04581) */
/* 04273 */ HB_P_LINEOFFSET, 174,	/* 187 */
	HB_P_LOCALNEARSETINT, 31, 0, 0,	/* I 0*/
/* 04279 */ HB_P_LINEOFFSET, 175,	/* 188 */
	HB_P_LOCALNEARSETINT, 31, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_PUSHSYMNEAR, 79,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* M_ESPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 170, 0,	/* 170 (abs: 04465) */
/* 04298 */ HB_P_LINEOFFSET, 176,	/* 189 */
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 135, 0,	/* 135 (abs: 04445) */
/* 04313 */ HB_P_LINEOFFSET, 177,	/* 190 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MDATA_DIA */
	HB_P_DOSHORT, 1,
/* 04337 */ HB_P_LINEOFFSET, 178,	/* 191 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 80,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* M_ESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04367 */ HB_P_LINEOFFSET, 179,	/* 192 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 80,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04399 */ HB_P_LINEOFFSET, 180,	/* 193 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 80,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 81,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04445 */ HB_P_LINEOFFSET, 182,	/* 195 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 04456 */ HB_P_LINEOFFSET, 183,	/* 196 */
	HB_P_LOCALNEARADDINT, 31, 1, 0,	/* I 1*/
	HB_P_JUMP, 79, 255,	/* -177 (abs: 04285) */
/* 04465 */ HB_P_LINEOFFSET, 184,	/* 197 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 04504 */ HB_P_LINEOFFSET, 185,	/* 198 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'd', 'i', 'a', ' ', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04543 */ HB_P_LINEOFFSET, 186,	/* 199 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 81,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_DIA */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04581 */ HB_P_LINEOFFSET, 188,	/* 201 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 67,	/* PDAT_PED */
	HB_P_POPVARIABLE, 15, 0,	/* MDATA_DIA */
/* 04590 */ HB_P_LINEOFFSET, 189,	/* 202 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* MTOT_DIA 0*/
/* 04596 */ HB_P_LINEOFFSET, 191,	/* 204 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 67,	/* PDAT_PED */
	HB_P_POPLOCALNEAR, 13,	/* MDAT_PED */
/* 04604 */ HB_P_LINEOFFSET, 192,	/* 205 */
	HB_P_PUSHSYMNEAR, 72,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 73,	/* PCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 11,	/* MCOD_CLI */
/* 04617 */ HB_P_LINEOFFSET, 193,	/* 206 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* PNUM_PED */
	HB_P_POPLOCALNEAR, 12,	/* MNUM_PED */
/* 04625 */ HB_P_LINEOFFSET, 194,	/* 207 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* PCOD_VEND */
	HB_P_POPLOCALNEAR, 20,	/* MCODVEND */
/* 04633 */ HB_P_LINEOFFSET, 195,	/* 208 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 83,	/* PVENDEDOR */
	HB_P_POPLOCALNEAR, 21,	/* MVENDEDOR */
/* 04641 */ HB_P_LINEOFFSET, 196,	/* 209 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 84,	/* PCOD_OPER */
	HB_P_POPLOCALNEAR, 23,	/* MCOD_OPER */
/* 04649 */ HB_P_LINEOFFSET, 197,	/* 210 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* MTOT_PED 0*/
/* 04655 */ HB_P_LINEOFFSET, 198,	/* 211 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 78,	/* PPAG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 04681) */
/* 04668 */ HB_P_LINEOFFSET, 199,	/* 212 */
	HB_P_LOCALNEARSETSTR, 14, 5, 0,	/* MSIT 5*/
	'p', 'a', 'g', 'o', 0, 
	HB_P_JUMPNEAR, 44,	/* 44 (abs: 04723) */
/* 04681 */ HB_P_LINEOFFSET, 200,	/* 213 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 78,	/* PPAG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 04710) */
/* 04694 */ HB_P_LINEOFFSET, 201,	/* 214 */
	HB_P_LOCALNEARSETSTR, 14, 8, 0,	/* MSIT 8*/
	'c', 'a', 'n', 'c', 'e', 'l', '.', 0, 
	HB_P_JUMPNEAR, 15,	/* 15 (abs: 04723) */
/* 04710 */ HB_P_LINEOFFSET, 203,	/* 216 */
	HB_P_LOCALNEARSETSTR, 14, 7, 0,	/* MSIT 7*/
	'a', 'b', 'e', 'r', 't', 'o', 0, 
/* 04723 */ HB_P_LINEOFFSET, 205,	/* 218 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 74,	/* PENTREG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 23,	/* 23 (abs: 04757) */
/* 04736 */ HB_P_LINEOFFSET, 206,	/* 219 */
	HB_P_PUSHLOCALNEAR, 14,	/* MSIT */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'/', 'e', 'n', 't', 'r', 'e', 'g', 'u', 'e', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MSIT */
	HB_P_JUMPNEAR, 21,	/* 21 (abs: 04776) */
/* 04757 */ HB_P_LINEOFFSET, 208,	/* 221 */
	HB_P_PUSHLOCALNEAR, 14,	/* MSIT */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'/', 'n', 'a', 'o', ' ', 'e', 'n', 't', 'r', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MSIT */
/* 04776 */ HB_P_LINEOFFSET, 210,	/* 223 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 12,	/* MNUM_PED */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* PNUM_PED */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 04795) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 55,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 170, 0,	/* 170 (abs: 04965) */
/* 04798 */ HB_P_LINEOFFSET, 211,	/* 224 */
	HB_P_PUSHLOCALNEAR, 14,	/* MSIT */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'a', 'n', 'c', 'e', 'l', '.', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 141, 0,	/* 141 (abs: 04954) */
/* 04816 */ HB_P_LINEOFFSET, 212,	/* 225 */
	HB_P_LOCALNEARSETINT, 30, 0, 0,	/* MPONTO 0*/
/* 04822 */ HB_P_LINEOFFSET, 213,	/* 226 */
	HB_P_PUSHSYMNEAR, 85,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* M_ESPE */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 86,	/* PESPECIE */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 30,	/* MPONTO */
/* 04837 */ HB_P_LINEOFFSET, 214,	/* 227 */
	HB_P_PUSHLOCALNEAR, 30,	/* MPONTO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 111,	/* 111 (abs: 04954) */
/* 04845 */ HB_P_LINEOFFSET, 215,	/* 228 */
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_PUSHLOCALNEAR, 30,	/* MPONTO */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 87,	/* PQUANTD */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_PUSHLOCALNEAR, 30,	/* MPONTO */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 04868 */ HB_P_LINEOFFSET, 216,	/* 229 */
	HB_P_PUSHLOCALNEAR, 29,	/* M_ESPETOT */
	HB_P_PUSHLOCALNEAR, 30,	/* MPONTO */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 87,	/* PQUANTD */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 29,	/* M_ESPETOT */
	HB_P_PUSHLOCALNEAR, 30,	/* MPONTO */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 04891 */ HB_P_LINEOFFSET, 217,	/* 230 */
	HB_P_PUSHLOCALNEAR, 8,	/* MTOT_PED */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 87,	/* PQUANTD */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 88,	/* PVLR_FAT */
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MTOT_PED */
/* 04907 */ HB_P_LINEOFFSET, 218,	/* 231 */
	HB_P_PUSHLOCALNEAR, 16,	/* MTOT_VOL */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 87,	/* PQUANTD */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 16,	/* MTOT_VOL */
/* 04918 */ HB_P_LINEOFFSET, 219,	/* 232 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTOT_PESO */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 89,	/* PPESO */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 87,	/* PQUANTD */
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 25,	/* MTOT_PESO */
/* 04934 */ HB_P_LINEOFFSET, 220,	/* 233 */
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_DIA */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 87,	/* PQUANTD */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* MTOT_DIA */
/* 04945 */ HB_P_LINEOFFSET, 221,	/* 234 */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_GERAL */
	HB_P_PUSHLOCALNEAR, 8,	/* MTOT_PED */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 10,	/* MTOT_GERAL */
/* 04954 */ HB_P_LINEOFFSET, 224,	/* 237 */
	HB_P_PUSHSYMNEAR, 59,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 70, 255,	/* -186 (abs: 04776) */
/* 04965 */ HB_P_LINEOFFSET, 226,	/* 239 */
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 152, 251,	/* -1128 (abs: 03847) */
/* 04978 */ HB_P_LINEOFFSET, 227,	/* 240 */
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 6, 0,	/* MPAG */
/* 04987 */ HB_P_LINEOFFSET, 228,	/* 241 */
	HB_P_PUSHSYMNEAR, 90,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04994 */ HB_P_LINEOFFSET, 229,	/* 242 */
	HB_P_PUSHSYMNEAR, 69,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 05010 */ HB_P_LINEOFFSET, 230,	/* 243 */
	HB_P_PUSHSYMNEAR, 70,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 05024 */ HB_P_LINEOFFSET, 231,	/* 244 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 05053 */ HB_P_LINEOFFSET, 232,	/* 245 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'E', 's', 'p', 'e', 'c', 'i', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 05082 */ HB_P_LINEOFFSET, 233,	/* 246 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 05118 */ HB_P_LINEOFFSET, 234,	/* 247 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 241, 250,	/* -1295 (abs: 03847) */
/* 05145 */ HB_P_LINEOFFSET, 238,	/* 251 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_DIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 100, 1,	/* 356 (abs: 05510) */
/* 05157 */ HB_P_LINEOFFSET, 239,	/* 252 */
	HB_P_LOCALNEARSETINT, 31, 0, 0,	/* I 0*/
/* 05163 */ HB_P_LINEOFFSET, 240,	/* 253 */
	HB_P_LOCALNEARSETINT, 31, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_PUSHSYMNEAR, 79,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* M_ESPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 215, 0,	/* 215 (abs: 05394) */
/* 05182 */ HB_P_LINEOFFSET, 241,	/* 254 */
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 180, 0,	/* 180 (abs: 05374) */
/* 05197 */ HB_P_LINEOFFSET, 242,	/* 255 */
	HB_P_PUSHLOCALNEAR, 32,	/* MTOTALIZA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 05234) */
/* 05208 */ HB_P_LINEOFFSET, 243,	/* 256 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MDATA_DIA */
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 34,	/* 34 (abs: 05266) */
/* 05234 */ HB_P_LINEOFFSET, 245,	/* 258 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 05266 */ HB_P_LINEOFFSET, 247,	/* 260 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 80,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* M_ESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05296 */ HB_P_LINEOFFSET, 248,	/* 261 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 80,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05328 */ HB_P_LINEOFFSET, 249,	/* 262 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 80,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 81,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05374 */ HB_P_LINEOFFSET, 251,	/* 264 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 05385 */ HB_P_LINEOFFSET, 252,	/* 265 */
	HB_P_LOCALNEARADDINT, 31, 1, 0,	/* I 1*/
	HB_P_JUMP, 34, 255,	/* -222 (abs: 05169) */
/* 05394 */ HB_P_LINEOFFSET, 253,	/* 266 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 05433 */ HB_P_LINEOFFSET, 254,	/* 267 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'd', 'i', 'a', ' ', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05472 */ HB_P_LINEOFFSET, 255,	/* 268 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 81,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_DIA */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05510 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 175, 0,	/* 175 (abs: 05696) */
/* 05524 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 6, 0,	/* MPAG */
/* 05534 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHSYMNEAR, 90,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05542 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSYMNEAR, 69,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 05559 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHSYMNEAR, 70,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 05574 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 05604 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'E', 's', 'p', 'e', 'c', 'i', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 05634 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 05671 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 05696 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'V', 'O', 'L', 'U', 'M', 'E', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05739 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 91,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MTOT_VOL */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 05788 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 91,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MTOT_VOL */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 05837 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'o', 't', 'a', 'l', ' ', 'P', 'E', 'S', 'O', ' ', 'B', 'R', 'U', 'T', 'O', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05880 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 91,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTOT_PESO */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 05925 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 91,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTOT_PESO */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 05970 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 79,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* M_ESPETOT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 175, 0,	/* 175 (abs: 06164) */
/* 05992 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 6, 0,	/* MPAG */
/* 06002 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 90,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06010 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 69,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 06027 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHSYMNEAR, 70,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 06042 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 06072 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'E', 's', 'p', 'e', 'c', 'i', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 06102 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 06139 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 06164 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'R', ' ', 'E', ' ', 'S', ' ', 'U', ' ', 'M', ' ', 'O', ' ', ' ', 'G', ' ', 'E', ' ', 'R', ' ', 'A', ' ', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 06212 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_LOCALNEARSETINT, 31, 0, 0,	/* I 0*/
/* 06219 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_LOCALNEARSETINT, 31, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_PUSHSYMNEAR, 79,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* M_ESPETOT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 224, 0,	/* 224 (abs: 06460) */
/* 06239 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHLOCALNEAR, 29,	/* M_ESPETOT */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 186, 0,	/* 186 (abs: 06438) */
/* 06255 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHLOCALNEAR, 32,	/* MTOTALIZA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 06294) */
/* 06267 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MDATA_DIA */
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 06327) */
/* 06294 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 06327 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 80,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* M_ESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 06358 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 80,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* M_ESPETOT */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 06391 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 80,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 81,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* M_ESPETOT */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 06438 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 29,	/* M_ESPETOT */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 06450 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_LOCALNEARADDINT, 31, 1, 0,	/* I 1*/
	HB_P_JUMP, 25, 255,	/* -231 (abs: 06226) */
/* 06460 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 93,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 06487 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHSYMNEAR, 70,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 06502 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHSYMNEAR, 90,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 250, 11,	/* 3066 (abs: 09576) */
/* 06513 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 6, 0,	/* MPAG */
/* 06520 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* MTOT_VOL 0*/
/* 06527 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* MTOT_DIA 0*/
/* 06534 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* MTOT_PED 0*/
/* 06541 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* MTOT_GERAL 0*/
/* 06548 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 67,	/* PDAT_PED */
	HB_P_POPVARIABLE, 15, 0,	/* MDATA_DIA */
/* 06558 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MUF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 62,	/* 62 (abs: 06630) */
/* 06570 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', 'e', ' ', 0, 
	HB_P_PUSHSYMNEAR, 68,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 't', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'd', 'o', ' ', 'E', 's', 't', 'a', 'd', 'o', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 24,	/* MUF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* MTIPO */
	HB_P_JUMPNEAR, 41,	/* 41 (abs: 06669) */
/* 06630 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', 'e', ' ', 0, 
	HB_P_PUSHSYMNEAR, 68,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 't', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* MTIPO */
/* 06669 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHSYMNEAR, 69,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 06686 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHSYMNEAR, 70,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 06701 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 06731 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'E', 's', 'p', 'e', 'c', 'i', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 06761 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 06798 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 06823 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 94,	/* PDATAPAG */
	HB_P_PUSHVARIABLE, 11, 0,	/* MDATA2 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 06844) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 55,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 79, 5,	/* 1359 (abs: 08203) */
/* 06847 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 40,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 73,	/* PCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 4,
/* 06867 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MPRODUCAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 06888) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 26,	/* MPRODUCAO */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* PPRODUCAO */
	HB_P_NOTEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 23,	/* 23 (abs: 06912) */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 33,	/* MTIPO_PED */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 06911) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 74,	/* PENTREG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 23,	/* 23 (abs: 06936) */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 33,	/* MTIPO_PED */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 06935) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 74,	/* PENTREG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 28,	/* 28 (abs: 06965) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 17,	/* 17 (abs: 06964) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 76,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* PCOD_VEND */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 32,	/* 32 (abs: 06998) */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 22,	/* MCLI_VEN */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 06997) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 106,	/* 106 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 76,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 07012) */
/* 07000 */ HB_P_LINE, 83, 1,	/* 339 */
	HB_P_PUSHSYMNEAR, 59,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 70, 255,	/* -186 (abs: 06823) */
/* 07012 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MUF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 52,	/* 52 (abs: 07074) */
/* 07024 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_PUSHSYMNEAR, 40,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 73,	/* PCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 4,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 14,	/* 14 (abs: 07060) */
	HB_P_PUSHLOCALNEAR, 24,	/* MUF */
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 07074) */
/* 07062 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_PUSHSYMNEAR, 59,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 8, 255,	/* -248 (abs: 06823) */
/* 07074 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 07095) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 73,	/* PCOD_CLI */
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_CLI */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 07109) */
/* 07097 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_PUSHSYMNEAR, 59,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 229, 254,	/* -283 (abs: 06823) */
/* 07109 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 07157) */
/* 07118 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 78,	/* PPAG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 07143) */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 78,	/* PPAG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 99,	/* 99 (abs: 07242) */
/* 07145 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHSYMNEAR, 59,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 181, 254,	/* -331 (abs: 06823) */
/* 07157 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 07206) */
/* 07167 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 78,	/* PPAG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 07192) */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 78,	/* PPAG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 07242) */
/* 07194 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHSYMNEAR, 59,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 132, 254,	/* -380 (abs: 06823) */
/* 07206 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 07242) */
/* 07216 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 78,	/* PPAG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 07242) */
/* 07230 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHSYMNEAR, 59,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 96, 254,	/* -416 (abs: 06823) */
/* 07242 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 15, 0,	/* MDATA_DIA */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 67,	/* PDAT_PED */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 07264) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 32,	/* MTOTALIZA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 97, 1,	/* 353 (abs: 07617) */
/* 07267 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_DIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 67, 1,	/* 323 (abs: 07600) */
/* 07280 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_LOCALNEARSETINT, 31, 0, 0,	/* I 0*/
/* 07287 */ HB_P_LINE, 116, 1,	/* 372 */
	HB_P_LOCALNEARSETINT, 31, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_PUSHSYMNEAR, 79,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* M_ESPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 177, 0,	/* 177 (abs: 07481) */
/* 07307 */ HB_P_LINE, 117, 1,	/* 373 */
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 139, 0,	/* 139 (abs: 07459) */
/* 07323 */ HB_P_LINE, 118, 1,	/* 374 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MDATA_DIA */
	HB_P_DOSHORT, 1,
/* 07348 */ HB_P_LINE, 119, 1,	/* 375 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 80,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* M_ESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 07379 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 80,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 07412 */ HB_P_LINE, 121, 1,	/* 377 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 80,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 81,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 07459 */ HB_P_LINE, 123, 1,	/* 379 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 07471 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_LOCALNEARADDINT, 31, 1, 0,	/* I 1*/
	HB_P_JUMP, 72, 255,	/* -184 (abs: 07294) */
/* 07481 */ HB_P_LINE, 125, 1,	/* 381 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 07521 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'd', 'i', 'a', ' ', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07561 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 81,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_DIA */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 07600 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 67,	/* PDAT_PED */
	HB_P_POPVARIABLE, 15, 0,	/* MDATA_DIA */
/* 07610 */ HB_P_LINE, 130, 1,	/* 386 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* MTOT_DIA 0*/
/* 07617 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 67,	/* PDAT_PED */
	HB_P_POPLOCALNEAR, 13,	/* MDAT_PED */
/* 07626 */ HB_P_LINE, 133, 1,	/* 389 */
	HB_P_PUSHSYMNEAR, 72,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 73,	/* PCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 11,	/* MCOD_CLI */
/* 07640 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* PNUM_PED */
	HB_P_POPLOCALNEAR, 12,	/* MNUM_PED */
/* 07649 */ HB_P_LINE, 135, 1,	/* 391 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* PCOD_VEND */
	HB_P_POPLOCALNEAR, 20,	/* MCODVEND */
/* 07658 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 83,	/* PVENDEDOR */
	HB_P_POPLOCALNEAR, 21,	/* MVENDEDOR */
/* 07667 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 84,	/* PCOD_OPER */
	HB_P_POPLOCALNEAR, 23,	/* MCOD_OPER */
/* 07676 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* MTOT_PED 0*/
/* 07683 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 78,	/* PPAG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 07711) */
/* 07697 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_LOCALNEARSETSTR, 14, 5, 0,	/* MSIT 5*/
	'p', 'a', 'g', 'o', 0, 
	HB_P_JUMPNEAR, 47,	/* 47 (abs: 07756) */
/* 07711 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 78,	/* PPAG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 07742) */
/* 07725 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_LOCALNEARSETSTR, 14, 8, 0,	/* MSIT 8*/
	'c', 'a', 'n', 'c', 'e', 'l', '.', 0, 
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 07756) */
/* 07742 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_LOCALNEARSETSTR, 14, 7, 0,	/* MSIT 7*/
	'a', 'b', 'e', 'r', 't', 'o', 0, 
/* 07756 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 74,	/* PENTREG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 07792) */
/* 07770 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_PUSHLOCALNEAR, 14,	/* MSIT */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'/', 'e', 'n', 't', 'r', 'e', 'g', 'u', 'e', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MSIT */
	HB_P_JUMPNEAR, 22,	/* 22 (abs: 07812) */
/* 07792 */ HB_P_LINE, 149, 1,	/* 405 */
	HB_P_PUSHLOCALNEAR, 14,	/* MSIT */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'/', 'n', 'a', 'o', ' ', 'e', 'n', 't', 'r', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MSIT */
/* 07812 */ HB_P_LINE, 151, 1,	/* 407 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 12,	/* MNUM_PED */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* PNUM_PED */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 07832) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 55,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 182, 0,	/* 182 (abs: 08014) */
/* 07835 */ HB_P_LINE, 152, 1,	/* 408 */
	HB_P_PUSHLOCALNEAR, 14,	/* MSIT */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'a', 'n', 'c', 'e', 'l', '.', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 151, 0,	/* 151 (abs: 08002) */
/* 07854 */ HB_P_LINE, 153, 1,	/* 409 */
	HB_P_LOCALNEARSETINT, 30, 0, 0,	/* MPONTO 0*/
/* 07861 */ HB_P_LINE, 154, 1,	/* 410 */
	HB_P_PUSHSYMNEAR, 85,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* M_ESPE */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 86,	/* PESPECIE */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 30,	/* MPONTO */
/* 07877 */ HB_P_LINE, 155, 1,	/* 411 */
	HB_P_PUSHLOCALNEAR, 30,	/* MPONTO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 118,	/* 118 (abs: 08002) */
/* 07886 */ HB_P_LINE, 156, 1,	/* 412 */
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_PUSHLOCALNEAR, 30,	/* MPONTO */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 87,	/* PQUANTD */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_PUSHLOCALNEAR, 30,	/* MPONTO */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 07910 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_PUSHLOCALNEAR, 29,	/* M_ESPETOT */
	HB_P_PUSHLOCALNEAR, 30,	/* MPONTO */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 87,	/* PQUANTD */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 29,	/* M_ESPETOT */
	HB_P_PUSHLOCALNEAR, 30,	/* MPONTO */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 07934 */ HB_P_LINE, 158, 1,	/* 414 */
	HB_P_PUSHLOCALNEAR, 8,	/* MTOT_PED */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 87,	/* PQUANTD */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 88,	/* PVLR_FAT */
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MTOT_PED */
/* 07951 */ HB_P_LINE, 159, 1,	/* 415 */
	HB_P_PUSHLOCALNEAR, 16,	/* MTOT_VOL */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 87,	/* PQUANTD */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 16,	/* MTOT_VOL */
/* 07963 */ HB_P_LINE, 160, 1,	/* 416 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTOT_PESO */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 89,	/* PPESO */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 87,	/* PQUANTD */
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 25,	/* MTOT_PESO */
/* 07980 */ HB_P_LINE, 161, 1,	/* 417 */
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_DIA */
	HB_P_PUSHSYMNEAR, 61,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 87,	/* PQUANTD */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* MTOT_DIA */
/* 07992 */ HB_P_LINE, 162, 1,	/* 418 */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_GERAL */
	HB_P_PUSHLOCALNEAR, 8,	/* MTOT_PED */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 10,	/* MTOT_GERAL */
/* 08002 */ HB_P_LINE, 165, 1,	/* 421 */
	HB_P_PUSHSYMNEAR, 59,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 57, 255,	/* -199 (abs: 07812) */
/* 08014 */ HB_P_LINE, 167, 1,	/* 423 */
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 78, 251,	/* -1202 (abs: 06823) */
/* 08028 */ HB_P_LINE, 168, 1,	/* 424 */
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 6, 0,	/* MPAG */
/* 08038 */ HB_P_LINE, 169, 1,	/* 425 */
	HB_P_PUSHSYMNEAR, 90,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08046 */ HB_P_LINE, 170, 1,	/* 426 */
	HB_P_PUSHSYMNEAR, 69,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 08063 */ HB_P_LINE, 171, 1,	/* 427 */
	HB_P_PUSHSYMNEAR, 70,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 08078 */ HB_P_LINE, 172, 1,	/* 428 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 08108 */ HB_P_LINE, 173, 1,	/* 429 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'E', 's', 'p', 'e', 'c', 'i', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 08138 */ HB_P_LINE, 174, 1,	/* 430 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 08175 */ HB_P_LINE, 175, 1,	/* 431 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 159, 250,	/* -1377 (abs: 06823) */
/* 08203 */ HB_P_LINE, 179, 1,	/* 435 */
	HB_P_PUSHSYMNEAR, 44,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_DIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 114, 1,	/* 370 (abs: 08583) */
/* 08216 */ HB_P_LINE, 180, 1,	/* 436 */
	HB_P_LOCALNEARSETINT, 31, 0, 0,	/* I 0*/
/* 08223 */ HB_P_LINE, 181, 1,	/* 437 */
	HB_P_LOCALNEARSETINT, 31, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_PUSHSYMNEAR, 79,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* M_ESPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 224, 0,	/* 224 (abs: 08464) */
/* 08243 */ HB_P_LINE, 182, 1,	/* 438 */
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 186, 0,	/* 186 (abs: 08442) */
/* 08259 */ HB_P_LINE, 183, 1,	/* 439 */
	HB_P_PUSHLOCALNEAR, 32,	/* MTOTALIZA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 08298) */
/* 08271 */ HB_P_LINE, 184, 1,	/* 440 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MDATA_DIA */
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 08331) */
/* 08298 */ HB_P_LINE, 186, 1,	/* 442 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 08331 */ HB_P_LINE, 188, 1,	/* 444 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 80,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* M_ESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 08362 */ HB_P_LINE, 189, 1,	/* 445 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 80,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 08395 */ HB_P_LINE, 190, 1,	/* 446 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 80,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 81,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 08442 */ HB_P_LINE, 192, 1,	/* 448 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 28,	/* M_AUXESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 08454 */ HB_P_LINE, 193, 1,	/* 449 */
	HB_P_LOCALNEARADDINT, 31, 1, 0,	/* I 1*/
	HB_P_JUMP, 25, 255,	/* -231 (abs: 08230) */
/* 08464 */ HB_P_LINE, 194, 1,	/* 450 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 08504 */ HB_P_LINE, 195, 1,	/* 451 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'd', 'i', 'a', ' ', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08544 */ HB_P_LINE, 196, 1,	/* 452 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 81,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_DIA */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 08583 */ HB_P_LINE, 198, 1,	/* 454 */
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 175, 0,	/* 175 (abs: 08769) */
/* 08597 */ HB_P_LINE, 199, 1,	/* 455 */
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 6, 0,	/* MPAG */
/* 08607 */ HB_P_LINE, 200, 1,	/* 456 */
	HB_P_PUSHSYMNEAR, 90,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08615 */ HB_P_LINE, 201, 1,	/* 457 */
	HB_P_PUSHSYMNEAR, 69,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 08632 */ HB_P_LINE, 202, 1,	/* 458 */
	HB_P_PUSHSYMNEAR, 70,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 08647 */ HB_P_LINE, 203, 1,	/* 459 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 08677 */ HB_P_LINE, 204, 1,	/* 460 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'E', 's', 'p', 'e', 'c', 'i', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 08707 */ HB_P_LINE, 205, 1,	/* 461 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 08744 */ HB_P_LINE, 206, 1,	/* 462 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 08769 */ HB_P_LINE, 208, 1,	/* 464 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'V', 'O', 'L', 'U', 'M', 'E', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08812 */ HB_P_LINE, 209, 1,	/* 465 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 91,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MTOT_VOL */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 08861 */ HB_P_LINE, 210, 1,	/* 466 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 91,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MTOT_VOL */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 08910 */ HB_P_LINE, 211, 1,	/* 467 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'o', 't', 'a', 'l', ' ', 'P', 'E', 'S', 'O', ' ', 'B', 'R', 'U', 'T', 'O', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08953 */ HB_P_LINE, 212, 1,	/* 468 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 91,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTOT_PESO */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 08998 */ HB_P_LINE, 213, 1,	/* 469 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 91,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTOT_PESO */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 09043 */ HB_P_LINE, 214, 1,	/* 470 */
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 79,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* M_ESPETOT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 175, 0,	/* 175 (abs: 09237) */
/* 09065 */ HB_P_LINE, 215, 1,	/* 471 */
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 6, 0,	/* MPAG */
/* 09075 */ HB_P_LINE, 216, 1,	/* 472 */
	HB_P_PUSHSYMNEAR, 90,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 09083 */ HB_P_LINE, 217, 1,	/* 473 */
	HB_P_PUSHSYMNEAR, 69,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 09100 */ HB_P_LINE, 218, 1,	/* 474 */
	HB_P_PUSHSYMNEAR, 70,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 09115 */ HB_P_LINE, 219, 1,	/* 475 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 09145 */ HB_P_LINE, 220, 1,	/* 476 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'E', 's', 'p', 'e', 'c', 'i', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 09175 */ HB_P_LINE, 221, 1,	/* 477 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 09212 */ HB_P_LINE, 222, 1,	/* 478 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 09237 */ HB_P_LINE, 224, 1,	/* 480 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'R', ' ', 'E', ' ', 'S', ' ', 'U', ' ', 'M', ' ', 'O', ' ', ' ', 'G', ' ', 'E', ' ', 'R', ' ', 'A', ' ', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 09285 */ HB_P_LINE, 225, 1,	/* 481 */
	HB_P_LOCALNEARSETINT, 31, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_PUSHSYMNEAR, 79,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* M_ESPETOT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 224, 0,	/* 224 (abs: 09526) */
/* 09305 */ HB_P_LINE, 226, 1,	/* 482 */
	HB_P_PUSHLOCALNEAR, 29,	/* M_ESPETOT */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 186, 0,	/* 186 (abs: 09504) */
/* 09321 */ HB_P_LINE, 227, 1,	/* 483 */
	HB_P_PUSHLOCALNEAR, 32,	/* MTOTALIZA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 09360) */
/* 09333 */ HB_P_LINE, 228, 1,	/* 484 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MDATA_DIA */
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 09393) */
/* 09360 */ HB_P_LINE, 230, 1,	/* 486 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 09393 */ HB_P_LINE, 232, 1,	/* 488 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 80,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* M_ESPE */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 09424 */ HB_P_LINE, 233, 1,	/* 489 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 80,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* M_ESPETOT */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 09457 */ HB_P_LINE, 234, 1,	/* 490 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 80,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 81,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* M_ESPETOT */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 09504 */ HB_P_LINE, 236, 1,	/* 492 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 29,	/* M_ESPETOT */
	HB_P_PUSHLOCALNEAR, 31,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 09516 */ HB_P_LINE, 237, 1,	/* 493 */
	HB_P_LOCALNEARADDINT, 31, 1, 0,	/* I 1*/
	HB_P_JUMP, 25, 255,	/* -231 (abs: 09292) */
/* 09526 */ HB_P_LINE, 238, 1,	/* 494 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 93,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 09553 */ HB_P_LINE, 239, 1,	/* 495 */
	HB_P_PUSHSYMNEAR, 70,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 09568 */ HB_P_LINE, 240, 1,	/* 496 */
	HB_P_PUSHSYMNEAR, 90,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 09576 */ HB_P_LINE, 242, 1,	/* 498 */
	HB_P_PUSHSYMNEAR, 95,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 09586 */ HB_P_LINE, 243, 1,	/* 499 */
	HB_P_PUSHSYMNEAR, 50,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 09628 */ HB_P_LINE, 244, 1,	/* 500 */
	HB_P_PUSHSYMNEAR, 96,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'P', 'E', 'D', '_', 'E', 'S', 'P', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 32, 220,	/* -9184 (abs: 00467) */
/* 09654 */ HB_P_LINE, 246, 1,	/* 502 */
	HB_P_PUSHSYMNEAR, 97,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 09662 */ HB_P_LINE, 247, 1,	/* 503 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 09668 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

