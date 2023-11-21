/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5CLI.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC5CLI.PRG /q /oC:\hti\SISCOM\SAC5CLI.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.11.21 09:47:12 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5CLI.PRG"

HB_FUNC( SAC5CLI1 );
HB_FUNC( SAC5CLI2 );
HB_FUNC( SAC5CLI3 );
HB_FUNC( SAC5CLI4 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( __MVXRELEASE );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( SACCID );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( DISPOUT );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( VER_VEN );
HB_FUNC_EXTERN( VER_SERIE );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( MENSAGEM );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5CLI )
{ "SAC5CLI1", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5CLI1 )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MTOT_COMPRA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MULT_COMPRA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MVLR_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNOME_VEN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNUM_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCIDADE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LBA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CBA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCEP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_OPE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENDE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "__MVXRELEASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVXRELEASE )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SACCID", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACCID )}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "SEN", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "SNOME", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISPOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPOUT )}, NULL },
{ "M", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "SAC5CLI2", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SAC5CLI2 )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "VER_VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_VEN )}, NULL },
{ "CONS_MOV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_SERIE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SERIE )}, NULL },
{ "SAC5CLI3", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SAC5CLI3 )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CODVEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CIDADE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "ULT_ORC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ULT_COMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RAZAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEL1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NASCIMENTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VLR_COMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NUM_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TOT_COMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SAC5CLI4", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SAC5CLI4 )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5CLI )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5CLI
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5CLI = hb_vm_SymbolInit_SAC5CLI;
   #pragma data_seg()
#endif

HB_FUNC( SAC5CLI1 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 16, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', '5', 'C', 'L', 'I', '1', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 15,	/* CONS_MOV */
	HB_P_LOCALNEARSETSTR, 16, 1, 0,	/* MARQUIVO 1*/
	0, 
/* 00029 */ HB_P_LINEOFFSET, 2,	/* 10 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 17,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 2,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 3,	/* MARQ */
	HB_P_PUSHSYMNEAR, 5,	/* MTOT_COMPRA */
	HB_P_PUSHSYMNEAR, 6,	/* MULT_COMPRA */
	HB_P_PUSHSYMNEAR, 7,	/* MVLR_PED */
	HB_P_PUSHSYMNEAR, 8,	/* MNOME_VEN */
	HB_P_PUSHSYMNEAR, 9,	/* MNUM_PED */
	HB_P_PUSHSYMNEAR, 10,	/* MCIDADE */
	HB_P_PUSHSYMNEAR, 11,	/* LBA */
	HB_P_PUSHSYMNEAR, 12,	/* CBA */
	HB_P_PUSHSYMNEAR, 13,	/* MCEP */
	HB_P_PUSHSYMNEAR, 14,	/* MCOD_OPE */
	HB_P_PUSHSYMNEAR, 15,	/* MENDE */
	HB_P_PUSHSYMNEAR, 16,	/* CONS_CLI */
	HB_P_DOSHORT, 15,
	HB_P_POPVARIABLE, 16, 0,	/* CONS_CLI */
	HB_P_POPVARIABLE, 15, 0,	/* MENDE */
	HB_P_POPVARIABLE, 14, 0,	/* MCOD_OPE */
	HB_P_POPVARIABLE, 13, 0,	/* MCEP */
	HB_P_POPVARIABLE, 3, 0,	/* MARQ */
	HB_P_POPVARIABLE, 2, 0,	/* MIMP_TIPO */
/* 00107 */ HB_P_LINEOFFSET, 3,	/* 11 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_POPVARIABLE, 11, 0,	/* LBA */
/* 00114 */ HB_P_LINEOFFSET, 4,	/* 12 */
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_POPVARIABLE, 12, 0,	/* CBA */
/* 00121 */ HB_P_LINEOFFSET, 5,	/* 13 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* OPCAO 0*/
/* 00127 */ HB_P_LINEOFFSET, 6,	/* 14 */
	HB_P_PUSHSYMNEAR, 18,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 8,	/* MTRACO */
/* 00143 */ HB_P_LINEOFFSET, 8,	/* 16 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'p', 'e', 'd', '_', 's', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 's', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00174) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00174 */ HB_P_LINEOFFSET, 9,	/* 17 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00203) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00203 */ HB_P_LINEOFFSET, 10,	/* 18 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'o', 'r', 'c', 'a', 'm', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'r', 'c', 'a', 'm', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00234) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00234 */ HB_P_LINEOFFSET, 11,	/* 19 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00261) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00261 */ HB_P_LINEOFFSET, 13,	/* 21 */
	HB_P_PUSHSYMNEAR, 20,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHVARIABLE, 11, 0,	/* LBA */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHVARIABLE, 12, 0,	/* CBA */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'A', 'T', 'I', 'V', 'O', 'S', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00299 */ HB_P_LINEOFFSET, 15,	/* 23 */
	HB_P_PUSHSYMNEAR, 21,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00308 */ HB_P_LINEOFFSET, 16,	/* 24 */
	HB_P_PUSHMEMVAR, 22, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 1, 0,	/* MTIPO_IMP */
/* 00321 */ HB_P_LINEOFFSET, 17,	/* 25 */
	HB_P_PUSHSYMNEAR, 23,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 6, 0,	/* MULT_COMPRA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 4,	/* MDATA2 */
	HB_P_POPLOCALNEAR, 3,	/* MDATA1 */
/* 00348 */ HB_P_LINEOFFSET, 18,	/* 26 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 7, 0,	/* MVLR_PED */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 5, 0,	/* MTOT_COMPRA */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 14, 0,	/* MCOD_OPE */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* MCOD_VEN */
	HB_P_POPLOCALNEAR, 9,	/* MTOT_CLI */
/* 00368 */ HB_P_LINEOFFSET, 19,	/* 27 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 8, 0,	/* MNOME_VEN */
/* 00380 */ HB_P_LINEOFFSET, 20,	/* 28 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 11,	/* MTIPO_CLI */
/* 00390 */ HB_P_LINEOFFSET, 21,	/* 29 */
	HB_P_LOCALNEARSETSTR, 12, 2, 0,	/* MCLASS 2*/
	'2', 0, 
/* 00398 */ HB_P_LINEOFFSET, 22,	/* 30 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* MAREA */
/* 00409 */ HB_P_LINEOFFSET, 23,	/* 31 */
	HB_P_LOCALNEARSETSTR, 14, 2, 0,	/* MTIPO_CONS 2*/
	'P', 0, 
/* 00417 */ HB_P_LINEOFFSET, 24,	/* 32 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 10, 0,	/* MCIDADE */
/* 00429 */ HB_P_LINEOFFSET, 25,	/* 33 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00493 */ HB_P_LINEOFFSET, 26,	/* 34 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00558 */ HB_P_LINEOFFSET, 27,	/* 35 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00623 */ HB_P_LINEOFFSET, 28,	/* 36 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00688 */ HB_P_LINEOFFSET, 29,	/* 37 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'T', 'i', 'p', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00753 */ HB_P_LINEOFFSET, 30,	/* 38 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'A', 'r', 'e', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00818 */ HB_P_LINEOFFSET, 31,	/* 39 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'C', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00883 */ HB_P_LINEOFFSET, 32,	/* 40 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'C', 'l', 'a', 's', 's', 'i', 'f', 'i', 'c', 'a', 'c', 'a', 'o', ' ', 'p', '/', '[', '1', ']', 'C', 'o', 'd', 'i', 'g', 'o', ' ', '[', '2', ']', 'N', 'o', 'm', 'e', ' ', '[', '3', ']', 'F', 'a', 'n', 't', 'a', 's', 'i', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00948 */ HB_P_LINEOFFSET, 33,	/* 41 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'T', 'i', 'p', 'o', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', '[', 'P', ']', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'O', ']', 'r', 'c', 'a', 'm', 'e', 'n', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01013 */ HB_P_LINEOFFSET, 34,	/* 42 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'E', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01078 */ HB_P_LINEOFFSET, 35,	/* 43 */
	HB_P_PUSHSYMNEAR, 26,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 01097 */ HB_P_LINEOFFSET, 36,	/* 44 */
	HB_P_PUSHSYMNEAR, 27,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01106 */ HB_P_LINEOFFSET, 37,	/* 45 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 'd', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01144 */ HB_P_LINEOFFSET, 38,	/* 46 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'V', 'a', 'l', 'o', 'r', ' ', 't', 'o', 't', 'a', 'l', ' ', 'c', 'o', 'm', 'p', 'r', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01182 */ HB_P_LINEOFFSET, 39,	/* 47 */
	HB_P_PUSHSYMNEAR, 27,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01190 */ HB_P_LINEOFFSET, 40,	/* 48 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01228) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01233) */
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
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01262 */ HB_P_LINEOFFSET, 41,	/* 49 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01301) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01306) */
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
	4, 0,	/* MDATA2 */
	3, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01338) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01339) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01357 */ HB_P_LINEOFFSET, 42,	/* 50 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCOD_VEN */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01396) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01401) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCOD_VEN */
	HB_P_PUSHSYMNEAR, 33,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01457 */ HB_P_LINEOFFSET, 43,	/* 51 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'o', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 33,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* MCOD_OPE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01527 */ HB_P_LINEOFFSET, 44,	/* 52 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MTIPO_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01566) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01571) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MTIPO_CLI */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 34,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01618) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ',', 'F', ',', 'J', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 69,	/* 69 */
	HB_P_PUSHSYMNEAR, 35,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	'[', 'F', ']', 'i', 's', 'i', 'c', 'a', ' ', '[', 'J', ']', 'u', 'r', 'i', 'd', 'i', 'c', 'a', ' ', 'o', 'u', ' ', 'e', 'm', ' ', 'B', 'R', 'A', 'N', 'C', 'O', ' ', 'p', '/', 't', 'o', 'd', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01704 */ HB_P_LINEOFFSET, 45,	/* 53 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MAREA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01743) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01748) */
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
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01780 */ HB_P_LINEOFFSET, 46,	/* 54 */
	HB_P_PUSHSYMNEAR, 36,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 30, 0,	/* GETLIST */
/* 01802 */ HB_P_LINEOFFSET, 47,	/* 55 */
	HB_P_PUSHSYMNEAR, 37,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 01836) */
/* 01814 */ HB_P_LINEOFFSET, 48,	/* 56 */
	HB_P_PUSHSYMNEAR, 38,	/* __MVXRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'n', 'o', 'm', 'e', '_', 'v', 'e', 'n', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 43, 13,	/* 3371 (abs: 05204) */
/* 01836 */ HB_P_LINEOFFSET, 51,	/* 59 */
	HB_P_PUSHSYMNEAR, 39,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 134, 0,	/* 134 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 10, 0,	/* MCIDADE */
/* 01855 */ HB_P_LINEOFFSET, 52,	/* 60 */
	HB_P_PUSHSYMNEAR, 41,	/* SACCID */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCIDADE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPVARIABLE, 10, 0,	/* MCIDADE */
/* 01873 */ HB_P_LINEOFFSET, 53,	/* 61 */
	HB_P_PUSHSYMNEAR, 27,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01882 */ HB_P_LINEOFFSET, 54,	/* 62 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 42,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCIDADE */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 3,
/* 01907 */ HB_P_LINEOFFSET, 55,	/* 63 */
	HB_P_PUSHSYMNEAR, 27,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01915 */ HB_P_LINEOFFSET, 56,	/* 64 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MCLASS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01954) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01959) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'c', 'l', 'a', 's', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MCLASS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'1', ',', '2', ',', '9', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02011 */ HB_P_LINEOFFSET, 57,	/* 65 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MTIPO_CONS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02050) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02055) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 't', 'i', 'p', 'o', '_', 'c', 'o', 'n', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MTIPO_CONS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'P', ',', 'O', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02110 */ HB_P_LINEOFFSET, 58,	/* 66 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'e', 'n', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 15, 0,	/* MENDE */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02174 */ HB_P_LINEOFFSET, 59,	/* 67 */
	HB_P_PUSHSYMNEAR, 36,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 30, 0,	/* GETLIST */
/* 02196 */ HB_P_LINEOFFSET, 60,	/* 68 */
	HB_P_PUSHSYMNEAR, 37,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 02230) */
/* 02208 */ HB_P_LINEOFFSET, 61,	/* 69 */
	HB_P_PUSHSYMNEAR, 38,	/* __MVXRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'n', 'o', 'm', 'e', '_', 'v', 'e', 'n', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 161, 11,	/* 2977 (abs: 05204) */
/* 02230 */ HB_P_LINEOFFSET, 64,	/* 72 */
	HB_P_PUSHSYMNEAR, 43,	/* SEN */
	HB_P_PUSHALIASEDFIELDNEAR, 44,	/* SNOME */
	HB_P_POPVARIABLE, 8, 0,	/* MNOME_VEN */
/* 02239 */ HB_P_LINEOFFSET, 65,	/* 73 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* MPAG 0*/
/* 02245 */ HB_P_LINEOFFSET, 66,	/* 74 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 16, 0,	/* CONS_CLI */
/* 02253 */ HB_P_LINEOFFSET, 67,	/* 75 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'N', 'O', 'T', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'E', 39, 0, 
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02302 */ HB_P_LINEOFFSET, 68,	/* 76 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 02355) */
/* 02313 */ HB_P_LINEOFFSET, 69,	/* 77 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', 'v', 'e', 'n', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02355 */ HB_P_LINEOFFSET, 71,	/* 79 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 02398) */
/* 02366 */ HB_P_LINEOFFSET, 72,	/* 80 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 'a', 'r', 'e', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02398 */ HB_P_LINEOFFSET, 74,	/* 82 */
	HB_P_PUSHLOCALNEAR, 11,	/* MTIPO_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 02441) */
/* 02409 */ HB_P_LINEOFFSET, 75,	/* 83 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 'c', 'g', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02441 */ HB_P_LINEOFFSET, 77,	/* 85 */
	HB_P_PUSHLOCALNEAR, 11,	/* MTIPO_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'F', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 02495) */
/* 02452 */ HB_P_LINEOFFSET, 78,	/* 86 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', 'A', 'N', 'D', ' ', '(', 'c', 'g', 'c', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'c', 'g', 'c', ' ', '=', ' ', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02495 */ HB_P_LINEOFFSET, 80,	/* 88 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 37,	/* 37 (abs: 02542) */
/* 02507 */ HB_P_LINEOFFSET, 81,	/* 89 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'i', 'd', 'a', 'd', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02542 */ HB_P_LINEOFFSET, 83,	/* 91 */
	HB_P_PUSHLOCALNEAR, 12,	/* MCLASS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 02584) */
/* 02553 */ HB_P_LINEOFFSET, 84,	/* 92 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 68,	/* 68 (abs: 02650) */
/* 02584 */ HB_P_LINEOFFSET, 85,	/* 93 */
	HB_P_PUSHLOCALNEAR, 12,	/* MCLASS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 02624) */
/* 02595 */ HB_P_LINEOFFSET, 86,	/* 94 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'r', 'a', 'z', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 28,	/* 28 (abs: 02650) */
/* 02624 */ HB_P_LINEOFFSET, 88,	/* 96 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'n', 'o', 'm', 'e', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02650 */ HB_P_LINEOFFSET, 90,	/* 98 */
	HB_P_MESSAGE, 49, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 50,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 16, 0,	/* CONS_CLI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02671 */ HB_P_LINEOFFSET, 91,	/* 99 */
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
/* 02695 */ HB_P_LINEOFFSET, 92,	/* 100 */
	HB_P_PUSHSYMNEAR, 51,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 02772) */
/* 02709 */ HB_P_LINEOFFSET, 93,	/* 101 */
	HB_P_PUSHSYMNEAR, 52,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'c', 'o', 'm', ' ', 'e', 's', 's', 'a', 's', ' ', 'c', 'a', 'r', 'a', 'c', 't', 'e', 'r', 'i', 's', 't', 'i', 'c', 'a', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 90, 246,	/* -2470 (abs: 00299) */
/* 02772 */ HB_P_LINEOFFSET, 96,	/* 104 */
	HB_P_LOCALNEARSETSTR, 6, 27, 0,	/* MTIT 27*/
	'R', 'e', 'l', 'a', 'c', 'a', 'o', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'A', 'T', 'I', 'V', 'O', 'S', 0, 
/* 02805 */ HB_P_LINEOFFSET, 97,	/* 105 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 02850) */
/* 02816 */ HB_P_LINEOFFSET, 98,	/* 106 */
	HB_P_PUSHLOCALNEAR, 6,	/* MTIT */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 6,	/* MTIT */
/* 02850 */ HB_P_LINEOFFSET, 100,	/* 108 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'N', 'o', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 7,	/* MTIPO */
/* 02894 */ HB_P_LINEOFFSET, 101,	/* 109 */
	HB_P_PUSHSYMNEAR, 54,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'L', 'I', '_', 'A', 'T', 'I', 'V', 'O', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 02926) */
	HB_P_JUMP, 192, 245,	/* -2624 (abs: 00299) */
/* 02926 */ HB_P_LINEOFFSET, 104,	/* 112 */
	HB_P_PUSHLOCALNEAR, 14,	/* MTIPO_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 02954) */
/* 02937 */ HB_P_LINEOFFSET, 105,	/* 113 */
	HB_P_LOCALNEARSETSTR, 16, 9, 0,	/* MARQUIVO 9*/
	's', 'a', 'c', 'o', 'r', 'c', 'a', 'm', 0, 
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 02969) */
/* 02954 */ HB_P_LINEOFFSET, 107,	/* 115 */
	HB_P_LOCALNEARSETSTR, 16, 9, 0,	/* MARQUIVO 9*/
	's', 'a', 'c', 'p', 'e', 'd', '_', 's', 0, 
/* 02969 */ HB_P_LINEOFFSET, 109,	/* 117 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 55, 0,	/* I */
/* 02975 */ HB_P_LINEOFFSET, 110,	/* 118 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 55, 0,	/* I */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_PUSHSYMNEAR, 51,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 245, 7,	/* 2037 (abs: 05030) */
/* 02996 */ HB_P_LINEOFFSET, 111,	/* 119 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DISPOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03038 */ HB_P_LINEOFFSET, 112,	/* 120 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 15,	/* CONS_MOV */
/* 03045 */ HB_P_LINEOFFSET, 113,	/* 121 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 16,	/* MARQUIVO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ' ', ' ', 'B', 'E', 'T', 'W', 'E', 'E', 'N', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 03124 */ HB_P_LINEOFFSET, 114,	/* 122 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', 'A', 'N', 'D', ' ', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, '*', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 03205 */ HB_P_LINEOFFSET, 115,	/* 123 */
	HB_P_MESSAGE, 49, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 50,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 15, 0,	/* CONS_MOV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03226 */ HB_P_LINEOFFSET, 116,	/* 124 */
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
/* 03250 */ HB_P_LINEOFFSET, 117,	/* 125 */
	HB_P_PUSHSYMNEAR, 51,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03266) */
	HB_P_JUMP, 221, 6,	/* 1757 (abs: 05020) */
/* 03266 */ HB_P_LINEOFFSET, 120,	/* 128 */
	HB_P_PUSHLOCALNEAR, 15,	/* CONS_MOV */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 6, 0,	/* MULT_COMPRA */
/* 03279 */ HB_P_LINEOFFSET, 121,	/* 129 */
	HB_P_PUSHLOCALNEAR, 15,	/* CONS_MOV */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 9, 0,	/* MNUM_PED */
/* 03292 */ HB_P_LINEOFFSET, 122,	/* 130 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 5, 0,	/* MTOT_COMPRA */
/* 03298 */ HB_P_LINEOFFSET, 123,	/* 131 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 57, 0,	/* M */
	HB_P_PUSHVARIABLE, 57, 0,	/* M */
	HB_P_PUSHSYMNEAR, 51,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 03356) */
/* 03317 */ HB_P_LINEOFFSET, 124,	/* 132 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTOT_COMPRA */
	HB_P_PUSHLOCALNEAR, 15,	/* CONS_MOV */
	HB_P_PUSHVARIABLE, 57, 0,	/* M */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 15,	/* CONS_MOV */
	HB_P_PUSHVARIABLE, 57, 0,	/* M */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* MTOT_COMPRA */
/* 03345 */ HB_P_LINEOFFSET, 125,	/* 133 */
	HB_P_PUSHVARIABLE, 57, 0,	/* M */
	HB_P_INC,
	HB_P_POPVARIABLE, 57, 0,	/* M */
	HB_P_JUMPNEAR, 206,	/* -50 (abs: 03304) */
/* 03356 */ HB_P_LINEOFFSET, 126,	/* 134 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 15,	/* CONS_MOV */
/* 03363 */ HB_P_LINEOFFSET, 127,	/* 135 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', ' ', '*', ' ', 'p', 'v', 'l', 'r', '_', 'f', 'a', 't', ')', ' ', 'F', 'R', 'O', 'M', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 16,	/* MARQUIVO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MNUM_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 03441 */ HB_P_LINEOFFSET, 128,	/* 136 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, '*', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 03468 */ HB_P_LINEOFFSET, 129,	/* 137 */
	HB_P_MESSAGE, 49, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 50,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 15, 0,	/* CONS_MOV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03489 */ HB_P_LINEOFFSET, 130,	/* 138 */
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
/* 03513 */ HB_P_LINEOFFSET, 131,	/* 139 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 7, 0,	/* MVLR_PED */
/* 03519 */ HB_P_LINEOFFSET, 132,	/* 140 */
	HB_P_PUSHSYMNEAR, 51,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 03543) */
/* 03532 */ HB_P_LINEOFFSET, 133,	/* 141 */
	HB_P_PUSHLOCALNEAR, 15,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 7, 0,	/* MVLR_PED */
/* 03543 */ HB_P_LINEOFFSET, 135,	/* 143 */
	HB_P_PUSHLOCALNEAR, 5,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 03561) */
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 97, 2,	/* 609 (abs: 04170) */
/* 03564 */ HB_P_LINEOFFSET, 136,	/* 144 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* MPAG 1*/
/* 03570 */ HB_P_LINEOFFSET, 137,	/* 145 */
	HB_P_PUSHLOCALNEAR, 5,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 03585) */
/* 03578 */ HB_P_LINEOFFSET, 138,	/* 146 */
	HB_P_PUSHSYMNEAR, 59,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03585 */ HB_P_LINEOFFSET, 140,	/* 148 */
	HB_P_PUSHSYMNEAR, 60,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 6,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 7,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 03600 */ HB_P_LINEOFFSET, 141,	/* 149 */
	HB_P_PUSHSYMNEAR, 61,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03614 */ HB_P_LINEOFFSET, 142,	/* 150 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 03645 */ HB_P_LINEOFFSET, 143,	/* 151 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 03681 */ HB_P_LINEOFFSET, 145,	/* 153 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 03717 */ HB_P_LINEOFFSET, 146,	/* 154 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 03753 */ HB_P_LINEOFFSET, 147,	/* 155 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 03791 */ HB_P_LINEOFFSET, 148,	/* 156 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 03825 */ HB_P_LINEOFFSET, 149,	/* 157 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'A', 'c', 'u', 'm', 'u', 'l', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03863 */ HB_P_LINEOFFSET, 151,	/* 159 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 03894 */ HB_P_LINEOFFSET, 152,	/* 160 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', ' ', ' ', 'F', 'o', 'n', 'e', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 03930 */ HB_P_LINEOFFSET, 154,	/* 162 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'a', 't', '.', 'C', 'a', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03966 */ HB_P_LINEOFFSET, 155,	/* 163 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'U', 'l', 't', '.', 'C', 'o', 'm', 'p', 0, 
	HB_P_DOSHORT, 1,
/* 04002 */ HB_P_LINEOFFSET, 156,	/* 164 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'l', 'r', '.', 'C', 'o', 'm', 'p', 'r', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 04040 */ HB_P_LINEOFFSET, 157,	/* 165 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'N', 'o', '.', 'P', 'e', 'd', 0, 
	HB_P_DOSHORT, 1,
/* 04074 */ HB_P_LINEOFFSET, 158,	/* 166 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'N', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 04112 */ HB_P_LINEOFFSET, 160,	/* 168 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'G', 'C', '/', 'C', 'P', 'F', 0, 
	HB_P_DOSHORT, 1,
/* 04147 */ HB_P_LINEOFFSET, 161,	/* 169 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 04170 */ HB_P_LINEOFFSET, 163,	/* 171 */
	HB_P_PUSHSYMNEAR, 61,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 04184 */ HB_P_LINEOFFSET, 164,	/* 172 */
	HB_P_PUSHLOCALNEAR, 12,	/* MCLASS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 58,	/* 58 (abs: 04251) */
/* 04195 */ HB_P_LINEOFFSET, 165,	/* 173 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 56,	/* 56 (abs: 04305) */
/* 04251 */ HB_P_LINEOFFSET, 167,	/* 175 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04305 */ HB_P_LINEOFFSET, 169,	/* 177 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04340 */ HB_P_LINEOFFSET, 170,	/* 178 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04375 */ HB_P_LINEOFFSET, 171,	/* 179 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MULT_COMPRA */
	HB_P_DOSHORT, 1,
/* 04403 */ HB_P_LINEOFFSET, 172,	/* 180 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MVLR_PED */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04449 */ HB_P_LINEOFFSET, 173,	/* 181 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MNUM_PED */
	HB_P_DOSHORT, 1,
/* 04477 */ HB_P_LINEOFFSET, 174,	/* 182 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTOT_COMPRA */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04523 */ HB_P_LINEOFFSET, 176,	/* 184 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* CGC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 69,	/* 69 (abs: 04603) */
/* 04536 */ HB_P_LINEOFFSET, 177,	/* 185 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'@', '@', 'R', ' ', '9', '9', '.', '9', '9', '9', '.', '9', '9', '9', '/', '9', '9', '9', '9', '-', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 63,	/* 63 (abs: 04664) */
/* 04603 */ HB_P_LINEOFFSET, 179,	/* 187 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'@', '@', 'R', ' ', '9', '9', '9', '.', '9', '9', '9', '.', '9', '9', '9', '-', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04664 */ HB_P_LINEOFFSET, 181,	/* 189 */
	HB_P_PUSHVARIABLE, 15, 0,	/* MENDE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 82, 1,	/* 338 (abs: 05012) */
/* 04677 */ HB_P_LINEOFFSET, 182,	/* 190 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'E', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 67,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	',', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 67,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 136, 0,	/* 136 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 136, 0,	/* 136 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04767 */ HB_P_LINEOFFSET, 183,	/* 191 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'B', 'a', 'i', 'r', 'r', 'o', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 67,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', '-', ' ', 'C', 'i', 'd', 'a', 'd', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 67,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', '-', ' ', 'U', 'F', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', 'C', 'E', 'P', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04893 */ HB_P_LINEOFFSET, 184,	/* 192 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'T', 'e', 'l', 'e', 'f', 'o', 'n', 'e', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 67,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 67,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 67,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04989 */ HB_P_LINEOFFSET, 185,	/* 193 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 05012 */ HB_P_LINEOFFSET, 187,	/* 195 */
	HB_P_LOCALNEARADDINT, 9, 1, 0,	/* MTOT_CLI 1*/
/* 05018 */ HB_P_LINEOFFSET, 188,	/* 196 */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 55, 0,	/* I */
	HB_P_JUMP, 2, 248,	/* -2046 (abs: 02981) */
/* 05030 */ HB_P_LINEOFFSET, 189,	/* 197 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'A', 't', 'i', 'v', 'o', 's', ':', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 05085 */ HB_P_LINEOFFSET, 190,	/* 198 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_CLI */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05121 */ HB_P_LINEOFFSET, 191,	/* 199 */
	HB_P_PUSHSYMNEAR, 59,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05128 */ HB_P_LINEOFFSET, 192,	/* 200 */
	HB_P_PUSHSYMNEAR, 68,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 05137 */ HB_P_LINEOFFSET, 193,	/* 201 */
	HB_P_PUSHSYMNEAR, 69,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 69,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 69,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 05178 */ HB_P_LINEOFFSET, 194,	/* 202 */
	HB_P_PUSHSYMNEAR, 70,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'L', 'I', '_', 'A', 'T', 'I', 'V', 'O', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 218, 236,	/* -4902 (abs: 00299) */
/* 05204 */ HB_P_LINEOFFSET, 205,	/* 213 */
	HB_P_PUSHSYMNEAR, 71,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05211 */ HB_P_LINEOFFSET, 206,	/* 214 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 05216 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SAC5CLI2 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 15, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 221, 0,	/* 221 */
	HB_P_LOCALNEARSETSTR, 7, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', '5', 'C', 'L', 'I', '2', 0, 
	HB_P_LOCALNEARSETSTR, 15, 1, 0,	/* MARQUIVO 1*/
	0, 
/* 00024 */ HB_P_LINEOFFSET, 3,	/* 224 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSYMNEAR, 17,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 2,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 3,	/* MARQ */
	HB_P_PUSHSYMNEAR, 11,	/* LBA */
	HB_P_PUSHSYMNEAR, 12,	/* CBA */
	HB_P_PUSHSYMNEAR, 8,	/* MNOME_VEN */
	HB_P_PUSHSYMNEAR, 10,	/* MCIDADE */
	HB_P_PUSHSYMNEAR, 13,	/* MCEP */
	HB_P_PUSHSYMNEAR, 14,	/* MCOD_OPE */
	HB_P_PUSHSYMNEAR, 6,	/* MULT_COMPRA */
	HB_P_PUSHSYMNEAR, 7,	/* MVLR_PED */
	HB_P_PUSHSYMNEAR, 9,	/* MNUM_PED */
	HB_P_PUSHSYMNEAR, 15,	/* MENDE */
	HB_P_DOSHORT, 13,
	HB_P_POPVARIABLE, 15, 0,	/* MENDE */
	HB_P_POPVARIABLE, 7, 0,	/* MVLR_PED */
	HB_P_POPVARIABLE, 6, 0,	/* MULT_COMPRA */
	HB_P_POPVARIABLE, 14, 0,	/* MCOD_OPE */
	HB_P_POPVARIABLE, 13, 0,	/* MCEP */
	HB_P_POPVARIABLE, 3, 0,	/* MARQ */
	HB_P_POPVARIABLE, 2, 0,	/* MIMP_TIPO */
/* 00100 */ HB_P_LINEOFFSET, 4,	/* 225 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_POPVARIABLE, 11, 0,	/* LBA */
/* 00107 */ HB_P_LINEOFFSET, 5,	/* 226 */
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_POPVARIABLE, 12, 0,	/* CBA */
/* 00114 */ HB_P_LINEOFFSET, 6,	/* 227 */
	HB_P_LOCALNEARSETINT, 1, 0, 0,	/* OPCAO 0*/
/* 00120 */ HB_P_LINEOFFSET, 7,	/* 228 */
	HB_P_PUSHSYMNEAR, 18,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 8,	/* MTRACO */
/* 00135 */ HB_P_LINEOFFSET, 9,	/* 230 */
	HB_P_PUSHSYMNEAR, 73,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 74,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 75,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00157 */ HB_P_LINEOFFSET, 10,	/* 231 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00186) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00186 */ HB_P_LINEOFFSET, 11,	/* 232 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'p', 'e', 'd', '_', 's', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 's', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00217) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00217 */ HB_P_LINEOFFSET, 12,	/* 233 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'o', 'r', 'c', 'a', 'm', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'r', 'c', 'a', 'm', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00248) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00248 */ HB_P_LINEOFFSET, 13,	/* 234 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00275) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00275 */ HB_P_LINEOFFSET, 15,	/* 236 */
	HB_P_PUSHSYMNEAR, 20,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHVARIABLE, 11, 0,	/* LBA */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHVARIABLE, 12, 0,	/* CBA */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'I', 'N', 'A', 'T', 'I', 'V', 'O', 'S', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00315 */ HB_P_LINEOFFSET, 17,	/* 238 */
	HB_P_PUSHSYMNEAR, 21,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00324 */ HB_P_LINEOFFSET, 18,	/* 239 */
	HB_P_PUSHMEMVAR, 22, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 1, 0,	/* MTIPO_IMP */
/* 00337 */ HB_P_LINEOFFSET, 19,	/* 240 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 11,	/* MTIPO_CLI */
/* 00347 */ HB_P_LINEOFFSET, 20,	/* 241 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 14, 0,	/* MCOD_OPE */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* MCOD_VEN */
	HB_P_POPLOCALNEAR, 9,	/* MTOT_CLI */
/* 00359 */ HB_P_LINEOFFSET, 21,	/* 242 */
	HB_P_PUSHSYMNEAR, 23,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 3,	/* MDATA2 */
	HB_P_POPLOCALNEAR, 2,	/* MDATA1 */
/* 00382 */ HB_P_LINEOFFSET, 22,	/* 243 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 8, 0,	/* MNOME_VEN */
/* 00394 */ HB_P_LINEOFFSET, 23,	/* 244 */
	HB_P_LOCALNEARSETSTR, 12, 2, 0,	/* MCLASS 2*/
	'2', 0, 
/* 00402 */ HB_P_LINEOFFSET, 24,	/* 245 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* MAREA */
/* 00413 */ HB_P_LINEOFFSET, 25,	/* 246 */
	HB_P_LOCALNEARSETSTR, 14, 2, 0,	/* MTIPO_CONS 2*/
	'P', 0, 
/* 00421 */ HB_P_LINEOFFSET, 26,	/* 247 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 10, 0,	/* MCIDADE */
/* 00433 */ HB_P_LINEOFFSET, 27,	/* 248 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00464 */ HB_P_LINEOFFSET, 28,	/* 249 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00496 */ HB_P_LINEOFFSET, 29,	/* 250 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'o', 'd', '.', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00528 */ HB_P_LINEOFFSET, 30,	/* 251 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'o', 'd', '.', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00560 */ HB_P_LINEOFFSET, 31,	/* 252 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'T', 'i', 'p', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00592 */ HB_P_LINEOFFSET, 32,	/* 253 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'A', 'r', 'e', 'a', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00624 */ HB_P_LINEOFFSET, 33,	/* 254 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00656 */ HB_P_LINEOFFSET, 34,	/* 255 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'C', 'l', 'a', 's', 's', 'i', 'f', 'i', 'c', 'a', 'c', 'a', 'o', ' ', '[', '1', ']', 'C', 'o', 'd', 'i', 'g', 'o', ' ', '[', '2', ']', 'N', 'o', 'm', 'e', ' ', '[', '3', ']', 'F', 'a', 'n', 't', 'a', 's', 'i', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00721 */ HB_P_LINEOFFSET, 35,	/* 256 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'T', 'i', 'p', 'o', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', '[', 'P', ']', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'O', ']', 'r', 'c', 'a', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00775 */ HB_P_LINEOFFSET, 36,	/* 257 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'E', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00840 */ HB_P_LINEOFFSET, 37,	/* 258 */
	HB_P_PUSHSYMNEAR, 26,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00859 */ HB_P_LINEOFFSET, 38,	/* 259 */
	HB_P_PUSHSYMNEAR, 27,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00868 */ HB_P_LINEOFFSET, 39,	/* 260 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 'd', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00906 */ HB_P_LINEOFFSET, 40,	/* 261 */
	HB_P_PUSHSYMNEAR, 27,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00914 */ HB_P_LINEOFFSET, 41,	/* 262 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00952) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00957) */
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
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00986 */ HB_P_LINEOFFSET, 42,	/* 263 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01025) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01030) */
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
	3, 0,	/* MDATA2 */
	2, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01062) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01063) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01081 */ HB_P_LINEOFFSET, 43,	/* 264 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCOD_VEN */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01120) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01125) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCOD_VEN */
	HB_P_PUSHSYMNEAR, 76,	/* VER_VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01189 */ HB_P_LINEOFFSET, 44,	/* 265 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'o', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 23,	/* 23 */
	HB_P_PUSHSYMNEAR, 76,	/* VER_VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* MCOD_OPE */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01267 */ HB_P_LINEOFFSET, 45,	/* 266 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MTIPO_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01306) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01311) */
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
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01347 */ HB_P_LINEOFFSET, 46,	/* 267 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MAREA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01386) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01391) */
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
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01423 */ HB_P_LINEOFFSET, 47,	/* 268 */
	HB_P_PUSHSYMNEAR, 36,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 30, 0,	/* GETLIST */
/* 01445 */ HB_P_LINEOFFSET, 48,	/* 269 */
	HB_P_PUSHSYMNEAR, 39,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 134, 0,	/* 134 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 10, 0,	/* MCIDADE */
/* 01464 */ HB_P_LINEOFFSET, 49,	/* 270 */
	HB_P_PUSHSYMNEAR, 41,	/* SACCID */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCIDADE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPVARIABLE, 10, 0,	/* MCIDADE */
/* 01482 */ HB_P_LINEOFFSET, 50,	/* 271 */
	HB_P_PUSHSYMNEAR, 27,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01491 */ HB_P_LINEOFFSET, 51,	/* 272 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 42,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCIDADE */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 3,
/* 01516 */ HB_P_LINEOFFSET, 52,	/* 273 */
	HB_P_PUSHSYMNEAR, 27,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01524 */ HB_P_LINEOFFSET, 53,	/* 274 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MCLASS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01563) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01568) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'c', 'l', 'a', 's', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MCLASS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'1', ',', '2', ',', '9', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01620 */ HB_P_LINEOFFSET, 54,	/* 275 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MTIPO_CONS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01659) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01664) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 't', 'i', 'p', 'o', '_', 'c', 'o', 'n', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MTIPO_CONS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'P', ',', 'O', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01719 */ HB_P_LINEOFFSET, 55,	/* 276 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'e', 'n', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 15, 0,	/* MENDE */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01783 */ HB_P_LINEOFFSET, 56,	/* 277 */
	HB_P_PUSHSYMNEAR, 36,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 30, 0,	/* GETLIST */
/* 01805 */ HB_P_LINEOFFSET, 57,	/* 278 */
	HB_P_PUSHSYMNEAR, 37,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 01839) */
/* 01817 */ HB_P_LINEOFFSET, 58,	/* 279 */
	HB_P_PUSHSYMNEAR, 38,	/* __MVXRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'n', 'o', 'm', 'e', '_', 'v', 'e', 'n', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 156, 10,	/* 2716 (abs: 04552) */
/* 01839 */ HB_P_LINEOFFSET, 61,	/* 282 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* MPAG 0*/
/* 01845 */ HB_P_LINEOFFSET, 62,	/* 283 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 16, 0,	/* CONS_CLI */
/* 01853 */ HB_P_LINEOFFSET, 63,	/* 284 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'N', 'O', 'T', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'E', 39, 0, 
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 01902 */ HB_P_LINEOFFSET, 64,	/* 285 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 01955) */
/* 01913 */ HB_P_LINEOFFSET, 65,	/* 286 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', 'v', 'e', 'n', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 01955 */ HB_P_LINEOFFSET, 67,	/* 288 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 01998) */
/* 01966 */ HB_P_LINEOFFSET, 68,	/* 289 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 'a', 'r', 'e', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 01998 */ HB_P_LINEOFFSET, 70,	/* 291 */
	HB_P_PUSHLOCALNEAR, 11,	/* MTIPO_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 02041) */
/* 02009 */ HB_P_LINEOFFSET, 71,	/* 292 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 'c', 'g', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02041 */ HB_P_LINEOFFSET, 73,	/* 294 */
	HB_P_PUSHLOCALNEAR, 11,	/* MTIPO_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'F', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 02095) */
/* 02052 */ HB_P_LINEOFFSET, 74,	/* 295 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', 'A', 'N', 'D', ' ', '(', 'c', 'g', 'c', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'c', 'g', 'c', ' ', '=', ' ', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02095 */ HB_P_LINEOFFSET, 76,	/* 297 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 37,	/* 37 (abs: 02142) */
/* 02107 */ HB_P_LINEOFFSET, 77,	/* 298 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'i', 'd', 'a', 'd', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02142 */ HB_P_LINEOFFSET, 79,	/* 300 */
	HB_P_PUSHLOCALNEAR, 12,	/* MCLASS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 02184) */
/* 02153 */ HB_P_LINEOFFSET, 80,	/* 301 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 68,	/* 68 (abs: 02250) */
/* 02184 */ HB_P_LINEOFFSET, 81,	/* 302 */
	HB_P_PUSHLOCALNEAR, 12,	/* MCLASS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 02224) */
/* 02195 */ HB_P_LINEOFFSET, 82,	/* 303 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'r', 'a', 'z', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 28,	/* 28 (abs: 02250) */
/* 02224 */ HB_P_LINEOFFSET, 84,	/* 305 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'n', 'o', 'm', 'e', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02250 */ HB_P_LINEOFFSET, 86,	/* 307 */
	HB_P_MESSAGE, 49, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 50,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 16, 0,	/* CONS_CLI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02271 */ HB_P_LINEOFFSET, 87,	/* 308 */
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
/* 02295 */ HB_P_LINEOFFSET, 88,	/* 309 */
	HB_P_PUSHSYMNEAR, 51,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 02372) */
/* 02309 */ HB_P_LINEOFFSET, 89,	/* 310 */
	HB_P_PUSHSYMNEAR, 52,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'c', 'o', 'm', ' ', 'e', 's', 's', 'a', 's', ' ', 'c', 'a', 'r', 'a', 'c', 't', 'e', 'r', 'i', 's', 't', 'i', 'c', 'a', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 250, 247,	/* -2054 (abs: 00315) */
/* 02372 */ HB_P_LINEOFFSET, 92,	/* 313 */
	HB_P_LOCALNEARSETSTR, 5, 29, 0,	/* MTIT 29*/
	'R', 'e', 'l', 'a', 'c', 'a', 'o', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'I', 'n', 'a', 't', 'i', 'v', 'o', 's', 0, 
/* 02407 */ HB_P_LINEOFFSET, 93,	/* 314 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 02452) */
/* 02418 */ HB_P_LINEOFFSET, 94,	/* 315 */
	HB_P_PUSHLOCALNEAR, 5,	/* MTIT */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 5,	/* MTIT */
/* 02452 */ HB_P_LINEOFFSET, 96,	/* 317 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'N', 'o', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 6,	/* MTIPO */
/* 02496 */ HB_P_LINEOFFSET, 97,	/* 318 */
	HB_P_PUSHSYMNEAR, 54,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'L', 'I', '_', 'I', 'N', 'A', 'T', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 02528) */
	HB_P_JUMP, 94, 247,	/* -2210 (abs: 00315) */
/* 02528 */ HB_P_LINEOFFSET, 100,	/* 321 */
	HB_P_PUSHLOCALNEAR, 14,	/* MTIPO_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 02556) */
/* 02539 */ HB_P_LINEOFFSET, 101,	/* 322 */
	HB_P_LOCALNEARSETSTR, 15, 9, 0,	/* MARQUIVO 9*/
	's', 'a', 'c', 'o', 'r', 'c', 'a', 'm', 0, 
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 02571) */
/* 02556 */ HB_P_LINEOFFSET, 103,	/* 324 */
	HB_P_LOCALNEARSETSTR, 15, 9, 0,	/* MARQUIVO 9*/
	's', 'a', 'c', 'p', 'e', 'd', '_', 's', 0, 
/* 02571 */ HB_P_LINEOFFSET, 105,	/* 326 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 55, 0,	/* I */
/* 02577 */ HB_P_LINEOFFSET, 106,	/* 327 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 55, 0,	/* I */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_PUSHSYMNEAR, 51,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 245, 6,	/* 1781 (abs: 04376) */
/* 02598 */ HB_P_LINEOFFSET, 107,	/* 328 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DISPOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02640 */ HB_P_LINEOFFSET, 108,	/* 329 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 77, 0,	/* CONS_MOV */
/* 02648 */ HB_P_LINEOFFSET, 109,	/* 330 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 15,	/* MARQUIVO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ' ', ' ', 'B', 'E', 'T', 'W', 'E', 'E', 'N', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02727 */ HB_P_LINEOFFSET, 110,	/* 331 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', 'A', 'N', 'D', ' ', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, '*', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02808 */ HB_P_LINEOFFSET, 111,	/* 332 */
	HB_P_MESSAGE, 49, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 50,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 77, 0,	/* CONS_MOV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02829 */ HB_P_LINEOFFSET, 112,	/* 333 */
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
/* 02853 */ HB_P_LINEOFFSET, 113,	/* 334 */
	HB_P_PUSHSYMNEAR, 51,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 77, 0,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02870) */
	HB_P_JUMP, 219, 5,	/* 1499 (abs: 04366) */
/* 02870 */ HB_P_LINEOFFSET, 116,	/* 337 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 77, 0,	/* CONS_MOV */
/* 02878 */ HB_P_LINEOFFSET, 117,	/* 338 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 15,	/* MARQUIVO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, '*', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02978 */ HB_P_LINEOFFSET, 118,	/* 339 */
	HB_P_MESSAGE, 49, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 50,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 77, 0,	/* CONS_MOV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02999 */ HB_P_LINEOFFSET, 119,	/* 340 */
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
/* 03023 */ HB_P_LINEOFFSET, 120,	/* 341 */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_POPVARIABLE, 6, 0,	/* MULT_COMPRA */
/* 03039 */ HB_P_LINEOFFSET, 121,	/* 342 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 9, 0,	/* MNUM_PED */
/* 03051 */ HB_P_LINEOFFSET, 122,	/* 343 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 7, 0,	/* MVLR_PED */
/* 03057 */ HB_P_LINEOFFSET, 123,	/* 344 */
	HB_P_PUSHSYMNEAR, 51,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 77, 0,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 215, 0,	/* 215 (abs: 03284) */
/* 03072 */ HB_P_LINEOFFSET, 124,	/* 345 */
	HB_P_PUSHMEMVAR, 77, 0,	/* CONS_MOV */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 6, 0,	/* MULT_COMPRA */
/* 03086 */ HB_P_LINEOFFSET, 125,	/* 346 */
	HB_P_PUSHMEMVAR, 77, 0,	/* CONS_MOV */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 9, 0,	/* MNUM_PED */
/* 03100 */ HB_P_LINEOFFSET, 126,	/* 347 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 77, 0,	/* CONS_MOV */
/* 03108 */ HB_P_LINEOFFSET, 127,	/* 348 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', ' ', '*', ' ', 'p', 'v', 'l', 'r', '_', 'f', 'a', 't', ')', ' ', 'F', 'R', 'O', 'M', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 15,	/* MARQUIVO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MNUM_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 03186 */ HB_P_LINEOFFSET, 128,	/* 349 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, '*', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 03213 */ HB_P_LINEOFFSET, 129,	/* 350 */
	HB_P_MESSAGE, 49, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 50,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 77, 0,	/* CONS_MOV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03234 */ HB_P_LINEOFFSET, 130,	/* 351 */
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
/* 03258 */ HB_P_LINEOFFSET, 131,	/* 352 */
	HB_P_PUSHSYMNEAR, 51,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 77, 0,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 03284) */
/* 03272 */ HB_P_LINEOFFSET, 132,	/* 353 */
	HB_P_PUSHMEMVAR, 77, 0,	/* CONS_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 7, 0,	/* MVLR_PED */
/* 03284 */ HB_P_LINEOFFSET, 135,	/* 356 */
	HB_P_PUSHLOCALNEAR, 4,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 03302) */
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 45, 1,	/* 301 (abs: 03603) */
/* 03305 */ HB_P_LINEOFFSET, 136,	/* 357 */
	HB_P_LOCALNEARADDINT, 4, 1, 0,	/* MPAG 1*/
/* 03311 */ HB_P_LINEOFFSET, 137,	/* 358 */
	HB_P_PUSHLOCALNEAR, 4,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 03326) */
/* 03319 */ HB_P_LINEOFFSET, 138,	/* 359 */
	HB_P_PUSHSYMNEAR, 59,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03326 */ HB_P_LINEOFFSET, 140,	/* 361 */
	HB_P_PUSHSYMNEAR, 60,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 5,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 6,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 7,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 03341 */ HB_P_LINEOFFSET, 141,	/* 362 */
	HB_P_PUSHSYMNEAR, 61,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03355 */ HB_P_LINEOFFSET, 142,	/* 363 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 03386 */ HB_P_LINEOFFSET, 143,	/* 364 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'F', 'o', 'n', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 03412 */ HB_P_LINEOFFSET, 144,	/* 365 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 68,	/* 68 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 't', 'a', '.', 'N', 'a', 's', 'c', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03443 */ HB_P_LINEOFFSET, 145,	/* 366 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'U', 'l', 't', '.', 'C', 'o', 'm', 'p', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03474 */ HB_P_LINEOFFSET, 146,	/* 367 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 92,	/* 92 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'l', 'r', '.', 'C', 'o', 'm', 'p', 'r', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 03506 */ HB_P_LINEOFFSET, 147,	/* 368 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 104,	/* 104 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'N', 'o', '.', 'P', 'e', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03535 */ HB_P_LINEOFFSET, 148,	/* 369 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 112,	/* 112 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'A', 'c', 'u', 'm', 'u', 'l', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03566 */ HB_P_LINEOFFSET, 149,	/* 370 */
	HB_P_PUSHSYMNEAR, 61,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 03580 */ HB_P_LINEOFFSET, 150,	/* 371 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 03603 */ HB_P_LINEOFFSET, 152,	/* 373 */
	HB_P_PUSHSYMNEAR, 61,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03617 */ HB_P_LINEOFFSET, 153,	/* 374 */
	HB_P_PUSHLOCALNEAR, 12,	/* MCLASS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 58,	/* 58 (abs: 03684) */
/* 03628 */ HB_P_LINEOFFSET, 154,	/* 375 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 56,	/* 56 (abs: 03738) */
/* 03684 */ HB_P_LINEOFFSET, 156,	/* 377 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03738 */ HB_P_LINEOFFSET, 158,	/* 379 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03773 */ HB_P_LINEOFFSET, 159,	/* 380 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03808 */ HB_P_LINEOFFSET, 160,	/* 381 */
	HB_P_PUSHSYMNEAR, 78,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '1', '2', '8', '7', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 03844) */
	HB_P_PUSHSYMNEAR, 78,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '1', '2', '8', 'D', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 03877) */
/* 03846 */ HB_P_LINEOFFSET, 161,	/* 382 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 86,	/* 86 (abs: 03961) */
/* 03877 */ HB_P_LINEOFFSET, 163,	/* 384 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MULT_COMPRA */
	HB_P_DOSHORT, 1,
/* 03899 */ HB_P_LINEOFFSET, 164,	/* 385 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 92,	/* 92 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MVLR_PED */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03939 */ HB_P_LINEOFFSET, 165,	/* 386 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 104,	/* 104 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MNUM_PED */
	HB_P_DOSHORT, 1,
/* 03961 */ HB_P_LINEOFFSET, 168,	/* 389 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 112,	/* 112 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04010 */ HB_P_LINEOFFSET, 169,	/* 390 */
	HB_P_PUSHVARIABLE, 15, 0,	/* MENDE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 82, 1,	/* 338 (abs: 04358) */
/* 04023 */ HB_P_LINEOFFSET, 170,	/* 391 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'E', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 67,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	',', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 67,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 136, 0,	/* 136 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 136, 0,	/* 136 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04113 */ HB_P_LINEOFFSET, 171,	/* 392 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'B', 'a', 'i', 'r', 'r', 'o', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 67,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', '-', ' ', 'C', 'i', 'd', 'a', 'd', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 67,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', '-', ' ', 'U', 'F', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', 'C', 'E', 'P', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04239 */ HB_P_LINEOFFSET, 172,	/* 393 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'T', 'e', 'l', 'e', 'f', 'o', 'n', 'e', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 67,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 67,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 67,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04335 */ HB_P_LINEOFFSET, 173,	/* 394 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 04358 */ HB_P_LINEOFFSET, 175,	/* 396 */
	HB_P_LOCALNEARADDINT, 9, 1, 0,	/* MTOT_CLI 1*/
/* 04364 */ HB_P_LINEOFFSET, 176,	/* 397 */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 55, 0,	/* I */
	HB_P_JUMP, 2, 249,	/* -1790 (abs: 02583) */
/* 04376 */ HB_P_LINEOFFSET, 177,	/* 398 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'I', 'n', 'a', 't', 'i', 'v', 'o', 's', ':', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 04433 */ HB_P_LINEOFFSET, 178,	/* 399 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_CLI */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04469 */ HB_P_LINEOFFSET, 179,	/* 400 */
	HB_P_PUSHSYMNEAR, 59,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04476 */ HB_P_LINEOFFSET, 180,	/* 401 */
	HB_P_PUSHSYMNEAR, 68,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 04485 */ HB_P_LINEOFFSET, 181,	/* 402 */
	HB_P_PUSHSYMNEAR, 69,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 69,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 69,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 04526 */ HB_P_LINEOFFSET, 182,	/* 403 */
	HB_P_PUSHSYMNEAR, 70,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'L', 'I', '_', 'I', 'N', 'A', 'T', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 118, 239,	/* -4234 (abs: 00315) */
/* 04552 */ HB_P_LINEOFFSET, 184,	/* 405 */
	HB_P_PUSHSYMNEAR, 71,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04559 */ HB_P_LINEOFFSET, 185,	/* 406 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 04564 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SAC5CLI3 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 14, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 157, 1,	/* 413 */
	HB_P_LOCALNEARSETSTR, 7, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', '5', 'C', 'L', 'I', '3', 0, 
/* 00019 */ HB_P_LINEOFFSET, 2,	/* 415 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 17,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 2,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 3,	/* MARQ */
	HB_P_PUSHSYMNEAR, 8,	/* MNOME_VEN */
	HB_P_PUSHSYMNEAR, 13,	/* MCEP */
	HB_P_DOSHORT, 5,
	HB_P_POPVARIABLE, 13, 0,	/* MCEP */
	HB_P_POPVARIABLE, 3, 0,	/* MARQ */
	HB_P_POPVARIABLE, 2, 0,	/* MIMP_TIPO */
/* 00060 */ HB_P_LINEOFFSET, 4,	/* 417 */
	HB_P_LOCALNEARSETINT, 2, 6, 0,	/* LBA 6*/
/* 00066 */ HB_P_LINEOFFSET, 5,	/* 418 */
	HB_P_LOCALNEARSETINT, 3, 65, 0,	/* CBA 65*/
/* 00072 */ HB_P_LINEOFFSET, 6,	/* 419 */
	HB_P_LOCALNEARSETINT, 1, 0, 0,	/* OPCAO 0*/
/* 00078 */ HB_P_LINEOFFSET, 7,	/* 420 */
	HB_P_PUSHSYMNEAR, 18,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 8,	/* MTRACO */
/* 00093 */ HB_P_LINEOFFSET, 9,	/* 422 */
	HB_P_PUSHSYMNEAR, 73,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 74,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 75,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00115 */ HB_P_LINEOFFSET, 10,	/* 423 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00144) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00144 */ HB_P_LINEOFFSET, 11,	/* 424 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'p', 'e', 'd', '_', 's', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 's', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00175) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00175 */ HB_P_LINEOFFSET, 12,	/* 425 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'o', 'r', 'c', 'a', 'm', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'r', 'c', 'a', 'm', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00206) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00206 */ HB_P_LINEOFFSET, 13,	/* 426 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
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
/* 00233 */ HB_P_LINEOFFSET, 15,	/* 428 */
	HB_P_PUSHSYMNEAR, 20,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 2,	/* LBA */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CBA */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', 'E', 's', 't', 'a', 't', 'i', 's', 't', 'i', 'c', 'a', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00277 */ HB_P_LINEOFFSET, 17,	/* 430 */
	HB_P_PUSHSYMNEAR, 21,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00286 */ HB_P_LINEOFFSET, 18,	/* 431 */
	HB_P_PUSHMEMVAR, 22, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 1, 0,	/* MTIPO_IMP */
/* 00299 */ HB_P_LINEOFFSET, 19,	/* 432 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* MTIPO_CLI */
/* 00309 */ HB_P_LINEOFFSET, 20,	/* 433 */
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* MQTD 0*/
	HB_P_PUSHLOCALNEAR, 11,	/* MQTD */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* MCOD_VEN */
	HB_P_POPLOCALNEAR, 9,	/* MTOT_CLI */
/* 00322 */ HB_P_LINEOFFSET, 21,	/* 434 */
	HB_P_PUSHSYMNEAR, 23,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 12,	/* MDATA_COMP */
/* 00342 */ HB_P_LINEOFFSET, 22,	/* 435 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 8, 0,	/* MNOME_VEN */
/* 00354 */ HB_P_LINEOFFSET, 23,	/* 436 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 14,	/* MCIDADE */
/* 00365 */ HB_P_LINEOFFSET, 24,	/* 437 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'Q', 'u', 'a', 'n', 't', 'd', '.', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00410 */ HB_P_LINEOFFSET, 25,	/* 438 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'D', 'a', 't', 'a', ' ', 'U', 'l', 't', '.', 'C', 'o', 'm', 'p', 'r', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00456 */ HB_P_LINEOFFSET, 26,	/* 439 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00502 */ HB_P_LINEOFFSET, 27,	/* 440 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', '[', 'F', ']', 'i', 's', 'i', 'c', 'o', ' ', '[', 'J', ']', 'u', 'r', 'i', 'd', 'i', 'c', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00548 */ HB_P_LINEOFFSET, 28,	/* 441 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'C', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00594 */ HB_P_LINEOFFSET, 29,	/* 442 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MQTD */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00632) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00637) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'q', 't', 'd', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00671 */ HB_P_LINEOFFSET, 30,	/* 443 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MDATA_COMP */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00710) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00715) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'd', 'a', 't', 'a', '_', 'c', 'o', 'm', 'p', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00748 */ HB_P_LINEOFFSET, 31,	/* 444 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCOD_VEN */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00787) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00792) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCOD_VEN */
	HB_P_PUSHSYMNEAR, 76,	/* VER_VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00856 */ HB_P_LINEOFFSET, 32,	/* 445 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MTIPO_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00895) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00900) */
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
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00936 */ HB_P_LINEOFFSET, 33,	/* 446 */
	HB_P_PUSHSYMNEAR, 36,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 30, 0,	/* GETLIST */
/* 00958 */ HB_P_LINEOFFSET, 34,	/* 447 */
	HB_P_PUSHSYMNEAR, 37,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 00992) */
/* 00970 */ HB_P_LINEOFFSET, 35,	/* 448 */
	HB_P_PUSHSYMNEAR, 38,	/* __MVXRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'n', 'o', 'm', 'e', '_', 'v', 'e', 'n', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 79, 5,	/* 1359 (abs: 02348) */
/* 00992 */ HB_P_LINEOFFSET, 38,	/* 451 */
	HB_P_PUSHSYMNEAR, 39,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 134, 0,	/* 134 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 14,	/* MCIDADE */
/* 01010 */ HB_P_LINEOFFSET, 39,	/* 452 */
	HB_P_PUSHSYMNEAR, 41,	/* SACCID */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MCIDADE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 14,	/* MCIDADE */
/* 01026 */ HB_P_LINEOFFSET, 40,	/* 453 */
	HB_P_PUSHSYMNEAR, 27,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01035 */ HB_P_LINEOFFSET, 41,	/* 454 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MCIDADE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01054 */ HB_P_LINEOFFSET, 42,	/* 455 */
	HB_P_PUSHSYMNEAR, 43,	/* SEN */
	HB_P_PUSHALIASEDFIELDNEAR, 44,	/* SNOME */
	HB_P_POPVARIABLE, 8, 0,	/* MNOME_VEN */
/* 01063 */ HB_P_LINEOFFSET, 43,	/* 456 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MNOME_VEN */
	HB_P_DOSHORT, 1,
/* 01082 */ HB_P_LINEOFFSET, 44,	/* 457 */
	HB_P_PUSHSYMNEAR, 27,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01090 */ HB_P_LINEOFFSET, 45,	/* 458 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* MPAG 0*/
/* 01096 */ HB_P_LINEOFFSET, 47,	/* 460 */
	HB_P_PUSHSYMNEAR, 74,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 80,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 1,
/* 01116 */ HB_P_LINEOFFSET, 48,	/* 461 */
	HB_P_PUSHSYMNEAR, 81,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01123 */ HB_P_LINEOFFSET, 50,	/* 463 */
	HB_P_LOCALNEARSETSTR, 5, 34, 0,	/* MTIT 34*/
	'E', 's', 't', 'a', 't', 'i', 's', 't', 'i', 'c', 'a', ' ', 'd', 'e', ' ', 'C', 'o', 'm', 'p', 'r', 'a', 's', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
/* 01163 */ HB_P_LINEOFFSET, 51,	/* 464 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 01208) */
/* 01174 */ HB_P_LINEOFFSET, 52,	/* 465 */
	HB_P_PUSHLOCALNEAR, 5,	/* MTIT */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 5,	/* MTIT */
/* 01208 */ HB_P_LINEOFFSET, 55,	/* 468 */
	HB_P_PUSHSYMNEAR, 54,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'L', 'I', '_', 'E', 'S', 'T', 'A', 'T', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01240) */
	HB_P_JUMP, 64, 252,	/* -960 (abs: 00277) */
/* 01240 */ HB_P_LINEOFFSET, 58,	/* 471 */
	HB_P_PUSHSYMNEAR, 82,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUE, 168, 3,	/* 936 (abs: 02183) */
/* 01250 */ HB_P_LINEOFFSET, 63,	/* 476 */
	HB_P_PUSHSYMNEAR, 65,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 83,	/* TIPO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 28,	/* 28 (abs: 01290) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 17,	/* 17 (abs: 01289) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 48,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 65,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 84,	/* CODVEND */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 24,	/* 24 (abs: 01315) */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 01314) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 85,	/* CPF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 24,	/* 24 (abs: 01340) */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'F', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 01339) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* CGC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 01362) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 01361) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 65,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 86,	/* CIDADE */
	HB_P_PUSHLOCALNEAR, 14,	/* MCIDADE */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 01375) */
/* 01364 */ HB_P_LINEOFFSET, 64,	/* 477 */
	HB_P_PUSHSYMNEAR, 87,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 124, 255,	/* -132 (abs: 01240) */
/* 01375 */ HB_P_LINEOFFSET, 67,	/* 480 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MQTD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 01393) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 11,	/* MQTD */
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_CLI */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01398) */
	HB_P_JUMP, 20, 3,	/* 788 (abs: 02183) */
/* 01398 */ HB_P_LINEOFFSET, 70,	/* 483 */
	HB_P_PUSHSYMNEAR, 78,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '1', '2', '8', '7', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 01434) */
	HB_P_PUSHSYMNEAR, 78,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '1', '2', '8', 'D', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 01469) */
/* 01436 */ HB_P_LINEOFFSET, 71,	/* 484 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MDATA_COMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 01456) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 12,	/* MDATA_COMP */
	HB_P_PUSHSYMNEAR, 65,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 88,	/* ULT_ORC */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 01502) */
/* 01458 */ HB_P_LINEOFFSET, 72,	/* 485 */
	HB_P_PUSHSYMNEAR, 87,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 30, 255,	/* -226 (abs: 01240) */
/* 01469 */ HB_P_LINEOFFSET, 76,	/* 489 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MDATA_COMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 01489) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 12,	/* MDATA_COMP */
	HB_P_PUSHSYMNEAR, 65,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 89,	/* ULT_COMP */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 01502) */
/* 01491 */ HB_P_LINEOFFSET, 77,	/* 490 */
	HB_P_PUSHSYMNEAR, 87,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 253, 254,	/* -259 (abs: 01240) */
/* 01502 */ HB_P_LINEOFFSET, 81,	/* 494 */
	HB_P_PUSHLOCALNEAR, 4,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 01520) */
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 72, 1,	/* 328 (abs: 01848) */
/* 01523 */ HB_P_LINEOFFSET, 82,	/* 495 */
	HB_P_LOCALNEARADDINT, 4, 1, 0,	/* MPAG 1*/
/* 01529 */ HB_P_LINEOFFSET, 83,	/* 496 */
	HB_P_PUSHLOCALNEAR, 4,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 01544) */
/* 01537 */ HB_P_LINEOFFSET, 84,	/* 497 */
	HB_P_PUSHSYMNEAR, 59,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01544 */ HB_P_LINEOFFSET, 86,	/* 499 */
	HB_P_PUSHSYMNEAR, 60,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 5,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 6,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 7,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 01559 */ HB_P_LINEOFFSET, 87,	/* 500 */
	HB_P_PUSHSYMNEAR, 61,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 01573 */ HB_P_LINEOFFSET, 88,	/* 501 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 01604 */ HB_P_LINEOFFSET, 89,	/* 502 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'F', 'o', 'n', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 01630 */ HB_P_LINEOFFSET, 90,	/* 503 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 68,	/* 68 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 't', 'a', '.', 'N', 'a', 's', 'c', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01661 */ HB_P_LINEOFFSET, 91,	/* 504 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'U', 'l', 't', '.', 'C', 'o', 'm', 'p', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01692 */ HB_P_LINEOFFSET, 92,	/* 505 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 92,	/* 92 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'l', 'r', '.', 'C', 'o', 'm', 'p', 'r', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 01724 */ HB_P_LINEOFFSET, 93,	/* 506 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 104,	/* 104 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'N', 'o', '.', 'P', 'e', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01753 */ HB_P_LINEOFFSET, 94,	/* 507 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 112,	/* 112 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'A', 'c', 'u', 'm', 'u', 'l', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 01784 */ HB_P_LINEOFFSET, 95,	/* 508 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 126,	/* 126 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'V', 'e', 'n', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01811 */ HB_P_LINEOFFSET, 96,	/* 509 */
	HB_P_PUSHSYMNEAR, 61,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 01825 */ HB_P_LINEOFFSET, 97,	/* 510 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 01848 */ HB_P_LINEOFFSET, 99,	/* 512 */
	HB_P_PUSHSYMNEAR, 61,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 01862 */ HB_P_LINEOFFSET, 100,	/* 513 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 90,	/* COD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 91,	/* RAZAO */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01904 */ HB_P_LINEOFFSET, 101,	/* 514 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 92,	/* TEL1 */
	HB_P_DOSHORT, 1,
/* 01927 */ HB_P_LINEOFFSET, 102,	/* 515 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 68,	/* 68 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 93,	/* NASCIMENTO */
	HB_P_DOSHORT, 1,
/* 01950 */ HB_P_LINEOFFSET, 103,	/* 516 */
	HB_P_PUSHSYMNEAR, 78,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '1', '2', '8', '7', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 01986) */
	HB_P_PUSHSYMNEAR, 78,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '1', '2', '8', 'D', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 02013) */
/* 01988 */ HB_P_LINEOFFSET, 104,	/* 517 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 88,	/* ULT_ORC */
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 89,	/* 89 (abs: 02100) */
/* 02013 */ HB_P_LINEOFFSET, 106,	/* 519 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 89,	/* ULT_COMP */
	HB_P_DOSHORT, 1,
/* 02036 */ HB_P_LINEOFFSET, 107,	/* 520 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 92,	/* 92 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 94,	/* VLR_COMP */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02077 */ HB_P_LINEOFFSET, 108,	/* 521 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 104,	/* 104 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 95,	/* NUM_PED */
	HB_P_DOSHORT, 1,
/* 02100 */ HB_P_LINEOFFSET, 110,	/* 523 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 112,	/* 112 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 96,	/* TOT_COMP */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02143 */ HB_P_LINEOFFSET, 111,	/* 524 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 126,	/* 126 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 84,	/* CODVEND */
	HB_P_DOSHORT, 1,
/* 02166 */ HB_P_LINEOFFSET, 113,	/* 526 */
	HB_P_LOCALNEARADDINT, 9, 1, 0,	/* MTOT_CLI 1*/
/* 02172 */ HB_P_LINEOFFSET, 114,	/* 527 */
	HB_P_PUSHSYMNEAR, 87,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 84, 252,	/* -940 (abs: 01240) */
/* 02183 */ HB_P_LINEOFFSET, 116,	/* 529 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ':', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 02231 */ HB_P_LINEOFFSET, 117,	/* 530 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_CLI */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02265 */ HB_P_LINEOFFSET, 118,	/* 531 */
	HB_P_PUSHSYMNEAR, 59,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02272 */ HB_P_LINEOFFSET, 119,	/* 532 */
	HB_P_PUSHSYMNEAR, 68,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 02281 */ HB_P_LINEOFFSET, 120,	/* 533 */
	HB_P_PUSHSYMNEAR, 69,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 69,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 69,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 02322 */ HB_P_LINEOFFSET, 121,	/* 534 */
	HB_P_PUSHSYMNEAR, 70,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'L', 'I', '_', 'E', 'S', 'T', 'A', 'T', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 236, 247,	/* -2068 (abs: 00277) */
/* 02348 */ HB_P_LINEOFFSET, 132,	/* 545 */
	HB_P_PUSHSYMNEAR, 71,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02355 */ HB_P_LINEOFFSET, 133,	/* 546 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02360 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SAC5CLI4 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 16, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 145, 2,	/* 657 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', '5', 'C', 'L', 'I', 0, 
	HB_P_LOCALNEARSETSTR, 15, 1, 0,	/* MCOMANDO 1*/
	0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 16,	/* MCONS_DUPR */
/* 00028 */ HB_P_LINEOFFSET, 2,	/* 659 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 17,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 2,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 3,	/* MARQ */
	HB_P_PUSHSYMNEAR, 8,	/* MNOME_VEN */
	HB_P_PUSHSYMNEAR, 13,	/* MCEP */
	HB_P_DOSHORT, 5,
	HB_P_POPVARIABLE, 13, 0,	/* MCEP */
	HB_P_POPVARIABLE, 3, 0,	/* MARQ */
	HB_P_POPVARIABLE, 2, 0,	/* MIMP_TIPO */
/* 00069 */ HB_P_LINEOFFSET, 4,	/* 661 */
	HB_P_LOCALNEARSETINT, 3, 4, 0,	/* LBA 4*/
/* 00075 */ HB_P_LINEOFFSET, 5,	/* 662 */
	HB_P_LOCALNEARSETINT, 4, 65, 0,	/* CBA 65*/
/* 00081 */ HB_P_LINEOFFSET, 6,	/* 663 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* OPCAO 0*/
/* 00087 */ HB_P_LINEOFFSET, 7,	/* 664 */
	HB_P_PUSHSYMNEAR, 18,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 8,	/* MTRACO */
/* 00102 */ HB_P_LINEOFFSET, 9,	/* 666 */
	HB_P_PUSHSYMNEAR, 73,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 74,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 75,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00124 */ HB_P_LINEOFFSET, 10,	/* 667 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00153) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00153 */ HB_P_LINEOFFSET, 12,	/* 669 */
	HB_P_PUSHSYMNEAR, 20,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 3,	/* LBA */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CBA */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'c', 'o', 'm', ' ', 'L', 'I', 'M', 'I', 'T', 'E', ' ', 'E', 'S', 'T', 'O', 'U', 'R', 'A', 'D', 'O', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00203 */ HB_P_LINEOFFSET, 14,	/* 671 */
	HB_P_PUSHSYMNEAR, 21,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00212 */ HB_P_LINEOFFSET, 15,	/* 672 */
	HB_P_PUSHMEMVAR, 22, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 1, 0,	/* MTIPO_IMP */
/* 00225 */ HB_P_LINEOFFSET, 16,	/* 673 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* MTIPO_CLI */
/* 00235 */ HB_P_LINEOFFSET, 17,	/* 674 */
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* MQTD 0*/
	HB_P_PUSHLOCALNEAR, 11,	/* MQTD */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* MCOD_VEN */
	HB_P_POPLOCALNEAR, 9,	/* MTOT_CLI */
/* 00248 */ HB_P_LINEOFFSET, 18,	/* 675 */
	HB_P_PUSHSYMNEAR, 23,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 12,	/* MDATA_COMP */
/* 00268 */ HB_P_LINEOFFSET, 19,	/* 676 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 8, 0,	/* MNOME_VEN */
/* 00280 */ HB_P_LINEOFFSET, 20,	/* 677 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 14,	/* MCIDADE */
/* 00291 */ HB_P_LINEOFFSET, 21,	/* 678 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'Q', 'u', 'a', 'n', 't', 'd', '.', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00336 */ HB_P_LINEOFFSET, 22,	/* 679 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00382 */ HB_P_LINEOFFSET, 23,	/* 680 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', '[', 'F', ']', 'i', 's', 'i', 'c', 'o', ' ', '[', 'J', ']', 'u', 'r', 'i', 'd', 'i', 'c', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00428 */ HB_P_LINEOFFSET, 24,	/* 681 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'C', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00474 */ HB_P_LINEOFFSET, 25,	/* 682 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MQTD */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00512) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00517) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'q', 't', 'd', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00551 */ HB_P_LINEOFFSET, 26,	/* 683 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCOD_VEN */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00590) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00595) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCOD_VEN */
	HB_P_PUSHSYMNEAR, 76,	/* VER_VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00659 */ HB_P_LINEOFFSET, 27,	/* 684 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MTIPO_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00698) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00703) */
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
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00739 */ HB_P_LINEOFFSET, 28,	/* 685 */
	HB_P_PUSHSYMNEAR, 36,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 30, 0,	/* GETLIST */
/* 00761 */ HB_P_LINEOFFSET, 29,	/* 686 */
	HB_P_PUSHSYMNEAR, 37,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 00795) */
/* 00773 */ HB_P_LINEOFFSET, 30,	/* 687 */
	HB_P_PUSHSYMNEAR, 38,	/* __MVXRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'n', 'o', 'm', 'e', '_', 'v', 'e', 'n', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 80, 6,	/* 1616 (abs: 02408) */
/* 00795 */ HB_P_LINEOFFSET, 33,	/* 690 */
	HB_P_PUSHSYMNEAR, 39,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 134, 0,	/* 134 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 14,	/* MCIDADE */
/* 00813 */ HB_P_LINEOFFSET, 34,	/* 691 */
	HB_P_PUSHSYMNEAR, 41,	/* SACCID */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MCIDADE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 14,	/* MCIDADE */
/* 00829 */ HB_P_LINEOFFSET, 35,	/* 692 */
	HB_P_PUSHSYMNEAR, 27,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00838 */ HB_P_LINEOFFSET, 36,	/* 693 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MCIDADE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00857 */ HB_P_LINEOFFSET, 37,	/* 694 */
	HB_P_PUSHSYMNEAR, 27,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00865 */ HB_P_LINEOFFSET, 38,	/* 695 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* MPAG 0*/
/* 00871 */ HB_P_LINEOFFSET, 39,	/* 696 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 16, 0,	/* CONS_CLI */
/* 00879 */ HB_P_LINEOFFSET, 40,	/* 697 */
	HB_P_LOCALNEARSETSTR, 15, 47, 0,	/* MCOMANDO 47*/
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
/* 00932 */ HB_P_LINEOFFSET, 41,	/* 698 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 42,	/* 42 (abs: 00983) */
/* 00943 */ HB_P_LINEOFFSET, 42,	/* 699 */
	HB_P_PUSHLOCALNEAR, 15,	/* MCOMANDO */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', 'v', 'e', 'n', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* MCOMANDO */
/* 00983 */ HB_P_LINEOFFSET, 44,	/* 701 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 01006) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 85,	/* CPF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 01040) */
/* 01008 */ HB_P_LINEOFFSET, 45,	/* 702 */
	HB_P_PUSHLOCALNEAR, 15,	/* MCOMANDO */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 'c', 'p', 'f', ' ', 'N', 'O', 'T', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* MCOMANDO */
	HB_P_JUMPNEAR, 43,	/* 43 (abs: 01081) */
/* 01040 */ HB_P_LINEOFFSET, 46,	/* 703 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'F', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 01081) */
/* 01051 */ HB_P_LINEOFFSET, 47,	/* 704 */
	HB_P_PUSHLOCALNEAR, 15,	/* MCOMANDO */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 'c', 'g', 'c', ' ', 'N', 'O', 'T', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* MCOMANDO */
/* 01081 */ HB_P_LINEOFFSET, 49,	/* 706 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 01101) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 65,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 86,	/* CIDADE */
	HB_P_PUSHLOCALNEAR, 14,	/* MCIDADE */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 01135) */
/* 01103 */ HB_P_LINEOFFSET, 50,	/* 707 */
	HB_P_PUSHLOCALNEAR, 15,	/* MCOMANDO */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'i', 'd', 'a', 'd', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* MCOMANDO */
/* 01135 */ HB_P_LINEOFFSET, 52,	/* 709 */
	HB_P_PUSHLOCALNEAR, 15,	/* MCOMANDO */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'r', 'a', 'z', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* MCOMANDO */
/* 01160 */ HB_P_LINEOFFSET, 53,	/* 710 */
	HB_P_MESSAGE, 49, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 50,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 15,	/* MCOMANDO */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 16, 0,	/* CONS_CLI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01180 */ HB_P_LINEOFFSET, 54,	/* 711 */
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
/* 01204 */ HB_P_LINEOFFSET, 55,	/* 712 */
	HB_P_PUSHSYMNEAR, 51,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 01283) */
/* 01218 */ HB_P_LINEOFFSET, 56,	/* 713 */
	HB_P_PUSHSYMNEAR, 52,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'r', 'e', 'g', 'i', 's', 't', 'r', 'o', ' ', 'd', 'e', 's', 't', 'a', ' ', 'p', 'e', 's', 'q', 'u', 'i', 's', 'a', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 203, 251,	/* -1077 (abs: 00203) */
/* 01283 */ HB_P_LINEOFFSET, 59,	/* 716 */
	HB_P_LOCALNEARSETSTR, 6, 29, 0,	/* MTIT 29*/
	'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'c', 'o', 'm', ' ', 'L', 'I', 'M', 'I', 'T', 'E', ' ', 'E', 'S', 'T', 'O', 'U', 'R', 'A', 'D', 'O', 0, 
/* 01318 */ HB_P_LINEOFFSET, 60,	/* 717 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 01363) */
/* 01329 */ HB_P_LINEOFFSET, 61,	/* 718 */
	HB_P_PUSHLOCALNEAR, 6,	/* MTIT */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 6,	/* MTIT */
/* 01363 */ HB_P_LINEOFFSET, 64,	/* 721 */
	HB_P_PUSHSYMNEAR, 54,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'L', 'I', '_', 'L', 'I', 'M', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01393) */
	HB_P_JUMP, 93, 251,	/* -1187 (abs: 00203) */
/* 01393 */ HB_P_LINEOFFSET, 67,	/* 724 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 55, 0,	/* I */
/* 01399 */ HB_P_LINEOFFSET, 68,	/* 725 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 55, 0,	/* I */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_PUSHSYMNEAR, 51,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 60, 3,	/* 828 (abs: 02245) */
/* 01420 */ HB_P_LINEOFFSET, 69,	/* 726 */
	HB_P_PUSHSYMNEAR, 98,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01453 */ HB_P_LINEOFFSET, 70,	/* 727 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MQTD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 01471) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 11,	/* MQTD */
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_CLI */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01476) */
	HB_P_JUMP, 4, 3,	/* 772 (abs: 02245) */
/* 01476 */ HB_P_LINEOFFSET, 73,	/* 730 */
	HB_P_PUSHLOCALNEAR, 5,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 01494) */
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 11, 1,	/* 267 (abs: 01761) */
/* 01497 */ HB_P_LINEOFFSET, 74,	/* 731 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* MPAG 1*/
/* 01503 */ HB_P_LINEOFFSET, 75,	/* 732 */
	HB_P_PUSHLOCALNEAR, 5,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 01518) */
/* 01511 */ HB_P_LINEOFFSET, 76,	/* 733 */
	HB_P_PUSHSYMNEAR, 59,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01518 */ HB_P_LINEOFFSET, 78,	/* 735 */
	HB_P_PUSHSYMNEAR, 60,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 6,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 7,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 01533 */ HB_P_LINEOFFSET, 79,	/* 736 */
	HB_P_PUSHSYMNEAR, 61,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 01547 */ HB_P_LINEOFFSET, 80,	/* 737 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 01578 */ HB_P_LINEOFFSET, 81,	/* 738 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'F', 'o', 'n', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 01604 */ HB_P_LINEOFFSET, 82,	/* 739 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', ' ', ' ', ' ', ' ', ' ', 'L', 'i', 'm', 'i', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 01644 */ HB_P_LINEOFFSET, 83,	/* 740 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', ' ', ' ', ' ', ' ', 'C', 'o', 'm', 'p', 'r', 'a', 's', 0, 
	HB_P_DOSHORT, 1,
/* 01684 */ HB_P_LINEOFFSET, 84,	/* 741 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 01724 */ HB_P_LINEOFFSET, 85,	/* 742 */
	HB_P_PUSHSYMNEAR, 61,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 01738 */ HB_P_LINEOFFSET, 86,	/* 743 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 01761 */ HB_P_LINEOFFSET, 88,	/* 745 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01783) */
	HB_P_JUMP, 199, 1,	/* 455 (abs: 02235) */
/* 01783 */ HB_P_LINEOFFSET, 91,	/* 748 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 16,	/* MCONS_DUPR */
/* 01790 */ HB_P_LINEOFFSET, 92,	/* 749 */
	HB_P_MESSAGE, 49, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 50,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'v', 'a', 'l', 'o', 'r', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 47,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 16, 0,	/* MCONS_DUPR */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01892 */ HB_P_LINEOFFSET, 93,	/* 750 */
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
/* 01916 */ HB_P_LINEOFFSET, 94,	/* 751 */
	HB_P_PUSHSYMNEAR, 51,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MCONS_DUPR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01932) */
	HB_P_JUMP, 50, 1,	/* 306 (abs: 02235) */
/* 01932 */ HB_P_LINEOFFSET, 97,	/* 754 */
	HB_P_PUSHLOCALNEAR, 16,	/* MCONS_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01956) */
	HB_P_JUMP, 26, 1,	/* 282 (abs: 02235) */
/* 01956 */ HB_P_LINEOFFSET, 100,	/* 757 */
	HB_P_PUSHSYMNEAR, 61,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 01970 */ HB_P_LINEOFFSET, 101,	/* 758 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02024 */ HB_P_LINEOFFSET, 102,	/* 759 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02059 */ HB_P_LINEOFFSET, 103,	/* 760 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02114 */ HB_P_LINEOFFSET, 104,	/* 761 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MCONS_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02165 */ HB_P_LINEOFFSET, 105,	/* 762 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 16,	/* MCONS_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02227 */ HB_P_LINEOFFSET, 106,	/* 763 */
	HB_P_LOCALNEARADDINT, 9, 1, 0,	/* MTOT_CLI 1*/
/* 02233 */ HB_P_LINEOFFSET, 107,	/* 764 */
	HB_P_PUSHVARIABLE, 55, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 55, 0,	/* I */
	HB_P_JUMP, 187, 252,	/* -837 (abs: 01405) */
/* 02245 */ HB_P_LINEOFFSET, 108,	/* 765 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ':', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 02293 */ HB_P_LINEOFFSET, 109,	/* 766 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_CLI */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02327 */ HB_P_LINEOFFSET, 110,	/* 767 */
	HB_P_PUSHSYMNEAR, 59,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02334 */ HB_P_LINEOFFSET, 111,	/* 768 */
	HB_P_PUSHSYMNEAR, 68,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 02343 */ HB_P_LINEOFFSET, 112,	/* 769 */
	HB_P_PUSHSYMNEAR, 69,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 69,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 69,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 02384 */ HB_P_LINEOFFSET, 113,	/* 770 */
	HB_P_PUSHSYMNEAR, 70,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'L', 'I', '_', 'L', 'I', 'M', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 102, 247,	/* -2202 (abs: 00203) */
/* 02408 */ HB_P_LINEOFFSET, 115,	/* 772 */
	HB_P_PUSHSYMNEAR, 71,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02415 */ HB_P_LINEOFFSET, 116,	/* 773 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02420 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

